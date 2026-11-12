
long * FUN_0099f760(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bb60c0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb60c0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bb60b8 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb60c0);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb60b8), (uVar2 & 1) == 0)) {
    if (((DAT_04d009b8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04d009b8), iVar1 != 0)) {
      plVar3 = (long *)&DAT_04d005a8;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "CreatureShowActorMgrParams";
      FUN_009a18e0(&DAT_04d005a8,&local_30);
      FUN_001001d0(&LAB_0099f870,&DAT_04d005a8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_04d009b8);
    }
    else {
      plVar3 = (long *)&DAT_04d005a8;
    }
  }
  return plVar3;
}

