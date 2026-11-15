
void FUN_020b2a14(undefined8 param_1)

{
  uint uVar1;
  uint *puVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  bool bVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  float *pfVar12;
  long *plVar13;
  byte *pbVar14;
  byte bVar15;
  long lVar16;
  long *plVar17;
  undefined8 uVar18;
  float fVar19;
  float fVar20;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_50;
  long local_48;
  
  puVar5 = PTR_DAT_04bb2020;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    return;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 3 & 1) == 0) {
    return;
  }
  uVar18 = *(undefined8 *)PTR_DAT_04bb32f0;
  local_50 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "Easter";
  if ((char)(local_50 >> 0x20) < '\x05') {
    local_48 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
    local_48 = local_48 + -0x15180;
    local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_48);
  }
  uVar7 = local_50;
  uVar11 = local_50 >> 0x30;
  local_50._0_6_ = CONCAT24(5,(undefined4)local_50);
  local_50 = CONCAT26((short)uVar11,(undefined6)local_50) & 0xff00ffffffffffff;
  uVar11 = FUN_00879dd0(uVar18,&local_60,uVar7,uVar7 >> 0x10,uVar7 >> 0x18,0);
  if ((uVar11 & 1) == 0) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb39b0;
  pbVar14 = PTR_DAT_04bb32e0;
  if (lVar16 == 0) {
LAB_020b2b70:
    if (*pbVar14 < 8) goto LAB_020b2be8;
LAB_020b2b7c:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_020b2be0:
      pbVar14 = PTR_DAT_04bb5038;
      goto LAB_020b2be8;
    }
    lVar16 = **(long **)PTR_DAT_04bb27d0;
    bVar15 = *(byte *)(lVar16 + 0x473);
    pbVar14 = PTR_DAT_04bb5038;
    if ((long)(char)bVar15 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar16 + 0x48) + ((long)(char)bVar15 & 0xffffffffU) * 0x20;
      if (7 < bVar15) {
        puVar2 = (uint *)(lVar16 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar14 = (byte *)(lVar16 + 0x471);
      }
    }
    bVar15 = *pbVar14;
    bVar8 = 7 < bVar15;
    if (bVar8) {
      bVar15 = 0xff;
    }
    local_48 = CONCAT71(local_48._1_7_,bVar15);
    if (bVar8) goto LAB_020b2be0;
  }
  else {
    if (*(int *)(lVar16 + 0x15c) != 0) {
      pbVar14 = (byte *)(lVar16 + 0x158);
    }
    if (7 < *pbVar14) {
      if ((*(int *)(lVar16 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar14 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_020b2b70;
      }
      goto LAB_020b2b7c;
    }
LAB_020b2be8:
    bVar3 = *pbVar14;
    bVar15 = bVar3;
    if (7 < bVar3) {
      bVar15 = 0xff;
    }
    local_48 = CONCAT71(local_48._1_7_,bVar15);
    if (7 < bVar3) {
      return;
    }
  }
  local_60 = puVar5 + 0x10;
  pcStack_58 = "PynTalkNowFlag";
  iVar9 = FUN_02753180(&local_48,&local_60);
  if (iVar9 == 0) {
    return;
  }
  pfVar12 = (float *)FUN_0251b3b0(&local_48,0);
  if (pfVar12 == (float *)0x0) {
    return;
  }
  local_60 = puVar5 + 0x10;
  pcStack_58 = "pyn";
  uVar10 = FUN_020a4f40(param_1,&local_60,PTR_DAT_04bb3238,1);
  puVar6 = PTR_DAT_04bb27c0;
  lVar16 = *(long *)PTR_DAT_04bb27c0;
  if (lVar16 == 0) {
    return;
  }
  if ((((uVar10 == 0) ||
       (plVar17 = *(long **)(*(long *)(*(long *)(lVar16 + 0x1c0) + 8) + (ulong)(uVar10 >> 0x14) * 8)
       , plVar17 == (long *)0x0)) || ((*(uint *)(plVar17 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar17 + 0x46) != uVar10)) {
    plVar17 = (long *)0x0;
  }
  if ((*(int *)(lVar16 + 0x288) == 1) || (*(int *)(lVar16 + 0x288) == -1)) {
    plVar13 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar16 = *(long *)puVar6;
    iVar9 = (**(code **)(*plVar13 + 0x60))();
    if (iVar9 < 0x11) {
      uVar10 = 1;
      goto LAB_020b2d08;
    }
    if (*(uint *)(lVar16 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar16 + 0x5e8) & 0x1f) & 1;
      goto LAB_020b2d08;
    }
  }
  uVar10 = 0;
LAB_020b2d08:
  if (plVar17 != (long *)0x0) {
    lVar16 = plVar17[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar9 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar11 = (**(code **)(*plVar17 + 0x20))(plVar17,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar16 == 1) {
      uVar1 = uVar10;
    }
    if ((((uVar11 & 1) != 0) && (uVar1 != 0)) &&
       (fVar19 = *pfVar12 - *(float *)(plVar17[0xd] + 0x278),
       fVar20 = pfVar12[2] - *(float *)(plVar17[0xd] + 0x280),
       11025.0 < fVar20 * fVar20 + fVar19 * fVar19)) {
      local_60 = puVar5 + 0x10;
      pcStack_58 = "PynTalkNowFlag";
      FUN_027533a8(&local_48,&local_60,0);
    }
  }
  return;
}

