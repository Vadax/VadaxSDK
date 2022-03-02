
https://codeload.github.com/jtv/libpqxx/tar.gz/refs/tags/7.7.0

SRC[0]=""
SRC[0]="https://github.com/aws/aws-sdk-cpp.git"
SRC[0]="https://github.com/libarchive/libarchive.git"
SRC[0]="https://git.postgresql.org/git/postgresql.git"                                  
								

# download src packages to thirdpart/ dir
for i in "${SRC[@]}"
do
   wget "$i" -P src/
done
