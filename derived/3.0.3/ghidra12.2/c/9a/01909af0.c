
undefined8 FUN_01909af0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  if ((*PTR_DAT_04bbf7b8 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf7b8);
    if (iVar1 != 0) {
      *(undefined ***)PTR_DAT_04bbf7b0 = &PTR_LAB_049d7a60;
      __cxa_guard_release(PTR_DAT_04bbf7b8);
    }
  }
  if (param_2 != PTR_DAT_04bbf7b0) {
    if ((*PTR_DAT_04bbf6c0 & 1) == 0) {
      iVar1 = __cxa_guard_acquire(PTR_DAT_04bbf6c0);
      if (iVar1 != 0) {
        *(undefined **)PTR_DAT_04bbf6b8 = PTR_DAT_04bbf108 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbf6c0);
      }
    }
    if (param_2 != PTR_DAT_04bbf6b8) {
      uVar2 = FUN_018e3e70(param_2);
      return uVar2;
    }
  }
  return 1;
}

