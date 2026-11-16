
bool FUN_02543394(byte *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  int *piVar4;
  byte bVar5;
  bool bVar6;
  long *local_40;
  char local_38;
  char local_37;
  char local_36;
  int local_2c;
  byte local_28 [4];
  byte local_24 [4];
  
  if (param_1[8] != 0) {
    bVar5 = *param_1;
    if (7 < bVar5) {
      bVar5 = 0xff;
    }
    if (*(int *)(param_1 + 4) < 0) {
      local_28[0] = bVar5;
      FUN_0266b270(local_28);
    }
    else {
      local_24[0] = bVar5;
      FUN_0266b170(local_24);
    }
  }
  piVar4 = (int *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      piVar4 = (int *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_2c = *piVar4;
  if (local_2c == 0) {
    bVar6 = false;
  }
  else {
    FUN_0071c8d0(&local_40,&local_2c,PTR_DAT_04bb3238,0);
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
    bVar6 = ((local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0') && local_36 != '\0';
    if (((local_40 != (long *)0x0 && local_38 != '\0') && local_37 != '\0') && local_36 != '\0') {
      FUN_023203ac(local_40,*(undefined4 *)(param_1 + 0xc),0);
    }
  }
  return bVar6;
}

