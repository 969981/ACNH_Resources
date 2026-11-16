
bool FUN_02532ab8(byte *param_1)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long *local_28;
  char local_20;
  char local_1f;
  char local_1e;
  undefined4 local_18 [2];
  
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_18[0] = *puVar7;
  FUN_0071c8d0(&local_28,local_18,PTR_DAT_04bb3238,0);
  plVar2 = local_28;
  if (local_28 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_1f = '\0';
    }
  }
  bVar3 = false;
  if ((((local_28 != (long *)0x0) && (local_20 != '\0')) && (local_1f != '\0')) &&
     (local_1e != '\0')) {
    uVar6 = 0;
    if (local_28[0xe] != 0) {
      uVar1 = *(uint *)(local_28[0xe] + 0x280);
      uVar6 = 0;
      if (uVar1 < 0x149) {
        uVar6 = uVar1;
      }
    }
    bVar3 = uVar6 - 0x126 < 7;
  }
  return bVar3;
}

