
bool FUN_03826d5c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_05ade190 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_05ade190);
    if (iVar2 != 0) {
      DAT_05ade188 = PTR_DAT_04bcb138 + 0x10;
      __cxa_guard_release(&DAT_05ade190);
    }
  }
  if ((undefined **)param_2 == &DAT_05ade188) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bcb110 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bcb110);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bcb108 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bcb110);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bcb108;
  }
  return bVar1;
}

