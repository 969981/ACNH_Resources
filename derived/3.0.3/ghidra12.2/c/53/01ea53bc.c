
void FUN_01ea53bc(long param_1,uint param_2)

{
  int iVar1;
  ulong uVar2;
  long lVar3;
  long *plVar4;
  undefined *local_38;
  char *pcStack_30;
  uint local_24;
  
  uVar2 = 0x20000;
  if ((param_2 & 1) == 0) {
    uVar2 = 0;
  }
  *(ulong *)(param_1 + 0xad58) = *(ulong *)(param_1 + 0xad58) & 0xfffffffffffdffff | uVar2;
  plVar4 = *(long **)(*(long *)(param_1 + 8) + 0x60);
  if (plVar4 != (long *)0x0) {
    if (((*PTR_DAT_04bb37b8 & 1) == 0) &&
       (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb37b8), iVar1 != 0)) {
      *(undefined **)PTR_DAT_04bb37b0 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37b8);
    }
    uVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,PTR_DAT_04bb37b0);
    if ((uVar2 & 1) != 0) {
      local_24 = param_2 & 1;
      local_38 = PTR_DAT_04bb2020 + 0x10;
      pcStack_30 = "IsTalking";
      if (((plVar4[0x227] != 0) && (lVar3 = *(long *)(plVar4[0x227] + 0x78), lVar3 != 0)) &&
         (plVar4 = *(long **)(lVar3 + 0x48), plVar4 != (long *)0x0)) {
        (**(code **)(*plVar4 + 0x28))(plVar4,&local_38,local_24);
      }
    }
  }
  return;
}

