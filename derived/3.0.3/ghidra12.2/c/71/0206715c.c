
bool FUN_0206715c(undefined8 param_1,undefined *param_2)

{
  int iVar1;
  
  if ((*PTR_DAT_04bc2670 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2670);
    if (iVar1 != 0) {
      *(undefined **)PTR_DAT_04bc2668 = PTR_DAT_04bb2000 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2670);
    }
  }
  return param_2 == PTR_DAT_04bc2668;
}

