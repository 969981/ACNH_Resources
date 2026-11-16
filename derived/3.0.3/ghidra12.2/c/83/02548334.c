
undefined8 FUN_02548334(byte *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *local_28;
  char local_20;
  char local_1f;
  char local_1e;
  undefined4 local_14;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_14 = *puVar5;
  FUN_0071cb58(&local_28,&local_14,PTR_DAT_04bb3238,0);
  plVar1 = local_28;
  if (local_28 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_1e = '\0';
    }
  }
  if ((((local_28 == (long *)0x0) || (local_20 == '\0')) || (local_1e == '\0')) ||
     (local_1f == '\0')) {
    return 0;
  }
  uVar4 = FUN_0244bc64();
  return uVar4;
}

