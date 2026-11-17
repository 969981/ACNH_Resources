
bool FUN_02ff5da8(undefined8 *param_1,uint param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  byte bVar10;
  bool bVar11;
  undefined1 auStack_16f2 [2];
  undefined1 auStack_16f0 [5792];
  
  if (*(short *)((long)param_1 + 0x3c) == *(short *)PTR_DAT_04bb3170) {
    return false;
  }
  if (*(char *)((long)param_1 + 0x3a) != '\0') {
    uVar9 = *(uint *)(param_1 + 2);
    uVar6 = *(uint *)((long)param_1 + 0x14) - 1;
    uVar8 = param_2;
    if ((int)(uVar9 - 1) <= (int)param_2) {
      uVar8 = uVar9 - 1;
    }
    uVar3 = 0;
    if (-1 < (int)param_2) {
      uVar3 = uVar8;
    }
    uVar8 = param_3;
    if ((int)uVar6 <= (int)param_3) {
      uVar8 = uVar6;
    }
    uVar6 = 0;
    if (-1 < (int)param_3) {
      uVar6 = uVar8;
    }
    puVar1 = (uint *)(param_1[3] + (long)(int)(uVar3 + uVar6 * uVar9) * 4);
    uVar8 = *puVar1;
    if (uVar8 != param_4) {
      if (*(uint *)((long)param_1 + 0x14) <= uVar6 || uVar9 <= uVar3) {
        puVar1 = (uint *)0x0;
      }
      *puVar1 = param_4;
    }
    if (*(char *)((long)param_1 + 0x39) == '\0') {
      return uVar8 != param_4;
    }
    iVar7 = (**(code **)*param_1)(param_1);
    uVar9 = iVar7 + ~param_2;
    uVar3 = *(uint *)(param_1 + 2);
    uVar6 = uVar9;
    if ((int)(uVar3 - 1) <= (int)uVar9) {
      uVar6 = uVar3 - 1;
    }
    uVar2 = 0;
    if (-1 < (int)uVar9) {
      uVar2 = uVar6;
    }
    uVar6 = *(uint *)((long)param_1 + 0x14) - 1;
    uVar9 = param_3;
    if ((int)uVar6 <= (int)param_3) {
      uVar9 = uVar6;
    }
    uVar6 = 0;
    if (-1 < (int)param_3) {
      uVar6 = uVar9;
    }
    puVar1 = (uint *)(param_1[3] + (long)(int)(uVar2 + uVar6 * uVar3) * 4);
    uVar9 = *puVar1;
    if (uVar9 != param_4) {
      if (*(uint *)((long)param_1 + 0x14) <= uVar6 || uVar3 <= uVar2) {
        puVar1 = (uint *)0x0;
      }
      *puVar1 = param_4;
    }
    return uVar8 != param_4 || uVar9 != param_4;
  }
  FUN_007ef010(auStack_16f2);
  FUN_007e4920(auStack_16f0,auStack_16f2);
  if (((((int)param_2 < 0) || (0xf < param_4)) || ((int)param_3 < 0)) ||
     ((*(int *)(param_1 + 2) <= (int)param_2 || (*(int *)((long)param_1 + 0x14) <= (int)param_3))))
  {
LAB_02ff5f4c:
    bVar11 = false;
    cVar5 = *(char *)((long)param_1 + 0x39);
  }
  else {
    iVar4 = *(int *)(param_1 + 8);
    iVar7 = *(int *)((long)param_1 + 0x44) + param_3;
    uVar8 = FUN_007e6e10(auStack_16f0,iVar4 + param_2,iVar7);
    if (uVar8 == param_4) goto LAB_02ff5f4c;
    FUN_007e70d0(auStack_16f0,iVar4 + param_2,iVar7,param_4);
    uVar9 = *(uint *)(param_1 + 2);
    bVar11 = true;
    uVar6 = *(uint *)((long)param_1 + 0x14) - 1;
    uVar8 = param_2;
    if ((int)(uVar9 - 1) <= (int)param_2) {
      uVar8 = uVar9 - 1;
    }
    uVar3 = param_3;
    if ((int)uVar6 <= (int)param_3) {
      uVar3 = uVar6;
    }
    puVar1 = (uint *)(param_1[3] + (long)(int)(uVar8 + uVar3 * uVar9) * 4);
    if (*(uint *)((long)param_1 + 0x14) <= uVar3 || uVar9 <= uVar8) {
      puVar1 = (uint *)0x0;
    }
    *puVar1 = param_4;
    cVar5 = *(char *)((long)param_1 + 0x39);
  }
  if (cVar5 == '\0') {
    return bVar11;
  }
  iVar7 = (**(code **)*param_1)(param_1);
  bVar10 = 0;
  if (((param_4 < 0x10) && (uVar8 = iVar7 + ~param_2, -1 < (int)uVar8)) &&
     ((bVar10 = 0, -1 < (int)param_3 && ((int)uVar8 < *(int *)(param_1 + 2))))) {
    if ((int)param_3 < *(int *)((long)param_1 + 0x14)) {
      iVar4 = *(int *)(param_1 + 8);
      iVar7 = *(int *)((long)param_1 + 0x44) + param_3;
      uVar9 = FUN_007e6e10(auStack_16f0,iVar4 + uVar8,iVar7);
      if (uVar9 != param_4) {
        FUN_007e70d0(auStack_16f0,iVar4 + uVar8,iVar7,param_4);
        uVar9 = *(uint *)(param_1 + 2);
        uVar6 = *(uint *)((long)param_1 + 0x14) - 1;
        if ((int)(uVar9 - 1) <= (int)uVar8) {
          uVar8 = uVar9 - 1;
        }
        if ((int)uVar6 <= (int)param_3) {
          param_3 = uVar6;
        }
        puVar1 = (uint *)(param_1[3] + (long)(int)(uVar8 + param_3 * uVar9) * 4);
        if (*(uint *)((long)param_1 + 0x14) <= param_3 || uVar9 <= uVar8) {
          puVar1 = (uint *)0x0;
        }
        *puVar1 = param_4;
        bVar10 = 1;
        goto LAB_02ff6074;
      }
    }
    bVar10 = 0;
  }
LAB_02ff6074:
  return (bool)(bVar11 | bVar10);
}

