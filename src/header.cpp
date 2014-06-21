#include "header.hpp"
#include "file.hpp"

namespace ELF {

Header::Header(const File & _file) : file(_file) {
}

bool Header::Init() {
  return true;
}

const File & Header::GetFile() const {
  return file;
}

}
