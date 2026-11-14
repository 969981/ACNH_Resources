
uint FUN_01c29d74(undefined8 param_1,long param_2,undefined8 param_3)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  uVar2 = 0;
  if (param_2 == 0) goto LAB_01c29e14;
  if (DAT_05574040 == 0) {
LAB_01c29e10:
    uVar2 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_01c29e10;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_01c29e10;
    if ((*(long **)(lVar3 + 0x1bf1b8) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x1bf1b8), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_027bfec0(*(long *)(lVar3 + 0x1bf1a0) + *(long *)(lVar3 + 0x1bf198),param_3,param_2);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0x1bf1b8) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x1bf1b8) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
LAB_01c29e14:
  return uVar2 & 1;
}

