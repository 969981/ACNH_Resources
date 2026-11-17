
undefined8 FUN_02a68038(long param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 local_24;
  long *local_20;
  char local_18;
  char local_16;
  
  local_24 = *(undefined4 *)(*(long *)(param_1 + 0x48) + 0x230);
  FUN_0071cb58(&local_20,param_1 + 0x2c0,&local_24,0);
  plVar1 = local_20;
  if (local_20 != (long *)0x0) {
    if ((*PTR_DAT_04bc4480 & 1) == 0) {
      iVar2 = __cxa_guard_acquire(PTR_DAT_04bc4480);
      if (iVar2 != 0) {
        *(undefined **)PTR_DAT_04bc4478 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4480);
      }
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bc4478);
    if ((uVar3 & 1) == 0) {
      local_16 = '\0';
    }
  }
  if (((local_20 == (long *)0x0) || (local_18 == '\0')) || (local_16 == '\0')) {
    return 0;
  }
  uVar4 = FUN_02afcac0();
  return uVar4;
}

