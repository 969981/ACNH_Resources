
bool FUN_01da51e0(long param_1,long *param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined4 uVar9;
  int iVar10;
  long lVar11;
  long lVar12;
  
  if (*(int *)(param_1 + 0x68) == 0 && *(int *)(param_1 + 0xb0) == 0) {
    if ((*(int *)(DAT_05358908 + 0x78) == 0) || (1 < *(int *)(DAT_05358908 + 0xc4) - 1U)) {
      uVar9 = 0;
      if (**(long **)(DAT_053719b8 + 8) == 0 && (*(long **)(DAT_053719b8 + 8))[1] == 0) {
        uVar9 = 3;
      }
    }
    else {
      uVar9 = 2;
    }
  }
  else {
    uVar9 = 1;
  }
  *(undefined4 *)(param_1 + 0x168) = uVar9;
  iVar5 = *(int *)(param_1 + 0x168);
  if (iVar5 == 0) {
    uVar1 = 0;
    if (*(uint *)(param_1 + 0x28) != 0xffffffff) {
      uVar1 = *(uint *)(param_1 + 0x28);
    }
    if (*(uint *)(param_1 + 8) <= uVar1) {
      uVar1 = 0;
    }
    FUN_006d0b40(*(undefined8 *)(param_1 + 0x38),
                 *(undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar1 * 0x40 + 0x28));
    **(undefined8 **)(param_1 + 0x160) = *(undefined8 *)(param_1 + 0x38);
    *(undefined8 *)(*(long *)(param_1 + 0x160) + 0x14) = 0;
    lVar8 = param_2[2];
    if (((int)lVar8 != 0) &&
       (*(int *)(*(long *)(param_1 + 0x160) + 0x18) < *(int *)(*(long *)(param_1 + 0x160) + 0x10)))
    {
      iVar10 = 0;
      do {
        lVar11 = *(long *)(param_1 + 0x160);
        iVar6 = *(int *)(lVar11 + 0x18);
        iVar7 = *(int *)(lVar11 + 0x10);
        if (iVar6 < iVar7) {
          iVar4 = *(int *)((long)param_2 + 0xc);
          lVar12 = *param_2;
          iVar2 = 0;
          if ((int)param_2[1] <= iVar10 + iVar4) {
            iVar2 = (int)param_2[1];
          }
          *(int *)(lVar11 + 0x18) = iVar6 + 1;
          iVar6 = *(int *)(lVar11 + 0x14) + iVar6;
          iVar3 = 0;
          if (iVar7 <= iVar6) {
            iVar3 = iVar7;
          }
          *(undefined8 *)(*(long *)(lVar11 + 8) + (long)(iVar6 - iVar3) * 8) =
               *(undefined8 *)(lVar12 + (long)(iVar10 + (iVar4 - iVar2)) * 8);
        }
        iVar10 = iVar10 + 1;
      } while ((int)lVar8 != iVar10);
    }
    *(byte *)(param_1 + 0x1b1) = param_3 & 1;
    *(undefined4 *)(param_1 + 0x138) = 5;
    FUN_03ebb160(param_1 + 0xa8,1);
  }
  return iVar5 == 0;
}

