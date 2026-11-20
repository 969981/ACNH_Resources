
bool FUN_03ec362c(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bd4798 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bd4798);
    if (iVar2 != 0) {
      *(undefined ***)PTR_DAT_04bd4790 = &PTR_LAB_04ba5208;
      __cxa_guard_release(PTR_DAT_04bd4798);
    }
  }
  if (param_2 == PTR_DAT_04bd4790) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bd4760 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bd4760);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bd4758 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bd4760);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bd4758;
  }
  return bVar1;
}

