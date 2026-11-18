
void FUN_034f47e0(long param_1,long *param_2,uint param_3,uint param_4)

{
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  uint *puVar6;
  ulong uVar7;
  long *plVar8;
  long lVar9;
  int *piVar10;
  int iVar11;
  undefined *local_40;
  char *pcStack_38;
  
  uVar1 = param_3;
  if (*(uint *)(param_1 + 0x248) <= param_3) {
    uVar1 = 0;
  }
  if (-1 < (int)param_4) {
    lVar5 = *(long *)(param_1 + 0x250);
    uVar3 = *(uint *)(lVar5 + (long)(int)uVar1 * 0x38 + 0x20);
    if (0 < (int)uVar3) {
      uVar7 = 0;
      do {
        if (*(uint *)(*(long *)(lVar5 + (long)(int)uVar1 * 0x38 + 0x28) + uVar7 * 4) == param_4) {
          lVar5 = lVar5 + (long)(int)uVar1 * 0x38;
          if (*(uint *)(lVar5 + 0x10) <= (uint)uVar7) {
            uVar7 = 0;
          }
          if (*(int *)(*(long *)(lVar5 + 0x18) + uVar7 * 0x30 + 0x28) != -1) {
            return;
          }
          break;
        }
        uVar7 = uVar7 + 1;
      } while (uVar3 != uVar7);
    }
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  pcStack_38 = (char *)param_2[1];
  local_40 = PTR_DAT_04bb2020 + 0x10;
  if ((*pcStack_38 == '\0') && (*(short *)PTR_DAT_04bb37e0 == -2)) {
    iVar11 = -1;
  }
  else {
    iVar11 = 0;
    iVar4 = 0;
    do {
      if ((*(int *)(param_1 + 0x288 + (long)iVar4 * 0x1a8 + 0x1a0) == 0) &&
         (lVar5 = param_1 + 0x288 + (long)iVar4 * 0x1a8, (*(byte *)(lVar5 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar5,&local_40,PTR_DAT_04bb37e0,0x11);
        goto LAB_034f4938;
      }
      iVar4 = iVar4 + 1;
      iVar11 = iVar11 + 1;
    } while (iVar4 != 0x10e);
    iVar11 = -1;
  }
LAB_034f4938:
  if (*(uint *)(param_1 + 0x248) <= param_3) {
    param_3 = 0;
  }
  if (-1 < (int)param_4) {
    lVar5 = *(long *)(param_1 + 0x250);
    uVar1 = *(uint *)(lVar5 + (long)(int)param_3 * 0x38 + 0x20);
    if (0 < (int)uVar1) {
      uVar7 = 0;
      do {
        if (*(uint *)(*(long *)(lVar5 + (long)(int)param_3 * 0x38 + 0x28) + uVar7 * 4) == param_4) {
          lVar9 = *(long *)(lVar5 + (long)(int)param_3 * 0x38 + 8);
          if (*(uint *)(lVar9 + 0x2c8) <= param_4) {
            param_4 = 0;
          }
          if (*(long *)(*(long *)(lVar9 + 0x2d0) + (ulong)param_4 * 8) == 0) {
            return;
          }
          lVar5 = lVar5 + (long)(int)param_3 * 0x38;
          puVar6 = (uint *)(lVar5 + 0x10);
          plVar8 = (long *)(lVar5 + 0x18);
          uVar2 = uVar7;
          if (*puVar6 <= (uint)uVar7) {
            uVar2 = 0;
          }
          piVar10 = (int *)(*plVar8 + uVar2 * 0x30 + 0x28);
          if (*piVar10 == iVar11) {
            return;
          }
          *piVar10 = iVar11;
          if (iVar11 == -1) {
            return;
          }
          if (*puVar6 <= (uint)uVar7) {
            uVar7 = 0;
          }
          *(undefined4 *)(*plVar8 + uVar7 * 0x30 + 0x2c) = 1;
          return;
        }
        uVar7 = uVar7 + 1;
      } while (uVar1 != uVar7);
    }
  }
  return;
}

