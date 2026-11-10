
undefined8 FUN_0027c1d0(long param_1)

{
  undefined *puVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  undefined8 *puVar7;
  byte bVar8;
  byte bVar9;
  char cVar10;
  byte bVar11;
  ushort uVar12;
  undefined4 uVar13;
  uint uVar14;
  long lVar15;
  long *plVar16;
  ulong uVar17;
  ulong uVar18;
  long *plVar19;
  undefined8 uVar20;
  long lVar21;
  long *plVar22;
  long *plVar23;
  byte *pbVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  undefined **ppuVar28;
  long *plVar29;
  bool bVar30;
  long lVar31;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined *local_1f0;
  ulong local_1e8;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
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
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  int local_70;
  ErrorResultVariant aEStack_6c [12];
  
  if (*(ulong *)(*(long *)PTR_DAT_04bcb8c0 + 0x30) < *(ulong *)(param_1 + 0x58)) {
    local_70 = 0;
    local_1f0 = (undefined *)((ulong)local_1f0 & 0xffffffff00000000);
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_6c,(Result *)&local_1f0);
    plVar29 = (long *)PTR_DAT_04bcd350;
    bVar8 = FUN_0026bfe0(*(undefined8 *)PTR_DAT_04bcd350);
    bVar9 = FUN_0026be6c(*plVar29);
    plVar23 = (long *)PTR_DAT_04bc1510;
    if (0x1f < (bVar9 | bVar8)) {
      return 0;
    }
    lVar15 = FUN_002ba790(*(undefined8 *)PTR_DAT_04bc1510);
    if (*(long *)(lVar15 + 0x98) != 0) {
      cVar2 = *(char *)(param_1 + 0x105);
      lVar15 = *plVar29;
      plVar16 = (long *)FUN_002ba788(*plVar23);
      FUN_002b3fa8(auStack_f0);
      uVar17 = FUN_0026c870(*plVar29);
      if (((uVar17 & 1) != 0) && (*(char *)(param_1 + 0x105) == '\0')) {
        FUN_002b440c(plVar16 + 1);
      }
      if (*(short *)(param_1 + 0xe6) == 0) {
        bVar30 = false;
        uVar26 = *(uint *)(lVar15 + 0xb8);
        puVar7 = (undefined8 *)PTR_DAT_04bc1510;
      }
      else {
        bVar30 = false;
        lVar31 = 0;
        uVar17 = 0;
        uVar26 = 0;
        puVar1 = PTR_DAT_04bcba18 + 0x10;
        do {
          bVar3 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
          uVar18 = FUN_00269a70(lVar15,bVar3);
          if ((uVar18 & 1) == 0) {
LAB_0027c3c8:
            plVar19 = (long *)(**(code **)(*plVar16 + 0x30))
                                        (plVar16,*(long *)(param_1 + 0xa8) + lVar31);
            if (plVar19 == (long *)0x0) {
              FUN_002b4368(*(long *)(param_1 + 0xa8) + lVar31);
              uVar18 = FUN_0021fea0();
              if ((uVar18 & 1) != 0) {
                plVar19 = (long *)FUN_002ba790(*plVar23);
                uVar20 = FUN_002b4368(*(long *)(param_1 + 0xa8) + lVar31);
                plVar19 = (long *)(**(code **)(*plVar19 + 0x70))(plVar19,uVar20);
                if ((plVar19 != (long *)0x0) &&
                   ((lVar21 = FUN_002ba790(*plVar23), plVar19 != *(long **)(lVar21 + 0x98) ||
                    (cVar6 = *(char *)(*(long *)(param_1 + 0xb0) + uVar17),
                    cVar10 = FUN_0026bfe0(*plVar29), plVar23 = (long *)PTR_DAT_04bc1510,
                    cVar6 == cVar10)))) {
                  (**(code **)(*plVar16 + 0x20))(&local_1f0,plVar16,plVar19,auStack_f0);
                  if ((int)local_1f0 != 0) goto LAB_0027c3e8;
                }
                uVar13 = FUN_002b43fc(*(long *)(param_1 + 0xa8) + lVar31);
                plVar19 = (long *)(**(code **)(*plVar16 + 0x40))(plVar16,uVar13);
                if (plVar19 != (long *)0x0) {
                  if (2 < *(int *)((long)plVar19 + 0x4c) - 5U) goto LAB_0027c3e8;
                  local_1e8 = local_1e8 & 0xffffffff00000000;
                  local_1f0 = (undefined *)0x800000000000;
                  (**(code **)(*plVar19 + 0x28))(plVar19,&local_1f0);
                  uVar18 = (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
                  if ((uVar18 < 0x20) &&
                     (pbVar24 = (byte *)(param_1 + uVar18 + 0x80),
                     (ushort)*pbVar24 < *(ushort *)(param_1 + 0xa0))) {
                    *pbVar24 = 0xff;
                    uVar18 = (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
                  }
                  if ((*(byte *)(plVar19 + 7) < 0x20) &&
                     ((uint)*(byte *)(plVar19 + 7) != (uint)uVar18)) goto LAB_0027c5c0;
                  goto LAB_0027c5c8;
                }
              }
            }
            else {
LAB_0027c3e8:
              bVar4 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
              bVar11 = *(byte *)(plVar19 + 7);
              if (0x1f < bVar11 || bVar11 == bVar4) {
                if (0x1f < bVar11 && *(int *)((long)plVar19 + 0x4c) == 5) {
                  uVar20 = FUN_0026c88c(*plVar29);
                  lVar21 = FUN_002ba790(*plVar23);
                  uVar5 = *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar17);
                  FUN_00282b98(&local_1f0,uVar20,*(undefined1 *)(*(long *)(lVar21 + 0x98) + 0x38),
                               uVar5,uVar5);
                  bVar4 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
                  bVar30 = true;
                }
                FUN_002b3cf8(plVar19,bVar4);
                uVar20 = FUN_002b43ec(*(long *)(param_1 + 0xa8) + lVar31);
                FUN_002b3dac(plVar19,uVar20);
                *(undefined2 *)((long)plVar19 + 0xb2) =
                     *(undefined2 *)(*(long *)(param_1 + 0xb8) + uVar17 * 2);
                goto LAB_0027c31c;
              }
              uVar18 = FUN_00269a70(lVar15,bVar11);
              if ((uVar18 & 1) != 0) {
                if (*(byte *)(plVar19 + 7) == bVar8) goto LAB_0027ca20;
LAB_0027c5c0:
                FUN_00269b00(lVar15);
              }
LAB_0027c5c8:
              (**(code **)(*(long *)plVar19[0x14] + 0x30))((long *)plVar19[0x14],plVar19);
              (**(code **)(*plVar16 + 0x78))(plVar16,plVar19);
              uVar20 = FUN_0026c8a4(*plVar29);
              FUN_00262da0(uVar20,plVar19);
              (**(code **)(*plVar19 + 0x20))(plVar19);
              FUN_00273c40(plVar19);
              plVar22 = (long *)FUN_002ba790(*plVar23);
              (**(code **)(*plVar22 + 0x28))(plVar22,plVar19);
              bVar30 = true;
            }
            bVar11 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
            if (bVar11 == bVar8) goto LAB_0027ca20;
            if (bVar11 == bVar9) {
              uVar18 = FUN_0026afd0(*plVar29);
              if (((uVar18 & 1) == 0) || (*(char *)(*(long *)(*plVar29 + 0x38) + 0x84) == '\0'))
              goto LAB_0027ca20;
              bVar11 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
            }
            if (bVar11 < bVar8) {
              if (cVar2 == '\0') {
                FUN_002ba790(*plVar23);
                uVar12 = FUN_002b53fc();
                if (*(ushort *)(*plVar23 + 0x58) <= uVar12) goto LAB_0027ca20;
                uVar20 = FUN_002b43ec(*(long *)(param_1 + 0xa8) + lVar31);
                uVar13 = FUN_002b43f4(*(long *)(param_1 + 0xa8) + lVar31);
                plVar23 = (long *)FUN_002ba790(*plVar23);
                plVar23 = (long *)(**(code **)(*plVar23 + 0x20))(plVar23,uVar20,uVar13);
                uVar5 = *(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar17);
                FUN_002b4378(&local_1f0,*(long *)(param_1 + 0xa8) + lVar31);
                (**(code **)(*plVar23 + 0x18))(plVar23,uVar5,&local_1f0);
                local_1f0 = puVar1;
                FUN_0021f584(&local_1e8);
                lVar21 = plVar23[0x13];
                bVar11 = FUN_0027db70(param_1);
                if (*(ushort *)(param_1 + 0xa0) <= (ushort)bVar11) goto LAB_0027ca20;
                FUN_0025fc04(&local_1f0,lVar21,*(long *)(param_1 + 0x78) + (ulong)bVar11 * 0x30,
                             plVar23,*(long *)(param_1 + 0xa8) + lVar31,
                             *(undefined4 *)(plVar23[0x12] + 0x50));
                FUN_00229780(&local_70,&local_1f0);
                if (local_70 != 0) goto LAB_0027ca20;
                *(undefined2 *)((long)plVar23 + 0xb2) =
                     *(undefined2 *)(*(long *)(param_1 + 0xb8) + uVar17 * 2);
                (**(code **)(*plVar16 + 0x70))
                          (&local_1f0,plVar16,plVar23,*(long *)(param_1 + 0xa8) + lVar31);
                uVar18 = (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
                if ((uVar18 < 0x20) && ((ushort)bVar11 < *(ushort *)(param_1 + 0xa0))) {
                  *(byte *)(param_1 + uVar18 + 0x80) = bVar11;
                }
                FUN_002211bc(lVar21,0);
                plVar23 = (long *)PTR_DAT_04bc1510;
                plVar29 = (long *)PTR_DAT_04bcd350;
              }
            }
            else {
              uVar18 = FUN_0026c870(*plVar29);
              if (((uVar18 & 1) != 0) && (*(char *)(param_1 + 0x105) == '\0')) {
                FUN_002b440c(*(long *)(param_1 + 0xa8) + lVar31);
              }
            }
          }
          else {
            plVar19 = (long *)FUN_002ba790(*plVar23);
            plVar19 = (long *)(**(code **)(*plVar19 + 0x50))
                                        (plVar19,*(undefined1 *)(*(long *)(param_1 + 0xb0) + uVar17)
                                        );
            if (plVar19 == (long *)0x0) goto LAB_0027c3c8;
            (**(code **)(*plVar16 + 0x20))(&local_1f0,plVar16,plVar19,auStack_f0);
            FUN_00229780(&local_70,&local_1f0);
            if (local_70 != 0) {
              local_1e8 = local_1e8 & 0xffffffff00000000;
              local_1f0 = (undefined *)0x800000000000;
              (**(code **)(*plVar19 + 0x28))(plVar19,&local_1f0);
              goto LAB_0027c3c8;
            }
            uVar18 = FUN_002b4294(auStack_f0,*(long *)(param_1 + 0xa8) + lVar31);
            if ((uVar18 & 1) != 0) {
              bVar11 = *(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
              uVar18 = (ulong)bVar11;
              if (bVar11 != bVar8) {
                if ((bVar11 < 0x20) &&
                   (pbVar24 = (byte *)(param_1 + uVar18 + 0x80),
                   (ushort)*pbVar24 < *(ushort *)(param_1 + 0xa0))) {
                  *pbVar24 = 0xff;
                  uVar18 = (ulong)*(byte *)(*(long *)(param_1 + 0xb0) + uVar17);
                }
                FUN_00269b00(lVar15,uVar18);
                (**(code **)(*(long *)plVar19[0x14] + 0x30))((long *)plVar19[0x14],plVar19);
                (**(code **)(*plVar16 + 0x78))(plVar16,plVar19);
                uVar20 = FUN_0026c8a4(*plVar29);
                FUN_00262da0(uVar20,plVar19);
                (**(code **)(*plVar19 + 0x20))(plVar19);
                FUN_00273c40(plVar19);
                plVar22 = (long *)FUN_002ba790(*plVar23);
                (**(code **)(*plVar22 + 0x28))(plVar22,plVar19);
                bVar30 = true;
                goto LAB_0027c3c8;
              }
              if (*(char *)(param_1 + 0x106) == '\0') goto LAB_0027ca20;
            }
          }
LAB_0027c31c:
          uVar17 = uVar17 + 1;
          lVar31 = lVar31 + 0x80;
          uVar26 = 1 << (ulong)(bVar3 & 0x1f) | uVar26;
        } while (uVar17 < *(ushort *)(param_1 + 0xe6));
        uVar26 = *(uint *)(lVar15 + 0xb8) & ~uVar26;
        puVar7 = (undefined8 *)PTR_DAT_04bc1510;
      }
      PTR_DAT_04bc1510 = (undefined *)puVar7;
      if (uVar26 != 0) {
        uVar25 = 0;
        uVar27 = 1;
        do {
          if ((uVar27 & uVar26) != 0) {
            uVar14 = FUN_0026bfe0(lVar15);
            if ((uVar25 & 0xff) == (uVar14 & 0xff)) {
              if (*(char *)(param_1 + 0x106) == '\0') goto LAB_0027ca20;
            }
            else {
              FUN_00269b00(lVar15,uVar25);
              plVar23 = (long *)FUN_002ba790(*puVar7);
              plVar23 = (long *)(**(code **)(*plVar23 + 0x50))(plVar23,uVar25);
              if (plVar23 != (long *)0x0) {
                (**(code **)(*(long *)plVar23[0x14] + 0x30))((long *)plVar23[0x14],plVar23);
                (**(code **)(*plVar16 + 0x78))(plVar16,plVar23);
                uVar20 = FUN_0026c8a4(*plVar29);
                FUN_00262da0(uVar20,plVar23);
                (**(code **)(*plVar23 + 0x20))(plVar23);
                FUN_00273c40(plVar23);
                plVar19 = (long *)FUN_002ba790(*puVar7);
                (**(code **)(*plVar19 + 0x28))(plVar19,plVar23);
              }
              lVar31 = FUN_0026c88c(*plVar29);
              if (lVar31 != 0) {
                uVar20 = FUN_0026c88c(*plVar29);
                FUN_00282f30(&local_1f0,uVar20,uVar25);
              }
            }
          }
          uVar14 = uVar25 & 0xff;
          uVar27 = uVar27 << 1;
          uVar25 = uVar25 + 1;
        } while (uVar14 < 0x1f);
        bVar30 = true;
        plVar23 = (long *)PTR_DAT_04bc1510;
      }
      local_100 = 0;
      uStack_f8 = 0;
      local_110 = 0;
      uStack_108 = 0;
      local_120 = 0;
      uStack_118 = 0;
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
      uStack_178 = 0;
      local_190 = 0;
      uStack_188 = 0;
      local_1a0 = 0;
      uStack_198 = 0;
      local_1b0 = 0;
      uStack_1a8 = 0;
      local_1c0 = 0;
      uStack_1b8 = 0;
      local_1d0 = 0;
      uStack_1c8 = 0;
      local_1e0 = 0;
      uStack_1d8 = 0;
      local_1f0 = (undefined *)0x0;
      local_1e8 = 0;
      plVar23 = (long *)FUN_002ba790(*plVar23);
      plVar19 = (long *)plVar23[4];
      if (plVar19 != plVar23 + 3) {
        uVar12 = 0;
        do {
          lVar15 = plVar19[2];
          if ((lVar15 != plVar23[0x13]) && (*(int *)(lVar15 + 0x4c) != 7)) {
            (**(code **)(*plVar16 + 0x20))(&local_200,plVar16,lVar15,auStack_f0);
            if (((int)local_200 == 0) && (*(short *)(param_1 + 0xe6) != 0)) {
              lVar15 = 0;
              uVar17 = 0;
              do {
                uVar18 = FUN_002b41c0(auStack_f0,*(long *)(param_1 + 0xa8) + lVar15);
                if ((uVar18 & 1) != 0) goto LAB_0027cab0;
                uVar17 = uVar17 + 1;
                lVar15 = lVar15 + 0x80;
              } while (uVar17 < *(ushort *)(param_1 + 0xe6));
            }
            uVar17 = (ulong)uVar12;
            uVar12 = uVar12 + 1;
            (&local_1f0)[uVar17] = (undefined *)plVar19[2];
          }
LAB_0027cab0:
          plVar19 = (long *)plVar19[1];
        } while (plVar19 != plVar23 + 3);
        if (uVar12 != 0) {
          uVar17 = (ulong)uVar12;
          ppuVar28 = &local_1f0;
          do {
            plVar19 = (long *)*ppuVar28;
            local_200 = 0x800000000000;
            local_1f8 = 0;
            (**(code **)(*plVar19 + 0x28))(plVar19,&local_200);
            uVar18 = FUN_002212e4(plVar19[0x13]);
            if ((((uVar18 & 1) == 0) && (uVar18 = FUN_002212e4(plVar19[0x15]), (uVar18 & 1) == 0))
               && (*(int *)((long)plVar19 + 0x4c) != 5)) {
              bVar8 = *(byte *)(plVar19 + 7);
              (**(code **)(*(long *)plVar19[0x14] + 0x30))((long *)plVar19[0x14],plVar19);
              (**(code **)(*plVar16 + 0x78))(plVar16,plVar19);
              uVar20 = FUN_0026c8a4(*plVar29);
              FUN_00262da0(uVar20,plVar19);
              (**(code **)(*plVar19 + 0x20))(plVar19);
              FUN_00273c40(plVar19);
              (**(code **)(*plVar23 + 0x28))(plVar23,plVar19);
              lVar15 = (**(code **)(*plVar23 + 0x50))(plVar23,(ulong)bVar8);
              if (((bVar8 < 0x20) && ((lVar15 == 0 || (*(int *)(lVar15 + 0x4c) - 5U < 2)))) &&
                 (pbVar24 = (byte *)(param_1 + (ulong)bVar8 + 0x80),
                 (ushort)*pbVar24 < *(ushort *)(param_1 + 0xa0))) {
                *pbVar24 = 0xff;
              }
              bVar30 = true;
            }
            ppuVar28 = ppuVar28 + 1;
            uVar17 = uVar17 - 1;
          } while (uVar17 != 0);
        }
      }
      if (bVar30) {
        FUN_002ba5a4(*(undefined8 *)PTR_DAT_04bc1510);
      }
      uVar20 = 1;
      goto LAB_0027cc7c;
    }
  }
  return 0;
LAB_0027ca20:
  uVar20 = 0;
LAB_0027cc7c:
  FUN_002b4104(auStack_f0);
  return uVar20;
}

