
bool FUN_021b92e0(undefined *param_1,int *param_2,ulong param_3)

{
  int *piVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ushort uVar6;
  char cVar7;
  byte bVar8;
  uint uVar9;
  bool bVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  int iVar17;
  undefined4 uVar18;
  int iVar19;
  ulong uVar20;
  ulong uVar21;
  uint *puVar22;
  undefined8 *puVar23;
  uint *puVar24;
  ushort *puVar25;
  undefined8 uVar26;
  long lVar27;
  byte *pbVar28;
  char *pcVar29;
  char cVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  ulong *puVar34;
  int *piVar35;
  long lVar36;
  byte *pbVar37;
  long lVar38;
  uint uVar39;
  uint uVar40;
  long lVar41;
  undefined4 *puVar42;
  int local_164;
  uint local_160;
  undefined8 local_138;
  char *local_130;
  long local_128;
  undefined1 local_120;
  byte local_11f;
  undefined *local_118;
  char *pcStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined1 auStack_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined1 local_80;
  byte local_7f;
  uint local_74;
  int local_70;
  undefined4 local_6c [3];
  
  puVar12 = PTR_DAT_04bb27d0;
  lVar27 = **(long **)PTR_DAT_04bb27d0;
  bVar8 = *(byte *)(lVar27 + 0x473);
  if ((long)(char)bVar8 != 0xffffffffffffffff) {
    pbVar37 = (byte *)(lVar27 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
    if (7 < bVar8) {
      pbVar37 = (byte *)(lVar27 + 0x48);
    }
    if (((*pbVar37 >> 3 & 1) != 0) && (*(byte *)(lVar27 + 0x472) != bVar8)) {
      return false;
    }
  }
  piVar1 = (int *)(param_1 + 0x55f90);
  uVar20 = FUN_021de700();
  if ((uVar20 & 1) == 0) {
    uVar20 = FUN_021e71b0();
    if ((uVar20 & 1) == 0) {
      uVar26 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_118 = PTR_DAT_04bb2020 + 0x10;
      pcStack_110 = "Carnival";
      puVar34 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar34 == 0) {
        local_90 = *(undefined **)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)((ulong)local_90 >> 0x20) < '\x05') {
          lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
          local_138 = (undefined *)(lVar27 + -0x15180);
          local_90 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_138);
        }
        puVar34 = &local_90;
        uVar20 = (ulong)local_90 >> 0x30;
        local_90._0_6_ = CONCAT24(5,(undefined4)local_90);
        local_90 = (undefined *)(CONCAT26((short)uVar20,(undefined6)local_90) & 0xff00ffffffffffff);
      }
      uVar20 = *puVar34;
      uVar20 = FUN_00879dd0(uVar26,&local_118,uVar20,uVar20 >> 0x10,uVar20 >> 0x18,0);
      local_70 = 3;
      if ((uVar20 & 1) == 0) {
        local_70 = 0;
      }
    }
    else {
      local_70 = 2;
    }
  }
  else {
    local_70 = 1;
  }
  if (local_70 != *param_2) {
    if (local_70 == 0) {
      *piVar1 = 0;
      return false;
    }
    return false;
  }
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  cVar30 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4064);
  cVar7 = *(char *)(*(long *)PTR_DAT_04bb32e8 + 0x4065);
  uVar31 = local_70 - 1;
  pcStack_110 = "SeasonEventIndoorUpdateHour";
  if (1 < uVar31) {
    uVar31 = 2;
  }
  uVar20 = (ulong)uVar31;
  local_118 = puVar2;
  iVar16 = FUN_02743000(&local_118);
  pcStack_110 = "SeasonEventIndoorUpdateMinute";
  local_118 = puVar2;
  iVar17 = FUN_02743000(&local_118);
  iVar19 = (int)cVar30;
  if ((iVar16 < 1) && (iVar17 < 1)) {
    if ((cVar30 < (char)(&DAT_04a765b0)[uVar20 * 0x10]) &&
       ((char)(&DAT_04a765b1)[uVar20 * 0x10] <= iVar19)) goto LAB_021b953c;
    bVar15 = false;
    bVar10 = true;
  }
  else if ((iVar16 < (char)(&DAT_04a765b0)[uVar20 * 0x10]) &&
          ((char)(&DAT_04a765b1)[uVar20 * 0x10] <= iVar16)) {
LAB_021b953c:
    bVar10 = false;
    bVar15 = true;
  }
  else {
    if (iVar19 <= iVar16) {
      bVar10 = false;
      bVar15 = true;
      if ((iVar16 != iVar19) || (cVar7 < iVar17)) goto LAB_021b9544;
    }
    bVar10 = false;
    bVar15 = false;
  }
LAB_021b9544:
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x43080996) {
    if (*param_2 == 2) {
      if (!bVar10 && (param_3 & 1) == 0) {
        return false;
      }
    }
    else {
      if (!bVar10 && (param_3 & 1) == 0) {
        return false;
      }
      if (*param_2 != 3) {
        return false;
      }
    }
  }
  if (*(uint *)(*(long *)puVar12 + 0x80) < 2) {
    if (bVar15) {
      return false;
    }
LAB_021b95f0:
    FUN_0252d11c(&local_118);
    if (7 < (byte)local_118) {
      return false;
    }
    uVar21 = FUN_0252f708(&local_118,1,0);
    if ((uVar21 & 1) != 0) {
      return false;
    }
    bVar15 = false;
  }
  else {
    if (bVar15 || (bool)(*piVar1 != 2 & (bVar10 ^ 1U))) {
      return false;
    }
    if (*piVar1 == 2) goto LAB_021b95f0;
    uVar21 = FUN_01df9150();
    bVar15 = true;
    if ((((uVar21 & 1) == 0) && ((param_3 & 1) == 0)) && (bVar15 = true, *piVar1 == 0)) {
      return false;
    }
  }
  if (*param_2 != 1) {
    if (!bVar10 && (param_3 & 1) == 0) {
      return false;
    }
    if (((!bVar15 && bVar10) && ((param_3 & 1) == 0)) &&
       (uVar21 = FUN_016e6434(), (uVar21 & 1) != 0)) {
      return false;
    }
  }
  puVar24 = (uint *)(param_1 + 0x92cc);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  pcStack_110 = "CanSetPlayerBirthdayCallNpc";
  local_118 = puVar2;
  iVar16 = FUN_02743000(&local_118);
  if ((iVar16 != 0) && (*(int *)(param_1 + 0x92e4) != -1)) {
    return false;
  }
  iVar16 = (int)(char)(&DAT_04a765b3)[uVar20 * 0x10] + (int)cVar7;
  iVar19 = (char)(&DAT_04a765b2)[uVar20 * 0x10] + iVar19;
  puVar22 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  if (0x3b < iVar16) {
    iVar19 = iVar19 + 1;
    iVar16 = iVar16 + -0x3c;
  }
  uVar31 = puVar22[3];
  iVar17 = iVar19 + -0x18;
  if (iVar19 < 0x18) {
    iVar17 = iVar19;
  }
  uVar40 = *puVar22 ^ *puVar22 << 0xb;
  *puVar22 = puVar22[1];
  puVar22[1] = puVar22[2];
  puVar22[2] = uVar31;
  puVar22[3] = uVar40 >> 8 ^ uVar31 >> 0x13 ^ uVar40 ^ uVar31;
  pcStack_110 = "SeasonEventIndoorUpdateHour";
  if (iVar17 == 0 && iVar16 == 0) {
    iVar16 = 1;
  }
  local_118 = puVar2;
  FUN_02743234(&local_118);
  pcStack_110 = "SeasonEventIndoorUpdateMinute";
  local_118 = puVar2;
  FUN_02743234(&local_118,iVar16);
  lVar27 = **(long **)puVar12;
  bVar8 = *(byte *)(lVar27 + 0x473);
  if ((long)(char)bVar8 != 0xffffffffffffffff) {
    pbVar37 = (byte *)(lVar27 + 0x48) + ((long)(char)bVar8 & 0xffffffffU) * 0x80;
    if (7 < bVar8) {
      pbVar37 = (byte *)(lVar27 + 0x48);
    }
    if (((*pbVar37 >> 3 & 1) != 0) && (*(byte *)(lVar27 + 0x472) != bVar8)) {
      puVar24 = (uint *)(param_1 + 0x92d8);
    }
  }
  uVar31 = *puVar24;
  uVar40 = puVar24[1];
  uVar33 = puVar24[2];
  lVar27 = FUN_0265afd0();
  if (lVar27 == 0) {
    return false;
  }
  local_74 = 0;
  local_80 = 1;
  local_88 = lVar27;
  if (*(long **)(lVar27 + 0x28) == (long *)0x0) {
    local_7f = 0;
  }
  else {
    puVar23 = (undefined8 *)**(long **)(lVar27 + 0x28);
    local_7f = 0;
    if (puVar23 != (undefined8 *)0x0) {
      local_7f = (**(code **)*puVar23)();
    }
  }
  local_7f = local_7f & 1;
  lVar36 = 0;
  lVar38 = 0;
  uVar39 = 0;
  lVar41 = 0xaa0;
  local_90 = PTR_DAT_04bb4dc8 + 0x10;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (((((ulong)uVar31 * 0x13230 != lVar36) && ((ulong)uVar40 * 0x13230 != lVar36)) &&
        ((ulong)uVar33 * 0x13230 != lVar36)) &&
       ((*(long *)(param_1 + lVar41) == 0 || (*(int *)(*(long *)(param_1 + lVar41) + 4) != 0x1a))))
    {
      lVar3 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
      lVar4 = lVar3 + lVar36;
      local_118 = (undefined *)CONCAT44(local_118._4_4_,(int)*(char *)(lVar4 + 0x1267a));
      if (((*(char *)(lVar4 + 0x1267a) == 0) &&
          ((uVar21 = (ulong)*(byte *)(lVar3 + lVar36), uVar21 < 0x23 &&
           (*(byte *)(lVar4 + 1) <= (byte)PTR_DAT_04bc27f0[uVar21])))) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar21 * 4) >> (ulong)(*(byte *)(lVar4 + 1) & 0x1f) & 1) !=
          0)) {
        local_130 = "AbandonedHouse";
        local_138 = puVar2;
        iVar19 = FUN_02749340(lVar4 + 0x1267c,&local_138);
        if (iVar19 < 2) {
          local_118 = PTR_DAT_04bb2020 + 0x10;
          pcStack_110 = "MoveInCompletion";
          iVar19 = FUN_02749340(lVar4 + 0x1267c,&local_118);
          if (iVar19 != 0) {
            uVar39 = 1 << (ulong)((uint)lVar38 & 0x1f) | uVar39;
          }
        }
      }
    }
    lVar38 = lVar38 + 1;
    lVar41 = lVar41 + 0xba0;
    lVar36 = lVar36 + 0x13230;
  } while (lVar38 != 10);
  local_74 = uVar39;
  FUN_038e7ea0(auStack_a0);
  uVar31 = uVar39 - (uVar39 >> 1 & 0x55555555);
  uVar31 = (uVar31 >> 2 & 0x33333333) + (uVar31 & 0x33333333);
  uVar31 = uVar31 + (uVar31 >> 4) & 0xf0f0f0f;
  uVar31 = uVar31 + (uVar31 >> 8);
  uVar31 = uVar31 + (uVar31 >> 0x10) & 0x3f;
  bVar14 = uVar31 != 0;
  if (uVar31 == 0) goto LAB_021baac0;
  local_108 = 0x200000002;
  uStack_100 = 0x300000002;
  local_118 = (undefined *)0x100000001;
  pcStack_110 = (char *)0x100000001;
  local_f0 = 0x100000001;
  uStack_e8 = 0x100000001;
  lVar38 = 0;
  bVar11 = !bVar15;
  local_b8 = 0x100000001;
  local_f8 = 3;
  if (!bVar11) {
    local_f8 = 4;
  }
  uStack_f4 = 5;
  if (bVar11) {
    uStack_f4 = 3;
  }
  local_b0 = 1;
  if (!bVar11) {
    local_b0 = 2;
  }
  uStack_cc = 4;
  if (!bVar11) {
    uStack_cc = 5;
  }
  local_d0 = 4;
  local_e0 = 0x300000002;
  uStack_d8 = 0x400000003;
  uStack_ac = 2;
  if (!bVar11) {
    uStack_ac = 3;
  }
  local_a8 = 4;
  if (bVar11) {
    local_a8 = 2;
  }
  uStack_a4 = 5;
  if (bVar11) {
    uStack_a4 = 2;
  }
  if (10 < uVar31) {
    uVar31 = 0xb;
  }
  local_c8 = 0x100000001;
  uStack_c0 = 0x100000001;
  local_160 = *(uint *)(auStack_a0 + (ulong)(uVar31 - 1) * 4 + uVar20 * 0x28 + -0x78);
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((&DAT_053fee41)[lVar38 * 0xba0] != '\0') {
      lVar41 = *(long *)PTR_DAT_04bb2208;
      uVar18 = FUN_006bd550("SeasonEventPlace",0);
      local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar18);
      puVar24 = (uint *)FUN_021cb820(lVar41 + 0x660,&local_138);
      if (puVar24 != (uint *)0x0) {
        pcVar29 = &DAT_053feb60 + lVar38 * 0xba0;
        if (*puVar24 != 0) {
          cVar30 = *PTR_DAT_04bb6378;
          do {
            if (cVar30 == '\0') {
              cVar30 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              puVar13 = PTR_DAT_04bb6380;
              *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar13 + 0x18) = 0xffffffffffffffff;
              uVar31 = *puVar24;
            }
            else {
              uVar31 = *(uint *)(PTR_DAT_04bb6380 + 8);
              if (-1 < (int)uVar31) {
                if (((ushort *)((ulong)uVar31 + (long)puVar24) != (ushort *)0x0) &&
                   (uVar6 = *(ushort *)((ulong)uVar31 + (long)puVar24), uVar6 < 0x80)) {
                  pcVar29 = pcVar29 + uVar6;
                }
                break;
              }
              if (uVar31 != 0xffffffff) break;
              uVar31 = *puVar24;
            }
            if ((uVar31 == 0) || (puVar22 = (uint *)(ulong)uVar31, puVar24 == puVar22)) break;
            lVar41 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar22)) != '\0') {
              lVar41 = 0x1c;
            }
            lVar41 = (long)puVar24 + (lVar41 - (long)puVar22);
            if (lVar41 == 0) break;
            uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar22));
            *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
            if (uVar20 == 0) break;
            piVar35 = (int *)(lVar41 + 4);
            while (piVar35[-1] != 0x54706054) {
              piVar35 = piVar35 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_021b9bfc;
            }
            iVar19 = 0;
            if (*piVar35 != -1) {
              iVar19 = *piVar35;
            }
            *(int *)(PTR_DAT_04bb6380 + 8) = iVar19;
            if (*puVar24 == 0) break;
          } while( true );
        }
LAB_021b9bfc:
        if (*pcVar29 == '\x01') {
          local_6c[0] = (undefined4)lVar38;
          local_130 = "SeasonEventPlace";
          local_138 = puVar2;
          FUN_021be8c0(local_6c,&local_138,0);
          local_6c[0]._0_2_ = (ushort)(byte)lVar38;
          uVar20 = (ulong)local_138 >> 0x30;
          local_138 = (undefined *)CONCAT26((ushort)uVar20 & 0xff00,0xff0000000000);
          if (-1 < DAT_053d12e0) {
            FUN_01db1df0(**(long **)puVar12 + 0x480,DAT_053d12e0,&local_138,local_6c,2,0);
          }
        }
      }
    }
    lVar38 = lVar38 + 1;
  } while (lVar38 != 10);
  lVar38 = 0;
  uVar20 = 0;
  iVar19 = 0;
  do {
    uVar40 = (uint)uVar20;
    uVar31 = 1 << (ulong)(uVar40 & 0x1f);
    if ((uVar39 & uVar31) != 0) {
      lVar41 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
      uVar21 = (ulong)*(byte *)(lVar41 + lVar38);
      if (uVar21 < 0x23) {
        lVar41 = lVar41 + lVar38;
        bVar8 = *(byte *)(lVar41 + 1);
        if (((bVar8 <= (byte)PTR_DAT_04bc27f0[uVar21]) &&
            ((*(uint *)(PTR_DAT_04bc2a20 + uVar21 * 4) >> (ulong)(bVar8 & 0x1f) & 1) != 0)) &&
           (*(int *)(lVar41 + 0x10764) == 1)) {
          local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar40);
          lVar41 = *(long *)PTR_DAT_04bb4760 + (uVar20 & 0xffffffff) * 0x15;
          if (0x6c < uVar40) {
            lVar41 = *(long *)PTR_DAT_04bb4760;
          }
          uVar40 = (uint)*(byte *)(lVar41 + 4) | (*(byte *)(lVar41 + 5) & 3) << 8;
          if (0x1ff < uVar40) {
            uVar40 = uVar40 | 0xfffffc00;
          }
          uVar21 = FUN_01d69340(*(undefined8 *)(*(long *)puVar12 + 0x10),uVar40,1);
          if (((uVar21 & 1) != 0) ||
             (((param_3 & 1) != 0 && ((uint)*(ushort *)PTR_DAT_04bbdeb0 == (uVar40 & 0xffff))))) {
            FUN_020ef4b4(uVar20 & 0xffffffff,1);
            uVar39 = uVar39 & (uVar31 ^ 0xffffffff);
            iVar19 = iVar19 + 1;
            local_160 = local_160 - 1;
          }
        }
      }
    }
    puVar2 = PTR_DAT_04bb4dc8;
    puVar42 = (undefined4 *)PTR_DAT_04bb39d8;
    uVar20 = uVar20 + 1;
    lVar38 = lVar38 + 0x13230;
  } while (uVar20 != 10);
  uVar31 = local_160;
  local_74 = uVar39;
  if (bVar10) {
    uVar40 = uVar39 >> 1 & 0x55555555;
    uVar33 = uVar39;
    if (*param_2 == 1) {
LAB_021b9e0c:
      uVar40 = uVar39 - uVar40;
      uVar40 = (uVar40 >> 2 & 0x33333333) + (uVar40 & 0x33333333);
      uVar40 = uVar40 + (uVar40 >> 4) & 0xf0f0f0f;
      uVar40 = uVar40 + (uVar40 >> 8);
      local_164 = (uVar40 + (uVar40 >> 0x10) & 0x3f) - (local_160 + iVar19);
      if (bVar15) goto LAB_021b9f00;
      iVar19 = 0;
      bVar15 = false;
    }
    else {
      if (*piVar1 != 0) {
        bVar15 = true;
        goto LAB_021b9e0c;
      }
      if ((param_3 & 1) != 0) goto LAB_021b9e0c;
      uVar40 = uVar39 - uVar40;
      uVar40 = (uVar40 >> 2 & 0x33333333) + (uVar40 & 0x33333333);
      uVar40 = uVar40 + (uVar40 >> 4) & 0xf0f0f0f;
      uVar40 = uVar40 + (uVar40 >> 8);
      local_164 = (uVar40 + (uVar40 >> 0x10) & 0x3f) - (local_160 + iVar19);
LAB_021b9f00:
      lVar38 = 0;
      iVar19 = 0;
      pbVar37 = &DAT_053feb60;
      do {
        if (pbVar37[0x2e1] != 0) {
          lVar41 = *(long *)PTR_DAT_04bb2208;
          uVar18 = FUN_006bd550("SeasonEventPlace",0);
          local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar18);
          lVar41 = FUN_021cb820(lVar41 + 0x660,&local_138);
          if (lVar41 != 0) {
            puVar25 = (ushort *)FUN_00aa97d0(lVar41,2,0x54706054,DAT_054573c8);
            pbVar28 = pbVar37;
            if ((puVar25 != (ushort *)0x0) && (*puVar25 < 0x80)) {
              pbVar28 = &DAT_053feb60 + (ulong)*puVar25 + lVar38 * 0xba0;
            }
            if (1 < *pbVar28) {
              iVar19 = iVar19 + 1;
              uVar33 = uVar33 & (1 << (ulong)((uint)lVar38 & 0x1f) ^ 0xffffffffU);
            }
          }
        }
        lVar38 = lVar38 + 1;
        pbVar37 = pbVar37 + 0xba0;
      } while (lVar38 != 10);
      bVar15 = true;
    }
    puVar42 = (undefined4 *)PTR_DAT_04bb39d8;
    lVar38 = 0;
    pbVar37 = (byte *)(*(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8));
    do {
      uVar20 = (ulong)*pbVar37;
      if (((uVar20 < 0x23) && (pbVar37[1] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar37[1] & 0x1f) & 1) != 0)) {
        if (bVar15) {
          if ((*(int *)(pbVar37 + 0x10764) == 0) &&
             (uVar40 = 1 << (ulong)((uint)lVar38 & 0x1f), (uVar33 & uVar40) != 0))
          goto LAB_021ba0b8;
        }
        else {
          iVar16 = *(int *)(pbVar37 + 0x10764);
          local_138 = (undefined *)CONCAT44(local_138._4_4_,iVar16);
          if (iVar16 != 0) {
            uVar40 = 1 << (ulong)((uint)lVar38 & 0x1f);
LAB_021ba0b8:
            uVar33 = uVar33 & (uVar40 ^ 0xffffffff);
            iVar19 = iVar19 + 1;
          }
        }
        if (local_164 <= iVar19) break;
      }
      lVar38 = lVar38 + 1;
      pbVar37 = pbVar37 + 0x13230;
    } while (lVar38 != 10);
    if (0 < (int)local_160) {
      uVar40 = 0;
      do {
        puVar24 = (uint *)nn::os::GetTlsValue(*puVar42);
        uVar9 = uVar33 - (uVar33 >> 1 & 0x55555555);
        uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
        uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
        uVar9 = uVar9 + (uVar9 >> 8);
        uVar9 = uVar9 + (uVar9 >> 0x10) & 0x3f;
        if (puVar24 != (uint *)0x0 && uVar9 != 0) {
          uVar32 = *puVar24 ^ *puVar24 << 0xb;
          uVar5 = puVar24[3];
          *puVar24 = puVar24[1];
          puVar24[1] = puVar24[2];
          uVar32 = uVar32 >> 8 ^ uVar5 >> 0x13 ^ uVar32 ^ uVar5;
          puVar24[2] = uVar5;
          puVar24[3] = uVar32;
          uVar32 = (uint)((ulong)uVar32 * (ulong)uVar9 >> 0x20);
          if (uVar32 < uVar9) {
            uVar26 = FUN_038cd8b0(uVar33,uVar32 + 1);
            FUN_020ef4b4(uVar26,1);
            if ((uint)uVar26 < 10) {
              uVar33 = uVar33 & (1 << (ulong)((uint)uVar26 & 0x1f) ^ 0xffffffffU);
            }
          }
          else {
            FUN_020ef4b4(0xffffffff,1);
          }
          uVar31 = uVar31 - 1;
          if (uVar40 < 10) {
            uVar39 = uVar39 & (1 << (ulong)(uVar40 & 0x1f) ^ 0xffffffffU);
          }
        }
        uVar40 = uVar40 + 1;
      } while (local_160 != uVar40);
      goto LAB_021ba7d0;
    }
  }
  else {
    local_120 = 1;
    local_138 = param_1;
    local_128 = lVar27;
    if (*(long **)(lVar27 + 0x28) == (long *)0x0) {
      local_11f = 0;
    }
    else {
      puVar23 = (undefined8 *)**(long **)(lVar27 + 0x28);
      local_11f = 0;
      if (puVar23 != (undefined8 *)0x0) {
        local_11f = (**(code **)*puVar23)();
      }
    }
    local_11f = local_11f & 1;
    local_130 = puVar2 + 0x10;
    if (*param_2 != 1) {
      iVar19 = FUN_021baad0(&local_138,&local_74,0);
      if (-1 < iVar19) {
        iVar16 = FUN_021baad0(&local_138,&local_74,1);
        if ((uVar39 & 1) != 0) {
          pbVar37 = (byte *)(*(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8));
          uVar20 = (ulong)*pbVar37;
          if (((uVar20 < 0x23) && (pbVar37[1] <= (byte)PTR_DAT_04bc27f0[uVar20])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >> (ulong)(pbVar37[1] & 0x1f) & 1) != 0)) {
            if (iVar19 == 0) {
              uVar39 = uVar39 & 0xfffffffe;
            }
            else if (iVar16 != 0) {
              uVar40 = uVar39 & 0xfffffffe;
              if (*(int *)(pbVar37 + 0x10764) != 0) {
                uVar40 = uVar39;
              }
              uVar39 = uVar40;
            }
          }
        }
        uVar40 = uVar39;
        if ((uVar39 >> 1 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x13230);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x13231) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x13231) & 0x1f) & 1) != 0)) {
            if (iVar19 == 1) {
              uVar40 = uVar39 & 0xfffffffd;
            }
            else if ((iVar16 != 1) &&
                    (uVar40 = uVar39 & 0xfffffffd, *(int *)(lVar38 + 0x23994) != 0)) {
              uVar40 = uVar39;
            }
          }
        }
        uVar33 = uVar40;
        if ((uVar40 >> 2 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x26460);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x26461) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x26461) & 0x1f) & 1) != 0)) {
            if (iVar19 == 2) {
              uVar33 = uVar40 & 0xfffffffb;
            }
            else if ((iVar16 != 2) &&
                    (uVar33 = uVar40 & 0xfffffffb, *(int *)(lVar38 + 0x36bc4) != 0)) {
              uVar33 = uVar40;
            }
          }
        }
        uVar40 = uVar33;
        if ((uVar33 >> 3 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x39690);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x39691) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x39691) & 0x1f) & 1) != 0)) {
            if (iVar19 == 3) {
              uVar40 = uVar33 & 0xfffffff7;
            }
            else if ((iVar16 != 3) &&
                    (uVar40 = uVar33 & 0xfffffff7, *(int *)(lVar38 + 0x49df4) != 0)) {
              uVar40 = uVar33;
            }
          }
        }
        uVar33 = uVar40;
        if ((uVar40 >> 4 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x4c8c0);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x4c8c1) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x4c8c1) & 0x1f) & 1) != 0)) {
            if (iVar19 == 4) {
              uVar33 = uVar40 & 0xffffffef;
            }
            else if ((iVar16 != 4) &&
                    (uVar33 = uVar40 & 0xffffffef, *(int *)(lVar38 + 0x5d024) != 0)) {
              uVar33 = uVar40;
            }
          }
        }
        uVar40 = uVar33;
        if ((uVar33 >> 5 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x5faf0);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x5faf1) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x5faf1) & 0x1f) & 1) != 0)) {
            if (iVar19 == 5) {
              uVar40 = uVar33 & 0xffffffdf;
            }
            else if ((iVar16 != 5) &&
                    (uVar40 = uVar33 & 0xffffffdf, *(int *)(lVar38 + 0x70254) != 0)) {
              uVar40 = uVar33;
            }
          }
        }
        uVar33 = uVar40;
        if ((uVar40 >> 6 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x72d20);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x72d21) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x72d21) & 0x1f) & 1) != 0)) {
            if (iVar19 == 6) {
              uVar33 = uVar40 & 0xffffffbf;
            }
            else if ((iVar16 != 6) &&
                    (uVar33 = uVar40 & 0xffffffbf, *(int *)(lVar38 + 0x83484) != 0)) {
              uVar33 = uVar40;
            }
          }
        }
        uVar40 = uVar33;
        if ((uVar33 >> 7 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x85f50);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x85f51) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x85f51) & 0x1f) & 1) != 0)) {
            if (iVar19 == 7) {
              uVar40 = uVar33 & 0xffffff7f;
            }
            else if ((iVar16 != 7) &&
                    (uVar40 = uVar33 & 0xffffff7f, *(int *)(lVar38 + 0x966b4) != 0)) {
              uVar40 = uVar33;
            }
          }
        }
        uVar33 = uVar40;
        if ((uVar40 >> 8 & 1) != 0) {
          lVar38 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar38 + 0x99180);
          if (((uVar20 < 0x23) && (*(byte *)(lVar38 + 0x99181) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar38 + 0x99181) & 0x1f) & 1) != 0)) {
            if (iVar19 == 8) {
              uVar33 = uVar40 & 0xfffffeff;
            }
            else if ((iVar16 != 8) &&
                    (uVar33 = uVar40 & 0xfffffeff, *(int *)(lVar38 + 0xa98e4) != 0)) {
              uVar33 = uVar40;
            }
          }
        }
        uVar39 = uVar33;
        if ((uVar33 >> 9 & 1) != 0) {
          lVar27 = *(long *)(lVar27 + 0x10) + *(long *)(lVar27 + 8);
          uVar20 = (ulong)*(byte *)(lVar27 + 0xac3b0);
          if (((uVar20 < 0x23) && (*(byte *)(lVar27 + 0xac3b1) <= (byte)PTR_DAT_04bc27f0[uVar20]))
             && ((*(uint *)(PTR_DAT_04bc2a20 + uVar20 * 4) >>
                  (ulong)(*(byte *)(lVar27 + 0xac3b1) & 0x1f) & 1) != 0)) {
            if (iVar19 == 9) {
              uVar39 = uVar33 & 0xfffffdff;
            }
            else if ((iVar16 != 9) &&
                    (uVar39 = uVar33 & 0xfffffdff, *(int *)(lVar27 + 0xbcb14) != 0)) {
              uVar39 = uVar33;
            }
          }
        }
        local_74 = uVar39;
      }
    }
    FUN_02640184(&local_130);
LAB_021ba7d0:
    if (0 < (int)uVar31) {
      do {
        puVar24 = (uint *)nn::os::GetTlsValue(*puVar42);
        uVar40 = uVar39 - (uVar39 >> 1 & 0x55555555);
        uVar40 = (uVar40 >> 2 & 0x33333333) + (uVar40 & 0x33333333);
        uVar40 = uVar40 + (uVar40 >> 4) & 0xf0f0f0f;
        uVar40 = uVar40 + (uVar40 >> 8);
        uVar40 = uVar40 + (uVar40 >> 0x10) & 0x3f;
        if (puVar24 != (uint *)0x0 && uVar40 != 0) {
          uVar33 = *puVar24 ^ *puVar24 << 0xb;
          uVar9 = puVar24[3];
          *puVar24 = puVar24[1];
          puVar24[1] = puVar24[2];
          uVar33 = uVar33 >> 8 ^ uVar9 >> 0x13 ^ uVar33 ^ uVar9;
          puVar24[2] = uVar9;
          puVar24[3] = uVar33;
          uVar33 = (uint)((ulong)uVar33 * (ulong)uVar40 >> 0x20);
          if (uVar33 < uVar40) {
            uVar26 = FUN_038cd8b0(uVar39,uVar33 + 1);
            FUN_020ef4b4(uVar26,1);
            if ((uint)uVar26 < 10) {
              uVar39 = uVar39 & (1 << (ulong)((uint)uVar26 & 0x1f) ^ 0xffffffffU);
            }
          }
          else {
            FUN_020ef4b4(0xffffffff,1);
          }
        }
        uVar31 = uVar31 - 1;
      } while (uVar31 != 0);
    }
  }
  local_74 = uVar39;
  if (*param_2 == 2) {
    FUN_02207940();
  }
  puVar12 = PTR_DAT_04bb3968;
  lVar27 = 0;
  do {
    if ((&DAT_053fee41)[lVar27 * 0xba0] != '\0') {
      lVar38 = *(long *)PTR_DAT_04bb2208;
      uVar18 = FUN_006bd550("SeasonEventPlace",0);
      local_138._0_4_ = uVar18;
      puVar24 = (uint *)FUN_021cb820(lVar38 + 0x660,&local_138);
      if (puVar24 == (uint *)0x0) {
        bVar15 = true;
      }
      else {
        pcVar29 = &DAT_053feb60 + lVar27 * 0xba0;
        if (*puVar24 != 0) {
          cVar30 = *PTR_DAT_04bb6378;
          do {
            if (cVar30 == '\0') {
              cVar30 = '\x01';
              *PTR_DAT_04bb6378 = 1;
              puVar2 = PTR_DAT_04bb6380;
              *(undefined8 *)PTR_DAT_04bb6380 = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
              uVar31 = *puVar24;
            }
            else {
              uVar31 = *(uint *)(PTR_DAT_04bb6380 + 8);
              if (-1 < (int)uVar31) {
                if (((ushort *)((ulong)uVar31 + (long)puVar24) != (ushort *)0x0) &&
                   (uVar6 = *(ushort *)((ulong)uVar31 + (long)puVar24), uVar6 < 0x80)) {
                  pcVar29 = pcVar29 + uVar6;
                }
                break;
              }
              if (uVar31 != 0xffffffff) break;
              uVar31 = *puVar24;
            }
            if ((uVar31 == 0) || (puVar22 = (uint *)(ulong)uVar31, puVar24 == puVar22)) break;
            lVar38 = 0xc;
            if (*(char *)((long)puVar24 + (10 - (long)puVar22)) != '\0') {
              lVar38 = 0x1c;
            }
            lVar38 = (long)puVar24 + (lVar38 - (long)puVar22);
            if (lVar38 == 0) break;
            uVar20 = (ulong)*(ushort *)((long)puVar24 + (8 - (long)puVar22));
            *(undefined4 *)(PTR_DAT_04bb6380 + 8) = 0xfffffffe;
            if (uVar20 == 0) break;
            piVar35 = (int *)(lVar38 + 4);
            while (piVar35[-1] != 0x54706054) {
              piVar35 = piVar35 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) goto LAB_021baa54;
            }
            iVar19 = 0;
            if (*piVar35 != -1) {
              iVar19 = *piVar35;
            }
            *(int *)(PTR_DAT_04bb6380 + 8) = iVar19;
            if (*puVar24 == 0) break;
          } while( true );
        }
LAB_021baa54:
        bVar15 = true;
        if ((*pcVar29 == '\x01') && ((param_3 & 1) == 0)) {
          bVar15 = *piVar1 == 1;
        }
      }
      local_138 = (undefined *)CONCAT44(local_138._4_4_,2);
      if ((&DAT_053fee41)[lVar27 * 0xba0] != '\0') {
        FUN_01e2caf8(*(long *)puVar12 + 0xda0,&DAT_053fe850 + lVar27 * 0xba0,bVar15,&local_138,0,0);
      }
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 != 10);
  *piVar1 = 0;
LAB_021baac0:
  FUN_02640184(&local_90);
  return bVar14;
}

