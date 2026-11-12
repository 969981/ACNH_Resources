
ulong FUN_006bbcd0(undefined1 param_1 [16])

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  
  uVar1 = 0;
  if ((-1 < (long)param_1._8_8_) && (uVar2 = param_1._14_2_ & 0x7fff, 0x3ffe < uVar2)) {
    if (uVar2 - 0x403f < 0xffffffc0) {
      return 0xffffffffffffffff;
    }
    uVar2 = 0x406f - uVar2;
    uVar3 = param_1._8_8_ & 0xffffffffffff | 0x1000000000000;
    uVar1 = uVar3 >> ((ulong)uVar2 & 0x3f);
    if ((uVar2 & 0x40) == 0) {
      uVar1 = (uVar3 << 1) << ((ulong)~uVar2 & 0x3f) | param_1._0_8_ >> ((ulong)uVar2 & 0x3f);
    }
  }
  return uVar1;
}

