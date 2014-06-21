#include "section-table.hpp"
#include "header.hpp"

namespace ELF {

SectionTable::SectionTable(Header & _header) : header(_header) {
}

bool SectionTable::Init() {
  return true;
}

}
