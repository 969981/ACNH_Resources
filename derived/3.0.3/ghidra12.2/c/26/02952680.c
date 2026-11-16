
uint FUN_02952680(long param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  ushort uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  void *__s;
  long lVar14;
  long lVar15;
  ulong uVar16;
  uint *puVar17;
  uint *puVar18;
  int iVar19;
  long *plVar20;
  ulong uVar21;
  int iVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  uint local_848;
  uint local_844;
  undefined4 local_840;
  uint local_83c;
  undefined4 local_838;
  undefined4 uStack_834;
  uint local_830;
  int local_82c;
  undefined *local_828;
  undefined1 auStack_820 [1876];
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  int local_78;
  uint local_74;
  
  local_828 = (undefined *)(ulong)(ushort)param_2;
  FUN_0277d4ac(&local_828);
  uVar10 = FUN_0277d6c4(&local_828);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
  if ((uVar10 < *(uint *)(param_1 + 0xb30)) &&
     (puVar17 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar10 * 8),
     puVar17 != (uint *)0x0)) {
    uVar10 = *puVar17;
    if (uVar10 != 0 && puVar17 != (uint *)(ulong)uVar10) {
      puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar10);
      if (((*puVar18 != 0) && (uVar10 = puVar18[1], uVar10 != 0)) &&
         ((ulong)(ushort)puVar18[2] != 0)) {
        lVar14 = 0xc;
        if (*(char *)((long)puVar18 + 10) != '\0') {
          lVar14 = 0x1c;
        }
        lVar14 = (long)puVar18 + lVar14 + (ulong)(ushort)puVar18[2] * 8;
        if (lVar14 != 0) {
          uVar12 = 0;
          if ((ulong)uVar10 != 0) {
            uVar12 = (uint)((ulong)((long)puVar17 - lVar14) / (ulong)uVar10);
          }
          if (*puVar18 <= uVar12) {
            uVar12 = 0xffffffff;
          }
          if ((uVar12 < DAT_055d6968) &&
             (uVar9 = *(ushort *)(DAT_055d6970 + (long)(int)uVar12 * 2), local_74 = (uint)uVar9,
             uVar9 < 5)) goto LAB_02952784;
        }
      }
    }
    local_74 = 0;
  }
  else {
    local_74 = 1;
  }
LAB_02952784:
  local_b0 = local_b0 & 0xffffffffffff0000;
  local_828 = PTR_DAT_04bbfe60 + 0x10;
  memset(auStack_820,0,0x754);
  uVar10 = nn::os::GetSystemTick();
  local_cc = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 1;
  local_c8 = (local_cc ^ local_cc >> 0x1e) * 0x6c078965 + 2;
  local_c4 = (local_c8 ^ local_c8 >> 0x1e) * 0x6c078965 + 3;
  local_c0 = (local_c4 ^ local_c4 >> 0x1e) * 0x6c078965 + 4;
  __s = (void *)(**(code **)(local_828 + 0x18))(&local_828);
  memset(__s,0,0x754);
  local_a0 = &local_b8;
  local_b8 = CONCAT44(local_b8._4_4_,0x6b);
  local_a8 = &PTR_FUN_049ff448;
  FUN_008a1ba0(&local_828,&local_a8);
  plVar20 = (long *)PTR_DAT_04bb32e8;
  local_b8 = *(ulong *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
  local_b0 = local_b8;
  if ((local_b8 & 0xffff) == 0) {
    uVar12 = (uint)(local_b8 >> 0x10);
    uVar10 = (uint)(local_b8 >> 0x20) & 0xff;
  }
  else {
    lVar14 = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_b8);
    local_a8 = (undefined **)(lVar14 + 0x3c);
    local_b8 = nn::time::ToCalendarTimeInUtc((PosixTime *)&local_a8);
    uVar12 = (uint)local_b0._2_1_;
    uVar10 = (uint)local_b0._4_1_;
  }
  local_78 = (uVar12 & 0xff) - 1;
  if (uVar10 - 4 < 5) {
    local_82c = 0;
  }
  else if (uVar10 - 9 < 7) {
    local_82c = 1;
  }
  else {
    local_82c = (uint)(4 < uVar10 - 0x10) << 1;
  }
  local_830 = *(uint *)(*(long *)PTR_DAT_04bb30a0 + 0x65204);
  if (1 < local_830) {
    local_830 = 0;
  }
  lVar14 = (**(code **)(local_828 + 0x20))(&local_828);
  uVar21 = 0;
  do {
    if ((*(uint *)(lVar14 + (uVar21 >> 5) * 4) >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0)
    goto LAB_02952930;
    uVar10 = (uint)uVar21 + 1;
    uVar21 = (ulong)uVar10;
  } while (uVar10 != 15000);
  uVar21 = 0;
LAB_02952930:
  lVar15 = (**(code **)(local_828 + 0x20))(&local_828);
  puVar5 = PTR_DAT_04bbfe58;
  puVar4 = PTR_DAT_04bb37e0;
  iVar19 = 15000;
  do {
    if ((*(uint *)(lVar15 + (ulong)(iVar19 - 1U >> 5) * 4) >> (ulong)(iVar19 - 1U & 0x1f) & 1) != 0)
    break;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  local_848 = 0xb10;
  if (iVar19 != (int)uVar21) {
    fVar23 = 0.0;
    local_848 = 0xb10;
LAB_029529b4:
    puVar1 = (undefined4 *)(puVar5 + uVar21 * 8);
    if (0x752 < (uint)(uVar21 >> 3)) {
      puVar1 = (undefined4 *)puVar5;
    }
    local_a0 = (undefined8 *)((ulong)local_a0 & 0xffff000000000000);
    puVar2 = (undefined4 *)puVar4;
    if ((uint)uVar21 < 0x3a99) {
      puVar2 = puVar1;
    }
    local_a8 = (undefined **)CONCAT35(local_a8._5_3_,0xfffe);
    local_838 = *puVar2;
    uStack_834 = puVar2[1];
    uVar11 = FUN_0277d6c4(&local_838);
    FUN_029562b0(param_1,&local_a8,uVar11,&local_b0,&local_b8);
    if (local_a0._4_1_ != '\0') {
      local_838 = *puVar2;
      uStack_834 = puVar2[1];
      uVar10 = FUN_0277d6c4(&local_838);
      if (uVar10 != param_2) {
        local_844 = uVar10 & 0xffff;
        local_840 = 0;
        FUN_0277d4ac(&local_844);
        uVar12 = FUN_0277d6c4(&local_844);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
        if ((uVar12 < *(uint *)(param_1 + 0xb30)) &&
           (puVar17 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar12 * 8),
           puVar17 != (uint *)0x0)) {
          uVar12 = *puVar17;
          local_83c = 0;
          if ((uVar12 != 0) && (puVar17 != (uint *)(ulong)uVar12)) {
            puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar12);
            local_83c = 0;
            if (*puVar18 != 0) {
              uVar12 = puVar18[1];
              if ((uVar12 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
                if (lVar15 != 0) {
                  uVar13 = 0;
                  if ((ulong)uVar12 != 0) {
                    uVar13 = (uint)((ulong)((long)puVar17 - lVar15) / (ulong)uVar12);
                  }
                  if (*puVar18 <= uVar13) {
                    uVar13 = 0xffffffff;
                  }
                  if ((uVar13 < DAT_055d6968) &&
                     (local_83c = (uint)*(ushort *)(DAT_055d6970 + (long)(int)uVar13 * 2),
                     local_83c < 5)) goto LAB_02952b04;
                }
              }
              local_83c = 0;
            }
          }
        }
        else {
          local_83c = 1;
        }
LAB_02952b04:
        if (local_83c == local_74) {
          uVar16 = FUN_02953210(param_1,uVar10);
          if ((uVar16 & 1) != 0) {
            lVar15 = FUN_02953cfc(param_1,uVar10,&local_830);
            uVar9 = 0;
            if (lVar15 != 0) {
              uVar9 = FUN_02953e40(lVar15,&local_78,&local_82c);
            }
            if (fVar23 < (float)uVar9) {
              fVar23 = (float)uVar9;
              local_848 = uVar10;
            }
          }
        }
      }
    }
    do {
      uVar10 = (int)uVar21 + 1;
      uVar21 = (ulong)uVar10;
      if (0x752 < uVar10 >> 3) {
        uVar10 = 0x3a95;
        goto LAB_02952b90;
      }
    } while ((*(uint *)(lVar14 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) == 0);
    goto LAB_029529ac;
  }
  fVar23 = 0.0;
LAB_02952bf0:
  local_b0._0_4_ = (uint)*(undefined8 *)(*plVar20 + 0x4060);
  uVar10 = (uint)local_b0;
  local_b0._7_1_ = (undefined1)((ulong)*(undefined8 *)(*plVar20 + 0x4060) >> 0x38);
  local_b0._0_7_ = (uint7)(uint)local_b0;
  local_b8 = CONCAT17(local_b0._7_1_,CONCAT16(0x3b,CONCAT24(0x3b17,uVar10)));
  lVar14 = (**(code **)(local_828 + 0x20))(&local_828);
  uVar21 = 0;
  do {
    if ((*(uint *)(lVar14 + (uVar21 >> 5) * 4) >> (ulong)((uint)uVar21 & 0x1f) & 1) != 0)
    goto LAB_02952c50;
    uVar10 = (uint)uVar21 + 1;
    uVar21 = (ulong)uVar10;
  } while (uVar10 != 15000);
  uVar21 = 0;
LAB_02952c50:
  lVar15 = (**(code **)(local_828 + 0x20))(&local_828);
  puVar4 = PTR_DAT_04bbfe58;
  iVar19 = 15000;
  do {
    if ((*(uint *)(lVar15 + (ulong)(iVar19 - 1U >> 5) * 4) >> (ulong)(iVar19 - 1U & 0x1f) & 1) != 0)
    break;
    iVar19 = iVar19 + -1;
  } while (iVar19 != 0);
  iVar22 = (int)uVar21;
joined_r0x02952c90:
  if (iVar19 == iVar22) {
    if ((fVar23 <= 0.0) && (local_848 = 0xb26, local_74 != 2)) {
      local_848 = 0xb10;
    }
    return local_848;
  }
  local_a0 = (undefined8 *)((ulong)local_a0 & 0xffff000000000000);
  puVar1 = (undefined4 *)(puVar4 + uVar21 * 8);
  if (0x752 < (uint)(uVar21 >> 3)) {
    puVar1 = (undefined4 *)puVar4;
  }
  local_a8._5_3_ = (undefined3)((ulong)local_a8 >> 0x28);
  local_a8 = (undefined **)CONCAT35(local_a8._5_3_,0xfffe);
  puVar2 = (undefined4 *)PTR_DAT_04bb37e0;
  if ((uint)uVar21 < 0x3a99) {
    puVar2 = puVar1;
  }
  local_838 = *puVar2;
  uStack_834 = puVar2[1];
  uVar11 = FUN_0277d6c4(&local_838);
  FUN_029562b0(param_1,&local_a8,uVar11,&local_b0,&local_b8);
  local_838 = *puVar2;
  uStack_834 = puVar2[1];
  uVar12 = FUN_0277d6c4(&local_838);
  uVar10 = local_848;
  if (uVar12 != param_2) {
    local_844 = uVar12 & 0xffff;
    local_840 = 0;
    FUN_0277d4ac(&local_844);
    uVar13 = FUN_0277d6c4(&local_844);
    uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(param_1 + 0xb50);
    if ((uVar13 < *(uint *)(param_1 + 0xb30)) &&
       (puVar17 = *(uint **)(*(long *)(param_1 + 0xb38) + (long)(int)uVar13 * 8),
       puVar17 != (uint *)0x0)) {
      uVar13 = *puVar17;
      local_83c = 0;
      if ((uVar13 != 0) && (puVar17 != (uint *)(ulong)uVar13)) {
        puVar18 = (uint *)((long)puVar17 - (long)(ulong)uVar13);
        local_83c = 0;
        if (*puVar18 != 0) {
          uVar13 = puVar18[1];
          if ((uVar13 != 0) && ((ulong)(ushort)puVar18[2] != 0)) {
            lVar15 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              lVar15 = 0x1c;
            }
            lVar15 = (long)puVar18 + lVar15 + (ulong)(ushort)puVar18[2] * 8;
            if (lVar15 != 0) {
              uVar3 = 0;
              if ((ulong)uVar13 != 0) {
                uVar3 = (uint)((ulong)((long)puVar17 - lVar15) / (ulong)uVar13);
              }
              if (*puVar18 <= uVar3) {
                uVar3 = 0xffffffff;
              }
              if ((uVar3 < DAT_055d6968) &&
                 (local_83c = (uint)*(ushort *)(DAT_055d6970 + (long)(int)uVar3 * 2), local_83c < 5)
                 ) goto LAB_02952e48;
            }
          }
          local_83c = 0;
        }
      }
    }
    else {
      local_83c = 1;
    }
LAB_02952e48:
    if ((local_83c == local_74) && (uVar16 = FUN_02953210(param_1,uVar12), (uVar16 & 1) != 0)) {
      local_844 = 0;
      lVar15 = FUN_02953cfc(param_1,uVar12,&local_830);
      uVar9 = 0;
      if (lVar15 != 0) {
        uVar9 = FUN_02953e40(lVar15,&local_78,&local_844);
      }
      fVar25 = (float)uVar9;
      local_844 = 1;
      fVar24 = fVar25;
      if (fVar25 <= fVar23) {
        fVar24 = fVar23;
      }
      lVar15 = FUN_02953cfc(param_1,uVar12,&local_830);
      if (lVar15 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = FUN_02953e40(lVar15,&local_78,&local_844);
      }
      bVar6 = fVar25 <= fVar23;
      fVar23 = (float)uVar9;
      bVar7 = fVar23 <= fVar24;
      if (bVar7) {
        fVar23 = fVar24;
      }
      local_844 = 2;
      lVar15 = FUN_02953cfc(param_1,uVar12,&local_830);
      uVar9 = 0;
      if (lVar15 != 0) {
        uVar9 = FUN_02953e40(lVar15,&local_78,&local_844);
      }
      fVar24 = (float)uVar9;
      bVar8 = fVar24 <= fVar23;
      if (!bVar8) {
        fVar23 = fVar24;
      }
      uVar10 = uVar12;
      if (bVar8 && (bVar7 && bVar6)) {
        uVar10 = local_848;
      }
    }
  }
  do {
    uVar12 = (int)uVar21 + 1;
    uVar21 = (ulong)uVar12;
    if (0x752 < uVar12 >> 3) {
      uVar12 = 0x3a95;
      goto LAB_02952f70;
    }
  } while ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) == 0);
  goto LAB_02952cf8;
  while( true ) {
    uVar12 = uVar10 + 1;
    if ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_029529a4;
    if ((*(uint *)(lVar14 + (ulong)(uVar10 >> 5) * 4) >> (ulong)(uVar10 & 0x1f) & 1) != 0)
    goto LAB_029529a8;
    uVar10 = uVar10 - 3;
    if (uVar10 == 0xfffffffd) break;
LAB_02952b90:
    uVar12 = uVar10 + 2;
    if ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0) {
LAB_029529a4:
      uVar10 = uVar12;
LAB_029529a8:
      uVar21 = (ulong)(uVar10 + 1);
      goto LAB_029529ac;
    }
  }
  uVar21 = 0;
LAB_029529ac:
  if (iVar19 == (int)uVar21) goto code_r0x02952be8;
  goto LAB_029529b4;
code_r0x02952be8:
  plVar20 = (long *)PTR_DAT_04bb32e8;
  if (0.0 < fVar23) {
    return local_848;
  }
  goto LAB_02952bf0;
  while( true ) {
    uVar13 = uVar12 + 1;
    if ((*(uint *)(lVar14 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0)
    goto LAB_02952cf0;
    if ((*(uint *)(lVar14 + (ulong)(uVar12 >> 5) * 4) >> (ulong)(uVar12 & 0x1f) & 1) != 0)
    goto LAB_02952cf4;
    uVar12 = uVar12 - 3;
    if (uVar12 == 0xfffffffd) break;
LAB_02952f70:
    uVar13 = uVar12 + 2;
    if ((*(uint *)(lVar14 + (ulong)(uVar13 >> 5) * 4) >> (ulong)(uVar13 & 0x1f) & 1) != 0) {
LAB_02952cf0:
      uVar12 = uVar13;
LAB_02952cf4:
      uVar21 = (ulong)(uVar12 + 1);
      goto LAB_02952cf8;
    }
  }
  uVar21 = 0;
LAB_02952cf8:
  iVar22 = (int)uVar21;
  local_848 = uVar10;
  goto joined_r0x02952c90;
}

