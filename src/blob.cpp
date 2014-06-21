#include "blob.hpp"

namespace ELF {

Blob(const char * _data, size_t _length) : data(_data), length(_length) {
}

const char * GetData() const {
  return data;
}

size_t GetLength() const {
  return length;
}

}
