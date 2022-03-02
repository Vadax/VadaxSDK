/*
Copyright 2022 Steven Starr

Redistribution and use in source and binary forms, with or without modification, 
are permitted provided that the following conditions are met:

1. Redistributions of source code must retain the above copyright notice, this list 
of conditions and the following disclaimer.

2. Redistributions in binary form must reproduce the above copyright notice, this 
list of conditions and the following disclaimer in the documentation and/or other 
materials provided with the distribution.

3. Neither the name of the copyright holder nor the names of its contributors may 
be used to endorse or promote products derived from this software without specific 
prior written permission.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS" AND ANY 
EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES 
OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT 
SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, 
INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED 
TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR 
BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN 
ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH 
DAMAGE.
*/

#include "../Dir.h"
#include <dirent.h>

namespace Vtk
{
    // Constructor
    Dir::Dir()
    {
        std::cout << "created" << std::endl;
    }

    // Destructor
    Dir::~Dir()
    {
        std::cout << "destroyed" << std::endl;
    }

    //
    void Dir::absoluteFilePath()
    {
    
    }
    
    void Dir::absolutePath();
        void Dir::canonicalPath();
        bool Dir::cd();
        bool Dir::cdUp();
        uint Dir::count() const;
        void Dir::dirName() const;
        void Dir::entryInfoList();
        void Dir::entryList();
        bool Dir::exists();
        void Dir::filePath();
        void Dir::filter();
        bool Dir::isAbsolute() const;
        bool Dir::isEmpty() const;
        bool Dir::isReadable() const;
        bool Dir::isRelative() const;
        bool Dir::isRoot() const;
        bool Dir::makeAbsolute();
        bool Dir::mkdir() const;
        bool Dir::mkpath() const;
        void Dir::nameFilter() const;
        void Dir::path() const;
        void Dir::refresh() const;
        void relativeFilePath() const;
        bool remove();
        bool removeRecursively();
        bool rename();
        bool rmdir() const;
        bool rmpath() const;
        void setFilter();
        void setNameFilter();
        void setPath();
        void setSorting();
        void sorting() const;
        void swap();
}
