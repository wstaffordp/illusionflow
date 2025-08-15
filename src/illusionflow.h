#ifndef ILLUSIONFLOW_H
#define ILLUSIONFLOW_H

#include <stdint.h>

struct illusionflow64_s {
  uint64_t a;
  uint64_t b;
  uint64_t c;
  uint64_t d;
  uint64_t e;
};

struct illusionflow32_s {
  uint32_t a;
  uint32_t b;
  uint32_t c;
  uint32_t d;
  uint32_t e;
};

struct illusionflow16_s {
  uint16_t a;
  uint16_t b;
  uint16_t c;
  uint16_t d;
  uint16_t e;
};

struct illusionflow8_s {
  uint8_t a;
  uint8_t b;
  uint8_t c;
  uint8_t d;
  uint8_t e;
};

uint64_t illusionflow64(struct illusionflow64_s *s);

uint32_t illusionflow32(struct illusionflow32_s *s);

uint16_t illusionflow16(struct illusionflow16_s *s);

uint8_t illusionflow8(struct illusionflow8_s *s);

#endif
