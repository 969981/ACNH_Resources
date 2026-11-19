
uint FUN_03865200(long param_1,long param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if ((param_2 == 0) || (*(int *)(param_1 + 0x208) == 0)) {
    return 0xffffffff;
  }
  iVar7 = 0;
  do {
    if (*(long *)(*(long *)(param_1 + 0x210) + (long)iVar7 * 8) == param_2) {
      if (iVar7 < 0) {
        return 0xffffffff;
      }
      iVar4 = *(int *)(param_1 + 0x2e8);
      iVar8 = *(int *)(param_1 + 0x430) - *(int *)(param_1 + 0x438);
      iVar6 = 0;
      if (iVar4 != 0) {
        iVar6 = iVar7 / iVar4;
      }
      if ((*(byte *)(param_1 + 1000) >> 1 & 1) == 0) {
        iVar8 = iVar8 + iVar6;
      }
      else {
        uVar5 = *(uint *)(param_1 + 0x434);
        uVar2 = 0;
        if ((int)uVar5 < iVar8) {
          uVar2 = ~uVar5;
        }
        if (iVar8 < 0) {
          uVar2 = uVar5 + 1;
        }
        iVar1 = iVar8 + iVar6 + uVar2;
        iVar8 = *(int *)(param_1 + 0x3d0);
        iVar3 = 0;
        if (iVar8 <= iVar1) {
          iVar3 = iVar8;
        }
        if (-1 < iVar1) {
          iVar8 = -iVar3;
        }
        iVar8 = iVar8 + iVar1;
      }
      uVar2 = (iVar8 * iVar4 - iVar6 * iVar4) + iVar7;
      if (*(int *)(param_1 + 0x3cc) <= (int)uVar2 || 0x7fffffff < uVar2) {
        uVar2 = 0xffffffff;
      }
      return uVar2;
    }
    iVar7 = iVar7 + 1;
  } while (*(int *)(param_1 + 0x208) != iVar7);
  return 0xffffffff;
}

