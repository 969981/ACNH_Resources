
undefined8 FUN_0031ebe0(long *param_1,long param_2,int param_3,uint param_4,long param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  
  if (*(char *)((long)param_1 + 0x3c) != '\0') {
    return 0;
  }
  param_1[8] = param_5;
  lVar7 = *(long *)(param_2 + 0x1c8);
  *(int *)(param_1 + 7) = param_3;
  uVar11 = (param_5 + lVar7) - 1U & -lVar7;
  uVar6 = uVar11;
  if (param_3 != 2) {
    uVar6 = 0;
  }
  uVar6 = FUN_0031ee74(param_1,param_2,uVar6 + uVar11 * (long)(int)param_4);
  if ((uVar6 & 1) == 0) {
    return 0;
  }
  if ((int)param_4 < 1) {
    uVar6 = 0;
    iVar5 = (int)param_1[7];
  }
  else {
    uVar8 = param_1[2];
    lVar7 = *param_1;
    uVar9 = 0;
    uVar6 = 0;
    if (param_4 != 1) {
      uVar10 = uVar9;
      do {
        uVar9 = uVar6 + uVar11;
        uVar2 = uVar6;
        if (uVar9 <= uVar8) {
          uVar2 = uVar9;
        }
        lVar3 = 0;
        if (uVar9 <= uVar8) {
          lVar3 = lVar7 + uVar6;
        }
        uVar9 = uVar10 + 2;
        uVar1 = uVar2 + uVar11;
        uVar6 = uVar2;
        if (uVar1 <= uVar8) {
          uVar6 = uVar1;
        }
        lVar4 = 0;
        if (uVar1 <= uVar8) {
          lVar4 = lVar7 + uVar2;
        }
        param_1[uVar10 + 3] = lVar3;
        param_1[uVar10 + 4] = lVar4;
        uVar10 = uVar9;
      } while (((ulong)param_4 & 0xfffffffe) != uVar9);
    }
    if ((param_4 & 1) != 0) {
      lVar7 = lVar7 + uVar6;
      lVar3 = 0;
      if (uVar6 + uVar11 <= uVar8) {
        uVar6 = uVar6 + uVar11;
        lVar3 = lVar7;
      }
      param_1[uVar9 + 3] = lVar3;
    }
    iVar5 = (int)param_1[7];
  }
  if (iVar5 == 2) {
    lVar7 = 0;
    if (uVar6 + uVar11 <= (ulong)param_1[2]) {
      lVar7 = *param_1 + uVar6;
    }
  }
  else {
    lVar7 = 0;
  }
  param_1[6] = lVar7;
  *(undefined1 *)((long)param_1 + 0x3c) = 1;
  return 1;
}

