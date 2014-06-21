#include "file.hpp"

namespace ELF {

File::File(Blob * _blob)
  : blob(_blob), header(*this), sectionTable(header), programTable(header) {
}

File::~File() {
  delete blob;
}

bool File::Init() {
  if (!header.Init()) return false;
  if (!sectionTable.Init()) return false;
  return programTable.Init();
}

const Blob & File::GetBlob() const {
  return *blob;
}

const Header & File::GetHeader() const {
  return header;
}

const SectionTable & File::GetSectionTable() const {
  return sectionTable;
}

const ProgramTable & File::GetProgramTable() const {
  return programTable;
}

}
