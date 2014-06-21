#include "program-table.hpp"
#include "header.hpp"

namespace ELF {

ProgramTable::ProgramTable(Header & _header) : header(_header) {
}

bool ProgramTable::Init() {
  return true;
}

}
