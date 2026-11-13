
void FUN_011e669c(undefined1 param_1 [16],float param_2,float param_3,undefined8 param_4,
                 float *param_5,long param_6,float *param_7,char param_8)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  uint *puVar12;
  undefined8 uVar13;
  undefined8 *puVar14;
  long lVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  undefined8 local_118;
  float local_110;
  float fStack_10c;
  undefined4 local_108;
  float fStack_104;
  float fStack_100;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined1 local_e8;
  undefined8 local_e4;
  undefined8 local_dc;
  undefined4 local_d4;
  char local_d0;
  undefined8 local_cf;
  undefined2 local_c7;
  undefined *local_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  undefined8 local_a8;
  uint local_9c;
  
  local_b8 = 0;
  lVar10 = *(long *)PTR_DAT_04bb2720;
  if (lVar10 == 0) {
    puVar14 = &DAT_055c04a0;
  }
  else {
    puVar14 = &DAT_055c04a0;
    if (*(long *)(lVar10 + 0x330) != 0) {
      puVar14 = (undefined8 *)
                (**(code **)(*DAT_05aed668 + 0x18))(DAT_05aed668,*(undefined4 *)(lVar10 + 0x338));
      iVar6 = FUN_006bd550(*puVar14,0);
      puVar14 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar6 != 0x758f7eaf) {
        puVar14 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(undefined4 *)(puVar14 + 7);
  local_b0 = FUN_017baf44();
  local_b0 = local_b0 & 1;
  local_c0 = PTR_DAT_04bb6268 + 0x10;
  fVar16 = (float)FUN_01a50ed0(&local_c0,param_5,param_6,0);
  puVar2 = PTR_DAT_04bb30a0;
  fVar17 = *param_7;
  fVar18 = param_7[1];
  fVar19 = param_7[2];
  uVar13 = *(undefined8 *)PTR_DAT_04bb30a0;
  local_a8 = FUN_00a8c31c(uVar13);
  if ((char)(local_a8 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_118 = (undefined **)(lVar10 + -0x15180);
    local_a8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_118);
  }
  uVar4 = local_a8;
  uVar8 = local_a8 >> 0x10;
  param_3 = param_3 + fVar19;
  uVar9 = local_a8 >> 0x18;
  local_a8._0_6_ = CONCAT24(5,(uint)local_a8);
  local_a8._7_1_ = SUB81(uVar4,7);
  local_a8._0_7_ = (uint7)(uint6)local_a8;
  cVar5 = FUN_00a8ae20(uVar13,uVar8,uVar9,8);
  puVar3 = PTR_DAT_04bb43c0;
  if ((byte)(cVar5 - 1U) < 3) {
    lVar15 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(param_5);
    lVar10 = *(long *)puVar3;
    if (lVar10 != 0) {
      lVar15 = *(long *)(lVar15 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_108 = 0;
        fStack_104 = 0.0;
        local_110 = *param_5;
        fStack_10c = param_5[1];
        local_118 = &PTR_FUN_04a36b50;
        uVar7 = FUN_0277d6c4(&local_110);
        if (*(long *)puVar3 == 0) {
LAB_011e6a38:
          local_9c = 0xbc;
          local_a8 = CONCAT44(local_a8._4_4_,0x96);
LAB_011e6a64:
          if (local_9c != (uint)local_a8) goto LAB_011e6ab0;
        }
        else {
          lVar10 = *(long *)(lVar10 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_011e6a38;
          lVar10 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(param_5);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
          if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
             (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar11 == (uint *)0x0)) goto LAB_011e6a38;
          local_9c = 0;
          local_a8 = CONCAT44(local_a8._4_4_,0x86);
          uVar7 = *puVar11;
          if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
            puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
            local_9c = 0;
            if (*puVar12 != 0) {
              uVar7 = puVar12[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                lVar10 = 0xc;
                if (*(char *)((long)puVar12 + 10) != '\0') {
                  lVar10 = 0x1c;
                }
                lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
                if (lVar10 != 0) {
                  uVar1 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar7);
                  }
                  if (*puVar12 <= uVar1) {
                    uVar1 = 0xffffffff;
                  }
                  if ((uVar1 < DAT_05326ec0) &&
                     (local_9c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                     local_9c < 0xbd)) goto LAB_011e698c;
                }
              }
              local_9c = 0;
            }
          }
LAB_011e698c:
          if (local_9c != 0x86) {
            local_9c = 0;
            local_a8 = CONCAT44(local_a8._4_4_,0x96);
            uVar7 = *puVar11;
            if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
              puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
              local_9c = 0;
              if (*puVar12 != 0) {
                uVar7 = puVar12[1];
                if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
                  lVar10 = 0xc;
                  if (*(char *)((long)puVar12 + 10) != '\0') {
                    lVar10 = 0x1c;
                  }
                  lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
                  if (lVar10 != 0) {
                    uVar1 = 0;
                    if ((ulong)uVar7 != 0) {
                      uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar7);
                    }
                    if (*puVar12 <= uVar1) {
                      uVar1 = 0xffffffff;
                    }
                    if ((uVar1 < DAT_05326ec0) &&
                       (local_9c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2),
                       local_9c < 0xbd)) goto LAB_011e6a64;
                  }
                }
                local_9c = 0;
              }
            }
            goto LAB_011e6a64;
          }
        }
        if (param_8 == '\0') {
          fVar19 = 0.5;
        }
        else if (param_8 == '\x01') {
          fVar19 = 1.5;
        }
        else {
          if (param_8 != '\x02') goto LAB_011e6ab0;
          fVar19 = 0.35;
        }
        param_3 = param_3 + fVar19;
      }
    }
  }
LAB_011e6ab0:
  uVar13 = *(undefined8 *)puVar2;
  local_a8 = FUN_00a8c31c(uVar13);
  if ((char)(local_a8 >> 0x20) < '\x05') {
    lVar10 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_a8);
    local_118 = (undefined **)(lVar10 + -0x15180);
    local_a8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_118);
  }
  uVar4 = local_a8;
  uVar8 = local_a8 >> 0x10;
  uVar9 = local_a8 >> 0x18;
  local_a8._0_6_ = CONCAT24(5,(uint)local_a8);
  local_a8._7_1_ = SUB81(uVar4,7);
  local_a8._0_7_ = (uint7)(uint6)local_a8;
  cVar5 = FUN_00a8ae20(uVar13,uVar8,uVar9,4);
  fVar19 = param_3;
  if (cVar5 != '\x02') goto LAB_011e6cbc;
  lVar15 = *(long *)puVar3;
  uVar7 = FUN_0277d6c4(param_5);
  lVar10 = *(long *)puVar3;
  if (lVar10 == 0) goto LAB_011e6cbc;
  lVar15 = *(long *)(lVar15 + 0x57e58);
  uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
  if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
     (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_011e6cbc;
  local_108 = 0;
  fStack_104 = 0.0;
  local_110 = *param_5;
  fStack_10c = param_5[1];
  local_118 = &PTR_FUN_04a36b50;
  uVar7 = FUN_0277d6c4(&local_110);
  if (*(long *)puVar3 == 0) {
LAB_011e6c84:
    local_a8 = CONCAT44(local_a8._4_4_,0x86);
    local_9c = 0xbc;
  }
  else {
    lVar10 = *(long *)(lVar10 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
       (*(long *)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_011e6c84;
    lVar10 = *(long *)PTR_DAT_04bc0428;
    uVar7 = FUN_0277d6c4(param_5);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar10 + 0x1f8);
    if ((*(uint *)(lVar10 + 0x1d8) <= uVar7) ||
       (puVar11 = *(uint **)(*(long *)(lVar10 + 0x1e0) + (long)(int)uVar7 * 8),
       puVar11 == (uint *)0x0)) goto LAB_011e6c84;
    local_9c = 0;
    local_a8 = CONCAT44(local_a8._4_4_,0x86);
    uVar7 = *puVar11;
    if ((uVar7 != 0) && (puVar11 != (uint *)(ulong)uVar7)) {
      puVar12 = (uint *)((long)puVar11 - (long)(ulong)uVar7);
      local_9c = 0;
      if (*puVar12 != 0) {
        uVar7 = puVar12[1];
        if ((uVar7 != 0) && ((ulong)(ushort)puVar12[2] != 0)) {
          lVar10 = 0xc;
          if (*(char *)((long)puVar12 + 10) != '\0') {
            lVar10 = 0x1c;
          }
          lVar10 = (long)puVar12 + lVar10 + (ulong)(ushort)puVar12[2] * 8;
          if (lVar10 != 0) {
            uVar1 = 0;
            if ((ulong)uVar7 != 0) {
              uVar1 = (uint)((ulong)((long)puVar11 - lVar10) / (ulong)uVar7);
            }
            if (*puVar12 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < DAT_05326ec0) &&
               (local_9c = (uint)*(ushort *)(DAT_05326ec8 + (long)(int)uVar1 * 2), local_9c < 0xbd))
            goto LAB_011e6c90;
          }
        }
        local_9c = 0;
      }
    }
  }
LAB_011e6c90:
  fVar19 = param_3 + 0.7;
  if (local_9c != (uint)local_a8 || param_8 != '\x02') {
    fVar19 = param_3;
  }
LAB_011e6cbc:
  fStack_10c = 1.0;
  local_108 = 0;
  fStack_104 = 9.18327e-41;
  fStack_100 = 0.0;
  FUN_0277d4ac(&fStack_104);
  local_e8 = 0xff;
  local_e4 = 0xffffffff00000000;
  local_d4 = 3;
  local_cf = 0xffff00ff;
  local_dc = 0;
  local_c7 = 0;
  local_118 = (undefined **)CONCAT44(param_2 + fVar18,fVar17 + fVar16);
  local_f8 = &DAT_048f9750;
  fStack_104 = *param_5;
  fStack_100 = param_5[1];
  local_f0 = *(undefined4 *)(param_6 + 8);
  uStack_ec = *(undefined4 *)(param_6 + 0xc);
  local_110 = fVar19;
  local_d0 = param_8;
  FUN_011e5aa0(param_4,&local_118);
  return;
}

