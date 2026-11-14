
uint FUN_017ba560(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  uint uVar4;
  
  if (DAT_05574040 == 0) {
LAB_017ba5ec:
    uVar4 = 1;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar2 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar2 == 0) goto LAB_017ba5ec;
      lVar2 = lVar2 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar2 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar2 == 0)) goto LAB_017ba5ec;
    if ((*(long **)(lVar2 + 0x1a0b70) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x1a0b70), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    uVar4 = *(uint *)(*(long *)(lVar2 + 0x1a0b58) + *(long *)(lVar2 + 0x1a0b50));
    if (3 < uVar4) {
      uVar4 = 0;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x1a0b70) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x1a0b70) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  return uVar4;
}

