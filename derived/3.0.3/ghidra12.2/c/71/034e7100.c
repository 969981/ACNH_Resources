
void FUN_034e7100(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  uint *puVar7;
  ulong uVar8;
  long *plVar9;
  long lVar10;
  int *piVar11;
  int iVar12;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = param_3;
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    uVar1 = 0;
  }
  if ((int)param_4 < 0) {
LAB_034e7248:
    (**(code **)(*param_2 + 0x18))(param_2);
    pcStack_38 = (char *)param_2[1];
    if ((*pcStack_38 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
      iVar12 = 0;
      iVar5 = 0;
      do {
        if ((*(int *)(param_1 + 0x270 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
           (lVar6 = param_1 + 0x270 + (long)iVar5 * 0x1a8, (*(byte *)(lVar6 + 0x18) >> 1 & 1) == 0))
        {
          uVar4 = 0x11;
          goto LAB_034e72e4;
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar5 != 0x10e);
LAB_034e72f4:
      iVar12 = -1;
      goto LAB_034e72f8;
    }
  }
  else {
    lVar6 = *(long *)(param_1 + 0x238);
    uVar3 = *(uint *)(lVar6 + (long)(int)uVar1 * 0x38 + 0x20);
    if (0 < (int)uVar3) {
      uVar8 = 0;
      do {
        if (*(uint *)(*(long *)(lVar6 + (long)(int)uVar1 * 0x38 + 0x28) + uVar8 * 4) == param_4) {
          lVar6 = lVar6 + (long)(int)uVar1 * 0x38;
          if (*(uint *)(lVar6 + 0x10) <= (uint)uVar8) {
            uVar8 = 0;
          }
          if (*(int *)(*(long *)(lVar6 + 0x18) + uVar8 * 0x30 + 0x28) != -1) {
            return;
          }
          break;
        }
        uVar8 = uVar8 + 1;
      } while (uVar3 != uVar8);
    }
    if (param_4 != 4) goto LAB_034e7248;
    (**(code **)(*param_2 + 0x18))(param_2);
    pcStack_38 = (char *)param_2[1];
    if ((*pcStack_38 != '\0') || (*(short *)PTR_DAT_04bb37e0 != -2)) {
      iVar12 = 0;
      iVar5 = 0;
      do {
        if ((*(int *)(param_1 + 0x270 + (long)iVar5 * 0x1a8 + 0x1a0) == 0) &&
           (lVar6 = param_1 + 0x270 + (long)iVar5 * 0x1a8, (*(byte *)(lVar6 + 0x18) >> 1 & 1) == 0))
        {
          uVar4 = 0x24;
LAB_034e72e4:
          local_40 = PTR_DAT_04bb2020 + 0x10;
          FUN_03412d40(lVar6,&local_40,PTR_DAT_04bb37e0,uVar4);
          goto LAB_034e72f8;
        }
        iVar5 = iVar5 + 1;
        iVar12 = iVar12 + 1;
      } while (iVar5 != 0x10e);
      goto LAB_034e72f4;
    }
  }
  iVar12 = -1;
LAB_034e72f8:
  if (*(uint *)(param_1 + 0x230) <= param_3) {
    param_3 = 0;
  }
  if (-1 < (int)param_4) {
    lVar6 = *(long *)(param_1 + 0x238);
    uVar1 = *(uint *)(lVar6 + (long)(int)param_3 * 0x38 + 0x20);
    if (0 < (int)uVar1) {
      uVar8 = 0;
      do {
        if (*(uint *)(*(long *)(lVar6 + (long)(int)param_3 * 0x38 + 0x28) + uVar8 * 4) == param_4) {
          lVar10 = *(long *)(lVar6 + (long)(int)param_3 * 0x38 + 8);
          if (*(uint *)(lVar10 + 0x2c8) <= param_4) {
            param_4 = 0;
          }
          if (*(long *)(*(long *)(lVar10 + 0x2d0) + (ulong)param_4 * 8) == 0) {
            return;
          }
          lVar6 = lVar6 + (long)(int)param_3 * 0x38;
          puVar7 = (uint *)(lVar6 + 0x10);
          plVar9 = (long *)(lVar6 + 0x18);
          uVar2 = uVar8;
          if (*puVar7 <= (uint)uVar8) {
            uVar2 = 0;
          }
          piVar11 = (int *)(*plVar9 + uVar2 * 0x30 + 0x28);
          if (*piVar11 == iVar12) {
            return;
          }
          *piVar11 = iVar12;
          if (iVar12 == -1) {
            return;
          }
          if (*puVar7 <= (uint)uVar8) {
            uVar8 = 0;
          }
          *(undefined4 *)(*plVar9 + uVar8 * 0x30 + 0x2c) = 1;
          return;
        }
        uVar8 = uVar8 + 1;
      } while (uVar1 != uVar8);
    }
  }
  return;
}

