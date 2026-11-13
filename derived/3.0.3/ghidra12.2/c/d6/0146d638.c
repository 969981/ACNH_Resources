
long * FUN_0146d638(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  if (((param_1 < 0xec) && (*(long *)PTR_DAT_04bb2f58 != 0)) &&
     (plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + (ulong)param_1 * 0x10), plVar3 != (long *)0x0)
     ) {
    if (((*PTR_DAT_04bbcdc8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbcdc8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bbcdc0 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbcdc8);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbcdc0);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_051dc390 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051dc390), iVar1 != 0)) {
    FUN_014a9570(&DAT_051dbbe0,&DAT_0406f9b4);
    FUN_001001d0(FUN_0147a868,&DAT_051dbbe0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_051dc390);
  }
  return (long *)&DAT_051dbbe0;
}

