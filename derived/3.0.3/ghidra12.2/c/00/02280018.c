
long * FUN_02280018(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bc2e48 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2e48), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2e40 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2e48);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc2e40), (uVar2 & 1) == 0)) {
    if (((DAT_05471708 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05471708), iVar1 != 0)) {
      plVar3 = (long *)&DAT_054715b8;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "ObjectSnowBallActorParams";
      FUN_02290880(&DAT_054715b8,&local_30);
      FUN_001001d0(&LAB_02280990,&DAT_054715b8,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05471708);
    }
    else {
      plVar3 = (long *)&DAT_054715b8;
    }
  }
  return plVar3;
}

