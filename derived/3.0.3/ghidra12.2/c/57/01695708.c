
undefined8 FUN_01695708(long param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_2 + 8);
  if ((int)uVar2 < DAT_05233970 || DAT_05233980 < (int)uVar2) {
    return 0;
  }
  iVar3 = *(int *)(param_2 + 0xc);
  if (iVar3 < DAT_05233974 || DAT_05233984 < iVar3) {
    return 0;
  }
  uVar1 = uVar2 + iVar3 * 0x200;
  if (uVar1 >> 0x11 == 0) {
    param_1 = param_1 + (ulong)(uVar1 >> 5) * 4;
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) | 1 << (ulong)(uVar2 & 0x1f);
  }
  return 1;
}

