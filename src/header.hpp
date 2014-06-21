#ifndef __ELF_HEADER_HPP__
#define __ELF_HEADER_HPP__

#include <cstdint>

namespace ELF {

class File;

enum ELFType {
  ELFTypeRelocatable = 1,
  ELFTypeExecutable,
  ELFTypeShared,
  ELFTypeCore,
};

class Header {
public:
  Header(const File & file);
  bool Init();
  
  const File & GetFile() const;
  
protected:
  const File & file;
  
  struct BaseHeader {
    uint32_t magic;
    uint8_t wordSize;
    uint8_t endian;
    uint8_t version1;
    uint8_t abi;
    uint8_t abiVersion;
    char padding[7];
    uint16_t type;
    uint16_t machine;
    uint32_t version2;
  } __attribute__((packed));
  
  struct FooterInfo {
    uint32_t flags;
    uint16_t ehSize;
    uint16_t phEntrySize;
    uint16_t phEntryCount;
    uint16_t shEntrySize;
    uint16_t shEntryCount;
    uint16_t sectionNamesIndex;
  } __attribute__((packed));
  
  struct Header64 : public BaseHeader {
    uint64_t entry;
    uint64_t phOff;
    uint64_t shOff;
    FooterInfo footer;
  } __attribute__((packed));
  
  Header64 * info; // in the future, this may be a union if I add ELF32
};

}

#endif
