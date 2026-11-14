
void FUN_01ba025c(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  
  param_1[0x12] = -1;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  iVar5 = *param_1;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  if (iVar5 < param_1[0x418] + -1) {
    if (iVar5 < 1) {
      lVar7 = 0x1d20;
LAB_01ba0344:
      *(long *)(param_1 + 4) = (long)param_1 + lVar7;
      return;
    }
    param_1[0x12] = 0;
    piVar8 = param_1 + 0x748;
  }
  else {
    uVar6 = (ulong)(uint)param_1[0x10];
    if ((uint)param_1[0x10] < 0x2a) {
      if ((1L << (uVar6 & 0x3f) & 0x6006006003U) != 0) {
        if (iVar5 < 1) {
          iVar5 = FUN_01b977b0();
          param_1[0x12] = iVar5;
          *(int **)(param_1 + 4) = param_1 + 0x6ee;
          return;
        }
        param_1[0x12] = 0;
        *(int **)(param_1 + 6) = param_1 + 0x7a2;
        *(int **)(param_1 + 8) = param_1 + 0x6ee;
        return;
      }
      if ((1L << (uVar6 & 0x3f) & 0x1801801800cU) != 0) {
        return;
      }
      if ((1L << (uVar6 & 0x3f) & 0x20020020010U) != 0) {
        lVar7 = 0x1ff0;
        goto LAB_01ba0344;
      }
    }
    iVar3 = param_1[0x5de];
    if (iVar3 == 3) {
      iVar5 = FUN_01b977b0();
      iVar3 = param_1[0x5dd];
      param_1[0x12] = iVar5;
      iVar4 = param_1[0x5dc];
      lVar7 = *(long *)(param_1 + 0x5da);
      iVar5 = 0;
      if (iVar4 <= iVar3) {
        iVar5 = iVar4;
      }
      iVar2 = 0;
      if (iVar4 <= iVar3 + 1) {
        iVar2 = iVar4;
      }
      iVar1 = 0;
      if (iVar4 <= iVar3 + 2) {
        iVar1 = iVar4;
      }
      *(long *)(param_1 + 6) = lVar7 + (long)(iVar3 - iVar5) * 0x168;
      *(long *)(param_1 + 8) = lVar7 + (long)((iVar3 + 1) - iVar2) * 0x168;
      *(long *)(param_1 + 10) = lVar7 + (long)((iVar3 + 2) - iVar1) * 0x168;
      return;
    }
    if (iVar3 == 2) {
      iVar5 = FUN_01b977b0();
      iVar3 = param_1[0x5dd];
      param_1[0x12] = iVar5;
      iVar4 = param_1[0x5dc];
      iVar5 = 0;
      if (iVar4 <= iVar3) {
        iVar5 = iVar4;
      }
      iVar2 = 0;
      if (iVar4 <= iVar3 + 1) {
        iVar2 = iVar4;
      }
      *(long *)(param_1 + 6) = *(long *)(param_1 + 0x5da) + (long)(iVar3 - iVar5) * 0x168;
      *(long *)(param_1 + 8) = *(long *)(param_1 + 0x5da) + (long)((iVar3 + 1) - iVar2) * 0x168;
      return;
    }
    if (iVar3 != 1) {
      return;
    }
    if (iVar5 < 1) {
      iVar5 = FUN_01b977b0();
      param_1[0x12] = iVar5;
      iVar5 = 0;
      if (param_1[0x5dc] <= param_1[0x5dd]) {
        iVar5 = param_1[0x5dc];
      }
      *(long *)(param_1 + 4) = *(long *)(param_1 + 0x5da) + (long)(param_1[0x5dd] - iVar5) * 0x168;
      return;
    }
    param_1[0x12] = 0;
    iVar5 = 0;
    if (param_1[0x5dc] <= param_1[0x5dd]) {
      iVar5 = param_1[0x5dc];
    }
    piVar8 = (int *)(*(long *)(param_1 + 0x5da) + (long)(param_1[0x5dd] - iVar5) * 0x168);
  }
  *(int **)(param_1 + 6) = param_1 + 0x7a2;
  *(int **)(param_1 + 8) = piVar8;
  return;
}

