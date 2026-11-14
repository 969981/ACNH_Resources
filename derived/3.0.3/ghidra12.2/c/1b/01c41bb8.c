
long * FUN_01c41bb8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bc0df8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc0df8), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc0df0 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc0df8);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc0df0), (uVar2 & 1) == 0)) {
    if (((DAT_0534c1d8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0534c1d8), iVar1 != 0)) {
      plVar3 = (long *)&DAT_0534c0b8;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "MuseumNameboardActorMgrParams";
      FUN_01c42290(&DAT_0534c0b8,&local_30);
      FUN_001001d0(&LAB_01c41cc4,&DAT_0534c0b8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_0534c1d8);
    }
    else {
      plVar3 = (long *)&DAT_0534c0b8;
    }
  }
  return plVar3;
}

