
/* WARNING: Removing unreachable block (ram,0x01e6a158) */

void FUN_01e67ee0(long param_1,long param_2,ulong param_3,uint param_4,uint param_5)

{
  float *pfVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  long lVar4;
  long lVar5;
  short sVar6;
  bool bVar7;
  undefined1 uVar8;
  char cVar9;
  byte bVar10;
  uint uVar11;
  int iVar12;
  char *pcVar13;
  undefined4 *puVar14;
  byte *pbVar15;
  ulong uVar16;
  undefined1 *puVar17;
  uint *puVar18;
  char *pcVar19;
  ulong *puVar20;
  undefined *puVar21;
  char *pcVar22;
  undefined *puVar23;
  long lVar24;
  undefined8 *puVar25;
  uint *puVar26;
  int *piVar27;
  char cVar28;
  int *piVar29;
  int *piVar30;
  long *plVar31;
  ulong uVar32;
  uint uVar33;
  undefined8 uVar34;
  float fVar35;
  float fVar36;
  undefined4 uVar37;
  undefined4 uVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  undefined *local_288;
  char *local_280;
  undefined1 local_278;
  byte local_277;
  int local_26c;
  undefined4 local_268;
  undefined4 uStack_264;
  long local_260;
  undefined8 local_258;
  undefined8 local_250;
  char *local_248;
  ulong local_240;
  long local_238;
  long local_230;
  undefined8 local_228;
  float local_220;
  float local_218;
  undefined4 local_214;
  float local_210;
  undefined4 local_20c;
  undefined1 local_208;
  undefined1 local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  undefined1 local_1e8 [2];
  undefined1 local_1e6;
  undefined4 local_1e4;
  undefined4 local_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined8 local_1b0;
  float local_1a8;
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined4 local_18c;
  undefined1 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_164;
  undefined4 local_160;
  undefined1 local_143;
  undefined1 auStack_b0 [4];
  uint local_ac [3];
  
  puVar23 = PTR_DAT_04bbc1a0;
  piVar27 = (int *)(param_1 + 0x10a30);
  puVar14 = (undefined4 *)(param_1 + 0xeef8);
  piVar30 = (int *)(param_1 + 0xef10);
  if (0 < *piVar30) {
    lVar24 = 0;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      puVar25 = *(undefined8 **)(*(long *)(param_1 + 0xef18) + lVar24 * 8);
      lVar24 = lVar24 + 1;
      puVar25[0xf] = puVar2;
      *puVar25 = *(undefined8 *)(param_1 + 0xef20);
      *(undefined8 **)(param_1 + 0xef20) = puVar25;
    } while (lVar24 < *(int *)(param_1 + 0xef10));
  }
  *piVar30 = 0;
  if (0 < *piVar27) {
    lVar24 = 0;
    do {
      puVar25 = *(undefined8 **)(*(long *)(param_1 + 0x10a38) + lVar24 * 8);
      lVar24 = lVar24 + 1;
      puVar25[0xf] = puVar23 + 0x10;
      *puVar25 = *(undefined8 *)(param_1 + 0x10a40);
      *(undefined8 **)(param_1 + 0x10a40) = puVar25;
    } while (lVar24 < *piVar27);
  }
  *(undefined1 *)(param_1 + 0x56e8) = 0;
  *piVar27 = 0;
  *(undefined8 *)(param_1 + 0x12550) = 0;
  *(undefined8 *)(param_1 + 0x12558) = 0;
  *(undefined8 *)(param_1 + 0x12560) = 0;
  *(byte *)(param_1 + 0xaa44) = *(byte *)(param_1 + 0xaa44) & 0xbf;
  *puVar14 = 2;
  if (((param_3 & 1) != 0) &&
     (((uVar11 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), (uVar11 & 0xfffffffe) == 4 &&
       (*(int *)(param_1 + 0xad38) == 3)) || ((*(ushort *)(param_1 + 0x12570) >> 0xb & 1) == 0)))) {
    FUN_01e63f1c(&local_250);
    local_164 = 0x1e;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
    _local_1e8 = 0x10101;
    local_1ec = 2;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
  }
  if (*(int *)(param_2 + 0x6c) != 0) {
    uVar11 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
    if (((uVar11 < 10) && ((&DAT_053fee41)[(ulong)uVar11 * 0xba0] != '\0')) &&
       ((&DAT_053fe830)[(ulong)uVar11 * 0x2e8] == 4)) {
      FUN_01e63f1c(&local_250);
      local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
    }
    else {
      FUN_01e63f1c(&local_250);
      local_250 = (undefined *)CONCAT44(local_250._4_4_,10);
      local_160 = 1;
    }
    _local_1e8 = CONCAT21(0x101,local_1e8[0]);
    iVar12 = *(int *)(param_1 + 0xef10);
    if (iVar12 < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
      iVar12 = *piVar30;
    }
    if (iVar12 == 0) {
      return;
    }
    goto LAB_01e6a884;
  }
  if ((*(ushort *)(param_1 + 0x12570) >> 4 & 1) != 0) {
    *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) & 0xffef;
    goto LAB_01e68190;
  }
  if ((param_5 & 1) != 0) {
    local_288 = (undefined *)CONCAT44(local_288._4_4_,0x1e);
    if (((*(int *)(param_2 + 100) == 0) && (*(int *)(param_2 + 8) == 0x1e)) &&
       ((*(byte *)(param_1 + 0xad54) >> 2 & 1) != 0)) {
      pcVar13 = (char *)FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
      if (pcVar13 != (char *)0x0) {
        local_240 = CONCAT71(local_240._1_7_,1);
        local_248 = pcVar13;
        if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(pcVar13 + 0x28);
          uVar8 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar8 = (**(code **)*puVar25)();
          }
        }
        local_240 = CONCAT62(local_240._2_6_,CONCAT11(uVar8,(undefined1)local_240)) &
                    0xffffffffffff01ff;
        local_250 = PTR_DAT_04bb67a0 + 0x10;
        cVar9 = *(char *)(*(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8) + 0x1315b);
        if ((cVar9 == '\x01') || (cVar9 == '\x12')) {
          FUN_02640184(&local_250);
          goto LAB_01e698a0;
        }
        FUN_02640184(&local_250);
      }
LAB_01e68190:
      local_250 = (undefined *)((ulong)local_250 & 0xffffffff00000000);
      FUN_01e6a930(param_1,&local_250,0xffffffff);
    }
    else {
LAB_01e698a0:
      plVar31 = *(long **)(*(long *)(param_1 + 8) + 0x60);
      if (plVar31 == (long *)0x0) {
        if ((DAT_052461c0 & 1) == 0) {
          iVar12 = __cxa_guard_acquire(&DAT_052461c0);
          plVar31 = &DAT_05240280;
          if (iVar12 != 0) {
            FUN_016fcf10(&DAT_05240280);
            FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
            __cxa_guard_release(&DAT_052461c0);
          }
        }
        else {
          plVar31 = &DAT_05240280;
        }
      }
      (**(code **)(*plVar31 + 0x348))(&local_250,plVar31);
      puVar23 = PTR_DAT_04bb43c0;
      local_260 = 0;
      local_268 = (undefined4)local_250;
      uStack_264 = local_250._4_4_;
      lVar24 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(&local_268);
      if (*(long *)puVar23 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if (((uVar11 < *(uint *)(lVar24 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) &&
           (lVar24 = *(long *)PTR_DAT_04bb43a8, lVar24 != 0)) {
          uVar16 = FUN_0277d6c4(&local_250);
          local_260 = lVar24 + (uVar16 & 0xffffffff) * 0x23;
          if (0x752 < ((uint)(uVar16 >> 3) & 0x1fffffff)) {
            local_260 = lVar24;
          }
        }
      }
      puVar2 = PTR_DAT_04bb2020;
      local_26c = 0;
      puVar23 = PTR_DAT_04bb2020 + 0x10;
      local_248 = "EquipChristmasWear";
      local_250 = puVar23;
      iVar12 = FUN_0265c700(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),&local_250);
      puVar21 = PTR_DAT_04bb6298;
      bVar7 = false;
      bVar10 = 0;
      if (iVar12 == 0) {
        sVar6 = *(short *)PTR_DAT_04bb6298;
        if (sVar6 == -1) {
LAB_01e69f84:
          local_26c = FUN_021b3420(&DAT_053fe348,*(long *)(param_1 + 8) + 0x508,0);
          if (local_26c == 0) {
            if ((*(int *)(param_2 + 100) == 0) && (0x1b < *(int *)(param_2 + 8))) {
              uVar34 = FUN_0209ef04();
              puVar17 = (undefined1 *)
                        FUN_01e27050(uVar34,5,0x430dbf65,*(undefined8 *)PTR_DAT_04bc1590);
              if (puVar17 == (undefined1 *)0x0) {
                uVar8 = 0;
              }
              else {
                uVar8 = *puVar17;
              }
              local_250 = (undefined *)CONCAT71(local_250._1_7_,uVar8);
              uVar16 = FUN_01e6b680(&local_250);
              if ((uVar16 & 1) == 0) {
                bVar10 = 1;
              }
              else {
                bVar10 = FUN_021de7e0(*(undefined8 *)(param_1 + 8));
              }
LAB_01e6a0c0:
              bVar7 = false;
            }
            else {
              bVar7 = false;
              bVar10 = 1;
            }
          }
          else {
            if (*(int *)(*(long *)(param_1 + 8) + 0x178) != 1) goto LAB_01e69ff4;
            lVar24 = FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508));
            bVar10 = 0;
            if (lVar24 == 0) goto LAB_01e6a0c0;
            local_240 = CONCAT71(local_240._1_7_,1);
            local_248 = (char *)lVar24;
            if (*(long **)(lVar24 + 0x28) == (long *)0x0) {
              uVar8 = 0;
            }
            else {
              puVar25 = (undefined8 *)**(long **)(lVar24 + 0x28);
              uVar8 = 0;
              if (puVar25 != (undefined8 *)0x0) {
                uVar8 = (**(code **)*puVar25)();
              }
            }
            local_240 = CONCAT62(local_240._2_6_,CONCAT11(uVar8,(undefined1)local_240)) &
                        0xffffffffffff01ff;
            local_250 = PTR_DAT_04bb67a0 + 0x10;
            bVar7 = *(char *)(*(long *)(lVar24 + 0x10) + *(long *)(lVar24 + 8) + 0x1315b) == '\0';
            FUN_02640184(&local_250);
            bVar10 = bVar7;
          }
        }
        else {
          local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
          puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
          if (0xff < (uint)(int)sVar6) {
            puVar18 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((((*puVar18 >> 1 & 1) == 0) ||
              (uVar11 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), uVar11 < 4)) ||
             (uVar16 = FUN_021df090(*(undefined8 *)(param_1 + 8)), (uVar16 & 1) == 0)) {
            sVar6 = *(short *)puVar21;
            if (sVar6 != -1) {
              local_250 = (undefined *)((ulong)local_250 & 0xffffffff00000000);
              puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
              if (0xff < (uint)(int)sVar6) {
                puVar18 = (uint *)PTR_DAT_04bc39f8;
              }
              if (((*puVar18 & 1) != 0) &&
                 (pcVar13 = (char *)FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508)),
                 pcVar13 != (char *)0x0)) {
                local_240 = CONCAT71(local_240._1_7_,1);
                local_248 = pcVar13;
                if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
                  uVar8 = 0;
                }
                else {
                  puVar25 = (undefined8 *)**(long **)(pcVar13 + 0x28);
                  uVar8 = 0;
                  if (puVar25 != (undefined8 *)0x0) {
                    uVar8 = (**(code **)*puVar25)();
                  }
                }
                local_240 = CONCAT62(local_240._2_6_,CONCAT11(uVar8,(undefined1)local_240)) &
                            0xffffffffffff01ff;
                local_250 = PTR_DAT_04bb67a0 + 0x10;
                cVar9 = *(char *)(*(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8) + 0x1315b);
                FUN_02640184(&local_250);
                if (cVar9 == '\n') goto LAB_01e69ff4;
              }
              sVar6 = *(short *)puVar21;
              if (sVar6 != -1) {
                local_250 = (undefined *)((ulong)local_250 & 0xffffffff00000000);
                puVar18 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
                if (0xff < (uint)(int)sVar6) {
                  puVar18 = (uint *)PTR_DAT_04bc39f8;
                }
                if ((*puVar18 & 1) != 0) {
                  local_250 = puVar2 + 0x10;
                  local_248 = "NpcVisitPlayerHouse";
                  iVar12 = FUN_02743000(&local_250);
                  if (iVar12 != 0) goto LAB_01e69ff4;
                }
              }
            }
            goto LAB_01e69f84;
          }
LAB_01e69ff4:
          bVar7 = false;
          bVar10 = 0;
        }
      }
      puVar2 = PTR_DAT_04bb32e8;
      uVar34 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_250 = puVar23;
      local_248 = "HarvestFestival";
      puVar20 = (ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4068);
      if (*(short *)puVar20 == 0) {
        local_258 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
        if ((char)(local_258 >> 0x20) < '\x05') {
          lVar24 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_258);
          local_288 = (undefined *)(lVar24 + -0x15180);
          local_258 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_288);
        }
        puVar20 = &local_258;
        uVar16 = local_258 >> 0x30;
        local_258._0_6_ = CONCAT24(5,(undefined4)local_258);
        local_258 = CONCAT26((short)uVar16,(undefined6)local_258) & 0xff00ffffffffffff;
      }
      uVar16 = *puVar20;
      uVar16 = FUN_00879dd0(uVar34,&local_250,uVar16,uVar16 >> 0x10,uVar16 >> 0x18,0);
      if ((((uVar16 & 1) == 0) || ('\x04' < *(char *)(*(long *)puVar2 + 0x4064))) ||
         (pcVar13 = (char *)FUN_0265c3e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508)),
         pcVar13 == (char *)0x0)) {
        bVar10 = bVar10 & 1;
      }
      else {
        local_240 = CONCAT71(local_240._1_7_,1);
        local_248 = pcVar13;
        if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
          uVar8 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(pcVar13 + 0x28);
          uVar8 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            uVar8 = (**(code **)*puVar25)();
          }
        }
        puVar23 = PTR_DAT_04bb67a0;
        local_240 = CONCAT62(local_240._2_6_,CONCAT11(uVar8,(undefined1)local_240)) &
                    0xffffffffffff01ff;
        local_250 = PTR_DAT_04bb67a0 + 0x10;
        lVar24 = *(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8);
        if (*(char *)(lVar24 + 0x1315b) == '\x16') {
          FUN_02640184(&local_250);
          goto LAB_01e681a4;
        }
        local_278 = 1;
        local_280 = pcVar13;
        if (*(long **)(pcVar13 + 0x28) == (long *)0x0) {
          local_277 = 0;
        }
        else {
          puVar25 = (undefined8 *)**(long **)(pcVar13 + 0x28);
          local_277 = 0;
          if (puVar25 != (undefined8 *)0x0) {
            local_277 = (**(code **)*puVar25)();
            lVar24 = *(long *)(pcVar13 + 0x10) + *(long *)(pcVar13 + 8);
          }
        }
        local_277 = local_277 & 1;
        local_288 = puVar23 + 0x10;
        cVar9 = *(char *)(lVar24 + 0x1315b);
        FUN_02640184(&local_288);
        FUN_02640184(&local_250);
        bVar10 = cVar9 != '\x17' & bVar10;
      }
      if (bVar10 != 0) {
        piVar27 = &local_26c;
        if (!bVar7) {
          piVar27 = (int *)0x0;
        }
        FUN_01e6b6d8(param_1,1,0,piVar27);
      }
    }
  }
LAB_01e681a4:
  if (*(int *)(param_2 + 100) != 0) {
    FUN_01e6bbd0(param_1,param_2);
    goto LAB_01e6a87c;
  }
  lVar24 = *(long *)PTR_DAT_04bb3968;
  if (lVar24 == 0) {
LAB_01e6827c:
    puVar18 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar11 = *(uint *)(param_2 + 8);
    if ((int)*(uint *)(lVar24 + 0x16ac8) < 1) {
      if (((((*(long *)(lVar24 + 0x169b8) != 0) &&
            (puVar18 = *(uint **)(*(long *)(lVar24 + 0x169b8) + 8), puVar18 != (uint *)0x0)) &&
           ((*(uint *)(lVar24 + 0x169d0) <= uVar11 ||
            (*(char *)(*(long *)(lVar24 + 0x169d8) + (long)(int)uVar11) != '\0')))) &&
          ((uVar11 < *puVar18 && (puVar18[1] != 0)))) && ((ushort)puVar18[2] != 0)) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar18 = (uint *)((ulong)(puVar18[1] * uVar11 + (uint)(ushort)puVar18[2] * 8 + iVar12) +
                          (long)puVar18);
        if (puVar18 != (uint *)0x0) goto LAB_01e68284;
      }
      goto LAB_01e6827c;
    }
    if (*(uint *)(lVar24 + 0x16ac8) <= uVar11) goto LAB_01e6827c;
    if (*(uint *)(lVar24 + 0x16ab8) <= uVar11) {
      uVar11 = 0;
    }
    puVar18 = *(uint **)(*(long *)(lVar24 + 0x16ac0) + (ulong)uVar11 * 8);
    if (puVar18 == (uint *)0x0) goto LAB_01e6827c;
  }
LAB_01e68284:
  if (*(byte *)(param_1 + 0x132d8) < 8) {
    local_250 = PTR_DAT_04bb2020 + 0x10;
    local_248 = "StoodUpFlag";
    FUN_0265d4e0(*(undefined4 *)(*(long *)(param_1 + 8) + 0x508),(byte *)(param_1 + 0x132d8),
                 &local_250,0,1);
  }
  piVar27 = (int *)(param_2 + 8);
  *(ushort *)(param_1 + 0x12570) = *(ushort *)(param_1 + 0x12570) & 0xfe7f;
  FUN_01e6fdd0(&local_268,param_1);
  puVar2 = PTR_DAT_04bc1568;
  puVar23 = PTR_DAT_04bc1560;
  lVar24 = *(long *)(param_1 + 8);
  pcVar13 = PTR_DAT_04bc2b20;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    if (lVar24 == 0) {
LAB_01e68380:
      pcVar19 = (char *)0x0;
    }
    else {
      uVar11 = *(uint *)(lVar24 + 0x508);
      if (uVar11 != 0xffffffff) {
        puVar21 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
        if (9 < uVar11) {
          puVar21 = &DAT_053fe348;
        }
        pcVar13 = puVar21 + 0x658;
        goto LAB_01e68390;
      }
      uVar11 = *(uint *)(lVar24 + 0x50c);
      if (uVar11 == 0xffffffff) goto LAB_01e68380;
      pcVar22 = &DAT_05454358 + (ulong)uVar11 * 0x2d8;
      if (0x10 < uVar11) {
        pcVar22 = &DAT_05454358;
      }
      pcVar19 = (char *)0x0;
      if (*pcVar22 != '\0') {
        pcVar19 = pcVar22;
      }
    }
    if (pcVar19 != (char *)0x0) {
      pcVar13 = pcVar19 + 0x90;
    }
  }
LAB_01e68390:
  uVar11 = *puVar18;
  puVar3 = (undefined4 *)(param_1 + 0x12550);
  if (uVar11 != 0) {
    cVar9 = *PTR_DAT_04bc1560;
    do {
      if (cVar9 == '\0') {
        cVar9 = '\x01';
        *(undefined8 *)puVar2 = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
        *puVar23 = 1;
        *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
        uVar11 = *puVar18;
      }
      else {
        uVar33 = *(uint *)(puVar2 + 100);
        if (-1 < (int)uVar33) {
          pcVar19 = (char *)((ulong)uVar33 + (long)puVar18);
          if (pcVar19 != (char *)0x0) {
            cVar9 = pcVar19[1];
            cVar28 = pcVar19[2];
            if (*pcVar19 != '\0') goto LAB_01e684e0;
            goto LAB_01e684c4;
          }
          break;
        }
        if (uVar33 != 0xffffffff) break;
      }
      puVar26 = (uint *)(ulong)uVar11;
      if (puVar26 == (uint *)0x0) {
        cVar28 = '\0';
        cVar9 = '\0';
        goto LAB_01e684c4;
      }
      if (puVar18 == puVar26) break;
      lVar4 = 0xc;
      if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
        lVar4 = 0x1c;
      }
      lVar4 = (long)puVar18 + (lVar4 - (long)puVar26);
      if (lVar4 == 0) break;
      uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
      *(undefined4 *)(puVar2 + 100) = 0xfffffffe;
      if (uVar16 == 0) break;
      piVar29 = (int *)(lVar4 + 4);
      while (piVar29[-1] != -0x6437a430) {
        piVar29 = piVar29 + 2;
        uVar16 = uVar16 - 1;
        if (uVar16 == 0) goto LAB_01e684c0;
      }
      iVar12 = 0;
      if (*piVar29 != -1) {
        iVar12 = *piVar29;
      }
      *(int *)(puVar2 + 100) = iVar12;
      uVar11 = *puVar18;
      if (uVar11 == 0) break;
    } while( true );
  }
LAB_01e684c0:
  cVar28 = '\0';
  cVar9 = '\0';
LAB_01e684c4:
  if ((cVar9 == '\0') && (cVar28 == '\0')) {
    uVar16 = 0;
  }
  else {
LAB_01e684e0:
    puVar23 = PTR_DAT_04bb6298;
    *puVar3 = 1;
    sVar6 = *(short *)puVar23;
    if (sVar6 == -1) {
LAB_01e6854c:
      uVar16 = 0;
    }
    else {
      local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
      puVar26 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar26 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar26 >> 1 & 1) == 0) goto LAB_01e6854c;
      if (*(int *)(pcVar13 + 8) != 0x10) {
        if (*(int *)(pcVar13 + 8) != 0x10) {
          uVar16 = 0;
          if ((((param_4 | param_5) & 1) == 0) || (*(int *)(pcVar13 + 8) == 0xe)) goto LAB_01e68550;
          fVar36 = *(float *)(*(long *)(lVar24 + 0x68) + 0x278);
          if ((fVar36 < (float)*(int *)(pcVar13 + 0x38) * 5.0) ||
             ((((float)*(int *)(pcVar13 + 0x48) * 5.0 + 5.0 <= fVar36 ||
               (fVar36 = *(float *)(*(long *)(lVar24 + 0x68) + 0x280),
               fVar36 < (float)*(int *)(pcVar13 + 0x3c) * 5.0)) ||
              ((float)*(int *)(pcVar13 + 0x4c) * 5.0 + 5.0 <= fVar36)))) goto LAB_01e696ec;
        }
        goto LAB_01e6854c;
      }
LAB_01e696ec:
      uVar16 = FUN_01e70a60(param_1,*(int *)(pcVar13 + 8) != 0x10);
      uVar16 = uVar16 & 0xffffffff;
    }
LAB_01e68550:
    if ((*(int *)(pcVar13 + 8) != 0x10) &&
       ((*(int *)(pcVar13 + 8) == 0x10 || (*(int *)(pcVar13 + 8) == 0xe)))) {
      *puVar3 = 0;
    }
  }
  puVar21 = PTR_DAT_04bc1568;
  puVar2 = PTR_DAT_04bc1560;
  puVar23 = PTR_DAT_04bb5d40;
  switch(*(undefined4 *)(param_2 + 0x10)) {
  case 0:
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x37);
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x44);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e686ac;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e686ac;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e686ac;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x44) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != 0x604df507) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e686a8;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x44) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e686a8:
    pcVar13 = (char *)0x0;
LAB_01e686ac:
    local_280 = *(char **)PTR_PTR_04bc18f8;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    local_288 = PTR_DAT_04bb2020 + 0x10;
    FUN_01e5fa8c(auStack_b0,&local_288);
    local_174 = local_268;
    local_170 = uStack_264;
    goto LAB_01e68ebc;
  case 1:
    if (((param_5 & 1) != 0) && ((param_4 & 1) == 0)) {
      *(undefined4 *)(param_1 + 0x12704) = 0x10;
    }
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x38);
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x44);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e68808;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e68808;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e68808;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x44) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != 0x604df507) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e68804;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x44) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e68804:
    pcVar13 = (char *)0x0;
LAB_01e68808:
    local_280 = *(char **)PTR_PTR_04bc18f8;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    local_288 = PTR_DAT_04bb2020 + 0x10;
    FUN_01e5fa8c(auStack_b0,&local_288);
    _local_1e8 = CONCAT12(1,local_1e8);
    local_1ec = 1;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    *puVar3 = 1;
    goto LAB_01e6a87c;
  case 2:
    FUN_01e63f1c(&local_250);
    if ((*(int *)(param_2 + 100) == 0) && (0x1b < *piVar27)) {
      local_228 = *(undefined8 *)(param_2 + 0x14);
      local_220 = *(float *)(param_2 + 0x1c);
      local_1f8 = 1;
      pcVar13 = (char *)FUN_01e27050(puVar18,6,0xbdd4dc0f,*(undefined8 *)PTR_DAT_04bc1598);
      if ((pcVar13 == (char *)0x0) || (*pcVar13 != '\x03')) {
        uVar11 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        puVar23 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
        if (9 < uVar11) {
          puVar23 = &DAT_053fe348;
        }
        local_20c = *(undefined4 *)(puVar23 + 0x810);
        local_1f0 = 2;
      }
      else {
        local_218 = 0.0;
        if (*(long *)(param_1 + 8) == 0) {
          local_214 = 0;
          local_210 = 0.0;
        }
        else {
          uVar11 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
          local_214 = 0;
          local_210 = 0.0;
          if (uVar11 != 0xffffffff) {
            puVar23 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
            if (9 < uVar11) {
              puVar23 = &DAT_053fe348;
            }
            local_218 = *(float *)(puVar23 + 0x7d8);
            local_214 = *(undefined4 *)(puVar23 + 0x7dc);
            local_210 = *(float *)(puVar23 + 0x7e0);
          }
        }
        local_1f0 = 1;
      }
    }
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_170 = uStack_264;
    local_174 = local_268;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x9c);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e6a3b8;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e6a3b8;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e6a3b8;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x9c) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != -0x71543da9) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e6a3b4;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x9c) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e6a3b4:
    pcVar13 = (char *)0x0;
LAB_01e6a3b8:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_288 = PTR_DAT_04bb2020 + 0x10;
    local_280 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    uVar11 = 0;
    do {
      pcVar13 = "";
      if (uVar11 < 0x36) {
        pcVar13 = *(char **)(puVar23 + (ulong)uVar11 * 8 + 0x370);
      }
      (**(code **)(local_288 + 0x18))(&local_288);
      if (pcVar13 == local_280) goto LAB_01e6a4a4;
      if (*pcVar13 == *local_280) {
        if (*pcVar13 == '\0') goto LAB_01e6a4a4;
        lVar24 = 0x7fffe;
        pcVar19 = local_280;
        while( true ) {
          if (pcVar13[1] != pcVar19[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01e6a4a4;
          if (pcVar13[2] != pcVar19[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01e6a4a4;
          if ((lVar24 == 0) || (cVar9 = pcVar13[3], cVar9 != pcVar19[3])) break;
          lVar24 = lVar24 + -3;
          pcVar19 = pcVar19 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar9 == '\0') goto LAB_01e6a4a4;
        }
      }
      uVar33 = 0x36;
      if ((int)uVar11 < 0x36) {
        uVar33 = uVar11 + 1;
      }
      uVar11 = uVar33;
    } while (uVar33 != 0x36);
    break;
  case 3:
    FUN_01e63f1c(&local_250);
    *(long *)(param_1 + 0x12658) = param_1;
    puVar23 = PTR_LAB_04bc1930;
    local_1e4 = 3;
    local_230 = param_1 + 0x12650;
    *(undefined8 *)(param_1 + 0x12668) = 0;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
    _local_1e8 = CONCAT21(stack0xfffffffffffffe19,1);
    local_1ec = 1;
    *(undefined **)(param_1 + 0x12660) = puVar23;
    if (*(int *)(param_1 + 0xef14) <= *(int *)(param_1 + 0xef10)) goto switchD_01e68598_caseD_14;
    goto LAB_01e6a86c;
  case 4:
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_220 = *(float *)(param_2 + 0x1c);
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x16);
    local_1f8 = 1;
    local_228 = *(undefined8 *)(param_2 + 0x14);
    local_208 = 1;
    lVar24 = *(long *)(param_1 + 8);
    if (lVar24 != 0) {
      uVar11 = *(uint *)(lVar24 + 0x508);
      if (uVar11 == 0xffffffff) {
        uVar11 = *(uint *)(lVar24 + 0x50c);
        if (uVar11 != 0xffffffff) {
          pcVar13 = &DAT_05454358 + (ulong)uVar11 * 0x2d8;
          if (0x10 < uVar11) {
            pcVar13 = &DAT_05454358;
          }
          if (*pcVar13 != '\0') {
            cVar9 = pcVar13[0x110];
            goto joined_r0x01e69cc0;
          }
        }
      }
      else {
        puVar21 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
        if (9 < uVar11) {
          puVar21 = &DAT_053fe348;
        }
        cVar9 = puVar21[0x6d8];
joined_r0x01e69cc0:
        if (cVar9 != '\0') {
          local_20c = *(undefined4 *)(*(long *)(lVar24 + 0x68) + 0x2b4);
          goto LAB_01e6a548;
        }
      }
    }
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x18);
          if (-1 < (int)uVar33) {
            if (((char *)((ulong)uVar33 + (long)puVar18) != (char *)0x0) &&
               (*(char *)((ulong)uVar33 + (long)puVar18) == '\x01')) {
              puVar23 = &DAT_053fe348 + (ulong)*(uint *)(lVar24 + 0x508) * 0xba0;
              if (9 < *(uint *)(lVar24 + 0x508)) {
                puVar23 = &DAT_053fe348;
              }
              local_20c = *(undefined4 *)(puVar23 + 0x810);
              goto LAB_01e6a548;
            }
            break;
          }
          if (uVar33 != 0xffffffff) break;
        }
        lVar4 = (long)puVar18 - (ulong)uVar11;
        if (((ulong)uVar11 == 0) || (lVar4 == 0)) break;
        lVar5 = 0xc;
        if (*(char *)(lVar4 + 10) != '\0') {
          lVar5 = 0x1c;
        }
        if (lVar5 + lVar4 == 0) break;
        uVar16 = (ulong)*(ushort *)(lVar4 + 8);
        *(undefined4 *)(puVar2 + 0x18) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar5 + lVar4 + 4);
        while (piVar27[-1] != -0x422b23f1) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e6a4f0;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x18) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e6a4f0:
    fVar36 = 0.0;
    if (lVar24 == 0) {
      fVar39 = 0.0;
    }
    else {
      uVar11 = *(uint *)(lVar24 + 0x508);
      fVar39 = 0.0;
      if (uVar11 != 0xffffffff) {
        puVar23 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
        if (9 < uVar11) {
          puVar23 = &DAT_053fe348;
        }
        fVar36 = *(float *)(puVar23 + 0x7d8);
        fVar39 = *(float *)(puVar23 + 0x7e0);
      }
    }
    local_20c = FUN_006f0400(fVar36 - *(float *)(param_2 + 0x14),fVar39 - *(float *)(param_2 + 0x1c)
                            );
    goto LAB_01e6a548;
  case 5:
switchD_01e68598_caseD_5:
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x1a);
    if ((*(int *)(param_2 + 100) == 0) && (*piVar27 == 0x1a)) {
      *puVar14 = 1;
      goto joined_r0x01e68da4;
    }
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,10);
    if ((*(int *)(param_2 + 100) == 0) && (0x1b < *piVar27)) {
      local_160 = 5;
    }
    else {
      local_160 = 1;
    }
    local_174 = local_268;
    local_170 = uStack_264;
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x9c);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e6957c;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e6957c;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e6957c;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x9c) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != -0x71543da9) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e69578;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x9c) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e69578:
    pcVar13 = (char *)0x0;
LAB_01e6957c:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_288 = PTR_DAT_04bb2020 + 0x10;
    local_280 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    uVar11 = 0;
    do {
      pcVar13 = "";
      if (uVar11 < 0x36) {
        pcVar13 = *(char **)(puVar23 + (ulong)uVar11 * 8 + 0x370);
      }
      (**(code **)(local_288 + 0x18))(&local_288);
      if (pcVar13 == local_280) goto LAB_01e6a4a4;
      if (*pcVar13 == *local_280) {
        if (*pcVar13 == '\0') goto LAB_01e6a4a4;
        lVar24 = 0x7fffe;
        pcVar19 = local_280;
        while( true ) {
          if (pcVar13[1] != pcVar19[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01e6a4a4;
          if (pcVar13[2] != pcVar19[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01e6a4a4;
          if ((lVar24 == 0) || (cVar9 = pcVar13[3], cVar9 != pcVar19[3])) break;
          lVar24 = lVar24 + -3;
          pcVar19 = pcVar19 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar9 == '\0') goto LAB_01e6a4a4;
        }
      }
      uVar33 = 0x36;
      if ((int)uVar11 < 0x36) {
        uVar33 = uVar11 + 1;
      }
      uVar11 = uVar33;
    } while (uVar33 != 0x36);
    break;
  case 6:
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,10);
    local_160 = 1;
    local_174 = local_268;
    local_170 = uStack_264;
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x9c);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e68af8;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e68af8;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e68af8;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x9c) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != -0x71543da9) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e68af4;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x9c) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e68af4:
    pcVar13 = (char *)0x0;
LAB_01e68af8:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_288 = PTR_DAT_04bb2020 + 0x10;
    local_280 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    uVar11 = 0;
    do {
      pcVar13 = "";
      if (uVar11 < 0x36) {
        pcVar13 = *(char **)(puVar23 + (ulong)uVar11 * 8 + 0x370);
      }
      (**(code **)(local_288 + 0x18))(&local_288);
      if (pcVar13 == local_280) {
LAB_01e68be4:
        local_ac[0] = uVar11;
        break;
      }
      if (*pcVar13 == *local_280) {
        if (*pcVar13 == '\0') goto LAB_01e68be4;
        lVar24 = 0x7fffe;
        pcVar19 = local_280;
        while( true ) {
          if (pcVar13[1] != pcVar19[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01e68be4;
          if (pcVar13[2] != pcVar19[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01e68be4;
          if ((lVar24 == 0) || (cVar9 = pcVar13[3], cVar9 != pcVar19[3])) break;
          lVar24 = lVar24 + -3;
          pcVar19 = pcVar19 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar9 == '\0') goto LAB_01e68be4;
        }
      }
      uVar33 = 0x36;
      if ((int)uVar11 < 0x36) {
        uVar33 = uVar11 + 1;
      }
      uVar11 = uVar33;
    } while (uVar33 != 0x36);
    _local_1e8 = CONCAT12(1,local_1e8);
    break;
  case 7:
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 != -1) {
      local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
      puVar26 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar26 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar26 >> 1 & 1) != 0) && ((*(int *)(param_2 + 100) != 0 || (*piVar27 < 0x1c))))
      goto switchD_01e68598_caseD_8;
    }
    uVar32 = FUN_016e6434();
    if ((uVar32 & 1) == 0) goto switchD_01e68598_caseD_5;
    FUN_01e63f1c(&local_250);
    uVar16 = FUN_021eb670(*(long *)(param_1 + 8) + 0x508);
    if (((uVar16 & 1) == 0) &&
       (uVar16 = FUN_021eb720(*(long *)(param_1 + 8) + 0x508), (uVar16 & 1) == 0)) {
      local_250 = (undefined *)CONCAT44(local_250._4_4_,0x39);
      local_174 = local_268;
      local_170 = uStack_264;
    }
    else {
      local_250 = (undefined *)CONCAT44(local_250._4_4_,10);
      local_160 = 1;
      local_174 = local_268;
      local_170 = uStack_264;
      pcVar13 = (char *)FUN_01e27050(puVar18,0x27,0x8eabc257,*(undefined8 *)PTR_DAT_04bc1900);
      local_280 = *(char **)PTR_PTR_04bc1908;
      if (pcVar13 != (char *)0x0) {
        local_280 = pcVar13;
      }
      local_288 = PTR_DAT_04bb2020 + 0x10;
      FUN_01e733c0(local_ac,&local_288);
    }
    break;
  case 8:
  case 0x23:
switchD_01e68598_caseD_8:
    goto joined_r0x01e68db0;
  case 9:
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x3e);
    if (*(int *)(param_2 + 100) == 0) {
      local_143 = 0x1b < *piVar27;
    }
    else {
      local_143 = false;
    }
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x44);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e6981c;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e6981c;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e6981c;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x44) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != 0x604df507) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e69818;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x44) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e69818:
    pcVar13 = (char *)0x0;
LAB_01e6981c:
    local_280 = *(char **)PTR_PTR_04bc18f8;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    local_288 = PTR_DAT_04bb2020 + 0x10;
    FUN_01e5fa8c(auStack_b0,&local_288);
    local_174 = local_268;
    local_170 = uStack_264;
    break;
  case 10:
    *(undefined4 *)(param_1 + 0x12740) = *(undefined4 *)(PTR_DAT_04bb5d40 + 8);
    *(undefined4 *)(param_1 + 0x12744) = *(undefined4 *)(puVar23 + 0xc);
joined_r0x01e68da4:
    if ((uVar16 & 1) != 0) goto switchD_01e68598_caseD_14;
    goto LAB_01e693a0;
  case 0xb:
    *puVar14 = 0;
joined_r0x01e68db0:
    if ((uVar16 & 1) == 0) {
LAB_01e693a0:
      uVar16 = FUN_01e77180(param_1);
      if ((uVar16 & 1) == 0) {
        FUN_01e76e90(param_1);
      }
    }
    goto switchD_01e68598_caseD_14;
  case 0xc:
    *(undefined8 *)(param_1 + 0x12708) = 0;
    *(undefined8 *)(param_1 + 0x12710) = 0;
    FUN_01e63f1c(&local_250);
    *(long *)(param_1 + 0x12638) = param_1;
    puVar23 = PTR_LAB_04bc1938;
    local_250._0_4_ = 10;
    local_238 = param_1 + 0x12630;
    local_160 = 1;
    *(undefined8 *)(param_1 + 0x12648) = 0;
    *(undefined **)(param_1 + 0x12640) = puVar23;
    local_174 = local_268;
    local_170 = uStack_264;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    FUN_01e63f1c(&local_250);
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x3a);
    local_174 = local_268;
    local_170 = uStack_264;
    lVar24 = *(long *)PTR_DAT_04bb3968;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar24 + 0x2268) + 0xf0))(lVar24 + 0x2268);
    local_198 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar24 + 0x2298) + 0xf0))(lVar24 + 0x2298);
    local_194 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar24 + 0x22c8) + 0xf0))(lVar24 + 0x22c8);
    local_190 = *puVar14;
    puVar14 = (undefined4 *)(**(code **)(*(long *)(lVar24 + 0x22f8) + 0xf0))(lVar24 + 0x22f8);
    local_18c = *puVar14;
LAB_01e68ebc:
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    *puVar3 = 1;
    goto LAB_01e6a87c;
  case 0xd:
    FUN_01e63f1c(&local_250);
    *(long *)(param_1 + 0x12638) = param_1;
    *(undefined8 *)(param_1 + 0x12648) = 0;
    puVar23 = PTR_LAB_04bc1940;
    lVar24 = param_1 + 0x12630;
    *(long *)(param_1 + 0x12658) = param_1;
    lVar4 = param_1 + 0x12650;
    *(undefined **)(param_1 + 0x12640) = puVar23;
    puVar23 = PTR_LAB_04bc1948;
    local_250._0_4_ = 10;
    local_160 = 1;
    *(undefined8 *)(param_1 + 0x12668) = 0;
    *(undefined **)(param_1 + 0x12660) = puVar23;
    local_174 = local_268;
    local_170 = uStack_264;
    local_238 = lVar24;
    local_230 = lVar4;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    FUN_01e63f1c(&local_250);
    local_250._0_4_ = 0x3b;
    local_1f8 = 1;
    local_1f0 = 2;
    local_174 = local_268;
    local_170 = uStack_264;
    local_238 = lVar24;
    local_230 = lVar4;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    FUN_01e63f1c(&local_250);
    local_160 = 1;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,10);
    local_174 = local_268;
    local_170 = uStack_264;
    local_1e4 = 0x708;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    *puVar3 = 1;
    goto LAB_01e6a87c;
  case 0xe:
    FUN_01e8f184(param_1);
    goto switchD_01e68598_caseD_14;
  case 0xf:
    if (((*(int *)(pcVar13 + 8) != 0x10) && (*(int *)(pcVar13 + 8) != 0xe)) ||
       (*(int *)(pcVar13 + 8) == 0x10)) {
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 != -1) {
        local_250 = (undefined *)((ulong)local_250._4_4_ << 0x20);
        puVar26 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
        if (0xff < (uint)(int)sVar6) {
          puVar26 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar26 & 1) != 0) goto LAB_01e69068;
      }
      goto switchD_01e68598_caseD_8;
    }
LAB_01e69068:
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,10);
    local_160 = 1;
    local_174 = local_268;
    local_170 = uStack_264;
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x9c);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e69180;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e69180;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e69180;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x9c) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != -0x71543da9) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e6917c;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x9c) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e6917c:
    pcVar13 = (char *)0x0;
LAB_01e69180:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_288 = PTR_DAT_04bb2020 + 0x10;
    local_280 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    uVar11 = 0;
    do {
      pcVar13 = "";
      if (uVar11 < 0x36) {
        pcVar13 = *(char **)(puVar23 + (ulong)uVar11 * 8 + 0x370);
      }
      (**(code **)(local_288 + 0x18))(&local_288);
      if (pcVar13 == local_280) goto LAB_01e6a4a4;
      if (*pcVar13 == *local_280) {
        if (*pcVar13 == '\0') goto LAB_01e6a4a4;
        lVar24 = 0x7fffe;
        pcVar19 = local_280;
        while( true ) {
          if (pcVar13[1] != pcVar19[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01e6a4a4;
          if (pcVar13[2] != pcVar19[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01e6a4a4;
          if ((lVar24 == 0) || (cVar9 = pcVar13[3], cVar9 != pcVar19[3])) break;
          lVar24 = lVar24 + -3;
          pcVar19 = pcVar19 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar9 == '\0') goto LAB_01e6a4a4;
        }
      }
      uVar33 = 0x36;
      if ((int)uVar11 < 0x36) {
        uVar33 = uVar11 + 1;
      }
      uVar11 = uVar33;
    } while (uVar33 != 0x36);
    break;
  case 0x10:
    FUN_01e63f1c(&local_250);
    _local_1e8 = CONCAT12(1,local_1e8);
    lVar24 = *(long *)PTR_DAT_04bb5c90;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,9);
    local_1a8 = ((float)*(int *)(lVar24 + 0x84) * 5.0 + (float)*(int *)(lVar24 + 0x94) * 5.0 + 5.0)
                * 0.5;
    local_1b0 = CONCAT44(local_1b0._4_4_,
                         ((float)*(int *)(lVar24 + 0x80) * 5.0 +
                         (float)*(int *)(lVar24 + 0x90) * 5.0 + 5.0) * 0.5);
    break;
  case 0x11:
    goto switchD_01e68598_caseD_11;
  case 0x12:
    FUN_01e73870(param_1);
    goto switchD_01e68598_caseD_14;
  case 0x13:
    *(undefined4 *)(param_1 + 0x13400) = 0;
    FUN_01e93a58(param_1);
  default:
    goto switchD_01e68598_caseD_14;
  case 0x1a:
    lVar24 = *(long *)(param_1 + 8);
    uVar37 = 0;
    if (lVar24 == 0) {
LAB_01e69dec:
      uVar38 = 0;
      fVar36 = 0.0;
LAB_01e69df4:
      uVar11 = *puVar18;
      if (uVar11 != 0) {
        cVar9 = *PTR_DAT_04bc1560;
        while( true ) {
          if (cVar9 == '\0') {
            cVar9 = '\x01';
            *(undefined8 *)puVar21 = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
            *(undefined8 *)(puVar21 + 0x10) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x18) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x20) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x28) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x30) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x38) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x40) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x48) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x50) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x58) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x60) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x68) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x70) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x78) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x80) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x88) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x90) = 0xffffffffffffffff;
            *(undefined8 *)(puVar21 + 0x98) = 0xffffffffffffffff;
            uVar11 = *puVar18;
          }
          else {
            uVar33 = *(uint *)(puVar21 + 0x18);
            if (-1 < (int)uVar33) {
              if (((char *)((ulong)uVar33 + (long)puVar18) != (char *)0x0) &&
                 (*(char *)((ulong)uVar33 + (long)puVar18) == '\x05')) {
                if ((lVar24 != 0) && (uVar11 = *(uint *)(lVar24 + 0x508), uVar11 != 0xffffffff)) {
                  puVar23 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
                  if (9 < uVar11) {
                    puVar23 = &DAT_053fe348;
                  }
                  uVar37 = *(undefined4 *)(puVar23 + 0x7cc);
                  uVar38 = *(undefined4 *)(puVar23 + 2000);
                  fVar36 = *(float *)(puVar23 + 0x7d4);
                }
                goto LAB_01e6a5d4;
              }
              break;
            }
            if (uVar33 != 0xffffffff) break;
          }
          lVar4 = (long)puVar18 - (ulong)uVar11;
          if (((ulong)uVar11 == 0) || (lVar4 == 0)) break;
          lVar5 = 0xc;
          if (*(char *)(lVar4 + 10) != '\0') {
            lVar5 = 0x1c;
          }
          if (lVar5 + lVar4 == 0) break;
          uVar16 = (ulong)*(ushort *)(lVar4 + 8);
          *(undefined4 *)(puVar21 + 0x18) = 0xfffffffe;
          if (uVar16 == 0) break;
          piVar27 = (int *)(lVar5 + lVar4 + 4);
          while (piVar27[-1] != -0x422b23f1) {
            piVar27 = piVar27 + 2;
            uVar16 = uVar16 - 1;
            if (uVar16 == 0) goto LAB_01e6a5a0;
          }
          iVar12 = 0;
          if (*piVar27 != -1) {
            iVar12 = *piVar27;
          }
          *(int *)(puVar21 + 0x18) = iVar12;
          uVar11 = *puVar18;
          if (uVar11 == 0) break;
        }
      }
LAB_01e6a5a0:
      if ((lVar24 != 0) && (uVar11 = *(uint *)(lVar24 + 0x508), uVar11 != 0xffffffff)) {
        puVar23 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
        if (9 < uVar11) {
          puVar23 = &DAT_053fe348;
        }
        uVar37 = *(undefined4 *)(puVar23 + 0x7d8);
        uVar38 = *(undefined4 *)(puVar23 + 0x7dc);
        fVar36 = *(float *)(puVar23 + 0x7e0);
      }
LAB_01e6a5d4:
      FUN_01e63f1c(&local_250);
      local_1a0 = *(undefined4 *)(param_2 + 0x58);
      local_19c = *(undefined4 *)(param_2 + 0x5c);
      local_1b0 = CONCAT44(uVar38,uVar37);
      local_1c8 = *(undefined4 *)(param_2 + 0x30);
      uStack_1c4 = *(undefined4 *)(param_2 + 0x34);
      local_250 = (undefined *)CONCAT44(local_250._4_4_,0x14);
      local_1b8 = *(undefined4 *)(param_2 + 0x40);
      uStack_1b4 = *(undefined4 *)(param_2 + 0x44);
      local_178 = 1;
      local_1a8 = fVar36;
      if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
        FUN_021920b0(piVar30,&local_250);
      }
    }
    else {
      uVar11 = *(uint *)(lVar24 + 0x508);
      if (uVar11 == 0xffffffff) {
        uVar11 = *(uint *)(lVar24 + 0x50c);
        if (uVar11 != 0xffffffff) {
          pcVar13 = &DAT_05454358 + (ulong)uVar11 * 0x2d8;
          if (0x10 < uVar11) {
            pcVar13 = &DAT_05454358;
          }
          if (*pcVar13 != '\0') {
            uVar38 = 0;
            fVar36 = 0.0;
            if (pcVar13[0x110] == '\0') goto LAB_01e69df4;
            goto LAB_01e6a628;
          }
        }
        goto LAB_01e69dec;
      }
      puVar23 = &DAT_053fe348 + (ulong)uVar11 * 0xba0;
      if (9 < uVar11) {
        puVar23 = &DAT_053fe348;
      }
      if (puVar23[0x6d8] == '\0') {
        uVar37 = *(undefined4 *)(puVar23 + 0x7d8);
        uVar38 = *(undefined4 *)(puVar23 + 0x7dc);
        fVar36 = *(float *)(puVar23 + 0x7e0);
        goto LAB_01e69df4;
      }
    }
LAB_01e6a628:
    FUN_01e63f1c(&local_250);
    puVar2 = PTR_DAT_04bc1568;
    puVar23 = PTR_DAT_04bc1560;
    local_250 = (undefined *)CONCAT44(local_250._4_4_,1);
    uVar11 = *puVar18;
    if (uVar11 != 0) {
      cVar9 = *PTR_DAT_04bc1560;
      do {
        if (cVar9 == '\0') {
          cVar9 = '\x01';
          *(undefined8 *)puVar2 = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
          *puVar23 = 1;
          *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar2 + 0x98) = 0xffffffffffffffff;
          uVar11 = *puVar18;
        }
        else {
          uVar33 = *(uint *)(puVar2 + 0x9c);
          if (-1 < (int)uVar33) {
            pcVar13 = (char *)((ulong)uVar33 + (long)puVar18);
            goto LAB_01e6a72c;
          }
          if (uVar33 != 0xffffffff) break;
        }
        puVar26 = (uint *)(ulong)uVar11;
        pcVar13 = (char *)0x0;
        if ((puVar26 == (uint *)0x0) || (puVar18 == puVar26)) goto LAB_01e6a72c;
        lVar24 = 0xc;
        if (*(char *)((long)puVar18 + (10 - (long)puVar26)) != '\0') {
          lVar24 = 0x1c;
        }
        lVar24 = (long)puVar18 + (lVar24 - (long)puVar26);
        pcVar13 = (char *)0x0;
        if (lVar24 == 0) goto LAB_01e6a72c;
        uVar16 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar26));
        *(undefined4 *)(puVar2 + 0x9c) = 0xfffffffe;
        if (uVar16 == 0) break;
        piVar27 = (int *)(lVar24 + 4);
        while (piVar27[-1] != -0x71543da9) {
          piVar27 = piVar27 + 2;
          uVar16 = uVar16 - 1;
          if (uVar16 == 0) goto LAB_01e6a728;
        }
        iVar12 = 0;
        if (*piVar27 != -1) {
          iVar12 = *piVar27;
        }
        *(int *)(puVar2 + 0x9c) = iVar12;
        uVar11 = *puVar18;
        if (uVar11 == 0) break;
      } while( true );
    }
LAB_01e6a728:
    pcVar13 = (char *)0x0;
LAB_01e6a72c:
    puVar23 = PTR_s_cDefault_04bc1610;
    local_288 = PTR_DAT_04bb2020 + 0x10;
    local_280 = *(char **)PTR_PTR_04bc1908;
    if (pcVar13 != (char *)0x0) {
      local_280 = pcVar13;
    }
    uVar11 = 0;
    do {
      pcVar13 = "";
      if (uVar11 < 0x36) {
        pcVar13 = *(char **)(puVar23 + (ulong)uVar11 * 8 + 0x370);
      }
      (**(code **)(local_288 + 0x18))(&local_288);
      if (pcVar13 == local_280) {
LAB_01e6a818:
        local_ac[0] = uVar11;
        break;
      }
      if (*pcVar13 == *local_280) {
        if (*pcVar13 == '\0') goto LAB_01e6a818;
        lVar24 = 0x7fffe;
        pcVar19 = local_280;
        while( true ) {
          if (pcVar13[1] != pcVar19[1]) break;
          if (pcVar13[1] == '\0') goto LAB_01e6a818;
          if (pcVar13[2] != pcVar19[2]) break;
          if (pcVar13[2] == '\0') goto LAB_01e6a818;
          if ((lVar24 == 0) || (cVar9 = pcVar13[3], cVar9 != pcVar19[3])) break;
          lVar24 = lVar24 + -3;
          pcVar19 = pcVar19 + 3;
          pcVar13 = pcVar13 + 3;
          if (cVar9 == '\0') goto LAB_01e6a818;
        }
      }
      uVar33 = 0x36;
      if ((int)uVar11 < 0x36) {
        uVar33 = uVar11 + 1;
      }
      uVar11 = uVar33;
    } while (uVar33 != 0x36);
    local_174 = local_268;
    local_170 = uStack_264;
    _local_1e8 = CONCAT21(stack0xfffffffffffffe19,1);
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      FUN_021920b0(piVar30,&local_250);
    }
    goto switchD_01e68598_caseD_11;
  case 0x24:
    if ((*(int *)(param_2 + 100) != 0) || (*piVar27 < 0x1c)) goto switchD_01e68598_caseD_8;
    FUN_01e63f1c(&local_250);
    uVar34 = FUN_0209ef04(piVar27);
    pbVar15 = (byte *)FUN_01e27050(uVar34,5,0x430dbf65,*(undefined8 *)PTR_DAT_04bc1590);
    if (pbVar15 == (byte *)0x0) {
      uVar11 = 0;
    }
    else {
      uVar11 = (uint)*pbVar15;
    }
    local_258 = CONCAT44(local_258._4_4_,1);
    local_288 = (undefined *)CONCAT44(local_288._4_4_,1);
    uVar11 = uVar11 >> 1 & 1;
    uVar16 = FUN_021de7e0(*(undefined8 *)(param_1 + 8));
    pfVar1 = (float *)(param_2 + 0x14);
    fVar36 = *pfVar1;
    uVar34 = *(undefined8 *)pfVar1;
    local_1b0 = *(undefined8 *)pfVar1;
    uVar33 = uVar11 ^ 1;
    fVar39 = *(float *)(param_2 + 0x1c);
    if ((uVar16 & 1) == 0 && uVar33 == 0) {
      FUN_021de860(&local_288);
      uVar32 = FUN_006f0400(local_288._0_4_ - fVar36,local_280._0_4_ - fVar39);
      uVar32 = uVar32 & 0xffffffff;
    }
    else {
      uVar32 = 0;
    }
    pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar32 >> 0x18) * 0x10);
    fVar40 = *pfVar1;
    fVar41 = pfVar1[1];
    fVar42 = pfVar1[2];
    fVar43 = pfVar1[3];
    if (uVar11 != 0) {
      local_240 = param_1 + 0x12610;
      *(long *)(param_1 + 0x12618) = param_1;
      *(undefined1 **)(param_1 + 0x12620) = &LAB_01e734e0;
      *(undefined8 *)(param_1 + 0x12628) = 0;
    }
    uVar37 = 0x22;
    if ((uVar16 & 1) == 0 && uVar33 == 0) {
      uVar37 = 0x16;
    }
    local_250 = (undefined *)CONCAT44(local_250._4_4_,uVar37);
    local_1a8 = fVar39;
    if (((uVar16 & 1) == 0 && uVar33 == 0) &&
       (uVar16 = FUN_021dd780(*(undefined8 *)(param_1 + 8)), (uVar16 & 1) != 0)) {
      local_20c = *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x2b4);
    }
    else {
      fVar35 = (float)((uint)uVar32 & 0xffffff) * 5.9604645e-08;
      local_20c = FUN_006f0400((fVar36 + (fVar40 + fVar35 * fVar41) * 10.0) - fVar36,
                               (fVar39 + (fVar42 + fVar35 * fVar43) * 10.0) - fVar39);
    }
    local_1f8 = 1;
    local_228 = uVar34;
    local_220 = fVar39;
LAB_01e6a548:
    local_1f0 = 2;
    break;
  case 0x25:
    fVar36 = *(float *)(param_2 + 0x1c);
    uVar34 = *(undefined8 *)(param_2 + 0x14);
    fVar39 = ((float)*(int *)(param_2 + 0x30) * 5.0 + (float)*(int *)(param_2 + 0x40) * 5.0 + 5.0) *
             0.5;
    fVar40 = ((float)*(int *)(param_2 + 0x34) * 5.0 + (float)*(int *)(param_2 + 0x44) * 5.0 + 5.0) *
             0.5;
    FUN_01e63f1c(&local_250);
    local_1a8 = *(float *)(param_2 + 0x1c);
    local_214 = 0;
    local_174 = local_268;
    local_170 = uStack_264;
    local_1a0 = *(undefined4 *)(param_2 + 0x58);
    local_19c = *(undefined4 *)(param_2 + 0x5c);
    local_1b0 = *(undefined8 *)(param_2 + 0x14);
    local_250 = (undefined *)CONCAT44(local_250._4_4_,0x23);
    local_1f8 = 1;
    local_208 = 1;
    local_1f0 = 1;
    local_228 = uVar34;
    local_220 = fVar36;
    local_218 = fVar39;
    local_210 = fVar40;
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) goto LAB_01e6a86c;
    goto switchD_01e68598_caseD_14;
  }
LAB_01e6a860:
  if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
LAB_01e6a86c:
    FUN_021920b0(piVar30,&local_250);
  }
switchD_01e68598_caseD_14:
LAB_01e6a87c:
  if (*piVar30 != 0) {
LAB_01e6a884:
    if ((*(byte *)(*(long *)(*(long *)(param_1 + 0xef08) + 0x3b8) + 0xad5a) >> 2 & 1) == 0) {
      FUN_02192850(param_1 + 0xef00,0,0);
    }
  }
  return;
switchD_01e68598_caseD_11:
  FUN_01e63f1c(&local_250);
  local_250 = (undefined *)CONCAT44(local_250._4_4_,0x3d);
  _local_1e8 = CONCAT21(stack0xfffffffffffffe19,1);
  goto LAB_01e6a860;
LAB_01e6a4a4:
  local_ac[0] = uVar11;
  goto LAB_01e6a860;
}

