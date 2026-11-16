
long * FUN_02948fec(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bc3bd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc3bd0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc3bc8 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3bd0);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc3bc8), (uVar2 & 1) == 0)) {
    if (((DAT_055d5c38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_055d5c38), iVar1 != 0)) {
      plVar3 = (long *)&DAT_055d41b0;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "SeafoodFieldActorMgrParams";
      FUN_0294b080(&DAT_055d41b0,&local_30);
      FUN_001001d0(FUN_02949710,&DAT_055d41b0,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_055d5c38);
    }
    else {
      plVar3 = (long *)&DAT_055d41b0;
    }
  }
  return plVar3;
}

