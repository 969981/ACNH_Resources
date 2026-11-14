
bool FUN_016f75d8(undefined8 param_1)

{
  int iVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  long *local_30;
  char local_28;
  char local_26;
  
  iVar1 = *(int *)(*(long *)PTR_DAT_04bb2118 + 0x508);
  if (DAT_05240274 == '\0' || DAT_05240278 != iVar1) {
    FUN_0071cb58(&local_30,PTR_DAT_04bb32f8,param_1,0);
    plVar2 = local_30;
    if (local_30 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3278);
      if ((uVar5 & 1) == 0) {
        local_26 = '\0';
      }
    }
    if (((local_30 == (long *)0x0) || (local_28 == '\0')) || (local_26 == '\0')) {
      bVar3 = DAT_05240274 != '\0';
    }
    else {
      iVar4 = FUN_00900a88();
      bVar3 = true;
      DAT_05240274 = '\x01';
      DAT_0524027c = 0 < iVar4;
      DAT_0524027d = iVar4 == 1;
      DAT_0524027e = iVar4 == 2;
      DAT_0524027f = iVar4 == 3;
      DAT_05240278 = iVar1;
    }
  }
  else {
    bVar3 = true;
  }
  return bVar3;
}

