
undefined2 FUN_02740318(uint param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  undefined2 uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  undefined8 *puVar7;
  
  lVar6 = *(long *)PTR_DAT_04bb46b0;
  if (lVar6 != 0) {
    puVar7 = *(undefined8 **)(lVar6 + 0x10);
    if ((*(byte *)(lVar6 + 0x453) & 1) == 0) {
      lVar5 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar6 = 0;
      if (lVar5 != 0) {
        lVar6 = lVar5 + 0x70;
      }
      goto LAB_02740384;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar6 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar6 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_02740384;
    }
  }
  lVar6 = 0;
LAB_02740384:
  if ((*(long **)(lVar6 + 0xe7610) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar6 + 0xe7610), puVar7 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar7)();
    uVar4 = uVar4 ^ 1;
  }
  puVar1 = (undefined2 *)(*(long *)(lVar6 + 0xe75f8) + *(long *)(lVar6 + 0xe75f0));
  puVar2 = puVar1 + param_1;
  if (0x3ff < param_1) {
    puVar2 = puVar1;
  }
  uVar3 = *puVar2;
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar6 + 0xe7610) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar6 + 0xe7610) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return uVar3;
}

