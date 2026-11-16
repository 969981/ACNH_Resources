
undefined8 FUN_0253dcc0(byte *param_1)

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
  undefined *local_1b0;
  char *pcStack_1a8;
  undefined1 auStack_1a0 [8];
  char *local_198;
  int local_190;
  undefined1 *local_140;
  int local_138;
  char *local_e8;
  int local_e0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_7c;
  undefined4 local_78;
  
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
      goto joined_r0x0253df50;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0253df50;
    }
  }
  uVar10 = 0;
joined_r0x0253df50:
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
  FUN_0257a010(auStack_1a0);
  if (local_e8 != "PlayerWait") {
    iVar4 = 10;
    if (local_e0 < 0xb) {
      iVar4 = local_e0 + -1;
    }
    memcpy(local_e8,"PlayerWait",(long)iVar4);
    local_e8[iVar4] = '\0';
  }
  if (local_198 != "Player_StartGamePhoneCall") {
    iVar4 = 0x19;
    if (local_190 < 0x1a) {
      iVar4 = local_190 + -1;
    }
    memcpy(local_198,"Player_StartGamePhoneCall",(long)iVar4);
    local_198[iVar4] = '\0';
  }
  if (local_140 != &DAT_04066c7f) {
    iVar4 = 4;
    if (local_138 < 5) {
      iVar4 = local_138 + -1;
    }
    memcpy(local_140,&DAT_04066c7f,(long)iVar4);
    local_140[iVar4] = 0;
  }
  local_94 = *(undefined4 *)puVar3;
  local_98 = 0;
  local_7c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_024480f0(plVar9,auStack_1a0);
  FUN_02332d7c(plVar9,0);
  local_1b0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1a8 = "StandByGameStartPhoneCall";
  FUN_0274bfe8(param_1,&local_1b0,0);
  return 1;
}

