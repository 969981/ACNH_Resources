
bool FUN_016744d0(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04bbdd28 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bbdd28);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bbdd20 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbdd28);
    }
  }
  return param_2 == PTR_DAT_04bbdd20;
}

