
undefined8 FUN_0253d440(byte *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined4 *puVar5;
  long *local_38;
  char local_30;
  char local_2f;
  char local_2e;
  undefined4 local_24;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_24 = *puVar5;
  FUN_0071c8d0(&local_38,&local_24,PTR_DAT_04bb3238,0);
  plVar1 = local_38;
  if (local_38 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_2f = '\0';
    }
  }
  uVar4 = 0;
  if ((((local_38 != (long *)0x0) && (local_30 != '\0')) && (local_2f != '\0')) &&
     (local_2e != '\0')) {
    uVar3 = FUN_00a738a0(param_1,0);
    uVar4 = 0;
    if ((uVar3 & 1) != 0) {
      FUN_02443504(local_38,param_2);
      uVar4 = 1;
    }
  }
  return uVar4;
}

