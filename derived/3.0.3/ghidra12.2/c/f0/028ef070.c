
/* WARNING: Removing unreachable block (ram,0x028f08e8) */
/* WARNING: Removing unreachable block (ram,0x028f0324) */
/* WARNING: Removing unreachable block (ram,0x028ef7d8) */
/* WARNING: Removing unreachable block (ram,0x028ef49c) */
/* WARNING: Removing unreachable block (ram,0x028ef0bc) */
/* WARNING: Removing unreachable block (ram,0x028ef7c8) */
/* WARNING: Removing unreachable block (ram,0x028ef838) */
/* WARNING: Removing unreachable block (ram,0x028eff00) */
/* WARNING: Removing unreachable block (ram,0x028f0470) */
/* WARNING: Removing unreachable block (ram,0x028f121c) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_028ef070(void)

{
  long *plVar1;
  uint *puVar2;
  void *__s;
  uint uVar3;
  short sVar4;
  char cVar5;
  undefined *puVar6;
  ushort uVar7;
  byte bVar8;
  bool bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  long *plVar20;
  undefined8 uVar21;
  int iVar22;
  long lVar23;
  long lVar24;
  undefined8 *puVar25;
  ulong *puVar26;
  undefined *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  byte *pbVar31;
  undefined *puVar32;
  byte bVar33;
  char *pcVar34;
  ushort *puVar35;
  undefined *puVar36;
  uint uVar37;
  uint uVar38;
  long lVar39;
  uint local_254;
  uint local_250;
  long local_238;
  long local_230;
  undefined8 local_228;
  ulong local_220;
  ulong local_218;
  char local_210;
  byte local_204 [4];
  undefined8 local_200;
  char *local_1f8;
  ulong local_1f0;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 local_180;
  ulong local_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined4 local_fc;
  undefined8 local_f8;
  char *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined4 local_70;
  
  puVar6 = PTR_DAT_04bb46b0;
  lVar23 = *(long *)PTR_DAT_04bb46b0;
  if (lVar23 == 0) {
    return;
  }
  local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
  if (((*(byte *)(lVar23 + 0x50d) ^ 0xff) & 6) != 0) {
    return;
  }
  lVar23 = (**(code **)(**(long **)(*(long *)(lVar23 + 0x10) + 0x188) + 0x30))();
  if (lVar23 == 0) {
    return;
  }
  lVar24 = *(long *)puVar6;
  if (lVar24 == 0) {
    return;
  }
  puVar25 = *(undefined8 **)(lVar24 + 0x10);
  if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
    lVar24 = (**(code **)(*(long *)*puVar25 + 0x38))();
    if (lVar24 == 0) {
      return;
    }
    lVar24 = lVar24 + 0x70;
  }
  else {
    if (puVar25 == (undefined8 *)0x0) {
      return;
    }
    if ((long *)puVar25[0x26] == (long *)0x0) {
      return;
    }
    lVar24 = (**(code **)(*(long *)puVar25[0x26] + 0x38))();
    if (lVar24 == 0) {
      return;
    }
  }
  lVar39 = *(long *)PTR_DAT_04bb32e8;
  if (lVar39 == 0) {
    return;
  }
  local_228 = *(undefined8 *)(lVar39 + 0x4060);
  plVar20 = (long *)(lVar23 + 0x5daba0);
  local_238 = 0;
  local_230 = 0;
  local_220 = CONCAT17(local_220._7_1_,0x1010000);
  local_218 = CONCAT17(local_218._7_1_,0x1010000);
  local_210 = 0;
  if ((char)(local_228 >> 0x20) < '\x05') {
    lVar15 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_228);
    local_200 = (undefined *)(lVar15 + -0x15180);
    local_228 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_200);
  }
  uVar17 = local_228 >> 0x30;
  local_228._0_6_ = CONCAT24(5,(undefined4)local_228);
  local_228 = CONCAT26((short)uVar17,(undefined6)local_228) & 0xff00ffffffffffff;
  plVar1 = (long *)(lVar24 + 0xe7200);
  lVar15 = *(long *)(lVar23 + 0x5dabc0);
  if (lVar15 == 0) {
    uVar10 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar10 = 0;
    }
    else {
      uVar10 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar23 + 0x5dabc0);
      if (lVar15 == 0) goto LAB_028ef228;
    }
    plVar16 = *(long **)(lVar15 + 0x20);
    if (plVar16 != (long *)0x0) {
      local_200 = (undefined *)*plVar20;
      local_1f8 = *(char **)(lVar23 + 0x5daba8);
      local_1f0 = 8;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
    }
  }
LAB_028ef228:
  puVar26 = (ulong *)(*(long *)(lVar23 + 0x5daba8) + *plVar20);
  if ((short)*puVar26 == 0) {
    local_220 = local_228;
    local_210 = '\x01';
    lVar15 = *(long *)(lVar23 + 0x5dabf8);
    if (lVar15 == 0) {
      uVar17 = 0;
    }
    else {
      if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
        uVar17 = 0;
      }
      else {
        uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
        lVar15 = *(long *)(lVar23 + 0x5dabf8);
        uVar17 = uVar17 & 0xffffffff;
        if (lVar15 == 0) goto LAB_028ef2f8;
      }
      plVar16 = *(long **)(lVar15 + 0x20);
      if (plVar16 != (long *)0x0) {
        local_200 = *(undefined **)(&DAT_005dabd8 + lVar23);
        local_1f8 = *(char **)(FUN_005dabe0 + lVar23);
        local_1f0 = 4;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
      }
    }
LAB_028ef2f8:
    lVar15 = *(long *)(&DAT_005dabd8 + lVar23);
    lVar28 = *(long *)(FUN_005dabe0 + lVar23);
    uVar7 = (ushort)local_228;
    bVar33 = local_228._2_1_;
    bVar8 = local_228._3_1_;
    uVar18 = nn::time::IsValidDate
                       ((uint)(ushort)local_228,(uint)local_228._2_1_,(uint)local_228._3_1_);
    if ((uVar18 & 1) != 0) {
      puVar35 = (ushort *)(lVar28 + lVar15);
      *puVar35 = uVar7;
      *(byte *)(puVar35 + 1) = bVar33;
      *(byte *)((long)puVar35 + 3) = bVar8;
    }
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar23 + 0x5dabf8) != 0)) &&
       (puVar25 = *(undefined8 **)(*(long *)(lVar23 + 0x5dabf8) + 0x18),
       puVar25 != (undefined8 *)0x0)) {
      (**(code **)*puVar25)();
    }
  }
  else {
    if ((*(long *)(lVar23 + 0x5dabc0) != 0) &&
       (plVar16 = *(long **)(*(long *)(lVar23 + 0x5dabc0) + 0x20), plVar16 != (long *)0x0)) {
      local_1f0 = 8;
      local_200 = (undefined *)*plVar20;
      local_1f8 = (char *)*(long *)(lVar23 + 0x5daba8);
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
      puVar26 = (ulong *)(*(long *)(lVar23 + 0x5daba8) + *plVar20);
    }
    local_220 = *puVar26;
    local_210 = '\0';
  }
  lVar15 = *(long *)(lVar24 + 0xe7220);
  if (lVar15 == 0) {
    local_250 = 0;
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      local_250 = 0;
    }
    else {
      local_250 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar24 + 0xe7220);
      if (lVar15 == 0) goto LAB_028ef3d0;
    }
    plVar16 = *(long **)(lVar15 + 0x20);
    if (plVar16 != (long *)0x0) {
      local_200 = (undefined *)*plVar1;
      local_1f8 = *(char **)(lVar24 + 0xe7208);
      local_1f0 = 8;
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
    }
  }
LAB_028ef3d0:
  puVar26 = (ulong *)(*(long *)(lVar24 + 0xe7208) + *plVar1);
  if ((short)*puVar26 == 0) {
    local_218 = local_228;
  }
  else {
    if ((*(long *)(lVar24 + 0xe7220) != 0) &&
       (plVar16 = *(long **)(*(long *)(lVar24 + 0xe7220) + 0x20), plVar16 != (long *)0x0)) {
      local_1f0 = 8;
      local_200 = (undefined *)*plVar1;
      local_1f8 = (char *)*(long *)(lVar24 + 0xe7208);
      (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
      puVar26 = (ulong *)(*(long *)(lVar24 + 0xe7208) + *plVar1);
    }
    local_218 = *puVar26;
  }
  iVar11 = FUN_00a82474((CalendarTime *)&local_228,&local_220);
  local_238 = (long)iVar11;
  iVar11 = FUN_00a82474((CalendarTime *)&local_228,&local_218);
  puVar32 = PTR_DAT_04bb2020;
  local_230 = (long)iVar11;
  *(ulong *)(lVar39 + 0x4070) = local_228;
  local_200 = puVar32 + 0x10;
  local_1f8 = "SeqShareHouseOngoing";
  iVar11 = FUN_02758850(&local_200);
  if ((iVar11 != 0) && (lVar39 = *(long *)puVar6, lVar39 != 0)) {
    local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
    if ((((*(byte *)(lVar39 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar39 = (**(code **)(**(long **)(*(long *)(lVar39 + 0x10) + 0x188) + 0x30))(), lVar39 != 0)
       ) {
      lVar15 = *(long *)(lVar39 + 0x36658);
      if (lVar15 == 0) {
        uVar17 = 0;
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar39 + 0x36658);
          uVar17 = uVar17 & 0xffffffff;
          if (lVar15 == 0) goto LAB_028ef544;
        }
        plVar16 = *(long **)(lVar15 + 0x20);
        if (plVar16 != (long *)0x0) {
          local_200 = *(undefined **)(lVar39 + 0x36638);
          local_1f8 = *(char **)(lVar39 + 0x36640);
          local_1f0 = 0x490c;
          (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          lVar15 = *(long *)(lVar39 + 0x36658);
        }
      }
LAB_028ef544:
      puVar27 = *(undefined **)(lVar39 + 0x36638);
      pcVar34 = *(char **)(lVar39 + 0x36640);
      puVar36 = puVar27 + (long)pcVar34;
      sVar4 = *(short *)(puVar36 + 0x48b0);
      if ((lVar15 != 0) && (plVar16 = *(long **)(lVar15 + 0x20), plVar16 != (long *)0x0)) {
        local_1f0 = 0x490c;
        local_200 = puVar27;
        local_1f8 = pcVar34;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
        puVar27 = *(undefined **)(lVar39 + 0x36638);
        pcVar34 = *(char **)(lVar39 + 0x36640);
        puVar36 = puVar27 + (long)pcVar34;
      }
      if (sVar4 == *(short *)(puVar36 + 0x48b2)) {
        if ((*(long *)(lVar39 + 0x36658) != 0) &&
           (plVar16 = *(long **)(*(long *)(lVar39 + 0x36658) + 0x20), plVar16 != (long *)0x0)) {
          local_1f0 = 0x490c;
          local_200 = puVar27;
          local_1f8 = pcVar34;
          (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          puVar36 = (undefined *)(*(long *)(lVar39 + 0x36640) + *(long *)(lVar39 + 0x36638));
        }
        if (*(short *)(puVar36 + 0x48b0) != -1) {
          lVar15 = *(long *)(lVar39 + 0x36620);
          if (lVar15 == 0) {
            uVar18 = 0;
          }
          else {
            if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              lVar15 = *(long *)(lVar39 + 0x36620);
              uVar18 = uVar18 & 0xffffffff;
              if (lVar15 == 0) goto LAB_028ef63c;
            }
            plVar16 = *(long **)(lVar15 + 0x20);
            if (plVar16 != (long *)0x0) {
              local_200 = *(undefined **)(lVar39 + 0x36600);
              local_1f8 = *(char **)(lVar39 + 0x36608);
              local_1f0 = 0x89a8;
              (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
            }
          }
LAB_028ef63c:
          __s = (void *)(*(long *)(lVar39 + 0x36608) + *(long *)(lVar39 + 0x36600));
          memset(__s,0,0x89a8);
          FUN_028f50f0((long)__s + 0xc);
          *(undefined8 *)((long)__s + 0x48e4) = 0;
          *(undefined4 *)((long)__s + 0x48b4) = 0xffffffff;
          *(undefined2 *)((long)__s + 0x48b8) = 0;
          *(undefined2 *)((long)__s + 0x48f4) = 0;
          *(undefined8 *)((long)__s + 0x48eb) = 0;
          *(undefined4 *)((long)__s + 0x48f6) = 0x101;
          *(undefined1 *)((long)__s + 0x48fa) = 0;
          *(undefined4 *)((long)__s + 0x48fc) = 0;
          *(undefined8 *)((long)__s + 0x48e4) = 0;
          *(undefined8 *)((long)__s + 0x48ea) = 0;
          *(undefined2 *)((long)__s + 0x4908) = 0xffff;
          *(undefined8 *)((long)__s + 0x48bc) = 0;
          *(undefined8 *)((long)__s + 0x48c4) = 0;
          *(undefined8 *)((long)__s + 0x48cc) = 0;
          *(undefined8 *)((long)__s + 0x48d4) = 0;
          *(undefined8 *)((long)__s + 0x48dc) = 0;
          *(undefined8 *)((long)__s + 0x4900) = 0;
          *(undefined4 *)((long)__s + 0x490c) = 0;
          *(undefined2 *)((long)__s + 0x4910) = 0;
          memset((void *)((long)__s + 0x4914),0,0x4014);
          FUN_028f8bb0((void *)((long)__s + 0x4914));
          FUN_028f8bb0((long)__s + 0x5e70);
          FUN_028f8bb0((long)__s + 0x73cc);
          *(undefined8 *)((long)__s + 0x8928) = 0xffffffffffffffff;
          FUN_028ee6a0((long)__s + 0x8930);
          *(undefined8 *)((long)__s + 0x899c) = 5;
          *(undefined1 *)((long)__s + 0x89a4) = 0;
          if ((((uVar18 & 1) != 0) && (*(long *)(lVar39 + 0x36620) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x36620) + 0x18),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
        }
      }
      if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x36658) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x36658) + 0x18),
         puVar25 != (undefined8 *)0x0)) {
        (**(code **)*puVar25)();
      }
    }
  }
  FUN_02259310(&local_238);
  if (local_210 != '\0') {
    local_1f0 = local_1f0 & 0xffffffffffffff00;
    local_200 = (undefined *)0x0;
    if (*(long *)PTR_DAT_04bb2720 != 0) {
      lVar39 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
      local_200 = (undefined *)0x0;
      if (lVar39 != 0) {
        local_200 = *(undefined **)(lVar39 + 0xd0);
      }
    }
    local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
    local_1f8 = *(char **)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
    FUN_0134e3d4(&local_f8,&local_200);
  }
  FUN_0252d11c(local_204);
  FUN_036d49cc(*(undefined8 *)PTR_DAT_04bc3990,&local_238);
  lVar39 = *(long *)puVar6;
  if (lVar39 == 0) {
    lVar39 = 0;
  }
  else {
    local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
    if (((*(byte *)(lVar39 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar15 = (**(code **)(**(long **)(*(long *)(lVar39 + 0x10) + 0x188) + 0x30))();
    }
    else {
      lVar15 = 0;
    }
    lVar39 = 0;
    if (lVar15 != 0) {
      lVar39 = lVar15 + 0x5d3cb0;
    }
  }
  lVar15 = *(long *)(lVar39 + 0x8b0);
  if (lVar15 == 0) {
    FUN_027576a0(*(long *)(lVar39 + 0x898) + *(long *)(lVar39 + 0x890),&local_238);
  }
  else {
    if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
      uVar17 = 0;
LAB_028ef8c4:
      plVar16 = *(long **)(lVar15 + 0x20);
      if (plVar16 != (long *)0x0) {
        local_200 = *(undefined **)(lVar39 + 0x890);
        local_1f8 = *(char **)(lVar39 + 0x898);
        local_1f0 = 0x1000;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
      }
    }
    else {
      uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
      lVar15 = *(long *)(lVar39 + 0x8b0);
      uVar17 = uVar17 & 0xffffffff;
      if (lVar15 != 0) goto LAB_028ef8c4;
    }
    FUN_027576a0(*(long *)(lVar39 + 0x898) + *(long *)(lVar39 + 0x890),&local_238);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x8b0) != 0)) &&
       (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x8b0) + 0x18), puVar25 != (undefined8 *)0x0))
    {
      (**(code **)*puVar25)();
    }
  }
  if (local_204[0] < 8) {
    local_1f8 = "SeqCeilingEventReady";
    local_200 = puVar32 + 0x10;
    iVar11 = FUN_02758850(&local_200);
    if (iVar11 != 0) {
      local_1f8 = "UnlockInterior_CeilingFurniture";
      local_200 = puVar32 + 0x10;
      iVar11 = FUN_0274bce0(local_204,&local_200);
      if (iVar11 != 0) {
        local_200 = puVar32 + 0x10;
        local_1f8 = "SeqCeilingEventReady";
        FUN_02758bb8(&local_200,0);
      }
    }
    if (local_238 != 0) {
      local_200 = puVar32 + 0x10;
      local_1f8 = "WHEREAREN_UnlockMessageBottleAfter";
      local_f0 = "Unlock_MessageBottle";
      local_f8 = local_200;
      uVar12 = FUN_02757a80(local_204,&local_f8);
      FUN_0274bfe8(local_204,&local_200,uVar12);
    }
    local_200 = puVar32 + 0x10;
    local_1f8 = "WHEREAREN_SeqAvailableAmiiboDone";
    local_f0 = "SeqAvailableAmiiboDone";
    local_f8 = local_200;
    uVar12 = FUN_02757a80(local_204,&local_f8);
    FUN_0274bfe8(local_204,&local_200,uVar12);
  }
  if ((local_238 != 0) || (local_210 != '\0')) {
    uVar13 = nn::os::GetSystemTick();
    uVar13 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 1;
    uVar14 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 2;
    uVar37 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
    local_200 = puVar32 + 0x10;
    local_1f8 = "PokiRate";
    iVar11 = FUN_02758850(&local_200);
    uVar38 = (uVar37 ^ uVar37 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar13 = uVar13 ^ uVar13 << 0xb;
      uVar3 = uVar13 >> 8 ^ uVar38 >> 0x13 ^ uVar13 ^ uVar38;
      uVar13 = (uint)((ulong)uVar3 * 100 >> 0x20);
      if (uVar13 < 7) {
        iVar22 = 0x1e;
      }
      else if (uVar13 < 0xd) {
        iVar22 = 0x1f;
      }
      else if (uVar13 < 0x13) {
        iVar22 = 0x20;
      }
      else {
        iVar22 = 0x21;
        if ((((((((0x18 < uVar13) && (iVar22 = 0x22, 0x1e < uVar13)) &&
                (iVar22 = 0x23, 0x24 < uVar13)) &&
               ((iVar22 = 0x24, 0x29 < uVar13 && (iVar22 = 0x25, 0x2e < uVar13)))) &&
              (iVar22 = 0x26, 0x33 < uVar13)) &&
             (((iVar22 = 0x27, 0x38 < uVar13 && (iVar22 = 0x28, 0x3d < uVar13)) &&
              ((iVar22 = 0x29, 0x42 < uVar13 &&
               (((iVar22 = 0x2a, 0x47 < uVar13 && (iVar22 = 0x2b, 0x4c < uVar13)) &&
                (iVar22 = 0x2c, 0x51 < uVar13)))))))) &&
            ((iVar22 = 0x2d, 0x56 < uVar13 && (iVar22 = 0x2e, 0x59 < uVar13)))) &&
           (iVar22 = 0x2f, 0x5c < uVar13)) {
          if (uVar13 < 0x60) {
            iVar22 = 0x30;
          }
          else {
            iVar22 = 0x31;
            if (0x62 < uVar13) {
              iVar22 = 0x32;
            }
          }
        }
      }
      uVar13 = uVar14;
      uVar14 = uVar37;
      uVar37 = uVar38;
      uVar38 = uVar3;
    } while (iVar11 == iVar22);
    local_200 = puVar32 + 0x10;
    local_1f8 = "PokiRate";
    FUN_02758bb8(&local_200);
    if ((local_238 != 0) || (local_210 != '\0')) {
      lVar15 = *(long *)(lVar39 + 0x1758);
      if (lVar15 == 0) {
        FUN_028faeb0(*(long *)(lVar39 + 0x1740) + *(long *)(lVar39 + 0x1738),&local_238);
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar17 = 0;
LAB_028efc38:
          plVar16 = *(long **)(lVar15 + 0x20);
          if (plVar16 != (long *)0x0) {
            local_200 = *(undefined **)(lVar39 + 0x1738);
            local_1f8 = *(char **)(lVar39 + 0x1740);
            local_1f0 = 0x310;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          }
        }
        else {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar39 + 0x1758);
          uVar17 = uVar17 & 0xffffffff;
          if (lVar15 != 0) goto LAB_028efc38;
        }
        FUN_028faeb0(*(long *)(lVar39 + 0x1740) + *(long *)(lVar39 + 0x1738),&local_238);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x1758) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x1758) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
      lVar15 = *(long *)(lVar39 + 0x8e8);
      if (lVar15 == 0) {
        FUN_028fff20(*(long *)(lVar39 + 0x8d0) + *(long *)(lVar39 + 0x8c8),&local_238);
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar17 = 0;
LAB_028efce0:
          plVar16 = *(long **)(lVar15 + 0x20);
          if (plVar16 != (long *)0x0) {
            local_200 = *(undefined **)(lVar39 + 0x8c8);
            local_1f8 = *(char **)(lVar39 + 0x8d0);
            local_1f0 = 0x300;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          }
        }
        else {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar39 + 0x8e8);
          uVar17 = uVar17 & 0xffffffff;
          if (lVar15 != 0) goto LAB_028efce0;
        }
        FUN_028fff20(*(long *)(lVar39 + 0x8d0) + *(long *)(lVar39 + 0x8c8),&local_238);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x8e8) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x8e8) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
      lVar15 = *(long *)(lVar39 + 0x3470);
      if (lVar15 == 0) {
        FUN_028f92e8(*(long *)(lVar39 + 0x3458) + *(long *)(lVar39 + 0x3450),&local_238);
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar17 = 0;
LAB_028efd88:
          plVar16 = *(long **)(lVar15 + 0x20);
          if (plVar16 != (long *)0x0) {
            local_200 = *(undefined **)(lVar39 + 0x3450);
            local_1f8 = *(char **)(lVar39 + 0x3458);
            local_1f0 = 0x100;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          }
        }
        else {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar39 + 0x3470);
          uVar17 = uVar17 & 0xffffffff;
          if (lVar15 != 0) goto LAB_028efd88;
        }
        FUN_028f92e8(*(long *)(lVar39 + 0x3458) + *(long *)(lVar39 + 0x3450),&local_238);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x3470) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x3470) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
      local_200 = puVar32 + 0x10;
      local_1f8 = "MoonKKFesUnlockRestDays";
      iVar11 = FUN_02758850(&local_200);
      if (0 < iVar11) {
        iVar11 = iVar11 - (uint)local_238;
        if (2 < iVar11 - 1U) {
          iVar11 = 0;
        }
        FUN_02758bb8(&local_200,iVar11);
      }
      uVar13 = -(uint)local_238;
      if (-1 < (int)(uint)local_238) {
        uVar13 = (uint)local_238;
      }
      if (1 < uVar13) {
        FUN_03781770();
      }
    }
  }
  FUN_03754d90(0,0,0);
  FUN_02687700();
  puVar36 = PTR_DAT_04bb27f8;
  FUN_036e52a0(*(undefined8 *)PTR_DAT_04bb27f8);
  FUN_036e8070(*(undefined8 *)puVar36,0);
  puVar36 = PTR_DAT_04bb4978;
  if ((local_238 == 0) && (local_210 == '\0')) {
    FUN_022135d0(&DAT_0545a400);
    FUN_02217980(&DAT_0545a400);
  }
  else {
    FUN_02211080(&DAT_0545a400,1);
    local_200 = puVar32 + 0x10;
    local_1f8 = "NewBuildCount";
    iVar11 = FUN_02758850(&local_200);
    if (iVar11 == 0) {
      local_178 = local_178 & 0xffffffff00000000;
      local_200 = (undefined *)0x0;
      local_188 = 0;
      local_180 = 0;
      local_70 = 0;
      local_f8 = (undefined *)0x0;
      local_198 = 0;
      local_190 = 0;
      local_1a8 = 0;
      local_1a0 = 0;
      local_1b8 = 0;
      local_1b0 = 0;
      local_1c8 = 0;
      local_1c0 = 0;
      local_1d8 = 0;
      local_1d0 = 0;
      local_1e8 = 0;
      local_1e0 = 0;
      local_1f8 = (char *)0x0;
      local_1f0 = 0;
      local_80 = 0;
      uStack_78 = 0;
      local_90 = 0;
      uStack_88 = 0;
      local_a0 = 0;
      uStack_98 = 0;
      local_b0 = 0;
      uStack_a8 = 0;
      local_c0 = 0;
      uStack_b8 = 0;
      local_d0 = 0;
      uStack_c8 = 0;
      local_e0 = 0;
      uStack_d8 = 0;
      local_f0 = (char *)0x0;
      uStack_e8 = 0;
      FUN_0376c3f0(&local_200,&local_f8,0,0);
      FUN_02210750(&DAT_0545a400,&local_f8);
      local_fc = 2;
      FUN_03777c00(&DAT_0545a42d,&local_fc,0);
    }
    else {
      FUN_02212830(&DAT_0545a400);
      lVar39 = *(long *)puVar6;
      if (lVar39 == 0) {
        lVar39 = 0;
      }
      else {
        local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
        if (((*(byte *)(lVar39 + 0x50d) ^ 0xff) & 6) == 0) {
          lVar15 = (**(code **)(**(long **)(*(long *)(lVar39 + 0x10) + 0x188) + 0x30))();
        }
        else {
          lVar15 = 0;
        }
        lVar39 = 0;
        if (lVar15 != 0) {
          lVar39 = lVar15 + 0xa8;
        }
      }
      lVar15 = *(long *)(lVar39 + 0x450);
      if (lVar15 == 0) {
        uVar17 = 0;
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar17 = 0;
        }
        else {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar39 + 0x450);
          uVar17 = uVar17 & 0xffffffff;
          if (lVar15 == 0) goto LAB_028f0034;
        }
        plVar16 = *(long **)(lVar15 + 0x20);
        if (plVar16 != (long *)0x0) {
          local_200 = *(undefined **)(lVar39 + 0x430);
          local_1f8 = *(char **)(lVar39 + 0x438);
          local_1f0 = 0x297e8;
          (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
        }
      }
LAB_028f0034:
      local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
      lVar15 = *(long *)(lVar39 + 0x438) + *(long *)(lVar39 + 0x430);
      FUN_028e7290(lVar15,0,&local_200);
      local_200._0_4_ = 1;
      FUN_028e7290(lVar15,0,&local_200);
      local_200._0_4_ = 2;
      FUN_028e7290(lVar15,0,&local_200);
      local_200._0_4_ = 3;
      FUN_028e7290(lVar15,0,&local_200);
      local_200._0_4_ = 4;
      FUN_028e7290(lVar15,0,&local_200);
      local_200._0_4_ = 5;
      FUN_028e7290(lVar15,0,&local_200);
      local_200 = (undefined *)CONCAT44(local_200._4_4_,6);
      FUN_028e7290(lVar15,0,&local_200);
      lVar15 = *(long *)(lVar39 + 0x450);
      if ((((uVar17 & 1) != 0) && (lVar15 != 0)) &&
         (*(undefined8 **)(lVar15 + 0x18) != (undefined8 *)0x0)) {
        (**(code **)**(undefined8 **)(lVar15 + 0x18))();
        lVar15 = *(long *)(lVar39 + 0x450);
      }
      local_f8 = (undefined *)CONCAT26(local_f8._6_2_,0x80023080023);
      if (lVar15 == 0) {
        FUN_028e7660(*(long *)(lVar39 + 0x438) + *(long *)(lVar39 + 0x430),&local_238,&local_f8);
      }
      else {
        if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
          uVar17 = 0;
LAB_028f0160:
          plVar16 = *(long **)(lVar15 + 0x20);
          if (plVar16 != (long *)0x0) {
            local_200 = *(undefined **)(lVar39 + 0x430);
            local_1f8 = *(char **)(lVar39 + 0x438);
            local_1f0 = 0x297e8;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          }
        }
        else {
          uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
          lVar15 = *(long *)(lVar39 + 0x450);
          uVar17 = uVar17 & 0xffffffff;
          if (lVar15 != 0) goto LAB_028f0160;
        }
        FUN_028e7660(*(long *)(lVar39 + 0x438) + *(long *)(lVar39 + 0x430),&local_238,&local_f8);
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x450) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x450) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
      uVar17 = (ulong)local_f8 & 0xff;
      if (((uVar17 < 0x23) && (local_f8._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar17])) &&
         (((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(local_f8._1_1_ & 0x1f) & 1) != 0 &&
          (((uVar17 = (ulong)local_f8 >> 0x18 & 0xff, uVar17 < 0x23 &&
            (local_f8._4_1_ <= (byte)PTR_DAT_04bc27f0[uVar17])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar17 * 4) >> (ulong)(local_f8._4_1_ & 0x1f) & 1) != 0)))
          ))) {
        DAT_0545a400 = (undefined1)local_f8;
        DAT_0545a401 = local_f8._1_1_;
        DAT_0545a5e4 = DAT_0545a5e4 | 2;
        DAT_0545a402 = FUN_020fd7d8(&local_f8);
        _DAT_0545a403 = local_f8._3_2_;
        DAT_0545a405 = FUN_020fd7d8((ulong)&local_f8 | 3);
        uVar21 = 1;
      }
      else {
        uVar21 = 0;
      }
      FUN_022119a0(&DAT_0545a400,uVar21);
    }
    FUN_02217980(&DAT_0545a400);
    if ((0 < local_238) || (local_210 != '\0')) {
      FUN_0221aa44(&DAT_0545b240);
      _DAT_0545c40a = 0;
    }
    DAT_0545c40c = 0;
    _DAT_0545c450 = 0x200000000;
    _DAT_0545c458 = 0xffffffffffffffff;
    _DAT_0545c460 = 0xffffffffffffffff;
    local_200 = puVar32 + 0x10;
    local_1f8 = "Unlock_Faclility_School";
    iVar11 = FUN_02758850(&local_200);
    if (iVar11 != 0) {
      local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
      lVar39 = *(long *)puVar6;
      if (lVar39 != 0) {
        local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
        if ((((*(byte *)(lVar39 + 0x50d) ^ 0xff) & 6) == 0) &&
           (lVar39 = (**(code **)(**(long **)(*(long *)(lVar39 + 0x10) + 0x188) + 0x30))(),
           lVar39 != 0)) {
          switch((ulong)local_f8 & 0xffffffff) {
          case 0:
            lVar39 = lVar39 + 0x390a0;
            break;
          case 1:
            lVar39 = lVar39 + 0x3a488;
            break;
          case 2:
            lVar39 = lVar39 + 0x3b870;
            break;
          case 3:
            lVar39 = lVar39 + 0x3cc58;
            break;
          case 4:
            lVar39 = lVar39 + 0x3e040;
            break;
          default:
            goto switchD_028f036c_default;
          }
          lVar15 = *(long *)(lVar39 + 0x98);
          if (lVar15 == 0) {
            uVar17 = 0;
          }
          else {
            if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
              uVar17 = 0;
            }
            else {
              uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              lVar15 = *(long *)(lVar39 + 0x98);
              uVar17 = uVar17 & 0xffffffff;
              if (lVar15 == 0) goto LAB_028f0408;
            }
            plVar16 = *(long **)(lVar15 + 0x20);
            if (plVar16 != (long *)0x0) {
              local_200 = *(undefined **)(lVar39 + 0x78);
              local_1f8 = *(char **)(lVar39 + 0x80);
              local_1f0 = 0x155c;
              (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
            }
          }
LAB_028f0408:
          local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
          lVar15 = *(long *)(lVar39 + 0x80) + *(long *)(lVar39 + 0x78);
          *(ushort *)(lVar15 + 0x153c) = *(ushort *)(lVar15 + 0x153c) | 1;
          if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x98) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x98) + 0x18),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
        }
      }
switchD_028f036c_default:
      lVar39 = *(long *)puVar6;
      if (lVar39 != 0) {
        local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
        if ((((*(byte *)(lVar39 + 0x50d) ^ 0xff) & 6) == 0) &&
           (lVar39 = (**(code **)(**(long **)(*(long *)(lVar39 + 0x10) + 0x188) + 0x30))(),
           lVar39 != 0)) {
          if ((*(long **)(lVar39 + 0x36620) == (long *)0x0) ||
             (puVar25 = (undefined8 *)**(long **)(lVar39 + 0x36620), puVar25 == (undefined8 *)0x0))
          {
            uVar17 = 0;
          }
          else {
            uVar17 = (**(code **)*puVar25)();
            uVar17 = uVar17 & 0xffffffff;
          }
          iVar11 = (int)*(char *)(*(long *)(lVar39 + 0x36608) + *(long *)(lVar39 + 0x36600));
          local_200 = (undefined *)CONCAT44(local_200._4_4_,iVar11);
          if (iVar11 == 2) {
            if (*(long **)(lVar39 + 0x37ca8) == (long *)0x0) {
              uVar18 = 0;
            }
            else {
              puVar25 = (undefined8 *)**(long **)(lVar39 + 0x37ca8);
              uVar18 = 0;
              if (puVar25 != (undefined8 *)0x0) {
                uVar18 = (**(code **)*puVar25)();
              }
            }
            uVar13 = (uint)*(ushort *)
                            (*(long *)(lVar39 + 0x37c90) + *(long *)(lVar39 + 0x37c88) + 0x408c);
            local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar13);
            if ((((uVar18 & 1) != 0) && (*(long *)(lVar39 + 0x37ca8) != 0)) &&
               (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x37ca8) + 8),
               puVar25 != (undefined8 *)0x0)) {
              (**(code **)*puVar25)();
            }
            if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x36620) != 0)) &&
               (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x36620) + 8),
               puVar25 != (undefined8 *)0x0)) {
              (**(code **)*puVar25)();
            }
            if (uVar13 == 0) {
              lVar15 = *(long *)(lVar39 + 0x37d50);
              if (lVar15 == 0) {
                uVar17 = 0;
              }
              else {
                if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
                  uVar17 = 0;
                }
                else {
                  uVar17 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
                  lVar15 = *(long *)(lVar39 + 0x37d50);
                  uVar17 = uVar17 & 0xffffffff;
                  if (lVar15 == 0) goto LAB_028f05e0;
                }
                plVar16 = *(long **)(lVar15 + 0x20);
                if (plVar16 != (long *)0x0) {
                  local_200 = *(undefined **)(lVar39 + 0x37d30);
                  local_1f8 = *(char **)(lVar39 + 0x37d38);
                  local_1f0 = 0x155c;
                  (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
                }
              }
LAB_028f05e0:
              local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
              lVar15 = *(long *)(lVar39 + 0x37d38) + *(long *)(lVar39 + 0x37d30);
              *(ushort *)(lVar15 + 0x153c) = *(ushort *)(lVar15 + 0x153c) | 1;
              if (((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x37d50) != 0)) {
                puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x37d50) + 0x18);
                goto joined_r0x028f0510;
              }
            }
          }
          else if (((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x36620) != 0)) {
            puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x36620) + 8);
joined_r0x028f0510:
            if (puVar25 != (undefined8 *)0x0) {
              (**(code **)*puVar25)();
            }
          }
        }
      }
    }
    local_110 = 0;
    uStack_108 = 0;
    local_120 = 0;
    uStack_118 = 0;
    *(undefined2 *)(*(long *)puVar36 + 0xb38) = 0;
    puVar36 = PTR_DAT_04bb46f0;
    local_130 = 0;
    uStack_128 = 0;
    local_140 = 0;
    uStack_138 = 0;
    local_150 = 0;
    uStack_148 = 0;
    local_160 = 0;
    uStack_158 = 0;
    local_170 = 0;
    uStack_168 = 0;
    local_180 = 0;
    local_178 = 0;
    local_190 = 0;
    local_188 = 0;
    local_1a0 = 0;
    local_198 = 0;
    local_1b0 = 0;
    local_1a8 = 0;
    local_1c0 = 0;
    local_1b8 = 0;
    local_1d0 = 0;
    local_1c8 = 0;
    local_1e0 = 0;
    local_1d8 = 0;
    local_1f0 = 0;
    local_1e8 = 0;
    local_200 = (undefined *)0x0;
    local_1f8 = (char *)0x0;
    local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
    FUN_0262a9b0(*(long *)PTR_DAT_04bb46f0,&local_200,&local_f8,*(long *)PTR_DAT_04bb46f0 + 0xe99e0)
    ;
    local_f8._0_4_ = 1;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8._0_4_ = 2;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8._0_4_ = 3;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8._0_4_ = 4;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8._0_4_ = 5;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8._0_4_ = 6;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8._0_4_ = 7;
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    local_f8 = (undefined *)CONCAT44(local_f8._4_4_,8);
    FUN_0262a9b0(*(long *)puVar36,&local_200,&local_f8,*(long *)puVar36 + 0xe99e0);
    uVar13 = 0;
    uVar17 = 0;
    do {
      uVar37 = (uint)uVar17 & 6;
      uVar14 = (uint)uVar17 + 2;
      uVar13 = (local_204[(uVar17 >> 3) + 4] >> (ulong)(uVar37 | 1) & 1) +
               (local_204[(uVar17 >> 3) + 4] >> (ulong)uVar37 & 1) + uVar13;
      uVar17 = (ulong)uVar14;
    } while (uVar14 != 0x800);
    if (uVar13 != 0) {
      uVar14 = nn::os::GetSystemTick();
      uVar37 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
      uVar14 = uVar37 ^ uVar37 * 0x800;
      uVar37 = (uVar37 ^ uVar37 >> 0x1e) * 0x6c078965 + 2;
      uVar37 = (uVar37 ^ uVar37 >> 0x1e) * 0x6c078965 + 3;
      uVar37 = (uVar37 ^ uVar37 >> 0x1e) * 0x6c078965 + 4;
      uVar13 = (uint)((ulong)(uVar14 >> 8 ^ uVar37 >> 0x13 ^ uVar14 ^ uVar37) * (ulong)uVar13 >>
                     0x20);
      if (uVar13 < 0x7fffffff) {
        uVar17 = 0;
        uVar14 = 0;
        do {
          if ((local_204[(uVar17 >> 3) + 4] >> (ulong)((uint)uVar17 & 7) & 1) != 0) {
            if (uVar14 == uVar13) goto LAB_028f0874;
            uVar14 = uVar14 + 1;
          }
          uVar37 = (uint)uVar17 + 1;
          uVar17 = (ulong)uVar37;
        } while (uVar37 != 0x800);
        uVar17 = 0xffffffff;
      }
      else {
        uVar17 = 0xffffffff;
      }
LAB_028f0874:
      local_f8 = puVar32 + 0x10;
      local_f0 = "RestaurantTraineeRecipeIndex";
      FUN_02758bb8(&local_f8,uVar17);
    }
  }
  lVar39 = 0x4cca8;
  lVar15 = 500;
  do {
    lVar28 = *(long *)puVar6;
    if (lVar28 != 0) {
      local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
      if ((((*(byte *)(lVar28 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar28 = (**(code **)(**(long **)(*(long *)(lVar28 + 0x10) + 0x188) + 0x30))(),
         lVar28 != 0)) {
        lVar29 = *(long *)(lVar28 + lVar39);
        if (lVar29 == 0) {
          FUN_027569a0(*(long *)(lVar28 + lVar39 + -0x18) + *(long *)(lVar28 + lVar39 + -0x20),
                       &local_238);
        }
        else {
          lVar30 = lVar28 + lVar39;
          if (*(undefined8 **)(lVar29 + 0x10) == (undefined8 *)0x0) {
            uVar17 = 0;
            plVar16 = *(long **)(lVar29 + 0x20);
joined_r0x028f09a8:
            if (plVar16 != (long *)0x0) {
              local_200 = *(undefined **)(lVar30 + -0x20);
              local_1f8 = *(char **)(lVar30 + -0x18);
              local_1f0 = 0x10;
              (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
            }
          }
          else {
            uVar17 = (**(code **)**(undefined8 **)(lVar29 + 0x10))();
            uVar17 = uVar17 & 0xffffffff;
            if (*(long *)(lVar28 + lVar39) != 0) {
              plVar16 = *(long **)(*(long *)(lVar28 + lVar39) + 0x20);
              goto joined_r0x028f09a8;
            }
          }
          FUN_027569a0(*(long *)(lVar30 + -0x18) + *(long *)(lVar30 + -0x20),&local_238);
          if ((((uVar17 & 1) != 0) && (*(long *)(lVar28 + lVar39) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar28 + lVar39) + 0x18),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
        }
      }
    }
    lVar39 = lVar39 + 0x2d48;
    lVar15 = lVar15 + -1;
  } while (lVar15 != 0);
  if (local_238 != 0) {
    FUN_03701d30(*(undefined8 *)PTR_DAT_04bb4978);
  }
  local_200 = puVar32 + 0x10;
  local_1f8 = "IsFacilityEditStartDemo";
  FUN_02758bb8(&local_200,0);
  lVar39 = *(long *)PTR_DAT_04bb4e28;
  if (lVar39 != 0) {
    *(undefined4 *)(&DAT_00001230 + lVar39) = 0;
    FUN_037203a0(lVar39);
    *(undefined8 *)(lVar39 + 0x1160) = 0x244db4da00000003;
    *(undefined2 *)(lVar39 + 0x1168) = 0xffff;
    *(undefined4 *)(lVar39 + 0x116c) = 5;
  }
  FUN_016916d0(&local_238);
  lVar39 = *(long *)puVar6;
  if (lVar39 != 0) {
    puVar25 = *(undefined8 **)(lVar39 + 0x10);
    if ((*(byte *)(lVar39 + 0x453) & 1) == 0) {
      lVar39 = (**(code **)(*(long *)*puVar25 + 0x38))();
      if (lVar39 != 0) {
        lVar39 = lVar39 + 0x70;
        goto LAB_028f0a78;
      }
    }
    else if (((puVar25 != (undefined8 *)0x0) && ((long *)puVar25[0x26] != (long *)0x0)) &&
            (lVar39 = (**(code **)(*(long *)puVar25[0x26] + 0x38))(), lVar39 != 0)) {
LAB_028f0a78:
      FUN_0252d29c();
      if ((*(long **)(lVar39 + 0x28) == (long *)0x0) ||
         (puVar25 = (undefined8 *)**(long **)(lVar39 + 0x28), puVar25 == (undefined8 *)0x0)) {
        local_254 = 0;
      }
      else {
        local_254 = (**(code **)*puVar25)();
      }
      uVar17 = 0;
      plVar16 = (long *)(*(long *)(lVar39 + 0x10) + *(long *)(lVar39 + 8) + 0x1e33b8);
      puVar36 = PTR_DAT_04bb2020 + 0x10;
      do {
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(int)uVar17);
        if (((plVar16[-1] != 0 || *plVar16 != 0) && (*(long *)puVar6 != 0)) &&
           (lVar15 = FUN_026eec4c(*(long *)puVar6,uVar17 & 0xffffffff), lVar15 != 0)) {
          if (local_230 != 0) {
            local_1f8 = "PlayerStungByBee";
            local_200 = puVar36;
            FUN_0274d104(&local_f8,&local_200,0);
          }
          lVar28 = lVar15 + 0x194b0;
          lVar29 = lVar28;
          if (*(long *)(lVar15 + 0x194b8) == 0) {
            lVar29 = *(long *)(*(long *)puVar6 + 0x20);
          }
          lVar30 = *(long *)(lVar29 + 0x2cd38);
          if (lVar30 == 0) {
            uVar18 = 0;
          }
          else {
            if (*(undefined8 **)(lVar30 + 0x10) == (undefined8 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
              lVar30 = *(long *)(lVar29 + 0x2cd38);
              uVar18 = uVar18 & 0xffffffff;
              if (lVar30 == 0) goto LAB_028f0bc0;
            }
            plVar19 = *(long **)(lVar30 + 0x20);
            if (plVar19 != (long *)0x0) {
              local_200 = *(undefined **)(lVar29 + 0x2cd18);
              local_1f8 = *(char **)(lVar29 + 0x2cd20);
              local_1f0 = 0x1c;
              (**(code **)(*plVar19 + 0x20))(plVar19,&local_200);
            }
          }
LAB_028f0bc0:
          if (local_230 != 0) {
            lVar30 = *(long *)(lVar29 + 0x2cd20) + *(long *)(lVar29 + 0x2cd18);
            *(undefined1 *)(lVar30 + 0x18) = 0;
            *(undefined2 *)(lVar30 + 1) = 0;
          }
          if ((((uVar18 & 1) != 0) && (*(long *)(lVar29 + 0x2cd38) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar29 + 0x2cd38) + 0x18),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
          if (*(long *)(lVar15 + 0x194b8) == 0) {
            lVar28 = *(long *)(*(long *)puVar6 + 0x20);
          }
          lVar15 = *(long *)(lVar28 + 0x8528);
          if (lVar15 == 0) {
            uVar18 = 0;
          }
          else {
            if (*(undefined8 **)(lVar15 + 0x10) == (undefined8 *)0x0) {
              uVar18 = 0;
            }
            else {
              uVar18 = (**(code **)**(undefined8 **)(lVar15 + 0x10))();
              lVar15 = *(long *)(lVar28 + 0x8528);
              uVar18 = uVar18 & 0xffffffff;
              if (lVar15 == 0) goto LAB_028f0c70;
            }
            plVar19 = *(long **)(lVar15 + 0x20);
            if (plVar19 != (long *)0x0) {
              local_200 = *(undefined **)(lVar28 + 0x8508);
              local_1f8 = *(char **)(lVar28 + 0x8510);
              local_1f0 = 0xeab4;
              (**(code **)(*plVar19 + 0x20))(plVar19,&local_200);
            }
          }
LAB_028f0c70:
          puVar32 = local_f8;
          if (0 < local_230) {
            lVar15 = *(long *)(lVar28 + 0x8510) + *(long *)(lVar28 + 0x8508);
            FUN_0282e488(lVar15,(ulong)local_f8 & 0xffffffff);
            FUN_0282e740(lVar15,(ulong)puVar32 & 0xffffffff);
            if (0 < local_230) {
              FUN_0282e9f8(lVar15,(ulong)puVar32 & 0xffffffff);
            }
          }
          if ((((uVar18 & 1) != 0) && (*(long *)(lVar28 + 0x8528) != 0)) &&
             (puVar25 = *(undefined8 **)(*(long *)(lVar28 + 0x8528) + 0x18),
             puVar25 != (undefined8 *)0x0)) {
            (**(code **)*puVar25)();
          }
        }
        puVar32 = PTR_DAT_04bb2020;
        uVar17 = uVar17 + 1;
        plVar16 = plVar16 + 9;
      } while (uVar17 != 8);
      if ((((local_254 & 1) != 0) && (*(long *)(lVar39 + 0x28) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x28) + 8), puVar25 != (undefined8 *)0x0)) {
        (**(code **)*puVar25)();
      }
    }
  }
  FUN_01b36f70(&local_238);
  if (0 < local_238) {
    lVar39 = *(long *)PTR_DAT_04bb39b0;
    if (lVar39 == 0) {
      bVar33 = *PTR_DAT_04bb32e0;
LAB_028f0d78:
      if (bVar33 < 8) goto LAB_028f0dec;
LAB_028f0d80:
      if (*(long **)PTR_DAT_04bb27d0 != (long *)0x0) {
        lVar15 = **(long **)PTR_DAT_04bb27d0;
        bVar33 = *(byte *)(lVar15 + 0x473);
        pbVar31 = PTR_DAT_04bb5038;
        if ((long)(char)bVar33 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar33 & 0xffffffffU) * 0x20;
          if (7 < bVar33) {
            puVar2 = (uint *)(lVar15 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar31 = (byte *)(lVar15 + 0x471);
          }
        }
        if (*pbVar31 < 8) goto LAB_028f0dec;
      }
      if ((byte)*PTR_DAT_04bb5038 < 8) goto LAB_028f0dec;
    }
    else {
      pbVar31 = PTR_DAT_04bb32e0;
      if (*(int *)(lVar39 + 0x15c) != 0) {
        pbVar31 = (byte *)(lVar39 + 0x158);
      }
      if (7 < *pbVar31) {
        if ((*(int *)(lVar39 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
          bVar33 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
          goto LAB_028f0d78;
        }
        goto LAB_028f0d80;
      }
LAB_028f0dec:
      pbVar31 = PTR_DAT_04bb32e0;
      if (lVar39 == 0) {
LAB_028f0e2c:
        if (*pbVar31 < 8) goto LAB_028f0ea4;
LAB_028f0e38:
        if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_028f0e9c:
          pbVar31 = PTR_DAT_04bb5038;
          goto LAB_028f0ea4;
        }
        lVar39 = **(long **)PTR_DAT_04bb27d0;
        bVar33 = *(byte *)(lVar39 + 0x473);
        pbVar31 = PTR_DAT_04bb5038;
        if ((long)(char)bVar33 != 0xffffffffffffffff) {
          puVar2 = (uint *)(lVar39 + 0x48) + ((long)(char)bVar33 & 0xffffffffU) * 0x20;
          if (7 < bVar33) {
            puVar2 = (uint *)(lVar39 + 0x48);
          }
          if ((*puVar2 & 8) != 0) {
            pbVar31 = (byte *)(lVar39 + 0x471);
          }
        }
        bVar33 = *pbVar31;
        bVar9 = 7 < bVar33;
        if (bVar9) {
          bVar33 = 0xff;
        }
        local_f8 = (undefined *)CONCAT71(local_f8._1_7_,bVar33);
        if (bVar9) goto LAB_028f0e9c;
      }
      else {
        if (*(int *)(lVar39 + 0x15c) != 0) {
          pbVar31 = (byte *)(lVar39 + 0x158);
        }
        if (7 < *pbVar31) {
          if ((*(int *)(lVar39 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            pbVar31 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_028f0e2c;
          }
          goto LAB_028f0e38;
        }
LAB_028f0ea4:
        bVar33 = *pbVar31;
        if (7 < bVar33) {
          bVar33 = 0xff;
        }
        local_f8 = (undefined *)CONCAT71(local_f8._1_7_,bVar33);
      }
      local_1f8 = "WHEREAREN_VisitDone";
      local_200 = puVar32 + 0x10;
      iVar11 = FUN_0274bce0(&local_f8,&local_200);
      if (iVar11 != 0) {
        local_f0 = "wherearen_status";
        local_f8 = puVar32 + 0x10;
        FUN_0260140c(&local_200,&local_f8);
        local_1d8 = 0;
        local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
        puVar32 = PTR_DAT_04bc3520 + 0x10;
        local_200 = puVar32;
        FUN_025fa900(&local_200,&local_f8);
        local_200 = puVar32;
        iVar11 = FUN_025faf7c(&local_200);
        if (iVar11 == -1) {
LAB_028f0f48:
          if (local_1e0._4_4_ == 0) {
            local_1e0 = CONCAT44(1,(undefined4)local_1e0);
          }
        }
        else {
          iVar11 = (**(code **)(local_200 + 0x20))(&local_200);
          local_f8 = (undefined *)CONCAT44(local_f8._4_4_,iVar11);
          if (0xc < iVar11) goto LAB_028f0f48;
        }
        FUN_02601530(&local_200);
      }
    }
    lVar28 = *(long *)PTR_DAT_04bb3350;
    lVar15 = *(long *)PTR_DAT_04bb2268;
    lVar39 = nn::os::GetTlsValue(*(undefined4 *)(lVar28 + 0x68));
    puVar32 = PTR_DAT_04bc3578;
    if ((*(long *)(lVar28 + 0x60) != lVar39) &&
       (uVar17 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar17 & 1) == 0)) {
      *(undefined1 *)(lVar15 + 0xb1) = 1;
    }
    local_200 = (undefined *)CONCAT44(local_200._4_4_,7);
    puVar2 = (uint *)(*(long *)puVar32 + 0xb0);
    do {
      cVar5 = '\x01';
      bVar9 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar9) {
        *puVar2 = *puVar2 | 0x80;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
  }
  if (*(long *)puVar6 != 0) {
    FUN_02705554(&local_200,0,1);
    uVar17 = (ulong)local_200._4_4_;
    if (local_200._4_4_ != 8) {
      iVar11 = (int)local_200;
      do {
        uVar18 = 0xffffffff;
        if (uVar17 < 8) {
          uVar18 = uVar17;
        }
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,(int)uVar18);
        if (uVar17 < 8) {
          FUN_0264aef0(&local_f8);
          FUN_0264b2e0(&local_f8);
          lVar39 = *(long *)puVar6;
          if (lVar39 == 0) goto LAB_028f11d4;
          (**(code **)(*(long *)**(undefined8 **)(lVar39 + 0x10) + 0x18))();
          if ((iVar11 == 0) && ((*(byte *)(lVar39 + 0x453) & 1) != 0)) {
            lVar39 = (**(code **)(**(long **)(*(long *)(lVar39 + 0x10) + 0x130) + 0x18))();
          }
          else {
            lVar39 = (**(code **)(*(long *)**(undefined8 **)(lVar39 + 0x10) + 0x18))();
            lVar39 = lVar39 + 0x110;
          }
          if (uVar17 == 7) break;
          plVar16 = (long *)(lVar39 + uVar17 * 0x48 + 0x1e3400);
          while ((6 < uVar17 || (plVar16[-1] == 0 && *plVar16 == 0))) {
            uVar17 = uVar17 + 1;
            plVar16 = plVar16 + 9;
            if (uVar17 == 7) goto LAB_028f1004;
          }
          uVar17 = (ulong)((int)uVar17 + 1);
        }
      } while (uVar17 != 8);
    }
LAB_028f1004:
    lVar39 = *(long *)puVar6;
    if (lVar39 != 0) {
      puVar25 = *(undefined8 **)(lVar39 + 0x10);
      if ((*(byte *)(lVar39 + 0x453) & 1) == 0) {
        lVar39 = (**(code **)(*(long *)*puVar25 + 0x38))();
        if (lVar39 == 0) goto LAB_028f11d4;
        lVar39 = lVar39 + 0x70;
      }
      else if (((puVar25 == (undefined8 *)0x0) || ((long *)puVar25[0x26] == (long *)0x0)) ||
              (lVar39 = (**(code **)(*(long *)puVar25[0x26] + 0x38))(), lVar39 == 0))
      goto LAB_028f11d4;
      uVar13 = FUN_0252d29c();
      local_200 = (undefined *)CONCAT44(local_200._4_4_,uVar13);
      if (uVar13 != 0xffffffff) {
        if ((*(long **)(lVar39 + 0x28) == (long *)0x0) ||
           (puVar25 = (undefined8 *)**(long **)(lVar39 + 0x28), puVar25 == (undefined8 *)0x0)) {
          uVar17 = 0;
        }
        else {
          uVar17 = (**(code **)*puVar25)();
          uVar17 = uVar17 & 0xffffffff;
        }
        if ((uVar13 < 8) &&
           (lVar15 = *(long *)(lVar39 + 0x10) + *(long *)(lVar39 + 8) + (ulong)uVar13 * 0x48,
           *(long *)(lVar15 + 0x1e33b0) != 0 || *(long *)(lVar15 + 0x1e33b8) != 0)) {
          FUN_026868d0(&local_200);
          FUN_02686c80(&local_200);
        }
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar39 + 0x28) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar39 + 0x28) + 8), puVar25 != (undefined8 *)0x0))
        {
          (**(code **)*puVar25)();
        }
      }
    }
  }
LAB_028f11d4:
  lVar39 = 0x4e368;
  lVar15 = 500;
  do {
    lVar28 = *(long *)puVar6;
    if (lVar28 != 0) {
      local_200 = (undefined *)CONCAT44(local_200._4_4_,1);
      if ((((*(byte *)(lVar28 + 0x50d) ^ 0xff) & 6) == 0) &&
         (lVar28 = (**(code **)(**(long **)(*(long *)(lVar28 + 0x10) + 0x188) + 0x30))(),
         lVar28 != 0)) {
        lVar30 = *(long *)(lVar28 + lVar39);
        lVar29 = lVar28 + lVar39;
        if (lVar30 == 0) {
          uVar17 = 0;
        }
        else {
          if (*(undefined8 **)(lVar30 + 0x10) == (undefined8 *)0x0) {
            uVar17 = 0;
            plVar16 = *(long **)(lVar30 + 0x20);
          }
          else {
            uVar17 = (**(code **)**(undefined8 **)(lVar30 + 0x10))();
            uVar17 = uVar17 & 0xffffffff;
            if (*(long *)(lVar28 + lVar39) == 0) goto LAB_028f12b4;
            plVar16 = *(long **)(*(long *)(lVar28 + lVar39) + 0x20);
          }
          if (plVar16 != (long *)0x0) {
            local_200 = *(undefined **)(lVar29 + -0x20);
            local_1f8 = *(char **)(lVar29 + -0x18);
            local_1f0 = 0x40;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
          }
        }
LAB_028f12b4:
        puVar32 = *(undefined **)(lVar29 + -0x20);
        pcVar34 = *(char **)(lVar29 + -0x18);
        puVar35 = (ushort *)(puVar32 + (long)pcVar34);
        if ((*puVar35 & 1) != 0) {
          if ((*(long *)(lVar28 + lVar39) != 0) &&
             (plVar16 = *(long **)(*(long *)(lVar28 + lVar39) + 0x20), plVar16 != (long *)0x0)) {
            local_1f0 = 0x40;
            local_200 = puVar32;
            local_1f8 = pcVar34;
            (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
            puVar32 = *(undefined **)(lVar29 + -0x20);
            pcVar34 = *(char **)(lVar29 + -0x18);
            puVar35 = (ushort *)(puVar32 + (long)pcVar34);
          }
          if (puVar35[2] == 0) {
            if ((*(long *)(lVar28 + lVar39) != 0) &&
               (plVar16 = *(long **)(*(long *)(lVar28 + lVar39) + 0x20), plVar16 != (long *)0x0)) {
              local_1f0 = 0x40;
              local_200 = puVar32;
              local_1f8 = pcVar34;
              (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
              puVar35 = (ushort *)(*(long *)(lVar29 + -0x18) + *(long *)(lVar29 + -0x20));
            }
            *puVar35 = *puVar35 & 0xfffe;
          }
        }
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar28 + lVar39) != 0)) &&
           (puVar25 = *(undefined8 **)(*(long *)(lVar28 + lVar39) + 0x18),
           puVar25 != (undefined8 *)0x0)) {
          (**(code **)*puVar25)();
        }
      }
    }
    lVar39 = lVar39 + 0x2d48;
    lVar15 = lVar15 + -1;
    if (lVar15 == 0) {
      if ((*(long *)(lVar23 + 0x5dabc0) != 0) &&
         (plVar16 = *(long **)(*(long *)(lVar23 + 0x5dabc0) + 0x20), plVar16 != (long *)0x0)) {
        local_200 = (undefined *)*plVar20;
        local_1f8 = *(char **)(lVar23 + 0x5daba8);
        local_1f0 = 8;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_200);
      }
      *(ulong *)(*(long *)(lVar23 + 0x5daba8) + *plVar20) = local_228;
      if ((*(long *)(lVar24 + 0xe7220) != 0) &&
         (plVar20 = *(long **)(*(long *)(lVar24 + 0xe7220) + 0x20), plVar20 != (long *)0x0)) {
        local_200 = (undefined *)*plVar1;
        local_1f8 = *(char **)(lVar24 + 0xe7208);
        local_1f0 = 8;
        (**(code **)(*plVar20 + 0x20))(plVar20,&local_200);
      }
      *(ulong *)(*(long *)(lVar24 + 0xe7208) + *plVar1) = local_228;
      if ((((local_250 & 1) != 0) && (*(long *)(lVar24 + 0xe7220) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar24 + 0xe7220) + 0x18),
         puVar25 != (undefined8 *)0x0)) {
        (**(code **)*puVar25)();
      }
      if ((((uVar10 & 1) != 0) && (*(long *)(lVar23 + 0x5dabc0) != 0)) &&
         (puVar25 = *(undefined8 **)(*(long *)(lVar23 + 0x5dabc0) + 0x18),
         puVar25 != (undefined8 *)0x0)) {
        (**(code **)*puVar25)();
      }
      return;
    }
  } while( true );
}

