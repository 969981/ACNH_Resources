
undefined8 FUN_01905bf0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbf020 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf020);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbf018 = PTR_DAT_04bbf028 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbf020);
    }
  }
  if (param_2 == PTR_DAT_04bbf018) {
    return 1;
  }
  uVar2 = FUN_018f5170(param_2);
  return uVar2;
}

