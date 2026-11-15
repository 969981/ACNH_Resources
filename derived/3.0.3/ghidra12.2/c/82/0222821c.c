
long * FUN_0222821c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(param_1 + 600);
  if (((*PTR_DAT_04bc2cd0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bc2cd0), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bc2cc8 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc2cd0);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bc2cc8), (uVar2 & 1) == 0)) {
    if (((DAT_0545eec0 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_0545eec0), iVar1 != 0)) {
      plVar3 = (long *)&DAT_0545eb58;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "ObjectBalloonActorParams";
      FUN_0222d850(&DAT_0545eb58,&local_30);
      FUN_001001d0(FUN_02228b48,&DAT_0545eb58,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_0545eec0);
    }
    else {
      plVar3 = (long *)&DAT_0545eb58;
    }
  }
  return plVar3;
}

