
void FUN_01ea6f54(long param_1)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined *local_30;
  undefined *puStack_28;
  
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar4 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,PTR_DAT_04bb37b0);
    if ((uVar2 & 1) != 0) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      puStack_28 = &DAT_0409b281;
      if (((plVar4[0x227] != 0) && (lVar3 = *(long *)(plVar4[0x227] + 0x78), lVar3 != 0)) &&
         (plVar4 = *(long **)(lVar3 + 0x48), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_30,0);
      }
    }
  }
  return;
}

