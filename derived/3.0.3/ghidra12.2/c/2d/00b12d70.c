
undefined8 FUN_00b12d70(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bb68d8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb68d8);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bb68d0 = PTR_DAT_04bb6598 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb68d8);
    }
  }
  if (param_2 == PTR_DAT_04bb68d0) {
    return 1;
  }
  uVar2 = FUN_00adc7b8(param_2);
  return uVar2;
}

