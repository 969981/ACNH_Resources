
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffff7d8 : 0x027aa758 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_027aa170(undefined8 *param_1,long *param_2)

{
  undefined **ppuVar1;
  undefined2 *puVar2;
  undefined8 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  long lVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  undefined2 uVar9;
  ulong uVar10;
  char *pcVar11;
  undefined *puVar12;
  undefined *puVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  ulong uVar19;
  void *pvVar20;
  ulong uVar21;
  undefined4 uVar22;
  undefined8 *puVar23;
  ushort uVar24;
  undefined4 uVar25;
  uint *puVar26;
  uint *puVar27;
  long lVar28;
  ulong uVar29;
  int iVar30;
  long lVar31;
  undefined4 *puVar32;
  undefined2 *puVar33;
  undefined8 local_828;
  undefined8 local_820;
  undefined8 uStack_818;
  undefined8 local_810;
  undefined8 uStack_808;
  undefined **local_800;
  undefined8 local_7f8;
  uint *local_7f0;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  undefined8 local_90;
  undefined8 *puStack_88;
  uint local_70 [4];
  
  if ((char)param_2[5] != '\0') {
    local_828 = (undefined **)0xe58;
    FUN_0277d4ac(&local_828);
    local_800 = (undefined **)0xfffe;
    FUN_0277d4ac(&local_800);
    local_7f8._2_6_ = (uint6)((ulong)local_7f8 >> 0x10) & 0xffffffffff00;
    local_800 = local_828;
    local_7f8 = (char *)CONCAT62(local_7f8._2_6_,1);
    FUN_027a9730(param_1,&local_800);
  }
  if (0 < *param_2) {
    if (((DAT_0558a5c0 & 1) == 0) && (iVar18 = __cxa_guard_acquire(&DAT_0558a5c0), iVar18 != 0)) {
      DAT_0558a5b0 = PTR_DAT_04bb2020 + 0x10;
      DAT_0558a5b8 = "JohnnyQuestFinishFlagIsland";
      __cxa_guard_release(&DAT_0558a5c0);
    }
    uVar19 = FUN_0273f0a0(&DAT_0558a5b0);
    if ((uVar19 & 1) != 0) {
      local_828 = (undefined **)0x955;
      FUN_0277d4ac(&local_828);
      local_800 = (undefined **)0xfffe;
      FUN_0277d4ac(&local_800);
      local_7f8._2_6_ = (uint6)((ulong)local_7f8 >> 0x10) & 0xffffffffff00;
      local_800 = local_828;
      local_7f8 = (char *)CONCAT62(local_7f8._2_6_,1);
      FUN_027a9730(param_1,&local_800);
      FUN_0273f3c4(&DAT_0558a5b0,0);
    }
  }
  puVar13 = PTR_DAT_04bb43c0;
  if (((*(char *)((long)param_2 + 0x29) != '\0') || (*(char *)((long)param_2 + 0x2a) != '\0')) ||
     (*param_2 != 0)) {
    lVar28 = *(long *)PTR_DAT_04bb43c0;
    uVar15 = 0;
    ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
    do {
      puVar2 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar15 << 0x20) >> 0x1d));
      uVar14 = FUN_0277d6c4(puVar2);
      lVar31 = *(long *)puVar13;
      if (lVar31 != 0) {
        lVar28 = *(long *)(lVar28 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
        if ((uVar14 < *(uint *)(lVar28 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
          local_7f0 = (uint *)0x0;
          puVar33 = (undefined2 *)((long)param_1 + (long)(int)uVar15 * 8 + 2);
          puVar32 = (undefined4 *)((long)param_1 + (long)(int)uVar15 * 8 + 4);
          local_7f8._0_4_ = CONCAT22(*puVar33,*puVar2);
          local_7f8 = (char *)CONCAT44(*puVar32,(undefined4)local_7f8);
          local_800 = ppuVar1;
          uVar14 = FUN_0277d6c4(&local_7f8);
          lVar28 = *(long *)puVar13;
          if (lVar28 != 0) {
            lVar31 = *(long *)(lVar31 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar31 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              lVar31 = *(long *)PTR_DAT_04bc0428;
              uVar14 = FUN_0277d6c4(puVar2);
              puVar12 = PTR_DAT_04bb37e0;
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
              lVar28 = *(long *)puVar13;
              if ((uVar14 < *(uint *)(lVar31 + 0x1d8)) &&
                 (((puVar26 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar14 * 8),
                   puVar26 != (uint *)0x0 && (uVar14 = *puVar26, uVar14 != 0)) &&
                  (puVar26 != (uint *)(ulong)uVar14)))) {
                puVar27 = (uint *)((long)puVar26 - (long)(ulong)uVar14);
                if (((*puVar27 != 0) && (uVar14 = puVar27[1], uVar14 != 0)) &&
                   ((ulong)(ushort)puVar27[2] != 0)) {
                  lVar31 = 0xc;
                  if (*(char *)((long)puVar27 + 10) != '\0') {
                    lVar31 = 0x1c;
                  }
                  lVar31 = (long)puVar27 + lVar31 + (ulong)(ushort)puVar27[2] * 8;
                  if (lVar31 != 0) {
                    uVar16 = 0;
                    if ((ulong)uVar14 != 0) {
                      uVar16 = (uint)((ulong)((long)puVar26 - lVar31) / (ulong)uVar14);
                    }
                    if (*puVar27 <= uVar16) {
                      uVar16 = 0xffffffff;
                    }
                    if ((uVar16 < *(uint *)PTR_DAT_04bc00c8) &&
                       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar16 * 2) == 0x89)
                       ) {
                      *puVar2 = *(undefined2 *)PTR_DAT_04bb37e0;
                      *(undefined *)puVar33 = puVar12[2];
                      *(undefined *)((long)param_1 + (long)(int)uVar15 * 8 + 3) = puVar12[3];
                      *puVar32 = *(undefined4 *)(puVar12 + 4);
                    }
                  }
                }
              }
            }
          }
          lVar31 = lVar28;
        }
      }
      lVar28 = lVar31;
      puVar12 = PTR_DAT_04bb2020;
      uVar15 = uVar15 + 1;
    } while (uVar15 != 0x50);
    if (0 < *param_2) {
      local_800 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_7f8 = "MarketBuilt";
      uVar19 = FUN_0273f0a0(&local_800);
      if ((uVar19 & 1) != 0) {
        uVar15 = 0;
        uVar19 = 0;
        do {
          uVar29 = uVar19 << 3;
          uVar21 = uVar19 >> 0x1f;
          uVar14 = (int)uVar19 + 1;
          uVar19 = (ulong)uVar14;
          if (*(short *)((long)param_1 + (-uVar21 & 0xfffffff800000000 | uVar29)) != -2) {
            uVar15 = uVar15 + 1;
          }
        } while (uVar14 != 0x50);
        if (uVar15 < 10) {
          iVar18 = (int)*param_2;
          if ((int)(10 - uVar15) <= (int)*param_2) {
            iVar18 = 10 - uVar15;
          }
          if (0 < iVar18) {
            iVar30 = 0;
            ppuVar1 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
            do {
              local_7f8 = "BuiltTownOffice";
              local_800 = (undefined **)(puVar12 + 0x10);
              uVar14 = FUN_0273f0a0(&local_800);
              uVar15 = DAT_05582b70 ^ DAT_05582b70 << 0xb;
              DAT_05582b70 = DAT_05582b74;
              DAT_05582b74 = DAT_05582b78;
              uVar15 = uVar15 >> 8 ^ DAT_05582b7c >> 0x13 ^ uVar15 ^ DAT_05582b7c;
              DAT_05582b78 = DAT_05582b7c;
              uVar16 = (uint)((ulong)uVar15 * 100 >> 0x20);
              DAT_05582b7c = uVar15;
              if (((uVar14 & 1) == 0) || (4 < uVar16)) {
                if (uVar16 - 5 < 5 && ((uVar14 ^ 0xffffffff) & 1) == 0) {
                  local_800 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
                  memset(&local_7f8,0,0x754);
                  uVar15 = nn::os::GetSystemTick();
                  local_a4 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
                  local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
                  local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
                  local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
                  pvVar20 = (void *)FUN_01a451fc(&local_800);
                  memset(pvVar20,0,0x754);
                  local_90._0_4_ = 9;
                  local_828 = &PTR_FUN_049ff448;
                  local_820 = (uint *)&local_90;
                  FUN_008a1ba0(&local_800,&local_828);
                  local_90 = (undefined **)CONCAT44(local_90._4_4_,0xd);
                  local_828 = &PTR_FUN_049ff448;
                  local_820 = (uint *)&local_90;
                  FUN_008a1ba0(&local_800,&local_828);
                  uVar15 = 0;
                  local_70[0] = 0x4f;
                  local_820 = local_70;
                  local_828 = &PTR_FUN_049ff4e8;
                  do {
                    (*(code *)local_800[2])(&local_90,&local_800,uVar15);
                    lVar28 = (*(code *)local_800[4])(&local_800);
                    uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                    if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                      lVar28 = *(long *)puVar13;
                      uVar16 = FUN_0277d6c4(&local_90);
                      if (*(long *)puVar13 != 0) {
                        lVar28 = *(long *)(lVar28 + 0x57e58);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                        if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                            (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                           (uVar19 = (*(code *)*local_828)(&local_828,&local_90), (uVar19 & 1) != 0)
                           ) goto LAB_027aa9b0;
                      }
                      lVar28 = (*(code *)local_800[3])(&local_800);
                      lVar31 = (ulong)(uVar15 >> 5) * 4;
                      *(uint *)(lVar28 + lVar31) =
                           *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                    }
LAB_027aa9b0:
                    uVar15 = uVar15 + 1;
                  } while (uVar15 != 15000);
                  local_70[0] = local_70[0] & 0xffffff00;
                  FUN_01b02920(local_70,param_2 + 2,0);
                  uVar15 = 0;
                  local_820 = local_70;
                  local_828 = &PTR_FUN_049ff6a0;
                  do {
                    (*(code *)local_800[2])(&local_90,&local_800,uVar15);
                    lVar28 = (*(code *)local_800[4])(&local_800);
                    uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                    if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                      lVar28 = *(long *)puVar13;
                      uVar16 = FUN_0277d6c4(&local_90);
                      if (*(long *)puVar13 != 0) {
                        lVar28 = *(long *)(lVar28 + 0x57e58);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                        if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                            (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                           (uVar19 = (*(code *)*local_828)(&local_828,&local_90), (uVar19 & 1) != 0)
                           ) goto LAB_027aabd0;
                      }
                      lVar28 = (*(code *)local_800[3])(&local_800);
                      lVar31 = (ulong)(uVar15 >> 5) * 4;
                      *(uint *)(lVar28 + lVar31) =
                           *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                    }
LAB_027aabd0:
                    uVar15 = uVar15 + 1;
                  } while (uVar15 != 15000);
                  uVar15 = 0;
                  local_828 = &PTR_FUN_049ff808;
                  do {
                    (*(code *)local_800[2])(&local_90,&local_800,uVar15);
                    lVar28 = (*(code *)local_800[4])(&local_800);
                    uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                    if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                      lVar28 = *(long *)puVar13;
                      uVar16 = FUN_0277d6c4(&local_90);
                      if (*(long *)puVar13 != 0) {
                        lVar28 = *(long *)(lVar28 + 0x57e58);
                        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                        if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                            (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                           (uVar19 = (*(code *)*local_828)(&local_828,&local_90), (uVar19 & 1) == 0)
                           ) goto LAB_027aaca4;
                      }
                      lVar28 = (*(code *)local_800[3])(&local_800);
                      lVar31 = (ulong)(uVar15 >> 5) * 4;
                      *(uint *)(lVar28 + lVar31) =
                           *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                    }
LAB_027aaca4:
                    uVar15 = uVar15 + 1;
                  } while (uVar15 != 15000);
                  goto LAB_027ab110;
                }
                if (uVar16 - 10 < 5) {
                  lVar28 = *(long *)PTR_DAT_04bb46b0;
                  if (lVar28 == 0) {
LAB_027ab4f0:
                    uVar22 = *(undefined4 *)PTR_DAT_04bb37e0;
                    uVar25 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
LAB_027ab4fc:
                    local_90 = (undefined **)CONCAT44(uVar25,uVar22);
                  }
                  else {
                    puVar23 = *(undefined8 **)(lVar28 + 0x10);
                    if ((*(byte *)(lVar28 + 0x453) & 1) == 0) {
                      lVar28 = (**(code **)(*(long *)*puVar23 + 0x38))();
                      if (lVar28 == 0) goto LAB_027ab4f0;
                      lVar28 = lVar28 + 0x70;
                    }
                    else if (((puVar23 == (undefined8 *)0x0) ||
                             ((long *)puVar23[0x26] == (long *)0x0)) ||
                            (lVar28 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar28 == 0))
                    goto LAB_027ab4f0;
                    if ((*(long **)(lVar28 + 0x28) == (long *)0x0) ||
                       (puVar23 = (undefined8 *)**(long **)(lVar28 + 0x28),
                       puVar23 == (undefined8 *)0x0)) {
                      uVar15 = 1;
                    }
                    else {
                      uVar15 = (**(code **)*puVar23)();
                      uVar15 = uVar15 ^ 1;
                    }
                    lVar6 = *(long *)(lVar28 + 8);
                    lVar31 = *(long *)(lVar28 + 0x10);
                    local_800 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
                    memset(&local_7f8,0,0x754);
                    uVar14 = nn::os::GetSystemTick();
                    local_a4 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
                    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
                    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
                    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
                    pvVar20 = (void *)FUN_01a451fc(&local_800);
                    memset(pvVar20,0,0x754);
                    if (((DAT_0557ee20 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0557ee20), iVar17 != 0)) {
                      DAT_0557ede0 = 0x9a;
                      DAT_0557ede4 = 0x81f;
                      DAT_0557ede8 = 0x98;
                      DAT_0557edec = 0xe;
                      DAT_0557edf0 = 0x9b;
                      DAT_0557edf4 = 0x3c;
                      DAT_0557edf8 = 0x99;
                      DAT_0557edfc = 0xe70;
                      DAT_0557ee00 = 0x97;
                      DAT_0557ee04 = 0x7c0;
                      DAT_0557ee08 = 0x96;
                      DAT_0557ee0c = 0x1e0;
                      DAT_0557ee10 = 0x94;
                      DAT_0557ee14 = 0xf81;
                      DAT_0557ee18 = 0x9c;
                      DAT_0557ee1c = 0xc0f;
                      __cxa_guard_release(&DAT_0557ee20);
                    }
                    lVar31 = lVar31 + lVar6;
                    local_90 = (undefined **)
                               CONCAT44(local_90._4_4_,
                                        (&DAT_0557ede0)[(ulong)*(byte *)(lVar31 + 0x495085) * 2]);
                    local_820 = (uint *)&local_90;
                    local_828 = &PTR_FUN_049ff4e8;
                    FUN_008a1ba0(&local_800,&local_828);
                    if (((DAT_0557ee20 & 1) == 0) &&
                       (iVar17 = __cxa_guard_acquire(&DAT_0557ee20), iVar17 != 0)) {
                      DAT_0557ede0 = 0x9a;
                      DAT_0557ede4 = 0x81f;
                      DAT_0557ede8 = 0x98;
                      DAT_0557edec = 0xe;
                      DAT_0557edf0 = 0x9b;
                      DAT_0557edf4 = 0x3c;
                      DAT_0557edf8 = 0x99;
                      DAT_0557edfc = 0xe70;
                      DAT_0557ee00 = 0x97;
                      DAT_0557ee04 = 0x7c0;
                      DAT_0557ee08 = 0x96;
                      DAT_0557ee0c = 0x1e0;
                      DAT_0557ee10 = 0x94;
                      DAT_0557ee14 = 0xf81;
                      DAT_0557ee18 = 0x9c;
                      DAT_0557ee1c = 0xc0f;
                      __cxa_guard_release(&DAT_0557ee20);
                    }
                    local_90 = (undefined **)
                               CONCAT44(local_90._4_4_,
                                        (&DAT_0557ede0)[(ulong)*(byte *)(lVar31 + 0x495084) * 2]);
                    local_820 = (uint *)&local_90;
                    local_828 = &PTR_FUN_049ff4e8;
                    FUN_008a1ba0(&local_800,&local_828);
                    puVar26 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                    uVar4 = puVar26[3];
                    uVar14 = *puVar26 ^ *puVar26 << 0xb;
                    *puVar26 = puVar26[1];
                    puVar26[1] = puVar26[2];
                    uVar16 = uVar14 ^ uVar4;
                    uVar14 = uVar14 >> 8 ^ uVar4 >> 0x13 ^ uVar16;
                    puVar26[2] = uVar4;
                    puVar26[3] = uVar14;
                    uVar14 = (uVar14 ^ uVar16 >> 0x1e) * 0x6c078965 + 1;
                    uVar16 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 2;
                    local_828 = (undefined **)CONCAT44(uVar16,uVar14);
                    uVar14 = (uVar16 ^ uVar16 >> 0x1e) * 0x6c078965 + 3;
                    local_820 = (uint *)CONCAT44((uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 4,uVar14);
                    FUN_01a4ca70(&local_90,&local_828,&local_800,0,PTR_FUN_04bb67e0,0);
                    if ((((uVar15 & 1) == 0) && (*(long *)(lVar28 + 0x28) != 0)) &&
                       (puVar23 = *(undefined8 **)(*(long *)(lVar28 + 0x28) + 8),
                       puVar23 != (undefined8 *)0x0)) {
                      (**(code **)*puVar23)();
                    }
                  }
                }
                else {
                  if (uVar16 - 0xf < 5) {
                    uVar15 = nn::os::GetSystemTick();
                    uVar15 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
                    uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
                    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
                    uVar14 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965;
                    uVar24 = 0xaf0;
                    if (((uVar15 >> 8 ^ uVar14 + 4 >> 0x13 ^ uVar15 ^ uVar14) & 1) != 0) {
                      uVar24 = 0xaea;
                    }
                    local_90 = (undefined **)(ulong)uVar24;
                    FUN_0277d4ac(&local_90);
                    goto LAB_027aa5e4;
                  }
                  if (uVar16 - 0x14 < 5 && ((uVar14 ^ 0xffffffff) & 1) == 0) {
                    local_800 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
                    memset(&local_7f8,0,0x754);
                    uVar15 = nn::os::GetSystemTick();
                    local_a4 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
                    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
                    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
                    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
                    pvVar20 = (void *)FUN_01a451fc(&local_800);
                    memset(pvVar20,0,0x754);
                    FUN_01a44940(&local_800,3,0xffffffffffffffff);
                    uVar15 = 0;
                    local_70[0] = 4;
                    local_820 = local_70;
                    local_828 = &PTR_FUN_049ff448;
                    do {
                      (*(code *)local_800[2])(&local_90,&local_800,uVar15);
                      lVar28 = (*(code *)local_800[4])(&local_800);
                      uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                      if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                        lVar28 = *(long *)puVar13;
                        uVar16 = FUN_0277d6c4(&local_90);
                        if (*(long *)puVar13 != 0) {
                          lVar28 = *(long *)(lVar28 + 0x57e58);
                          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                          if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0))
                             && (uVar19 = (*(code *)*local_828)(&local_828,&local_90),
                                (uVar19 & 1) != 0)) goto LAB_027aaea0;
                        }
                        lVar28 = (*(code *)local_800[3])(&local_800);
                        lVar31 = (ulong)(uVar15 >> 5) * 4;
                        *(uint *)(lVar28 + lVar31) =
                             *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                      }
LAB_027aaea0:
                      uVar15 = uVar15 + 1;
                    } while (uVar15 != 15000);
                  }
                  else {
                    if (4 < uVar16 - 0x19 || ((uVar14 ^ 0xffffffff) & 1) != 0) {
                      if (uVar16 - 0x1e < 5) {
                        local_828 = (undefined **)0xc12;
                      }
                      else {
                        if (4 < uVar16 - 0x23) {
                          if (uVar16 - 0x28 < 5) {
                            FUN_01a44770(&local_800);
                            local_90 = (undefined **)CONCAT44(local_90._4_4_,99);
                            local_828 = &PTR_FUN_049ff448;
                          }
                          else {
                            if (4 < uVar16 - 0x2d || ((uVar14 ^ 0xffffffff) & 1) != 0) {
                              if (4 < uVar16 - 0x32 || ((uVar14 ^ 0xffffffff) & 1) != 0)
                              goto LAB_027ab4f0;
                              FUN_01a44770(&local_800);
                              local_90 = (undefined **)CONCAT44(local_90._4_4_,0x93);
                              local_820 = (uint *)&local_90;
                              local_828 = &PTR_FUN_049ff4e8;
                              FUN_008a1ba0(&local_800,&local_828);
                              FUN_00ba914c(&local_828);
                              FUN_01a4ca70(&local_90,&local_828,&local_800,0,PTR_FUN_04bb67e0,0);
                              FUN_01a4c66c(&local_828,&local_90);
                              goto LAB_027aa5e4;
                            }
                            FUN_01a44770(&local_800);
                            local_828 = &PTR_FUN_049ff4e8;
                            local_90 = (undefined **)CONCAT44(local_90._4_4_,0x92);
                          }
                          local_820 = (uint *)&local_90;
                          FUN_008a1ba0(&local_800,&local_828);
                          FUN_00ba914c(&local_828);
                          FUN_01a4ca70(&local_90,&local_828,&local_800,0,PTR_FUN_04bb67e0,0);
                          goto LAB_027aa5e4;
                        }
                        local_828 = (undefined **)0x9cf;
                      }
                      FUN_0277d4ac(&local_828);
                      FUN_01ad5d04(&local_800,&local_828);
                      uVar19 = FUN_01af0020(&local_800);
                      puVar23 = &local_828;
                      if ((uVar19 & 1) != 0) {
                        FUN_01af2bc0(&local_800,3);
                        puVar23 = &local_7f8;
                      }
                      uVar22 = *(undefined4 *)puVar23;
                      uVar25 = *(undefined4 *)((long)puVar23 + 4);
                      goto LAB_027ab4fc;
                    }
                    local_800 = (undefined **)(PTR_DAT_04bbfe60 + 0x10);
                    memset(&local_7f8,0,0x754);
                    uVar15 = nn::os::GetSystemTick();
                    local_a4 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
                    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
                    local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
                    local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
                    pvVar20 = (void *)(*(code *)local_800[3])(&local_800);
                    memset(pvVar20,0,0x754);
                    FUN_01a44940(&local_800,3,0xffffffffffffffff);
                    uVar15 = 0;
                    local_70[0] = 5;
                    local_820 = local_70;
                    local_828 = &PTR_FUN_049ff448;
                    do {
                      (*(code *)local_800[2])(&local_90,&local_800,uVar15);
                      lVar28 = (*(code *)local_800[4])(&local_800);
                      uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                      if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                        lVar28 = *(long *)puVar13;
                        uVar16 = FUN_0277d6c4(&local_90);
                        if (*(long *)puVar13 != 0) {
                          lVar28 = *(long *)(lVar28 + 0x57e58);
                          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                          if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                              (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0))
                             && (uVar19 = (*(code *)*local_828)(&local_828,&local_90),
                                (uVar19 & 1) != 0)) goto LAB_027ab070;
                        }
                        lVar28 = (*(code *)local_800[3])(&local_800);
                        lVar31 = (ulong)(uVar15 >> 5) * 4;
                        *(uint *)(lVar28 + lVar31) =
                             *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                      }
LAB_027ab070:
                      uVar15 = uVar15 + 1;
                    } while (uVar15 != 15000);
                  }
LAB_027ab110:
                  puVar26 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                  uVar16 = puVar26[3];
                  uVar15 = *puVar26 ^ *puVar26 << 0xb;
                  *puVar26 = puVar26[1];
                  puVar26[1] = puVar26[2];
                  uVar14 = uVar15 ^ uVar16;
                  uVar15 = uVar15 >> 8 ^ uVar16 >> 0x13 ^ uVar14;
                  puVar26[2] = uVar16;
                  puVar26[3] = uVar15;
                  uVar15 = (uVar15 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
                  uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
                  local_828 = (undefined **)CONCAT44(uVar14,uVar15);
                  uVar15 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
                  local_820 = (uint *)CONCAT44((uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4,uVar15);
                  FUN_01a4ca70(&local_90,&local_828,&local_800,0,PTR_FUN_04bb67e0,0);
                }
              }
              else {
                local_800 = ppuVar1;
                memset(&local_7f8,0,0x754);
                uVar15 = nn::os::GetSystemTick();
                local_a4 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 1;
                local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 2;
                local_9c = (local_a0 ^ local_a0 >> 0x1e) * 0x6c078965 + 3;
                local_98 = (local_9c ^ local_9c >> 0x1e) * 0x6c078965 + 4;
                pvVar20 = (void *)FUN_01a451fc(&local_800);
                memset(pvVar20,0,0x754);
                local_90 = (undefined **)((ulong)local_90 & 0xffffffff00000000);
                local_820 = (uint *)&local_90;
                local_828 = &PTR_FUN_049ff448;
                FUN_008a1ba0(&local_800,&local_828);
                local_810 = 0;
                uStack_808 = 0;
                local_828 = (undefined **)0x0;
                local_70[0] = 5;
                local_820 = (uint *)0x0;
                uStack_818 = 0;
                local_90._0_4_ = 5;
                local_70[0] = 2;
                local_90 = (undefined **)CONCAT44(local_90._4_4_,2);
                local_828 = (undefined **)0x24;
                local_70[0] = 2;
                uStack_808 = 0;
                local_810 = 0;
                uStack_818 = 0;
                local_820 = (uint *)0x0;
                uVar15 = 0;
                puStack_88 = &local_828;
                local_90 = &PTR_FUN_049ff510;
                do {
                  (*(code *)local_800[2])(local_70,&local_800,uVar15);
                  lVar28 = (*(code *)local_800[4])(&local_800);
                  uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                  if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                    lVar28 = *(long *)puVar13;
                    uVar16 = FUN_0277d6c4(local_70);
                    if (*(long *)puVar13 != 0) {
                      lVar28 = *(long *)(lVar28 + 0x57e58);
                      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                      if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                          (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                         (uVar19 = (*(code *)*local_90)(&local_90,local_70), (uVar19 & 1) != 0))
                      goto LAB_027aa800;
                    }
                    lVar28 = (*(code *)local_800[3])(&local_800);
                    lVar31 = (ulong)(uVar15 >> 5) * 4;
                    *(uint *)(lVar28 + lVar31) = *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                  }
LAB_027aa800:
                  uVar15 = uVar15 + 1;
                } while (uVar15 != 15000);
                local_70[0] = local_70[0] & 0xffffff00;
                FUN_01b02920(local_70,param_2 + 2,0);
                uVar15 = 0;
                local_820 = local_70;
                local_828 = &PTR_FUN_049ff6a0;
                do {
                  (*(code *)local_800[2])(&local_90,&local_800,uVar15);
                  lVar28 = (*(code *)local_800[4])(&local_800);
                  uVar14 = 1 << (ulong)(uVar15 & 0x1f);
                  if ((*(uint *)(lVar28 + (ulong)(uVar15 >> 5) * 4) & uVar14) != 0) {
                    lVar28 = *(long *)puVar13;
                    uVar16 = FUN_0277d6c4(&local_90);
                    if (*(long *)puVar13 != 0) {
                      lVar28 = *(long *)(lVar28 + 0x57e58);
                      uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                      if (((uVar16 < *(uint *)(lVar28 + 0x1d8)) &&
                          (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
                         (uVar19 = (*(code *)*local_828)(&local_828,&local_90), (uVar19 & 1) != 0))
                      goto LAB_027aaaa0;
                    }
                    lVar28 = (*(code *)local_800[3])(&local_800);
                    lVar31 = (ulong)(uVar15 >> 5) * 4;
                    *(uint *)(lVar28 + lVar31) = *(uint *)(lVar28 + lVar31) & (uVar14 ^ 0xffffffff);
                  }
LAB_027aaaa0:
                  uVar15 = uVar15 + 1;
                } while (uVar15 != 15000);
                puVar26 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar16 = puVar26[3];
                uVar15 = *puVar26 ^ *puVar26 << 0xb;
                *puVar26 = puVar26[1];
                puVar26[1] = puVar26[2];
                uVar14 = uVar15 ^ uVar16;
                uVar15 = uVar15 >> 8 ^ uVar16 >> 0x13 ^ uVar14;
                puVar26[2] = uVar16;
                puVar26[3] = uVar15;
                uVar15 = (uVar15 ^ uVar14 >> 0x1e) * 0x6c078965 + 1;
                uVar14 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 2;
                local_828 = (undefined **)CONCAT44(uVar14,uVar15);
                uVar15 = (uVar14 ^ uVar14 >> 0x1e) * 0x6c078965 + 3;
                local_820 = (uint *)CONCAT44((uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 4,uVar15);
                FUN_01a4ca70(&local_90,&local_828,&local_800,0,PTR_FUN_04bb67e0,0);
                FUN_01a4c66c(&local_828,&local_90);
              }
LAB_027aa5e4:
              local_800 = (undefined **)0xfffe;
              FUN_0277d4ac(&local_800);
              local_7f8._2_6_ = (uint6)((ulong)local_7f8 >> 0x10) & 0xffffffffff00;
              local_7f8 = (char *)CONCAT62(local_7f8._2_6_,1);
              local_800 = local_90;
              FUN_027a9730(param_1,&local_800);
              iVar30 = iVar30 + 1;
            } while (iVar30 != iVar18);
          }
        }
      }
    }
  }
  if ((*(char *)((long)param_2 + 0x2d) != '\0') || (*param_2 != 0)) {
    uVar29 = 0;
    uVar19 = 0;
    do {
      uVar21 = uVar19 << 3;
      uVar10 = uVar19 >> 0x1f;
      uVar15 = (int)uVar19 + 1;
      uVar19 = (ulong)uVar15;
      uVar14 = (uint)uVar29;
      if (*(short *)((long)param_1 + (-uVar10 & 0xfffffff800000000 | uVar21)) != -2) {
        uVar14 = uVar14 + 1;
      }
      uVar29 = (ulong)uVar14;
    } while (uVar15 != 0x50);
    if (uVar14 != 0) {
      uVar19 = 0;
      ppuVar1 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
      puVar23 = param_1;
      do {
        puVar13 = PTR_DAT_04bb43c0;
        puVar3 = puVar23;
        if (0x4f < uVar19) {
          puVar3 = param_1;
        }
        pcVar11 = (char *)*puVar3;
        local_828 = (undefined **)*puVar3;
        lVar28 = *(long *)PTR_DAT_04bb43c0;
        uVar15 = FUN_0277d6c4(&local_828);
        lVar31 = *(long *)puVar13;
        if (lVar31 != 0) {
          lVar28 = *(long *)(lVar28 + 0x57e58);
          uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
          if ((uVar15 < *(uint *)(lVar28 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
            local_7f0 = (uint *)0x0;
            local_800 = ppuVar1;
            local_7f8 = pcVar11;
            uVar15 = FUN_0277d6c4(&local_7f8);
            if (*(long *)PTR_DAT_04bb43c0 != 0) {
              lVar28 = *(long *)(lVar31 + 0x57e58);
              uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
              if ((uVar15 < *(uint *)(lVar28 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
                lVar28 = *(long *)PTR_DAT_04bc0428;
                uVar15 = FUN_0277d6c4(&local_828);
                uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
                if ((uVar15 < *(uint *)(lVar28 + 0x1d8)) &&
                   (puVar26 = *(uint **)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar15 * 8),
                   puVar26 != (uint *)0x0)) {
                  local_7f0 = puVar26;
                }
              }
            }
            if (*(char *)((long)param_2 + 0x2d) == '\0') {
LAB_027ab8b8:
              if ((*param_2 == 0) || (uVar21 = FUN_01b15b54(&local_800), (uVar21 & 1) == 0))
              goto LAB_027ab6d0;
              uVar22 = (undefined4)local_7f8;
              uVar25 = local_7f8._4_4_;
            }
            else {
              local_90 = (undefined **)CONCAT44(local_90._4_4_,0x59);
              if (local_7f0 == (uint *)0x0) {
                local_70[0] = 0xbc;
              }
              else {
                uVar15 = *local_7f0;
                local_70[0] = 0;
                if ((uVar15 != 0) && (local_7f0 != (uint *)(ulong)uVar15)) {
                  puVar26 = (uint *)((long)local_7f0 - (long)(ulong)uVar15);
                  local_70[0] = 0;
                  if (*puVar26 != 0) {
                    uVar15 = puVar26[1];
                    if ((uVar15 != 0) && ((ulong)(ushort)puVar26[2] != 0)) {
                      lVar28 = 0xc;
                      if (*(char *)((long)puVar26 + 10) != '\0') {
                        lVar28 = 0x1c;
                      }
                      lVar28 = (long)puVar26 + lVar28 + (ulong)(ushort)puVar26[2] * 8;
                      if (lVar28 != 0) {
                        uVar14 = 0;
                        if ((ulong)uVar15 != 0) {
                          uVar14 = (uint)((ulong)((long)local_7f0 - lVar28) / (ulong)uVar15);
                        }
                        if (*puVar26 <= uVar14) {
                          uVar14 = 0xffffffff;
                        }
                        if ((uVar14 < *(uint *)PTR_DAT_04bc00c8) &&
                           (local_70[0] = (uint)*(ushort *)
                                                 (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                                 (long)(int)uVar14 * 2), local_70[0] < 0xbd))
                        goto LAB_027ab8a4;
                      }
                    }
                    local_70[0] = 0;
                  }
                }
              }
LAB_027ab8a4:
              if (local_70[0] != 0x59) goto LAB_027ab8b8;
              local_90 = (undefined **)0xa52;
              FUN_0277d4ac(&local_90);
              uVar22 = (undefined4)local_90;
              uVar25 = local_90._4_4_;
            }
            *(undefined4 *)puVar3 = uVar22;
            *(undefined4 *)((long)puVar3 + 4) = uVar25;
          }
        }
LAB_027ab6d0:
        uVar19 = uVar19 + 1;
        puVar23 = puVar23 + 1;
      } while (uVar29 != uVar19);
    }
  }
  uVar19 = 0;
  uVar9 = *(undefined2 *)PTR_DAT_04bb37e0;
  uVar7 = PTR_DAT_04bb37e0[2];
  uVar8 = PTR_DAT_04bb37e0[3];
  uVar22 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  do {
    uVar29 = 0x4f;
    puVar32 = (undefined4 *)((long)param_1 + 0x27c);
    do {
      if (*(short *)(puVar32 + -3) == -2) {
        uVar25 = puVar32[-1];
        uVar5 = *puVar32;
        *(undefined2 *)(puVar32 + -1) = uVar9;
        *(undefined1 *)((long)puVar32 + -2) = uVar7;
        *(undefined1 *)((long)puVar32 + -1) = uVar8;
        *puVar32 = uVar22;
        puVar32[-3] = uVar25;
        puVar32[-2] = uVar5;
      }
      uVar29 = uVar29 - 1;
      puVar32 = puVar32 + -2;
    } while (uVar19 < uVar29);
    uVar19 = uVar19 + 1;
  } while (uVar19 != 0x4f);
  return;
}

