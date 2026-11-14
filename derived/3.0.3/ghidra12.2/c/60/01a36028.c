
long * FUN_01a36028(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + 0x60);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bbfdb0 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbfdb0), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbfda8 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbfdb0);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbfda8);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_052df2d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_052df2d8), iVar1 != 0)) {
    FUN_01a3aff0(&DAT_052d8cd0,&DAT_0406f9b4);
    FUN_001001d0(FUN_01a39700,&DAT_052d8cd0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_052df2d8);
  }
  return (long *)&DAT_052d8cd0;
}

