
void FUN_016f742c(undefined4 *param_1,undefined8 param_2,ulong param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  code *pcVar4;
  long *local_50;
  char local_48;
  char local_46;
  long *local_40;
  char local_38;
  char local_36;
  undefined4 local_14;
  
  FUN_0071cb58(&local_40,PTR_DAT_04bb32f8,param_2,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3280 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3280);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
    if ((uVar3 & 1) == 0) {
      local_36 = '\0';
    }
  }
  if (((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_36 != '\0')) {
    local_14 = *(undefined4 *)((long)local_40 + 0x274);
    FUN_0071cb58(&local_50,&local_14,param_2,0);
    plVar1 = local_50;
    if (local_50 != (long *)0x0) {
      if (((*PTR_DAT_04bb32d8 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32d8), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb32d0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32d8);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb32d0);
      if ((uVar3 & 1) == 0) {
        local_46 = '\0';
      }
    }
    if (((local_50 != (long *)0x0) && (local_48 != '\0')) && (local_46 != '\0')) {
      if ((param_3 & 1) == 0) {
        pcVar4 = *(code **)(*local_50 + 0x100);
      }
      else {
        pcVar4 = *(code **)(*local_50 + 0x108);
      }
      (*pcVar4)(param_1);
      return;
    }
  }
  *param_1 = 0;
  return;
}

