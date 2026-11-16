
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0253e554(byte *param_1)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  long *plVar9;
  char *__src;
  long lVar10;
  undefined4 uVar11;
  uint *puVar12;
  ulong uVar13;
  long *plVar14;
  short *psVar15;
  uint uVar16;
  undefined1 auStack_1a0 [8];
  char *local_198;
  int local_190;
  char *local_140;
  int local_138;
  undefined1 auStack_f0 [8];
  char *local_e8;
  int local_e0;
  undefined1 local_98;
  undefined4 local_94;
  undefined4 local_7c;
  undefined4 local_78;
  
  puVar3 = PTR_DAT_04bb3238;
  puVar2 = PTR_DAT_04bb27c0;
  puVar12 = (uint *)PTR_DAT_04bb3238;
  if (((ulong)*param_1 < 8) && (DAT_054f5738 != 0)) {
    puVar12 = (uint *)(DAT_054f5738 + (ulong)*param_1 * 4 + 0xde8);
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    return 0;
  }
  uVar16 = *puVar12;
  if ((((uVar16 == 0) ||
       (plVar14 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar14 == (long *)0x0)) ||
      ((*(uint *)(plVar14 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar14 + 0x46) != uVar16)) {
    plVar14 = (long *)0x0;
  }
  if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
    plVar9 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar10 = *(long *)puVar2;
    iVar7 = (**(code **)(*plVar9 + 0x60))();
    if (iVar7 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_0253e650;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar10 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_0253e650:
    uVar16 = 0;
  }
  if (plVar14 == (long *)0x0) {
    return 0;
  }
  lVar10 = plVar14[0x2a];
  uVar1 = *(uint *)(plVar14 + 0x49);
  if (((*PTR_DAT_04bb3778 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3778), iVar7 != 0))
  {
    *(undefined **)PTR_DAT_04bb3770 = PTR_DAT_04bb3780 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3778);
  }
  uVar8 = (**(code **)(*plVar14 + 0x20))(plVar14,PTR_DAT_04bb3770);
  if ((int)lVar10 != 1) {
    return 0;
  }
  if ((uVar8 & uVar16) == 0) {
    return 0;
  }
  if ((uVar1 >> 4 & 1) == 0) {
    return 0;
  }
  FUN_0257a010(auStack_1a0);
  if ((DAT_054f5738 == 0) || (uVar13 = (ulong)*param_1, 7 < uVar13)) {
    if ((DAT_054f0c70 & 1) == 0) {
      iVar7 = __cxa_guard_acquire(&DAT_054f0c70);
      psVar15 = &DAT_054f0c08;
      if (iVar7 != 0) {
        DAT_054f0c1c._0_4_ = 0;
        DAT_054f0c1c._4_4_ = 0;
        DAT_054f0c68 = 1;
        DAT_054f0c6c = 0;
        DAT_054f0c24._0_4_ = 0;
        DAT_054f0c24._4_4_ = 0;
        DAT_054f0c2c._0_4_ = 0;
        DAT_054f0c2c._4_4_ = 0;
        _DAT_054f0c44 = 0;
        DAT_054f0c34._0_4_ = 0;
        DAT_054f0c34._4_4_ = 0;
        DAT_054f0c3c._0_4_ = 0;
        DAT_054f0c3c._4_4_ = 0;
        _DAT_054f0c08 = 0;
        _DAT_054f0c10 = 1;
        DAT_054f0c14._0_4_ = 0;
        DAT_054f0c14._4_4_ = 0;
        DAT_054f0c48 = 0;
        DAT_054f0c50 = 0;
        DAT_054f0c58 = 0;
        DAT_054f0c60 = 0;
        __cxa_guard_release(&DAT_054f0c70);
      }
    }
    else {
      psVar15 = &DAT_054f0c08;
    }
  }
  else {
    psVar15 = (short *)(DAT_054f5738 + uVar13 * 0xd0 +
                        (ulong)(*(uint *)(DAT_054f5738 + uVar13 * 4 + 0xd68) & 1) * 0x68 + 0x6e8);
  }
  if (((char)psVar15[0x32] == '\0') || (*psVar15 != *(short *)PTR_DAT_04bb6298)) {
    uVar11 = 1;
  }
  else {
    uVar11 = *(undefined4 *)(psVar15 + 0x30);
  }
  switch(uVar11) {
  default:
    if (local_e8 == "PlayerWait") goto LAB_0253e878;
    __src = "PlayerWait";
    bVar4 = SBORROW4(local_e0,10);
    bVar5 = local_e0 + -10 < 0;
    bVar6 = local_e0 == 10;
    iVar7 = 10;
    break;
  case 2:
  case 3:
    if (local_e8 == "CommonSitWait") goto LAB_0253e878;
    __src = "CommonSitWait";
    bVar4 = SBORROW4(local_e0,0xd);
    bVar5 = local_e0 + -0xd < 0;
    bVar6 = local_e0 == 0xd;
    iVar7 = 0xd;
    break;
  case 4:
    FUN_023ea384(plVar14,auStack_f0);
    goto LAB_0253e878;
  case 5:
    if (local_e8 == "PlayerSwimStand") goto LAB_0253e878;
    __src = "PlayerSwimStand";
    goto LAB_0253e854;
  case 6:
    if (local_e8 == "PlayerDiveWait") goto LAB_0253e878;
    __src = "PlayerDiveWait";
    bVar4 = SBORROW4(local_e0,0xe);
    bVar5 = local_e0 + -0xe < 0;
    bVar6 = local_e0 == 0xe;
    iVar7 = 0xe;
    break;
  case 7:
    if (local_e8 == "PlayerSWalkWait") goto LAB_0253e878;
    __src = "PlayerSWalkWait";
LAB_0253e854:
    bVar4 = SBORROW4(local_e0,0xf);
    bVar5 = local_e0 + -0xf < 0;
    bVar6 = local_e0 == 0xf;
    iVar7 = 0xf;
  }
  if (bVar6 || bVar5 != bVar4) {
    iVar7 = local_e0 + -1;
  }
  memcpy(local_e8,__src,(long)iVar7);
  local_e8[iVar7] = '\0';
LAB_0253e878:
  if (local_198 != "System_CmnDialog") {
    iVar7 = 0x10;
    if (local_190 < 0x11) {
      iVar7 = local_190 + -1;
    }
    memcpy(local_198,"System_CmnDialog",(long)iVar7);
    local_198[iVar7] = '\0';
  }
  if (local_140 != "TipsChat") {
    iVar7 = 8;
    if (local_138 < 9) {
      iVar7 = local_138 + -1;
    }
    memcpy(local_140,"TipsChat",(long)iVar7);
    local_140[iVar7] = '\0';
  }
  local_94 = *(undefined4 *)puVar3;
  local_98 = 0;
  local_7c = *(undefined4 *)PTR_DAT_04bb37e0;
  local_78 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  FUN_024480f0(plVar14,auStack_1a0);
  return 1;
}

