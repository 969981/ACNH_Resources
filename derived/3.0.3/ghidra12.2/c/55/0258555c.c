
bool FUN_0258555c(undefined8 param_1,undefined8 *param_2)

{
  bool bVar1;
  int iVar2;
  
  if ((DAT_055038a8 & 1) == 0) {
    iVar2 = __cxa_guard_acquire(&DAT_055038a8);
    if (iVar2 != 0) {
      DAT_055038a0 = &PTR_LAB_04a851c8;
      __cxa_guard_release(&DAT_055038a8);
    }
  }
  if ((undefined ***)param_2 == &DAT_055038a0) {
    bVar1 = true;
  }
  else {
    if ((*PTR_DAT_04bc31e8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc31e8);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc31e0 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc31e8);
      }
    }
    bVar1 = param_2 == (undefined8 *)PTR_DAT_04bc31e0;
  }
  return bVar1;
}

