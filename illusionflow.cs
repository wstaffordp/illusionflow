using System;

public class IllusionFlow64 {
  public ulong a;
  public ulong b;
  public ulong c;
  public ulong d;
  public ulong e;

  public ulong Next() {
    ulong mix = b + d;

    a++;

    if (a < 1) {
      c ^= b;
      e += d;
      b += e;
      d ^= c;
      return mix;
    }

    b = ((b << 35) | (b >> 29)) ^ c;
    c += 111111111111111111;
    d = (mix << 23) | (mix >> 41);
    return mix;
  }
}

public class IllusionFlow32 {
  public uint a;
  public uint b;
  public uint c;
  public uint d;
  public uint e;

  public uint Next() {
    uint mix = b + d;

    a++;

    if (a < 1) {
      c ^= b;
      e += d;
      b += e;
      d ^= c;
      return mix;
    }

    b = ((b << 17) | (b >> 15)) ^ c;
    c += 1111111111;
    d = (mix << 13) | (mix >> 19);
    return mix;
  }
}

public class IllusionFlow16 {
  public ushort a;
  public ushort b;
  public ushort c;
  public ushort d;
  public ushort e;

  public ushort Next() {
    ushort mix = (ushort) (b + d);

    a++;

    if (a < 1) {
      c ^= b;
      e += d;
      b += e;
      d ^= c;
      return mix;
    }

    b = (ushort) (((b << 9) | (b >> 7)) ^ c);
    c += 11111;
    d = (ushort) ((mix << 6) | (mix >> 10));
    return mix;
  }
}

public class IllusionFlow8 {
  public byte a;
  public byte b;
  public byte c;
  public byte d;
  public byte e;

  public byte Next() {
    byte mix = (byte) (b + d);

    a++;

    if (a < 1) {
      c ^= b;
      e += d;
      b += e;
      d ^= c;
      return mix;
    }

    b = (byte) (((b << 3) | (b >> 5)) ^ c);
    c += 11;
    d = (byte) ((mix << 6) | (mix >> 2));
    return mix;
  }
}
