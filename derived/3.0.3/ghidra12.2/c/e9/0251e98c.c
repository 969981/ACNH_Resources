
long * FUN_0251e98c(uint param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  undefined1 *puStack_28;
  
  if (((param_1 < 0xec) && (*(long *)PTR_DAT_04bb2f58 != 0)) &&
     (plVar3 = *(long **)(*(long *)PTR_DAT_04bb2f58 + (ulong)param_1 * 0x10), plVar3 != (long *)0x0)
     ) {
    if (((*PTR_DAT_04bc3110 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3110), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bc3108 = PTR_DAT_04bb3608 + 0x10;
      __cxa_guard_release(PTR_DAT_04bc3110);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc3108);
    if ((uVar2 & 1) != 0) {
      return plVar3;
    }
  }
  if (((DAT_054f4258 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_054f4258), iVar1 != 0)) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    puStack_28 = &DAT_0406f9b4;
    FUN_0235e000(&DAT_054f1368,&local_30);
    FUN_001001d0(PTR_FUN_04bc3100,&DAT_054f1368,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_054f4258);
  }
  return (long *)&DAT_054f1368;
}

