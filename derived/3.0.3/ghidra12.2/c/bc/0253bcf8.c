
bool FUN_0253bcf8(byte *param_1,byte param_2)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined4 *puVar4;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_4;
  
  puVar4 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar4 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_4 = *puVar4;
  FUN_0071c8d0(&local_30,&local_4,PTR_DAT_04bb3238,0);
  plVar1 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar2 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar2 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar3 = (**(code **)(*plVar1 + 0x20))(plVar1,PTR_DAT_04bb3770);
    if ((uVar3 & 1) == 0) {
      local_27 = '\0';
    }
  }
  if (((local_30 != (long *)0x0 && local_28 != '\0') && local_27 != '\0') && local_26 != '\0') {
    *(undefined4 *)(local_30 + 0x322) = 0x2c8e3;
    *(byte *)((long)local_30 + 0x190f) = param_2 & 1;
    *(undefined2 *)((long)local_30 + 0x1914) = 0xfff8;
    *(undefined4 *)((long)local_30 + 0x1916) = 0x2ea17;
  }
  return ((local_30 != (long *)0x0 && local_28 != '\0') && local_27 != '\0') && local_26 != '\0';
}

