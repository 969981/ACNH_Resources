
undefined4 FUN_0220fcc4(byte *param_1,uint param_2)

{
  byte bVar1;
  
  bVar1 = *param_1;
  if (((bVar1 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[bVar1])) &&
     (((uint)(&DAT_053e6eb8)[bVar1] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
    if ((bVar1 == 0xd) && ((param_2 & 1) == 0)) {
      return 3;
    }
    bVar1 = FUN_020fd7d8();
    if (bVar1 < 8) {
      return *(undefined4 *)(&DAT_04058920 + (long)(char)bVar1 * 4);
    }
  }
  return 1;
}

