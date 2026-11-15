
long * FUN_01ee1a98(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(param_1 + 0x60);
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb37b0);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}

