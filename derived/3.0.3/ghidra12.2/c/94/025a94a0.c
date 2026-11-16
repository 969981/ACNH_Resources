
uint FUN_025a94a0(long param_1)

{
  uint uVar1;
  long lVar2;
  long lVar3;
  int iVar4;
  uint uVar5;
  undefined8 *puVar6;
  int iVar7;
  uint uVar8;
  ulong uVar9;
  int iVar10;
  ulong uVar11;
  
  if (param_1 == 0) {
    return 1;
  }
  if ((*(long **)(param_1 + 0x28) == (long *)0x0) ||
     (puVar6 = (undefined8 *)**(long **)(param_1 + 0x28), puVar6 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar6)();
    uVar5 = uVar5 ^ 1;
  }
  iVar7 = 0;
  iVar10 = 0x3ff;
  lVar2 = *(long *)(param_1 + 0x10) + *(long *)(param_1 + 8);
  uVar8 = 0xffffffff;
  do {
    iVar4 = iVar10 - iVar7;
    if (iVar10 < iVar7) {
      iVar4 = iVar4 + 1;
    }
    uVar1 = iVar7 + (iVar4 >> 1);
    lVar3 = lVar2 + (ulong)uVar1 * 4;
    if (0x3ff < uVar1) {
      lVar3 = lVar2;
    }
    iVar4 = uVar1 - 1;
    if (*(short *)(lVar3 + 2) != 0) {
      iVar7 = uVar1 + 1;
      uVar1 = uVar8;
      iVar4 = iVar10;
    }
    iVar10 = iVar4;
    uVar8 = uVar1;
  } while (iVar7 <= iVar10);
  uVar8 = 0x400;
  if (uVar1 != 0xffffffff) {
    uVar8 = uVar1;
  }
  if (uVar8 == 0) {
    iVar7 = 0;
  }
  else {
    uVar11 = 0;
    iVar7 = 0;
    uVar9 = 0;
    do {
      lVar3 = lVar2 + uVar9 * 4;
      if (0x3ff < (uint)uVar11) {
        lVar3 = lVar2;
      }
      uVar11 = uVar9 + 1;
      if (*(short *)(lVar3 + 2) != 0) {
        iVar7 = iVar7 + 1;
      }
      uVar9 = uVar11 & 0xffffffff;
    } while (uVar8 != (uint)uVar11);
  }
  if ((((uVar5 & 1) == 0) && (*(long *)(param_1 + 0x28) != 0)) &&
     (puVar6 = *(undefined8 **)(*(long *)(param_1 + 0x28) + 8), puVar6 != (undefined8 *)0x0)) {
    (**(code **)*puVar6)();
  }
  if (iVar7 == 0) {
    uVar5 = 1;
  }
  else {
    uVar5 = iVar7 + 0x1ffU >> 9;
  }
  return uVar5;
}

