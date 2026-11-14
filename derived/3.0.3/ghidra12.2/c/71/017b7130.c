
int FUN_017b7130(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (DAT_05574040 == 0) {
LAB_017b71c0:
    uVar4 = 2;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) goto LAB_017b71c0;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar2 == 0)) goto LAB_017b71c0;
    if ((*(long **)(lVar2 + 0x1bf1b8) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x1bf1b8), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = *(uint *)(*(long *)(lVar2 + 0x1bf1a0) + *(long *)(lVar2 + 0x1bf198));
    if (5 < uVar4) {
      uVar4 = 0;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x1bf1b8) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x1bf1b8) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar4 - 2;
}

