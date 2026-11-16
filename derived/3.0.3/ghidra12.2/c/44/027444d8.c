
undefined4 FUN_027444d8(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  
  lVar4 = *(long *)PTR_DAT_04bb46b0;
  if (lVar4 != 0) {
    puVar5 = *(undefined8 **)(lVar4 + 0x10);
    if ((*(byte *)(lVar4 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar5 + 0x38))();
      lVar4 = 0;
      if (lVar3 != 0) {
        lVar4 = lVar3 + 0x70;
      }
      goto LAB_02744548;
    }
    if (puVar5 != (undefined8 *)0x0) {
      lVar4 = 0;
      if ((long *)puVar5[0x26] != (long *)0x0) {
        lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      }
      goto LAB_02744548;
    }
  }
  lVar4 = 0;
LAB_02744548:
  if ((*(long **)(lVar4 + 0x205228) == (long *)0x0) ||
     (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x205228), puVar5 == (undefined8 *)0x0)) {
    uVar1 = 1;
  }
  else {
    uVar1 = (**(code **)*puVar5)();
    uVar1 = uVar1 ^ 1;
  }
  uVar2 = FUN_027445c0(*(long *)(lVar4 + 0x205210) + *(long *)(lVar4 + 0x205208),param_1);
  if ((((uVar1 & 1) == 0) && (*(long *)(lVar4 + 0x205228) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x205228) + 8), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return uVar2;
}

