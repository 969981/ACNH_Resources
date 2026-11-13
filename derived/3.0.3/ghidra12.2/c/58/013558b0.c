
/* WARNING: Removing unreachable block (ram,0x013590a4) */
/* WARNING: Removing unreachable block (ram,0x01358e10) */
/* WARNING: Removing unreachable block (ram,0x01358b10) */
/* WARNING: Removing unreachable block (ram,0x01358684) */
/* WARNING: Removing unreachable block (ram,0x013584d8) */
/* WARNING: Removing unreachable block (ram,0x013582e0) */
/* WARNING: Removing unreachable block (ram,0x013582d0) */
/* WARNING: Removing unreachable block (ram,0x013580b4) */
/* WARNING: Removing unreachable block (ram,0x01357cf8) */
/* WARNING: Removing unreachable block (ram,0x013566b0) */
/* WARNING: Removing unreachable block (ram,0x013559e4) */
/* WARNING: Removing unreachable block (ram,0x01358050) */
/* WARNING: Removing unreachable block (ram,0x01358060) */
/* WARNING: Removing unreachable block (ram,0x013580c4) */
/* WARNING: Removing unreachable block (ram,0x013584c8) */
/* WARNING: Removing unreachable block (ram,0x01358b00) */
/* WARNING: Removing unreachable block (ram,0x01358e00) */
/* WARNING: Removing unreachable block (ram,0x01359094) */
/* WARNING: Removing unreachable block (ram,0x013590b0) */
/* WARNING: Removing unreachable block (ram,0x01359158) */
/* WARNING: Removing unreachable block (ram,0x01359168) */
/* WARNING: Removing unreachable block (ram,0x01358f9c) */
/* WARNING: Removing unreachable block (ram,0x0135852c) */
/* WARNING: Removing unreachable block (ram,0x01357488) */
/* WARNING: Removing unreachable block (ram,0x013570b8) */
/* WARNING: Removing unreachable block (ram,0x01357080) */
/* WARNING: Removing unreachable block (ram,0x01357090) */
/* WARNING: Removing unreachable block (ram,0x01357474) */
/* WARNING: Removing unreachable block (ram,0x01357d4c) */
/* WARNING: Removing unreachable block (ram,0x0135853c) */
/* WARNING: Removing unreachable block (ram,0x01358fac) */
/* WARNING: Removing unreachable block (ram,0x01358fb8) */
/* WARNING: Type propagation algorithm not settling */

void FUN_013558b0(void)

{
  undefined *puVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ushort uVar6;
  short sVar7;
  char *pcVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined4 uVar16;
  long lVar17;
  undefined8 *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  ushort *puVar21;
  long *plVar22;
  uint *puVar23;
  int *piVar24;
  long *plVar25;
  ulong uVar26;
  undefined4 *puVar27;
  undefined ***pppuVar28;
  uint uVar29;
  long lVar30;
  long lVar31;
  char *pcVar32;
  byte *pbVar33;
  byte bVar34;
  uint uVar35;
  char cVar36;
  char cVar37;
  undefined8 *puVar38;
  ulong uVar39;
  undefined1 *puVar40;
  uint *puVar41;
  ushort uVar42;
  uint uVar43;
  undefined8 *puVar44;
  char cVar45;
  undefined **ppuVar46;
  undefined8 uVar47;
  long *plVar48;
  long lVar49;
  ushort *puVar50;
  undefined4 local_194;
  int local_190 [2];
  undefined **local_188;
  undefined4 local_180;
  int iStack_17c;
  undefined2 local_174;
  undefined1 local_172;
  undefined1 local_171;
  undefined4 local_170;
  undefined2 local_16c;
  undefined1 local_16a;
  undefined1 local_169;
  uint local_168;
  undefined4 local_164;
  undefined4 uStack_160;
  ushort local_15c;
  undefined1 local_15a;
  undefined8 local_158;
  undefined8 local_150;
  uint local_148;
  char cStack_144;
  char cStack_143;
  char cStack_142;
  undefined1 uStack_141;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined4 local_12c;
  undefined **local_128 [4];
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  char *local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined **local_d0;
  char *local_c8;
  char *local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  char *local_98;
  undefined8 local_90;
  undefined **local_88 [5];
  
  puVar50 = (ushort *)PTR_DAT_04bb6298;
  bVar9 = DAT_055c1b60 == &DAT_055c1b58;
  uVar6 = *(ushort *)PTR_DAT_04bb6298;
  puVar44 = DAT_055c1b60 + -8;
  if ((long)(short)uVar6 != 0) {
    puVar38 = DAT_055c1b60;
    uVar42 = uVar6;
    if (puVar44 != &DAT_055c1b18) {
      do {
        puVar38 = (undefined8 *)puVar38[1];
        uVar42 = uVar42 - 1;
        bVar9 = puVar38 == &DAT_055c1b58;
      } while (!bVar9 && uVar42 != 0);
      puVar44 = puVar38 + -8;
    }
  }
  puVar38 = &DAT_055c04a0;
  if (!bVar9) {
    puVar38 = puVar44;
  }
  uVar39 = 0;
  do {
    uVar12 = (uint)uVar39;
    piVar24 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar39 * 4);
    if (0x38 < uVar12) {
      piVar24 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar24 == *(int *)(puVar38 + 7)) goto LAB_0135598c;
    uVar43 = 0x39;
    if ((int)uVar12 < 0x39) {
      uVar43 = uVar12 + 1;
    }
    uVar39 = (ulong)uVar43;
  } while (uVar43 != 0x39);
  uVar12 = 0;
LAB_0135598c:
  local_b8 = (undefined **)CONCAT44(local_b8._4_4_,uVar12);
  if (uVar6 != 0xffff) {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,3);
    puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < uVar6) {
      puVar23 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((uVar12 == 0) && ((*puVar23 >> 3 & 1) == 0)) {
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,1);
      puVar23 = (uint *)(PTR_DAT_04bc39f8 + ((long)(short)uVar6 & 0xffffffffU) * 8);
      if (0xff < uVar6) {
        puVar23 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar23 >> 1 & 1) != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
        lVar30 = *(long *)PTR_DAT_04bb27c8 + 0x28;
        FUN_009457c0(lVar30,0);
        FUN_00946970(lVar30,0);
        FUN_00945c80(lVar30,0);
      }
    }
  }
  puVar44 = (undefined8 *)PTR_DAT_04bc3a80;
  if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == 0x4e32b7a) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
    lVar30 = *(long *)PTR_DAT_04bb27c8 + 0x28;
    FUN_009457c0(lVar30,0);
    FUN_00946970(lVar30,0);
    FUN_00945c80(lVar30,0);
  }
  puVar4 = PTR_DAT_04bb2720;
  lVar30 = *(long *)PTR_DAT_04bb2720;
  if ((lVar30 == 0) || (*(long *)(lVar30 + 0x330) == 0)) {
    local_b8 = (undefined **)0x0;
    puVar38 = &DAT_055c04a0;
  }
  else {
    puVar38 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
    iVar11 = FUN_006bd550(*puVar38,0);
    puVar38 = puVar44;
    if (iVar11 != 0x758f7eaf) {
      puVar38 = &DAT_055c04a0;
    }
    local_b8 = (undefined **)0x0;
    if (*(long *)puVar4 != 0) {
      lVar30 = *(long *)(*(long *)puVar4 + 0x330);
      local_b8 = (undefined **)0x0;
      if (lVar30 != 0) {
        local_b8 = *(undefined ***)(lVar30 + 0xd0);
      }
    }
  }
  local_b0 = (undefined **)(ulong)*(uint *)(puVar38 + 7);
  FUN_0133cfb0(&local_158,&local_b8);
  plVar48 = (long *)PTR_DAT_04bb27d0;
  plVar25 = (long *)PTR_DAT_04bb27a8;
  sVar7 = *puVar50;
  if (sVar7 == -1) {
LAB_01355c84:
    lVar30 = *(long *)puVar4;
    iVar11 = 0;
    if (lVar30 != 0) {
      if (*(long *)(lVar30 + 0x330) == 0) {
        iVar11 = 0;
      }
      else {
        puVar38 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
        iVar15 = FUN_006bd550(*puVar38,0);
        iVar11 = 0;
        if (iVar15 == 0x758f7eaf) {
          iVar11 = 0;
          if (*(long *)puVar4 != 0) {
            lVar30 = *(long *)(*(long *)puVar4 + 0x330);
            iVar11 = 0;
            if (lVar30 != 0) {
              iVar11 = *(int *)(lVar30 + 0x244);
            }
          }
        }
      }
    }
    if (*(int *)(PTR_DAT_04bbe4b0 + 0x84) == iVar11) {
      local_a8 = (char *)0x0;
      local_b8 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      local_b0 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      lVar30 = *(long *)puVar4;
      local_98 = (char *)0x0;
      local_a0 = local_b0;
      if (lVar30 == 0) {
        puVar38 = &DAT_055c04a0;
      }
      else {
        puVar38 = &DAT_055c04a0;
        if (*(long *)(lVar30 + 0x330) != 0) {
          puVar38 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
          iVar11 = FUN_006bd550(*puVar38,0);
          puVar38 = puVar44;
          if (iVar11 != 0x758f7eaf) {
            puVar38 = &DAT_055c04a0;
          }
        }
      }
      uVar39 = FUN_017ba710(*(undefined4 *)(puVar38 + 7),&local_b8);
      cVar36 = (char)local_a8;
      cVar37 = local_a8._4_1_;
      if ((uVar39 & 1) == 0) {
        cVar36 = '\x1c';
        cVar37 = '\x1c';
      }
      lVar30 = *(long *)PTR_DAT_04bb46b0;
      if (lVar30 == 0) {
LAB_01355f7c:
        lVar30 = 0;
      }
      else {
        puVar38 = *(undefined8 **)(lVar30 + 0x10);
        if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
          lVar17 = (**(code **)(*(long *)*puVar38 + 0x38))();
          lVar30 = 0;
          if (lVar17 != 0) {
            lVar30 = lVar17 + 0x70;
          }
        }
        else {
          if (puVar38 == (undefined8 *)0x0) goto LAB_01355f7c;
          lVar30 = 0;
          if ((long *)puVar38[0x26] != (long *)0x0) {
            lVar30 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
          }
        }
      }
      plVar48 = (long *)(lVar30 + 0x1c2960);
      if ((*(long **)(lVar30 + 0x1c2980) == (long *)0x0) ||
         (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x1c2980), puVar38 == (undefined8 *)0x0)) {
        uVar39 = 0;
      }
      else {
        uVar39 = (**(code **)*puVar38)();
        uVar39 = uVar39 & 0xffffffff;
      }
      lVar17 = *plVar48;
      lVar31 = *(long *)(lVar30 + 0x1c2968);
      uVar26 = FUN_027c5f10();
      if ((uVar26 & 1) == 0) {
        local_158 = (undefined **)CONCAT53(local_158._3_5_,0x80023);
        uVar6 = *(ushort *)(lVar31 + lVar17);
        if ((byte)(uVar6 >> 8) < 0x23) {
          FUN_020fd218(&local_158,uVar6 >> 8,uVar6 & 0xff);
        }
      }
      else {
        local_158 = (undefined **)CONCAT53(local_158._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
      }
      local_15a = local_158._2_1_;
      local_15c = (ushort)local_158;
      if (((ushort)local_158 & 0xff) < 0x23) {
        if ((uint)((ushort)local_158 >> 8) <= (uint)(byte)PTR_DAT_04bc27f0[(ulong)local_158 & 0xff])
        {
          if ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_158 & 0xff) * 4) >>
               (ulong)((ushort)local_158 >> 8 & 0x1f) & 1) != 0) {
            local_158 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_158);
            lVar17 = (long)&local_150 + 4;
            local_148 = 0;
            local_150 = (undefined **)0xfffe0000ffff;
            FUN_0277d4ac(lVar17);
            cStack_144 = 0xff;
            cStack_143 = 0xff;
            cStack_142 = 0;
            uStack_141 = 0;
            local_140._0_2_ = 0xfffe;
            local_140._2_1_ = 0;
            local_140._3_1_ = 0;
            local_140._4_4_ = 0;
            FUN_0277d4ac(&local_140);
            local_138._0_4_ = 0xffff;
            FUN_0268b680(&local_164,&local_15c);
            FUN_0268baa8(&local_16c,&local_15c);
            FUN_0268bbf4(&local_174,&local_15c);
            uVar12 = FUN_020fd7d8(&local_15c);
            if (((uVar12 & 0xff) < 8) && ((1 << (ulong)(uVar12 & 0x1f) & 0xacU) != 0)) {
              local_e0._0_1_ = 3;
            }
            else {
              local_e0._0_1_ = 0;
            }
            local_158 = (undefined **)CONCAT44(uStack_160,local_164);
            uStack_141 = 0;
            local_150._0_4_ = (uint)CONCAT12((undefined1)local_e0,CONCAT11(cVar37 + '\x02',cVar36));
            local_150 = (undefined **)
                        CONCAT17(local_169,CONCAT16(local_16a,CONCAT24(local_16c,(uint)local_150)));
            local_148 = local_168;
            cStack_142 = '\0';
            local_108 = (undefined **)((ulong)local_108._4_4_ << 0x20);
            local_140._0_2_ = local_174;
            local_140._2_1_ = local_172;
            local_140._3_1_ = local_171;
            local_140._4_4_ = local_170;
            local_138._0_4_ = (uint)CONCAT11(cVar37,cVar36 + '\x02');
            local_d8 = (char *)((ulong)local_d8._4_4_ << 0x20);
            local_e0 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
            lVar31 = *(long *)puVar4;
            cStack_144 = cVar36;
            cStack_143 = cVar37;
            if (lVar31 == 0) {
              puVar38 = &DAT_055c04a0;
            }
            else {
              puVar38 = &DAT_055c04a0;
              if (*(long *)(lVar31 + 0x330) != 0) {
                puVar38 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar31 + 0x338));
                iVar11 = FUN_006bd550(*puVar38,0);
                if (iVar11 != 0x758f7eaf) {
                  puVar44 = &DAT_055c04a0;
                }
                puVar38 = puVar44;
              }
            }
            local_d8 = (char *)CONCAT44(*(undefined4 *)(puVar38 + 7),(undefined4)local_d8);
            uVar10 = FUN_017baf44();
            local_d0 = (undefined **)(CONCAT71(local_d0._1_7_,uVar10) & 0xffffffffffffff01);
            local_e0 = (undefined **)(PTR_DAT_04bb3140 + 0x10);
            local_190[0] = (int)local_150._2_1_;
            FUN_01afbaa4(&local_188,&local_158,local_190);
            local_100 = (char *)CONCAT44((int)local_150._1_1_,(int)(char)local_150);
            ppuVar46 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
            local_108 = ppuVar46;
            FUN_01a50970(&local_e0,0,&local_188,&local_108);
            puVar19 = PTR_DAT_04bb43c0;
            local_f8 = 0;
            ppuVar2 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
            lVar31 = *(long *)PTR_DAT_04bb43c0;
            local_108 = ppuVar2;
            uVar12 = FUN_0277d6c4();
            if (*(long *)puVar19 == 0) {
              bVar9 = false;
            }
            else {
              lVar31 = *(long *)(lVar31 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
              if (uVar12 < *(uint *)(lVar31 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
                  lVar31 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(&local_158);
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if (((uVar12 < *(uint *)(lVar31 + 0x1d8)) &&
                      (puVar23 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8),
                      puVar23 != (uint *)0x0)) && (uVar12 = *puVar23, uVar12 != 0)) {
                    cVar45 = *PTR_DAT_04bbfe88;
                    puVar19 = PTR_DAT_04bbfe90;
                    puVar40 = PTR_DAT_04bbfe88;
                    do {
                      if (cVar45 == '\0') {
                        *puVar40 = 1;
                        memset(puVar19,0xff,0x1ac);
                        uVar12 = *puVar23;
                        cVar45 = '\x01';
                        puVar40 = PTR_DAT_04bbfe88;
                      }
                      else {
                        uVar43 = *(uint *)(puVar19 + 400);
                        if (-1 < (int)uVar43) {
                          if ((char *)((ulong)uVar43 + (long)puVar23) == (char *)0x0) break;
                          bVar9 = *(char *)((ulong)uVar43 + (long)puVar23) != '\0';
                          goto LAB_013569b8;
                        }
                        if (uVar43 != 0xffffffff) break;
                      }
                      puVar19 = PTR_DAT_04bbfe90;
                      puVar41 = (uint *)(ulong)uVar12;
                      bVar9 = false;
                      if ((puVar41 == (uint *)0x0) || (puVar23 == puVar41)) goto LAB_013569b8;
                      lVar31 = 0xc;
                      if (*(char *)((long)puVar23 + (10 - (long)puVar41)) != '\0') {
                        lVar31 = 0x1c;
                      }
                      lVar31 = (long)puVar23 + (lVar31 - (long)puVar41);
                      if (lVar31 == 0) break;
                      uVar26 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar41));
                      *(undefined4 *)(PTR_DAT_04bbfe90 + 400) = 0xfffffffe;
                      if (uVar26 == 0) break;
                      piVar24 = (int *)(lVar31 + 4);
                      while (piVar24[-1] != -0x214c0724) {
                        bVar9 = false;
                        piVar24 = piVar24 + 2;
                        uVar26 = uVar26 - 1;
                        if (uVar26 == 0) goto LAB_013569b8;
                      }
                      bVar9 = false;
                      iVar11 = 0;
                      if (*piVar24 != -1) {
                        iVar11 = *piVar24;
                      }
                      *(int *)(puVar19 + 400) = iVar11;
                      uVar12 = *puVar23;
                      if (uVar12 == 0) goto LAB_013569b8;
                    } while( true );
                  }
                }
                bVar9 = false;
              }
              else {
                bVar9 = false;
              }
            }
LAB_013569b8:
            local_180 = (uint)(char)local_150;
            iStack_17c = (int)local_150._1_1_;
            local_188 = ppuVar46;
            FUN_014fd424(&local_e0,bVar9,&local_188,0);
            local_190[0] = (int)cStack_142;
            FUN_01afbaa4(&local_188,lVar17,local_190);
            local_100 = (char *)CONCAT44((int)cStack_143,(int)cStack_144);
            local_108 = ppuVar46;
            FUN_01a50970(&local_e0,0,&local_188,&local_108);
            puVar19 = PTR_DAT_04bb43c0;
            local_f8 = 0;
            local_100 = (char *)CONCAT44(local_148,local_150._4_4_);
            lVar31 = *(long *)PTR_DAT_04bb43c0;
            local_108 = ppuVar2;
            uVar12 = FUN_0277d6c4(&local_100);
            if (*(long *)puVar19 == 0) {
              bVar9 = false;
            }
            else {
              lVar31 = *(long *)(lVar31 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
              if (uVar12 < *(uint *)(lVar31 + 0x1d8)) {
                if (*(long *)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8) != 0) {
                  lVar31 = *(long *)PTR_DAT_04bc0428;
                  uVar12 = FUN_0277d6c4(lVar17);
                  puVar19 = PTR_DAT_04bbfe88;
                  uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar31 + 0x1f8);
                  if (((uVar12 < *(uint *)(lVar31 + 0x1d8)) &&
                      (puVar23 = *(uint **)(*(long *)(lVar31 + 0x1e0) + (long)(int)uVar12 * 8),
                      puVar23 != (uint *)0x0)) && (uVar12 = *puVar23, uVar12 != 0)) {
                    cVar45 = *PTR_DAT_04bbfe88;
                    puVar20 = PTR_DAT_04bbfe90;
                    do {
                      if (cVar45 == '\0') {
                        *puVar19 = 1;
                        memset(puVar20,0xff,0x1ac);
                        uVar12 = *puVar23;
                        cVar45 = '\x01';
                      }
                      else {
                        uVar43 = *(uint *)(puVar20 + 400);
                        if (-1 < (int)uVar43) {
                          if ((char *)((ulong)uVar43 + (long)puVar23) == (char *)0x0) break;
                          bVar9 = *(char *)((ulong)uVar43 + (long)puVar23) != '\0';
                          goto LAB_0135767c;
                        }
                        if (uVar43 != 0xffffffff) break;
                      }
                      puVar20 = PTR_DAT_04bbfe90;
                      puVar41 = (uint *)(ulong)uVar12;
                      bVar9 = false;
                      if ((puVar41 == (uint *)0x0) || (puVar23 == puVar41)) goto LAB_0135767c;
                      lVar17 = 0xc;
                      if (*(char *)((long)puVar23 + (10 - (long)puVar41)) != '\0') {
                        lVar17 = 0x1c;
                      }
                      lVar17 = (long)puVar23 + (lVar17 - (long)puVar41);
                      if (lVar17 == 0) break;
                      uVar26 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar41));
                      *(undefined4 *)(PTR_DAT_04bbfe90 + 400) = 0xfffffffe;
                      if (uVar26 == 0) break;
                      piVar24 = (int *)(lVar17 + 4);
                      while (piVar24[-1] != -0x214c0724) {
                        bVar9 = false;
                        piVar24 = piVar24 + 2;
                        uVar26 = uVar26 - 1;
                        if (uVar26 == 0) goto LAB_0135767c;
                      }
                      bVar9 = false;
                      iVar11 = 0;
                      if (*piVar24 != -1) {
                        iVar11 = *piVar24;
                      }
                      *(int *)(puVar20 + 400) = iVar11;
                      uVar12 = *puVar23;
                      if (uVar12 == 0) goto LAB_0135767c;
                    } while( true );
                  }
                }
                bVar9 = false;
              }
              else {
                bVar9 = false;
              }
            }
LAB_0135767c:
            local_180 = (uint)cStack_144;
            iStack_17c = (int)cStack_143;
            ppuVar46 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
            local_188 = ppuVar46;
            FUN_014fd424(&local_e0,bVar9,&local_188,0);
            local_190[0] = (int)local_138._2_1_;
            FUN_01afbaa4(&local_188,&local_140,local_190);
            local_100 = (char *)CONCAT44((int)local_138._1_1_,(int)(char)local_138);
            local_108 = ppuVar46;
            FUN_01a50970(&local_e0,0,&local_188,&local_108);
            puVar19 = PTR_DAT_04bb43c0;
            local_f8 = 0;
            local_100 = (char *)CONCAT44(local_140._4_4_,
                                         CONCAT13(local_140._3_1_,
                                                  CONCAT12(local_140._2_1_,(undefined2)local_140)));
            local_108 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
            lVar17 = *(long *)PTR_DAT_04bb43c0;
            uVar12 = FUN_0277d6c4(&local_100);
            if (*(long *)puVar19 != 0) {
              lVar17 = *(long *)(lVar17 + 0x57e58);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                lVar17 = *(long *)PTR_DAT_04bc0428;
                uVar12 = FUN_0277d6c4(&local_140);
                puVar19 = PTR_DAT_04bbfe88;
                uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
                   ((puVar23 = *(uint **)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8),
                    puVar23 != (uint *)0x0 && (uVar12 = *puVar23, uVar12 != 0)))) {
                  cVar45 = *PTR_DAT_04bbfe88;
                  puVar20 = PTR_DAT_04bbfe90;
                  do {
                    if (cVar45 == '\0') {
                      *puVar19 = 1;
                      memset(puVar20,0xff,0x1ac);
                      uVar12 = *puVar23;
                      cVar45 = '\x01';
                    }
                    else {
                      uVar43 = *(uint *)(puVar20 + 400);
                      if (-1 < (int)uVar43) {
                        if ((char *)((ulong)uVar43 + (long)puVar23) == (char *)0x0) break;
                        bVar9 = *(char *)((ulong)uVar43 + (long)puVar23) != '\0';
                        goto LAB_01357894;
                      }
                      if (uVar43 != 0xffffffff) break;
                    }
                    puVar20 = PTR_DAT_04bbfe90;
                    puVar41 = (uint *)(ulong)uVar12;
                    bVar9 = false;
                    if ((puVar41 == (uint *)0x0) || (puVar23 == puVar41)) goto LAB_01357894;
                    lVar17 = 0xc;
                    if (*(char *)((long)puVar23 + (10 - (long)puVar41)) != '\0') {
                      lVar17 = 0x1c;
                    }
                    lVar17 = (long)puVar23 + (lVar17 - (long)puVar41);
                    if (lVar17 == 0) break;
                    uVar26 = (ulong)*(ushort *)((long)puVar23 + (8 - (long)puVar41));
                    *(undefined4 *)(PTR_DAT_04bbfe90 + 400) = 0xfffffffe;
                    if (uVar26 == 0) break;
                    piVar24 = (int *)(lVar17 + 4);
                    while (piVar24[-1] != -0x214c0724) {
                      bVar9 = false;
                      piVar24 = piVar24 + 2;
                      uVar26 = uVar26 - 1;
                      if (uVar26 == 0) goto LAB_01357894;
                    }
                    bVar9 = false;
                    iVar11 = 0;
                    if (*piVar24 != -1) {
                      iVar11 = *piVar24;
                    }
                    *(int *)(puVar20 + 400) = iVar11;
                    uVar12 = *puVar23;
                    if (uVar12 == 0) goto LAB_01357894;
                  } while( true );
                }
              }
            }
            bVar9 = false;
LAB_01357894:
            local_180 = (uint)(char)local_138;
            iStack_17c = (int)local_138._1_1_;
            local_188 = ppuVar46;
            FUN_014fd424(&local_e0,bVar9,&local_188,0);
            if ((*(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80) < 2) &&
               (*(int *)(*(long *)(lVar30 + 0x1c2968) + *plVar48 + 0x20) == 3)) {
              sVar7 = *(short *)PTR_DAT_04bbdeb0;
              if (sVar7 != -1) {
                puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
                if (0xff < (uint)(int)sVar7) {
                  puVar23 = (uint *)PTR_DAT_04bc39f8;
                }
                if ((*puVar23 >> 3 & 1) != 0) {
                  local_108 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                  local_100 = "SetCampSiteRequestFtr";
                  FUN_02743234(&local_108,0);
                }
              }
              local_108 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
              local_100 = "SetCampSiteRequestFtr";
              iVar11 = FUN_02743000(&local_108);
              if ((iVar11 != 0) || (uVar26 = FUN_0290d828(), (uVar26 & 1) == 0)) {
                lVar31 = *(long *)(lVar30 + 0x1c2968) + *plVar48;
                lVar17 = lVar31 + 0x24;
                uVar26 = FUN_0277dedc(lVar17);
                puVar19 = PTR_DAT_04bb43c0;
                if ((uVar26 & 1) == 0) {
                  lVar49 = *(long *)PTR_DAT_04bb43c0;
                  uVar12 = FUN_0277d6c4(lVar17);
                  puVar20 = PTR_DAT_04bb2020;
                  if (*(long *)puVar19 != 0) {
                    lVar17 = *(long *)(lVar49 + 0x57e58);
                    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar17 + 0x1f8);
                    if ((uVar12 < *(uint *)(lVar17 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar17 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
                      local_188 = (undefined **)0xfffe;
                      FUN_0277d4ac(&local_188);
                      local_188 = *(undefined ***)(lVar31 + 0x24);
                      local_108 = (undefined **)((ulong)local_108 & 0xffffffff00000000);
                      local_190[0] = 0;
                      local_194 = 0;
                      local_180 = (uint)CONCAT11(cVar37,cVar36 + '\x04');
                      FUN_01afbaa4(local_190,&local_188,&local_194);
                      local_100 = (char *)CONCAT44((int)local_180._1_1_,(int)(char)local_180);
                      local_108 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
                      FUN_01a50970(&local_e0,0,local_190,&local_108);
                      local_108 = (undefined **)(puVar20 + 0x10);
                      local_100 = "SetCampSiteRequestFtr";
                      FUN_02743234(&local_108,1);
                    }
                  }
                }
              }
            }
            plVar25 = (long *)PTR_DAT_04bb27a8;
            puVar44 = (undefined8 *)PTR_DAT_04bc3a80;
          }
        }
      }
      if ((((uVar39 & 1) != 0) && (*(long *)(lVar30 + 0x1c2980) != 0)) &&
         (puVar38 = *(undefined8 **)(*(long *)(lVar30 + 0x1c2980) + 8), puVar38 != (undefined8 *)0x0
         )) {
        (**(code **)*puVar38)();
      }
      plVar48 = (long *)PTR_DAT_04bb27d0;
    }
    else {
      sVar7 = *puVar50;
      if (sVar7 == -1) {
LAB_01355e6c:
        iVar11 = *(int *)((long)puVar44 + 0x38);
        if (iVar11 == -0x7a57de51) {
          local_b8 = (undefined **)0xfffe;
          FUN_0277d4ac(&local_b8);
          puVar20 = PTR_DAT_04bc0510;
          puVar19 = PTR_DAT_04bb43c0;
          local_148 = 0;
          cStack_144 = 0;
          cStack_143 = 0;
          cStack_142 = 0;
          uStack_141 = 0;
          local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
          local_b0 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          local_158 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
          local_a8 = (char *)0x1e0000001e;
          puVar38 = (undefined8 *)(*(long *)(*plVar48 + 0x28) + 0x120);
          local_150 = (undefined **)*puVar38;
          local_b8 = (undefined **)*puVar38;
          lVar30 = *(long *)PTR_DAT_04bb43c0;
          uVar12 = FUN_0277d6c4(&local_150);
          if (*(long *)puVar19 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar30 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_b8);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
                 (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0
                 )) {
                local_148 = (uint)lVar30;
                cStack_144 = (char)((ulong)lVar30 >> 0x20);
                cStack_143 = (char)((ulong)lVar30 >> 0x28);
                cStack_142 = (char)((ulong)lVar30 >> 0x30);
                uStack_141 = (undefined1)((ulong)lVar30 >> 0x38);
              }
            }
          }
          FUN_01afade0(&local_158,(ulong)local_a0 & 0xffffffff);
          puVar3 = PTR_DAT_04bbfe68;
          local_d8 = (char *)((ulong)local_d8._4_4_ << 0x20);
          local_e0 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
          lVar30 = *(long *)puVar4;
          if (lVar30 == 0) {
            puVar38 = &DAT_055c04a0;
          }
          else {
            puVar38 = &DAT_055c04a0;
            if (*(long *)(lVar30 + 0x330) != 0) {
              puVar38 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
              iVar11 = FUN_006bd550(*puVar38,0);
              puVar38 = puVar44;
              if (iVar11 != 0x758f7eaf) {
                puVar38 = &DAT_055c04a0;
              }
            }
          }
          local_d8 = (char *)CONCAT44(*(undefined4 *)(puVar38 + 7),(undefined4)local_d8);
          uVar10 = FUN_017baf44();
          local_d0 = (undefined **)(CONCAT71(local_d0._1_7_,uVar10) & 0xffffffffffffff01);
          local_108 = local_150;
          FUN_01a50970(&local_e0,0,&local_108,&local_b0);
          FUN_01386d60(&local_b8);
          local_158 = (undefined **)(puVar20 + 0x10);
          lVar30 = *(long *)puVar19;
          local_148 = 0;
          cStack_144 = '\0';
          cStack_143 = '\0';
          cStack_142 = '\0';
          uStack_141 = 0;
          local_150 = local_b8;
          uVar12 = FUN_0277d6c4(&local_150);
          if (*(long *)puVar19 != 0) {
            lVar30 = *(long *)(lVar30 + 0x57e58);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
              lVar30 = *(long *)PTR_DAT_04bc0428;
              uVar12 = FUN_0277d6c4(&local_b8);
              uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
              if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
                 (lVar30 = *(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8), lVar30 != 0
                 )) {
                local_148 = (uint)lVar30;
                cStack_144 = (char)((ulong)lVar30 >> 0x20);
                cStack_143 = (char)((ulong)lVar30 >> 0x28);
                cStack_142 = (char)((ulong)lVar30 >> 0x30);
                uStack_141 = (undefined1)((ulong)lVar30 >> 0x38);
              }
            }
          }
          FUN_01afade0(&local_158,(ulong)local_a0 & 0xffffffff);
          plVar48 = (long *)PTR_DAT_04bb27d0;
          plVar25 = (long *)PTR_DAT_04bb27a8;
          local_e0 = (undefined **)(puVar3 + 0x10);
          local_d8 = (char *)((ulong)local_d8 & 0xffffffff00000000);
          lVar30 = *(long *)puVar4;
          if (lVar30 == 0) {
            puVar38 = &DAT_055c04a0;
          }
          else {
            puVar38 = &DAT_055c04a0;
            if (*(long *)(lVar30 + 0x330) != 0) {
              puVar38 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
              iVar11 = FUN_006bd550(*puVar38,0);
              puVar38 = puVar44;
              if (iVar11 != 0x758f7eaf) {
                puVar38 = &DAT_055c04a0;
              }
            }
          }
          local_d8 = (char *)CONCAT44(*(undefined4 *)(puVar38 + 7),(undefined4)local_d8);
          uVar10 = FUN_017baf44();
          puVar18 = &local_e0;
          local_d0 = (undefined **)(CONCAT71(local_d0._1_7_,uVar10) & 0xffffffffffffff01);
          pppuVar28 = (undefined ***)&local_108;
          local_108 = local_150;
          puVar38 = &local_b0;
        }
        else {
          if (iVar11 != 0x756a8ab7) goto LAB_01357ad8;
          local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
          local_b8 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
          lVar30 = *(long *)puVar4;
          if (lVar30 == 0) {
            puVar38 = &DAT_055c04a0;
          }
          else {
            puVar38 = &DAT_055c04a0;
            if (*(long *)(lVar30 + 0x330) != 0) {
              puVar38 = (undefined8 *)
                        (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                  (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
              iVar11 = FUN_006bd550(*puVar38,0);
              puVar38 = puVar44;
              if (iVar11 != 0x758f7eaf) {
                puVar38 = &DAT_055c04a0;
              }
            }
          }
          local_b0 = (undefined **)CONCAT44(*(undefined4 *)(puVar38 + 7),(undefined4)local_b0);
          uVar10 = FUN_017baf44();
          local_a8 = (char *)(CONCAT71(local_a8._1_7_,uVar10) & 0xffffffffffffff01);
          local_e0 = (undefined **)0x2353;
          FUN_0277d4ac(&local_e0);
          puVar18 = &local_b8;
          pppuVar28 = (undefined ***)&local_e0;
          puVar38 = &local_158;
          local_158 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          local_150 = (undefined **)0x1c0000001f;
        }
      }
      else {
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,0x17);
        puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
        if (0xff < (uint)(int)sVar7) {
          puVar23 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar23 >> 0x17 & 1) == 0) goto LAB_01355e6c;
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,1);
        if ((*puVar23 >> 1 & 1) == 0) {
          uVar39 = FUN_01810f30();
          if ((uVar39 & 1) != 0) {
            lVar30 = *(long *)PTR_DAT_04bb39b0;
            pbVar33 = PTR_DAT_04bb32e0;
            if (lVar30 == 0) {
LAB_01356d9c:
              if (*pbVar33 < 8) goto LAB_01356e0c;
LAB_01356da8:
              if ((long *)*plVar48 == (long *)0x0) {
LAB_01356e04:
                pbVar33 = PTR_DAT_04bb5038;
                goto LAB_01356e0c;
              }
              lVar30 = *(long *)*plVar48;
              bVar34 = *(byte *)(lVar30 + 0x473);
              pbVar33 = PTR_DAT_04bb5038;
              if ((long)(char)bVar34 != 0xffffffffffffffff) {
                puVar23 = (uint *)(lVar30 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
                if (7 < bVar34) {
                  puVar23 = (uint *)(lVar30 + 0x48);
                }
                if ((*puVar23 & 8) != 0) {
                  pbVar33 = (byte *)(lVar30 + 0x471);
                }
              }
              bVar34 = *pbVar33;
              bVar9 = 7 < bVar34;
              if (bVar9) {
                bVar34 = 0xff;
              }
              local_158 = (undefined **)CONCAT71(local_158._1_7_,bVar34);
              if (bVar9) goto LAB_01356e04;
            }
            else {
              if (*(int *)(lVar30 + 0x15c) != 0) {
                pbVar33 = (byte *)(lVar30 + 0x158);
              }
              if (7 < *pbVar33) {
                if ((*(int *)(lVar30 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                  pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                  goto LAB_01356d9c;
                }
                goto LAB_01356da8;
              }
LAB_01356e0c:
              bVar34 = *pbVar33;
              if (7 < bVar34) {
                bVar34 = 0xff;
              }
              local_158 = (undefined **)CONCAT71(local_158._1_7_,bVar34);
            }
            uVar39 = FUN_02204de0();
            puVar19 = PTR_DAT_04bb2020 + 0x10;
            local_b0 = (undefined **)0x408c513;
            local_b8 = (undefined **)puVar19;
            iVar11 = FUN_0274bce0(&local_158,&local_b8);
            if (((uVar39 & 1) != 0) || (iVar11 != 0)) {
              FUN_01367670();
              local_b0 = (undefined **)0x408c513;
              local_b8 = (undefined **)puVar19;
              FUN_0274bfe8(&local_158,&local_b8,0);
              local_b0 = (undefined **)0x4061d9f;
              local_b8 = (undefined **)puVar19;
              iVar11 = FUN_02743000(&local_b8);
              lVar30 = *(long *)PTR_DAT_04bb5ce0;
              if (iVar11 == 0) {
                if (lVar30 != 0) {
                  FUN_017fc3a0(lVar30 + 0xda0);
                  FUN_017fd540(lVar30 + 0xda0);
                }
              }
              else if ((lVar30 != 0) && (*(char *)(lVar30 + 0xf5c) != '\0')) {
                lVar30 = lVar30 + 0xda0;
                FUN_017ef108(lVar30,0,0);
                FUN_017eff3c(lVar30,0,0);
                FUN_017f0b3c(lVar30);
              }
              if ((*(long *)PTR_DAT_04bb3968 != 0) &&
                 (lVar30 = *(long *)(*(long *)PTR_DAT_04bb3968 + 0x175a0), lVar30 != 0)) {
                iVar11 = *(int *)(lVar30 + 0x1e8);
                if (iVar11 != 0) {
                  iVar15 = *(int *)(lVar30 + 0x1530);
                  if (iVar15 < *(int *)(lVar30 + 0x1534)) {
                    plVar22 = *(long **)(lVar30 + 0x1f0);
                    lVar17 = (long)iVar11 << 3;
                    do {
                      if (iVar15 < *(int *)(lVar30 + 0x1534)) {
                        puVar38 = *(undefined8 **)(lVar30 + 0x1540);
                        uVar16 = *(undefined4 *)(*plVar22 + 0x1c4);
                        if (puVar38 != (undefined8 *)0x0) {
                          *(undefined8 *)(lVar30 + 0x1540) = *puVar38;
                        }
                        *(undefined4 *)puVar38 = uVar16;
                        iVar15 = *(int *)(lVar30 + 0x1530);
                        if (iVar15 < *(int *)(lVar30 + 0x1534)) {
                          *(undefined8 **)(*(long *)(lVar30 + 0x1538) + (long)iVar15 * 8) = puVar38;
                          iVar15 = *(int *)(lVar30 + 0x1530) + 1;
                          *(int *)(lVar30 + 0x1530) = iVar15;
                        }
                      }
                      plVar22 = plVar22 + 1;
                      lVar17 = lVar17 + -8;
                    } while (lVar17 != 0);
                    iVar11 = *(int *)(lVar30 + 0x1e8);
                  }
                  if (0 < iVar11) {
                    lVar17 = 0;
                    do {
                      puVar38 = *(undefined8 **)(*(long *)(lVar30 + 0x1f0) + lVar17 * 8);
                      (**(code **)*puVar38)(puVar38);
                      lVar17 = lVar17 + 1;
                      *puVar38 = *(undefined8 *)(lVar30 + 0x1f8);
                      *(undefined8 **)(lVar30 + 0x1f8) = puVar38;
                    } while (lVar17 < *(int *)(lVar30 + 0x1e8));
                  }
                }
                *(undefined4 *)(lVar30 + 0x1e8) = 0;
                FUN_0212469c(lVar30);
                *(undefined1 *)(lVar30 + 0x1610) = 0;
                *(undefined8 *)(lVar30 + 0x1614) = 0;
              }
            }
          }
          lVar30 = *(long *)PTR_DAT_04bb39b0;
          pbVar33 = PTR_DAT_04bb32e0;
          if (lVar30 == 0) {
LAB_0135739c:
            if (*pbVar33 < 8) goto LAB_0135740c;
LAB_013573a8:
            if ((long *)*plVar48 == (long *)0x0) {
LAB_01357404:
              pbVar33 = PTR_DAT_04bb5038;
              goto LAB_0135740c;
            }
            lVar30 = *(long *)*plVar48;
            bVar34 = *(byte *)(lVar30 + 0x473);
            pbVar33 = PTR_DAT_04bb5038;
            if ((long)(char)bVar34 != 0xffffffffffffffff) {
              puVar23 = (uint *)(lVar30 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
              if (7 < bVar34) {
                puVar23 = (uint *)(lVar30 + 0x48);
              }
              if ((*puVar23 & 8) != 0) {
                pbVar33 = (byte *)(lVar30 + 0x471);
              }
            }
            bVar34 = *pbVar33;
            bVar9 = 7 < bVar34;
            if (bVar9) {
              bVar34 = 0xff;
            }
            local_158 = (undefined **)CONCAT71(local_158._1_7_,bVar34);
            if (bVar9) goto LAB_01357404;
          }
          else {
            if (*(int *)(lVar30 + 0x15c) != 0) {
              pbVar33 = (byte *)(lVar30 + 0x158);
            }
            if (7 < *pbVar33) {
              if ((*(int *)(lVar30 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
                pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
                goto LAB_0135739c;
              }
              goto LAB_013573a8;
            }
LAB_0135740c:
            bVar34 = *pbVar33;
            if (7 < bVar34) {
              bVar34 = 0xff;
            }
            local_158 = (undefined **)CONCAT71(local_158._1_7_,bVar34);
          }
          ppuVar46 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_b0 = (undefined **)0x40b565a;
          local_b8 = ppuVar46;
          iVar11 = FUN_0274bce0(&local_158,&local_b8);
          if (iVar11 != 0) {
            local_b0 = (undefined **)0x40ab3d8;
            local_b8 = ppuVar46;
            iVar11 = FUN_0274bce0(&local_158,&local_b8);
            puVar3 = PTR_DAT_04bbc1a0;
            puVar20 = PTR_DAT_04bbbce0;
            puVar19 = PTR_DAT_04bb2e18;
            if (iVar11 == 0) {
              lVar30 = *(long *)(*plVar25 + 0x1f8);
              local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
              local_a8 = PTR_DAT_04bb2010 + 0x10;
              local_b0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
              local_88[0] = (undefined **)(PTR_DAT_04bbbce0 + 0x10);
              iVar11 = *(int *)(lVar30 + 0x198);
              local_a0 = (undefined **)0x230000001d;
              local_90 = (char *)0x2700000020;
              iVar15 = *(int *)(lVar30 + 400);
              local_98 = local_a8;
              if (iVar11 < iVar15) {
                *(int *)(lVar30 + 0x198) = iVar11 + 1;
                iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
                iVar13 = 0;
                if (iVar15 <= iVar11) {
                  iVar13 = iVar15;
                }
                puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar13) * 0x50)
                ;
                puVar1 = puVar19 + 0x10;
                *puVar27 = 0;
                *(undefined ***)(puVar27 + 2) = local_b0;
                *(undefined **)(puVar27 + 4) = puVar1;
                puVar27[6] = 0x1d;
                *(char **)(puVar27 + 4) = local_a8;
                *(undefined **)(puVar27 + 8) = puVar1;
                puVar27[7] = 0x23;
                puVar27[10] = 0x20;
                *(char **)(puVar27 + 8) = local_a8;
                *(undefined ***)(puVar27 + 0xc) = local_88[0];
                puVar27[0xb] = 0x27;
                (**(code **)(puVar20 + 0x20))(local_88);
                iVar11 = *(int *)(lVar30 + 0x198);
                iVar15 = *(int *)(lVar30 + 400);
              }
              puVar1 = PTR_DAT_04bbbce0;
              puVar20 = PTR_DAT_04bb2010;
              local_b8 = (undefined **)CONCAT44(local_b8._4_4_,4);
              local_a0 = (undefined **)0x1a00000022;
              local_90 = (char *)0x1d00000023;
              if (iVar11 < iVar15) {
                *(int *)(lVar30 + 0x198) = iVar11 + 1;
                iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
                iVar13 = 0;
                if (iVar15 <= iVar11) {
                  iVar13 = iVar15;
                }
                puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar13) * 0x50)
                ;
                *puVar27 = 4;
                puVar19 = puVar19 + 0x10;
                *(undefined **)(puVar27 + 2) = puVar3 + 0x10;
                *(undefined **)(puVar27 + 4) = puVar19;
                puVar27[6] = 0x22;
                *(undefined **)(puVar27 + 8) = puVar19;
                puVar27[7] = 0x1a;
                *(undefined **)(puVar27 + 4) = puVar20 + 0x10;
                puVar27[10] = 0x23;
                *(undefined **)(puVar27 + 8) = puVar20 + 0x10;
                *(undefined **)(puVar27 + 0xc) = puVar1 + 0x10;
                puVar27[0xb] = 0x1d;
                (*(code *)local_88[0][2])(local_88);
              }
            }
          }
          goto LAB_01357ad4;
        }
        FUN_01355690(0x1d);
        puVar19 = PTR_DAT_04bb2020;
        local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
        local_b0 = (undefined **)0x40eeccf;
        uVar39 = FUN_0273f0a0(&local_b8);
        if ((uVar39 & 1) == 0) goto LAB_01357ad4;
        lVar30 = *(long *)puVar4;
        local_150 = (undefined **)((ulong)local_150 & 0xffffffff00000000);
        if (lVar30 == 0) {
          puVar38 = &DAT_055c04a0;
        }
        else {
          puVar38 = &DAT_055c04a0;
          if (*(long *)(lVar30 + 0x330) != 0) {
            puVar38 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
            iVar11 = FUN_006bd550(*puVar38,0);
            puVar38 = puVar44;
            if (iVar11 != 0x758f7eaf) {
              puVar38 = &DAT_055c04a0;
            }
          }
        }
        local_150 = (undefined **)CONCAT44(*(undefined4 *)(puVar38 + 7),(uint)local_150);
        uVar10 = FUN_017baf44();
        local_148 = CONCAT31(local_148._1_3_,uVar10) & 0xffffff01;
        local_158 = (undefined **)(PTR_DAT_04bb5438 + 0x10);
        uVar39 = FUN_029270d0();
        if ((uVar39 & 1) != 0) {
          local_e0 = (undefined **)0x3a1a;
          FUN_0277d4ac(&local_e0);
          local_b8 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          local_b0 = (undefined **)0x7500000094;
          FUN_01a50970(&local_158,0,&local_e0,&local_b8);
        }
        local_b8 = (undefined **)(puVar19 + 0x10);
        local_b0 = (undefined **)&DAT_04061c5f;
        iVar11 = FUN_02926a20(&local_b8);
        if (iVar11 == 0) {
          local_e0 = (undefined **)0x3a32;
          FUN_0277d4ac(&local_e0);
          local_b8 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
          local_b0 = (undefined **)0x640000007e;
          FUN_01a50970(&local_158,0,&local_e0,&local_b8);
        }
        uVar47 = FUN_01a4fa00(&local_158);
        uVar39 = (ulong)local_e0 >> 0x20;
        local_e0 = (undefined **)(uVar39 << 0x20);
        local_b8 = &PTR_FUN_04993218;
        if (*(long *)(*plVar25 + 0x1f8) != 0) {
          local_e0 = (undefined **)(uVar39 << 0x20);
          lVar30 = *(long *)(*(long *)(*plVar25 + 0x1f8) + 0xd0);
          if (lVar30 != 0) {
            local_b0 = (undefined **)&local_158;
            FUN_012e6150(lVar30,&local_b8,uVar47);
          }
        }
        local_b0 = (undefined **)&DAT_04993188;
        local_b8 = (undefined **)(puVar19 + 0x10);
        iVar11 = FUN_02926a20(&local_b8);
        local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
        if (iVar11 == 3) {
          local_b0 = (undefined **)&DAT_0499318c;
          local_b8 = (undefined **)(puVar19 + 0x10);
          iVar11 = FUN_02926a20(&local_b8);
          local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
          if (iVar11 == 3) {
            local_b0 = (undefined **)&DAT_04993190;
            local_b8 = (undefined **)(puVar19 + 0x10);
            iVar11 = FUN_02926a20(&local_b8);
            local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
            if (iVar11 == 3) {
              local_b0 = (undefined **)&DAT_04993194;
              local_b8 = (undefined **)(puVar19 + 0x10);
              iVar11 = FUN_02926a20(&local_b8);
              local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
              if (iVar11 == 3) {
                local_b0 = (undefined **)&DAT_04993198;
                local_b8 = (undefined **)(puVar19 + 0x10);
                iVar11 = FUN_02926a20(&local_b8);
                local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
                if (iVar11 == 3) {
                  local_b0 = (undefined **)&DAT_0499319c;
                  local_b8 = (undefined **)(puVar19 + 0x10);
                  iVar11 = FUN_02926a20(&local_b8);
                  local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
                  if (iVar11 == 3) {
                    local_b8 = (undefined **)(puVar19 + 0x10);
                    local_b0 = (undefined **)&DAT_049931a0;
                    iVar11 = FUN_02926a20(&local_b8);
                    local_e0 = (undefined **)CONCAT44(local_e0._4_4_,iVar11);
                    if (iVar11 == 3) goto LAB_01357ad4;
                  }
                }
              }
            }
          }
        }
        local_108 = (undefined **)0x2ec;
        FUN_0277d4ac(&local_108);
        puVar19 = PTR_DAT_04bb43c0;
        local_a8 = (char *)0x0;
        local_b8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        local_b0 = local_108;
        lVar30 = *(long *)PTR_DAT_04bb43c0;
        uVar12 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar19 != 0) {
          lVar30 = *(long *)(lVar30 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            lVar30 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(&local_108);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if (uVar12 < *(uint *)(lVar30 + 0x1d8)) {
              pcVar32 = *(char **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8);
              if (pcVar32 != (char *)0x0) {
                local_a8 = pcVar32;
              }
            }
          }
        }
        FUN_01afade0(&local_b8,3);
        puVar18 = &local_158;
        pppuVar28 = &local_188;
        puVar38 = &local_e0;
        local_188 = local_b0;
        local_e0 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        local_d8 = (char *)0x9a00000096;
      }
      FUN_01a50970(puVar18,0,pppuVar28,puVar38);
    }
LAB_01357ad4:
    iVar11 = *(int *)(puVar44 + 7);
LAB_01357ad8:
    if (iVar11 == -0x10e0fba8) {
      FUN_01206ec0();
      local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_b0 = (undefined **)0x40eeccf;
      uVar39 = FUN_0273f0a0(&local_b8);
      if ((uVar39 & 1) != 0) {
        lVar30 = *(long *)PTR_DAT_04bb46b0;
        if (lVar30 == 0) {
LAB_01357b68:
          lVar30 = 0;
        }
        else {
          puVar38 = *(undefined8 **)(lVar30 + 0x10);
          if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
            lVar17 = (**(code **)(*(long *)*puVar38 + 0x38))();
            lVar30 = 0;
            if (lVar17 != 0) {
              lVar30 = lVar17 + 0x70;
            }
          }
          else {
            if (puVar38 == (undefined8 *)0x0) goto LAB_01357b68;
            lVar30 = 0;
            if ((long *)puVar38[0x26] != (long *)0x0) {
              lVar30 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
            }
          }
        }
        if ((*(long **)(lVar30 + 0x1bd708) == (long *)0x0) ||
           (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x1bd708), puVar38 == (undefined8 *)0x0)) {
          FUN_02875320(*(long *)(lVar30 + 0x1bd6f0) + *(long *)(FUN_001bd6e8 + lVar30));
        }
        else {
          uVar39 = (**(code **)*puVar38)();
          FUN_02875320(*(long *)(lVar30 + 0x1bd6f0) + *(long *)(FUN_001bd6e8 + lVar30));
          if ((uVar39 & 1) != 0) {
            if (*(long *)(lVar30 + 0x1bd708) != 0) {
              puVar38 = *(undefined8 **)(*(long *)(lVar30 + 0x1bd708) + 8);
              if (puVar38 != (undefined8 *)0x0) {
                (**(code **)*puVar38)();
              }
            }
          }
        }
      }
    }
  }
  else {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,4);
    puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar23 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar23 >> 4 & 1) == 0) {
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,7);
      puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar23 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar23 >> 7 & 1) != 0) {
        FUN_013598c0();
        goto LAB_01357ad4;
      }
      goto LAB_01355c84;
    }
    iVar11 = *(int *)((long)puVar44 + 0x38);
    if (iVar11 < -0x21ba1d3a) {
      if (iVar11 != -0x75e80b7c) {
        if (iVar11 == -0x6e1ed560) {
          lVar30 = *(long *)PTR_DAT_04bb46b0;
          if (lVar30 == 0) {
LAB_01356cbc:
            lVar30 = 0;
          }
          else {
            puVar38 = *(undefined8 **)(lVar30 + 0x10);
            if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
              lVar17 = (**(code **)(*(long *)*puVar38 + 0x38))();
              lVar30 = 0;
              if (lVar17 != 0) {
                lVar30 = lVar17 + 0x70;
              }
            }
            else {
              if (puVar38 == (undefined8 *)0x0) goto LAB_01356cbc;
              lVar30 = 0;
              if ((long *)puVar38[0x26] != (long *)0x0) {
                lVar30 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
              }
            }
          }
          plVar22 = (long *)(lVar30 + 0x1a0d80);
          if ((*(long **)(lVar30 + 0x1a0da0) != (long *)0x0) &&
             (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x1a0da0), puVar38 != (undefined8 *)0x0))
          {
            uVar39 = (**(code **)*puVar38)();
            FUN_0289c5d0(*(long *)(lVar30 + 0x1a0d88) + *plVar22);
            goto joined_r0x01356cf4;
          }
          FUN_0289c5d0(*(long *)(lVar30 + 0x1a0d88) + *plVar22);
          goto LAB_01357ad4;
        }
        if (iVar11 != -0x41c3528e) goto LAB_01357ad8;
      }
      local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_b0 = (undefined **)0x40f4383;
      iVar11 = FUN_0273ea30(&local_b8);
      if (iVar11 == 0) goto LAB_01357ad4;
      lVar30 = *(long *)PTR_DAT_04bb46b0;
      if (lVar30 == 0) {
LAB_01356bdc:
        lVar30 = 0;
      }
      else {
        puVar38 = *(undefined8 **)(lVar30 + 0x10);
        if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
          lVar17 = (**(code **)(*(long *)*puVar38 + 0x38))();
          lVar30 = 0;
          if (lVar17 != 0) {
            lVar30 = lVar17 + 0x70;
          }
        }
        else {
          if (puVar38 == (undefined8 *)0x0) goto LAB_01356bdc;
          lVar30 = 0;
          if ((long *)puVar38[0x26] != (long *)0x0) {
            lVar30 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
          }
        }
      }
      plVar22 = (long *)(lVar30 + 0x1a3d68);
      if ((*(long **)(lVar30 + 0x1a3d88) == (long *)0x0) ||
         (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x1a3d88), puVar38 == (undefined8 *)0x0)) {
        FUN_028b34b0(*(long *)(lVar30 + 0x1a3d70) + *plVar22);
        goto LAB_01357ad4;
      }
      uVar39 = (**(code **)*puVar38)();
      FUN_028b34b0(*(long *)(lVar30 + 0x1a3d70) + *plVar22);
      goto joined_r0x01356cf4;
    }
    if (iVar11 != -0x21ba1d3a) {
      if (iVar11 == -0x122957f5) {
        lVar30 = *(long *)PTR_DAT_04bb46b0;
        if (lVar30 == 0) {
LAB_01356d28:
          lVar30 = 0;
        }
        else {
          puVar38 = *(undefined8 **)(lVar30 + 0x10);
          if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
            lVar17 = (**(code **)(*(long *)*puVar38 + 0x38))();
            lVar30 = 0;
            if (lVar17 != 0) {
              lVar30 = lVar17 + 0x70;
            }
          }
          else {
            if (puVar38 == (undefined8 *)0x0) goto LAB_01356d28;
            lVar30 = 0;
            if ((long *)puVar38[0x26] != (long *)0x0) {
              lVar30 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
            }
          }
        }
        plVar22 = (long *)(lVar30 + 0x1b9008);
        if ((*(long **)(lVar30 + 0x1b9028) == (long *)0x0) ||
           (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x1b9028), puVar38 == (undefined8 *)0x0)) {
          FUN_02871950(*(long *)(lVar30 + 0x1b9010) + *plVar22);
          goto LAB_01357ad4;
        }
        uVar39 = (**(code **)*puVar38)();
        FUN_02871950(*(long *)(lVar30 + 0x1b9010) + *plVar22);
joined_r0x01356cf4:
        if ((uVar39 & 1) != 0) goto LAB_01356d64;
        goto LAB_01357ad4;
      }
      if (iVar11 == 0x3ee08254) {
        lVar30 = *(long *)PTR_DAT_04bb46b0;
        if (lVar30 == 0) {
LAB_01356c50:
          lVar30 = 0;
        }
        else {
          puVar38 = *(undefined8 **)(lVar30 + 0x10);
          if ((*(byte *)(lVar30 + 0x453) & 1) == 0) {
            lVar17 = (**(code **)(*(long *)*puVar38 + 0x38))();
            lVar30 = 0;
            if (lVar17 != 0) {
              lVar30 = lVar17 + 0x70;
            }
          }
          else {
            if (puVar38 == (undefined8 *)0x0) goto LAB_01356c50;
            lVar30 = 0;
            if ((long *)puVar38[0x26] != (long *)0x0) {
              lVar30 = (**(code **)(*(long *)puVar38[0x26] + 0x38))();
            }
          }
        }
        plVar22 = (long *)(lVar30 + 0x1be788);
        if ((*(long **)(lVar30 + 0x1be7a8) == (long *)0x0) ||
           (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x1be7a8), puVar38 == (undefined8 *)0x0)) {
          FUN_02883a90(*(long *)(lVar30 + 0x1be790) + *plVar22);
          goto LAB_01357ad4;
        }
        uVar39 = (**(code **)*puVar38)();
        FUN_02883a90(*(long *)(lVar30 + 0x1be790) + *plVar22);
        goto joined_r0x01356cf4;
      }
      goto LAB_01357ad8;
    }
    lVar30 = *(long *)PTR_DAT_04bb46b0;
    if (lVar30 != 0) {
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,1);
      if (((*(byte *)(lVar30 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar30 = (**(code **)(**(long **)(*(long *)(lVar30 + 0x10) + 0x188) + 0x38))();
        if (lVar30 == 0) goto LAB_01357ad4;
        plVar22 = (long *)(&LAB_005d53e8 + lVar30);
        if ((*(long **)(&LAB_005d5408 + lVar30) == (long *)0x0) ||
           (puVar38 = (undefined8 *)**(long **)(&LAB_005d5408 + lVar30),
           puVar38 == (undefined8 *)0x0)) {
          FUN_028fe550(*(long *)(&LAB_005d53f0 + lVar30) + *plVar22);
          goto LAB_01357ad4;
        }
        uVar39 = (**(code **)*puVar38)();
        FUN_028fe550(*(long *)(&LAB_005d53f0 + lVar30) + *plVar22);
        if ((uVar39 & 1) == 0) goto LAB_01357ad4;
LAB_01356d64:
        if (plVar22[4] != 0) {
          puVar38 = *(undefined8 **)(plVar22[4] + 8);
          if (puVar38 != (undefined8 *)0x0) {
            (**(code **)*puVar38)();
          }
        }
      }
      goto LAB_01357ad4;
    }
  }
  sVar7 = *puVar50;
  if (sVar7 == -1) {
LAB_01357c20:
    iVar11 = *(int *)(puVar44 + 7);
    if (iVar11 == -0xbb9f562) goto LAB_01357c2c;
  }
  else {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,3);
    puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar23 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar23 >> 3 & 1) == 0) goto LAB_01357c20;
LAB_01357c2c:
    local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
    local_b8 = (undefined **)0x0;
    local_158 = (undefined **)((ulong)local_158 & 0xffffffff00000000);
    uVar39 = FUN_0125efa4(&local_b8,&local_158);
    if ((uVar39 & 1) != 0) {
      FUN_02231868(&local_b8,&local_158);
    }
    iVar11 = *(int *)(puVar44 + 7);
  }
  puVar20 = PTR_DAT_04bb46b0;
  puVar19 = PTR_DAT_04bb27f8;
  if (iVar11 < -0x5c2fda8c) {
    if (iVar11 == -0x6efba09b) {
      FUN_01355690(0x1e);
      FUN_01355690(0x20);
      FUN_01355690(0x21);
      FUN_01355690(0x22);
      FUN_01355690(0x23);
      FUN_01355690(0x24);
    }
    else if (iVar11 == -0x68a9a319) {
      local_e0 = (undefined **)0xfffe;
      uVar47 = FUN_0277d4ac(&local_e0);
      local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      local_b0 = (undefined **)0x4086e25;
      iVar11 = FUN_02757a80(uVar47,&local_b8);
      if (iVar11 == 0) {
        local_b8 = (undefined **)0x39ce;
        FUN_0277d4ac(&local_b8);
      }
      else {
        local_b8 = (undefined **)0xc32;
        FUN_0277d4ac(&local_b8);
        puVar20 = PTR_DAT_04bb43c0;
        local_e0 = local_b8;
        local_b0 = local_b8;
        local_a8 = (char *)0x0;
        lVar30 = *(long *)PTR_DAT_04bb43c0;
        local_b8 = (undefined **)(PTR_DAT_04bc0510 + 0x10);
        uVar12 = FUN_0277d6c4(&local_b0);
        if (*(long *)puVar20 != 0) {
          lVar30 = *(long *)(lVar30 + 0x57e58);
          uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
          if ((uVar12 < *(uint *)(lVar30 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
            lVar30 = *(long *)PTR_DAT_04bc0428;
            uVar12 = FUN_0277d6c4(&local_e0);
            uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
            if (uVar12 < *(uint *)(lVar30 + 0x1d8)) {
              pcVar32 = *(char **)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar12 * 8);
              if (pcVar32 != (char *)0x0) {
                local_a8 = pcVar32;
              }
            }
          }
        }
        iVar11 = FUN_01ad7260(&local_b8);
        if (((iVar11 != 0) && (iVar11 = FUN_01ad7260(&local_b8), 1 < iVar11)) &&
           (puVar21 = (ushort *)FUN_01afd600(&local_b8), puVar21 != (ushort *)0x0)) {
          *puVar21 = *puVar21 & 0xfff8 | 1;
        }
        local_b8._0_4_ = (undefined4)local_b0;
        local_b8._4_4_ = local_b0._4_4_;
      }
      local_e0 = (undefined **)CONCAT44(local_b8._4_4_,(undefined4)local_b8);
      local_b0 = (undefined **)((ulong)local_b0 & 0xffffffff00000000);
      local_b8 = (undefined **)(PTR_DAT_04bbfe68 + 0x10);
      lVar30 = *(long *)puVar4;
      if (lVar30 == 0) {
        puVar38 = &DAT_055c04a0;
      }
      else {
        puVar38 = &DAT_055c04a0;
        if (*(long *)(lVar30 + 0x330) != 0) {
          puVar38 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar30 + 0x338));
          iVar11 = FUN_006bd550(*puVar38,0);
          puVar38 = puVar44;
          if (iVar11 != 0x758f7eaf) {
            puVar38 = &DAT_055c04a0;
          }
        }
      }
      local_b0 = (undefined **)CONCAT44(*(undefined4 *)(puVar38 + 7),(undefined4)local_b0);
      uVar10 = FUN_017baf44();
      local_a8 = (char *)(CONCAT71(local_a8._1_7_,uVar10) & 0xffffffffffffff01);
      local_158 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      local_150 = (undefined **)0x1a00000018;
      FUN_01a50970(&local_b8,0,&local_e0,&local_158);
    }
  }
  else if (iVar11 == -0x5c2fda8c) {
    FUN_0252d11c(&local_158);
    puVar4 = PTR_DAT_04bb2020;
    local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_b0 = (undefined **)0x40eeca8;
    iVar11 = FUN_02753180(&local_158,&local_b8);
    if (iVar11 != 0) {
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      (**(code **)(DAT_0545c410 + 0x18))(&DAT_0545c410);
      if (DAT_0545c418 == &DAT_0409b647) {
LAB_013584e4:
        local_b0 = (undefined **)0x405bfd1;
        local_b8 = (undefined **)(puVar4 + 0x10);
        iVar13 = FUN_02758850(&local_b8);
        local_b0 = (undefined **)0x40e915d;
        local_b8 = (undefined **)(puVar4 + 0x10);
        iVar14 = FUN_02758850(&local_b8);
        puVar4 = PTR_DAT_04bbbce0;
        local_b0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
        lVar30 = *(long *)(*plVar25 + 0x1f8);
        local_a8 = PTR_DAT_04bb2010 + 0x10;
        local_a0 = (undefined **)CONCAT44(iVar14 + -1,iVar13 + -1);
        iVar11 = *(int *)(lVar30 + 0x198);
        iVar15 = *(int *)(lVar30 + 400);
        local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
        local_90 = (char *)CONCAT44(iVar14,iVar13);
        local_88[0] = (undefined **)(PTR_DAT_04bbbce0 + 0x10);
        local_98 = local_a8;
        if (iVar11 < iVar15) {
          *(int *)(lVar30 + 0x198) = iVar11 + 1;
          iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
          iVar5 = 0;
          if (iVar15 <= iVar11) {
            iVar5 = iVar15;
          }
          puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar5) * 0x50);
          *puVar27 = 0;
          *(undefined ***)(puVar27 + 2) = local_b0;
          puVar27[6] = iVar13 + -1;
          *(char **)(puVar27 + 4) = local_a8;
          puVar27[7] = iVar14 + -1;
          puVar27[10] = iVar13;
          *(undefined ***)(puVar27 + 0xc) = local_88[0];
          *(char **)(puVar27 + 8) = local_a8;
          puVar27[0xb] = iVar14;
          (**(code **)(puVar4 + 0x20))(local_88);
        }
      }
      else {
        uVar39 = 0;
        bVar9 = true;
        do {
          if (DAT_0545c418[uVar39] != (&DAT_0409b647)[uVar39]) break;
          if (DAT_0545c418[uVar39] == '\0') {
            if (bVar9) goto LAB_013584e4;
            break;
          }
          bVar9 = uVar39 < 0x80000;
          uVar39 = uVar39 + 1;
        } while (uVar39 != 0x80001);
      }
    }
  }
  else if (iVar11 == -0x17df00c3) {
    uVar39 = FUN_0375f040(*(undefined8 *)PTR_DAT_04bb59d8);
    puVar4 = PTR_DAT_04bb5008;
    if ((uVar39 & 1) == 0) {
      FUN_02b93b60(&local_e0);
      uVar39 = (ulong)local_b8 >> 0x20;
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      lVar30 = *plVar25;
      puVar38 = &DAT_05636dd8;
      if (*(long *)(lVar30 + 0x1f8) != 0) {
        puVar38 = (undefined8 *)(*(long *)(lVar30 + 0x1f8) + 0x148);
      }
      if (puVar38[1] != 0) {
        local_98 = (char *)((ulong)local_98 & 0xffffffffffff0000);
        local_b8 = (undefined **)CONCAT44((int)uVar39,0x1f);
        local_b0 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        local_a8 = local_d8;
        local_a0 = (undefined **)((ulong)local_a0 & 0xffffffff00000000);
        local_150 = (undefined **)(((ulong)local_150 >> 8 & 0xffffff) << 8);
        local_158 = (undefined **)(PTR_DAT_04bc4608 + 0x10);
        local_148 = (uint)local_b0;
        cStack_144 = (char)((ulong)local_b0 >> 0x20);
        cStack_143 = (char)((ulong)local_b0 >> 0x28);
        cStack_142 = (char)((ulong)local_b0 >> 0x30);
        uStack_141 = (undefined1)((ulong)local_b0 >> 0x38);
        local_140._0_2_ = 0;
        local_140._2_1_ = 0;
        local_140._3_1_ = 0;
        local_140._4_4_ = 0;
        local_138 = (char *)((ulong)local_138 & 0xffff000000000000);
        FUN_02a8f958(&local_158,&local_b8);
        FUN_02a59250(puVar38,&local_158);
        lVar30 = *plVar25;
      }
      lVar17 = *(long *)puVar4;
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      ppuVar46 = (undefined **)(lVar17 + 0x266f0);
      *(undefined8 *)(lVar17 + 0x266f8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x26700) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x26708) = 0xffffffffffffffff;
      *(undefined8 *)(lVar17 + 0x26710) = 0xffffffffffffffff;
      puVar38 = &DAT_05636dd8;
      if (*(long *)(lVar30 + 0x1f8) != 0) {
        puVar38 = (undefined8 *)(*(long *)(lVar30 + 0x1f8) + 0x148);
      }
      if (puVar38[1] != 0) {
        local_158 = &PTR_FUN_04aa6248;
        local_150 = ppuVar46;
        plVar22 = (long *)(*(code *)**(undefined8 **)(puVar38[1] + 0x10))();
        iVar11 = (**(code **)(*plVar22 + 0x18))();
        if (0 < iVar11) {
          iVar15 = 0;
          do {
            FUN_01360490(&local_b8,puVar38[1],iVar15);
            uVar39 = (*(code *)*local_158)(&local_158,&local_b8,iVar15);
            if ((uVar39 & 1) == 0) break;
            bVar9 = iVar11 + -1 != iVar15;
            iVar15 = iVar15 + 1;
          } while (bVar9);
        }
      }
    }
    else {
      lVar30 = *(long *)PTR_DAT_04bb5008;
      local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
      ppuVar46 = (undefined **)(lVar30 + 0x266f0);
      lVar17 = *plVar25;
      *(undefined8 *)(lVar30 + 0x266f8) = 0xffffffffffffffff;
      *(undefined8 *)(lVar30 + 0x26700) = 0xffffffffffffffff;
      *(undefined8 *)(lVar30 + 0x26708) = 0xffffffffffffffff;
      *(undefined8 *)(lVar30 + 0x26710) = 0xffffffffffffffff;
      puVar38 = &DAT_05636dd8;
      if (*(long *)(lVar17 + 0x1f8) != 0) {
        puVar38 = (undefined8 *)(*(long *)(lVar17 + 0x1f8) + 0x148);
      }
      if (puVar38[1] != 0) {
        local_158 = &PTR_FUN_04aa6248;
        local_150 = ppuVar46;
        plVar22 = (long *)(*(code *)**(undefined8 **)(puVar38[1] + 0x10))();
        iVar11 = (**(code **)(*plVar22 + 0x18))();
        if (0 < iVar11) {
          iVar15 = 0;
          do {
            FUN_01360490(&local_b8,puVar38[1],iVar15);
            uVar39 = (*(code *)*local_158)(&local_158,&local_b8,iVar15);
            if ((uVar39 & 1) == 0) break;
            bVar9 = iVar11 + -1 != iVar15;
            iVar15 = iVar15 + 1;
          } while (bVar9);
        }
      }
      FUN_02b8afb0(ppuVar46);
    }
    FUN_02b8baec(ppuVar46);
  }
  else if ((iVar11 == 0x756daeec) &&
          (((*(long *)PTR_DAT_04bb27f8 == 0 ||
            (((*(byte *)(*(long *)PTR_DAT_04bb27f8 + 0x1a71) >> 2 & 1) == 0 &&
             ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
              ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))))) &&
           (lVar30 = *(long *)PTR_DAT_04bb46b0, lVar30 != 0)))) {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,1);
    if ((((*(byte *)(lVar30 + 0x50d) ^ 0xff) & 6) == 0) &&
       (lVar30 = (**(code **)(**(long **)(*(long *)(lVar30 + 0x10) + 0x188) + 0x38))(), lVar30 != 0)
       ) {
      lVar17 = *(long *)puVar20;
      if (lVar17 == 0) {
LAB_01359804:
        bVar9 = false;
      }
      else {
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,1);
        if ((((*(byte *)(lVar17 + 0x50d) ^ 0xff) & 6) != 0) ||
           (lVar17 = (**(code **)(**(long **)(*(long *)(lVar17 + 0x10) + 0x188) + 0x38))(),
           lVar17 == 0)) goto LAB_01359804;
        local_158 = (undefined **)CONCAT44(local_158._4_4_,4);
        if (*(long **)(lVar17 + 0x36620) == (long *)0x0) {
          uVar39 = 0;
        }
        else {
          puVar38 = (undefined8 *)**(long **)(lVar17 + 0x36620);
          uVar39 = 0;
          if (puVar38 != (undefined8 *)0x0) {
            uVar39 = (**(code **)*puVar38)();
          }
        }
        pcVar32 = (char *)(*(long *)(lVar17 + 0x36608) + *(long *)(lVar17 + 0x36600));
        uVar12 = (uint)*pcVar32;
        if ((((((uVar12 == 2) && (*(long *)puVar19 != 0)) &&
              (*(int *)(*(long *)puVar19 + 0x14) != 0)) &&
             ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 ||
              ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))) && ((uint)local_158 != 5)) &&
           ((uint)local_158 != 6)) {
          uVar12 = (uint)*(ushort *)(pcVar32 + 0x899c);
          bVar9 = (uint)local_158 == uVar12;
        }
        else {
          bVar9 = false;
        }
        local_b8 = (undefined **)CONCAT44(local_b8._4_4_,uVar12);
        if ((((uVar39 & 1) != 0) && (*(long *)(lVar17 + 0x36620) != 0)) &&
           (puVar38 = *(undefined8 **)(*(long *)(lVar17 + 0x36620) + 8),
           puVar38 != (undefined8 *)0x0)) {
          (**(code **)*puVar38)();
        }
        lVar17 = *(long *)puVar19;
        if ((*(int *)(lVar17 + 0x14) == 6) ||
           (((*(int *)(lVar17 + 0x18) == 1 && (6 < *(int *)(lVar17 + 0x14))) &&
            (*(int *)(lVar17 + 0x14) < 9)))) goto LAB_01359804;
      }
      if ((*(long **)(lVar30 + 0x5d4598) == (long *)0x0) ||
         (puVar38 = (undefined8 *)**(long **)(lVar30 + 0x5d4598), puVar38 == (undefined8 *)0x0)) {
        FUN_02902d68(*(long *)(lVar30 + 0x5d4580) + *(long *)(lVar30 + 0x5d4578),bVar9);
      }
      else {
        uVar39 = (**(code **)*puVar38)();
        FUN_02902d68(*(long *)(lVar30 + 0x5d4580) + *(long *)(lVar30 + 0x5d4578),bVar9);
        if ((((uVar39 & 1) != 0) && (*(long *)(lVar30 + 0x5d4598) != 0)) &&
           (puVar38 = *(undefined8 **)(*(long *)(lVar30 + 0x5d4598) + 8),
           puVar38 != (undefined8 *)0x0)) {
          (**(code **)*puVar38)();
        }
      }
    }
  }
  if (*(long *)puVar19 != 0) {
    FUN_036da130();
  }
  sVar7 = *puVar50;
  if (sVar7 != -1) {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,3);
    puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
    if (0xff < (uint)(int)sVar7) {
      puVar23 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar23 >> 3 & 1) != 0) {
      uVar39 = FUN_016cf630();
      if ((uVar39 & 1) != 0) {
        local_158 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
        local_150 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        lVar30 = *plVar25;
        local_140._0_2_ = SUB82(local_150,0);
        local_140._2_1_ = (undefined1)((ulong)local_150 >> 0x10);
        local_140._3_1_ = (undefined1)((ulong)local_150 >> 0x18);
        local_140._4_4_ = (undefined4)((ulong)local_150 >> 0x20);
        if (lVar30 != 0) {
          if (*(char *)(lVar30 + 0x4b30) != '\0') {
            uVar12 = *(uint *)(lVar30 + 0x4b34);
            lVar30 = FUN_01260194(0xe7);
            local_b8 = (undefined **)CONCAT44(local_b8._4_4_,uVar12);
            if (uVar12 < *(uint *)(lVar30 + 0x420)) {
              lVar30 = *(long *)(*(long *)(lVar30 + 0x428) + (long)(int)uVar12 * 8);
              if (lVar30 != 0) {
                puVar23 = (uint *)(**(code **)(*(long *)(lVar30 + 0x178) + 0xf0))(lVar30 + 0x178);
                uVar43 = *puVar23;
                lVar17 = (**(code **)(*(long *)(lVar30 + 0x178) + 0xf0))(lVar30 + 0x178);
                iVar11 = *(int *)(lVar17 + 4);
                piVar24 = (int *)(**(code **)(*(long *)(lVar30 + 0x1b0) + 0xf0))(lVar30 + 0x1b0);
                iVar15 = *piVar24;
                lVar30 = (**(code **)(*(long *)(lVar30 + 0x1b0) + 0xf0))(lVar30 + 0x1b0);
                plVar48 = (long *)PTR_DAT_04bb27d0;
                cStack_144 = (char)iVar11;
                cStack_143 = (char)((uint)iVar11 >> 8);
                cStack_142 = (char)((uint)iVar11 >> 0x10);
                uStack_141 = (undefined1)((uint)iVar11 >> 0x18);
                local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                uVar12 = *(int *)(lVar30 + 4) + iVar11;
                local_138 = (char *)CONCAT44(uVar12 - 1,uVar43 + iVar15 + -1);
                lVar17 = *(long *)(*plVar25 + 0x1f8);
                local_148 = uVar43;
                if (lVar17 != 0) {
                  local_b8 = (undefined **)&local_150;
                  local_b0 = (undefined **)&local_140;
                  local_a0 = (undefined **)CONCAT44(iVar11,uVar43);
                  local_a8 = PTR_DAT_04bb2010 + 0x10;
                  if (*(int *)(lVar30 + 4) != 0) {
                    ppuVar46 = (undefined **)(PTR_DAT_04bc35c0 + 0x10);
                    do {
                      local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
                      lVar30 = *(long *)(lVar17 + 0xd0);
                      if (lVar30 == 0) {
                        plVar25 = (long *)PTR_DAT_04bb37e0;
                      }
                      else {
                        lVar31 = lVar30 + 0x130 + (ulong)*(uint *)(lVar30 + 0x198) * 0x30;
                        if (1 < *(uint *)(lVar30 + 0x198)) {
                          lVar31 = lVar30 + 0x130;
                        }
                        plVar25 = (long *)FUN_012eb21c(lVar31,&local_a8,0);
                      }
                      local_d8 = (char *)*plVar25;
                      local_e0 = ppuVar46;
                      iVar11 = FUN_0277d6c4(&local_d8);
                      if (iVar11 - 0xf619U < 7) {
                        local_e0 = (undefined **)(PTR_DAT_04bc35c0 + 0x10);
                        local_d8 = (char *)*plVar25;
                        iVar11 = FUN_0277d6c4(&local_d8);
                        if ((iVar11 != 0xf61e) &&
                           (iVar11 = FUN_0277d6c4(&local_d8), iVar11 != 0xf61f)) goto LAB_01358798;
                      }
                      else if ((short)*plVar25 != -2) {
LAB_01358798:
                        puVar4 = PTR_DAT_04bbbce0;
                        uVar16 = CONCAT13(uStack_141,
                                          CONCAT12(cStack_142,CONCAT11(cStack_143,cStack_144)));
                        local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
                        local_b0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
                        local_88[0] = (undefined **)(PTR_DAT_04bbbce0 + 0x10);
                        local_a0 = (undefined **)CONCAT44(uVar16,local_148);
                        local_90 = local_138;
                        iVar11 = *(int *)(lVar17 + 0x198);
                        iVar15 = *(int *)(lVar17 + 400);
                        local_a8 = PTR_DAT_04bb2010 + 0x10;
                        local_98 = local_a8;
                        if (iVar11 < iVar15) {
                          *(int *)(lVar17 + 0x198) = iVar11 + 1;
                          iVar11 = *(int *)(lVar17 + 0x194) + iVar11;
                          iVar13 = 0;
                          if (iVar15 <= iVar11) {
                            iVar13 = iVar15;
                          }
                          puVar27 = (undefined4 *)
                                    (*(long *)(lVar17 + 0x188) + (long)(iVar11 - iVar13) * 0x50);
                          *puVar27 = 0;
                          *(undefined ***)(puVar27 + 2) = local_b0;
                          puVar27[6] = local_148;
                          *(char **)(puVar27 + 4) = local_a8;
                          puVar27[7] = uVar16;
                          puVar27[10] = (int)local_138;
                          *(undefined ***)(puVar27 + 0xc) = local_88[0];
                          *(char **)(puVar27 + 8) = local_a8;
                          puVar27[0xb] = local_138._4_4_;
                          (**(code **)(puVar4 + 0x20))(local_88);
                        }
                        break;
                      }
                      if ((int)local_a0 < *(int *)(local_b0 + 1)) {
                        uVar29 = (int)local_a0 + 1;
                        uVar35 = local_a0._4_4_;
                      }
                      else {
                        uVar35 = local_a0._4_4_ + 1;
                        uVar29 = *(uint *)(local_b8 + 1);
                        local_a0 = (undefined **)((ulong)uVar35 << 0x20);
                      }
                      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,uVar29);
                    } while ((uVar43 != uVar29) || (uVar12 != uVar35));
                  }
                  plVar25 = (long *)PTR_DAT_04bb27a8;
                }
              }
            }
          }
        }
      }
    }
  }
  lVar30 = *plVar48;
  if (((lVar30 == 0) || (*(long *)(lVar30 + 0x28) == 0)) || (*(int *)(lVar30 + 0x80) != 1)) {
    FUN_01525810(*(undefined8 *)PTR_DAT_04bb4c80);
    sVar7 = *puVar50;
    if (sVar7 != -1) {
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,0x15);
      puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar7 * 8);
      if (0xff < (uint)(int)sVar7) {
        puVar23 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar23 >> 0x15 & 1) != 0) {
        local_b8 = &PTR_LAB_04993240;
        local_b0 = (undefined **)PTR_LAB_04bbc550;
        FUN_0154d6c0(&local_b8);
      }
    }
  }
  iVar11 = *(int *)(puVar44 + 7);
  if (iVar11 == 0x6622bd46) {
    local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    local_b0 = (undefined **)0x40e51f6;
    iVar15 = FUN_02743000(&local_b8);
    puVar19 = PTR_DAT_04bbc1a0;
    puVar4 = PTR_DAT_04bb2010;
    iVar11 = DAT_0540762c;
    if (iVar15 == 0) {
      iVar11 = -1;
    }
    if (-1 < iVar11) {
      local_d0 = (undefined **)0x0;
      local_e0 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      local_d8 = PTR_DAT_04bb2010 + 0x10;
      local_c0 = (char *)0x0;
      lVar30 = *(long *)PTR_DAT_04bb39b0;
      local_c8 = local_d8;
      if (lVar30 == 0) {
        bVar34 = *PTR_DAT_04bb32e0;
joined_r0x013589d8:
        if (7 < bVar34) {
LAB_013589dc:
          if ((long *)*plVar48 != (long *)0x0) {
            lVar30 = *(long *)*plVar48;
            bVar34 = *(byte *)(lVar30 + 0x473);
            pbVar33 = PTR_DAT_04bb5038;
            if ((long)(char)bVar34 != 0xffffffffffffffff) {
              puVar23 = (uint *)(lVar30 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
              if (7 < bVar34) {
                puVar23 = (uint *)(lVar30 + 0x48);
              }
              if ((*puVar23 & 8) != 0) {
                pbVar33 = (byte *)(lVar30 + 0x471);
              }
            }
            bVar34 = *pbVar33;
            if (bVar34 < 8) goto LAB_01358a40;
          }
          bVar34 = *PTR_DAT_04bb5038;
          if (7 < bVar34) goto LAB_01358c70;
        }
      }
      else {
        pbVar33 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar30 + 0x15c) != 0) {
          pbVar33 = (byte *)(lVar30 + 0x158);
        }
        bVar34 = *pbVar33;
        if (7 < bVar34) {
          if ((*(int *)(lVar30 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            bVar34 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto joined_r0x013589d8;
          }
          goto LAB_013589dc;
        }
      }
LAB_01358a40:
      local_158 = (undefined **)CONCAT71(local_158._1_7_,bVar34);
      iVar15 = FUN_02582fe0(&local_158);
      if (iVar15 != -1) {
        local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
        uVar39 = FUN_02b5e950(&local_b8,iVar15);
        if ((uVar39 & 1) != 0) {
          FUN_02b62010(&local_e0,(ulong)local_b8 & 0xffffffff);
          ppuVar46 = (undefined **)(puVar19 + 0x10);
          pcVar32 = puVar4 + 0x10;
          local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
          ppuVar2 = (undefined **)(PTR_DAT_04bbbce0 + 0x10);
          local_a0 = local_d0;
          local_f8 = 0;
          local_90 = local_c0;
          local_e8 = 0;
          local_108 = ppuVar46;
          local_100 = pcVar32;
          local_f0 = pcVar32;
          local_b0 = ppuVar46;
          local_a8 = pcVar32;
          local_98 = pcVar32;
          local_88[0] = ppuVar2;
          uVar39 = FUN_02b62250(&local_108,iVar11);
          if ((uVar39 & 1) != 0) {
            local_148 = (uint)pcVar32;
            cStack_144 = (char)((ulong)pcVar32 >> 0x20);
            cStack_143 = (char)((ulong)pcVar32 >> 0x28);
            cStack_142 = (char)((ulong)pcVar32 >> 0x30);
            uStack_141 = (undefined1)((ulong)pcVar32 >> 0x38);
            local_158 = (undefined **)((ulong)local_158 & 0xffffffff00000000);
            local_188 = (undefined **)((ulong)local_188 & 0xffffffff00000000);
            local_140._0_2_ = (undefined2)local_f8;
            local_140._2_1_ = (undefined1)((ulong)local_f8 >> 0x10);
            local_140._3_1_ = (undefined1)((ulong)local_f8 >> 0x18);
            local_140._4_4_ = local_f8._4_4_;
            local_130 = (undefined4)local_e8;
            local_12c = local_e8._4_4_;
            lVar30 = *(long *)(*plVar25 + 0x1f8);
            local_150 = ppuVar46;
            local_138 = pcVar32;
            local_128[0] = ppuVar2;
            if (lVar30 != 0) {
              iVar11 = *(int *)(lVar30 + 0x198);
              iVar15 = *(int *)(lVar30 + 400);
              if (iVar11 < iVar15) {
                *(int *)(lVar30 + 0x198) = iVar11 + 1;
                iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
                iVar13 = 0;
                if (iVar15 <= iVar11) {
                  iVar13 = iVar15;
                }
                puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar13) * 0x50)
                ;
                *puVar27 = 0;
                *(undefined **)(puVar27 + 2) = puVar19 + 0x10;
                puVar27[6] = (int)local_a0;
                puVar27[7] = local_a0._4_4_;
                *(undefined **)(puVar27 + 4) = puVar4 + 0x10;
                puVar27[10] = (undefined4)local_90;
                *(undefined **)(puVar27 + 0xc) = PTR_DAT_04bbbce0 + 0x10;
                puVar27[0xb] = local_90._4_4_;
                *(undefined **)(puVar27 + 8) = puVar4 + 0x10;
                (*(code *)local_88[0][2])(local_88);
                iVar11 = *(int *)(lVar30 + 0x198);
                iVar15 = *(int *)(lVar30 + 400);
              }
              if (iVar11 < iVar15) {
                *(int *)(lVar30 + 0x198) = iVar11 + 1;
                iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
                iVar13 = 0;
                if (iVar15 <= iVar11) {
                  iVar13 = iVar15;
                }
                puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar13) * 0x50)
                ;
                *puVar27 = (uint)local_158;
                *(undefined **)(puVar27 + 2) = puVar19 + 0x10;
                puVar27[6] = CONCAT13(local_140._3_1_,
                                      CONCAT12(local_140._2_1_,(undefined2)local_140));
                puVar27[7] = local_140._4_4_;
                *(undefined **)(puVar27 + 4) = puVar4 + 0x10;
                puVar27[10] = local_130;
                *(undefined **)(puVar27 + 0xc) = PTR_DAT_04bbbce0 + 0x10;
                puVar27[0xb] = local_12c;
                *(undefined **)(puVar27 + 8) = puVar4 + 0x10;
                (*(code *)local_128[0][2])(local_128);
              }
            }
          }
          plVar48 = (long *)PTR_DAT_04bb27d0;
          puVar50 = (ushort *)PTR_DAT_04bb6298;
        }
      }
    }
LAB_01358c70:
    puVar19 = PTR_DAT_04bbc1a0;
    puVar4 = PTR_DAT_04bb2010;
    iVar11 = *(int *)(puVar44 + 7);
    if (iVar11 != 0x6622bd46) goto LAB_01358eb0;
    pcVar8 = local_138;
    pcVar32 = local_90;
    if ((*(byte *)(*(long *)PTR_DAT_04bb3968 + 0xd60) >> 1 & 1) != 0) {
      local_148 = 0;
      cStack_144 = '\0';
      cStack_143 = '\0';
      cStack_142 = '\0';
      uStack_141 = 0;
      local_158 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      local_150 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      local_140._0_2_ = SUB82(local_150,0);
      local_140._2_1_ = (undefined1)((ulong)local_150 >> 0x10);
      local_140._3_1_ = (undefined1)((ulong)local_150 >> 0x18);
      local_140._4_4_ = (undefined4)((ulong)local_150 >> 0x20);
      local_138 = (char *)0x0;
      lVar30 = *(long *)PTR_DAT_04bb39b0;
      if (lVar30 == 0) {
        bVar34 = *PTR_DAT_04bb32e0;
LAB_01358d18:
        if (bVar34 < 8) goto LAB_01358d84;
LAB_01358d20:
        if ((long *)*plVar48 != (long *)0x0) {
          lVar30 = *(long *)*plVar48;
          bVar34 = *(byte *)(lVar30 + 0x473);
          pbVar33 = PTR_DAT_04bb5038;
          if ((long)(char)bVar34 != 0xffffffffffffffff) {
            puVar23 = (uint *)(lVar30 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
            if (7 < bVar34) {
              puVar23 = (uint *)(lVar30 + 0x48);
            }
            if ((*puVar23 & 8) != 0) {
              pbVar33 = (byte *)(lVar30 + 0x471);
            }
          }
          bVar34 = *pbVar33;
          if (bVar34 < 8) goto LAB_01358d84;
        }
        bVar34 = *PTR_DAT_04bb5038;
        if (bVar34 < 8) goto LAB_01358d84;
      }
      else {
        pbVar33 = PTR_DAT_04bb32e0;
        if (*(int *)(lVar30 + 0x15c) != 0) {
          pbVar33 = (byte *)(lVar30 + 0x158);
        }
        bVar34 = *pbVar33;
        if (7 < bVar34) {
          if ((*(int *)(lVar30 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
            bVar34 = *(byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
            goto LAB_01358d18;
          }
          goto LAB_01358d20;
        }
LAB_01358d84:
        local_e0 = (undefined **)CONCAT71(local_e0._1_7_,bVar34);
        iVar11 = FUN_02582fe0(&local_e0);
        if (iVar11 != -1) {
          local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
          uVar39 = FUN_02b5e950(&local_b8,iVar11);
          if ((uVar39 & 1) != 0) {
            FUN_02b62010(&local_158,(ulong)local_b8 & 0xffffffff);
            puVar20 = PTR_DAT_04bbbce0;
            local_b0 = (undefined **)(puVar19 + 0x10);
            local_a8 = puVar4 + 0x10;
            local_88[0] = (undefined **)(PTR_DAT_04bbbce0 + 0x10);
            local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
            local_e0 = (undefined **)((ulong)local_e0 & 0xffffffff00000000);
            uVar16 = CONCAT13(uStack_141,CONCAT12(cStack_142,CONCAT11(cStack_143,cStack_144)));
            local_a0 = (undefined **)CONCAT44(uVar16,local_148);
            local_90 = local_138;
            lVar30 = *(long *)(*plVar25 + 0x1f8);
            local_98 = local_a8;
            if (lVar30 != 0) {
              iVar11 = *(int *)(lVar30 + 0x198);
              iVar15 = *(int *)(lVar30 + 400);
              if (iVar11 < iVar15) {
                puVar3 = PTR_DAT_04bbbce0 + 0x10;
                *(int *)(lVar30 + 0x198) = iVar11 + 1;
                iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
                iVar13 = 0;
                if (iVar15 <= iVar11) {
                  iVar13 = iVar15;
                }
                puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar13) * 0x50)
                ;
                *puVar27 = 0;
                *(undefined **)(puVar27 + 2) = puVar19 + 0x10;
                puVar27[6] = local_148;
                puVar27[7] = uVar16;
                puVar4 = puVar4 + 0x10;
                *(undefined **)(puVar27 + 4) = puVar4;
                puVar27[10] = (int)local_138;
                *(undefined **)(puVar27 + 0xc) = puVar3;
                *(undefined **)(puVar27 + 8) = puVar4;
                puVar27[0xb] = local_138._4_4_;
                (**(code **)(puVar20 + 0x20))(local_88);
              }
            }
          }
        }
      }
      iVar11 = *(int *)(puVar44 + 7);
      goto LAB_01358eb0;
    }
  }
  else {
LAB_01358eb0:
    puVar19 = PTR_DAT_04bbc1a0;
    puVar4 = PTR_DAT_04bb2010;
    pcVar8 = local_138;
    pcVar32 = local_90;
    if (((iVar11 == 0x77130016) && (piVar24 = *(int **)PTR_DAT_04bb59b8, *piVar24 != 0)) &&
       (piVar24[0x133] != 0)) {
      local_138 = (char *)0x0;
      local_158 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
      local_150 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
      local_148 = 0;
      cStack_144 = '\0';
      cStack_143 = '\0';
      cStack_142 = '\0';
      uStack_141 = 0;
      local_140._0_2_ = SUB82(local_150,0);
      local_140._2_1_ = (undefined1)((ulong)local_150 >> 0x10);
      local_140._3_1_ = (undefined1)((ulong)local_150 >> 0x18);
      local_140._4_4_ = (undefined4)((ulong)local_150 >> 0x20);
      uVar39 = FUN_02a8ec10(piVar24 + 0x130);
      if ((uVar39 & 1) == 0) {
        if (((piVar24[0x133] == 0) || (piVar24[0x133] != 0x1a)) ||
           ((*(byte *)(piVar24 + 0x132) & 1) != 0)) {
          pcVar8 = local_138;
          pcVar32 = local_90;
          if (((piVar24[0x133] == 0) || (piVar24[0x133] != 0x1b)) ||
             ((*(byte *)(piVar24 + 0x132) & 1) != 0)) goto LAB_01359084;
          uVar39 = FUN_02b62940(&local_158,piVar24 + 0x134);
          pcVar8 = local_138;
          pcVar32 = local_90;
        }
        else {
          uVar39 = FUN_02b62710(&local_158,piVar24 + 0x134);
          pcVar8 = local_138;
          pcVar32 = local_90;
        }
      }
      else {
        local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
        uVar26 = FUN_02b677c0(&local_b8,piVar24[0x133]);
        uVar39 = (ulong)local_b8 & 0xffffffff;
        if ((uVar26 & 1) == 0) {
          uVar39 = 0;
        }
        uVar39 = FUN_02b62490(&local_158,uVar39);
        pcVar8 = local_138;
        pcVar32 = local_90;
      }
      local_90 = pcVar8;
      pcVar8 = local_90;
      if ((uVar39 & 1) != 0) {
        uVar39 = (ulong)local_b8 >> 0x20;
        local_b8 = (undefined **)(uVar39 << 0x20);
        lVar30 = *(long *)(*plVar25 + 0x1f8);
        if (lVar30 != 0) {
          uVar16 = CONCAT13(uStack_141,CONCAT12(cStack_142,CONCAT11(cStack_143,cStack_144)));
          local_b0 = (undefined **)(puVar19 + 0x10);
          local_138._4_4_ = (undefined4)((ulong)local_90 >> 0x20);
          local_b8 = (undefined **)(uVar39 << 0x20);
          local_a0 = (undefined **)CONCAT44(uVar16,local_148);
          iVar11 = *(int *)(lVar30 + 0x198);
          local_a8 = puVar4 + 0x10;
          local_88[0] = &PTR_LAB_049931f0;
          iVar15 = *(int *)(lVar30 + 400);
          local_98 = local_a8;
          pcVar32 = local_90;
          if (iVar11 < iVar15) {
            *(int *)(lVar30 + 0x198) = iVar11 + 1;
            iVar11 = *(int *)(lVar30 + 0x194) + iVar11;
            iVar13 = 0;
            if (iVar15 <= iVar11) {
              iVar13 = iVar15;
            }
            puVar27 = (undefined4 *)(*(long *)(lVar30 + 0x188) + (long)(iVar11 - iVar13) * 0x50);
            *puVar27 = 0;
            *(undefined ***)(puVar27 + 2) = local_b0;
            puVar27[6] = local_148;
            *(char **)(puVar27 + 4) = local_a8;
            puVar27[7] = uVar16;
            puVar27[10] = (int)local_90;
            *(undefined **)(puVar27 + 0xc) = PTR_DAT_04bbbce0 + 0x10;
            puVar27[0xb] = local_138._4_4_;
            *(char **)(puVar27 + 8) = local_a8;
            local_138 = local_90;
            (*(code *)PTR_FUN_04993200)(local_88);
            pcVar8 = local_138;
            pcVar32 = local_90;
          }
        }
      }
    }
  }
LAB_01359084:
  local_90 = pcVar32;
  local_138 = pcVar8;
  local_b8 = (undefined **)((ulong)local_b8 & 0xffffffff00000000);
  lVar30 = *(long *)(*plVar25 + 0x1f8);
  if (lVar30 != 0) {
    FUN_01259470(lVar30);
    if (*(long *)(lVar30 + 0xb0) != 0) {
      FUN_01381fa0(*(long *)(lVar30 + 0xb0),1);
    }
  }
  uVar6 = *puVar50;
  if (uVar6 == 0xffff) {
LAB_01359120:
    uVar39 = FUN_01367060();
    if ((uVar39 & 1) != 0) {
      local_158 = (undefined **)CONCAT44(local_158._4_4_,1);
      local_b8 = (undefined **)CONCAT44(local_b8._4_4_,1);
      if ((*(long *)(*plVar25 + 0x38) != 0) &&
         (lVar30 = *(long *)(*(long *)(*plVar25 + 0x38) + 0xb0), lVar30 != 0)) {
        FUN_01381fa0(lVar30,1);
      }
    }
  }
  else {
    local_b8 = (undefined **)CONCAT44(local_b8._4_4_,3);
    puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
    if (0xff < (uint)(int)(short)uVar6) {
      puVar23 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar23 >> 3 & 1) == 0) goto LAB_01359120;
  }
  puVar4 = PTR_DAT_04bc39f8;
  uVar6 = *puVar50;
  if (uVar6 == 0xffff) goto LAB_01359614;
  local_b8 = (undefined **)CONCAT44(local_b8._4_4_,0x11);
  puVar23 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)uVar6 * 8);
  if (0xff < (uint)(int)(short)uVar6) {
    puVar23 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar23 >> 0x11 & 1) == 0) goto LAB_01359614;
  local_b8 = (undefined **)CONCAT44(local_b8._4_4_,0x1f);
  if ((int)*puVar23 < 0) {
    FUN_012071b0();
  }
  else {
    FUN_012027c0();
  }
  if (*(int *)(PTR_DAT_04bc3a78 + 0x38) == -0xbb9f562) {
    if (*(int *)(puVar44 + 7) == -0xbb9f562) {
      return;
    }
  }
  else if ((*(int *)(PTR_DAT_04bc3a78 + 0x38) == 0x565b4aba) &&
          (*(int *)(puVar44 + 7) == 0x565b4aba)) {
    return;
  }
  lVar30 = *(long *)PTR_DAT_04bb39b0;
  pbVar33 = PTR_DAT_04bb32e0;
  if (lVar30 == 0) {
LAB_01359294:
    if (*pbVar33 < 8) goto LAB_01359304;
LAB_013592a0:
    if ((long *)*plVar48 == (long *)0x0) {
LAB_013592fc:
      pbVar33 = PTR_DAT_04bb5038;
      goto LAB_01359304;
    }
    lVar30 = *(long *)*plVar48;
    bVar34 = *(byte *)(lVar30 + 0x473);
    pbVar33 = PTR_DAT_04bb5038;
    if ((long)(char)bVar34 != 0xffffffffffffffff) {
      puVar23 = (uint *)(lVar30 + 0x48) + ((long)(char)bVar34 & 0xffffffffU) * 0x20;
      if (7 < bVar34) {
        puVar23 = (uint *)(lVar30 + 0x48);
      }
      if ((*puVar23 & 8) != 0) {
        pbVar33 = (byte *)(lVar30 + 0x471);
      }
    }
    bVar34 = *pbVar33;
    bVar9 = 7 < bVar34;
    if (bVar9) {
      bVar34 = 0xff;
    }
    local_108 = (undefined **)CONCAT71(local_108._1_7_,bVar34);
    if (bVar9) goto LAB_013592fc;
  }
  else {
    if (*(int *)(lVar30 + 0x15c) != 0) {
      pbVar33 = (byte *)(lVar30 + 0x158);
    }
    if (7 < *pbVar33) {
      if ((*(int *)(lVar30 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01359294;
      }
      goto LAB_013592a0;
    }
LAB_01359304:
    bVar34 = *pbVar33;
    if (7 < bVar34) {
      bVar34 = 0xff;
    }
    local_108 = (undefined **)CONCAT71(local_108._1_7_,bVar34);
  }
  uVar43 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 8);
  uVar12 = uVar43 - DAT_0534f428;
  if ((((uVar12 < DAT_0534f408) &&
       (puVar23 = *(uint **)(DAT_0534f410 + (long)(int)uVar12 * 8), puVar23 != (uint *)0x0)) &&
      (uVar12 = *puVar23, uVar12 != 0)) && (puVar23 != (uint *)(ulong)uVar12)) {
    puVar41 = (uint *)((long)puVar23 - (long)(ulong)uVar12);
    if (((*puVar41 != 0) && (uVar12 = puVar41[1], uVar12 != 0)) && ((ulong)(ushort)puVar41[2] != 0))
    {
      lVar30 = 0xc;
      if (*(char *)((long)puVar41 + 10) != '\0') {
        lVar30 = 0x1c;
      }
      lVar30 = (long)puVar41 + lVar30 + (ulong)(ushort)puVar41[2] * 8;
      if (lVar30 != 0) {
        uVar29 = 0;
        if ((ulong)uVar12 != 0) {
          uVar29 = (uint)((ulong)((long)puVar23 - lVar30) / (ulong)uVar12);
        }
        if (*puVar41 <= uVar29) {
          uVar29 = 0xffffffff;
        }
        if ((uVar29 < *(uint *)PTR_DAT_04bc0e98) &&
           (*(short *)(*(long *)(PTR_DAT_04bc0e98 + 8) + (long)(int)uVar29 * 2) == 1)) {
          local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
          local_b0 = (undefined **)0x40a0ada;
          uVar47 = *(undefined8 *)PTR_DAT_04bb49a0;
          uVar16 = FUN_006bd550("PE_MaydayIsland_Landing",0);
          local_158 = (undefined **)CONCAT44(local_158._4_4_,uVar16);
          uVar47 = FUN_01b5b4b0(uVar47,&local_158);
          FUN_01b5c860(&local_b8,uVar47,&local_108,0,0);
          goto LAB_01359614;
        }
      }
    }
  }
  uVar6 = *puVar50;
  if ((long)(short)uVar6 == 0xffffffffffffffff) {
LAB_01359598:
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    local_b0 = (undefined **)0x40c4c5f;
    local_e0 = (undefined **)CONCAT44(local_e0._4_4_,7);
    uVar47 = *(undefined8 *)PTR_DAT_04bb49a0;
    local_b8 = (undefined **)puVar4;
    uVar16 = FUN_006bd550("PE_Goto_MysteryTour",0);
    local_158 = (undefined **)CONCAT44(local_158._4_4_,uVar16);
    uVar47 = FUN_01b5b4b0(uVar47,&local_158);
    FUN_01b623a0(&local_b8,uVar43,&local_e0,uVar47,&local_108,0);
    local_b0 = (undefined **)0x4071c60;
    local_b8 = (undefined **)puVar4;
  }
  else {
    piVar24 = (int *)(puVar4 + ((long)(short)uVar6 & 0xffffffffU) * 8);
    if (0xff < uVar6) {
      piVar24 = (int *)puVar4;
    }
    if (-1 < *piVar24) goto LAB_01359598;
    uVar43 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb4928 + 10);
    uVar12 = uVar43 - DAT_0534e320;
    if ((((uVar12 < DAT_0534e300) &&
         (puVar23 = *(uint **)(DAT_0534e308 + (long)(int)uVar12 * 8), puVar23 != (uint *)0x0)) &&
        (uVar12 = *puVar23, uVar12 != 0)) && (puVar23 != (uint *)(ulong)uVar12)) {
      puVar41 = (uint *)((long)puVar23 - (long)(ulong)uVar12);
      if (((*puVar41 != 0) && (uVar12 = puVar41[1], uVar12 != 0)) &&
         ((ulong)(ushort)puVar41[2] != 0)) {
        lVar30 = 0xc;
        if (*(char *)((long)puVar41 + 10) != '\0') {
          lVar30 = 0x1c;
        }
        lVar30 = (long)puVar41 + lVar30 + (ulong)(ushort)puVar41[2] * 8;
        if (lVar30 != 0) {
          uVar29 = 0;
          if ((ulong)uVar12 != 0) {
            uVar29 = (uint)((ulong)((long)puVar23 - lVar30) / (ulong)uVar12);
          }
          if (*puVar41 <= uVar29) {
            uVar29 = 0xffffffff;
          }
          if ((uVar29 < *(uint *)PTR_DAT_04bc0e50) &&
             (*(short *)(*(long *)(PTR_DAT_04bc0e50 + 8) + (long)(int)uVar29 * 2) == 1)) {
            local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
            local_b0 = (undefined **)0x40d48c9;
            local_e0 = (undefined **)CONCAT44(local_e0._4_4_,0xf);
            uVar47 = *(undefined8 *)PTR_DAT_04bb49a0;
            uVar16 = FUN_006bd550("PE_Goto_KappeiTour_Rare",0);
            local_158 = (undefined **)CONCAT44(local_158._4_4_,uVar16);
            uVar47 = FUN_01b5b4b0(uVar47,&local_158);
            FUN_01b623a0(&local_b8,uVar43,&local_e0,uVar47,&local_108,0);
          }
        }
      }
    }
    local_b0 = (undefined **)0x40d48e1;
    local_b8 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  }
  FUN_01b5c520(&local_b8,1,&local_108);
LAB_01359614:
  iVar11 = *(int *)(puVar44 + 7);
  if (iVar11 < -0x169521c) {
    if (iVar11 < -0x15fdefdb) {
      if (((iVar11 != -0x477aafe0) && (iVar11 != -0x21a6781c)) && (iVar11 != -0x2099c902)) {
        return;
      }
    }
    else if (((iVar11 != -0x15fdefdb) && (iVar11 != -0xe632453)) && (iVar11 != -0x83ceb3d)) {
      return;
    }
  }
  else if (iVar11 < 0x3fce6459) {
    if (((iVar11 != -0x169521c) && (iVar11 != 0x17f77b87)) && (iVar11 != 0x3b3bf38a)) {
      return;
    }
  }
  else if (iVar11 < 0x6148bcad) {
    if ((iVar11 != 0x3fce6459) && (iVar11 != 0x593d97a5)) {
      return;
    }
  }
  else if ((iVar11 != 0x66eec322) && (iVar11 != 0x6148bcad)) {
    return;
  }
  uVar39 = FUN_01c2a1f4();
  if ((uVar39 & 1) != 0) {
    FUN_01c2d400(*(undefined8 *)PTR_DAT_04bb4828);
  }
  return;
}

