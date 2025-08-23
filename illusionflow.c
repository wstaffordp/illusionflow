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

uint64_t illusionflow64(struct illusionflow64_s *s) {
  uint64_t mix = s->b + s->d;

  s->a++;

  if (s->a < 1) {
    s->c ^= s->b;
    s->e += s->d;
    s->b += s->e;
    s->d ^= s->c;
    return mix;
  }

  s->b = ((s->b << 35) | (s->b >> 29)) ^ s->c;
  s->c += 111111111111111111;
  s->d = (mix << 23) | (mix >> 41);
  return mix;
}

uint32_t illusionflow32(struct illusionflow32_s *s) {
  uint32_t mix = s->b + s->d;

  s->a++;

  if (s->a < 1) {
    s->c ^= s->b;
    s->e += s->d;
    s->b += s->e;
    s->d ^= s->c;
    return mix;
  }

  s->b = ((s->b << 17) | (s->b >> 15)) ^ s->c;
  s->c += 1111111111;
  s->d = (mix << 13) | (mix >> 19);
  return mix;
}

uint16_t illusionflow16(struct illusionflow16_s *s) {
  uint16_t mix = s->b + s->d;

  s->a++;

  if (s->a < 1) {
    s->c ^= s->b;
    s->e += s->d;
    s->b += s->e;
    s->d ^= s->c;
    return mix;
  }

  s->b = ((s->b << 9) | (s->b >> 7)) ^ s->c;
  s->c += 11111;
  s->d = (mix << 6) | (mix >> 10);
  return mix;
}

uint8_t illusionflow8(struct illusionflow8_s *s) {
  uint8_t mix = s->b + s->d;

  s->a++;

  if (s->a < 1) {
    s->c ^= s->b;
    s->e += s->d;
    s->b += s->e;
    s->d ^= s->c;
    return mix;
  }

  s->b = ((s->b << 3) | (s->b >> 5)) ^ s->c;
  s->c += 11;
  s->d = (mix << 6) | (mix >> 2);
  return mix;
}
