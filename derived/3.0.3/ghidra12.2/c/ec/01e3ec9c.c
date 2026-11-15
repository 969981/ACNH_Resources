
undefined8 FUN_01e3ec9c(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  uVar2 = FUN_01e3e7bc();
  if ((uVar2 & 1) != 0) {
    plVar3 = *(long **)(param_1 + 0x3b8);
    if (((*PTR_DAT_04bb6a18 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb6a18), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb6a10 = PTR_DAT_04bb4100 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb6a18);
    }
    if (((plVar3 != (long *)0x0) &&
        (uVar2 = (**(code **)*plVar3)(plVar3,PTR_DAT_04bb6a10), (uVar2 & 1) != 0)) &&
       (uVar2 = (**(code **)(*plVar3 + 0x80))(plVar3), (uVar2 & 1) != 0)) {
      return 1;
    }
  }
  return 0;
}

