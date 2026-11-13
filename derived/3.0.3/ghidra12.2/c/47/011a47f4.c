
long * FUN_011a47f4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  undefined1 *puStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bbb998 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbb998), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbb990 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbb998);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbb990), (uVar2 & 1) == 0)) {
    if (((DAT_050d07a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_050d07a8), iVar1 != 0)) {
      plVar3 = (long *)&DAT_050d0628;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      puStack_28 = &DAT_0406f9b4;
      FUN_011a5910(&DAT_050d0628,&local_30);
      FUN_001001d0(PTR_LAB_04bbb9a0,&DAT_050d0628,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_050d07a8);
    }
    else {
      plVar3 = (long *)&DAT_050d0628;
    }
  }
  return plVar3;
}

