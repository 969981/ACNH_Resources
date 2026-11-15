
undefined1 FUN_021d6100(void)

{
  undefined1 uVar1;
  uint uVar2;
  long lVar3;
  undefined8 *puVar4;
  
  lVar3 = FUN_0265c2a0();
  if (lVar3 == 0) {
    uVar1 = 0;
  }
  else {
    if ((*(long **)(lVar3 + 0x28) == (long *)0x0) ||
       (puVar4 = (undefined8 *)**(long **)(lVar3 + 0x28), puVar4 == (undefined8 *)0x0)) {
      uVar2 = 1;
    }
    else {
      uVar2 = (**(code **)*puVar4)();
      uVar2 = uVar2 ^ 1;
    }
    uVar1 = FUN_020fd7d8(*(long *)(lVar3 + 0x10) + *(long *)(lVar3 + 8));
    if ((((uVar2 & 1) == 0) && (*(long *)(lVar3 + 0x28) != 0)) &&
       (puVar4 = *(undefined8 **)(*(long *)(lVar3 + 0x28) + 8), puVar4 != (undefined8 *)0x0)) {
      (**(code **)*puVar4)();
    }
  }
  return uVar1;
}

