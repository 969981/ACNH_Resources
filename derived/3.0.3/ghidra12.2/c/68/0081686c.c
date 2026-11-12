
void FUN_0081686c(long param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 *puVar5;
  
  if (DAT_05574040 != 0) {
    puVar5 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar4 = (**(code **)(*(long *)*puVar5 + 0x38))();
      if (lVar4 == 0) {
        return;
      }
      lVar4 = lVar4 + 0x70;
    }
    else {
      if (puVar5 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar5[0x26] == (long *)0x0) {
        return;
      }
      lVar4 = (**(code **)(*(long *)puVar5[0x26] + 0x38))();
      if (lVar4 == 0) {
        return;
      }
    }
    if ((*(long **)(lVar4 + 0x1c27f8) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1c27f8), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    uVar1 = *(uint *)(*(long *)(lVar4 + 0x1c27e0) + *(long *)(lVar4 + 0x1c27d8));
    if (0xf < uVar1) {
      uVar1 = 0;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x1c27f8) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1c27f8) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    if ((*(long **)(lVar4 + 0x1c2868) == (long *)0x0) ||
       (puVar5 = (undefined8 *)**(long **)(lVar4 + 0x1c2868), puVar5 == (undefined8 *)0x0)) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)*puVar5)();
      uVar3 = uVar3 ^ 1;
    }
    uVar2 = *(uint *)(*(long *)(lVar4 + 0x1c2850) + *(long *)(lVar4 + 0x1c2848));
    if (3 < uVar2) {
      uVar2 = 0;
    }
    if ((((uVar3 & 1) == 0) && (*(long *)(lVar4 + 0x1c2868) != 0)) &&
       (puVar5 = *(undefined8 **)(*(long *)(lVar4 + 0x1c2868) + 8), puVar5 != (undefined8 *)0x0)) {
      (**(code **)*puVar5)();
    }
    *(uint *)(param_1 + 8) = uVar1;
    *(uint *)(param_1 + 0xc) = uVar2;
  }
  return;
}

