#ifndef __ELF_HEADER_HPP__
#define __ELF_HEADER_HPP__

namespace ELF {

class File;

class Header {
public:
  Header(const File & file);
  bool Init();
  
  const File & GetFile() const;
  
protected:
  const File & file;
};

}

#endif
