
uint FUN_02844814(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  if (DAT_05574040 == 0) {
LAB_028448a8:
    uVar2 = 0;
  }
  else {
    puVar4 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar3 = (**(code **)(*(long *)*puVar4 + 0x38))();
      if (lVar3 == 0) goto LAB_028448a8;
      lVar3 = lVar3 + 0x70;
    }
    else if (((puVar4 == (undefined8 *)0x0) || ((long *)puVar4[0x26] == (long *)0x0)) ||
            (lVar3 = (**(code **)(*(long *)puVar4[0x26] + 0x38))(), lVar3 == 0)) goto LAB_028448a8;
    if ((*(long **)(lVar3 + 0xe6c38) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0xe6c38), puVar4 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar4)();
      uVar1 = uVar1 ^ 1;
    }
    uVar2 = FUN_028454ec(*(long *)(lVar3 + 0xe6c20) + *(long *)(lVar3 + 0xe6c18),param_1);
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar3 + 0xe6c38) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0xe6c38) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar2 & 1;
}

