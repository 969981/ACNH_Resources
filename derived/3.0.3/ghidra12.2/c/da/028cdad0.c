
/* WARNING: Removing unreachable block (ram,0x028cffb4) */
/* WARNING: Removing unreachable block (ram,0x028cff7c) */
/* WARNING: Removing unreachable block (ram,0x028cff34) */
/* WARNING: Removing unreachable block (ram,0x028cfedc) */
/* WARNING: Removing unreachable block (ram,0x028cfea4) */
/* WARNING: Removing unreachable block (ram,0x028cfe5c) */
/* WARNING: Removing unreachable block (ram,0x028cfe04) */
/* WARNING: Removing unreachable block (ram,0x028cfdcc) */
/* WARNING: Removing unreachable block (ram,0x028cfd88) */
/* WARNING: Removing unreachable block (ram,0x028cfd30) */
/* WARNING: Removing unreachable block (ram,0x028cfc0c) */
/* WARNING: Removing unreachable block (ram,0x028cfbc4) */
/* WARNING: Removing unreachable block (ram,0x028cfb6c) */
/* WARNING: Removing unreachable block (ram,0x028cfb34) */
/* WARNING: Removing unreachable block (ram,0x028cfaec) */
/* WARNING: Removing unreachable block (ram,0x028cfa94) */
/* WARNING: Removing unreachable block (ram,0x028cfa5c) */
/* WARNING: Removing unreachable block (ram,0x028cfa14) */
/* WARNING: Removing unreachable block (ram,0x028cf9c0) */
/* WARNING: Removing unreachable block (ram,0x028cf988) */
/* WARNING: Removing unreachable block (ram,0x028cf940) */
/* WARNING: Removing unreachable block (ram,0x028ce128) */
/* WARNING: Removing unreachable block (ram,0x028ce0ec) */
/* WARNING: Removing unreachable block (ram,0x028ce2f4) */
/* WARNING: Removing unreachable block (ram,0x028ce460) */
/* WARNING: Removing unreachable block (ram,0x028cf954) */
/* WARNING: Removing unreachable block (ram,0x028cf9ac) */
/* WARNING: Removing unreachable block (ram,0x028cf9f0) */
/* WARNING: Removing unreachable block (ram,0x028cfa28) */
/* WARNING: Removing unreachable block (ram,0x028cfa80) */
/* WARNING: Removing unreachable block (ram,0x028cfac8) */
/* WARNING: Removing unreachable block (ram,0x028cfb00) */
/* WARNING: Removing unreachable block (ram,0x028cfb58) */
/* WARNING: Removing unreachable block (ram,0x028cfba0) */
/* WARNING: Removing unreachable block (ram,0x028cfbd8) */
/* WARNING: Removing unreachable block (ram,0x028cfd1c) */
/* WARNING: Removing unreachable block (ram,0x028cfd64) */
/* WARNING: Removing unreachable block (ram,0x028cfd9c) */
/* WARNING: Removing unreachable block (ram,0x028cfdf0) */
/* WARNING: Removing unreachable block (ram,0x028cfe38) */
/* WARNING: Removing unreachable block (ram,0x028cfe70) */
/* WARNING: Removing unreachable block (ram,0x028cfec8) */
/* WARNING: Removing unreachable block (ram,0x028cff10) */
/* WARNING: Removing unreachable block (ram,0x028cff48) */
/* WARNING: Removing unreachable block (ram,0x028cffa0) */
/* WARNING: Removing unreachable block (ram,0x028cffe8) */

void FUN_028cdad0(uint *param_1,long *param_2)

{
  ulong *puVar1;
  char cVar2;
  char cVar3;
  char cVar4;
  ulong uVar5;
  bool bVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  ulong uVar17;
  long *plVar18;
  uint *puVar19;
  ulong uVar20;
  undefined8 *puVar21;
  long *plVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  undefined8 *puVar26;
  long lVar27;
  uint *puVar28;
  char *pcVar29;
  char *pcVar30;
  undefined8 uVar31;
  ulong uVar32;
  ulong uVar33;
  undefined *puVar34;
  undefined *puVar35;
  ulong uVar36;
  ulong local_120;
  ulong uStack_118;
  uint local_f4;
  undefined8 local_e8;
  uint local_dc;
  undefined *local_d8;
  char *pcStack_d0;
  uint local_c4;
  ulong local_c0;
  ulong local_b8;
  undefined8 local_b0;
  char *local_a8;
  undefined *local_a0;
  char *local_98;
  ulong local_90;
  undefined *local_88;
  char *local_80;
  ulong local_78;
  undefined8 local_70;
  
  puVar35 = PTR_DAT_04bb2020;
  puVar34 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "CalendarEventStop";
  local_88 = puVar34;
  uVar8 = FUN_02743000(&local_88);
  local_80 = "CalendarEventStop";
  local_88 = puVar34;
  FUN_02743234(&local_88,0);
  puVar1 = (ulong *)(param_2 + 2);
  local_80 = "Easter";
  local_88 = puVar34;
  uVar17 = FUN_01033b54(puVar1,param_2 + 3,&local_88);
  if ((uVar17 & 1) != 0) {
    local_80 = "PynTalkPreVisitDayFlag";
    local_88 = puVar34;
    FUN_0274e338(&local_88,0);
    local_80 = "PynExplainInventRecipeFlag";
    local_88 = puVar34;
    FUN_0274e338(&local_88,0);
    local_80 = "EasterNnpcRecipeCount";
    local_88 = puVar34;
    FUN_0274e338(&local_88,0);
    local_80 = "PAnnouncePreEaster";
    local_88 = puVar34;
    FUN_0274e338(&local_88,0);
  }
  local_80 = "CalendarEventStop";
  local_88 = puVar34;
  FUN_02743234(&local_88,uVar8);
  local_80 = "ImmQ_A_Complete";
  local_88 = puVar34;
  uVar17 = FUN_0273f0a0(&local_88);
  if ((uVar17 & 1) != 0) {
    local_98 = "ImmQ_B_Complete";
    local_a0 = puVar35 + 0x10;
    uVar17 = FUN_0273f0a0(&local_a0);
    if ((uVar17 & 1) != 0) {
      local_a8 = "ImmQ_C_Complete";
      local_b0 = puVar35 + 0x10;
      uVar17 = FUN_0273f0a0(&local_b0);
      if ((uVar17 & 1) != 0) {
        local_88 = puVar35 + 0x10;
        local_80 = "UnlockJuneBrideSeq";
        FUN_0273f3c4(&local_88,1);
      }
    }
  }
  local_80 = "HasGottenMarinesuit";
  local_88 = puVar35 + 0x10;
  uVar17 = FUN_0274e120(&local_88);
  if ((uVar17 & 1) != 0) {
    local_80 = "GulBVisitEnable";
    local_88 = puVar35 + 0x10;
    FUN_0273f3c4(&local_88,1);
  }
  if (0 < *param_2) {
    local_80 = "IslandEvaluationClearTkkLive";
    local_88 = puVar35 + 0x10;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) != 0) {
      local_98 = "TkkFirstLive";
      local_a0 = puVar35 + 0x10;
      uVar17 = FUN_0273f0a0(&local_a0);
      if ((uVar17 & 1) == 0) {
        local_88 = puVar35 + 0x10;
        local_80 = "TkkFirstLiveEnable";
        FUN_0273f3c4(&local_88,1);
        lVar25 = *(long *)PTR_DAT_04bb46b0;
        if (lVar25 != 0) {
          puVar26 = *(undefined8 **)(lVar25 + 0x10);
          if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
            lVar25 = (**(code **)(*(long *)*puVar26 + 0x38))();
            if (lVar25 != 0) {
              lVar25 = lVar25 + 0x70;
              goto LAB_028cdd10;
            }
          }
          else if (((puVar26 != (undefined8 *)0x0) && ((long *)puVar26[0x26] != (long *)0x0)) &&
                  (lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))(), lVar25 != 0)) {
LAB_028cdd10:
            plVar18 = (long *)(lVar25 + 0xe6ba8);
            lVar27 = *(long *)(lVar25 + 0xe6bc8);
            if (lVar27 == 0) {
              FUN_028563e4(*(long *)(lVar25 + 0xe6bb0) + *plVar18,6);
            }
            else {
              if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
                uVar17 = 0;
LAB_028cdd5c:
                plVar22 = *(long **)(lVar27 + 0x20);
                if (plVar22 != (long *)0x0) {
                  local_88 = (undefined *)*plVar18;
                  local_80 = *(char **)(lVar25 + 0xe6bb0);
                  local_78 = 0x1a8;
                  (**(code **)(*plVar22 + 0x20))(plVar22,&local_88);
                }
              }
              else {
                uVar17 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
                lVar27 = *(long *)(lVar25 + 0xe6bc8);
                uVar17 = uVar17 & 0xffffffff;
                if (lVar27 != 0) goto LAB_028cdd5c;
              }
              FUN_028563e4(*(long *)(lVar25 + 0xe6bb0) + *plVar18,6);
              if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0xe6bc8) != 0)) &&
                 (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0xe6bc8) + 0x18),
                 puVar26 != (undefined8 *)0x0)) {
                (**(code **)*puVar26)();
              }
            }
          }
        }
      }
    }
  }
  local_90 = param_2[2];
  local_70 = param_2[3];
  FUN_00a81090(&local_70);
  FUN_00a81090(&local_90);
  local_b8 = local_90;
  lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
  local_88 = (undefined *)(lVar25 + 0x69780);
  local_c0 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  local_b8 = local_c0;
  lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_c0);
  local_88 = (undefined *)(lVar25 + 0x15180);
  local_c0 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
  puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
  if ((char)param_2[5] == '\0') {
    lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
    lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90);
    if ((lVar27 < lVar25) ||
       (lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_90), lVar27 != lVar25))
    goto LAB_028cde64;
  }
  else {
LAB_028cde64:
    param_1[6] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[0] = 0;
    param_1[1] = 0;
    param_1[0x11] = 0;
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
    param_1[0x15] = 0;
    param_1[0x16] = 0;
    param_1[0x17] = 0;
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    param_1[0x1c] = 0xffffffff;
    param_1[0x1d] = 0xffffffff;
    if (lVar25 == 0) {
LAB_028cdee0:
      lVar25 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar25 = 0;
        if (lVar27 != 0) {
          lVar25 = lVar27 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_028cdee0;
        lVar25 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar25 + 0x1a0da0) == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1a0da0);
      uVar17 = 0;
      if (puVar26 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar26)();
      }
    }
    uVar12 = *(uint *)(*(long *)(lVar25 + 0x1a0d88) + *(long *)(lVar25 + 0x1a0d80));
    if (2 < uVar12) {
      uVar12 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1a0da0) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0da0) + 8), puVar26 != (undefined8 *)0x0))
    {
      (**(code **)*puVar26)();
    }
    if ((int)uVar12 < 2) {
      FUN_028d3bdc(param_1,5,&local_b8);
      FUN_028d3d68(param_1,5,&local_c0);
      FUN_028d3430(param_1,5,&local_90);
    }
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    local_e8 = (ulong)local_e8._4_4_ << 0x20;
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    local_88 = (undefined *)CONCAT44(local_88._4_4_,2);
    if (lVar25 == 0) {
LAB_028cdfec:
      lVar25 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar25 = 0;
        if (lVar27 != 0) {
          lVar25 = lVar27 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_028cdfec;
        lVar25 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar25 + 0x1a0da0) == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1a0da0);
      uVar17 = 0;
      if (puVar26 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar26)();
      }
    }
    uVar12 = *(uint *)(*(long *)(lVar25 + 0x1a0d88) + *(long *)(lVar25 + 0x1a0d80));
    if (2 < uVar12) {
      uVar12 = 0;
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar12);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1a0da0) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0da0) + 8), puVar26 != (undefined8 *)0x0))
    {
      (**(code **)*puVar26)();
    }
    if ((int)uVar12 < 2) {
      local_e8 = (ulong)local_e8._4_4_ << 0x20;
      uVar10 = 0;
      uVar12 = 0;
    }
    else {
      puVar19 = (uint *)((long)(param_1 + 0x18) + ((ulong)local_88 & 0xffffffff));
      if (0xd < (uint)local_88) {
        puVar19 = param_1 + 0x18;
      }
      if ((char)*puVar19 == '\0') {
        uVar10 = 0;
      }
      else {
        uVar10 = 1 << (ulong)((uint)local_88 & 0x1f);
        local_e8 = CONCAT44(local_e8._4_4_,uVar10);
      }
      uVar12 = 1 << (ulong)((uint)local_88 & 0x1f);
    }
    local_88 = puVar35 + 0x10;
    local_80 = "BuiltTownOffice";
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) == 0) {
      uVar13 = uVar10 & 0xffffff3f;
      local_e8 = CONCAT44(local_e8._4_4_,uVar10) & 0xffffffffffffff3f;
      uVar12 = uVar12 & 0xffffff3f;
    }
    else {
      uVar15 = uVar10;
      if (*(char *)((long)param_1 + 0x66) != '\0') {
        uVar15 = uVar10 | 0x40;
        local_e8 = CONCAT44(local_e8._4_4_,uVar10) | 0x40;
      }
      uVar13 = uVar15;
      if (*(char *)((long)param_1 + 0x67) != '\0') {
        uVar13 = uVar15 | 0x80;
        local_e8 = CONCAT44(local_e8._4_4_,uVar15) | 0x80;
      }
      uVar12 = uVar12 | 0xc0;
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar12);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) {
LAB_028ce200:
      lVar25 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar25 = 0;
        if (lVar27 != 0) {
          lVar25 = lVar27 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_028ce200;
        lVar25 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar25 + 0x1bf1b8) == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1bf1b8);
      uVar17 = 0;
      if (puVar26 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar26)();
      }
    }
    uVar10 = *(uint *)(*(long *)(lVar25 + 0x1bf1a0) + *(long *)(lVar25 + 0x1bf198));
    if (5 < uVar10) {
      uVar10 = 0;
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1bf1b8) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1bf1b8) + 8), puVar26 != (undefined8 *)0x0))
    {
      (**(code **)*puVar26)();
    }
    if ((int)uVar10 < 2) {
      uVar13 = uVar13 & (1 << (ulong)((uint)local_88 & 0x1f) ^ 0xffffffffU);
      local_e8 = CONCAT44(local_e8._4_4_,uVar13);
      uVar12 = uVar12 & (1 << (ulong)((uint)local_88 & 0x1f) ^ 0xffffffffU);
    }
    else {
      puVar19 = (uint *)((long)(param_1 + 0x18) + ((ulong)local_88 & 0xffffffff));
      if (0xd < (uint)local_88) {
        puVar19 = param_1 + 0x18;
      }
      if ((char)*puVar19 != '\0') {
        uVar13 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar13;
        local_e8 = CONCAT44(local_e8._4_4_,uVar13);
      }
      uVar12 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar12;
    }
    puVar19 = param_1 + 0x18;
    uVar10 = uVar13;
    if (*(char *)((long)param_1 + 99) != '\0') {
      uVar10 = uVar13 | 8;
      local_e8 = CONCAT44(local_e8._4_4_,uVar13) | 8;
    }
    local_b0 = (undefined *)(CONCAT44(local_b0._4_4_,uVar12) | 8);
    local_88 = (undefined *)CONCAT44(local_88._4_4_,8);
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) {
LAB_028ce388:
      lVar25 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar25 = 0;
        if (lVar27 != 0) {
          lVar25 = lVar27 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_028ce388;
        lVar25 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar25 + 0x1a0da0) == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1a0da0);
      uVar17 = 0;
      if (puVar26 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar26)();
      }
    }
    uVar13 = *(uint *)(*(long *)(lVar25 + 0x1a0d88) + *(long *)(lVar25 + 0x1a0d80));
    if (2 < uVar13) {
      uVar13 = 0;
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar13);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1a0da0) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0da0) + 8), puVar26 != (undefined8 *)0x0))
    {
      (**(code **)*puVar26)();
    }
    uVar17 = (ulong)local_88 & 0xffffffff;
    if ((int)uVar13 < 2) {
      uVar10 = uVar10 & (1 << (ulong)((uint)local_88 & 0x1f) ^ 0xffffffffU);
      local_e8 = CONCAT44(local_e8._4_4_,uVar10);
      uVar12 = (uVar12 | 8) & (1 << (ulong)((uint)local_88 & 0x1f) ^ 0xffffffffU);
    }
    else {
      if (0xd < (uint)local_88) {
        uVar17 = 0;
      }
      if (*(char *)((long)puVar19 + uVar17) != '\0') {
        uVar10 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar10;
        local_e8 = CONCAT44(local_e8._4_4_,uVar10);
      }
      uVar12 = 1 << (ulong)((uint)local_88 & 0x1f) | uVar12 | 8;
    }
    uVar13 = uVar10;
    if (*(char *)((long)param_1 + 0x69) != '\0') {
      uVar13 = uVar10 | 0x200;
      local_e8 = CONCAT44(local_e8._4_4_,uVar10) | 0x200;
    }
    local_c4 = 10;
    local_b0 = (undefined *)(CONCAT44(local_b0._4_4_,uVar12) | 0x200);
    local_80 = "VillageExtensionLevel3";
    local_88 = puVar35 + 0x10;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) == 0) {
LAB_028ce5f4:
      uVar13 = uVar13 & (1 << (ulong)(local_c4 & 0x1f) ^ 0xffffffffU);
      local_e8 = CONCAT44(local_e8._4_4_,uVar13);
      uVar12 = (uVar12 | 0x200) & (1 << (ulong)(local_c4 & 0x1f) ^ 0xffffffffU);
    }
    else {
      local_98 = "OwlWantsPainting";
      local_a0 = puVar35 + 0x10;
      uVar17 = FUN_0273f0a0(&local_a0);
      if ((uVar17 & 1) == 0) {
LAB_028ce4f0:
        lVar25 = *(long *)PTR_DAT_04bb46b0;
        if (lVar25 == 0) {
LAB_028ce548:
          lVar25 = 0;
        }
        else {
          puVar26 = *(undefined8 **)(lVar25 + 0x10);
          if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
            lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
            lVar25 = 0;
            if (lVar27 != 0) {
              lVar25 = lVar27 + 0x70;
            }
          }
          else {
            if (puVar26 == (undefined8 *)0x0) goto LAB_028ce548;
            lVar25 = 0;
            if ((long *)puVar26[0x26] != (long *)0x0) {
              lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
            }
          }
        }
        if (*(long **)(lVar25 + 0x1bf1b8) == (long *)0x0) {
          uVar17 = 0;
        }
        else {
          puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1bf1b8);
          uVar17 = 0;
          if (puVar26 != (undefined8 *)0x0) {
            uVar17 = (**(code **)*puVar26)();
          }
        }
        uVar10 = *(uint *)(*(long *)(lVar25 + 0x1bf1a0) + *(long *)(lVar25 + 0x1bf198));
        if (5 < uVar10) {
          uVar10 = 0;
        }
        local_dc = uVar10;
        if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1bf1b8) != 0)) &&
           (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1bf1b8) + 8),
           puVar26 != (undefined8 *)0x0)) {
          (**(code **)*puVar26)();
        }
        if ((int)uVar10 < 4) goto LAB_028ce5f4;
      }
      else {
        local_d8 = puVar35 + 0x10;
        pcStack_d0 = "FoxPreVisitReserve";
        uVar17 = FUN_0273f0a0(&local_d8);
        if ((uVar17 & 1) != 0) goto LAB_028ce4f0;
      }
      uVar17 = (ulong)local_c4;
      if (0xd < local_c4) {
        uVar17 = 0;
      }
      if (*(char *)((long)puVar19 + uVar17) != '\0') {
        uVar13 = 1 << (ulong)(local_c4 & 0x1f) | uVar13;
        local_e8 = CONCAT44(local_e8._4_4_,uVar13);
      }
      uVar12 = 1 << (ulong)(local_c4 & 0x1f) | uVar12 | 0x200;
    }
    *(undefined8 *)((long)param_1 + 0x66) = 0;
    puVar19[0] = 0;
    puVar19[1] = 0;
    while (uVar10 = uVar13 - (uVar13 >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) != 0) {
      uVar8 = FUN_028d3ef0(&local_e8);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar8);
      uVar17 = FUN_028d3430(param_1,uVar8,&local_90);
      if ((uVar17 & 1) == 0) break;
      uVar13 = uVar13 & (1 << (ulong)((uint)local_a0 & 0x1f) ^ 0xffffffffU);
      local_e8 = CONCAT44(local_e8._4_4_,uVar13);
      uVar12 = uVar12 & (1 << (ulong)((uint)local_a0 & 0x1f) ^ 0xffffffffU);
      if ((uint)local_a0 == 1) {
        local_80 = "VisitGulAFlag";
        local_88 = puVar35 + 0x10;
        FUN_0273f3c4(&local_88,1);
      }
      else if ((uint)local_a0 == 0xb) {
        local_88 = puVar35 + 0x10;
        local_e8 = CONCAT44(local_e8._4_4_,uVar13) & 0xfffffffffffffffd;
        uVar12 = uVar12 & 0xfffffffd;
        local_80 = "VisitGulAFlag";
        FUN_0273f3c4(&local_88,0);
        uVar13 = uVar13 & 0xfffffffd;
      }
    }
    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar12);
    while (uVar10 = uVar12 - (uVar12 >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) != 0) {
      uVar8 = FUN_028d3ef0(&local_b0);
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar8);
      uVar17 = FUN_028d3430(param_1,uVar8,&local_90);
      if ((uVar17 & 1) == 0) break;
      uVar12 = uVar12 & (1 << (ulong)((uint)local_a0 & 0x1f) ^ 0xffffffffU);
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar12);
      if ((uint)local_a0 == 1) {
        local_80 = "VisitGulAFlag";
        local_88 = puVar35 + 0x10;
        FUN_0273f3c4(&local_88,1);
      }
      else if ((uint)local_a0 == 0xb) {
        local_88 = puVar35 + 0x10;
        local_b0 = (undefined *)(CONCAT44(local_b0._4_4_,uVar12) & 0xfffffffffffffffd);
        local_80 = "VisitGulAFlag";
        FUN_0273f3c4(&local_88,0);
        uVar12 = uVar12 & 0xfffffffd;
      }
    }
    puVar34 = puVar35 + 0x10;
    while (puVar35 = PTR_DAT_04bb2020, uVar10 = uVar12 - (uVar12 >> 1 & 0x55555555),
          uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333),
          uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f, uVar10 = uVar10 + (uVar10 >> 8),
          (uVar10 + (uVar10 >> 0x10) & 0x3f) != 0) {
      if (uVar12 == 0) {
        uVar10 = 0xffffffff;
LAB_028ce874:
        puVar28 = puVar19;
LAB_028ce7b4:
        *(undefined1 *)puVar28 = 1;
      }
      else {
        uVar10 = uVar12 - 1 & (uVar12 ^ 0xffffffff);
        uVar10 = uVar10 - (uVar10 >> 1 & 0x55555555);
        uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
        uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
        uVar10 = uVar10 + (uVar10 >> 8);
        uVar13 = uVar10 + (uVar10 >> 0x10) & 0x3f;
        if (uVar13 != 3) {
          if (uVar13 == 8) {
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_80 = "CommuneSkkDonation";
            iVar9 = FUN_0273ea30(&local_88);
            if (1 < iVar9) {
              uVar10 = 8;
              goto LAB_028ce7bc;
            }
          }
          else if (uVar13 == 9) {
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_80 = "CommuneSloDonation";
            iVar9 = FUN_0273ea30(&local_88);
            uVar10 = 9;
            if (1 < iVar9) goto LAB_028ce7bc;
          }
          else {
            uVar10 = uVar13;
            if (0xd < uVar13) goto LAB_028ce874;
          }
LAB_028ce7b0:
          puVar28 = (uint *)((long)puVar19 + (ulong)uVar13);
          uVar10 = uVar13;
          goto LAB_028ce7b4;
        }
        local_80 = "CommuneCmlDonation";
        local_88 = puVar34;
        iVar9 = FUN_0273ea30(&local_88);
        if (iVar9 < 2) goto LAB_028ce7b0;
        uVar10 = 3;
      }
LAB_028ce7bc:
      uVar12 = uVar12 & (1 << (ulong)(uVar10 & 0x1f) ^ 0xffffffffU);
    }
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) {
      lVar25 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar25 = 0;
        if (lVar27 != 0) {
          lVar25 = lVar27 + 0x70;
        }
      }
      else if (puVar26 == (undefined8 *)0x0) {
        lVar25 = 0;
      }
      else {
        lVar25 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar25 + 0x1bf1b8) == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1bf1b8);
      uVar17 = 0;
      if (puVar26 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar26)();
      }
    }
    uVar12 = *(uint *)(*(long *)(lVar25 + 0x1bf1a0) + *(long *)(lVar25 + 0x1bf198));
    if (5 < uVar12) {
      uVar12 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar12);
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1bf1b8) != 0)) &&
       (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1bf1b8) + 8), puVar26 != (undefined8 *)0x0))
    {
      (**(code **)*puVar26)();
    }
    puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
    if (2 < (int)uVar12) {
      iVar9 = 0;
      uVar12 = 0;
      puVar34 = puVar35 + 0x10;
      local_f4 = 0;
      local_e8 = local_90;
      do {
        local_c4 = nn::time::GetDayOfWeek
                             ((int)(short)local_e8,((int)local_e8 << 8) >> 0x18,
                              (int)local_e8 >> 0x18);
        uVar17 = FUN_00873540(*puVar26,&local_e8,1,1);
        if ((uVar17 & 1) == 0) {
          uVar31 = *puVar26;
          local_80 = "NormalLive";
          local_b0 = (undefined *)local_e8;
          local_88 = puVar34;
          if ((char)(local_e8 >> 0x20) < '\x05') {
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_a0 = (undefined *)(lVar25 + -0x15180);
            local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          }
          uVar17 = (ulong)local_b0;
          local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
          local_b0._7_1_ = SUB81(uVar17,7);
          local_b0._0_7_ = (uint7)(uint6)local_b0;
          uVar17 = FUN_00879dd0(uVar31,&local_88,uVar17,uVar17 >> 0x10,uVar17 >> 0x18,0);
          if ((uVar17 & 1) == 0) {
            uVar31 = *puVar26;
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_b0 = (undefined *)local_e8;
            local_80 = "BirthdayLive";
            if ((char)(local_e8 >> 0x20) < '\x05') {
              lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
              local_a0 = (undefined *)(lVar25 + -0x15180);
              local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
            }
            uVar17 = (ulong)local_b0;
            local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
            local_b0._7_1_ = SUB81(uVar17,7);
            local_b0._0_7_ = (uint7)(uint6)local_b0;
            uVar17 = FUN_00879dd0(uVar31,&local_88,uVar17,uVar17 >> 0x10,uVar17 >> 0x18,0);
            puVar35 = PTR_DAT_04bb30a0;
            if ((uVar17 & 1) == 0) {
              uVar10 = FUN_00a8d9f0(*(long *)PTR_DAT_04bb30a0,*(long *)PTR_DAT_04bb30a0 + 0x651f0,
                                    &local_e8);
              local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar10);
              if (uVar10 < *(uint *)(*(long *)puVar35 + 0x100)) {
                lVar25 = *(long *)(*(long *)(*(long *)puVar35 + 0x108) + (long)(int)uVar10 * 8);
              }
              else {
                lVar25 = 0;
              }
              plVar18 = (long *)(**(code **)(*(long *)(lVar25 + 0x30) + 0xf0))();
              local_88 = PTR_DAT_04bb2020 + 0x10;
              local_80 = "Fine00";
              (**(code **)(*plVar18 + 0x18))();
              (**(code **)(*plVar18 + 0x18))(plVar18);
              pcVar30 = (char *)plVar18[1];
              (**(code **)(local_88 + 0x18))(&local_88);
              if (pcVar30 == local_80) {
LAB_028cea00:
                uVar12 = 1 << (ulong)(local_c4 & 0x1f) | uVar12;
                puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
              }
              else {
                uVar17 = 0;
                bVar6 = true;
                do {
                  lVar25 = plVar18[1] + 1 + uVar17;
                  cVar2 = *(char *)(lVar25 + -1);
                  if (cVar2 != local_80[uVar17]) break;
                  if (cVar2 == '\0') {
                    if (bVar6) goto LAB_028cea00;
                    break;
                  }
                  cVar2 = *(char *)(plVar18[1] + 1 + uVar17);
                  if (cVar2 != local_80[uVar17 + 1]) break;
                  if (cVar2 == '\0') goto LAB_028cea00;
                  cVar2 = *(char *)(lVar25 + 1);
                  if (cVar2 != local_80[uVar17 + 2]) break;
                  if (cVar2 == '\0') goto LAB_028cea00;
                  bVar6 = uVar17 < 0x7fffe;
                  uVar17 = uVar17 + 3;
                } while (uVar17 != 0x80001);
                local_88 = PTR_DAT_04bb2020 + 0x10;
                local_80 = "Fine02";
                (**(code **)(*plVar18 + 0x18))(plVar18);
                (**(code **)(*plVar18 + 0x18))(plVar18);
                pcVar30 = (char *)plVar18[1];
                (**(code **)(local_88 + 0x18))(&local_88);
                if (pcVar30 != local_80) {
                  uVar17 = 0;
                  bVar6 = true;
                  do {
                    lVar25 = plVar18[1] + 1 + uVar17;
                    cVar2 = *(char *)(lVar25 + -1);
                    if (cVar2 != local_80[uVar17]) break;
                    if (cVar2 == '\0') {
                      if (bVar6) goto LAB_028cef1c;
                      break;
                    }
                    cVar2 = *(char *)(plVar18[1] + 1 + uVar17);
                    if (cVar2 != local_80[uVar17 + 1]) break;
                    if (cVar2 == '\0') goto LAB_028cef1c;
                    cVar2 = *(char *)(lVar25 + 1);
                    if (cVar2 != local_80[uVar17 + 2]) break;
                    if (cVar2 == '\0') goto LAB_028cef1c;
                    bVar6 = uVar17 < 0x7fffe;
                    uVar17 = uVar17 + 3;
                  } while (uVar17 != 0x80001);
                  local_a0 = PTR_DAT_04bb2020 + 0x10;
                  local_98 = "Fine04";
                  (**(code **)(*plVar18 + 0x18))(plVar18);
                  (**(code **)(*plVar18 + 0x18))(plVar18);
                  pcVar30 = (char *)plVar18[1];
                  (**(code **)(local_a0 + 0x18))(&local_a0);
                  if (pcVar30 != local_98) {
                    uVar17 = 0;
                    bVar6 = true;
                    do {
                      lVar25 = plVar18[1] + 1 + uVar17;
                      cVar2 = *(char *)(lVar25 + -1);
                      if (cVar2 != local_98[uVar17]) break;
                      if (cVar2 == '\0') {
                        if (bVar6) goto LAB_028cef1c;
                        break;
                      }
                      cVar2 = *(char *)(plVar18[1] + 1 + uVar17);
                      if (cVar2 != local_98[uVar17 + 1]) break;
                      if (cVar2 == '\0') goto LAB_028cef1c;
                      cVar2 = *(char *)(lVar25 + 1);
                      if (cVar2 != local_98[uVar17 + 2]) break;
                      if (cVar2 == '\0') goto LAB_028cef1c;
                      bVar6 = uVar17 < 0x7fffe;
                      uVar17 = uVar17 + 3;
                    } while (uVar17 != 0x80001);
                    local_b0 = PTR_DAT_04bb2020 + 0x10;
                    local_a8 = "Fine06";
                    (**(code **)(*plVar18 + 0x18))(plVar18);
                    (**(code **)(*plVar18 + 0x18))(plVar18);
                    pcVar30 = (char *)plVar18[1];
                    (**(code **)(local_b0 + 0x18))(&local_b0);
                    if (pcVar30 != local_a8) {
                      cVar2 = *(char *)plVar18[1];
                      puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
                      if (cVar2 != *local_a8) goto LAB_028cea10;
                      if (cVar2 != '\0') {
                        lVar25 = 0x7fffe;
                        pcVar30 = local_a8;
                        pcVar29 = (char *)plVar18[1];
                        do {
                          if (pcVar29[1] != pcVar30[1]) goto LAB_028cea10;
                          if (pcVar29[1] == '\0') break;
                          if (pcVar29[2] != pcVar30[2]) goto LAB_028cea10;
                          if (pcVar29[2] == '\0') break;
                          if ((lVar25 == 0) || (cVar2 = pcVar29[3], cVar2 != pcVar30[3]))
                          goto LAB_028cea10;
                          lVar25 = lVar25 + -3;
                          pcVar30 = pcVar30 + 3;
                          pcVar29 = pcVar29 + 3;
                        } while (cVar2 != '\0');
                      }
                    }
                  }
                }
LAB_028cef1c:
                local_f4 = 1 << (ulong)(local_c4 & 0x1f) | local_f4;
                puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
              }
            }
          }
        }
LAB_028cea10:
        iVar9 = iVar9 + 1;
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_e8);
        local_88 = (undefined *)(lVar25 + 0x15180);
        local_e8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_88);
        puVar35 = PTR_DAT_04bb2020;
      } while (iVar9 != 7);
      uVar10 = uVar12 - (uVar12 >> 1 & 0x55555555);
      uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
      uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
      uVar10 = uVar10 + (uVar10 >> 8);
      uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
      if (uVar10 == 0) {
        uVar12 = local_f4 - (local_f4 >> 1 & 0x55555555);
        uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
        uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
        uVar12 = uVar12 + (uVar12 >> 8);
        uVar10 = uVar12 + (uVar12 >> 0x10) & 0x3f;
        if (uVar10 == 0) goto LAB_028cf05c;
      }
      else {
        local_f4 = uVar12;
      }
      puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      uVar12 = *puVar19 ^ *puVar19 << 0xb;
      uVar13 = puVar19[3];
      *puVar19 = puVar19[1];
      puVar19[1] = puVar19[2];
      uVar12 = uVar12 >> 8 ^ uVar13 >> 0x13 ^ uVar12 ^ uVar13;
      puVar19[2] = uVar13;
      puVar19[3] = uVar12;
      if (local_f4 == 0) {
        uVar12 = 0xffffffff;
      }
      else {
        iVar9 = (int)((ulong)uVar12 * (ulong)uVar10 >> 0x20) + 2;
        uVar12 = 0xffffffff;
        do {
          iVar9 = iVar9 + -1;
          if (iVar9 < 2) {
            uVar12 = local_f4 - 1 & (local_f4 ^ 0xffffffff);
            uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
            uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
            uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
            uVar12 = uVar12 + (uVar12 >> 8);
            uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
            break;
          }
          local_f4 = local_f4 - 1 & local_f4;
        } while (local_f4 != 0);
      }
      param_1[0x1d] = uVar12;
    }
LAB_028cf05c:
    uVar17 = FUN_028d3430(param_1,4,&local_90);
    if ((uVar17 & 1) == 0) {
      uVar15 = (uint)(param_1[1] != 0) << 1;
      uVar12 = (uint)(param_1[3] != 0) << 3;
      uVar10 = (uint)(param_1[5] != 0) << 5;
      uVar13 = uVar15 | (uint)(param_1[2] != 0) << 2 | uVar12 | (uint)(param_1[4] != 0) << 4 |
               uVar10;
      uVar12 = uVar13 - ((uVar15 | uVar12 | uVar10) >> 1);
      uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
      uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
      uVar12 = uVar12 + (uVar12 >> 8);
      uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
      if (uVar12 == 0) {
LAB_028cf1ac:
        uVar12 = 0xffffffff;
      }
      else {
        puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar10 = *puVar19 ^ *puVar19 << 0xb;
        uVar15 = puVar19[3];
        *puVar19 = puVar19[1];
        puVar19[1] = puVar19[2];
        uVar10 = uVar10 >> 8 ^ uVar15 >> 0x13 ^ uVar10 ^ uVar15;
        puVar19[2] = uVar15;
        puVar19[3] = uVar10;
        if (uVar13 == 0) goto LAB_028cf1ac;
        iVar9 = (int)((ulong)uVar10 * (ulong)uVar12 >> 0x20) + 2;
        uVar12 = 0xffffffff;
        do {
          iVar9 = iVar9 + -1;
          if (iVar9 < 2) {
            uVar12 = uVar13 - 1 & (uVar13 ^ 0xffffffff);
            uVar12 = uVar12 - (uVar12 >> 1 & 0x55555555);
            uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
            uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
            uVar12 = uVar12 + (uVar12 >> 8);
            uVar12 = uVar12 + (uVar12 >> 0x10) & 0x3f;
            break;
          }
          uVar13 = uVar13 - 1 & uVar13;
        } while (uVar13 != 0);
      }
      puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
      param_1[0x1c] = uVar12;
    }
    else {
      uVar17 = FUN_028d3430(param_1,4,&local_90);
      if ((((uVar17 & 1) != 0) && (uVar17 = FUN_028d3430(param_1,4,&local_90), (uVar17 & 1) != 0))
         && (uVar17 = FUN_028d3430(param_1,4,&local_90), (uVar17 & 1) != 0)) {
        FUN_028d3430(param_1,4,&local_90);
      }
    }
    FUN_028d3bdc(param_1,4,&local_b8);
    FUN_028d3d68(param_1,4,&local_c0);
    uVar12 = *param_1;
    uVar10 = param_1[1];
    if (0xb < uVar12) {
      uVar12 = 0;
    }
    if (0xb < uVar10) {
      uVar10 = 0;
    }
    param_1[0x11] = uVar12;
    param_1[0x12] = uVar10;
    uVar12 = param_1[2];
    uVar10 = param_1[3];
    if (0xb < uVar12) {
      uVar12 = 0;
    }
    if (0xb < uVar10) {
      uVar10 = 0;
    }
    param_1[0x13] = uVar12;
    param_1[0x14] = uVar10;
    uVar12 = param_1[4];
    uVar10 = param_1[5];
    if (0xb < uVar12) {
      uVar12 = 0;
    }
    if (0xb < uVar10) {
      uVar10 = 0;
    }
    param_1[0x15] = uVar12;
    param_1[0x16] = uVar10;
    uVar12 = param_1[6];
    if (0xb < uVar12) {
      uVar12 = 0;
    }
    param_1[0x17] = uVar12;
  }
  uVar36 = *puVar1;
  iVar9 = (int)(short)uVar36;
  local_120 = uVar36 >> 0x10;
  uStack_118 = uVar36 >> 0x18;
  cVar2 = (char)(uVar36 >> 0x10);
  cVar3 = (char)(uVar36 >> 0x18);
  local_90 = uVar36;
  uVar8 = nn::time::GetDayOfWeek(iVar9,(int)cVar2,(int)cVar3);
  local_b8 = CONCAT44(local_b8._4_4_,uVar8);
  iVar11 = FUN_0252d29c();
  uVar12 = FUN_00873540(*puVar26,&local_90,1,1);
  local_88 = puVar35 + 0x10;
  local_80 = "TodayCreateVillage";
  uVar17 = FUN_0273f0a0(&local_88);
  if (iVar11 != -1) {
    FUN_028d4190(uVar17,puVar1);
  }
  cVar4 = (char)(uVar36 >> 0x20);
  if (((char)param_2[5] == '\0') && (*param_2 == 0)) {
    local_88 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "GrowUpAfterPatch1_5";
    uVar20 = FUN_0273f0a0(&local_88);
    if ((uVar20 & 1) == 0) goto LAB_028cf320;
  }
  else {
LAB_028cf320:
    puVar34 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "CommuneSloOpenToday";
    local_88 = puVar34;
    uVar10 = FUN_0273f0a0(&local_88);
    if (((uVar12 | (uint)uVar17) & 1) == 0) {
      local_80 = "FirstLive";
      uVar23 = uVar36 & 0xffffffff;
      uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
      uVar20 = local_120;
      uVar24 = uStack_118;
      local_b0 = (undefined *)uVar36;
      local_88 = puVar34;
      if (cVar4 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar20 = uVar23 >> 0x10;
        uVar24 = uVar23 >> 0x18;
        local_b0 = (undefined *)uVar23;
      }
      uVar32 = (ulong)local_b0 >> 0x30;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0 = (undefined *)(CONCAT26((short)uVar32,(uint6)local_b0) & 0xff00ffffffffffff);
      uVar20 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
      if ((uVar20 & 1) == 0) {
        uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
        uVar23 = uVar36 & 0xffffffff;
        local_88 = PTR_DAT_04bb2020 + 0x10;
        local_80 = "BirthdayLive";
        uVar20 = local_120;
        uVar24 = uStack_118;
        local_b0 = (undefined *)uVar36;
        if (cVar4 < '\x05') {
          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
          local_a0 = (undefined *)(lVar25 + -0x15180);
          uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          uVar20 = uVar23 >> 0x10;
          uVar24 = uVar23 >> 0x18;
          local_b0 = (undefined *)uVar23;
        }
        uVar32 = (ulong)local_b0;
        local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
        local_b0._7_1_ = SUB81(uVar32,7);
        local_b0._0_7_ = (uint7)(uint6)local_b0;
        uVar20 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
        if ((uVar20 & 1) == 0) {
          uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
          uVar23 = uVar36 & 0xffffffff;
          local_88 = PTR_DAT_04bb2020 + 0x10;
          local_80 = "NormalLive";
          uVar20 = local_120;
          uVar24 = uStack_118;
          local_b0 = (undefined *)uVar36;
          if (cVar4 < '\x05') {
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_a0 = (undefined *)(lVar25 + -0x15180);
            uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
            uVar20 = uVar23 >> 0x10;
            uVar24 = uVar23 >> 0x18;
            local_b0 = (undefined *)uVar23;
          }
          uVar32 = (ulong)local_b0;
          local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
          local_b0._7_1_ = SUB81(uVar32,7);
          local_b0._0_7_ = (uint7)(uint6)local_b0;
          uVar13 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
          if (((uVar10 | uVar13) & 1) == 0) {
            puVar34 = PTR_DAT_04bb2020 + 0x10;
            local_80 = "PeddlingAvailableSlo";
            local_88 = puVar34;
            uVar20 = FUN_0273f0a0(&local_88);
            if ((uVar20 & 1) != 0) {
              local_98 = "HalloweenSloVisitYear";
              local_a0 = puVar34;
              iVar11 = FUN_0273ea30(&local_a0);
              if (iVar11 != iVar9) {
                puVar34 = PTR_DAT_04bb2020 + 0x10;
                local_80 = "Halloween";
                local_88 = puVar34;
                uVar20 = FUN_0087b568(*(undefined8 *)PTR_DAT_04bb32f0,&local_88,&local_90,1,1);
                if ((uVar20 & 1) != 0) {
                  FUN_028d4124(param_1,local_b8 & 0xffffffff,9);
                  local_80 = "HalloweenSloVisitYear";
                  local_88 = puVar34;
                  FUN_0273f3c4(&local_88,iVar9);
                  local_80 = "HalloweenSloVisitToday";
                  local_88 = puVar34;
                  FUN_0273f3c4(&local_88,1);
                }
              }
            }
          }
        }
      }
    }
  }
  puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
  puVar34 = PTR_DAT_04bb2020;
  if (((char)param_2[5] != '\0') || (*param_2 != 0)) {
    puVar35 = PTR_DAT_04bb2020 + 0x10;
    local_80 = "NpcTidyVisitControlFlags";
    local_88 = puVar35;
    iVar11 = FUN_0273ea30(&local_88);
    local_80 = "TkkFirstLive";
    local_88 = puVar35;
    uVar20 = FUN_0273f0a0(&local_88);
    if ((uVar20 & 1) == 0) {
      if (iVar11 == 0) {
        uVar31 = 2;
        local_80 = "NpcTidyVisitControlFlags";
LAB_028cf6b0:
        local_88 = puVar34 + 0x10;
        FUN_0273f3c4(&local_88,uVar31);
      }
    }
    else {
      local_80 = "ReserveVisitNpcTidy";
      local_88 = puVar35;
      iVar14 = FUN_0273ea30(&local_88);
      if (iVar14 != 1) {
        local_a0 = (undefined *)((ulong)local_a0 & 0xffffffff00000000);
        local_88 = puVar34 + 0x10;
        local_80 = "NpcTidyVisitType";
        FUN_0273f3c4(&local_88);
        local_80 = "UnlockCallNpcTidy";
        local_88 = puVar34 + 0x10;
        uVar20 = FUN_0273f0a0(&local_88);
        if ((iVar11 == 0) && ((uVar20 & 1) == 0)) {
          local_80 = "ReserveVisitNpcTidy";
          local_88 = puVar34 + 0x10;
          FUN_0273f3c4(&local_88,1);
          local_a0 = (undefined *)CONCAT44(local_a0._4_4_,1);
          local_80 = "NpcTidyVisitType";
          local_88 = puVar34 + 0x10;
          FUN_0273f3c4(&local_88);
          puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
        }
        else {
          local_a0 = (undefined *)*puVar1;
          local_b0 = (undefined *)param_2[3];
          uVar10 = FUN_00a82474(&local_a0,&local_b0);
          local_80 = "UnlockCallNpcTidy";
          local_88 = puVar34 + 0x10;
          uVar20 = FUN_0273f0a0(&local_88);
          if (((int)uVar10 < 0x1e) || ((uVar20 & 1) == 0)) {
            local_88 = puVar34 + 0x10;
            uVar10 = iVar11 - (uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
            local_80 = "NpcTidyVisitControlFlags";
            FUN_0273f3c4(&local_88,uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU));
            puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
            if ((int)uVar10 < 1) {
              uVar31 = 1;
              local_80 = "ReserveVisitNpcTidy";
              goto LAB_028cf6b0;
            }
          }
          else {
            local_80 = "ReserveVisitNpcTidy";
            local_88 = puVar34 + 0x10;
            FUN_0273f3c4(&local_88,1);
            local_70 = CONCAT44(local_70._4_4_,3);
            local_80 = "NpcTidyVisitType";
            local_88 = puVar34 + 0x10;
            FUN_0273f3c4(&local_88);
            puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
          }
        }
      }
    }
    param_1[0x24] = 0;
    param_1[0x1e] = 0;
    param_1[0x1f] = 0;
    param_1[0x20] = 0;
    param_1[0x21] = 0;
    param_1[0x22] = 0;
    param_1[0x23] = 0;
    if ((uVar12 & 1) == 0) {
      uVar31 = *puVar26;
      local_88 = puVar34 + 0x10;
      uVar23 = uVar36 & 0xffffffff;
      local_80 = "BirthdayLive";
      uVar20 = local_120;
      uVar24 = uStack_118;
      local_b0 = (undefined *)uVar36;
      if (cVar4 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar20 = uVar23 >> 0x10;
        uVar24 = uVar23 >> 0x18;
        local_b0 = (undefined *)uVar23;
      }
      uVar32 = (ulong)local_b0 >> 0x30;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0 = (undefined *)(CONCAT26((short)uVar32,(uint6)local_b0) & 0xff00ffffffffffff);
      uVar20 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
      if ((uVar20 & 1) == 0) {
        uVar31 = *puVar26;
        local_88 = puVar34 + 0x10;
        uVar23 = uVar36 & 0xffffffff;
        local_80 = "NormalLive";
        uVar20 = local_120;
        uVar24 = uStack_118;
        local_b0 = (undefined *)uVar36;
        if (cVar4 < '\x05') {
          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
          local_a0 = (undefined *)(lVar25 + -0x15180);
          uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          uVar20 = uVar23 >> 0x10;
          uVar24 = uVar23 >> 0x18;
          local_b0 = (undefined *)uVar23;
        }
        uVar32 = (ulong)local_b0 >> 0x30;
        local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
        local_b0 = (undefined *)(CONCAT26((short)uVar32,(uint6)local_b0) & 0xff00ffffffffffff);
        uVar20 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
        if ((uVar20 & 1) == 0) {
          local_80 = "FoxAndShipReserveVer2";
          local_88 = puVar34 + 0x10;
          uVar20 = FUN_0273f0a0(&local_88);
          if ((uVar20 & 1) != 0) {
            local_98 = "VillageExtensionLevel3";
            local_a0 = puVar34 + 0x10;
            uVar20 = FUN_0273f0a0(&local_a0);
            if ((uVar20 & 1) != 0) {
              puVar35 = puVar34 + 0x10;
              local_a8 = "Museum3BuiltToday";
              local_b0 = puVar35;
              uVar20 = FUN_0273f0a0(&local_b0);
              if ((uVar20 & 1) == 0) {
                local_80 = "FoxPreVisitToday";
                local_88 = puVar35;
                FUN_0273f3c4(&local_88,1);
                local_80 = "FoxPreVisit2Today";
                local_88 = puVar35;
                FUN_0273f3c4(&local_88,1);
                puVar19 = param_1 + 0x18;
                if (*param_1 == 10) {
                  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
                  if (*param_1 != 0) {
                    uVar10 = *param_1;
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  *param_1 = 0;
                }
                if (param_1[1] == 10) {
                  local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
                  if (param_1[1] != 0) {
                    uVar10 = param_1[1];
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  param_1[1] = 0;
                }
                if (param_1[2] == 10) {
                  local_88 = (undefined *)CONCAT44(local_88._4_4_,2);
                  if (param_1[2] != 0) {
                    uVar10 = param_1[2];
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  param_1[2] = 0;
                }
                if (param_1[3] == 10) {
                  local_88 = (undefined *)CONCAT44(local_88._4_4_,3);
                  if (param_1[3] != 0) {
                    uVar10 = param_1[3];
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  param_1[3] = 0;
                }
                if (param_1[4] == 10) {
                  local_88 = (undefined *)CONCAT44(local_88._4_4_,4);
                  if (param_1[4] != 0) {
                    uVar10 = param_1[4];
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  param_1[4] = 0;
                }
                if (param_1[5] == 10) {
                  local_88 = (undefined *)CONCAT44(local_88._4_4_,5);
                  if (param_1[5] != 0) {
                    uVar10 = param_1[5];
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  param_1[5] = 0;
                }
                if (param_1[6] == 10) {
                  local_88 = (undefined *)CONCAT44(local_88._4_4_,6);
                  if (param_1[6] != 0) {
                    uVar10 = param_1[6];
                    if (0xb < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                    if (0xd < uVar10) {
                      puVar28 = puVar19;
                    }
                    *(undefined1 *)puVar28 = 1;
                  }
                  param_1[6] = 0;
                }
                uVar20 = local_b8 & 0xffffffff;
                if (6 < (uint)local_b8) {
                  uVar20 = 0;
                }
                param_1[uVar20] = 10;
                lVar27 = FUN_0264d580();
                lVar25 = lVar27 + 0x1b9000;
                local_78 = local_78 & 0xffffffffffffff00;
                local_80 = (char *)lVar25;
                if (*(long *)(lVar27 + 0x1b9028) == 0) {
                  uVar7 = 0;
                }
                else {
                  puVar21 = *(undefined8 **)(*(long *)(lVar27 + 0x1b9028) + 0x10);
                  uVar7 = 0;
                  if (puVar21 != (undefined8 *)0x0) {
                    uVar7 = (**(code **)*puVar21)();
                  }
                }
                local_78 = CONCAT62(local_78._2_6_,CONCAT11(uVar7,(undefined1)local_78)) &
                           0xffffffffffff01ff;
                local_88 = PTR_DAT_04bb6b50 + 0x10;
                FUN_02640280(lVar25,0x1ac);
                FUN_02872050(*(long *)(lVar27 + 0x1b9010) + *(long *)(lVar27 + 0x1b9008));
                FUN_02640184(&local_88);
              }
            }
          }
          puVar35 = puVar34 + 0x10;
          local_80 = "FoxAndShipReserve";
          local_88 = puVar35;
          uVar20 = FUN_0273f0a0(&local_88);
          if ((uVar20 & 1) != 0) {
            local_80 = "FoxPreVisitToday";
            local_88 = puVar35;
            FUN_0273f3c4(&local_88,1);
            local_80 = "FoxPreVisit2Today";
            local_88 = puVar35;
            FUN_0273f3c4(&local_88,1);
            puVar19 = param_1 + 0x18;
            if (*param_1 == 10) {
              if (*param_1 != 0) {
                uVar10 = *param_1;
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              *param_1 = 0;
            }
            if (param_1[1] == 10) {
              if (param_1[1] != 0) {
                uVar10 = param_1[1];
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              param_1[1] = 0;
            }
            if (param_1[2] == 10) {
              if (param_1[2] != 0) {
                uVar10 = param_1[2];
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              param_1[2] = 0;
            }
            if (param_1[3] == 10) {
              if (param_1[3] != 0) {
                uVar10 = param_1[3];
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              param_1[3] = 0;
            }
            if (param_1[4] == 10) {
              if (param_1[4] != 0) {
                uVar10 = param_1[4];
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              param_1[4] = 0;
            }
            if (param_1[5] == 10) {
              if (param_1[5] != 0) {
                uVar10 = param_1[5];
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              param_1[5] = 0;
            }
            if (param_1[6] == 10) {
              if (param_1[6] != 0) {
                uVar10 = param_1[6];
                if (0xb < uVar10) {
                  uVar10 = 0;
                }
                local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                puVar28 = (uint *)((long)puVar19 + (ulong)uVar10);
                if (0xd < uVar10) {
                  puVar28 = puVar19;
                }
                *(undefined1 *)puVar28 = 1;
              }
              param_1[6] = 0;
            }
            uVar20 = local_b8 & 0xffffffff;
            if (6 < (uint)local_b8) {
              uVar20 = 0;
            }
            param_1[uVar20] = 10;
          }
          local_80 = "FoxPreVisitReserve";
          local_88 = puVar35;
          uVar20 = FUN_0273f0a0(&local_88);
          if ((uVar20 & 1) == 0) {
            uVar20 = local_b8 & 0xffffffff;
            if (6 < (uint)local_b8) {
              uVar20 = 0;
            }
            if (param_1[uVar20] == 10) {
              local_80 = "Museum3Built";
              local_88 = puVar34 + 0x10;
              uVar20 = FUN_0273f0a0(&local_88);
              if ((uVar20 & 1) != 0) {
                local_98 = "FoxMovedToMarket";
                local_a0 = puVar34 + 0x10;
                uVar20 = FUN_0273f0a0(&local_a0);
                if ((uVar20 & 1) != 0) goto LAB_028d014c;
              }
              local_80 = "FoxPreVisitToday";
              local_88 = puVar34 + 0x10;
              FUN_0273f3c4(&local_88,1);
              local_80 = "FoxPreVisit2Today";
              local_88 = puVar34 + 0x10;
              FUN_0273f3c4(&local_88,1);
            }
          }
          else {
            local_80 = "FoxPreVisitToday";
            local_88 = puVar34 + 0x10;
            FUN_0273f3c4(&local_88,1);
            local_80 = "FoxPreVisit1Today";
            local_88 = puVar34 + 0x10;
            FUN_0273f3c4(&local_88,1);
            local_88 = (undefined *)(local_b8 & 0xffffffff);
            puVar35 = local_88;
            if (6 < (uint)local_b8) {
              puVar35 = (undefined *)0x0;
            }
            if (param_1[(long)puVar35] != 0) {
              uVar20 = local_b8 & 0xffffffff;
              if (6 < (uint)local_b8) {
                uVar20 = 0;
              }
              uVar10 = param_1[uVar20];
              if (0xb < uVar10) {
                uVar10 = 0;
              }
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
              puVar19 = (uint *)((long)(param_1 + 0x18) + (ulong)uVar10);
              if (0xd < uVar10) {
                puVar19 = param_1 + 0x18;
              }
              *(undefined1 *)puVar19 = 1;
            }
            if (6 < (uint)local_b8) {
              local_88 = (undefined *)0x0;
            }
            param_1[(long)local_88] = 10;
            puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
          }
        }
      }
    }
LAB_028d014c:
    puVar35 = puVar34 + 0x10;
    local_80 = "ReserveVisitNpcTidy";
    local_88 = puVar35;
    iVar11 = FUN_0273ea30(&local_88);
    if ((uVar12 & 1) == 0 && iVar11 == 1) {
      uVar31 = *puVar26;
      uVar23 = uVar36 & 0xffffffff;
      local_80 = "FirstLive";
      uVar20 = local_120;
      uVar24 = uStack_118;
      local_b0 = (undefined *)uVar36;
      local_88 = puVar35;
      if (cVar4 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar20 = uVar23 >> 0x10;
        uVar24 = uVar23 >> 0x18;
        local_b0 = (undefined *)uVar23;
      }
      uVar32 = (ulong)local_b0 >> 0x30;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0 = (undefined *)(CONCAT26((short)uVar32,(uint6)local_b0) & 0xff00ffffffffffff);
      uVar20 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
      if ((uVar20 & 1) == 0) {
        puVar35 = puVar34 + 0x10;
        local_80 = "ReserveVisitNpcTidy";
        local_88 = puVar35;
        FUN_0273f3c4(&local_88,0);
        local_80 = "IsVisitNpcTidyToday";
        local_88 = puVar35;
        FUN_0273f3c4(&local_88,1);
        local_80 = "UnlockCallNpcTidy";
        local_88 = puVar35;
        uVar20 = FUN_0273f0a0(&local_88);
        if ((uVar20 & 1) == 0) {
          local_80 = "NpcTidyVisitControlFlags";
          local_88 = puVar35;
          FUN_0273f3c4(&local_88,0);
          uVar10 = 1;
        }
        else {
          FUN_0220c4a0();
          local_80 = "NpcTidyVisitType";
          local_88 = puVar35;
          iVar11 = FUN_0273ea30(&local_88);
          if (iVar11 != 0) goto LAB_028d0290;
          uVar10 = 2;
        }
        local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
        if (uVar10 < 4) {
          local_88 = puVar34 + 0x10;
          local_80 = "NpcTidyVisitType";
          FUN_0273f3c4(&local_88);
        }
      }
    }
LAB_028d0290:
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    if (lVar25 == 0) {
LAB_028d02e8:
      lVar25 = 0;
    }
    else {
      puVar26 = *(undefined8 **)(lVar25 + 0x10);
      if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
        lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
        lVar25 = 0;
        if (lVar27 != 0) {
          lVar25 = lVar27 + 0x70;
        }
      }
      else {
        if (puVar26 == (undefined8 *)0x0) goto LAB_028d02e8;
        lVar25 = 0;
        if ((long *)puVar26[0x26] != (long *)0x0) {
          lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
        }
      }
    }
    if ((*(long **)(lVar25 + 0x1a0b70) == (long *)0x0) ||
       (puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1a0b70), puVar26 == (undefined8 *)0x0)) {
      uVar20 = 0;
    }
    else {
      uVar20 = (**(code **)*puVar26)();
      uVar20 = uVar20 & 0xffffffff;
    }
    uVar10 = *(uint *)(*(long *)(lVar25 + 0x1a0b58) + *(long *)(lVar25 + 0x1a0b50));
    if (3 < uVar10) {
      uVar10 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar10);
    if ((int)uVar10 < 2) {
      if ((((uVar20 & 1) != 0) && (*(long *)(lVar25 + 0x1a0b70) != 0)) &&
         (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0b70) + 8), puVar26 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar26)();
      }
      bVar6 = false;
    }
    else {
      iVar9 = nn::time::GetDayOfWeek(iVar9,(int)cVar2,(int)cVar3);
      bVar6 = iVar9 == 0;
      if ((((uVar20 & 1) != 0) && (*(long *)(lVar25 + 0x1a0b70) != 0)) &&
         (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0b70) + 8), puVar26 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar26)();
      }
    }
    puVar35 = PTR_DAT_04bb32f0;
    lVar25 = *(long *)PTR_DAT_04bb27d0;
    if (((lVar25 == 0) || (*(long *)(lVar25 + 0x28) == 0)) || (*(int *)(lVar25 + 0x80) != 1)) {
      uVar20 = local_b8 & 0xffffffff;
      if (6 < (uint)local_b8) {
        uVar20 = 0;
      }
      uVar10 = param_1[uVar20];
      if (0xb < uVar10) {
        uVar10 = 0;
      }
    }
    else {
      uVar10 = 0;
    }
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar10);
    uVar13 = 1;
    switch(uVar10) {
    case 1:
    case 4:
    case 10:
    case 0xb:
      break;
    default:
      local_88 = puVar34 + 0x10;
      uVar23 = uVar36 & 0xffffffff;
      uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_80 = "BirthdayLive";
      uVar20 = local_120;
      uVar24 = uStack_118;
      local_b0 = (undefined *)uVar36;
      if (cVar4 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar23 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar20 = uVar23 >> 0x10;
        uVar24 = uVar23 >> 0x18;
        local_b0 = (undefined *)uVar23;
      }
      uVar32 = (ulong)local_b0 >> 0x30;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0 = (undefined *)(CONCAT26((short)uVar32,(uint6)local_b0) & 0xff00ffffffffffff);
      uVar20 = FUN_00879dd0(uVar31,&local_88,uVar23,uVar20,uVar24,0);
      uVar13 = 0;
      if ((uVar20 & 1) == 0) {
        uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
        local_88 = puVar34 + 0x10;
        local_80 = "NormalLive";
        local_b0 = (undefined *)uVar36;
        if (cVar4 < '\x05') {
          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
          local_a0 = (undefined *)(lVar25 + -0x15180);
          local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          uVar36 = (ulong)local_b0 & 0xffffffff;
          local_120 = (ulong)local_b0 >> 0x10;
          uStack_118 = (ulong)local_b0 >> 0x18;
        }
        uVar20 = (ulong)local_b0;
        local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
        local_b0._7_1_ = SUB81(uVar20,7);
        local_b0._0_7_ = (uint7)(uint6)local_b0;
        uVar13 = FUN_00879dd0(uVar31,&local_88,uVar36 & 0xffffffff,local_120,uStack_118,0);
        uVar13 = uVar13 ^ 1;
      }
      break;
    case 3:
      local_88 = puVar34 + 0x10;
      local_80 = "VillageDaysCount";
      iVar9 = FUN_0273ea30(&local_88);
      if (iVar9 < 3) goto LAB_028d0764;
      iVar9 = FUN_0266ca90(0);
      uVar13 = 1;
      if (iVar9 < 2) {
        local_88._0_4_ = iVar9;
        local_88._0_4_ = FUN_0266ca90(1);
LAB_028d0460:
        uVar13 = 1;
        if ((int)(uint)local_88 < 2) {
          local_88._0_4_ = FUN_0266ca90(2);
          if (((((int)(uint)local_88 < 2) &&
               (local_88._0_4_ = FUN_0266ca90(3), (int)(uint)local_88 < 2)) &&
              (local_88._0_4_ = FUN_0266ca90(4), (int)(uint)local_88 < 2)) &&
             (local_88._0_4_ = FUN_0266ca90(5), (int)(uint)local_88 < 2)) {
            iVar9 = FUN_0266ca90(6);
            local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar9);
            if (iVar9 < 2) {
              iVar9 = FUN_0266ca90(7);
              uVar13 = (uint)(1 < iVar9);
              break;
            }
          }
          uVar13 = 1;
        }
      }
      break;
    case 5:
      lVar25 = *(long *)PTR_DAT_04bb46b0;
      if (lVar25 == 0) {
        lVar25 = 0;
      }
      else {
        puVar26 = *(undefined8 **)(lVar25 + 0x10);
        if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
          lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
          lVar25 = 0;
          if (lVar27 != 0) {
            lVar25 = lVar27 + 0x70;
          }
        }
        else if (puVar26 == (undefined8 *)0x0) {
          lVar25 = 0;
        }
        else {
          lVar25 = 0;
          if ((long *)puVar26[0x26] != (long *)0x0) {
            lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
          }
        }
      }
      if ((*(long **)(lVar25 + 0x1a0da0) == (long *)0x0) ||
         (puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1a0da0), puVar26 == (undefined8 *)0x0)) {
        uVar20 = 0;
      }
      else {
        uVar20 = (**(code **)*puVar26)();
        uVar20 = uVar20 & 0xffffffff;
      }
      local_a0 = puVar34 + 0x10;
      local_98 = "EnableHghStayField";
      uVar24 = FUN_0273f0a0(&local_a0);
      if ((uVar24 & 1) == 0) {
LAB_028d0950:
        uVar13 = 0;
      }
      else {
        uVar10 = *(uint *)(*(long *)(lVar25 + 0x1a0d88) + *(long *)(lVar25 + 0x1a0d80));
        if (2 < uVar10) {
          uVar10 = 0;
        }
        local_c0 = CONCAT44(local_c0._4_4_,uVar10);
        if (uVar10 == 2) goto LAB_028d0950;
        uVar31 = *(undefined8 *)puVar35;
        local_88 = puVar34 + 0x10;
        local_80 = "BirthdayLive";
        local_70 = uVar36;
        if (cVar4 < '\x05') {
          lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_70);
          local_b0 = (undefined *)(lVar27 + -0x15180);
          local_70 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_b0);
          uVar36 = local_70 & 0xffffffff;
          local_120 = local_70 >> 0x10;
          uStack_118 = local_70 >> 0x18;
        }
        uVar24 = local_70 >> 0x30;
        local_70._0_6_ = CONCAT24(5,(undefined4)local_70);
        local_70 = CONCAT26((short)uVar24,(undefined6)local_70) & 0xff00ffffffffffff;
        uVar36 = FUN_00879dd0(uVar31,&local_88,uVar36 & 0xffffffff,local_120,uStack_118,0);
        if ((uVar36 & 1) != 0) goto LAB_028d0950;
        local_88 = puVar34 + 0x10;
        local_80 = "NormalLive";
        uVar13 = FUN_0087322c(*(undefined8 *)puVar35,&local_88,&local_90,1,1);
        uVar13 = uVar13 ^ 1;
      }
      if ((((uVar20 & 1) != 0) && (*(long *)(lVar25 + 0x1a0da0) != 0)) &&
         (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0da0) + 8), puVar26 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar26)();
      }
      break;
    case 9:
      local_88 = puVar34 + 0x10;
      local_80 = "VillageDaysCount";
      iVar9 = FUN_0273ea30(&local_88);
      if (2 < iVar9) {
        lVar25 = *(long *)PTR_DAT_04bb46b0;
        if (lVar25 == 0) {
LAB_028d06f4:
          lVar25 = 0;
        }
        else {
          puVar26 = *(undefined8 **)(lVar25 + 0x10);
          if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
            lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
            lVar25 = 0;
            if (lVar27 != 0) {
              lVar25 = lVar27 + 0x70;
            }
          }
          else {
            if (puVar26 == (undefined8 *)0x0) goto LAB_028d06f4;
            lVar25 = 0;
            if ((long *)puVar26[0x26] != (long *)0x0) {
              lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
            }
          }
        }
        if (*(long **)(lVar25 + 0x1a0b70) == (long *)0x0) {
          uVar20 = 0;
        }
        else {
          puVar26 = (undefined8 *)**(long **)(lVar25 + 0x1a0b70);
          uVar20 = 0;
          if (puVar26 != (undefined8 *)0x0) {
            uVar20 = (**(code **)*puVar26)();
          }
        }
        uVar10 = *(uint *)(*(long *)(lVar25 + 0x1a0b58) + *(long *)(lVar25 + 0x1a0b50));
        if (3 < uVar10) {
          uVar10 = 0;
        }
        local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar10);
        if ((((uVar20 & 1) != 0) && (*(long *)(lVar25 + 0x1a0b70) != 0)) &&
           (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a0b70) + 8),
           puVar26 != (undefined8 *)0x0)) {
          (**(code **)*puVar26)();
        }
        if (1 < (int)uVar10) {
          local_88 = puVar34 + 0x10;
          uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
          local_80 = "BirthdayLive";
          local_b0 = (undefined *)uVar36;
          if (cVar4 < '\x05') {
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_a0 = (undefined *)(lVar25 + -0x15180);
            local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
            uVar36 = (ulong)local_b0 & 0xffffffff;
            local_120 = (ulong)local_b0 >> 0x10;
            uStack_118 = (ulong)local_b0 >> 0x18;
          }
          uVar20 = (ulong)local_b0 >> 0x30;
          local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
          local_b0 = (undefined *)(CONCAT26((short)uVar20,(uint6)local_b0) & 0xff00ffffffffffff);
          uVar36 = FUN_00879dd0(uVar31,&local_88,uVar36 & 0xffffffff,local_120,uStack_118,0);
          uVar13 = 0;
          if ((uVar36 & 1) == 0) {
            local_88 = puVar34 + 0x10;
            local_80 = "NormalLive";
            uVar36 = FUN_0087322c(*(undefined8 *)PTR_DAT_04bb32f0,&local_88,&local_90,1,1);
            if ((uVar36 & 1) != 0) goto LAB_028d0764;
            iVar9 = FUN_0266ca90(0);
            uVar13 = 1;
            if (iVar9 < 2) {
              local_88._0_4_ = iVar9;
              local_88._0_4_ = FUN_0266ca90(1);
              goto LAB_028d0460;
            }
          }
          break;
        }
      }
LAB_028d0764:
      uVar13 = 0;
    }
    puVar34 = puVar34 + 0x10;
    local_80 = "CommuneSloOpenToday";
    uVar10 = uVar12 | (uint)uVar17;
    local_88 = puVar34;
    uVar15 = FUN_0273f0a0(&local_88);
    uVar36 = local_90;
    if ((uVar10 & 1) == 0) {
      uVar32 = local_90 >> 0x10;
      uVar33 = local_90 >> 0x18;
      uVar20 = local_90 & 0xffffffff;
      local_b0 = (undefined *)local_90;
      uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
      cVar2 = (char)(local_90 >> 0x20);
      uVar23 = uVar33 & 0xffffffff;
      uVar24 = uVar32 & 0xffffffff;
      local_80 = "FirstLive";
      local_88 = puVar34;
      if (cVar2 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar24 = uVar20 >> 0x10;
        uVar23 = uVar20 >> 0x18;
        local_b0 = (undefined *)uVar20;
      }
      uVar5 = (ulong)local_b0 >> 0x30;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0 = (undefined *)(CONCAT26((short)uVar5,(uint6)local_b0) & 0xff00ffffffffffff);
      uVar20 = FUN_00879dd0(uVar31,&local_88,uVar20,uVar24,uVar23,0);
      if ((uVar20 & 1) != 0) goto LAB_028d0c3c;
      uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
      uVar23 = uVar33 & 0xffffffff;
      uVar24 = uVar32 & 0xffffffff;
      uVar20 = uVar36 & 0xffffffff;
      local_b0 = (undefined *)uVar36;
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "BirthdayLive";
      if (cVar2 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar24 = uVar20 >> 0x10;
        uVar23 = uVar20 >> 0x18;
        local_b0 = (undefined *)uVar20;
      }
      uVar5 = (ulong)local_b0;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0._7_1_ = SUB81(uVar5,7);
      local_b0._0_7_ = (uint7)(uint6)local_b0;
      uVar20 = FUN_00879dd0(uVar31,&local_88,uVar20,uVar24,uVar23,0);
      if ((uVar20 & 1) != 0) goto LAB_028d0c3c;
      uVar20 = uVar36 & 0xffffffff;
      uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
      local_b0 = (undefined *)uVar36;
      local_88 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "NormalLive";
      if (cVar2 < '\x05') {
        lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
        local_a0 = (undefined *)(lVar25 + -0x15180);
        uVar20 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
        uVar32 = uVar20 >> 0x10;
        uVar33 = uVar20 >> 0x18;
        local_b0 = (undefined *)uVar20;
      }
      uVar24 = (ulong)local_b0;
      local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
      local_b0._7_1_ = SUB81(uVar24,7);
      local_b0._0_7_ = (uint7)(uint6)local_b0;
      uVar16 = FUN_00879dd0(uVar31,&local_88,uVar20,uVar32 & 0xffffffff,uVar33 & 0xffffffff,0);
      if (((uVar15 | uVar16) & 1) != 0) goto LAB_028d0c3c;
      puVar34 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "PeddlingAvailableSlo";
      local_88 = puVar34;
      uVar20 = FUN_0273f0a0(&local_88);
      if ((uVar20 & 1) == 0) goto LAB_028d0c3c;
      local_98 = "HalloweenSloVisitYear";
      local_a0 = puVar34;
      iVar9 = FUN_0273ea30(&local_a0);
      if ((iVar9 == (short)uVar36) ||
         (uVar20 = FUN_028d430c(*(undefined8 *)PTR_DAT_04bb32f0,&local_90), (uVar20 & 1) == 0))
      goto LAB_028d0c3c;
      FUN_028d4124(param_1,local_b8 & 0xffffffff,9);
      puVar34 = PTR_DAT_04bb2020 + 0x10;
      local_80 = "HalloweenSloVisitYear";
      local_88 = puVar34;
      FUN_0273f3c4(&local_88,(int)(short)uVar36);
      local_80 = "HalloweenSloVisitToday";
      local_88 = puVar34;
      FUN_0273f3c4(&local_88,1);
      puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
    }
    else {
LAB_028d0c3c:
      puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
      puVar34 = PTR_DAT_04bb2020;
      if ((uVar13 & (uVar10 ^ 1) & 1) == 0) {
        lVar25 = *(long *)PTR_DAT_04bb46b0;
        if (lVar25 == 0) {
          lVar25 = 0;
LAB_028d0c98:
          puVar34 = PTR_DAT_04bb2020;
        }
        else {
          puVar21 = *(undefined8 **)(lVar25 + 0x10);
          if ((*(byte *)(lVar25 + 0x453) & 1) == 0) {
            lVar27 = (**(code **)(*(long *)*puVar21 + 0x38))();
            lVar25 = 0;
            if (lVar27 != 0) {
              lVar25 = lVar27 + 0x70;
            }
            goto LAB_028d0c98;
          }
          if (puVar21 == (undefined8 *)0x0) {
            lVar25 = 0;
          }
          else {
            lVar25 = 0;
            if ((long *)puVar21[0x26] != (long *)0x0) {
              lVar25 = (**(code **)(*(long *)puVar21[0x26] + 0x38))();
            }
          }
        }
        if ((*(long **)(lVar25 + 0x1bf1b8) == (long *)0x0) ||
           (puVar21 = (undefined8 *)**(long **)(lVar25 + 0x1bf1b8), puVar21 == (undefined8 *)0x0)) {
          uVar36 = 0;
          if ((uVar17 & 1) == 0) goto LAB_028d0ce0;
LAB_028d0cec:
          local_88 = (undefined *)CONCAT44(local_88._4_4_,(uint)local_b8);
          uVar17 = local_b8 & 0xffffffff;
          if (6 < (uint)local_b8) {
            uVar17 = 0;
          }
          if (param_1[uVar17] != 0) {
            uVar17 = local_b8 & 0xffffffff;
            if (6 < (uint)local_b8) {
              uVar17 = 0;
            }
            uVar10 = param_1[uVar17];
            if (0xb < uVar10) {
              uVar10 = 0;
            }
            local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
            puVar19 = (uint *)((long)(param_1 + 0x18) + (ulong)uVar10);
            if (0xd < uVar10) {
              puVar19 = param_1 + 0x18;
            }
            *(undefined1 *)puVar19 = 1;
          }
          uVar17 = local_b8 & 0xffffffff;
          if (6 < (uint)local_b8) {
            uVar17 = 0;
          }
          param_1[uVar17] = 0;
        }
        else {
          uVar36 = (**(code **)*puVar21)();
          uVar36 = uVar36 & 0xffffffff;
          if ((uVar17 & 1) != 0) goto LAB_028d0cec;
LAB_028d0ce0:
          uVar17 = local_90;
          if (((uVar15 & 1) != 0) || ((uVar12 & 1) != 0)) goto LAB_028d0cec;
          local_88 = puVar34 + 0x10;
          uVar31 = *puVar26;
          local_80 = "FirstLive";
          local_b0 = (undefined *)local_90;
          cVar2 = (char)(local_90 >> 0x20);
          if (cVar2 < '\x05') {
            lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_a0 = (undefined *)(lVar27 + -0x15180);
            local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          }
          uVar24 = (ulong)local_b0;
          uVar20 = (ulong)local_b0 >> 0x30;
          local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
          local_b0 = (undefined *)(CONCAT26((short)uVar20,(uint6)local_b0) & 0xff00ffffffffffff);
          uVar20 = FUN_00879dd0(uVar31,&local_88,uVar24,uVar24 >> 0x10,uVar24 >> 0x18,0);
          if ((uVar20 & 1) == 0) {
            local_b0 = (undefined *)uVar17;
            uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
            local_88 = puVar34 + 0x10;
            local_80 = "NormalLive";
            if (cVar2 < '\x05') {
              lVar27 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
              local_a0 = (undefined *)(lVar27 + -0x15180);
              local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
            }
            uVar17 = (ulong)local_b0;
            local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
            local_b0._7_1_ = SUB81(uVar17,7);
            local_b0._0_7_ = (uint7)(uint6)local_b0;
            uVar17 = FUN_00879dd0(uVar31,&local_88,uVar17 & 0xffffffff,uVar17 >> 0x10,uVar17 >> 0x18
                                  ,0);
            puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
            if ((uVar17 & 1) == 0) {
              local_88 = puVar34 + 0x10;
              local_80 = "BirthdayLive";
              uVar17 = FUN_0087322c(*(undefined8 *)PTR_DAT_04bb32f0,&local_88,&local_90,1,1);
              puVar35 = PTR_DAT_04bb27d0;
              if ((uVar17 & 1) == 0) {
                lVar27 = *(long *)PTR_DAT_04bb27d0;
                if (((lVar27 == 0) || (*(long *)(lVar27 + 0x28) == 0)) ||
                   (*(int *)(lVar27 + 0x80) != 1)) {
                  uVar17 = local_b8 & 0xffffffff;
                  if (6 < (uint)local_b8) {
                    uVar17 = 0;
                  }
                  if (param_1[uVar17] != 5) goto LAB_028d1824;
                  local_88 = puVar34 + 0x10;
                  local_80 = "CountTailorAfterBuild";
                  iVar9 = FUN_0273ea30(&local_88);
                  if (((iVar9 < 1) || ((uint)local_b8 == 6)) ||
                     (uVar17 = local_b8 & 0xffffffff, (uint)local_b8 == 0)) goto LAB_028d1824;
                  uVar31 = 8;
                }
                else {
LAB_028d1824:
                  local_88 = puVar34 + 0x10;
                  local_80 = "JohnnyTalkAnyPlayerFlag";
                  uVar10 = FUN_0273f0a0(&local_88);
                  if (!bVar6 && (uVar10 & 1) == 0) {
                    uVar10 = *(uint *)(*(long *)(lVar25 + 0x1bf1a0) + *(long *)(lVar25 + 0x1bf198));
                    if (5 < uVar10) {
                      uVar10 = 0;
                    }
                    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
                    if (1 < (int)uVar10) {
                      lVar27 = *(long *)puVar35;
                      if (((lVar27 == 0) || (*(long *)(lVar27 + 0x28) == 0)) ||
                         (*(int *)(lVar27 + 0x80) != 1)) {
                        uVar17 = local_b8 & 0xffffffff;
                        if (6 < (uint)local_b8) {
                          uVar17 = 0;
                        }
                        uVar10 = param_1[uVar17];
                        if (0xb < uVar10) {
                          uVar10 = 0;
                        }
                      }
                      else {
                        uVar10 = 0;
                      }
                      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar10);
                      if (uVar10 != 4) {
                        uVar31 = 1;
                        goto LAB_028d1730;
                      }
                    }
                  }
                  local_88 = puVar34 + 0x10;
                  local_80 = "JohnnyTalkAnyPlayerFlag";
                  uVar17 = FUN_0273f0a0(&local_88);
                  puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
                  if ((uVar17 & 1) == 0) goto LAB_028d1998;
                  uVar17 = local_b8 & 0xffffffff;
                  uVar20 = uVar17;
                  if (6 < (uint)local_b8) {
                    uVar20 = 0;
                  }
                  if (param_1[uVar20] != 5) {
                    uVar20 = local_b8 & 0xffffffff;
                    if (6 < (uint)local_b8) {
                      uVar20 = 0;
                    }
                    if (param_1[uVar20] != 2) {
                      uVar20 = local_b8 & 0xffffffff;
                      if (6 < (uint)local_b8) {
                        uVar20 = 0;
                      }
                      if (param_1[uVar20] != 6) {
                        uVar20 = local_b8 & 0xffffffff;
                        if (6 < (uint)local_b8) {
                          uVar20 = 0;
                        }
                        if (param_1[uVar20] != 7) {
                          uVar20 = local_b8 & 0xffffffff;
                          if (6 < (uint)local_b8) {
                            uVar20 = 0;
                          }
                          if (param_1[uVar20] != 3) {
                            uVar20 = local_b8 & 0xffffffff;
                            if (6 < (uint)local_b8) {
                              uVar20 = 0;
                            }
                            if (param_1[uVar20] != 8) {
                              uVar20 = local_b8 & 0xffffffff;
                              if (6 < (uint)local_b8) {
                                uVar20 = 0;
                              }
                              if (param_1[uVar20] != 9) {
                                uVar20 = local_b8 & 0xffffffff;
                                if (6 < (uint)local_b8) {
                                  uVar20 = 0;
                                }
                                if (param_1[uVar20] != 10) goto LAB_028d1998;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                  uVar31 = 4;
                }
              }
              else {
LAB_028d1998:
                uVar17 = local_b8 & 0xffffffff;
                uVar31 = 0;
              }
              FUN_028d4124(param_1,uVar17,uVar31);
            }
            else {
              uVar31 = 0;
LAB_028d1730:
              FUN_028d4124(param_1,(uint)local_b8,uVar31);
              puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
            }
          }
          else {
            local_88 = (undefined *)CONCAT44(local_88._4_4_,(uint)local_b8);
            uVar17 = local_b8 & 0xffffffff;
            if (6 < (uint)local_b8) {
              uVar17 = 0;
            }
            if (param_1[uVar17] != 0) {
              uVar17 = local_b8 & 0xffffffff;
              if (6 < (uint)local_b8) {
                uVar17 = 0;
              }
              uVar10 = param_1[uVar17];
              if (0xb < uVar10) {
                uVar10 = 0;
              }
              local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar10);
              puVar19 = (uint *)((long)(param_1 + 0x18) + (ulong)uVar10);
              if (0xd < uVar10) {
                puVar19 = param_1 + 0x18;
              }
              *(undefined1 *)puVar19 = 1;
            }
            uVar17 = local_b8 & 0xffffffff;
            if (6 < (uint)local_b8) {
              uVar17 = 0;
            }
            param_1[uVar17] = 0;
            puVar26 = (undefined8 *)PTR_DAT_04bb32f0;
          }
        }
        if ((((uVar36 & 1) != 0) && (*(long *)(lVar25 + 0x1bf1b8) != 0)) &&
           (puVar21 = *(undefined8 **)(*(long *)(lVar25 + 0x1bf1b8) + 8),
           puVar21 != (undefined8 *)0x0)) {
          (**(code **)*puVar21)();
        }
      }
    }
    uVar17 = local_90;
    if (param_1[0x1c] == (uint)local_b8) {
      if ((uVar12 & 1) == 0) {
        uVar31 = *puVar26;
        uVar23 = local_90 >> 0x10;
        uVar32 = local_90 >> 0x18;
        uVar36 = local_90 & 0xffffffff;
        local_b0 = (undefined *)local_90;
        local_88 = PTR_DAT_04bb2020 + 0x10;
        cVar2 = (char)(local_90 >> 0x20);
        uVar24 = uVar32 & 0xffffffff;
        uVar20 = uVar23 & 0xffffffff;
        local_80 = "FirstLive";
        if (cVar2 < '\x05') {
          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
          local_a0 = (undefined *)(lVar25 + -0x15180);
          uVar36 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          uVar20 = uVar36 >> 0x10;
          uVar24 = uVar36 >> 0x18;
          local_b0 = (undefined *)uVar36;
        }
        uVar33 = (ulong)local_b0 >> 0x30;
        local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
        local_b0 = (undefined *)(CONCAT26((short)uVar33,(uint6)local_b0) & 0xff00ffffffffffff);
        uVar36 = FUN_00879dd0(uVar31,&local_88,uVar36,uVar20,uVar24,0);
        if ((uVar36 & 1) == 0) {
          uVar31 = *puVar26;
          uVar24 = uVar32 & 0xffffffff;
          uVar20 = uVar23 & 0xffffffff;
          local_b0 = (undefined *)uVar17;
          uVar36 = uVar17 & 0xffffffff;
          local_88 = PTR_DAT_04bb2020 + 0x10;
          local_80 = "NormalLive";
          if (cVar2 < '\x05') {
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_a0 = (undefined *)(lVar25 + -0x15180);
            uVar36 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
            uVar20 = uVar36 >> 0x10;
            uVar24 = uVar36 >> 0x18;
            local_b0 = (undefined *)uVar36;
          }
          uVar33 = (ulong)local_b0;
          local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
          local_b0._7_1_ = SUB81(uVar33,7);
          local_b0._0_7_ = (uint7)(uint6)local_b0;
          uVar36 = FUN_00879dd0(uVar31,&local_88,uVar36,uVar20,uVar24,0);
          if ((uVar36 & 1) == 0) {
            uVar31 = *puVar26;
            local_b0 = (undefined *)uVar17;
            local_88 = PTR_DAT_04bb2020 + 0x10;
            local_80 = "BirthdayLive";
            if (cVar2 < '\x05') {
              lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
              local_a0 = (undefined *)(lVar25 + -0x15180);
              local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
              uVar17 = (ulong)local_b0 & 0xffffffff;
              uVar23 = (ulong)local_b0 >> 0x10;
              uVar32 = (ulong)local_b0 >> 0x18;
            }
            uVar36 = (ulong)local_b0;
            local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
            local_b0._7_1_ = SUB81(uVar36,7);
            local_b0._0_7_ = (uint7)(uint6)local_b0;
            uVar17 = FUN_00879dd0(uVar31,&local_88,uVar17 & 0xffffffff,uVar23 & 0xffffffff,
                                  uVar32 & 0xffffffff,0);
            if ((uVar17 & 1) == 0) goto LAB_028d0f50;
          }
        }
        param_1[0x1c] = 0xffffffff;
        goto LAB_028d0f50;
      }
      param_1[0x1c] = 0xffffffff;
      puVar34 = PTR_DAT_04bb2020;
      if (param_1[0x1d] != (uint)local_b8) goto LAB_028d1114;
    }
    else {
LAB_028d0f50:
      uVar17 = local_90;
      puVar34 = PTR_DAT_04bb2020;
      if (param_1[0x1d] != (uint)local_b8) goto LAB_028d1114;
      if ((uVar12 & 1) == 0) {
        local_88 = PTR_DAT_04bb2020 + 0x10;
        uVar31 = *puVar26;
        uVar23 = local_90 >> 0x10;
        uVar32 = local_90 >> 0x18;
        uVar36 = local_90 & 0xffffffff;
        local_80 = "FirstLive";
        local_b0 = (undefined *)local_90;
        cVar2 = (char)(local_90 >> 0x20);
        uVar24 = uVar32 & 0xffffffff;
        uVar20 = uVar23 & 0xffffffff;
        if (cVar2 < '\x05') {
          lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
          local_a0 = (undefined *)(lVar25 + -0x15180);
          uVar36 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
          uVar20 = uVar36 >> 0x10;
          uVar24 = uVar36 >> 0x18;
          local_b0 = (undefined *)uVar36;
        }
        uVar33 = (ulong)local_b0 >> 0x30;
        local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
        local_b0 = (undefined *)(CONCAT26((short)uVar33,(uint6)local_b0) & 0xff00ffffffffffff);
        uVar36 = FUN_00879dd0(uVar31,&local_88,uVar36,uVar20,uVar24,0);
        if ((uVar36 & 1) == 0) {
          local_b0 = (undefined *)uVar17;
          uVar24 = uVar32 & 0xffffffff;
          uVar20 = uVar23 & 0xffffffff;
          uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
          local_88 = puVar34 + 0x10;
          uVar36 = uVar17 & 0xffffffff;
          local_80 = "NormalLive";
          if (cVar2 < '\x05') {
            lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
            local_a0 = (undefined *)(lVar25 + -0x15180);
            uVar36 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
            uVar20 = uVar36 >> 0x10;
            uVar24 = uVar36 >> 0x18;
            local_b0 = (undefined *)uVar36;
          }
          uVar33 = (ulong)local_b0;
          local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
          local_b0._7_1_ = SUB81(uVar33,7);
          local_b0._0_7_ = (uint7)(uint6)local_b0;
          uVar36 = FUN_00879dd0(uVar31,&local_88,uVar36,uVar20,uVar24,0);
          if ((uVar36 & 1) == 0) {
            local_b0 = (undefined *)uVar17;
            uVar31 = *(undefined8 *)PTR_DAT_04bb32f0;
            local_88 = puVar34 + 0x10;
            local_80 = "BirthdayLive";
            if (cVar2 < '\x05') {
              lVar25 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b0);
              local_a0 = (undefined *)(lVar25 + -0x15180);
              local_b0 = (undefined *)nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a0);
              uVar17 = (ulong)local_b0 & 0xffffffff;
              uVar23 = (ulong)local_b0 >> 0x10;
              uVar32 = (ulong)local_b0 >> 0x18;
            }
            uVar36 = (ulong)local_b0;
            local_b0._0_6_ = CONCAT24(5,(undefined4)local_b0);
            local_b0._7_1_ = SUB81(uVar36,7);
            local_b0._0_7_ = (uint7)(uint6)local_b0;
            uVar17 = FUN_00879dd0(uVar31,&local_88,uVar17 & 0xffffffff,uVar23 & 0xffffffff,
                                  uVar32 & 0xffffffff,0);
            if ((uVar17 & 1) == 0) {
              local_88 = puVar34 + 0x10;
              local_80 = "RcmImmQuestComplete";
              uVar17 = FUN_0273f0a0(&local_88);
              if ((uVar17 & 1) != 0) goto LAB_028d1114;
            }
          }
        }
      }
    }
    param_1[0x1d] = 0xffffffff;
  }
LAB_028d1114:
  puVar35 = puVar34 + 0x10;
  local_80 = "FoxPreVisitToday";
  local_88 = puVar35;
  uVar17 = FUN_0273f0a0(&local_88);
  if ((uVar17 & 1) != 0) {
    local_80 = "FoxAndShipReserve";
    local_88 = puVar35;
    FUN_0273f3c4(&local_88,0);
    local_80 = "FoxPreVisitReserve";
    local_88 = puVar35;
    FUN_0273f3c4(&local_88,0);
    local_80 = "FoxAndShipReserveVer2";
    local_88 = puVar35;
    FUN_0273f3c4(&local_88,0);
  }
  uVar17 = local_b8 & 0xffffffff;
  if (6 < (uint)local_b8) {
    uVar17 = 0;
  }
  if (param_1[uVar17] == 9) {
    local_88 = puVar34 + 0x10;
    local_80 = "EarthdaySloFirstVisit";
    FUN_0273f3c4(&local_88,1);
  }
  local_80 = "EarthdaySloFirstVisit";
  local_88 = puVar34 + 0x10;
  uVar17 = FUN_0273f0a0(&local_88);
  if ((uVar17 & 1) == 0) {
    local_80 = "EarthdaySloFirstVisitToday";
    local_88 = puVar34 + 0x10;
    FUN_0273f3c4(&local_88,0);
  }
  uVar12 = nn::time::GetDayOfWeek
                     ((int)(short)param_2[2],(int)*(char *)((long)param_2 + 0x12),
                      (int)*(char *)((long)param_2 + 0x13));
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar12);
  uVar17 = (ulong)uVar12;
  if (6 < uVar12) {
    uVar17 = 0;
  }
  if (param_1[uVar17] != 8) goto LAB_028d12fc;
  puVar26 = *(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10);
  if ((*(byte *)(*(long *)PTR_DAT_04bb46b0 + 0x453) & 1) == 0) {
    lVar27 = (**(code **)(*(long *)*puVar26 + 0x38))();
    lVar25 = 0;
    if (lVar27 != 0) {
      lVar25 = lVar27 + 0x70;
    }
  }
  else if (puVar26 == (undefined8 *)0x0) {
    lVar25 = 0;
  }
  else {
    lVar25 = 0;
    if ((long *)puVar26[0x26] != (long *)0x0) {
      lVar25 = (**(code **)(*(long *)puVar26[0x26] + 0x38))();
    }
  }
  plVar18 = (long *)(lVar25 + 0x1a3550);
  lVar27 = *(long *)(lVar25 + 0x1a3570);
  if (lVar27 == 0) {
    FUN_0288aca0(*(long *)(lVar25 + 0x1a3558) + *plVar18,param_2);
    goto LAB_028d12fc;
  }
  if (*(undefined8 **)(lVar27 + 0x10) == (undefined8 *)0x0) {
    uVar17 = 0;
    plVar22 = *(long **)(lVar27 + 0x20);
joined_r0x028d158c:
    if (plVar22 != (long *)0x0) {
      local_88 = (undefined *)*plVar18;
      local_80 = *(char **)(lVar25 + 0x1a3558);
      local_78 = 0x110;
      (**(code **)(*plVar22 + 0x20))(plVar22,&local_88);
    }
  }
  else {
    uVar17 = (**(code **)**(undefined8 **)(lVar27 + 0x10))();
    uVar17 = uVar17 & 0xffffffff;
    if (*(long *)(lVar25 + 0x1a3570) != 0) {
      plVar22 = *(long **)(*(long *)(lVar25 + 0x1a3570) + 0x20);
      goto joined_r0x028d158c;
    }
  }
  FUN_0288aca0(*(long *)(lVar25 + 0x1a3558) + *plVar18,param_2);
  if ((((uVar17 & 1) != 0) && (*(long *)(lVar25 + 0x1a3570) != 0)) &&
     (puVar26 = *(undefined8 **)(*(long *)(lVar25 + 0x1a3570) + 0x18), puVar26 != (undefined8 *)0x0)
     ) {
    (**(code **)*puVar26)();
  }
LAB_028d12fc:
  FUN_028d19d8(param_1,puVar1);
  puVar35 = PTR_DAT_04bb32e8;
  local_80 = "RctInTent";
  local_88 = puVar34 + 0x10;
  FUN_0273f3c4(&local_88,*(byte *)(*(long *)PTR_DAT_04bb32e8 + 0x4064) - 0x14 < 0xfffffff1);
  if (((char)param_2[5] != '\0') || (*param_2 != 0)) {
    local_80 = "JohnnyRequirePartsNum";
    local_88 = puVar34 + 0x10;
    FUN_0273f3c4(&local_88,5);
    puVar19 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar12 = *puVar19 ^ *puVar19 << 0xb;
    uVar13 = puVar19[3];
    *puVar19 = puVar19[1];
    puVar19[1] = puVar19[2];
    uVar10 = uVar12 ^ uVar13;
    puVar19[2] = uVar13;
    puVar19[3] = uVar12 >> 8 ^ uVar13 >> 0x13 ^ uVar10;
    if (uVar10 >> 0x1e < 3) {
      uVar8 = FUN_013fe310(*(undefined8 *)PTR_DAT_04bb3d80,
                           (long)*(char *)(*(long *)puVar35 + 0x4066));
    }
    else {
      uVar8 = 3;
    }
    local_80 = "BeyRequireFishSize";
    local_88 = puVar34 + 0x10;
    FUN_0273f3c4(&local_88,uVar8);
  }
  if (((char)param_2[5] != '\0') || (0 < *param_2)) {
    puVar35 = puVar34 + 0x10;
    local_80 = "MuseumPosterTodayflagbug";
    local_88 = puVar35;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) != 0) {
      local_80 = "MuseumPosterflagbug";
      local_88 = puVar35;
      FUN_0273f3c4(&local_88,1);
    }
    local_80 = "MuseumPosterTodayflagfish";
    local_88 = puVar35;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) != 0) {
      local_88 = puVar34 + 0x10;
      local_80 = "MuseumPosterflagfish";
      FUN_0273f3c4(&local_88,1);
    }
    puVar35 = puVar34 + 0x10;
    local_80 = "MuseumPosterTodayflagsea";
    local_88 = puVar35;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) != 0) {
      local_80 = "MuseumPosterflagsea";
      local_88 = puVar35;
      FUN_0273f3c4(&local_88,1);
    }
    local_80 = "MuseumPosterTodayflagfossil";
    local_88 = puVar35;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) != 0) {
      local_88 = puVar34 + 0x10;
      local_80 = "MuseumPosterflagfossil";
      FUN_0273f3c4(&local_88,1);
    }
    local_80 = "MuseumPosterTodayflagpainting";
    local_88 = puVar34 + 0x10;
    uVar17 = FUN_0273f0a0(&local_88);
    if ((uVar17 & 1) != 0) {
      local_80 = "MuseumPosterflagpainting";
      local_88 = puVar34 + 0x10;
      FUN_0273f3c4(&local_88,1);
    }
  }
  local_80 = "HasGottenMarinesuit";
  local_88 = puVar34 + 0x10;
  uVar17 = FUN_0274e120(&local_88);
  if ((uVar17 & 1) != 0) {
    local_80 = "GulBVisitEnable";
    local_88 = puVar34 + 0x10;
    FUN_0273f3c4(&local_88,1);
  }
  return;
}

