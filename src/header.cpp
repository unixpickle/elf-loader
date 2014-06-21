#include "header.hpp"
#include "file.hpp"

namespace ELF {

Header::Header(const File & _file) : file(_file) {
}

bool Header::Init() {
  // assert that the blob is large enough to store an ELF64 header
  if (file.GetBlob().GetLength() < 0x40) {
    return false;
  }
  
  const uint8_t * data = (const uint8_t *)file.GetBlob().GetData();
  if (data[4] != 2) return false; // assert 64-bit
  info = (Header64 *)data;
  
  return true;
}

const File & Header::GetFile() const {
  return file;
}

}
