#include "blob.hpp"

namespace ELF {

Blob::Blob(const char * _data, size_t _length) : data(_data), length(_length) {
}

const char * Blob::GetData() const {
  return data;
}

size_t Blob::GetLength() const {
  return length;
}

}
