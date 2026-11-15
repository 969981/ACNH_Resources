
long * FUN_0228e9bc(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bc2e68 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2e68), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2e60 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2e68);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc2e60), (uVar2 & 1) == 0)) {
    if (((DAT_05472800 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05472800), iVar1 != 0)) {
      plVar3 = (long *)&DAT_054724c0;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "ObjectSnowBallActorMgrParams";
      FUN_022900d0(&DAT_054724c0,&local_30);
      FUN_001001d0(FUN_0228eac8,&DAT_054724c0,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05472800);
    }
    else {
      plVar3 = (long *)&DAT_054724c0;
    }
  }
  return plVar3;
}

