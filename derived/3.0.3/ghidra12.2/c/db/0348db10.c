
void FUN_0348db10(long param_1,uint param_2,uint param_3)

{
  ulong uVar1;
  uint uVar2;
  long lVar3;
  uint *puVar4;
  long *plVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  ulong uVar9;
  
  if (*(uint *)(param_1 + 0x240) <= param_2) {
    param_2 = 0;
  }
  if (-1 < (int)DAT_04c4a518) {
    lVar3 = *(long *)(param_1 + 0x248);
    uVar2 = *(uint *)(lVar3 + (long)(int)param_2 * 0x38 + 0x20);
    if ((int)uVar2 < 1) {
      iVar6 = -1;
    }
    else {
      uVar9 = 0;
      iVar6 = -1;
      do {
        if (*(uint *)(*(long *)(lVar3 + (long)(int)param_2 * 0x38 + 0x28) + uVar9 * 4) ==
            DAT_04c4a518) {
          lVar8 = lVar3 + (long)(int)param_2 * 0x38;
          if (*(uint *)(lVar8 + 0x10) <= (uint)uVar9) {
            uVar9 = 0;
          }
          iVar6 = *(int *)(*(long *)(lVar8 + 0x18) + uVar9 * 0x30 + 0x28);
          break;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
    if (*(uint *)(param_1 + 0x240) <= param_3) {
      param_3 = 0;
    }
    uVar2 = *(uint *)(lVar3 + (long)(int)param_3 * 0x38 + 0x20);
    if (0 < (int)uVar2) {
      uVar9 = 0;
      do {
        if (*(uint *)(*(long *)(lVar3 + (long)(int)param_3 * 0x38 + 0x28) + uVar9 * 4) ==
            DAT_04c4a518) {
          lVar8 = *(long *)(lVar3 + (long)(int)param_3 * 0x38 + 8);
          uVar2 = DAT_04c4a518;
          if (*(uint *)(lVar8 + 0x2c8) <= DAT_04c4a518) {
            uVar2 = 0;
          }
          if (*(long *)(*(long *)(lVar8 + 0x2d0) + (ulong)uVar2 * 8) == 0) {
            return;
          }
          lVar3 = lVar3 + (long)(int)param_3 * 0x38;
          puVar4 = (uint *)(lVar3 + 0x10);
          plVar5 = (long *)(lVar3 + 0x18);
          uVar1 = uVar9;
          if (*puVar4 <= (uint)uVar9) {
            uVar1 = 0;
          }
          piVar7 = (int *)(*plVar5 + uVar1 * 0x30 + 0x28);
          if (*piVar7 == iVar6) {
            return;
          }
          *piVar7 = iVar6;
          if (iVar6 == -1) {
            return;
          }
          if (*puVar4 <= (uint)uVar9) {
            uVar9 = 0;
          }
          *(undefined4 *)(*plVar5 + uVar9 * 0x30 + 0x2c) = 1;
          return;
        }
        uVar9 = uVar9 + 1;
      } while (uVar2 != uVar9);
    }
  }
  return;
}

