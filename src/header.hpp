#ifndef __ELF_HEADER_HPP__
#define __ELF_HEADER_HPP__

namespace ELF {

class File;

class Header {
public:
  Header(File & file);
  bool Init();
};

}

#endif
