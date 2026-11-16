
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02892000(uint *param_1,long param_2)

{
  undefined *puVar1;
  undefined2 *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  bool bVar10;
  ushort uVar11;
  byte bVar12;
  undefined *puVar13;
  undefined2 uVar14;
  undefined1 uVar15;
  undefined1 uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  void *__s;
  ulong uVar21;
  ulong uVar22;
  int iVar23;
  long lVar24;
  long lVar25;
  uint *puVar26;
  uint *puVar27;
  uint *puVar28;
  uint *puVar29;
  ulong uVar30;
  long lVar31;
  undefined4 local_920;
  uint uStack_91c;
  uint local_918;
  uint uStack_914;
  uint local_910;
  uint uStack_90c;
  undefined8 local_908;
  uint *puStack_900;
  undefined *local_808;
  undefined2 local_800;
  undefined2 local_7fe;
  uint local_7fc;
  undefined8 local_7f8;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  int local_a0;
  uint local_98;
  uint local_94;
  undefined8 local_90;
  undefined8 local_88;
  uint *local_80;
  uint local_70 [4];
  
  puVar13 = PTR_DAT_04bb43c0;
  local_94 = *param_1;
  if (2 < local_94) {
    local_94 = 0;
  }
  if (1 < (int)local_94 && *(char *)(param_2 + 0x12) == '\x04') {
    uVar18 = 0;
    local_98 = 0x58;
    puVar1 = PTR_DAT_04bc0510 + 0x10;
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    do {
      puVar2 = (undefined2 *)((long)param_1 + ((long)((ulong)uVar18 << 0x20) >> 0x1d) + 4);
      uVar17 = FUN_0277d6c4(puVar2);
      lVar31 = *(long *)puVar13;
      lVar25 = lVar31;
      if (lVar31 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
          local_800 = *puVar2;
          local_7f8 = 0;
          local_7fe = *(undefined2 *)((long)param_1 + (long)(int)uVar18 * 8 + 6);
          local_7fc = param_1[(long)(int)uVar18 * 2 + 2];
          local_808 = puVar1;
          uVar17 = FUN_0277d6c4(&local_800);
          lVar25 = *(long *)puVar13;
          if (lVar25 == 0) {
LAB_02892204:
            uVar19 = 0;
          }
          else {
            lVar24 = *(long *)(lVar31 + 0x57e58);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((*(uint *)(lVar24 + 0x1d8) <= uVar17) ||
               (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) == 0))
            goto LAB_02892204;
            lVar24 = *(long *)PTR_DAT_04bc0428;
            uVar17 = FUN_0277d6c4(puVar2);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            lVar25 = *(long *)puVar13;
            if ((*(uint *)(lVar24 + 0x1d8) <= uVar17) ||
               (puVar27 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8),
               puVar27 == (uint *)0x0)) goto LAB_02892204;
            uVar17 = *puVar27;
            uVar19 = 0;
            if ((uVar17 != 0) && (puVar27 != (uint *)(ulong)uVar17)) {
              puVar29 = (uint *)((long)puVar27 - (long)(ulong)uVar17);
              uVar19 = 0;
              if (*puVar29 != 0) {
                uVar17 = puVar29[1];
                if ((uVar17 != 0) && ((ulong)(ushort)puVar29[2] != 0)) {
                  lVar24 = 0xc;
                  if (*(char *)((long)puVar29 + 10) != '\0') {
                    lVar24 = 0x1c;
                  }
                  lVar24 = (long)puVar29 + lVar24 + (ulong)(ushort)puVar29[2] * 8;
                  if (lVar24 != 0) {
                    uVar19 = 0;
                    if ((ulong)uVar17 != 0) {
                      uVar19 = (uint)((ulong)((long)puVar27 - lVar24) / (ulong)uVar17);
                    }
                    if (*puVar29 <= uVar19) {
                      uVar19 = 0xffffffff;
                    }
                    if ((uVar19 < *(uint *)PTR_DAT_04bc0068) &&
                       (uVar19 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc0068 + 8) + (long)(int)uVar19 * 2),
                       uVar19 < 0x13e)) goto LAB_02892208;
                  }
                }
                goto LAB_02892204;
              }
            }
          }
LAB_02892208:
          local_908 = (undefined **)CONCAT44(local_908._4_4_,uVar19);
          if (uVar19 == local_98) {
            return;
          }
        }
      }
      uVar18 = uVar18 + 1;
      lVar24 = lVar25;
    } while (uVar18 != 0x80);
    local_808 = PTR_DAT_04bbfe60 + 0x10;
    memset(&local_800,0,0x754);
    uVar18 = nn::os::GetSystemTick();
    local_ac = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
    local_a8 = (local_ac ^ local_ac >> 0x1e) * 0x6c078965 + 2;
    local_a4 = (local_a8 ^ local_a8 >> 0x1e) * 0x6c078965 + 3;
    local_a0 = (local_a4 ^ local_a4 >> 0x1e) * 0x6c078965 + 4;
    __s = (void *)FUN_01a451fc(&local_808);
    memset(__s,0,0x754);
    puStack_900 = &local_98;
    local_908 = &PTR_FUN_049ff4e8;
    FUN_008a1ba0(&local_808,&local_908);
    uVar18 = 0;
    local_908 = &PTR_FUN_049ff808;
    do {
      (**(code **)(local_808 + 0x10))(&local_90,&local_808,uVar18);
      lVar24 = (**(code **)(local_808 + 0x20))(&local_808);
      uVar17 = 1 << (ulong)(uVar18 & 0x1f);
      if ((*(uint *)(lVar24 + (ulong)(uVar18 >> 5) * 4) & uVar17) != 0) {
        lVar24 = *(long *)puVar13;
        uVar19 = FUN_0277d6c4(&local_90);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if (((uVar19 < *(uint *)(lVar24 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) &&
             (uVar21 = (*(code *)*local_908)(&local_908,&local_90), (uVar21 & 1) == 0))
          goto LAB_02892320;
        }
        lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
        lVar25 = (ulong)(uVar18 >> 5) * 4;
        *(uint *)(lVar24 + lVar25) = *(uint *)(lVar24 + lVar25) & (uVar17 ^ 0xffffffff);
      }
LAB_02892320:
      uVar18 = uVar18 + 1;
    } while (uVar18 != 15000);
    uVar18 = 0;
    puVar27 = param_1 + 0x4e3;
    do {
      lVar24 = *(long *)puVar13;
      puVar2 = (undefined2 *)((long)puVar27 + ((long)((ulong)uVar18 << 0x20) >> 0x1d));
      uVar17 = FUN_0277d6c4(puVar2);
      lVar25 = *(long *)puVar13;
      if (lVar25 != 0) {
        lVar24 = *(long *)(lVar24 + 0x57e58);
        uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
        if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
          local_80 = (uint *)0x0;
          local_90 = &PTR_FUN_04a36b50;
          local_88 = (uint *)CONCAT62(*(undefined6 *)((long)puVar27 + (long)(int)uVar18 * 8 + 2),
                                      *puVar2);
          uVar19 = FUN_0277d6c4(&local_88);
          uVar17 = 0;
          if (*(long *)puVar13 == 0) goto LAB_02892578;
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar17 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
            lVar24 = *(long *)PTR_DAT_04bc0428;
            uVar17 = FUN_0277d6c4(puVar2);
            uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if ((*(uint *)(lVar24 + 0x1d8) <= uVar17) ||
               (puVar29 = *(uint **)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8),
               puVar29 == (uint *)0x0)) goto LAB_02892574;
            uVar19 = *puVar29;
            local_80 = puVar29;
            uVar17 = 0;
            if ((uVar19 != 0) && (puVar29 != (uint *)(ulong)uVar19)) {
              puVar28 = (uint *)((long)puVar29 - (long)(ulong)uVar19);
              uVar17 = 0;
              if (*puVar28 != 0) {
                uVar17 = puVar28[1];
                if ((uVar17 != 0) && ((ulong)(ushort)puVar28[2] != 0)) {
                  lVar24 = 0xc;
                  if (*(char *)((long)puVar28 + 10) != '\0') {
                    lVar24 = 0x1c;
                  }
                  lVar24 = (long)puVar28 + lVar24 + (ulong)(ushort)puVar28[2] * 8;
                  if (lVar24 != 0) {
                    uVar19 = 0;
                    if ((ulong)uVar17 != 0) {
                      uVar19 = (uint)((ulong)((long)puVar29 - lVar24) / (ulong)uVar17);
                    }
                    if (*puVar28 <= uVar19) {
                      uVar19 = 0xffffffff;
                    }
                    if ((uVar19 < *(uint *)PTR_DAT_04bc0020) &&
                       (uVar11 = *(ushort *)
                                  (*(long *)(PTR_DAT_04bc0020 + 8) + (long)(int)uVar19 * 2),
                       uVar17 = (uint)uVar11, uVar11 < 0x5b6)) goto LAB_02892578;
                  }
                }
                goto LAB_02892574;
              }
            }
          }
          else {
LAB_02892574:
            uVar17 = 0;
          }
LAB_02892578:
          local_70[0] = uVar17;
          uVar17 = 0;
          puStack_900 = local_70;
          local_908 = &PTR_FUN_049ff858;
          do {
            (**(code **)(local_808 + 0x10))(&local_918,&local_808,uVar17);
            lVar24 = (**(code **)(local_808 + 0x20))(&local_808);
            uVar19 = 1 << (ulong)(uVar17 & 0x1f);
            if ((*(uint *)(lVar24 + (ulong)(uVar17 >> 5) * 4) & uVar19) != 0) {
              lVar24 = *(long *)puVar13;
              uVar20 = FUN_0277d6c4(&local_918);
              if (*(long *)puVar13 != 0) {
                lVar24 = *(long *)(lVar24 + 0x57e58);
                uVar20 = (uVar20 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                if (((uVar20 < *(uint *)(lVar24 + 0x1d8)) &&
                    (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar20 * 8) != 0)) &&
                   (uVar21 = (*(code *)*local_908)(&local_908,&local_918), (uVar21 & 1) == 0))
                goto LAB_028925b4;
              }
              lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
              lVar25 = (ulong)(uVar17 >> 5) * 4;
              *(uint *)(lVar24 + lVar25) = *(uint *)(lVar24 + lVar25) & (uVar19 ^ 0xffffffff);
            }
LAB_028925b4:
            uVar17 = uVar17 + 1;
          } while (uVar17 != 15000);
        }
      }
      uVar18 = uVar18 + 1;
    } while (uVar18 != 10);
    lVar25 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar24 = 0;
    uVar18 = 0;
    do {
      puVar29 = (uint *)(lVar25 + lVar24);
      lVar24 = lVar24 + 4;
      uVar17 = *puVar29 - (*puVar29 >> 1 & 0x55555555);
      uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
      uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
      uVar17 = uVar17 + (uVar17 >> 8);
      uVar18 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar18;
    } while (lVar24 != 0x754);
    if (uVar18 < 2) {
      uVar15 = DAT_0558600a;
      uVar14 = DAT_05586008;
      *(undefined1 *)((long)param_1 + 0x138e) = DAT_0558600a;
      *(undefined2 *)(param_1 + 0x4e3) = uVar14;
      *(undefined2 *)(param_1 + 0x4e5) = uVar14;
      *(undefined2 *)(param_1 + 0x4e7) = uVar14;
      *(undefined2 *)(param_1 + 0x4e9) = uVar14;
      *(undefined2 *)(param_1 + 0x4eb) = uVar14;
      *(undefined2 *)(param_1 + 0x4ed) = uVar14;
      *(undefined2 *)(param_1 + 0x4ef) = uVar14;
      *(undefined2 *)(param_1 + 0x4f1) = uVar14;
      *(undefined2 *)(param_1 + 0x4f3) = uVar14;
      uVar16 = DAT_0558600b;
      *(undefined2 *)(param_1 + 0x4f5) = uVar14;
      *(undefined1 *)((long)param_1 + 0x138f) = uVar16;
      uVar18 = DAT_0558600c;
      *(undefined1 *)((long)param_1 + 0x1396) = uVar15;
      *(undefined1 *)((long)param_1 + 0x1397) = uVar16;
      *(undefined1 *)((long)param_1 + 0x139e) = uVar15;
      *(undefined1 *)((long)param_1 + 0x139f) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13a6) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13a7) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13ae) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13af) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13b6) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13b7) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13be) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13bf) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13c6) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13c7) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13ce) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13cf) = uVar16;
      *(undefined1 *)((long)param_1 + 0x13d6) = uVar15;
      *(undefined1 *)((long)param_1 + 0x13d7) = uVar16;
      param_1[0x4e4] = uVar18;
      param_1[0x4e6] = uVar18;
      param_1[0x4e8] = uVar18;
      param_1[0x4ea] = uVar18;
      param_1[0x4ec] = uVar18;
      param_1[0x4ee] = uVar18;
      param_1[0x4f0] = uVar18;
      param_1[0x4f2] = uVar18;
      param_1[0x4f4] = uVar18;
      param_1[0x4f6] = uVar18;
    }
    lVar25 = (**(code **)(local_808 + 0x20))(&local_808);
    lVar24 = 0;
    iVar23 = 0;
    do {
      puVar29 = (uint *)(lVar25 + lVar24);
      lVar24 = lVar24 + 4;
      uVar18 = *puVar29 - (*puVar29 >> 1 & 0x55555555);
      uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
      uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
      uVar18 = uVar18 + (uVar18 >> 8);
      iVar23 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar23;
    } while (lVar24 != 0x754);
    if (iVar23 == 0) {
      puStack_900 = &local_98;
      local_908 = &PTR_FUN_049ff4e8;
      FUN_008a1ba0(&local_808,&local_908);
      uVar18 = 0;
      local_908 = &PTR_FUN_049ff808;
      do {
        (**(code **)(local_808 + 0x10))(&local_90,&local_808,uVar18);
        lVar24 = (**(code **)(local_808 + 0x20))(&local_808);
        uVar17 = 1 << (ulong)(uVar18 & 0x1f);
        if ((*(uint *)(lVar24 + (ulong)(uVar18 >> 5) * 4) & uVar17) != 0) {
          lVar24 = *(long *)puVar13;
          uVar19 = FUN_0277d6c4(&local_90);
          if (*(long *)puVar13 != 0) {
            lVar24 = *(long *)(lVar24 + 0x57e58);
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
            if (((uVar19 < *(uint *)(lVar24 + 0x1d8)) &&
                (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) &&
               (uVar21 = (*(code *)*local_908)(&local_908,&local_90), (uVar21 & 1) == 0))
            goto LAB_02892a14;
          }
          lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
          lVar25 = (ulong)(uVar18 >> 5) * 4;
          *(uint *)(lVar24 + lVar25) = *(uint *)(lVar24 + lVar25) & (uVar17 ^ 0xffffffff);
        }
LAB_02892a14:
        uVar18 = uVar18 + 1;
      } while (uVar18 != 15000);
      uVar21 = 2;
      bVar12 = 1;
    }
    else {
      lVar25 = (**(code **)(local_808 + 0x20))(&local_808);
      lVar24 = 0;
      iVar23 = 0;
      do {
        puVar29 = (uint *)(lVar25 + lVar24);
        lVar24 = lVar24 + 4;
        uVar18 = *puVar29 - (*puVar29 >> 1 & 0x55555555);
        uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
        uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
        uVar18 = uVar18 + (uVar18 >> 8);
        iVar23 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar23;
      } while (lVar24 != 0x754);
      if (iVar23 == 1) {
        FUN_02690004(&local_908);
        puVar29 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
        uVar18 = *puVar29 ^ *puVar29 << 0xb;
        uVar19 = puVar29[3];
        *puVar29 = puVar29[1];
        puVar29[1] = puVar29[2];
        uVar17 = uVar18 ^ uVar19;
        uVar18 = uVar18 >> 8 ^ uVar19 >> 0x13 ^ uVar17;
        puVar29[2] = uVar19;
        puVar29[3] = uVar18;
        local_918 = (uVar18 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
        uStack_914 = (local_918 ^ local_918 >> 0x1e) * 0x6c078965 + 2;
        local_910 = (uStack_914 ^ uStack_914 >> 0x1e) * 0x6c078965 + 3;
        uStack_90c = (local_910 ^ local_910 >> 0x1e) * 0x6c078965 + 4;
        lVar25 = (**(code **)(local_808 + 0x20))(&local_808);
        lVar24 = 0;
        iVar23 = 0;
        do {
          puVar29 = (uint *)(lVar25 + lVar24);
          lVar24 = lVar24 + 4;
          uVar18 = *puVar29 - (*puVar29 >> 1 & 0x55555555);
          uVar18 = (uVar18 >> 2 & 0x33333333) + (uVar18 & 0x33333333);
          uVar18 = uVar18 + (uVar18 >> 4) & 0xf0f0f0f;
          uVar18 = uVar18 + (uVar18 >> 8);
          iVar23 = (uVar18 + (uVar18 >> 0x10) & 0x3f) + iVar23;
        } while (lVar24 != 0x754);
        if (iVar23 == 0) {
          local_920 = _DAT_05586008;
          uStack_91c = DAT_0558600c;
        }
        else {
          lVar25 = (**(code **)(local_808 + 0x20))(&local_808);
          lVar24 = 0;
          uVar18 = 0;
          do {
            puVar29 = (uint *)(lVar25 + lVar24);
            lVar24 = lVar24 + 4;
            uVar17 = *puVar29 - (*puVar29 >> 1 & 0x55555555);
            uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
            uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
            uVar17 = uVar17 + (uVar17 >> 8);
            uVar18 = (uVar17 + (uVar17 >> 0x10) & 0x3f) + uVar18;
          } while (lVar24 != 0x754);
          uVar17 = local_918 ^ local_918 << 0xb;
          local_918 = uStack_914;
          uStack_914 = local_910;
          uVar17 = uVar17 >> 8 ^ uStack_90c >> 0x13 ^ uVar17 ^ uStack_90c;
          local_910 = uStack_90c;
          uStack_90c = uVar17;
          FUN_00889f80(&local_920,&local_808,(int)((ulong)uVar17 * (ulong)uVar18 >> 0x20) + 1);
          FUN_01a4c66c(&local_918,&local_920);
        }
        lVar24 = *(long *)puVar13;
        uVar18 = FUN_0277d6c4(&local_920);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_02891630(param_1,&local_920);
          }
        }
        local_88 = &local_98;
        local_90 = &PTR_FUN_049ff4e8;
        FUN_008a1ba0(&local_808,&local_90);
        uVar18 = 0;
        local_90 = &PTR_FUN_049ff808;
        do {
          (**(code **)(local_808 + 0x10))(local_70,&local_808,uVar18);
          lVar24 = (**(code **)(local_808 + 0x20))(&local_808);
          uVar17 = 1 << (ulong)(uVar18 & 0x1f);
          if ((*(uint *)(lVar24 + (ulong)(uVar18 >> 5) * 4) & uVar17) != 0) {
            lVar24 = *(long *)puVar13;
            uVar19 = FUN_0277d6c4(local_70);
            if (*(long *)puVar13 != 0) {
              lVar24 = *(long *)(lVar24 + 0x57e58);
              uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
              if (((uVar19 < *(uint *)(lVar24 + 0x1d8)) &&
                  (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) &&
                 (uVar21 = (*(code *)*local_90)(&local_90,local_70), (uVar21 & 1) == 0))
              goto LAB_02892b90;
            }
            lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
            lVar25 = (ulong)(uVar18 >> 5) * 4;
            *(uint *)(lVar24 + lVar25) = *(uint *)(lVar24 + lVar25) & (uVar17 ^ 0xffffffff);
          }
LAB_02892b90:
          uVar18 = uVar18 + 1;
        } while (uVar18 != 15000);
        lVar24 = (**(code **)(local_808 + 0x18))(&local_808);
        uVar18 = FUN_0277d6c4(&local_920);
        if ((uVar18 >> 3 & 0x1fff) < 0x753) {
          lVar25 = (ulong)((uVar18 & 0xffff) >> 5) * 4;
          *(uint *)(lVar24 + lVar25) =
               *(uint *)(lVar24 + lVar25) & (1 << (ulong)(uVar18 & 0x1f) ^ 0xffffffffU);
        }
        uVar21 = 1;
        bVar12 = 0;
      }
      else {
        uVar21 = 2;
        bVar12 = 1;
      }
    }
    FUN_02690004(&local_908);
    puVar29 = (uint *)nn::os::GetTlsValue(DAT_05ae7880);
    uVar19 = puVar29[3];
    uVar18 = *puVar29 ^ *puVar29 << 0xb;
    *puVar29 = puVar29[1];
    puVar29[1] = puVar29[2];
    uVar17 = uVar18 ^ uVar19;
    uVar18 = uVar18 >> 8 ^ uVar19 >> 0x13 ^ uVar17;
    puVar29[2] = uVar19;
    puVar29[3] = uVar18;
    uVar18 = (uVar18 ^ uVar17 >> 0x1e) * 0x6c078965 + 1;
    uVar17 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 2;
    local_90 = (undefined **)CONCAT44(uVar17,uVar18);
    uVar18 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 3;
    local_88 = (uint *)CONCAT44((uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 4,uVar18);
    FUN_01a4cc70(&local_90,&local_908,&local_808,uVar21,0,0,PTR_FUN_04bb67e0,0);
    uVar18 = nn::os::GetSystemTick();
    uVar19 = (uVar18 ^ uVar18 >> 0x1e) * 0x6c078965 + 1;
    uVar17 = uVar19 ^ uVar19 * 0x800;
    uVar18 = 0;
    uVar19 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 2;
    uVar19 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 3;
    puVar29 = param_1 + 0x4e5;
    uVar19 = (uVar19 ^ uVar19 >> 0x1e) * 0x6c078965 + 4;
    puVar28 = param_1 + 0x4e7;
    puVar3 = param_1 + 0x4e9;
    puVar4 = param_1 + 0x4eb;
    puVar5 = param_1 + 0x4ed;
    puVar6 = param_1 + 0x4ef;
    uVar30 = (uVar17 >> 8 ^ uVar19 >> 0x13 ^ uVar17 ^ uVar19) * uVar21 >> 0x20;
    puVar7 = param_1 + 0x4f5;
    puVar8 = param_1 + 0x4f1;
    puVar9 = param_1 + 0x4f3;
    do {
      lVar24 = (long)((ulong)uVar18 << 0x20) >> 0x1d;
      local_918 = *(uint *)((long)&local_908 + lVar24);
      uStack_914 = *(uint *)((long)&local_908 + lVar24 + 4);
      bVar10 = (bool)(bVar12 ^ 1);
      if ((int)uVar30 != 0) {
        bVar10 = true;
      }
      if (bVar10) {
        uVar22 = FUN_0288f130(param_1,&local_918);
      }
      else {
        uVar22 = FUN_02891630();
      }
      if ((uVar22 & 1) != 0) {
        lVar24 = *(long *)puVar13;
        uVar17 = FUN_0277d6c4(puVar27);
        lVar25 = *(long *)puVar13;
        puVar26 = puVar27;
        if (lVar25 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
            uVar17 = FUN_0277d6c4(puVar29);
            lVar24 = *(long *)puVar13;
            puVar26 = puVar29;
            if (lVar24 != 0) {
              lVar25 = *(long *)(lVar25 + 0x57e58);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar25 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                uVar17 = FUN_0277d6c4(puVar28);
                lVar25 = *(long *)puVar13;
                puVar26 = puVar28;
                if (lVar25 != 0) {
                  lVar24 = *(long *)(lVar24 + 0x57e58);
                  uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                  if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                    uVar17 = FUN_0277d6c4(puVar3);
                    lVar24 = *(long *)puVar13;
                    puVar26 = puVar3;
                    if (lVar24 != 0) {
                      lVar25 = *(long *)(lVar25 + 0x57e58);
                      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                      if ((uVar17 < *(uint *)(lVar25 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                        uVar17 = FUN_0277d6c4(puVar4);
                        lVar25 = *(long *)puVar13;
                        puVar26 = puVar4;
                        if (lVar25 != 0) {
                          lVar24 = *(long *)(lVar24 + 0x57e58);
                          uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                          if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
                             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                            uVar17 = FUN_0277d6c4(puVar5);
                            lVar24 = *(long *)puVar13;
                            puVar26 = puVar5;
                            if (lVar24 != 0) {
                              lVar25 = *(long *)(lVar25 + 0x57e58);
                              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
                              if ((uVar17 < *(uint *)(lVar25 + 0x1d8)) &&
                                 (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar17 * 8) != 0)
                                 ) {
                                uVar17 = FUN_0277d6c4(puVar6);
                                lVar25 = *(long *)puVar13;
                                puVar26 = puVar6;
                                if (lVar25 != 0) {
                                  lVar24 = *(long *)(lVar24 + 0x57e58);
                                  uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
                                  if ((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
                                     (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar17 * 8)
                                      != 0)) {
                                    uVar17 = FUN_0277d6c4(puVar8);
                                    lVar24 = *(long *)puVar13;
                                    puVar26 = puVar8;
                                    if (lVar24 != 0) {
                                      lVar25 = *(long *)(lVar25 + 0x57e58);
                                      uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8)
                                      ;
                                      if (((uVar17 < *(uint *)(lVar25 + 0x1d8)) &&
                                          (*(long *)(*(long *)(lVar25 + 0x1e0) +
                                                    (long)(int)uVar17 * 8) != 0)) &&
                                         (uVar17 = FUN_0277d6c4(puVar9), puVar26 = puVar9,
                                         *(long *)puVar13 != 0)) {
                                        lVar24 = *(long *)(lVar24 + 0x57e58);
                                        uVar17 = (uVar17 & 0xffff) -
                                                 (uint)*(ushort *)(lVar24 + 0x1f8);
                                        if (((uVar17 < *(uint *)(lVar24 + 0x1d8)) &&
                                            (*(long *)(*(long *)(lVar24 + 0x1e0) +
                                                      (long)(int)uVar17 * 8) != 0)) &&
                                           (uVar22 = FUN_0277d9a8(puVar7), puVar26 = puVar7,
                                           (uVar22 & 1) != 0)) goto LAB_02892ddc;
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
              }
            }
          }
        }
        *puVar26 = local_918;
        puVar26[1] = uStack_914;
      }
LAB_02892ddc:
      uVar18 = uVar18 + 1;
      uVar17 = (int)uVar21 - 1;
      uVar21 = (ulong)uVar17;
      uVar30 = (ulong)((int)uVar30 - 1);
    } while (uVar17 != 0);
    lVar24 = *(long *)puVar13;
    uVar18 = FUN_0277d6c4(puVar27);
    lVar25 = *(long *)puVar13;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4e3];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x138e);
        local_7fc = param_1[0x4e4];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar27);
          }
        }
        lVar25 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar29);
    lVar24 = *(long *)puVar13;
    if (lVar24 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4e5];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x1396);
        local_7fc = param_1[0x4e6];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar29);
          }
        }
        lVar24 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar28);
    lVar25 = *(long *)puVar13;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4e7];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x139e);
        local_7fc = param_1[0x4e8];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar28);
          }
        }
        lVar25 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar3);
    lVar24 = *(long *)puVar13;
    if (lVar24 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4e9];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13a6);
        local_7fc = param_1[0x4ea];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar3);
          }
        }
        lVar24 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar4);
    lVar25 = *(long *)puVar13;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4eb];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13ae);
        local_7fc = param_1[0x4ec];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar4);
          }
        }
        lVar25 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar5);
    lVar24 = *(long *)puVar13;
    if (lVar24 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4ed];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13b6);
        local_7fc = param_1[0x4ee];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar5);
          }
        }
        lVar24 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar6);
    lVar25 = *(long *)puVar13;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4ef];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13be);
        local_7fc = param_1[0x4f0];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar6);
          }
        }
        lVar25 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar8);
    lVar24 = *(long *)puVar13;
    if (lVar24 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4f1];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13c6);
        local_7fc = param_1[0x4f2];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar8);
          }
        }
        lVar24 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar9);
    lVar25 = *(long *)puVar13;
    if (lVar25 != 0) {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4f3];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13ce);
        local_7fc = param_1[0x4f4];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar25 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar9);
          }
        }
        lVar25 = *(long *)puVar13;
      }
    }
    uVar18 = FUN_0277d6c4(puVar7);
    lVar24 = *(long *)puVar13;
    if (lVar24 != 0) {
      lVar25 = *(long *)(lVar25 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
      if ((uVar18 < *(uint *)(lVar25 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
        local_7f8 = 0;
        local_800 = (undefined2)param_1[0x4f5];
        local_808 = PTR_DAT_04bc0510 + 0x10;
        local_7fe = *(undefined2 *)((long)param_1 + 0x13d6);
        local_7fc = param_1[0x4f6];
        uVar18 = FUN_0277d6c4(&local_800);
        if (*(long *)puVar13 != 0) {
          lVar24 = *(long *)(lVar24 + 0x57e58);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
          if ((uVar18 < *(uint *)(lVar24 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
            FUN_0277d6c4(puVar7);
          }
        }
      }
    }
  }
  return;
}

