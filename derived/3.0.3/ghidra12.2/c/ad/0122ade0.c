
byte FUN_0122ade0(long param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  undefined8 *puVar9;
  byte bVar10;
  
  if (param_2 == 1) {
    iVar4 = *(int *)(param_1 + 8);
    iVar5 = *(int *)(param_1 + 0xc);
    iVar2 = iVar4;
    if (iVar4 < 0) {
      iVar2 = iVar4 + 1;
    }
    iVar3 = iVar5;
    if (iVar5 < 0) {
      iVar3 = iVar5 + 1;
    }
    if (iVar4 < -1) {
      return 0;
    }
    uVar6 = iVar2 >> 1;
    if (0x8f < uVar6 || iVar5 < -1) {
      return 0;
    }
    if ((uint)(iVar3 >> 1) < 0x80) {
      return (byte)(&DAT_0514da88)[uVar6 + (iVar3 >> 1) * 0x90 >> 3] >> (ulong)(uVar6 & 7) & 1;
    }
    return 0;
  }
  if (param_2 != 0) {
    return 0;
  }
  if (DAT_05574040 != 0) {
    puVar9 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar7 = (**(code **)(*(long *)*puVar9 + 0x38))();
      lVar8 = 0;
      if (lVar7 != 0) {
        lVar8 = lVar7 + 0x70;
      }
      goto LAB_0122aec8;
    }
    if (puVar9 != (undefined8 *)0x0) {
      lVar8 = 0;
      if ((long *)puVar9[0x26] != (long *)0x0) {
        lVar8 = (**(code **)(*(long *)puVar9[0x26] + 0x38))();
      }
      goto LAB_0122aec8;
    }
  }
  lVar8 = 0;
LAB_0122aec8:
  if ((*(long **)(lVar8 + 0x1c24e8) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar8 + 0x1c24e8), puVar9 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar9)();
    uVar6 = uVar6 ^ 1;
  }
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(param_1 + 0xc);
  bVar10 = 0;
  iVar2 = iVar4;
  if (iVar4 < 0) {
    iVar2 = iVar4 + 1;
  }
  iVar3 = iVar5;
  if (iVar5 < 0) {
    iVar3 = iVar5 + 1;
  }
  if ((((-2 < iVar4) && (uVar1 = iVar2 >> 1, uVar1 < 0x90)) && (-2 < iVar5)) &&
     ((uint)(iVar3 >> 1) < 0x80)) {
    bVar10 = *(byte *)(*(long *)(lVar8 + 0x1c24d0) + *(long *)(lVar8 + 0x1c24c8) +
                      (ulong)(uVar1 + (iVar3 >> 1) * 0x90 >> 3)) >> (ulong)(uVar1 & 7) & 1;
  }
  if ((((uVar6 & 1) == 0) && (*(long *)(lVar8 + 0x1c24e8) != 0)) &&
     (puVar9 = *(undefined8 **)(*(long *)(lVar8 + 0x1c24e8) + 8), puVar9 != (undefined8 *)0x0)) {
    (**(code **)*puVar9)();
  }
  return bVar10;
}

