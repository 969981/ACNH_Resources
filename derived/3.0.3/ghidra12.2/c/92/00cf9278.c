
undefined4 FUN_00cf9278(void)

{
  uint uVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  
  uVar4 = 0;
  if ((*(long *)PTR_DAT_04bb4938 != 0) &&
     (lVar2 = FUN_016c6a84(*(long *)PTR_DAT_04bb4938 + 8), lVar2 != 0)) {
    if ((*(long **)(lVar2 + 0x418) == (long *)0x0) ||
       (puVar3 = (undefined8 *)**(long **)(lVar2 + 0x418), puVar3 == (undefined8 *)0x0)) {
      uVar1 = 1;
    }
    else {
      uVar1 = (**(code **)*puVar3)();
      uVar1 = uVar1 ^ 1;
    }
    if ((((uVar1 & 1) == 0) && (*(long *)(lVar2 + 0x418) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar2 + 0x418) + 8), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
    uVar4 = 0x431b0000;
  }
  return uVar4;
}

