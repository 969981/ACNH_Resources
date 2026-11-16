
void FUN_02779020(long param_1,long param_2)

{
  undefined8 *puVar1;
  byte *pbVar2;
  byte bVar3;
  undefined *puVar4;
  undefined8 *******pppppppuVar5;
  bool bVar6;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  uint uVar15;
  ulong uVar16;
  ulong uVar17;
  uint *puVar18;
  undefined8 uVar19;
  undefined8 local_e0;
  undefined8 *local_d8;
  undefined8 *******local_d0;
  undefined8 *******pppppppuStack_c8;
  undefined8 ******local_c0;
  undefined8 *****local_b8;
  undefined8 ****local_b0;
  undefined8 ***local_a8;
  undefined8 **local_a0;
  undefined8 *local_98;
  undefined8 local_90;
  undefined8 local_88 [7];
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  long local_38;
  
  uVar9 = FUN_016d59dc();
  if ((uVar9 & 1) != 0) {
    pbVar2 = (byte *)(param_1 + 0x179d1);
    uVar8 = (uint)*pbVar2 - (*pbVar2 >> 1 & 0x55555555);
    uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
    uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
    uVar8 = uVar8 + (uVar8 >> 8);
    if ((uVar8 + (uVar8 >> 0x10) & 0x3f) != 0) {
      local_40 = *(undefined8 *)(param_2 + 0x10);
      local_38 = *(long *)(param_2 + 0x18);
      FUN_00a81090(&local_38);
      FUN_00a81090(&local_40);
      local_48 = local_40;
      local_e0 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_48);
      local_e0 = local_e0 + 0x69780;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
      local_48 = local_50;
      local_e0 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_50);
      local_e0 = local_e0 + 0x15180;
      local_50 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_e0);
      lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_38);
      lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
      if ((lVar10 <= lVar11) &&
         (lVar11 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40), lVar11 == lVar10)) {
        return;
      }
    }
    bVar3 = *pbVar2;
    *pbVar2 = 0;
    local_c0 = &local_b8;
    local_b8 = &local_b0;
    local_d0 = &local_c0;
    local_b0 = &local_a8;
    local_a8 = &local_a0;
    local_a0 = &local_98;
    local_98 = &local_90;
    local_e0._4_4_ = 0;
    local_d8 = (undefined8 *)0x0;
    local_90 = 0;
    if (local_88 != (undefined8 *)0x0) {
      local_e0._4_4_ = 7;
      local_d8 = local_88;
    }
    local_40 = *(undefined8 *)(param_2 + 0x10);
    local_e0._0_4_ = 0;
    pppppppuStack_c8 = local_d0;
    FUN_00a81090(&local_40);
    puVar4 = PTR_DAT_04bb32f0;
    uVar9 = FUN_00873540(*(undefined8 *)PTR_DAT_04bb32f0,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 0;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar9 = FUN_00873540(*(undefined8 *)puVar4,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 1;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar9 = FUN_00873540(*(undefined8 *)puVar4,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 2;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar9 = FUN_00873540(*(undefined8 *)puVar4,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 3;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar9 = FUN_00873540(*(undefined8 *)puVar4,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 4;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar9 = FUN_00873540(*(undefined8 *)puVar4,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 5;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    uVar9 = FUN_00873540(*(undefined8 *)puVar4,&local_40,1,1);
    pppppppuVar5 = local_d0;
    if (((uVar9 & 1) == 0) && ((int)(uint)local_e0 < local_e0._4_4_)) {
      if (local_d0 != (undefined8 *******)0x0) {
        local_d0 = (undefined8 *******)*local_d0;
      }
      *(undefined4 *)pppppppuVar5 = 6;
      if ((int)(uint)local_e0 < local_e0._4_4_) {
        local_d8[(int)(uint)local_e0] = pppppppuVar5;
        local_e0._0_4_ = (uint)local_e0 + 1;
      }
    }
    local_38 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_40);
    local_38 = local_38 + 0x15180;
    local_40 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_38);
    if ((uint)local_e0 != 0) {
      uVar8 = nn::os::GetSystemTick();
      if (1 < (int)(uint)local_e0) {
        uVar8 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 1;
        uVar15 = (uVar8 ^ uVar8 >> 0x1e) * 0x6c078965 + 2;
        uVar12 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
        uVar14 = (ulong)((uVar12 ^ uVar12 >> 0x1e) * 0x6c078965 + 4);
        uVar9 = (ulong)(uint)local_e0;
        do {
          uVar8 = uVar8 ^ uVar8 << 0xb;
          uVar13 = (uint)uVar14;
          uVar14 = (ulong)(uVar13 >> 0x13 ^ uVar8 >> 8 ^ uVar13 ^ uVar8);
          uVar17 = uVar9 - 1 & 0xffffffff;
          uVar19 = local_d8[uVar17];
          uVar16 = uVar9 * uVar14 >> 0x1d & 0x7fffffff8;
          local_d8[uVar17] = *(undefined8 *)((long)local_d8 + uVar16);
          *(undefined8 *)((long)local_d8 + uVar16) = uVar19;
          bVar6 = 2 < uVar9;
          uVar9 = uVar9 - 1;
          uVar8 = uVar15;
          uVar15 = uVar12;
          uVar12 = uVar13;
        } while (bVar6);
      }
      if ((uint)local_e0 != 0) {
        uVar8 = (uint)*pbVar2;
        puVar1 = local_d8 + (int)(uint)local_e0;
        do {
          while( true ) {
            puVar18 = (uint *)*local_d8;
            uVar15 = *puVar18;
            if ((int)uVar15 < 1) {
              bVar6 = (bool)(bVar3 >> (ulong)(uVar15 + 6 & 0x1f) & 1);
            }
            else if (uVar15 - 1 < 7) {
              bVar6 = (1 << (ulong)(uVar15 - 1 & 0x1f) & uVar8) != 0;
            }
            else {
              bVar6 = false;
            }
            uVar15 = *puVar18;
            if ((int)uVar15 < -1) {
              bVar7 = (bool)(bVar3 >> (ulong)(uVar15 + 8 & 0x1f) & 1);
            }
            else if (uVar15 + 1 < 7) {
              bVar7 = (1 << (ulong)(uVar15 + 1 & 0x1f) & uVar8) != 0;
            }
            else {
              bVar7 = false;
            }
            if ((bVar6 | bVar7) == 1) break;
LAB_02779728:
            local_d8 = local_d8 + 1;
            uVar8 = uVar8 | 1 << (ulong)(*puVar18 & 0x1f) & 0xffU;
            *pbVar2 = (byte)uVar8;
            uVar15 = uVar8 - (uVar8 >> 1 & 0x55);
            uVar15 = (uVar15 >> 2 & 0x33333333) + (uVar15 & 0x33333333);
            uVar15 = uVar15 + (uVar15 >> 4) & 0xf0f0f0f;
            uVar15 = uVar15 + (uVar15 >> 8);
            if (2 < (uVar15 + (uVar15 >> 0x10) & 0x3f) || local_d8 == puVar1) {
              return;
            }
          }
          if ((bVar6 & bVar7) == 0) {
            if (bVar6 == false) {
              if (bVar7 != false) {
                uVar15 = *puVar18;
                if ((int)uVar15 < -2) {
                  uVar15 = uVar15 + 9;
                  goto LAB_027795b8;
                }
                uVar15 = uVar15 + 2;
                goto joined_r0x0277970c;
              }
            }
            else {
              uVar15 = *puVar18;
              if ((int)uVar15 < 2) {
                uVar15 = uVar15 + 5;
LAB_027795b8:
                if ((bVar3 >> (ulong)(uVar15 & 0x1f) & 1) == 0) goto LAB_02779728;
              }
              else {
                uVar15 = uVar15 - 2;
joined_r0x0277970c:
                if ((6 < uVar15) || ((1 << (ulong)(uVar15 & 0x1f) & uVar8) == 0)) goto LAB_02779728;
              }
            }
          }
          local_d8 = local_d8 + 1;
        } while (local_d8 != puVar1);
      }
    }
  }
  return;
}

