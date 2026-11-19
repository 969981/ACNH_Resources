
uint FUN_038652c8(long param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  
  uVar6 = 0xffffffff;
  if (-1 < param_2) {
    iVar3 = *(int *)(param_1 + 0x2e8);
    iVar7 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
    iVar5 = 0;
    if (iVar3 != 0) {
      iVar5 = param_2 / iVar3;
    }
    if ((*(byte *)(param_1 + 1000) >> 1 & 1) == 0) {
      iVar7 = iVar7 + iVar5;
    }
    else {
      uVar4 = *(uint *)(param_1 + 0x434);
      uVar6 = 0;
      if ((int)uVar4 < iVar7) {
        uVar6 = ~uVar4;
      }
      if (iVar7 < 0) {
        uVar6 = uVar4 + 1;
      }
      iVar1 = iVar7 + iVar5 + uVar6;
      iVar7 = *(int *)(param_1 + 0x3d0);
      iVar2 = 0;
      if (iVar7 <= iVar1) {
        iVar2 = iVar7;
      }
      if (-1 < iVar1) {
        iVar7 = -iVar2;
      }
      iVar7 = iVar7 + iVar1;
    }
    uVar6 = (param_2 - iVar5 * iVar3) + iVar7 * iVar3;
    if (*(int *)(param_1 + 0x3cc) <= (int)uVar6 || 0x7fffffff < uVar6) {
      uVar6 = 0xffffffff;
    }
  }
  return uVar6;
}

