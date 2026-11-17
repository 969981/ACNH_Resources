
void FUN_0313b2b0(long *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  int iVar8;
  long lVar9;
  
  iVar2 = (int)param_1[0x572f];
  if (iVar2 != 0) {
    lVar9 = param_1[0x5730];
    iVar8 = 0;
    do {
      plVar1 = (long *)(lVar9 + (long)iVar8 * 0x38);
      if (0 < (int)*(uint *)(plVar1 + 4)) {
        uVar3 = 0;
        do {
          if (*(int *)(*(long *)(lVar9 + (long)iVar8 * 0x38 + 0x28) + uVar3 * 4) == 0) {
            if (**(long **)(*(long *)(lVar9 + (long)iVar8 * 0x38 + 8) + 0x2d0) != 0) {
              lVar5 = lVar9 + (long)iVar8 * 0x38;
              if (*(uint *)(lVar5 + 0x10) <= (uint)uVar3) {
                uVar3 = 0;
              }
              piVar4 = (int *)(*(long *)(lVar5 + 0x18) + uVar3 * 0x30 + 0x28);
              if (*piVar4 != -1) {
                *piVar4 = -1;
              }
            }
            break;
          }
          uVar3 = uVar3 + 1;
        } while (*(uint *)(plVar1 + 4) != uVar3);
      }
      (**(code **)(*plVar1 + 0x10))(plVar1,param_1 + 0x1f44,0);
      iVar8 = iVar8 + 1;
    } while (iVar2 != iVar8);
  }
  iVar2 = 0;
  do {
    if ((int)param_1[(long)iVar2 * 0x35 + 0x1f79] != 0) {
      lVar9 = (long)iVar2;
      *(undefined1 *)param_1[lVar9 * 0x35 + 0x1f51] = 0;
      *(undefined1 *)(param_1 + lVar9 * 0x35 + 0x1f63) = 0;
      if ((((int)param_1[lVar9 * 0x35 + 0x1f65] != 1) &&
          ((*(byte *)(param_1 + lVar9 * 0x35 + 0x1f48) >> 1 & 1) != 0)) &&
         ((int)param_1[lVar9 * 0x35 + 0x1f6d] == -1)) {
        *(undefined4 *)(param_1 + lVar9 * 0x35 + 0x1f6d) = 1;
      }
      *(undefined4 *)(param_1 + (long)iVar2 * 0x35 + 0x1f79) = 0;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0x10e);
  iVar2 = 0;
  do {
    plVar6 = param_1 + (long)iVar2 * 3 + 0x1ba7;
    plVar1 = (long *)plVar6[1];
    while (plVar1 != plVar6) {
      plVar7 = (long *)plVar1[1];
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1 = plVar7;
    }
    iVar2 = iVar2 + 1;
    *(undefined4 *)(plVar6 + 2) = 0;
    *plVar6 = (long)plVar6;
    plVar6[1] = (long)plVar6;
  } while (iVar2 != 0x30);
  if (0 < (int)param_1[0x4b]) {
    lVar9 = 0;
    plVar1 = (long *)param_1[0x4d];
    do {
      plVar6 = *(long **)(param_1[0x4c] + lVar9 * 8);
      lVar9 = lVar9 + 1;
      *plVar6 = (long)plVar1;
      param_1[0x4d] = (long)plVar6;
      plVar1 = plVar6;
    } while (lVar9 < (int)param_1[0x4b]);
  }
  lVar9 = param_1[0x5730];
  *(undefined4 *)(param_1 + 0x4b) = 0;
  if (lVar9 != 0) {
    plVar1 = (long *)(lVar9 + -8);
    if (*plVar1 != 0) {
      lVar5 = *plVar1 * 0x38;
      do {
        FUN_0344c1b0(lVar9 + -0x38 + lVar5);
        lVar5 = lVar5 + -0x38;
      } while (lVar5 != 0);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar1);
    }
    else {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,plVar1);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar1);
      }
    }
    param_1[0x5730] = 0;
    *(undefined4 *)(param_1 + 0x572f) = 0;
  }
  FUN_034129e0(param_1 + 0x1f44);
  param_1[0x1db1] = (long)&PTR_LAB_04b34580;
  if (0 < (int)param_1[0x1db8]) {
    lVar9 = 0;
    do {
      plVar1 = *(long **)(param_1[0x1db9] + lVar9 * 8);
      (**(code **)*plVar1)(plVar1);
      lVar9 = lVar9 + 1;
      *plVar1 = param_1[0x1dba];
      param_1[0x1dba] = (long)plVar1;
    } while (lVar9 < (int)param_1[0x1db8]);
  }
  *(undefined4 *)(param_1 + 0x1db8) = 0;
  param_1[0x1c4f] = (long)&PTR_LAB_04b34700;
  if (0 < (int)param_1[0x1c56]) {
    lVar9 = 0;
    do {
      plVar1 = *(long **)(param_1[0x1c57] + lVar9 * 8);
      (**(code **)*plVar1)(plVar1);
      lVar9 = lVar9 + 1;
      *plVar1 = param_1[0x1c58];
      param_1[0x1c58] = (long)plVar1;
    } while (lVar9 < (int)param_1[0x1c56]);
  }
  *(undefined4 *)(param_1 + 0x1c56) = 0;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

