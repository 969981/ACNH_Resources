
undefined8 FUN_01696354(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = *(uint *)(param_2 + 8);
  if ((int)uVar1 < DAT_05233970 || DAT_05233980 < (int)uVar1) {
    return 0;
  }
  uVar2 = *(uint *)(param_2 + 0xc);
  if ((int)uVar2 < DAT_05233974 || DAT_05233984 < (int)uVar2) {
    return 0;
  }
  uVar2 = (uVar2 & 0x1fffffe) * 0x80 + ((int)uVar1 >> 1);
  if (uVar2 >> 0xf == 0) {
    param_1 = param_1 + (ulong)(uVar2 >> 5) * 4;
    *(uint *)(param_1 + 8) =
         *(uint *)(param_1 + 8) & (1 << (ulong)(uVar1 >> 1 & 0x1f) ^ 0xffffffffU);
  }
  return 1;
}

