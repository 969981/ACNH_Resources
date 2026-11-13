
bool FUN_011e2720(long param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_1 + 8);
  if ((((int)uVar1 < DAT_05233970 || DAT_05233980 < (int)uVar1) ||
      (uVar2 = *(uint *)(param_1 + 0xc), (int)uVar2 < DAT_05233974 || DAT_05233984 < (int)uVar2)) ||
     (uVar2 = (uVar2 & 0x1fffffe) * 0x80 + ((int)uVar1 >> 1), uVar2 >> 0xf != 0)) {
    return true;
  }
  return (*(uint *)(&DAT_05145e18 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar1 >> 1 & 0x1f) & 1) == 0
  ;
}

