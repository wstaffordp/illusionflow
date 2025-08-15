### IllusionFlow

---

[![IllusionFlow](https://repository-images.githubusercontent.com/1038699886/9bf34d11-96b6-4969-811c-74d52b197af3 "IllusionFlow")](https://github.com/wstaffordp/illusionflow/tree/master/src)

---

IllusionFlow is a large-period, statistically-strong PRNG that outperforms PCG64, Xoroshiro and Xoshiro. Anyone is free to use it without warranty.

---

#### IllusionFlow64

`illusionflow64` is a PRNG function that generates a 64-bit, pseudorandom, unsigned integer from 64-bit state integers.

It accepts the following argument.

1. `s` is the `struct illusionflow64_s` pointer that contains the state. `a` must be seeded with `0` and each remaining state integer must be seeded with any `uint64_t` value.

The return value data type is `uint64_t`.

It has a minimum period of 2²⁵⁶ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁶⁴ numbers and zeroland escapes quickly after 3 subsequent number generations.

Up to 2⁶⁴ parallel states each have a non-overlapping cycle of at least 2⁶⁴ numbers by seeding `a` with `0`, seeding `b` with non-overlapping values, seeding `c` with `b + 1` and seeding `d` and `e` with any combination of overlapping values. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

In conclusion, IllusionFlow64 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS and XSL RR RR variants of PCG64 and all 64-bit variants of both Xoroshiro and Xoshiro.

---

#### IllusionFlow32

`illusionflow32` is a PRNG function that generates a 32-bit, pseudorandom, unsigned integer from 32-bit state integers.

It accepts the following argument.

1. `s` is the `struct illusionflow32_s` pointer that contains the state. `a` must be seeded with `0` and each remaining state integer must be seeded with any `uint32_t` value.

The return value data type is `uint32_t`.

It has a minimum period of 2¹²⁸ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2³² numbers and zeroland escapes quickly after 3 subsequent number generations.

Up to 2³² parallel states each have a non-overlapping cycle of at least 2³² numbers by seeding `a` with `0`, seeding `b` with non-overlapping values, seeding `c` with `b + 1` and seeding `d` and `e` with any combination of overlapping values. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

In conclusion, IllusionFlow32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to all 32-bit variants of both Xoroshiro and Xoshiro.

---

#### IllusionFlow16

`illusionflow16` is a PRNG function that generates a 16-bit, pseudorandom, unsigned integer from 16-bit state integers.

It accepts the following argument.

1. `s` is the `struct illusionflow16_s` pointer that contains the state. `a` must be seeded with `0` and each remaining state integer must be seeded with any `uint16_t` value.

The return value data type is `uint16_t`.

It has a minimum period of 2⁶⁴ without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2¹⁶ numbers and zeroland escapes quickly after 3 subsequent number generations.

Up to 2¹⁶ parallel states each have a non-overlapping cycle of at least 2¹⁶ numbers by seeding `a` with `0`, seeding `b` with non-overlapping values, seeding `c` with `b + 1` and seeding `d` and `e` with any combination of overlapping values. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

In conclusion, IllusionFlow16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to all 16-bit variants of both Xoroshiro and Xoshiro.

---

#### IllusionFlow8

`illusionflow8` is a PRNG function that generates an 8-bit, pseudorandom, unsigned integer from 8-bit state integers.

It accepts the following argument.

1. `s` is the `struct illusionflow8_s` pointer that contains the state. `a` must be seeded with `0` and each remaining state integer must be seeded with any `uint8_t` value.

The return value data type is `uint8_t`.

It has a minimum period of 2³² without broken cycles. Furthermore, a full cycle generates at least 1 of each number from a range of 2⁸ numbers and zeroland escapes quickly after 3 subsequent number generations.

Up to 2⁸ parallel states each have a non-overlapping cycle of at least 2⁸ numbers by seeding `a` with `0`, seeding `b` with non-overlapping values, seeding `c` with `b + 1` and seeding `d` and `e` with any combination of overlapping values. The first several generated numbers from each parallel cycle should be skipped to avoid correlations.

In conclusion, IllusionFlow8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to all 8-bit variants of both Xoroshiro and Xoshiro.
