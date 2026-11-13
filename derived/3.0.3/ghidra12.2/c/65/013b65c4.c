
long * FUN_013b65c4(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  undefined *local_30;
  char *pcStack_28;
  
  plVar3 = *(long **)(*(long *)(param_1 + 0x48) + 600);
  if (((*PTR_DAT_04bbc908 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bbc908), iVar1 != 0))
  {
    *(undefined **)PTR_DAT_04bbc900 = PTR_DAT_04bb3608 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc908);
  }
  if ((plVar3 == (long *)0x0) ||
     (uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bbc900), (uVar2 & 1) == 0)) {
    if (((DAT_051af010 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_051af010), iVar1 != 0)) {
      plVar3 = (long *)&DAT_051ae210;
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "FishFieldActorParams";
      FUN_013e9f20(&DAT_051ae210,&local_30);
      FUN_001001d0(FUN_013b9890,&DAT_051ae210,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_051af010);
    }
    else {
      plVar3 = (long *)&DAT_051ae210;
    }
  }
  return plVar3;
}

