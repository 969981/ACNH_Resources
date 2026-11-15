
void FUN_021efe40(uint *param_1,int *param_2,int *param_3)

{
  undefined4 *puVar1;
  byte *pbVar2;
  uint *puVar3;
  uint uVar4;
  short sVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  bool bVar9;
  ushort uVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  undefined4 uVar15;
  long lVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined1 *puVar19;
  char *pcVar20;
  long lVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  long *plVar25;
  uint local_a4;
  uint local_8c;
  undefined8 local_88;
  char *pcStack_80;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  undefined4 local_64;
  
  local_68 = 0;
  uVar14 = FUN_02b67a30(&local_68,*param_1);
  plVar25 = (long *)PTR_DAT_04bb26a8;
  puVar6 = PTR_DAT_04bb2020;
  if ((uVar14 & 1) == 0) {
    return;
  }
  lVar16 = *(long *)PTR_DAT_04bb26a8;
  if (local_68 < 10) {
    uVar11 = local_68 * 2 + 0xe5;
    if (*(uint *)(lVar16 + 0x770) <= uVar11) {
      uVar11 = 0;
    }
    lVar24 = *(long *)(lVar16 + 0x778) + (ulong)uVar11 * 400;
  }
  else {
    lVar24 = 0;
  }
  lVar23 = 0;
  pbVar2 = (byte *)0x0;
  if (lVar24 != 0) {
    pbVar2 = (byte *)(lVar24 + 0x130);
  }
  if (local_68 < 10) {
    uVar11 = local_68 * 2 + 0xe6;
    if (*(uint *)(lVar16 + 0x770) <= uVar11) {
      uVar11 = 0;
    }
    lVar23 = *(long *)(lVar16 + 0x778) + (ulong)uVar11 * 400;
  }
  local_78 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_70 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_74 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  lVar16 = 0;
  if (lVar23 != 0) {
    lVar16 = lVar23 + 0x130;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  pcStack_80 = "AudioShuffleState";
  local_6c = local_74;
  local_8c = FUN_027490f0(*param_1,&local_88);
  puVar7 = PTR_DAT_04bb43c0;
  if (*param_2 == 0) {
    local_8c = 0;
    uVar11 = 0;
    bVar9 = false;
    bVar8 = false;
joined_r0x021f00c4:
    pcVar20 = "TodayReserveCoordinateHouseInterior";
    uVar12 = local_8c;
  }
  else {
    iVar13 = *param_2;
    if (iVar13 == 2) {
      local_88 = (undefined *)0x9bf;
      FUN_0277d4ac(&local_88);
      local_70 = (uint)local_88;
      local_6c = local_88._4_4_;
      local_88 = (undefined *)0x9bf;
      FUN_0277d4ac(&local_88);
      local_8c = 0;
      uVar11 = 0;
      bVar9 = true;
      bVar8 = true;
      local_78 = (uint)local_88;
      local_74 = local_88._4_4_;
      goto joined_r0x021f00c4;
    }
    if (iVar13 == 4) {
      uVar12 = local_8c >> 1 & 1;
      local_64 = 0;
      uVar14 = FUN_02b67a30(&local_64,*param_1);
      if ((uVar14 & 1) == 0) {
LAB_021f02ac:
        bVar9 = false;
        bVar8 = false;
        pcVar20 = "InteriorCoordinator";
        goto joined_r0x021f0448;
      }
      local_88 = (undefined *)CONCAT44(local_88._4_4_,local_64);
      lVar17 = *(long *)PTR_DAT_04bb46b0;
      if (lVar17 == 0) goto LAB_021f02ac;
      puVar18 = *(undefined8 **)(lVar17 + 0x10);
      if ((*(byte *)(lVar17 + 0x453) & 1) != 0) {
        if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
           (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
        goto LAB_021f02a0;
        goto LAB_021f02ac;
      }
      lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
      if (lVar17 == 0) goto LAB_021f02ac;
      lVar17 = lVar17 + 0x70;
LAB_021f02a0:
      if (9 < (uint)local_88) goto LAB_021f02ac;
      lVar21 = lVar17 + 0x1962d8 + ((ulong)local_88 & 0xffffffff) * 0x10d8;
      if (9 < (uint)local_88) {
        lVar21 = lVar17 + 0x1962d8;
      }
      if ((*(long **)(lVar21 + 0x878) == (long *)0x0) ||
         (puVar18 = (undefined8 *)**(long **)(lVar21 + 0x878), puVar18 == (undefined8 *)0x0)) {
        local_8c = 0;
      }
      else {
        local_8c = (**(code **)*puVar18)();
      }
      puVar6 = PTR_DAT_04bb43c0;
      lVar17 = *(long *)(lVar21 + 0x860) + *(long *)(lVar21 + 0x858);
      local_70 = *(undefined4 *)(lVar17 + 0x10d4);
      local_6c = *(undefined4 *)(lVar17 + 0x10d8);
      local_78 = *(undefined4 *)(lVar17 + 0x10dc);
      local_74 = *(undefined4 *)(lVar17 + 0x10e0);
      lVar22 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(&local_70);
      lVar17 = *(long *)puVar6;
      if (lVar17 == 0) {
LAB_021f0778:
        bVar8 = false;
      }
      else {
        lVar22 = *(long *)(lVar22 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
        if (*(uint *)(lVar22 + 0x1d8) <= uVar11) goto LAB_021f0778;
        bVar8 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
      }
      uVar11 = FUN_0277d6c4(&local_78);
      plVar25 = (long *)PTR_DAT_04bb26a8;
      if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_021f07cc:
        bVar9 = false;
      }
      else {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if (*(uint *)(lVar17 + 0x1d8) <= uVar11) goto LAB_021f07cc;
        bVar9 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
      }
      if ((((local_8c & 1) != 0) && (*(long *)(lVar21 + 0x878) != 0)) &&
         (puVar18 = *(undefined8 **)(*(long *)(lVar21 + 0x878) + 8), puVar18 != (undefined8 *)0x0))
      {
        (**(code **)*puVar18)();
      }
      uVar11 = 1;
      pcVar20 = "InteriorCoordinator";
    }
    else {
      if (iVar13 != 3) {
        lVar17 = FUN_0265c2a0(*param_1);
        if (lVar17 == 0) {
          local_8c = 0;
          bVar9 = true;
          bVar8 = true;
          uVar11 = 0;
        }
        else {
          if ((*(long **)(lVar17 + 0x28) == (long *)0x0) ||
             (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x28), puVar18 == (undefined8 *)0x0)) {
            uVar14 = 0;
          }
          else {
            uVar14 = (**(code **)*puVar18)();
            uVar14 = uVar14 & 0xffffffff;
          }
          local_88 = puVar6 + 0x10;
          pcStack_80 = "UseAudioType";
          iVar13 = FUN_02749340(*(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8) + 0x1267c,&local_88
                               );
          bVar9 = iVar13 == 1;
          bVar8 = !bVar9;
          lVar21 = *(long *)(lVar17 + 0x10) + *(long *)(lVar17 + 8);
          puVar1 = (undefined4 *)(lVar21 + 0x1320c);
          local_78 = *puVar1;
          local_70 = *puVar1;
          local_74 = *(undefined4 *)(lVar21 + 0x13210);
          local_6c = local_74;
          if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x28) != 0)) &&
             (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x28) + 8), puVar18 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar18)();
          }
          local_8c = 0;
          uVar11 = 0;
        }
        goto joined_r0x021f00c4;
      }
      sVar5 = *(short *)PTR_DAT_04bbdeb0;
      if (sVar5 == -1) {
LAB_021f0158:
        uVar11 = *param_1;
        local_8c = local_8c & 1;
        if ((uVar11 < 10) && (*(long *)PTR_DAT_04bb46b0 != 0)) {
          lVar17 = (**(code **)(*(long *)**(undefined8 **)(*(long *)PTR_DAT_04bb46b0 + 0x10) + 0x38)
                   )();
          if (lVar17 == 0) {
            bVar8 = false;
LAB_021f0454:
            bVar9 = false;
          }
          else {
            lVar17 = lVar17 + (ulong)uVar11 * 0x888;
            if ((*(long **)(lVar17 + 0x27f8d8) == (long *)0x0) ||
               (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x27f8d8), puVar18 == (undefined8 *)0x0
               )) {
              uVar11 = 0;
            }
            else {
              uVar11 = (**(code **)*puVar18)();
            }
            puVar6 = PTR_DAT_04bb43c0;
            lVar21 = *(long *)(lVar17 + 0x27f8c0) + *(long *)(lVar17 + 0x27f8b8);
            local_70 = *(undefined4 *)(lVar21 + 0x10d0);
            local_6c = *(undefined4 *)(lVar21 + 0x10d4);
            local_78 = *(undefined4 *)(lVar21 + 0x10d8);
            local_74 = *(undefined4 *)(lVar21 + 0x10dc);
            lVar22 = *(long *)PTR_DAT_04bb43c0;
            uVar12 = FUN_0277d6c4(&local_70);
            lVar21 = *(long *)puVar6;
            if (lVar21 == 0) {
LAB_021f0344:
              bVar8 = false;
            }
            else {
              lVar22 = *(long *)(lVar22 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
              if (*(uint *)(lVar22 + 0x1d8) <= uVar12) goto LAB_021f0344;
              bVar8 = *(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar12 * 8) != 0;
            }
            uVar12 = FUN_0277d6c4(&local_78);
            plVar25 = (long *)PTR_DAT_04bb26a8;
            if (*(long *)puVar6 == 0) {
LAB_021f0390:
              bVar9 = false;
            }
            else {
              lVar21 = *(long *)(lVar21 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
              if (*(uint *)(lVar21 + 0x1d8) <= uVar12) goto LAB_021f0390;
              bVar9 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar12 * 8) != 0;
            }
            if (((uVar11 & 1) == 0) || (*(long *)(lVar17 + 0x27f8d8) == 0)) {
              uVar11 = 1;
              goto joined_r0x021f00c4;
            }
            puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x27f8d8) + 8);
            if (puVar18 != (undefined8 *)0x0) {
              (**(code **)*puVar18)();
            }
          }
        }
        else {
LAB_021f0460:
          bVar9 = false;
          bVar8 = false;
        }
        uVar11 = 1;
        goto joined_r0x021f00c4;
      }
      local_88 = (undefined *)CONCAT44(local_88._4_4_,0x1d);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
      if (0xff < (uint)(int)sVar5) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar3 >> 0x1d & 1) == 0) goto LAB_021f0158;
      lVar17 = *(long *)PTR_DAT_04bb2800;
      if (lVar17 == 0) {
        local_8c = 0;
        goto LAB_021f0460;
      }
      local_6c = *(undefined4 *)(lVar17 + 0x2658);
      local_74 = *(undefined4 *)(lVar17 + 0x2660);
      local_70 = *(undefined4 *)(lVar17 + 0x2654);
      local_78 = *(undefined4 *)(lVar17 + 0x265c);
      local_8c = (uint)(*(char *)(lVar17 + 0x26b8) != '\0');
      lVar21 = *(long *)PTR_DAT_04bb43c0;
      uVar11 = FUN_0277d6c4(&local_70);
      lVar17 = *(long *)puVar7;
      if (lVar17 == 0) {
LAB_021f03f0:
        bVar8 = false;
      }
      else {
        lVar21 = *(long *)(lVar21 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
        if (*(uint *)(lVar21 + 0x1d8) <= uVar11) goto LAB_021f03f0;
        bVar8 = *(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
      }
      uVar11 = FUN_0277d6c4(&local_78);
      if (*(long *)puVar7 == 0) goto LAB_021f0454;
      lVar17 = *(long *)(lVar17 + 0x57e58);
      uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
      if (*(uint *)(lVar17 + 0x1d8) <= uVar11) goto LAB_021f0454;
      pcVar20 = "TodayReserveCoordinateHouseInterior";
      bVar9 = *(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0;
      uVar12 = local_8c;
joined_r0x021f0448:
      uVar11 = 1;
    }
  }
  if (lVar24 != 0) {
    if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
      uVar4 = 0;
      if (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0) {
        uVar4 = uVar11;
      }
      if ((((uVar12 & uVar4) == 1) && (uVar4 = *param_1, uVar4 < 10)) &&
         (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
        puVar18 = *(undefined8 **)(lVar17 + 0x10);
        if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
          lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
          if (lVar17 != 0) {
            lVar17 = lVar17 + 0x70;
LAB_021f054c:
            lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
            if ((*(long **)(lVar17 + 0x1b0) == (long *)0x0) ||
               (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x1b0), puVar18 == (undefined8 *)0x0))
            {
              local_a4 = 0;
            }
            else {
              local_a4 = (**(code **)*puVar18)();
            }
            local_88 = PTR_DAT_04bb2020 + 0x10;
            pcStack_80 = pcVar20;
            iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x198) + *(long *)(lVar17 + 400) + 0x38,
                                  &local_88);
            if (iVar13 != 0) {
              FUN_0265fdb0(*(long *)(lVar17 + 0x198) + *(long *)(lVar17 + 400) + 0x1c);
            }
            if ((((local_a4 & 1) != 0) && (*(long *)(lVar17 + 0x1b0) != 0)) &&
               (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x1b0) + 8),
               puVar18 != (undefined8 *)0x0)) {
              (**(code **)*puVar18)();
            }
          }
        }
        else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
                (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
        goto LAB_021f054c;
        uVar4 = *param_1;
        if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
          puVar18 = *(undefined8 **)(lVar17 + 0x10);
          if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
            lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
            if (lVar17 != 0) {
              lVar17 = lVar17 + 0x70;
LAB_021f06c0:
              lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
              if ((*(long **)(lVar17 + 0x8b0) == (long *)0x0) ||
                 (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x8b0), puVar18 == (undefined8 *)0x0)
                 ) {
                local_a4 = 0;
              }
              else {
                local_a4 = (**(code **)*puVar18)();
              }
              local_88 = PTR_DAT_04bb2020 + 0x10;
              pcStack_80 = pcVar20;
              iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x898) + *(long *)(lVar17 + 0x890) + 0x38,
                                    &local_88);
              if (iVar13 != 0) {
                FUN_0265fdb0(*(long *)(lVar17 + 0x898) + *(long *)(lVar17 + 0x890) + 0x1c);
              }
              if ((((local_a4 & 1) != 0) && (*(long *)(lVar17 + 0x8b0) != 0)) &&
                 (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x8b0) + 8),
                 puVar18 != (undefined8 *)0x0)) {
                (**(code **)*puVar18)();
              }
            }
          }
          else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
                  (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
          goto LAB_021f06c0;
          uVar4 = *param_1;
          if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
            puVar18 = *(undefined8 **)(lVar17 + 0x10);
            if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
              lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
              if (lVar17 != 0) {
                lVar17 = lVar17 + 0x70;
LAB_021f0928:
                lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
                if ((*(long **)(lVar17 + 0xfb0) == (long *)0x0) ||
                   (puVar18 = (undefined8 *)**(long **)(lVar17 + 0xfb0),
                   puVar18 == (undefined8 *)0x0)) {
                  local_a4 = 0;
                }
                else {
                  local_a4 = (**(code **)*puVar18)();
                }
                local_88 = PTR_DAT_04bb2020 + 0x10;
                pcStack_80 = pcVar20;
                iVar13 = FUN_02746e10(*(long *)(lVar17 + 0xf98) + *(long *)(lVar17 + 0xf90) + 0x38,
                                      &local_88);
                if (iVar13 != 0) {
                  FUN_0265fdb0(*(long *)(lVar17 + 0xf98) + *(long *)(lVar17 + 0xf90) + 0x1c);
                }
                if ((((local_a4 & 1) != 0) && (*(long *)(lVar17 + 0xfb0) != 0)) &&
                   (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0xfb0) + 8),
                   puVar18 != (undefined8 *)0x0)) {
                  (**(code **)*puVar18)();
                }
              }
            }
            else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
                    (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
            goto LAB_021f0928;
            uVar4 = *param_1;
            if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
              puVar18 = *(undefined8 **)(lVar17 + 0x10);
              if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
                lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
                if (lVar17 != 0) {
                  lVar17 = lVar17 + 0x70;
LAB_021f0a5c:
                  lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
                  if ((*(long **)(lVar17 + 0x16b0) == (long *)0x0) ||
                     (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x16b0),
                     puVar18 == (undefined8 *)0x0)) {
                    local_a4 = 0;
                  }
                  else {
                    local_a4 = (**(code **)*puVar18)();
                  }
                  local_88 = PTR_DAT_04bb2020 + 0x10;
                  pcStack_80 = pcVar20;
                  iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x1698) + *(long *)(lVar17 + 0x1690) +
                                        0x38,&local_88);
                  if (iVar13 != 0) {
                    FUN_0265fdb0(*(long *)(lVar17 + 0x1698) + *(long *)(lVar17 + 0x1690) + 0x1c);
                  }
                  if ((((local_a4 & 1) != 0) && (*(long *)(lVar17 + 0x16b0) != 0)) &&
                     (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x16b0) + 8),
                     puVar18 != (undefined8 *)0x0)) {
                    (**(code **)*puVar18)();
                  }
                }
              }
              else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)) &&
                      (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
              goto LAB_021f0a5c;
              uVar4 = *param_1;
              if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
                puVar18 = *(undefined8 **)(lVar17 + 0x10);
                if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
                  lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
                  if (lVar17 != 0) {
                    lVar17 = lVar17 + 0x70;
LAB_021f0b70:
                    lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
                    if ((*(long **)(lVar17 + 0x1db0) == (long *)0x0) ||
                       (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x1db0),
                       puVar18 == (undefined8 *)0x0)) {
                      local_a4 = 0;
                    }
                    else {
                      local_a4 = (**(code **)*puVar18)();
                    }
                    local_88 = PTR_DAT_04bb2020 + 0x10;
                    pcStack_80 = pcVar20;
                    iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x1d98) + *(long *)(lVar17 + 0x1d90) +
                                          0x38,&local_88);
                    if (iVar13 != 0) {
                      FUN_0265fdb0(*(long *)(lVar17 + 0x1d98) + *(long *)(lVar17 + 0x1d90) + 0x1c);
                    }
                    if ((((local_a4 & 1) != 0) && (*(long *)(lVar17 + 0x1db0) != 0)) &&
                       (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x1db0) + 8),
                       puVar18 != (undefined8 *)0x0)) {
                      (**(code **)*puVar18)();
                    }
                  }
                }
                else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0))
                        && (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
                goto LAB_021f0b70;
                uVar4 = *param_1;
                if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
                  puVar18 = *(undefined8 **)(lVar17 + 0x10);
                  if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
                    lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
                    if (lVar17 != 0) {
                      lVar17 = lVar17 + 0x70;
LAB_021f0c78:
                      lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
                      if ((*(long **)(lVar17 + 0x24b0) == (long *)0x0) ||
                         (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x24b0),
                         puVar18 == (undefined8 *)0x0)) {
                        uVar14 = 0;
                      }
                      else {
                        uVar14 = (**(code **)*puVar18)();
                        uVar14 = uVar14 & 0xffffffff;
                      }
                      local_88 = PTR_DAT_04bb2020 + 0x10;
                      pcStack_80 = pcVar20;
                      iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x2498) + *(long *)(lVar17 + 0x2490)
                                            + 0x38,&local_88);
                      if (iVar13 != 0) {
                        FUN_0265fdb0(*(long *)(lVar17 + 0x2498) + *(long *)(lVar17 + 0x2490) + 0x1c)
                        ;
                      }
                      if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x24b0) != 0)) &&
                         (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x24b0) + 8),
                         puVar18 != (undefined8 *)0x0)) {
                        (**(code **)*puVar18)();
                      }
                    }
                  }
                  else if (((puVar18 != (undefined8 *)0x0) && ((long *)puVar18[0x26] != (long *)0x0)
                           ) && (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(),
                                lVar17 != 0)) goto LAB_021f0c78;
                  uVar4 = *param_1;
                  if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
                    puVar18 = *(undefined8 **)(lVar17 + 0x10);
                    if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
                      lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
                      if (lVar17 != 0) {
                        lVar17 = lVar17 + 0x70;
LAB_021f0d78:
                        lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
                        if ((*(long **)(lVar17 + 0x2bb0) == (long *)0x0) ||
                           (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x2bb0),
                           puVar18 == (undefined8 *)0x0)) {
                          uVar14 = 0;
                        }
                        else {
                          uVar14 = (**(code **)*puVar18)();
                          uVar14 = uVar14 & 0xffffffff;
                        }
                        local_88 = PTR_DAT_04bb2020 + 0x10;
                        pcStack_80 = pcVar20;
                        iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x2b98) +
                                              *(long *)(lVar17 + 0x2b90) + 0x38,&local_88);
                        if (iVar13 != 0) {
                          FUN_0265fdb0(*(long *)(lVar17 + 0x2b98) + *(long *)(lVar17 + 0x2b90) +
                                       0x1c);
                        }
                        if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x2bb0) != 0)) &&
                           (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x2bb0) + 8),
                           puVar18 != (undefined8 *)0x0)) {
                          (**(code **)*puVar18)();
                        }
                      }
                    }
                    else if (((puVar18 != (undefined8 *)0x0) &&
                             ((long *)puVar18[0x26] != (long *)0x0)) &&
                            (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0))
                    goto LAB_021f0d78;
                    uVar4 = *param_1;
                    if ((uVar4 < 10) && (lVar17 = *(long *)PTR_DAT_04bb46b0, lVar17 != 0)) {
                      puVar18 = *(undefined8 **)(lVar17 + 0x10);
                      if ((*(byte *)(lVar17 + 0x453) & 1) == 0) {
                        lVar17 = (**(code **)(*(long *)*puVar18 + 0x38))();
                        if (lVar17 != 0) {
                          lVar17 = lVar17 + 0x70;
LAB_021f0e90:
                          lVar17 = lVar17 + (ulong)uVar4 * 0x10798;
                          if ((*(long **)(lVar17 + 0x32b0) == (long *)0x0) ||
                             (puVar18 = (undefined8 *)**(long **)(lVar17 + 0x32b0),
                             puVar18 == (undefined8 *)0x0)) {
                            uVar14 = 0;
                          }
                          else {
                            uVar14 = (**(code **)*puVar18)();
                            uVar14 = uVar14 & 0xffffffff;
                          }
                          local_88 = PTR_DAT_04bb2020 + 0x10;
                          pcStack_80 = pcVar20;
                          iVar13 = FUN_02746e10(*(long *)(lVar17 + 0x3298) +
                                                *(long *)(lVar17 + 0x3290) + 0x38,&local_88);
                          if (iVar13 != 0) {
                            FUN_0265fdb0(*(long *)(lVar17 + 0x3298) + *(long *)(lVar17 + 0x3290) +
                                         0x1c);
                          }
                          if ((((uVar14 & 1) != 0) && (*(long *)(lVar17 + 0x32b0) != 0)) &&
                             (puVar18 = *(undefined8 **)(*(long *)(lVar17 + 0x32b0) + 8),
                             puVar18 != (undefined8 *)0x0)) {
                            (**(code **)*puVar18)();
                          }
                        }
                      }
                      else if (((puVar18 != (undefined8 *)0x0) &&
                               ((long *)puVar18[0x26] != (long *)0x0)) &&
                              (lVar17 = (**(code **)(*(long *)puVar18[0x26] + 0x38))(), lVar17 != 0)
                              ) goto LAB_021f0e90;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    if (bVar8) {
      if (*param_3 == 1) {
        *(undefined4 *)(lVar24 + 0x138) = 99999;
        *(undefined2 *)(lVar24 + 0x131) = 0x101;
        *(undefined8 *)(lVar24 + 0x140) = 0xffffffffffffffff;
      }
      else if ((uVar12 & uVar11) == 1) {
        *(undefined1 *)(lVar24 + 0x131) = 1;
        *(undefined8 *)(lVar24 + 0x134) = 0xffffffff;
        *(undefined8 *)(lVar24 + 0x140) = 0xffffffffffffffff;
        *(undefined2 *)(lVar24 + 0x132) = 0x101;
        *(byte *)(lVar24 + 0x130) = *(byte *)(lVar24 + 0x130) | 3;
      }
      else {
        lVar24 = *plVar25;
        uVar10 = FUN_0277d6c4(&local_70);
        for (lVar24 = *(long *)(lVar24 + 0x19f800); lVar24 != 0; lVar24 = *(long *)(lVar24 + 8)) {
          while (*(ushort *)(lVar24 + 0x20) <= uVar10) {
            if (uVar10 <= *(ushort *)(lVar24 + 0x20)) {
              uVar15 = *(undefined4 *)(lVar24 + 0x24);
              goto LAB_021f11c8;
            }
            lVar24 = *(long *)(lVar24 + 0x10);
            if (lVar24 == 0) goto LAB_021f1078;
          }
        }
LAB_021f1078:
        uVar15 = 0;
LAB_021f11c8:
        pbVar2[1] = 1;
        pbVar2[2] = 1;
        pbVar2[3] = 0;
        pbVar2[0x10] = 0xff;
        pbVar2[0x11] = 0xff;
        pbVar2[0x12] = 0xff;
        pbVar2[0x13] = 0xff;
        pbVar2[0x14] = 0xff;
        pbVar2[0x15] = 0xff;
        pbVar2[0x16] = 0xff;
        pbVar2[0x17] = 0xff;
        pbVar2[4] = 0xff;
        pbVar2[5] = 0xff;
        pbVar2[6] = 0xff;
        pbVar2[7] = 0xff;
        *(undefined4 *)(pbVar2 + 8) = uVar15;
        *pbVar2 = *pbVar2 | 3;
      }
    }
    else {
      lVar24 = *plVar25;
      uVar10 = FUN_0277d6c4(PTR_DAT_04bb37e0);
      lVar24 = *(long *)(lVar24 + 0x19f800);
      if (lVar24 == 0) {
        uVar15 = 0;
      }
      else {
        do {
          while (uVar10 < *(ushort *)(lVar24 + 0x20)) {
            lVar24 = *(long *)(lVar24 + 8);
            if (lVar24 == 0) goto LAB_021f0fc8;
          }
          if (uVar10 <= *(ushort *)(lVar24 + 0x20)) {
            uVar15 = *(undefined4 *)(lVar24 + 0x24);
            goto LAB_021f1084;
          }
          lVar24 = *(long *)(lVar24 + 0x10);
        } while (lVar24 != 0);
LAB_021f0fc8:
        uVar15 = 0;
      }
LAB_021f1084:
      *(undefined4 *)(pbVar2 + 8) = uVar15;
      pbVar2[1] = 1;
      pbVar2[2] = 1;
      pbVar2[0x10] = 0xff;
      pbVar2[0x11] = 0xff;
      pbVar2[0x12] = 0xff;
      pbVar2[0x13] = 0xff;
      pbVar2[0x14] = 0xff;
      pbVar2[0x15] = 0xff;
      pbVar2[0x16] = 0xff;
      pbVar2[0x17] = 0xff;
    }
  }
  if (lVar23 == 0) {
    return;
  }
  if (bVar9) {
    if (*param_3 == 1) {
      *(undefined4 *)(lVar23 + 0x138) = 99999;
      *(undefined8 *)(lVar23 + 0x140) = 0xffffffffffffffff;
      *(undefined1 *)(lVar23 + 0x131) = 1;
      puVar19 = (undefined1 *)(lVar23 + 0x132);
      goto LAB_021f119c;
    }
    lVar24 = *plVar25;
    uVar10 = FUN_0277d6c4(&local_78);
    for (lVar24 = *(long *)(lVar24 + 0x19f800); lVar24 != 0; lVar24 = *(long *)(lVar24 + 8)) {
      while (*(ushort *)(lVar24 + 0x20) <= uVar10) {
        if (uVar10 <= *(ushort *)(lVar24 + 0x20)) goto LAB_021f1180;
        lVar24 = *(long *)(lVar24 + 0x10);
        if (lVar24 == 0) goto LAB_021f1178;
      }
    }
  }
  else {
    lVar24 = *plVar25;
    uVar10 = FUN_0277d6c4(PTR_DAT_04bb37e0);
    for (lVar24 = *(long *)(lVar24 + 0x19f800); lVar24 != 0; lVar24 = *(long *)(lVar24 + 8)) {
      while (*(ushort *)(lVar24 + 0x20) <= uVar10) {
        if (uVar10 <= *(ushort *)(lVar24 + 0x20)) goto LAB_021f1180;
        lVar24 = *(long *)(lVar24 + 0x10);
        if (lVar24 == 0) goto LAB_021f1178;
      }
    }
  }
LAB_021f1178:
  uVar15 = 0;
LAB_021f1184:
  *(undefined4 *)(lVar16 + 8) = uVar15;
  *(undefined1 *)(lVar16 + 1) = 1;
  puVar19 = (undefined1 *)(lVar16 + 2);
  *(undefined8 *)(lVar16 + 0x10) = 0xffffffffffffffff;
LAB_021f119c:
  *puVar19 = 1;
  return;
LAB_021f1180:
  uVar15 = *(undefined4 *)(lVar24 + 0x24);
  goto LAB_021f1184;
}

