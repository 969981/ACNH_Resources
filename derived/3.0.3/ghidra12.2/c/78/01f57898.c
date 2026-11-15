
void FUN_01f57898(long param_1)

{
  uint uVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  undefined *local_30;
  undefined *puStack_28;
  
  plVar5 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar5 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb37b0);
    if ((uVar3 & 1) != 0) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      puStack_28 = &DAT_0409b281;
      if (((plVar5[0x227] != 0) && (lVar4 = *(long *)(plVar5[0x227] + 0x78), lVar4 != 0)) &&
         (plVar5 = *(long **)(lVar4 + 0x48), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,&local_30,0);
      }
    }
  }
  if ((*(uint *)(param_1 + 0x77b8) & 0xfffffffe) == 0x74) {
    uVar1 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
    if ((uVar1 < 10) && ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] != '\0')) {
      FUN_0219bcf0(&DAT_053fe348 + (ulong)uVar1 * 0xba0,0,0xffffffff,1,1);
      return;
    }
  }
  return;
}

