
int FUN_0016eb9c(long param_1,uint param_2,long param_3,long param_4)

{
  int *piVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  
  if ((param_2 & 1) != 0) {
    if (param_4 != 0) {
      return -0x1f5;
    }
    if (0x270 < *(ulong *)(param_1 + 0x920) >> 4) {
      return -0x388;
    }
  }
  iVar2 = FUN_0016838c(param_3,param_4);
  if (iVar2 == 0) {
    return -0x1f5;
  }
  lVar9 = param_1 + 0x890;
  lVar3 = FUN_001689e8(lVar9,0x98);
  if (lVar3 == 0) {
    return -0x385;
  }
  if (param_4 == 0) {
    lVar4 = 0;
  }
  else {
    lVar4 = FUN_001681c4(param_3,param_4,lVar9);
    if (lVar4 == 0) goto LAB_0016ec58;
  }
  if ((param_2 & 1) != 0) {
    puVar5 = (undefined8 *)0x0;
    goto LAB_0016ecc4;
  }
  puVar5 = (undefined8 *)FUN_001689e8(lVar9,0x18);
  if (puVar5 == (undefined8 *)0x0) {
LAB_0016ec4c:
    FUN_001689f8(lVar9,lVar4);
LAB_0016ec58:
    FUN_001689f8(lVar9,lVar3);
    return -0x385;
  }
  if (param_4 == 0) {
    puVar5[1] = 0;
  }
  else {
    lVar6 = FUN_001681c4(param_3,param_4,lVar9);
    puVar5[1] = lVar6;
    if (lVar6 == 0) {
      FUN_001689f8(lVar9,puVar5);
      goto LAB_0016ec4c;
    }
  }
  puVar5[2] = param_4;
  *puVar5 = 0;
LAB_0016ecc4:
  FUN_0016bbec(lVar3);
  FUN_00167668(lVar3,param_2,lVar4,param_4);
  iVar2 = FUN_0016ca1c(param_1,lVar3);
  if (iVar2 != 0) {
    FUN_0016c2ec(puVar5,lVar9);
    FUN_00167690(lVar3,lVar9);
    FUN_001689f8(lVar9,lVar3);
    return iVar2;
  }
  if ((param_2 & 1) == 0) {
    puVar8 = (undefined8 *)(param_1 + 0x8e0);
    do {
      puVar7 = puVar8;
      puVar8 = (undefined8 *)*puVar7;
    } while (puVar8 != (undefined8 *)0x0);
    *puVar7 = puVar5;
  }
  else {
    *(long *)(param_1 + 0x920) = *(long *)(param_1 + 0x920) + 1;
  }
  param_3 = param_3 + param_4 * 8;
  lVar9 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB_0016ed74;
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 3);
  *(undefined4 *)(param_1 + 0x9a0) = *puVar11;
LAB_0016ed74:
  lVar9 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    lVar9 = lVar9 + -1;
    if (lVar9 == 0) goto LAB_0016eda0;
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 2);
  *(char *)(param_1 + 0x9a8) = (char)*puVar11;
LAB_0016eda0:
  param_4 = param_4 + 1;
  puVar10 = (undefined4 *)(param_3 + 4);
  do {
    param_4 = param_4 + -1;
    if (param_4 == 0) {
      return 0;
    }
    puVar11 = puVar10 + -2;
    piVar1 = puVar10 + -3;
    puVar10 = puVar11;
  } while (*piVar1 != 8);
  *(char *)(param_1 + 0x9a9) = (char)*puVar11;
  return 0;
}

