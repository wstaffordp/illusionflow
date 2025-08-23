### IllusionFlow

---

[![IllusionFlow](https://repository-images.githubusercontent.com/1043093224/922ba6a9-1a65-49b8-bae4-630fe462402f "IllusionFlow")](https://github.com/wstaffordp/illusionflow#illusionflow64)

---

IllusionFlow is a large-period, statistically-strong PRNG that outperforms PCG64, Xoroshiro and Xoshiro. Anyone is free to use it without warranty.

---

#### IllusionFlow64

IllusionFlow64 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to RXS M XS and XSL RR RR variants of PCG64 and all 64-bit variants of both Xoroshiro and Xoshiro.

It has a period of at least 2²⁵⁶.

Seeding `a` with `0`, seeding `b` with non-overlapping integers, seeding `c` with `b + 1` and seeding the remaining state with overlapping integers behaves as a jump function with up to 2⁶⁴ parallel instances that each have a non-overlapping period of at least 2⁶⁴. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be seeded with `0` and each remaining state integer must be assigned a seed.

##### C

`illusionflow64` generates and returns a pseudorandom `uint64_t` integer, provided the implementation supports a 64-bit, unsigned integral type for `uint64_t`.

##### C#

`Next` from `IllusionFlow64` generates and returns a pseudorandom `ulong` integer.

---

#### IllusionFlow32

IllusionFlow32 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to all 32-bit variants of both Xoroshiro and Xoshiro.

It has a period of at least 2¹²⁸.

Seeding `a` with `0`, seeding `b` with non-overlapping integers, seeding `c` with `b + 1` and seeding the remaining state with overlapping integers behaves as a jump function with up to 2³² parallel instances that each have a non-overlapping period of at least 2³². The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be seeded with `0` and each remaining state integer must be assigned a seed.

##### C

`illusionflow32` generates and returns a pseudorandom `uint32_t` integer, provided the implementation supports a 32-bit, unsigned integral type for `uint32_t`.

##### C#

`Next` from `IllusionFlow32` generates and returns a pseudorandom `uint` integer.

---

#### IllusionFlow16

IllusionFlow16 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to all 16-bit variants of both Xoroshiro and Xoshiro.

It has a period of at least 2⁶⁴.

Seeding `a` with `0`, seeding `b` with non-overlapping integers, seeding `c` with `b + 1` and seeding the remaining state with overlapping integers behaves as a jump function with up to 2¹⁶ parallel instances that each have a non-overlapping period of at least 2¹⁶. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be seeded with `0` and each remaining state integer must be assigned a seed.

##### C

`illusionflow16` generates and returns a pseudorandom `uint16_t` integer, provided the implementation supports a 16-bit, unsigned integral type for `uint16_t`.

##### C#

`Next` from `IllusionFlow16` generates and returns a pseudorandom `ushort` integer.

---

#### IllusionFlow8

IllusionFlow8 provides enhanced parallelism, period, speed and statistical test results as an ideal alternative to all 8-bit variants of both Xoroshiro and Xoshiro.

It has a period of at least 2³².

Seeding `a` with `0`, seeding `b` with non-overlapping integers, seeding `c` with `b + 1` and seeding the remaining state with overlapping integers behaves as a jump function with up to 2⁸ parallel instances that each have a non-overlapping period of at least 2⁸. The first several results from each parallel instance should be skipped.

In non-parallel instances, `a` must be seeded with `0` and each remaining state integer must be assigned a seed.

##### C

`illusionflow8` generates and returns a pseudorandom `uint8_t` integer, provided the implementation supports an 8-bit, unsigned integral type for `uint8_t`.

##### C#

`Next` from `IllusionFlow8` generates and returns a pseudorandom `byte` integer.
