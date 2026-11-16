
undefined8 FUN_0253d2f8(byte *param_1,undefined8 param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  undefined4 local_14;
  
  puVar4 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar4 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_14 = *puVar4;
  FUN_0071c8d0(&local_40,&local_14,PTR_DAT_04bb3238,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_37 = '\0';
    }
  }
  uVar5 = 0;
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_37 != '\0')) &&
     (local_36 != '\0')) {
    uVar3 = FUN_00a738a0(param_1,0);
    uVar5 = 0;
    if ((uVar3 & 1) != 0) {
      uVar5 = 1;
      FUN_023c5664(local_40,param_2,1);
    }
  }
  return uVar5;
}

