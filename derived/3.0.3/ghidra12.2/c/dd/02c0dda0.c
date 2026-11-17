
bool FUN_02c0dda0(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_0564ae08 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_0564ae08);
    if (iVar2 != 0) {
      DAT_0564ae00 = &PTR_LAB_04aacf58;
      __cxa_guard_release(&DAT_0564ae08);
    }
  }
  if ((undefined ***)param_2 == &DAT_0564ae00) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bc5688 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc5688);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc5680 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc5688);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bc5680;
  }
  return bVar1;
}

