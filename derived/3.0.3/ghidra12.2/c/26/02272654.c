
long * FUN_02272654(void)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + 0x340);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bc2e18 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2e18), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc2e10 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc2e18);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc2e10);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_054705a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054705a8), iVar1 != 0)) {
    FUN_02273670(&DAT_05470248,&DAT_0406f9b4);
    FUN_001001d0(&LAB_02272940,&DAT_05470248,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_054705a8);
  }
  return (long *)&DAT_05470248;
}

