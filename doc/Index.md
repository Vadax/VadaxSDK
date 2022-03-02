dirent.h

dirent.h is the header in the C POSIX library for the C programming language that contains constructs that facilitate directory traversing. The  function is not part of the C standard, but is considered  "pseudo-standard" and is usually portable between platforms.



## Functions



```c
int closedir(DIR* dirp)
```

Closes the directory stream referred to by `dirp`. Upon return, `dirp` may no longer point to an accessible object of the type DIR. If a file  descriptor is used to implement type DIR, that file descriptor will be  closed. Upon successful completion, closedir() returns 0. Otherwise, -1  is returned and errno is set to indicate the error.

`errno` Errors: EBADF means `dirp` does not refer to an open directory stream, EINTR means the function was interrupted by a signal.



```c
DIR* opendir(const char* dirname)
```

Opens a directory stream corresponding to the directory named bydirname. The directory stream is positioned at the first entry. If the type DIR  is implemented using a file descriptor, applications will only be able  to open up to a total ofOPEN_MAXfiles and directories.  Upon successful completion, opendir() returns a pointer to an object of  type DIR. Otherwise, a null pointer is returned and errno is set to  indicate the error.

errno` Errors: EACCES means the search permission is denied  for the component of the path prefix of dirname or read permission is  denied for dirname. ELOOP means too many symbolic links were encountered in resolving path. ENAMETOOLONG means the length of the dirname  argument exceeds PATH_MAX, or a pathname component is longer than  NAME_MAX. ENOENT means a component of dirname does not name an existing  directory or dirname is an empty string. ENOTDIR means a component of  dirname is not a directory. EMFILE means OPEN_MAX file descriptors are  currently open in the calling process. ENAMETOOLONG means the pathname  resolution of a symbolic link produced an intermediate result whose  length exceeds PATH_MAX. ENFILE means there are too many files are  currently open in the system.



```c
struct dirent* readdir(DIR* dirp)
```

Returns a pointer to a structure representing the directory entry at the current position in the directory stream specified by the argument `dirp`, and positions the directory stream at the next entry. It returns a null pointer upon reaching the end of the directory stream. If entries for  dot or dot-dot exist, one entry will be returned for dot and one entry  will be returned for dot-dot; otherwise they will not be returned. When  an error is encountered, a null pointer is returned and errno is set to  indicate the error. When the end of the directory is encountered, a null pointer is returned and errno is not changed.

The memory location pointed to by the return value is managed by the  library and may change on subsequent calls to readdir. It should not be [free](https://en.wikibooks.org/w/index.php?title=Free_(programming)&action=edit&redlink=1)'d by the user.

`errno` Errors: EOVERFLOW means one of the values in the structure to be returned cannot be represented correctly. EBADF means `dirp` does not refer to an open directory stream. ENOENT means the current position of the directory stream is invalid.





**Code Example **

```c
#include <stdio.h>
#include <dirent.h>

int listdir(const char *path) 
{
  struct dirent *entry;
  DIR *dp;

  dp = opendir(path);
  if (dp == NULL) 
  {
    perror("opendir");
    return -1;
  }

  while((entry = readdir(dp)))
    puts(entry->d_name);

  closedir(dp);
  return 0;
}

int main(int argc, char **argv) {
  int counter = 1;

  if (argc == 1)
	listdir(".");

  while (++counter <= argc) {
    printf("\nListing %s...\n", argv[counter-1]);
    listdir(argv[counter-1]);
  }

  return 0;
}
```
