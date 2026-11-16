
bool FUN_0292307c(void)

{
  bool bVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_05574040 == 0) {
LAB_02923108:
    bVar1 = false;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_02923108;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_02923108;
    if ((*(long **)(lVar3 + 0x1bf1b8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1bf1b8), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    bVar1 = *(int *)(*(long *)(lVar3 + 0x1bf1a0) + *(long *)(lVar3 + 0x1bf198)) == 5;
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x1bf1b8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1bf1b8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return bVar1;
}

