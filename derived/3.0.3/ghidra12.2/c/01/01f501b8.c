
byte FUN_01f501b8(long param_1)

{
  int iVar1;
  ulong uVar2;
  long *plVar3;
  
  plVar3 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar3 != (long *)0x0) {
    if (((*PTR_DAT_04bb37c8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37c8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb37c0 = PTR_DAT_04bb37a8 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37c8);
    }
    uVar2 = (**(code **)(*plVar3 + 0x10))(plVar3,PTR_DAT_04bb37c0);
    if ((uVar2 & 1) != 0) {
      return *(byte *)(plVar3 + 0xc18) & 1;
    }
  }
  return 0;
}

