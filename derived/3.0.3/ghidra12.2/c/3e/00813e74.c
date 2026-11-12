
void FUN_00813e74(long param_1)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  undefined8 uVar13;
  int iVar14;
  byte *pbVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  int iVar20;
  long lVar21;
  long *plVar22;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  int local_a8;
  undefined *local_a0;
  undefined1 *puStack_98;
  undefined4 local_90;
  undefined1 local_8c [16];
  int local_7c;
  undefined8 local_78;
  undefined1 local_6d;
  byte local_64 [4];
  undefined *local_60;
  char *pcStack_58;
  
  if (*(char *)(param_1 + 0x98) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x30) == -1) {
    return;
  }
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar15 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_00813f08:
    if (*pbVar15 < 8) goto LAB_00813f80;
LAB_00813f14:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_00813f78:
      pbVar15 = PTR_DAT_04bb5038;
      goto LAB_00813f80;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar18 + 0x473);
    pbVar15 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar15 = (byte *)(lVar18 + 0x471);
      }
    }
    local_64[0] = *pbVar15;
    if (7 < local_64[0]) goto LAB_00813f78;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar15 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar15) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar15 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_00813f08;
      }
      goto LAB_00813f14;
    }
LAB_00813f80:
    local_64[0] = *pbVar15;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  lVar18 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_64,1);
  if (lVar18 != 0) {
    local_6d = 0;
    puStack_98 = local_8c;
    local_90 = 0x20;
    local_8c[0] = 0;
    local_a0 = PTR_DAT_04bb2028 + 0x10;
    lVar21 = lVar18 + 0x194b0;
    lVar16 = lVar21;
    if (*(long *)(lVar18 + 0x194b8) == 0) {
      lVar16 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    plVar1 = (long *)(lVar16 + 0x2a778);
    if ((*(long *)(lVar16 + 0x2a798) == 0) ||
       (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2a798) + 0x10), puVar9 == (undefined8 *)0x0))
    {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)*puVar9)();
      uVar10 = uVar10 & 0xffffffff;
    }
    plVar12 = DAT_04ccc690;
    plVar22 = *(long **)(param_1 + 0x78);
    if ((char)DAT_04ccc690[1] == '\0') {
      lVar11 = nn::oe::GetProgramTotalActiveTime();
      *plVar12 = lVar11;
      *(undefined1 *)(plVar12 + 1) = 1;
    }
    else {
      lVar11 = *DAT_04ccc690;
    }
    lVar17 = *plVar22;
    lVar19 = *(long *)(param_1 + 0x80);
    if ((*(long *)(lVar16 + 0x2a798) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar16 + 0x2a798) + 0x20), plVar12 != (long *)0x0)) {
      local_c0 = *plVar1;
      local_b8 = *(undefined8 *)(lVar16 + 0x2a780);
      local_b0 = 8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_c0);
    }
    *(long *)(*(long *)(lVar16 + 0x2a780) + *plVar1) = (lVar11 - lVar17) / 1000000000 + lVar19;
    FUN_038d1270(&local_a0,"Wherearen Total (index:%d)",*(undefined4 *)(param_1 + 0x30));
    (**(code **)(local_a0 + 0x18))(&local_a0);
    if ((*(long *)(lVar16 + 0x2a798) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar16 + 0x2a798) + 0x20), plVar12 != (long *)0x0)) {
      local_c0 = *plVar1;
      local_b8 = *(undefined8 *)(lVar16 + 0x2a780);
      local_b0 = 8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_c0);
    }
    if (*(long *)(lVar18 + 0x194b8) == 0) {
      lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    plVar1 = (long *)(lVar21 + 0x2a7b0);
    if ((*(long *)(lVar21 + 0x2a7d0) == 0) ||
       (puVar9 = *(undefined8 **)(*(long *)(lVar21 + 0x2a7d0) + 0x10), puVar9 == (undefined8 *)0x0))
    {
      uVar7 = 1;
    }
    else {
      uVar7 = (**(code **)*puVar9)();
      uVar7 = uVar7 ^ 1;
    }
    plVar12 = DAT_04ccc690;
    plVar22 = *(long **)(param_1 + 0x88);
    if ((char)DAT_04ccc690[1] == '\0') {
      lVar18 = nn::oe::GetProgramTotalActiveTime();
      *plVar12 = lVar18;
      *(undefined1 *)(plVar12 + 1) = 1;
    }
    else {
      lVar18 = *DAT_04ccc690;
    }
    lVar11 = *plVar22;
    lVar17 = *(long *)(param_1 + 0x90);
    if ((*(long *)(lVar21 + 0x2a7d0) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar21 + 0x2a7d0) + 0x20), plVar12 != (long *)0x0)) {
      local_c0 = *plVar1;
      local_b8 = *(undefined8 *)(lVar21 + 0x2a7b8);
      local_b0 = 8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_c0);
    }
    *(long *)(*(long *)(lVar21 + 0x2a7b8) + *plVar1) = (lVar18 - lVar11) / 1000000000 + lVar17;
    FUN_038d1270(&local_a0,"Wherearen Daily (index:%d)",*(undefined4 *)(param_1 + 0x30));
    (**(code **)(local_a0 + 0x18))(&local_a0);
    if ((*(long *)(lVar21 + 0x2a7d0) != 0) &&
       (plVar12 = *(long **)(*(long *)(lVar21 + 0x2a7d0) + 0x20), plVar12 != (long *)0x0)) {
      local_c0 = *plVar1;
      local_b8 = *(undefined8 *)(lVar21 + 0x2a7b8);
      local_b0 = 8;
      (**(code **)(*plVar12 + 0x20))(plVar12,&local_c0);
    }
    if ((((uVar7 & 1) == 0) && (*(long *)(lVar21 + 0x2a7d0) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar21 + 0x2a7d0) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
    if ((((uVar10 & 1) != 0) && (*(long *)(lVar16 + 0x2a798) != 0)) &&
       (puVar9 = *(undefined8 **)(*(long *)(lVar16 + 0x2a798) + 0x18), puVar9 != (undefined8 *)0x0))
    {
      (**(code **)*puVar9)();
    }
  }
  iVar8 = nn::time::StandardNetworkSystemClock::GetCurrentTime((PosixTime *)&local_a0);
  if (iVar8 == 0) {
    uVar13 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
    iVar14 = (int)(char)((ulong)uVar13 >> 0x10);
    local_c0 = CONCAT44(iVar14,(int)(short)uVar13);
    iVar8 = iVar14 + 0xc;
    if (2 < iVar14) {
      iVar8 = iVar14;
    }
    iVar6 = (int)(short)uVar13 - (uint)(iVar14 < 3);
    iVar5 = (iVar8 * 0x1a + 0x10) * 0x6667;
    iVar8 = (int)uVar13 >> 0x18;
    iVar14 = iVar6 + 3;
    if (-1 < iVar6) {
      iVar14 = iVar6;
    }
    iVar20 = (int)((ulong)((long)iVar6 * -0x51eb851f) >> 0x20);
    local_b8 = CONCAT44((iVar6 + iVar8 + (iVar14 >> 2) + ((iVar20 >> 5) - (iVar20 >> 0x1f)) +
                         iVar6 / 400 + ((iVar5 >> 0x12) - (iVar5 >> 0x1f))) % 7,iVar8);
    local_b0 = CONCAT44((int)((ulong)uVar13 >> 0x10) >> 0x18,(int)((ulong)uVar13 >> 8) >> 0x18);
    local_a8 = (int)((ulong)uVar13 >> 0x18) >> 0x18;
    FUN_00813c8c(param_1,1,&local_c0);
  }
  local_60 = PTR_DAT_04bb2020 + 0x10;
  pcStack_58 = "wherearen_status";
  FUN_0260140c(&local_a0,&local_60);
  local_78 = 0;
  local_60 = (undefined *)((ulong)local_60 & 0xffffffff00000000);
  puVar2 = PTR_DAT_04bc3520 + 0x10;
  local_a0 = puVar2;
  FUN_025fa900(&local_a0,&local_60);
  local_a0 = puVar2;
  iVar8 = FUN_025faf7c(&local_a0);
  if (iVar8 != -1) {
    iVar8 = (**(code **)(local_a0 + 0x20))(&local_a0);
    local_60 = (undefined *)CONCAT44(local_60._4_4_,iVar8);
    if (iVar8 < 0xd) goto LAB_00814404;
  }
  if (local_7c == 0) {
    local_7c = 1;
  }
LAB_00814404:
  FUN_02601530(&local_a0);
  *(undefined1 *)(param_1 + 0x98) = 0;
  return;
}

