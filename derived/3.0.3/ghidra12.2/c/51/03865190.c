
uint FUN_03865190(long param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = 0xffffffff;
  if (param_2 < *(int *)(param_1 + 0x3d4)) {
    iVar1 = *(int *)(param_1 + 0x2e8);
    iVar3 = 0;
    if (iVar1 != 0) {
      iVar3 = param_2 / iVar1;
    }
    iVar5 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
    if ((*(byte *)(param_1 + 1000) >> 1 & 1) != 0) {
      uVar2 = *(uint *)(param_1 + 0x434);
      uVar4 = 0;
      if ((int)uVar2 < iVar5) {
        uVar4 = ~uVar2;
      }
      if (iVar5 < 0) {
        uVar4 = uVar2 + 1;
      }
      iVar5 = uVar4 + iVar5;
    }
    uVar4 = (param_2 - iVar3 * iVar1) + (iVar3 - iVar5) * iVar1;
    if (*(int *)(param_1 + 0x208) <= (int)uVar4 || 0x7fffffff < uVar4) {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

