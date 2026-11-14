
bool FUN_016d42a4(uint param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  uint uVar6;
  
  if (param_1 == 0xffffffff) {
    return false;
  }
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) goto LAB_016d43a0;
      lVar4 = lVar4 + 0x70;
    }
    else if (((puVar5 == (undefined8 *)0x0) || ((long *)puVar5[0x26] == (long *)0x0)) ||
            (lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))(), lVar4 == 0)) goto LAB_016d43a0;
    if ((*(long **)(lVar4 + 0x2181c8) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x2181c8), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    bVar1 = *(byte *)(*(long *)(lVar4 + 0x2181b0) + *(long *)(lVar4 + 0x2181a8) + 0x179d0);
    uVar6 = (uint)bVar1;
    if (7 < uVar6) {
      uVar6 = 0xff;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x2181c8) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x2181c8) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if (7 < bVar1) {
      uVar6 = 0xffffffff;
    }
    if (bVar1 < 8 && uVar6 == param_1) {
      return true;
    }
  }
LAB_016d43a0:
  if ((int)param_1 < 8) {
    bVar2 = false;
  }
  else {
    bVar2 = *(int *)(DAT_0523adf0 + 0x98) != 0;
  }
  return bVar2;
}

