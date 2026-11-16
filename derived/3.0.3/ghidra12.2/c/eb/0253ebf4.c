
undefined8 FUN_0253ebf4(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  long lVar7;
  uint *puVar8;
  long *plVar9;
  uint uVar10;
  undefined1 auStack_190 [8];
  char *local_188;
  int local_180;
  undefined1 *local_130;
  int local_128;
  char *local_d8;
  int local_d0;
  undefined1 local_88;
  undefined4 local_84;
  undefined4 local_6c;
  undefined4 local_68;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  puVar8 = (uint *)PTR_DAT_04bb3238;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar8 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return 0;
  }
  uVar10 = *puVar8;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar2;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x0253ee48;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0253ee48;
    }
  }
  uVar10 = 0;
joined_r0x0253ee48:
  if (plVar9 == (long *)0x0) {
    return 0;
  }
  lVar7 = plVar9[0x2a];
  uVar1 = *(uint *)(plVar9 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar5 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3770);
  if ((int)lVar7 != 1) {
    return 0;
  }
  if ((uVar5 & uVar10) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  FUN_0257a010(auStack_190);
  if (local_d8 != "PlayerWait") {
    iVar4 = 10;
    if (local_d0 < 0xb) {
      iVar4 = local_d0 + -1;
    }
    memcpy(local_d8,"PlayerWait",(long)iVar4);
    local_d8[iVar4] = '\0';
  }
  if (local_188 != "SNPC_otg_32_WherearenEvent_PhoneCall") {
    iVar4 = 0x24;
    if (local_180 < 0x25) {
      iVar4 = local_180 + -1;
    }
    memcpy(local_188,"SNPC_otg_32_WherearenEvent_PhoneCall",(long)iVar4);
    local_188[iVar4] = '\0';
  }
  if (local_130 != &DAT_04066c7f) {
    iVar4 = 4;
    if (local_128 < 5) {
      iVar4 = local_128 + -1;
    }
    memcpy(local_130,&DAT_04066c7f,(long)iVar4);
    local_130[iVar4] = 0;
  }
  local_84 = *(undefined4 *)puVar3;
  local_88 = 0;
  local_6c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_68 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_024480f0(plVar9,auStack_190);
  return 1;
}

