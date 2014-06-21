#ifndef __ELF_SECTION_TABLE_HPP__
#define __ELF_SECTION_TABLE_HPP__

namespace ELF {

class Header;

class SectionTable {
public:
  SectionTable(Header & header);
  bool Init();
  
protected:
  Header & header;
};

}

#endif
