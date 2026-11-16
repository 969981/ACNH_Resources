
bool FUN_0254e188(byte *param_1)

{
  uint uVar1;
  long *plVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  uint uVar6;
  undefined4 *puVar7;
  long *local_30;
  char local_28;
  char local_27;
  char local_26;
  undefined4 local_1c [3];
  
  puVar7 = (undefined4 *)PTR_DAT_04bb3238;
  if ((ulong)*param_1 < 8) {
    if (DAT_054f5738 != 0) {
      puVar7 = (undefined4 *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
    }
  }
  local_1c[0] = *puVar7;
  FUN_0071c8d0(&local_30,local_1c,PTR_DAT_04bb3238,0);
  plVar2 = local_30;
  if (local_30 != (long *)0x0) {
    if (((*PTR_DAT_04bb3778 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb3778);
    }
    uVar5 = (**(code **)(*plVar2 + 0x20))(plVar2,PTR_DAT_04bb3770);
    if ((uVar5 & 1) == 0) {
      local_27 = '\0';
    }
  }
  bVar3 = true;
  if ((((local_30 != (long *)0x0) && (local_28 != '\0')) && (local_27 != '\0')) &&
     (local_26 != '\0')) {
    uVar6 = 0;
    if (local_30[0xe] != 0) {
      uVar1 = *(uint *)(local_30[0xe] + 0x280);
      uVar6 = 0;
      if (uVar1 < 0x149) {
        uVar6 = uVar1;
      }
    }
    bVar3 = uVar6 != 0x8e;
  }
  return bVar3;
}

