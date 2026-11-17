
bool FUN_02c9b870(long *param_1,long param_2,long param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  int iVar8;
  int iVar9;
  
  if (((param_2 != 0) && ((char)param_1[2] == '\0')) && (*(int *)(param_2 + 0x208) != 0)) {
    iVar8 = 0;
    do {
      if (*(long *)(*(long *)(param_2 + 0x210) + (long)iVar8 * 8) == param_3) {
        if (iVar8 < 0) {
          return false;
        }
        iVar4 = *(int *)(param_2 + 0x2e8);
        iVar9 = *(int *)(param_2 + 0x430) - *(int *)(param_2 + 0x438);
        iVar6 = 0;
        if (iVar4 != 0) {
          iVar6 = iVar8 / iVar4;
        }
        if ((*(byte *)(param_2 + 1000) >> 1 & 1) == 0) {
          iVar9 = iVar9 + iVar6;
        }
        else {
          uVar5 = *(uint *)(param_2 + 0x434);
          uVar3 = 0;
          if ((int)uVar5 < iVar9) {
            uVar3 = ~uVar5;
          }
          if (iVar9 < 0) {
            uVar3 = uVar5 + 1;
          }
          iVar1 = iVar9 + iVar6 + uVar3;
          iVar9 = *(int *)(param_2 + 0x3d0);
          iVar2 = 0;
          if (iVar9 <= iVar1) {
            iVar2 = iVar9;
          }
          if (-1 < iVar1) {
            iVar9 = -iVar2;
          }
          iVar9 = iVar9 + iVar1;
        }
        iVar8 = (iVar9 * iVar4 - iVar6 * iVar4) + iVar8;
        if (iVar8 < 0) {
          return false;
        }
        if (*(int *)(param_2 + 0x3cc) <= iVar8) {
          return false;
        }
        uVar7 = (**(code **)(*param_1 + 0x20))(param_1,iVar8);
        if ((uVar7 & 1) != 0) {
          (**(code **)(*param_1 + 0x28))(param_1,param_2);
          (**(code **)(*param_1 + 0x18))(param_1,iVar8);
          return true;
        }
        if (*(char *)((long)param_1 + 0x11) == '\0') {
          (**(code **)(*param_1 + 0x28))(param_1,param_2);
          (**(code **)(*param_1 + 0x18))(param_1,0xffffffff);
          return false;
        }
        return *(int *)((long)param_1 + 0xc) != 0;
      }
      iVar8 = iVar8 + 1;
    } while (*(int *)(param_2 + 0x208) != iVar8);
  }
  return false;
}

