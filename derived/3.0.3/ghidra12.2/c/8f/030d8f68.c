
undefined8 FUN_030d8f68(undefined8 param_1,undefined8 *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((DAT_056ec660 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(&DAT_056ec660);
    if (iVar1 != 0) {
      DAT_056ec658 = PTR_DAT_04bc4d20 + 0x10;
      __cxa_guard_release(&DAT_056ec660);
    }
  }
  if ((undefined **)param_2 == &DAT_056ec658) {
    return 1;
  }
  uVar2 = FUN_030bbe3c(param_2);
  return uVar2;
}

