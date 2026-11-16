
void FUN_02893ea0(uint *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined2 uVar6;
  ushort uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  void *__s;
  ulong uVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  uint uVar19;
  uint *puVar20;
  uint *puVar21;
  uint *puVar22;
  long lVar23;
  undefined8 uVar24;
  uint local_834;
  undefined *local_830;
  undefined2 local_828;
  undefined2 local_826;
  uint local_824;
  uint *local_820;
  uint local_818;
  uint uStack_814;
  uint local_810;
  uint uStack_80c;
  undefined *local_808;
  undefined8 local_800;
  undefined8 local_7f8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  uint *puStack_88;
  undefined1 auStack_70 [16];
  
  puVar9 = PTR_DAT_04bb43c0;
  local_94 = *param_1;
  if (2 < local_94) {
    local_94 = 0;
  }
  if (1 < (int)local_94) {
    uVar11 = 0;
    local_98 = 0x55;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar17 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar2 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar11 << 0x20) >> 0x1d) + 4);
      uVar10 = FUN_0277d6c4(puVar2);
      lVar23 = *(long *)puVar9;
      lVar18 = lVar23;
      if (lVar23 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
          local_7f8 = 0;
          local_800 = (char *)CONCAT44(param_1[(long)(int)uVar11 * 2 + 2],
                                       CONCAT22(*(undefined2 *)
                                                 ((long)param_1 + (long)(int)uVar11 * 8 + 6),*puVar2
                                               ));
          local_808 = puVar1;
          uVar10 = FUN_0277d6c4(&local_800);
          lVar18 = *(long *)puVar9;
          if (lVar18 == 0) {
LAB_028940c4:
            uVar19 = 0;
          }
          else {
            lVar17 = *(long *)(lVar23 + 0x57e58);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
               (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8) == 0))
            goto LAB_028940c4;
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar10 = FUN_0277d6c4(puVar2);
            uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            lVar18 = *(long *)puVar9;
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar10) ||
               (puVar20 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar10 * 8),
               puVar20 == (uint *)0x0)) goto LAB_028940c4;
            uVar10 = *puVar20;
            uVar19 = 0;
            if ((uVar10 != 0) && (puVar20 != (uint *)(ulong)uVar10)) {
              puVar22 = (uint *)((long)puVar20 - (long)(ulong)uVar10);
              uVar19 = 0;
              if (*puVar22 != 0) {
                uVar10 = puVar22[1];
                if ((uVar10 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar22 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar22 + lVar17 + (ulong)(ushort)puVar22[2] * 8;
                  if (lVar17 != 0) {
                    uVar19 = 0;
                    if ((ulong)uVar10 != 0) {
                      uVar19 = (uint)((ulong)((long)puVar20 - lVar17) / (ulong)uVar10);
                    }
                    if (*puVar22 <= uVar19) {
                      uVar19 = 0xffffffff;
                    }
                    if ((uVar19 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar19 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar19 * 2),
                       uVar19 < 0x13e)) goto LAB_028940c8;
                  }
                }
                goto LAB_028940c4;
              }
            }
          }
LAB_028940c8:
          local_90 = (undefined **)CONCAT44(local_90._4_4_,uVar19);
          if (uVar19 == local_98) {
            return;
          }
        }
      }
      uVar11 = uVar11 + 1;
      lVar17 = lVar18;
    } while (uVar11 != 0x80);
    uVar15 = *(ulong *)(param_2 + 0x10);
    uVar24 = *(undefined8 *)PTR_DAT_04bb32f0;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    local_800 = "Carnival";
    local_808 = puVar1;
    uVar15 = FUN_00879dd0(uVar24,&local_808,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
    if ((uVar15 & 1) == 0) {
      uVar15 = *(ulong *)(param_2 + 0x10);
      puStack_88 = (uint *)0x40e90fb;
      local_90 = (undefined **)puVar1;
      uVar15 = FUN_0087a8f0(uVar24,&local_90,uVar15,uVar15 >> 0x10,uVar15 >> 0x18,0);
      if ((uVar15 & 1) == 0) {
        return;
      }
    }
    local_808 = PTR_DAT_04bbfe60 + 0x10;
    memset(&local_800,0,0x754);
    uVar11 = nn::os::GetSystemTick();
    local_ac = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
    local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)(**(code **)(local_808 + 0x18))(&local_808);
    memset(__s,0,0x754);
    puStack_88 = &local_98;
    local_90 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_808,&local_90);
    puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar3 = puVar20[3];
    uVar11 = 0;
    uVar10 = *puVar20 ^ *puVar20 << 0xb;
    *puVar20 = puVar20[1];
    puVar20[1] = puVar20[2];
    uVar19 = uVar10 ^ uVar3;
    uVar10 = uVar10 >> 8 ^ uVar3 >> 0x13 ^ uVar19;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    puVar20[2] = uVar3;
    puVar20[3] = uVar10;
    uVar10 = (uVar10 ^ uVar19 >> 0x1e) * 0x6c078965 + 1;
    uVar19 = (uVar10 ^ uVar10 >> 0x1e) * 0x6c078965 + 2;
    puVar20 = param_1 + 0x4cf;
    uVar3 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 3;
    uVar8 = (uVar3 ^ uVar3 >> 0x1e) * 0x6c078965 + 4;
    local_818 = uVar10;
    uStack_814 = uVar19;
    local_810 = uVar3;
    uStack_80c = uVar8;
    do {
      lVar18 = *(long *)puVar9;
      puVar2 = (undefined2 *)((long)puVar20 + ((long)((ulong)uVar11 << 0x20) >> 0x1d));
      uVar12 = FUN_0277d6c4(puVar2);
      lVar17 = *(long *)puVar9;
      if (lVar17 != 0) {
        lVar18 = *(long *)(lVar18 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar18 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          local_820 = (uint *)0x0;
          local_826 = *(undefined2 *)((long)puVar20 + (long)(int)uVar11 * 8 + 2);
          local_824 = puVar20[(long)(int)uVar11 * 2 + 1];
          local_828 = *puVar2;
          local_830 = puVar1;
          uVar13 = FUN_0277d6c4(&local_828);
          uVar12 = 0;
          if (*(long *)puVar9 == 0) goto LAB_02894428;
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar12 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            lVar17 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(puVar2);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
            if ((*(uint *)(lVar17 + 0x1d8) <= uVar12) ||
               (puVar22 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8),
               puVar22 == (uint *)0x0)) goto LAB_02894424;
            uVar13 = *puVar22;
            local_820 = puVar22;
            uVar12 = 0;
            if ((uVar13 != 0) && (puVar22 != (uint *)(ulong)uVar13)) {
              puVar21 = (uint *)((long)puVar22 - (long)(ulong)uVar13);
              uVar12 = 0;
              if (*puVar21 != 0) {
                uVar12 = puVar21[1];
                if ((uVar12 != 0) && ((ulong)(ushort)puVar21[2] != 0)) {
                  lVar17 = 0xc;
                  if (*(char *)((long)puVar21 + 10) != '\0') {
                    lVar17 = 0x1c;
                  }
                  lVar17 = (long)puVar21 + lVar17 + (ulong)(ushort)puVar21[2] * 8;
                  if (lVar17 != 0) {
                    uVar13 = 0;
                    if ((ulong)uVar12 != 0) {
                      uVar13 = (uint)((ulong)((long)puVar22 - lVar17) / (ulong)uVar12);
                    }
                    if (*puVar21 <= uVar13) {
                      uVar13 = 0xffffffff;
                    }
                    if ((uVar13 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar7 = *(ushort *)(*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar13 * 2)
                       , uVar12 = (uint)uVar7, uVar7 < 0x5b6)) goto LAB_02894428;
                  }
                }
                goto LAB_02894424;
              }
            }
          }
          else {
LAB_02894424:
            uVar12 = 0;
          }
LAB_02894428:
          local_834 = uVar12;
          uVar12 = 0;
          puStack_88 = &local_834;
          local_90 = &PTR_FUN_049ff858;
          do {
            (**(code **)(local_808 + 0x10))(auStack_70,&local_808,uVar12);
            lVar17 = (**(code **)(local_808 + 0x20))(&local_808);
            uVar13 = 1 << (ulong)(uVar12 & 0x1f);
            if ((*(uint *)(lVar17 + (ulong)(uVar12 >> 5) * 4) & uVar13) != 0) {
              lVar17 = *(long *)puVar9;
              uVar14 = FUN_0277d6c4(auStack_70);
              if (*(long *)puVar9 != 0) {
                lVar17 = *(long *)(lVar17 + 0x57e58);
                uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if (((uVar14 < *(uint *)(lVar17 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) &&
                   (uVar15 = (*(code *)*local_90)(&local_90,auStack_70), (uVar15 & 1) == 0))
                goto LAB_02894470;
              }
              lVar17 = (**(code **)(local_808 + 0x18))(&local_808);
              lVar18 = (ulong)(uVar12 >> 5) * 4;
              *(uint *)(lVar17 + lVar18) = *(uint *)(lVar17 + lVar18) & (uVar13 ^ 0xffffffff);
            }
LAB_02894470:
            uVar12 = uVar12 + 1;
          } while (uVar12 != 15000);
        }
      }
      uVar11 = uVar11 + 1;
    } while (uVar11 != 10);
    uVar11 = 0;
    local_90 = &PTR_FUN_049ff808;
    do {
      (**(code **)(local_808 + 0x10))(&local_830,&local_808,uVar11);
      lVar17 = (**(code **)(local_808 + 0x20))(&local_808);
      uVar12 = 1 << (ulong)(uVar11 & 0x1f);
      if ((*(uint *)(lVar17 + (ulong)(uVar11 >> 5) * 4) & uVar12) != 0) {
        lVar17 = *(long *)puVar9;
        uVar13 = FUN_0277d6c4(&local_830);
        if (*(long *)puVar9 != 0) {
          lVar17 = *(long *)(lVar17 + 0x57e58);
          uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
          if (((uVar13 < *(uint *)(lVar17 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) &&
             (uVar15 = (*(code *)*local_90)(&local_90,&local_830), (uVar15 & 1) == 0))
          goto LAB_02894550;
        }
        lVar17 = (**(code **)(local_808 + 0x18))(&local_808);
        lVar18 = (ulong)(uVar11 >> 5) * 4;
        *(uint *)(lVar17 + lVar18) = *(uint *)(lVar17 + lVar18) & (uVar12 ^ 0xffffffff);
      }
LAB_02894550:
      uVar11 = uVar11 + 1;
    } while (uVar11 != 15000);
    lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar17 = 0;
    iVar16 = 0;
    do {
      puVar22 = (uint *)(lVar18 + lVar17);
      lVar17 = lVar17 + 4;
      uVar11 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      iVar16 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar16;
    } while (lVar17 != 0x754);
    if (iVar16 != 0) {
      lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
      lVar17 = 0;
      iVar16 = 0;
      do {
        puVar22 = (uint *)(lVar18 + lVar17);
        lVar17 = lVar17 + 4;
        uVar11 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
        uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
        uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
        uVar11 = uVar11 + (uVar11 >> 8);
        iVar16 = (uVar11 + (uVar11 >> 0x10) & 0x3f) + iVar16;
      } while (lVar17 != 0x754);
      if (iVar16 == 0) {
        local_90 = *(undefined ***)PTR_DAT_04bb37e0;
      }
      else {
        lVar18 = (**(code **)(local_808 + 0x20))(&local_808);
        lVar17 = 0;
        uVar11 = 0;
        do {
          puVar22 = (uint *)(lVar18 + lVar17);
          lVar17 = lVar17 + 4;
          uVar12 = *puVar22 - (*puVar22 >> 1 & 0x55555555);
          uVar12 = (uVar12 >> 2 & 0x33333333) + (uVar12 & 0x33333333);
          uVar12 = uVar12 + (uVar12 >> 4) & 0xf0f0f0f;
          uVar12 = uVar12 + (uVar12 >> 8);
          uVar11 = (uVar12 + (uVar12 >> 0x10) & 0x3f) + uVar11;
        } while (lVar17 != 0x754);
        uVar10 = uVar10 ^ uVar10 * 0x800;
        uStack_80c = uVar10 >> 8 ^ uVar8 >> 0x13 ^ uVar10 ^ uVar8;
        local_818 = uVar19;
        uStack_814 = uVar3;
        local_810 = uVar8;
        FUN_00889f80(&local_90,&local_808,(int)((ulong)uStack_80c * (ulong)uVar11 >> 0x20) + 1);
        FUN_01a4c66c(&local_818,&local_90);
      }
      lVar17 = *(long *)puVar9;
      uVar11 = FUN_0277d6c4(&local_90);
      if (*(long *)puVar9 != 0) {
        lVar17 = *(long *)(lVar17 + 0x57e58);
        uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
        if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
          FUN_02891630(param_1,&local_90);
          puVar1 = PTR_DAT_04bb37e0;
          uVar4 = PTR_DAT_04bb37e0[2];
          uVar6 = *(undefined2 *)PTR_DAT_04bb37e0;
          *(undefined1 *)((long)param_1 + 0x133e) = uVar4;
          *(undefined2 *)(param_1 + 0x4cf) = uVar6;
          *(undefined2 *)(param_1 + 0x4d1) = uVar6;
          *(undefined2 *)(param_1 + 0x4d3) = uVar6;
          *(undefined2 *)(param_1 + 0x4d5) = uVar6;
          *(undefined2 *)(param_1 + 0x4d7) = uVar6;
          *(undefined2 *)(param_1 + 0x4d9) = uVar6;
          *(undefined2 *)(param_1 + 0x4db) = uVar6;
          *(undefined2 *)(param_1 + 0x4dd) = uVar6;
          *(undefined2 *)(param_1 + 0x4df) = uVar6;
          uVar5 = puVar1[3];
          *(undefined2 *)(param_1 + 0x4e1) = uVar6;
          *(undefined1 *)((long)param_1 + 0x133f) = uVar5;
          uVar11 = *(uint *)(puVar1 + 4);
          *(undefined1 *)((long)param_1 + 0x1346) = uVar4;
          *(undefined1 *)((long)param_1 + 0x1347) = uVar5;
          *(undefined1 *)((long)param_1 + 0x134e) = uVar4;
          *(undefined1 *)((long)param_1 + 0x134f) = uVar5;
          *(undefined1 *)((long)param_1 + 0x1356) = uVar4;
          *(undefined1 *)((long)param_1 + 0x1357) = uVar5;
          *(undefined1 *)((long)param_1 + 0x135e) = uVar4;
          *(undefined1 *)((long)param_1 + 0x135f) = uVar5;
          *(undefined1 *)((long)param_1 + 0x1366) = uVar4;
          *(undefined1 *)((long)param_1 + 0x1367) = uVar5;
          *(undefined1 *)((long)param_1 + 0x136e) = uVar4;
          *(undefined1 *)((long)param_1 + 0x136f) = uVar5;
          *(undefined1 *)((long)param_1 + 0x1376) = uVar4;
          *(undefined1 *)((long)param_1 + 0x1377) = uVar5;
          *(undefined1 *)((long)param_1 + 0x137e) = uVar4;
          *(undefined1 *)((long)param_1 + 0x137f) = uVar5;
          *(undefined1 *)((long)param_1 + 0x1386) = uVar4;
          *(undefined1 *)((long)param_1 + 4999) = uVar5;
          lVar18 = *(long *)puVar9;
          param_1[0x4d0] = uVar11;
          param_1[0x4d2] = uVar11;
          param_1[0x4d4] = uVar11;
          param_1[0x4d6] = uVar11;
          param_1[0x4d8] = uVar11;
          param_1[0x4da] = uVar11;
          param_1[0x4dc] = uVar11;
          param_1[0x4de] = uVar11;
          param_1[0x4e0] = uVar11;
          param_1[0x4e2] = uVar11;
          uVar11 = FUN_0277d6c4(puVar20);
          lVar17 = *(long *)puVar9;
          if (lVar17 != 0) {
            lVar18 = *(long *)(lVar18 + 0x57e58);
            uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar18 + 0x1f8);
            if ((uVar11 < *(uint *)(lVar18 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar18 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
              puVar20 = param_1 + 0x4d1;
              uVar11 = FUN_0277d6c4(puVar20);
              if (*(long *)puVar9 != 0) {
                lVar17 = *(long *)(lVar17 + 0x57e58);
                uVar11 = (uVar11 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((uVar11 < *(uint *)(lVar17 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar11 * 8) != 0)) {
                  puVar20 = param_1 + 0x4d3;
                  uVar15 = FUN_0277d9a8(puVar20);
                  if ((uVar15 & 1) != 0) {
                    puVar20 = param_1 + 0x4d5;
                    uVar15 = FUN_0277d9a8(puVar20);
                    if ((uVar15 & 1) != 0) {
                      puVar20 = param_1 + 0x4d7;
                      uVar15 = FUN_0277d9a8(puVar20);
                      if ((uVar15 & 1) != 0) {
                        puVar20 = param_1 + 0x4d9;
                        uVar15 = FUN_0277d9a8(puVar20);
                        if ((uVar15 & 1) != 0) {
                          puVar20 = param_1 + 0x4db;
                          uVar15 = FUN_0277d9a8(puVar20);
                          if ((uVar15 & 1) != 0) {
                            puVar20 = param_1 + 0x4dd;
                            uVar15 = FUN_0277d9a8(puVar20);
                            if ((uVar15 & 1) != 0) {
                              puVar20 = param_1 + 0x4df;
                              uVar15 = FUN_0277d9a8(puVar20);
                              if ((uVar15 & 1) != 0) {
                                puVar20 = param_1 + 0x4e1;
                                uVar15 = FUN_0277d9a8(puVar20);
                                if ((uVar15 & 1) != 0) {
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
          *puVar20 = (uint)local_90;
          puVar20[1] = local_90._4_4_;
        }
      }
    }
  }
  return;
}

