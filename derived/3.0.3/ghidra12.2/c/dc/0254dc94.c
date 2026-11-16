
uint FUN_0254dc94(byte *param_1,undefined8 param_2)

{
  long *plVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  undefined4 *puVar5;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_4;
  
  puVar5 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar5 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_4 = *puVar5;
  FUN_0071c8d0(&local_30,&local_4,PTR_DAT_04bb3238,0);
  plVar1 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar4 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar4 & 1) == 0) {
      local_27 = '\0';
    }
  }
  uVar2 = 0;
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
     (local_26 != '\0')) {
    uVar2 = FUN_023f8bf8(local_30,param_2);
  }
  return uVar2 & 1;
}

