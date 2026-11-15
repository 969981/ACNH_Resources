
undefined4 FUN_02288bcc(void)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  undefined4 uVar6;
  undefined8 *puVar7;
  
  if (DAT_05574040 == 0) {
LAB_02288c34:
    lVar5 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar5 = 0;
      if (lVar3 != 0) {
        lVar5 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_02288c34;
      lVar5 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar5 + 0x1bfdf8) == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar5 + 0x1bfdf8);
    uVar4 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar7)();
    }
  }
  uVar2 = *(uint *)(*(long *)(lVar5 + 0x1bfde0) + *(long *)(lVar5 + 0x1bfdd8) + 100);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar5 + 0x1bfdf8) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1bfdf8) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (3 < uVar2) {
    return 0;
  }
  if (DAT_05574040 == 0) {
LAB_02288cf0:
    lVar5 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar5 = 0;
      if (lVar3 != 0) {
        lVar5 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_02288cf0;
      lVar5 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  if (*(long **)(lVar5 + 0x1c0798) == (long *)0x0) {
    uVar4 = 0;
  }
  else {
    puVar7 = (undefined8 *)**(long **)(lVar5 + 0x1c0798);
    uVar4 = 0;
    if (puVar7 != (undefined8 *)0x0) {
      uVar4 = (**(code **)*puVar7)();
    }
  }
  uVar2 = *(uint *)(*(long *)(lVar5 + 0x1c0780) + *(long *)(lVar5 + 0x1c0778) + 100);
  if ((((uVar4 & 1) != 0) && (*(long *)(lVar5 + 0x1c0798) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1c0798) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (3 < uVar2) {
    return 1;
  }
  if (DAT_05574040 == 0) {
LAB_02288dac:
    lVar5 = 0;
  }
  else {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar5 = 0;
      if (lVar3 != 0) {
        lVar5 = lVar3 + 0x70;
      }
    }
    else {
      if (puVar7 == (undefined8 *)0x0) goto LAB_02288dac;
      lVar5 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
    }
  }
  if ((*(long **)(lVar5 + 0x1c1138) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar5 + 0x1c1138), puVar7 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar7)();
    uVar2 = uVar2 ^ 1;
  }
  uVar1 = *(uint *)(*(long *)(lVar5 + 0x1c1120) + *(long *)(lVar5 + 0x1c1118) + 100);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x1c1138) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1c1138) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  if (3 < uVar1) {
    return 2;
  }
  if (DAT_05574040 != 0) {
    puVar7 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar7 + 0x38))();
      lVar5 = 0;
      if (lVar3 != 0) {
        lVar5 = lVar3 + 0x70;
      }
      goto LAB_02288e70;
    }
    if (puVar7 != (undefined8 *)0x0) {
      lVar5 = 0;
      if ((long *)puVar7[0x26] != (long *)0x0) {
        lVar5 = (**(code **)(*(long *)puVar7[0x26] + 0x38))();
      }
      goto LAB_02288e70;
    }
  }
  lVar5 = 0;
LAB_02288e70:
  if ((*(long **)(lVar5 + 0x1c1ad8) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar5 + 0x1c1ad8), puVar7 == (undefined8 *)0x0)) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)*puVar7)();
    uVar2 = uVar2 ^ 1;
  }
  uVar1 = *(uint *)(*(long *)(lVar5 + 0x1c1ac0) + *(long *)(lVar5 + 0x1c1ab8) + 100);
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar5 + 0x1c1ad8) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar5 + 0x1c1ad8) + 8), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  uVar6 = 3;
  if (uVar1 < 4) {
    uVar6 = 0;
  }
  return uVar6;
}

