
byte FUN_02b60520(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  byte bVar4;
  
  if (DAT_05574040 == 0) {
LAB_02b605a8:
    bVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) goto LAB_02b605a8;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar2 == 0)) goto LAB_02b605a8;
    if ((*(long **)(lVar2 + 0x28) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x28), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    bVar4 = (&LAB_00575cb0)[*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 8)];
    if (3 < bVar4) {
      bVar4 = 4;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x28) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return bVar4;
}

