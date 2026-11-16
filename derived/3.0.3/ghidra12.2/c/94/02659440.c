
undefined8 FUN_02659440(void)

{
  long lVar1;
  ulong uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  
  if (DAT_05574040 == 0) {
LAB_026594f4:
    uVar4 = 0;
  }
  else {
    puVar3 = *(undefined8 **)(DAT_05574040 + 0x10);
    if ((*(byte *)(DAT_05574040 + 0x453) & 1) == 0) {
      lVar1 = (**(code **)(*(long *)*puVar3 + 0x38))();
      if (lVar1 == 0) goto LAB_026594f4;
      lVar1 = lVar1 + 0x70;
    }
    else if (((puVar3 == (undefined8 *)0x0) || ((long *)puVar3[0x26] == (long *)0x0)) ||
            (lVar1 = (**(code **)(*(long *)puVar3[0x26] + 0x38))(), lVar1 == 0)) goto LAB_026594f4;
    if ((*(long **)(FUN_002051f0 + lVar1) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(FUN_002051f0 + lVar1), puVar3 == (undefined8 *)0x0)) {
      uVar4 = *(undefined8 *)(*(long *)(FUN_002051d8 + lVar1) + *(long *)(lVar1 + 0x2051d0) + 0x38);
    }
    else {
      uVar2 = (**(code **)*puVar3)();
      uVar4 = *(undefined8 *)(*(long *)(FUN_002051d8 + lVar1) + *(long *)(lVar1 + 0x2051d0) + 0x38);
      if ((((uVar2 & 1) != 0) && (*(long *)(FUN_002051f0 + lVar1) != 0)) &&
         (puVar3 = *(undefined8 **)(*(long *)(FUN_002051f0 + lVar1) + 8),
         puVar3 != (undefined8 *)0x0)) {
        (**(code **)*puVar3)();
      }
    }
  }
  return uVar4;
}

