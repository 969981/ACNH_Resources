
long * FUN_0084d0f8(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (((param_1 < 0xec) && (*(long *)PTR_DAT_04bb2f58 != 0)) &&
     (plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + (ulong)param_1 * 0x10), plVar3 != (long *)0x0)
     ) {
    if (((*PTR_DAT_04bb5448 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb5448), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb5440 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb5448);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb5440);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_04ce31d0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04ce31d0), iVar1 != 0)) {
    FUN_0085bec0(&DAT_04cdde30,&DAT_0406f9b4);
    FUN_001001d0(FUN_0084d5e0,&DAT_04cdde30,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_04ce31d0);
  }
  return (long *)&DAT_04cdde30;
}

