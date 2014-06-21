#ifndef __ELF_PROGRAM_TABLE_HPP__
#define __ELF_PROGRAM_TABLE_HPP__

namespace ELF {

class Header;

class ProgramTable {
public:
  ProgramTable(Header & header);
  bool Init();
};

}

#endif
