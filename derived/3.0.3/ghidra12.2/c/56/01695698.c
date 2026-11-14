
uint FUN_01695698(long param_1,long param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = *(uint *)(param_2 + 8);
  if ((DAT_05233970 <= (int)uVar2 && (int)uVar2 <= DAT_05233980) &&
     (iVar3 = *(int *)(param_2 + 0xc), DAT_05233974 <= iVar3 && iVar3 <= DAT_05233984)) {
    uVar1 = uVar2 + iVar3 * 0x200;
    if (uVar1 >> 0x11 != 0) {
      return 0;
    }
    param_3 = *(uint *)(param_1 + (ulong)(uVar1 >> 5) * 4 + 8) >> (ulong)(uVar2 & 0x1f) & 1;
  }
  return param_3 & 1;
}

