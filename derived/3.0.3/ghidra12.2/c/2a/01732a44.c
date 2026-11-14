
bool FUN_01732a44(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0527ee10 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0527ee10);
    if (iVar2 != 0) {
      DAT_0527ee08 = &PTR_LAB_049bfcc0;
      __cxa_guard_release(&DAT_0527ee10);
    }
  }
  if ((undefined ***)param_2 == &DAT_0527ee08) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bb38f0 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb38f0);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb38e8 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb38f0);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bb38e8;
  }
  return bVar1;
}

