#ifndef __ELF_BLOB_HPP__
#define __ELF_BLOB_HPP__

#include <cstddef>

namespace ELF {

class Blob {
public:
  Blob(const char * data, size_t length);
  virtual ~Blob() {}
  
  virtual const char * GetData() const;
  virtual size_t GetLength() const;
  
protected:
  const char * data;
  size_t length;
};

}

#endif
