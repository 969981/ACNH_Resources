
long * FUN_00add8b4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (*(long *)(param_1 + 8) == 0) {
    plVar3 = (long *)0x0;
  }
  else {
    plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x48);
  }
  if (((*PTR_DAT_04bb37d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  if (plVar3 == (long *)0x0) {
    plVar3 = (long *)0x0;
  }
  else {
    uVar2 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb37d0);
    if ((uVar2 & 1) == 0) {
      plVar3 = (long *)0x0;
    }
  }
  return plVar3;
}

