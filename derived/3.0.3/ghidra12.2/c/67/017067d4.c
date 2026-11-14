
long * FUN_017067d4(long param_1,undefined4 param_2,int param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long *plVar5;
  long local_38;
  char local_30;
  char local_2f;
  int local_24;
  undefined4 uStack_4;
  
  plVar5 = (long *)(param_1 + 0x1490);
  if (param_3 == 0) {
    plVar5 = (long *)(param_1 + 0x1480);
  }
  plVar1 = (long *)(param_1 + 0x1488);
  if (param_3 != 1) {
    plVar1 = plVar5;
  }
  lVar4 = *plVar1;
  if ((lVar4 != 0) &&
     (local_24 = *(int *)(lVar4 + ((ulong)*(uint *)(lVar4 + 0x10) & 1) * 0x20 + 0x28), local_24 != 0
     )) {
    uStack_4 = param_2;
    FUN_0071c8d0(&local_38,&local_24,&uStack_4,0);
    if (local_38 == 0) {
      return (long *)0x0;
    }
    if (local_30 == '\0') {
      return (long *)0x0;
    }
    if (local_2f == '\0') {
      return (long *)0x0;
    }
    plVar5 = *(long **)(local_38 + 0x60);
    if (((*PTR_DAT_04bb3ed0 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3ed0), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3ec8 = PTR_DAT_04bb3070 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3ed0);
    }
    if (plVar5 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar5 + 0x10))(plVar5,PTR_DAT_04bb3ec8);
      if ((uVar3 & 1) == 0) {
        plVar5 = (long *)0x0;
      }
      return plVar5;
    }
  }
  return (long *)0x0;
}

