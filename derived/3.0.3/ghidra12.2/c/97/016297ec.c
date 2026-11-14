
bool FUN_016297ec(undefined8 param_1,undefined *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((*PTR_DAT_04bbd490 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd490);
    if (iVar2 != 0) {
      *(undefined **)PTR_DAT_04bbd488 = PTR_DAT_04bbd498 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbd490);
    }
  }
  if (param_2 == PTR_DAT_04bbd488) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bbd478 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bbd478);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bbd470 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bbd478);
      }
    }
    bVar1 = param_2 == PTR_DAT_04bbd470;
  }
  return bVar1;
}

