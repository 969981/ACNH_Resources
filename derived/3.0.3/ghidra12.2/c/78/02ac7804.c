
undefined8 FUN_02ac7804(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_2c;
  long *local_28;
  char local_20;
  char local_1e;
  undefined4 local_14;
  
  local_14 = *(undefined4 *)(param_1 + 0x234);
  local_2c = *(undefined4 *)(param_1 + 0x230);
  FUN_0071cb58(&local_28,&local_14,&local_2c,0);
  plVar1 = local_28;
  if (local_28 != (long *)0x0) {
    if ((*PTR_DAT_04bc44b8 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc44b8);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc44b0 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc44b8);
      }
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bc44b0);
    if ((uVar3 & 1) == 0) {
      local_1e = '\0';
    }
  }
  if ((((local_28 == (long *)0x0) || (local_20 == '\0')) || (local_1e == '\0')) ||
     ((*(uint *)(local_28 + 0x49) >> 1 & 1) != 0)) {
    return 0;
  }
  uVar4 = FUN_02b7c680();
  return uVar4;
}

