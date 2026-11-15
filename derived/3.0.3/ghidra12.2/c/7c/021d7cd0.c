
undefined4 * FUN_021d7cd0(void)

{
  long lVar1;
  undefined8 *puVar2;
  ulong uVar3;
  undefined4 *puVar4;
  
  lVar1 = FUN_0265c2a0();
  if (lVar1 == 0) {
    puVar4 = &DAT_053e6f44;
  }
  else if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
          (puVar2 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar2 == (undefined8 *)0x0)) {
    puVar4 = (undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
  }
  else {
    uVar3 = (**(code **)*puVar2)();
    puVar4 = (undefined4 *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8));
    if ((((uVar3 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return puVar4;
}

