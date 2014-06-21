#include "section-table.hpp"
#include "program-table.hpp"
#include "header.hpp"
#include "blob.hpp"

namespace ELF {

class File {
public:
  File(Blob * blob);
  ~File();
  
  bool Init();
  
  const Blob & GetBlob() const;
  const Header & GetHeader() const;
  const SectionTable & GetSectionTable() const;
  const ProgramTable & GetProgramTable() const;
  
protected:
  Blob * blob;
  Header header;
  SectionTable sectionTable;
  ProgramTable programTable;
};

}