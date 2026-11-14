
bool FUN_016f7738(undefined8 param_1)

{
  bool bVar1;
  int iVar2;
  long *plVar3;
  bool bVar4;
  byte bVar5;
  int iVar6;
  ulong uVar7;
  long *local_30;
  char local_28;
  char local_26;
  
  iVar2 = *(int *)(*(long *)PTR_DAT_04bb2118 + 0x508);
  if (DAT_05240268 == '\0' || DAT_0524026c != iVar2) {
    FUN_0071cb58(&local_30,PTR_DAT_04bb32f8,param_1,0);
    plVar3 = local_30;
    if (local_30 != (long *)0x0) {
      if (((*PTR_DAT_04bb3280 & 1) == 0) &&
         (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar6 != 0)) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
      uVar7 = (**(code **)(*plVar3 + 0x20))(plVar3,PTR_DAT_04bb3278);
      if ((uVar7 & 1) == 0) {
        local_26 = '\0';
      }
    }
    if (((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_26 != '\0')) {
      DAT_05240268 = '\x01';
      DAT_0524026c = iVar2;
      bVar5 = FUN_00901e14();
      DAT_05240270 = bVar5 & 1;
    }
    bVar4 = DAT_05240268 != '\0';
  }
  else {
    bVar4 = true;
  }
  bVar1 = false;
  if (DAT_05240270 != 0) {
    bVar1 = bVar4;
  }
  return bVar1;
}

