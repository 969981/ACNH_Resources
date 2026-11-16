
undefined4 FUN_0251c328(byte *param_1,undefined4 param_2,uint param_3)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *local_40;
  char local_38;
  char local_36;
  undefined4 local_18;
  undefined4 local_14;
  
  puVar4 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar4 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_18 = *puVar4;
  local_14 = param_2;
  FUN_0071cb58(&local_40,&local_18,&local_14,0);
  plVar1 = local_40;
  if (local_40 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_36 = '\0';
    }
  }
  puVar4 = (undefined4 *)PTR_DAT_04bb2150;
  if ((((local_40 != (long *)0x0) && (local_38 != '\0')) && (local_36 != '\0')) &&
     (uVar3 = FUN_0231f270(local_40,param_3 & 1), (uVar3 & 1) != 0)) {
    puVar4 = (undefined4 *)(local_40[0xd] + 0x294);
  }
  return *puVar4;
}

