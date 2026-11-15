
void FUN_022587bc(void)

{
  uint *puVar1;
  int iVar2;
  byte bVar3;
  short sVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  bool bVar17;
  bool bVar18;
  bool bVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  bool bVar25;
  bool bVar26;
  bool bVar27;
  ushort uVar28;
  int iVar29;
  int iVar30;
  uint uVar31;
  uint uVar32;
  undefined8 uVar33;
  undefined *puVar34;
  ulong uVar35;
  long lVar36;
  byte *pbVar37;
  long *plVar38;
  long lVar39;
  undefined *puVar40;
  undefined8 *puVar41;
  uint local_ac;
  undefined *local_a8;
  char *local_a0;
  undefined4 local_98;
  char local_94 [7];
  undefined1 local_8d;
  undefined *local_88;
  undefined *local_80;
  undefined8 local_78;
  char *pcStack_70;
  byte local_64 [4];
  
  puVar40 = PTR_DAT_04bc3a80;
  puVar5 = PTR_DAT_04bb2720;
  lVar36 = *(long *)PTR_DAT_04bb2720;
  if (lVar36 == 0) {
    puVar41 = &DAT_055c04a0;
  }
  else {
    puVar41 = &DAT_055c04a0;
    if (*(long *)(lVar36 + 0x330) != 0) {
      puVar41 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar36 + 0x338));
      iVar29 = FUN_006bd550(*puVar41,0);
      puVar41 = (undefined8 *)puVar40;
      if (iVar29 != 0x758f7eaf) {
        puVar41 = &DAT_055c04a0;
      }
    }
  }
  puVar7 = PTR_DAT_04bc3a48;
  puVar6 = PTR_DAT_04bb6298;
  iVar29 = *(int *)(puVar41 + 7);
  bVar8 = DAT_05ac0a90 != iVar29;
  bVar9 = DAT_05ac0aa0 != iVar29;
  bVar10 = DAT_05ac0ab0 != iVar29;
  bVar11 = DAT_05ac0ac0 != iVar29;
  bVar12 = DAT_05ac0ad0 != iVar29;
  bVar13 = DAT_05ac0ae0 != iVar29;
  bVar14 = DAT_05ac0af0 != iVar29;
  bVar15 = DAT_05ac0b00 != iVar29;
  bVar16 = DAT_05ac0b10 != iVar29;
  bVar17 = DAT_05ac0b20 != iVar29;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    uVar31 = 0;
  }
  else {
    local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x1d);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    uVar31 = *puVar1 >> 0x1d & 1;
  }
  uVar28 = 0;
  if (*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) {
    uVar28 = **(ushort **)PTR_DAT_04bc3a48 & 1;
  }
  if (*(int *)(puVar40 + 0x38) == -0x6d41fcf3) {
    uVar31 = 1;
  }
  if (uVar28 != 0) {
    return;
  }
  if (uVar31 != 0) {
    return;
  }
  lVar36 = *(long *)puVar5;
  if (lVar36 == 0) {
    puVar41 = &DAT_055c04a0;
    uVar33 = 0;
  }
  else {
    puVar41 = &DAT_055c04a0;
    uVar33 = 0;
    if (*(long *)(lVar36 + 0x330) != 0) {
      puVar41 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar36 + 0x338));
      uVar33 = FUN_006bd550(*puVar41,0);
      puVar41 = (undefined8 *)PTR_DAT_04bc3a78;
      if ((int)uVar33 != 0x758f7eaf) {
        puVar41 = &DAT_055c04a0;
      }
    }
  }
  puVar40 = PTR_DAT_04bb32e8;
  puVar5 = PTR_DAT_04bb2020;
  iVar2 = *(int *)(puVar41 + 7);
  bVar18 = DAT_05ac0a90 != iVar2;
  bVar19 = DAT_05ac0aa0 != iVar2;
  bVar20 = DAT_05ac0ab0 != iVar2;
  bVar21 = DAT_05ac0ac0 != iVar2;
  bVar22 = DAT_05ac0ad0 != iVar2;
  bVar23 = DAT_05ac0ae0 != iVar2;
  bVar24 = DAT_05ac0af0 != iVar2;
  bVar25 = DAT_05ac0b00 != iVar2;
  bVar26 = DAT_05ac0b10 != iVar2;
  bVar27 = DAT_05ac0b20 != iVar2;
  if ((((((((((((bVar8 && bVar9) && bVar10) && bVar11) && bVar12) && bVar13) && bVar14) && bVar15)
         && bVar16) && bVar17) && iVar29 != -0x6efba09b) && iVar29 != -0x21ba1d3a) &&
      iVar29 != -0x68a9a319) {
    DAT_04c48770 = 1;
    return;
  }
  lVar36 = *(long *)PTR_DAT_04bb32e8;
  if ((((*(long *)PTR_DAT_04bb39b0 == 0) || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)) ||
      (*(long *)PTR_DAT_04bb4718 == 0)) ||
     (pbVar37 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), 7 < *pbVar37)) {
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_02258ad0:
      pbVar37 = PTR_DAT_04bb5038;
      goto LAB_02258ad8;
    }
    lVar39 = **(long **)PTR_DAT_04bb27d0;
    bVar3 = *(byte *)(lVar39 + 0x473);
    pbVar37 = PTR_DAT_04bb5038;
    if ((long)(char)bVar3 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar39 + 0x48) + ((long)(char)bVar3 & 0xffffffffU) * 0x20;
      if (7 < bVar3) {
        puVar1 = (uint *)(lVar39 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar37 = (byte *)(lVar39 + 0x471);
      }
    }
    local_64[0] = *pbVar37;
    if (7 < local_64[0]) goto LAB_02258ad0;
  }
  else {
LAB_02258ad8:
    local_64[0] = *pbVar37;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  puVar34 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "SeqKKRaveStageDone";
  local_a8 = puVar34;
  uVar33 = FUN_02757a80(uVar33,&local_a8);
  if ((int)uVar33 == 0) {
    pcStack_70 = "KKFesPrePare";
    local_78 = puVar34;
    uVar33 = FUN_02757a80(local_64,&local_78);
    if ((int)uVar33 < 1) {
      DAT_04c48770 = 1;
      return;
    }
  }
  DAT_05467d34 = DAT_05467d30;
  if (DAT_04c48770 == '\0') {
    DAT_05467d34 = DAT_05467d30;
    return;
  }
  puVar34 = puVar5 + 0x10;
  local_a0 = "SeqKKRave1stDone";
  local_a8 = puVar34;
  uVar33 = FUN_02757a80(uVar33,&local_a8);
  local_a0 = "IsFirstKKFesDay";
  local_a8 = puVar34;
  iVar29 = FUN_02757a80(uVar33,&local_a8);
  local_a0 = "MoonKKFesUnlockRestDays";
  local_a8 = puVar34;
  iVar30 = FUN_02757a80(local_64,&local_a8);
  if (((int)uVar33 == 0) || (iVar29 != 0)) {
    local_a0 = "FirstKKFesStep";
    local_a8 = puVar34;
    uVar33 = FUN_02757a80(local_64,&local_a8);
    local_a0 = "IsFirstKKFesForceEnd";
    local_a8 = puVar34;
    iVar29 = FUN_02757a80(uVar33,&local_a8);
    if (iVar29 != 0) {
      DAT_05467d30 = 3;
      goto LAB_02258c24;
    }
    if ((int)uVar33 < 2) {
      DAT_05467d30 = 1;
      goto LAB_02258c24;
    }
    if (((int)uVar33 != 2) && (*(char *)(lVar36 + 0x4064) < '\x05')) {
      DAT_05467d30 = 3;
      goto LAB_02258c24;
    }
    DAT_05467d30 = 2;
  }
  else {
    if (0 < iVar30) {
      DAT_05467d30 = 0;
      goto LAB_02258c24;
    }
    lVar39 = *(long *)puVar40;
    plVar38 = (long *)(lVar39 + 0x4068);
    if (*(short *)(lVar39 + 0x4070) == 0) {
      if (*(short *)plVar38 == 0) {
        local_78 = *(undefined **)(lVar39 + 0x4060);
        if ((char)((ulong)local_78 >> 0x20) < '\x05') {
          lVar39 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_78);
          local_a8 = (undefined *)(lVar39 + -0x15180);
          local_78 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
        }
        uVar35 = (ulong)local_78 >> 0x30;
        local_78._0_6_ = CONCAT24(5,(undefined4)local_78);
        local_78 = (undefined *)(CONCAT26((short)uVar35,(undefined6)local_78) & 0xff00ffffffffffff);
        plVar38 = &local_78;
      }
      puVar40 = (undefined *)*plVar38;
    }
    else {
      puVar40 = *(undefined **)(lVar39 + 0x4070);
    }
    local_80 = puVar40;
    uVar31 = FUN_00a81270(lVar36 + 0x4060);
    local_88 = puVar40;
    lVar39 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
    local_a8 = (undefined *)(lVar39 + 0x15180);
    puVar34 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
    puVar40 = PTR_DAT_04bb32f0;
    uVar33 = *(undefined8 *)PTR_DAT_04bb32f0;
    sVar4 = *(short *)puVar6;
    local_88 = puVar34;
    if (sVar4 == -1) {
LAB_02258dcc:
      local_ac = 0;
    }
    else {
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) goto LAB_02258dcc;
      local_a8 = puVar5 + 0x10;
      local_a0 = "SeqKKRave1stDone";
      puVar34 = (undefined *)FUN_02757a80(puVar34,&local_a8);
      if ((int)puVar34 == 0) {
        local_ac = 0;
      }
      else {
        local_78 = local_88;
        puVar34 = (undefined *)FUN_00883750(uVar33,&local_78);
        local_ac = (uint)puVar34;
      }
      uVar33 = *(undefined8 *)puVar40;
    }
    sVar4 = *(short *)puVar6;
    if (sVar4 == -1) {
LAB_02258e60:
      uVar35 = 0;
    }
    else {
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) goto LAB_02258e60;
      local_a8 = puVar5 + 0x10;
      local_a0 = "SeqKKRave1stDone";
      iVar29 = FUN_02757a80(puVar34,&local_a8);
      if (iVar29 == 0) goto LAB_02258e60;
      local_78 = local_80;
      uVar35 = FUN_00883750(uVar33,&local_78);
      uVar35 = uVar35 & 0xffffffff;
    }
    lVar39 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_80);
    local_a8 = (undefined *)(lVar39 + -0x15180);
    local_80 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
    uVar33 = *(undefined8 *)puVar40;
    sVar4 = *(short *)puVar6;
    if (sVar4 == -1) {
LAB_02258f08:
      uVar32 = 0;
    }
    else {
      local_a8 = (undefined *)CONCAT44(local_a8._4_4_,0x19);
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
      if (0xff < (uint)(int)sVar4) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) == 0) goto LAB_02258f08;
      local_a8 = puVar5 + 0x10;
      local_a0 = "SeqKKRave1stDone";
      iVar29 = FUN_02757a80(local_80,&local_a8);
      uVar32 = 0;
      if (iVar29 != 0) {
        local_78 = local_80;
        uVar32 = FUN_00883750(uVar33,&local_78);
      }
    }
    if ((local_ac & 1) != 0) {
      DAT_05467d30 = 4;
      goto LAB_02258c24;
    }
    if ((uVar35 & 1) == 0) {
      if ((uVar32 & 1) == 0) {
        DAT_05467d30 = 0;
        goto LAB_02258c24;
      }
      if ((uVar31 & 1) != 0 || *(char *)(lVar36 + 0x4064) < '\x05') {
        DAT_05467d30 = 7;
        goto LAB_02258c24;
      }
    }
    else if (((uVar31 & 1) == 0) && (*(byte *)(lVar36 + 0x4064) - 5 < 0xd)) {
      DAT_05467d30 = 5;
      goto LAB_02258c24;
    }
    DAT_05467d30 = 6;
    lVar36 = *(long *)PTR_DAT_04bb27f8;
    if ((*(int *)(lVar36 + 0x14) != 0) &&
       (((*(ushort **)puVar7 == (ushort *)0x0 || ((**(ushort **)puVar7 & 1) == 0)) &&
        (*(int *)(lVar36 + 0x14) != 8)))) {
      local_8d = 0;
      local_98 = 8;
      local_a0 = local_94;
      local_94[0] = '\0';
      local_a8 = PTR_DAT_04bb3768 + 0x10;
      uVar35 = FUN_036ddfc0(lVar36,&local_a8);
      if (((((uVar35 & 1) != 0) && (*local_a0 == 't')) && (local_a0[1] == 'k')) &&
         (local_a0[2] == 'k')) {
        DAT_05467d30 = 5;
      }
    }
    if (DAT_05467d30 == 6 &&
        ((((((((((((bVar18 && bVar19) && bVar20) && bVar21) && bVar22) && bVar23) && bVar24) &&
             bVar25) && bVar26) && bVar27) && iVar2 != -0x6efba09b) && iVar2 != -0x21ba1d3a) &&
        iVar2 != -0x68a9a319)) {
      local_a8 = puVar5 + 0x10;
      local_a0 = "KKFesIsAnnounce";
      FUN_02758bb8(&local_a8,1);
    }
    if (DAT_05467d30 == 6) {
      local_a0 = "PE_Wherearen_TkkFes";
      goto LAB_022590b0;
    }
    if (DAT_05467d30 != 2) {
LAB_02258c24:
      DAT_04c48770 = 0;
      if ((DAT_05467d30 == 7) || (DAT_05467d30 == 3)) {
        FUN_0221aa44(&DAT_0545b240);
      }
      else if (DAT_05467d30 == 0) {
        FUN_03781770();
      }
      return;
    }
  }
  local_a0 = "PE_Wherearen_TkkFesFirst";
LAB_022590b0:
  DAT_04c48770 = 0;
  local_a8 = puVar5 + 0x10;
  FUN_025196e4(&local_78);
  FUN_01b5d550(&local_a8,&local_78);
  return;
}

