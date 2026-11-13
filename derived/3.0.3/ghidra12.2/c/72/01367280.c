
undefined2 FUN_01367280(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined2 uVar4;
  
  if (DAT_05574040 == 0) {
LAB_0136730c:
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) goto LAB_0136730c;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar2 == 0)) goto LAB_0136730c;
    if ((*(long **)(lVar2 + 0xe7648) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0xe7648), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = *(undefined2 *)(*(long *)(lVar2 + 0xe7630) + *(long *)(lVar2 + 0xe7628) + 0x10c6bc);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0xe7648) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0xe7648) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar4;
}

