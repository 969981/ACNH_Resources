
void FUN_02359548(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 local_40;
  undefined4 uStack_3c;
  char local_38;
  char local_37;
  long *local_30;
  char local_28;
  char local_26;
  undefined4 local_8;
  undefined4 uStack_4;
  
  local_40 = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_30,PTR_DAT_04bb32f8,&local_40,0);
  plVar1 = local_30;
  if (local_30 != (long *)0x0) {
    if ((*PTR_DAT_04bb3280 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3280);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb3280);
      }
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3278);
    if ((uVar3 & 1) == 0) {
      local_26 = '\0';
    }
  }
  if (((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_26 != '\0')) {
    uStack_4 = *(undefined4 *)((long)local_30 + 0x274);
    local_8 = *(undefined4 *)(param_1 + 0x230);
    FUN_0071c8d0(&local_40,&uStack_4,&local_8,0);
    plVar1 = (long *)CONCAT44(uStack_3c,local_40);
    if (plVar1 != (long *)0x0) {
      if (((*PTR_DAT_04bb32c0 & 1) == 0) &&
         (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb32c0), iVar2 != 0)) {
        *(undefined **)PTR_DAT_04bb32b8 = PTR_DAT_04bb32c8 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb32c0);
      }
      uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb32b8);
      if ((uVar3 & 1) == 0) {
        local_37 = '\0';
      }
    }
    if (((CONCAT44(uStack_3c,local_40) != 0) && (local_38 != '\0')) && (local_37 != '\0')) {
      *(undefined4 *)(CONCAT44(uStack_3c,local_40) + 0x38014) = 1;
    }
  }
  return;
}

