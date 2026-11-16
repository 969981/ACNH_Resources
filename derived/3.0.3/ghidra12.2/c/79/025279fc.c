
undefined8 FUN_025279fc(byte *param_1)

{
  long *plVar1;
  int iVar2;
  ulong uVar3;
  undefined8 uVar4;
  short *psVar5;
  undefined4 *puVar6;
  long lVar7;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_4;
  
  puVar6 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar6 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_4 = *puVar6;
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
  uVar4 = 0;
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
     (local_26 != '\0')) {
    uVar4 = 0;
    if ((*(uint *)(local_30 + 0x302) < 10) &&
       ((1 << (ulong)(*(uint *)(local_30 + 0x302) & 0x1f) & 0x20eU) != 0)) {
      if (local_30[0x53] == 0) {
        psVar5 = (short *)PTR_DAT_04bb37e0;
      }
      else {
        lVar7 = *(long *)(local_30[0x53] + 0x1480);
        psVar5 = (short *)(lVar7 + ((ulong)*(uint *)(lVar7 + 0x10) & 1) * 0x20 + 0x14);
      }
      if ((*psVar5 == -2) && (psVar5 = (short *)FUN_02547c90(param_1), *psVar5 == -2)) {
        return 0;
      }
      uVar3 = FUN_00a738a0(param_1,0);
      uVar4 = 2;
      if ((uVar3 & 1) == 0) {
        uVar4 = 0;
      }
      FUN_024780c0(local_30,uVar4,0,0,0,0);
      uVar4 = 1;
    }
  }
  return uVar4;
}

