
void FUN_01543d80(long *param_1,byte param_2)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  undefined *puVar6;
  long *plVar7;
  bool bVar8;
  uint uVar9;
  int iVar10;
  byte bVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  int iVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  long *plVar25;
  short *psVar26;
  long *plVar27;
  undefined **ppuVar28;
  long lVar29;
  uint *puVar30;
  undefined *puVar31;
  byte *pbVar32;
  byte *pbVar33;
  ushort uVar34;
  int iVar35;
  uint uVar36;
  ulong uVar37;
  bool bVar38;
  int iVar39;
  uint uVar40;
  undefined8 *puVar41;
  long lVar42;
  long *plVar43;
  byte *pbVar44;
  int iVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float local_214;
  float local_210;
  int *local_1f0;
  uint local_1a4;
  long *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined8 local_178;
  long *local_170;
  int local_168;
  int iStack_164;
  uint local_160;
  undefined1 local_15c;
  byte local_15b;
  undefined1 local_15a;
  undefined *local_158;
  undefined *puStack_150;
  undefined8 local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined *puStack_128;
  undefined8 local_120;
  undefined *local_118;
  undefined8 local_110;
  undefined4 local_108;
  undefined4 local_104;
  undefined *local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined *local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  uint *local_c8;
  undefined *puStack_c0;
  undefined4 local_b8;
  undefined4 local_b4;
  byte local_b0;
  
  local_b8 = 0;
  lVar29 = *(long *)PTR_DAT_04bb2720;
  if (lVar29 == 0) {
    puVar41 = &DAT_055c04a0;
  }
  else {
    puVar41 = &DAT_055c04a0;
    if (*(long *)(lVar29 + 0x330) != 0) {
      puVar41 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar29 + 0x338));
      iVar17 = FUN_006bd550(*puVar41,0);
      puVar41 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar17 != 0x758f7eaf) {
        puVar41 = &DAT_055c04a0;
      }
    }
  }
  local_b4 = *(undefined4 *)(puVar41 + 7);
  local_b0 = FUN_017baf44();
  puVar2 = PTR_DAT_04bb43c0;
  local_b0 = local_b0 & 1;
  puStack_c0 = PTR_DAT_04bb3140 + 0x10;
  local_d8 = PTR_DAT_04bc0510 + 0x10;
  local_c8 = (uint *)0x0;
  local_d0 = (undefined4)*param_1;
  uStack_cc = *(undefined4 *)((long)param_1 + 4);
  lVar29 = *(long *)PTR_DAT_04bb43c0;
  uVar18 = FUN_0277d6c4(&local_d0);
  if (*(long *)puVar2 == 0) {
LAB_01543f08:
    iVar17 = *(int *)((long)param_1 + 0x14);
    if (local_c8 != (uint *)0x0) goto LAB_01543f20;
    uVar34 = 0;
    bVar38 = true;
  }
  else {
    lVar29 = *(long *)(lVar29 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if ((*(uint *)(lVar29 + 0x1d8) <= uVar18) ||
       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar18 * 8) == 0)) goto LAB_01543f08;
    lVar29 = *(long *)PTR_DAT_04bc0428;
    uVar18 = FUN_0277d6c4(param_1);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
    if ((*(uint *)(lVar29 + 0x1d8) <= uVar18) ||
       (puVar30 = *(uint **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar18 * 8),
       puVar30 == (uint *)0x0)) goto LAB_01543f08;
    iVar17 = *(int *)((long)param_1 + 0x14);
    local_c8 = puVar30;
LAB_01543f20:
    uVar18 = *local_c8;
    uVar34 = 0;
    if ((uVar18 != 0) && (local_c8 != (uint *)(ulong)uVar18)) {
      puVar30 = (uint *)((long)local_c8 - (long)(ulong)uVar18);
      uVar34 = 0;
      if (*puVar30 != 0) {
        uVar18 = puVar30[1];
        if ((uVar18 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
          lVar29 = 0xc;
          if (*(char *)((long)puVar30 + 10) != '\0') {
            lVar29 = 0x1c;
          }
          lVar29 = (long)puVar30 + lVar29 + (ulong)(ushort)puVar30[2] * 8;
          if (lVar29 != 0) {
            uVar9 = 0;
            if ((ulong)uVar18 != 0) {
              uVar9 = (uint)((ulong)((long)local_c8 - lVar29) / (ulong)uVar18);
            }
            if (*puVar30 <= uVar9) {
              uVar9 = 0xffffffff;
            }
            if (uVar9 < *(uint *)PTR_DAT_04bc0048) {
              uVar34 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar9 * 2);
              if (0x51 < uVar34) {
                bVar38 = false;
                uVar34 = 0;
                goto LAB_01543fc8;
              }
              goto LAB_01543fc4;
            }
          }
        }
        uVar34 = 0;
      }
    }
LAB_01543fc4:
    bVar38 = false;
  }
LAB_01543fc8:
  local_1f0 = (int *)((long)param_1 + 0x14);
  iVar35 = 0x20000000;
  if (uVar34 != 0x4a) {
    iVar35 = -0x60000000;
  }
  uVar37 = (ulong)((float)(iVar17 + 0x10000000U >> 0x1d) * 45.0 * 11930465.0);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar37 >> 0x18 & 0xff) * 0x10);
  fVar49 = *pfVar1;
  fVar50 = pfVar1[1];
  fVar46 = (float)((uint)uVar37 & 0xffffff) * 5.9604645e-08;
  fVar47 = pfVar1[2];
  fVar48 = pfVar1[3];
  if (!bVar38) {
    uVar18 = *local_c8;
    local_190._0_4_ = 0;
    if ((uVar18 == 0) || (local_c8 == (uint *)(ulong)uVar18)) goto LAB_01544058;
    puVar30 = (uint *)((long)local_c8 - (long)(ulong)uVar18);
    local_190._0_4_ = 0;
    if (*puVar30 == 0) goto LAB_01544058;
    uVar18 = puVar30[1];
    if ((uVar18 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
      lVar29 = 0xc;
      if (*(char *)((long)puVar30 + 10) != '\0') {
        lVar29 = 0x1c;
      }
      lVar29 = (long)puVar30 + lVar29 + (ulong)(ushort)puVar30[2] * 8;
      if (lVar29 != 0) {
        uVar9 = 0;
        if ((ulong)uVar18 != 0) {
          uVar9 = (uint)((ulong)((long)local_c8 - lVar29) / (ulong)uVar18);
        }
        if (*puVar30 <= uVar9) {
          uVar9 = 0xffffffff;
        }
        if ((uVar9 < *(uint *)PTR_DAT_04bc0048) &&
           (local_190._0_4_ =
                 (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar9 * 2),
           (uint)local_190 < 0x52)) goto LAB_01544058;
      }
    }
  }
  local_190._0_4_ = 0;
LAB_01544058:
  local_f0 = 0;
  puVar2 = PTR_DAT_04bbc1a0 + 0x10;
  uVar9 = (uint)local_190 - 0x37;
  puVar3 = PTR_DAT_04bb2010 + 0x10;
  local_e0 = 0;
  uVar18 = 0;
  if (4 < uVar9) {
    uVar18 = (uint)(iVar35 + iVar17) >> 0x1e;
  }
  local_100 = puVar2;
  puStack_f8 = puVar3;
  local_e8 = puVar3;
  FUN_01afb7fc(&local_d8,&local_100,uVar18);
  uVar22 = *local_1f0 + 0x10000000U >> 0x1d;
  local_190 = (long *)CONCAT44(local_190._4_4_,uVar22);
  local_214 = 0.0;
  local_210 = 0.0;
  uVar22 = uVar22 - 1;
  if (uVar22 < 7) {
    local_214 = 0.0;
    local_210 = 0.0;
    if ((0x55U >> (ulong)(uVar22 & 0x1f) & 1) != 0) {
      uVar37 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2;
      local_210 = *(float *)(&DAT_04175b00 + uVar37) * (float)(((int)local_e0 - (int)local_f0) + 1)
                  * 5.0;
      local_214 = *(float *)(&DAT_04175b1c + uVar37) *
                  (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 5.0;
    }
  }
  fVar49 = (fVar49 + fVar46 * fVar50) * 7.071068;
  plVar4 = param_1 + 0x2f;
  fVar46 = (fVar47 + fVar46 * fVar48) * 7.071068;
  plVar5 = (long *)(PTR_DAT_04bc0510 + 0x10);
  puVar6 = PTR_DAT_04bb3290 + 0x10;
  pbVar44 = PTR_DAT_04bb32e0;
  bVar38 = true;
  do {
    if ((4 < uVar9) && (!bVar38)) {
      uVar18 = *local_1f0 + 0x60000000U >> 0x1e;
      FUN_01afb7fc(&local_d8,&local_100);
      uVar22 = *local_1f0 + 0x10000000U >> 0x1d;
      local_190 = (long *)CONCAT44((int)((ulong)local_190 >> 0x20),uVar22);
      uVar22 = uVar22 - 1;
      if ((uVar22 < 7) && ((0x55U >> (ulong)(uVar22 & 0x1f) & 1) != 0)) {
        uVar37 = -(ulong)(uVar22 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar22 << 2;
        local_210 = *(float *)(&DAT_04175b00 + uVar37) *
                    (float)(((int)local_e0 - (int)local_f0) + 1) * 5.0;
        local_214 = *(float *)(&DAT_04175b1c + uVar37) *
                    (float)((local_e0._4_4_ - local_f0._4_4_) + 1) * 5.0;
      }
    }
    iVar17 = 1;
    do {
      iVar35 = 0;
      local_1a4 = 0;
      do {
        plVar43 = param_1 + (long)iVar35 * 6 + 4;
        if (iVar17 == 0) {
          iVar19 = FUN_01aee3b4(&local_d8);
          local_190 = (long *)CONCAT44(local_190._4_4_,iVar19);
          if (iVar19 == 6) goto LAB_015442ec;
          iVar19 = FUN_01aee3b4(&local_d8);
          local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar19);
          if (iVar19 != 7) {
            if (((*(long *)PTR_DAT_04bb27c8 != 0) &&
                (lVar29 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar29 != 0)) &&
               (uVar37 = FUN_00971f80(lVar29,plVar43,0), (uVar37 & 1) != 0)) {
              local_190 = plVar43 + 1;
              local_188 = plVar43 + 3;
              lVar29 = plVar43[2];
              local_178 = plVar43[2];
              uVar22 = *(int *)((long)plVar43 + 0x24) + 1;
              local_180 = puVar3;
              if (uVar22 != *(uint *)((long)plVar43 + 0x14)) {
                do {
                  uVar37 = FUN_0097abd0(&local_180,1);
                  if ((uVar37 & 1) != 0) goto LAB_015442a0;
                  if ((int)local_178 < (int)local_188[1]) {
                    iVar19 = (int)local_178 + 1;
                    uVar36 = local_178._4_4_;
                  }
                  else {
                    uVar36 = local_178._4_4_ + 1;
                    iVar19 = (int)local_190[1];
                    local_178 = (ulong)uVar36 << 0x20;
                  }
                  local_178 = CONCAT44(local_178._4_4_,iVar19);
                } while ((int)lVar29 != iVar19 || uVar22 != uVar36);
              }
              goto LAB_015442ec;
            }
            goto LAB_015442a0;
          }
LAB_01544398:
          iVar19 = 0;
          bVar8 = false;
          bVar16 = true;
          do {
            bVar15 = bVar16;
            puVar31 = PTR_DAT_04bb43c0;
            uVar36 = ((int)plVar43[2] - (int)param_1[6]) * iVar19;
            uVar23 = (*(int *)((long)plVar43 + 0x14) - *(int *)((long)param_1 + 0x34)) * iVar19;
            uVar22 = -uVar36;
            if ((int)uVar36 < 0) {
              uVar40 = uVar36 + 1;
            }
            else {
              uVar40 = uVar36;
              uVar22 = uVar36;
            }
            if (1 < uVar22) {
              uVar36 = (int)uVar40 >> 1;
            }
            uVar22 = -uVar23;
            if ((int)uVar23 < 0) {
              uVar40 = uVar23 + 1;
            }
            else {
              uVar40 = uVar23;
              uVar22 = uVar23;
            }
            if (1 < uVar22) {
              uVar23 = (int)uVar40 >> 1;
            }
            bVar11 = param_2 & local_1a4 != 0;
            if ((char)param_1[(long)iVar35 * 6 + 9] == '\0') {
              bVar11 = 1;
            }
            if (bVar11 == 0) {
              lVar42 = *(long *)PTR_DAT_04bb43c0;
              fVar48 = ((float)*(int *)((long)plVar43 + 0x14) * 5.0 +
                       (float)*(int *)((long)plVar43 + 0x24) * 5.0 + 5.0) * 0.5;
              fVar47 = ((float)(int)plVar43[2] * 5.0 + (float)(int)plVar43[4] * 5.0 + 5.0) * 0.5;
              uVar22 = FUN_0277d6c4(param_1);
              lVar29 = *(long *)puVar31;
              if (lVar29 == 0) {
LAB_01544590:
                fVar47 = (local_210 - fVar49) + fVar49 * (float)iVar19 + fVar47;
                fVar48 = (local_214 - fVar46) + fVar46 * (float)iVar19 + fVar48;
              }
              else {
                lVar42 = *(long *)(lVar42 + 0x57e58);
                uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar42 + 0x1f8);
                if ((*(uint *)(lVar42 + 0x1d8) <= uVar22) ||
                   (*(long *)(*(long *)(lVar42 + 0x1e0) + (long)(int)uVar22 * 8) == 0))
                goto LAB_01544590;
                local_180 = (undefined *)0x0;
                local_190 = (long *)(PTR_DAT_04bc0510 + 0x10);
                local_188 = (long *)*param_1;
                uVar22 = FUN_0277d6c4(&local_188);
                if (*(long *)PTR_DAT_04bb43c0 != 0) {
                  lVar29 = *(long *)(lVar29 + 0x57e58);
                  uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                  if ((uVar22 < *(uint *)(lVar29 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
                    lVar29 = *(long *)PTR_DAT_04bc0428;
                    uVar22 = FUN_0277d6c4(param_1);
                    uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if (uVar22 < *(uint *)(lVar29 + 0x1d8)) {
                      puVar31 = *(undefined **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8);
                      if (puVar31 != (undefined *)0x0) {
                        local_180 = puVar31;
                      }
                    }
                  }
                }
                local_130 = (undefined *)CONCAT44(local_130._4_4_,0x1b);
                iVar20 = FUN_01aee3b4(&local_190);
                local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar20);
                if (iVar20 != (int)local_130) goto LAB_01544590;
              }
              puVar31 = PTR_DAT_04bb43c0;
              iVar20 = ((int)local_e0 - (int)local_f0) + 1;
              lVar29 = *(long *)PTR_DAT_04bb43c0;
              iVar45 = (local_e0._4_4_ - local_f0._4_4_) + 1;
              fVar47 = fVar47 - ((float)iVar20 * 0.5 * 5.0 + -2.5);
              fVar48 = fVar48 - ((float)iVar45 * 0.5 * 5.0 + -2.5);
              uVar22 = FUN_0277d6c4(param_1);
              lVar42 = *(long *)puVar31;
              if (lVar42 == 0) {
LAB_01544714:
                bVar16 = false;
              }
              else {
                lVar29 = *(long *)(lVar29 + 0x57e58);
                uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                if (*(uint *)(lVar29 + 0x1d8) <= uVar22) goto LAB_01544714;
                bVar16 = false;
                if (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8) != 0) {
                  local_180 = (undefined *)0x0;
                  local_190 = (long *)(PTR_DAT_04bc0510 + 0x10);
                  local_188 = (long *)*param_1;
                  uVar22 = FUN_0277d6c4(&local_188);
                  if (*(long *)PTR_DAT_04bb43c0 != 0) {
                    lVar29 = *(long *)(lVar42 + 0x57e58);
                    uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if ((uVar22 < *(uint *)(lVar29 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
                      lVar29 = *(long *)PTR_DAT_04bc0428;
                      uVar22 = FUN_0277d6c4(param_1);
                      uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if (uVar22 < *(uint *)(lVar29 + 0x1d8)) {
                        puVar31 = *(undefined **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8)
                        ;
                        if (puVar31 != (undefined *)0x0) {
                          local_180 = puVar31;
                        }
                      }
                    }
                  }
                  local_130 = (undefined *)CONCAT44(local_130._4_4_,0x1b);
                  iVar21 = FUN_01aee3b4(&local_190);
                  local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar21);
                  bVar16 = iVar21 == (int)local_130;
                }
              }
              pbVar44 = PTR_DAT_04bb32e0;
              uVar40 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
              iVar20 = iVar20 + uVar40 + -1;
              uVar22 = uVar40;
              if (local_1a4 < 5) {
                uVar22 = uVar40 + uVar36;
              }
              iVar21 = iVar20;
              if (local_1a4 < 5) {
                iVar21 = iVar20 + uVar36;
              }
              uVar12 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
              iVar45 = iVar45 + uVar12 + -1;
              uVar36 = uVar12;
              if (local_1a4 < 5) {
                uVar36 = uVar12 + uVar23;
              }
              iVar24 = iVar45;
              if (local_1a4 < 5) {
                iVar24 = iVar45 + uVar23;
              }
              if (!bVar16) {
                iVar20 = iVar21;
                uVar12 = uVar36;
                iVar45 = iVar24;
                uVar40 = uVar22;
              }
              if (iVar45 + 1U != uVar12) {
                uVar22 = uVar12;
                uVar36 = uVar40;
                do {
                  if (((uVar22 < 0x100) && (uVar36 < 0x120)) &&
                     ((*(uint *)(PTR_DAT_04bbcc10 + (ulong)(uVar36 + uVar22 * 0x120 >> 5) * 4 + 8)
                       >> (ulong)(uVar36 & 0x1f) & 1) != 0)) goto LAB_015443d8;
                  if ((int)uVar36 < iVar20) {
                    uVar36 = uVar36 + 1;
                  }
                  else {
                    uVar22 = uVar22 + 1;
                    uVar36 = uVar40;
                  }
                } while ((uVar40 != uVar36) || (iVar45 + 1U != uVar22));
              }
              local_15a = 0;
              local_180 = (undefined *)CONCAT44(uVar12,uVar40);
              local_15c = 1;
              local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
              local_190 = (long *)*param_1;
              local_178 = CONCAT44(iVar17,uVar18);
              local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                          (uint)(*(float *)(param_1 + 1) < 0.0);
              iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                           (uint)(*(float *)(param_1 + 2) < 0.0);
              local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
              lVar29 = *(long *)PTR_DAT_04bb39b0;
              pbVar33 = PTR_DAT_04bb32e0;
              if (lVar29 == 0) {
                if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01544914;
LAB_01544990:
                local_15b = *pbVar33;
                if (7 < local_15b) {
                  local_15b = 0xff;
                }
              }
              else {
                if (*(int *)(lVar29 + 0x15c) != 0) {
                  pbVar33 = (byte *)(lVar29 + 0x158);
                }
                if ((*pbVar33 < 8) ||
                   (((*(int *)(lVar29 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                    (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar33 < 8))))
                goto LAB_01544990;
LAB_01544914:
                pbVar33 = PTR_DAT_04bb5038;
                if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01544990;
                lVar29 = **(long **)PTR_DAT_04bb27d0;
                bVar11 = *(byte *)(lVar29 + 0x473);
                pbVar32 = PTR_DAT_04bb5038;
                if ((long)(char)bVar11 != 0xffffffffffffffff) {
                  puVar30 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar11 & 0xffffffffU) * 0x20;
                  if (7 < bVar11) {
                    puVar30 = (uint *)(lVar29 + 0x48);
                  }
                  if ((*puVar30 & 8) != 0) {
                    pbVar32 = (byte *)(lVar29 + 0x471);
                  }
                }
                local_15b = *pbVar32;
                if (7 < local_15b) goto LAB_01544990;
              }
              if (7 < local_15b) {
                local_15b = 0xff;
              }
              local_170 = local_188;
              iVar21 = FUN_0148e51c(plVar4,&local_190);
              if (iVar21 == 9) {
                if ((iVar17 == 0) &&
                   ((iVar21 = FUN_01aee3b4(&local_d8), iVar21 == 6 ||
                    (iVar21 = FUN_01aee3b4(&local_d8), iVar21 == 7)))) {
                  iVar24 = *(int *)((long)plVar43 + 0x14);
                  iVar21 = *(int *)((long)plVar43 + 0x24) + 1;
                  if (iVar21 != iVar24) {
                    iVar13 = (int)((float)(int)(*(float *)(param_1 + 1) + -2.5) / 5.0) -
                             (uint)(*(float *)(param_1 + 1) + -2.5 < 0.0);
                    iVar14 = (int)((float)(int)(*(float *)(param_1 + 2) + -2.5) / 5.0) -
                             (uint)(*(float *)(param_1 + 2) + -2.5 < 0.0);
                    iVar10 = (int)plVar43[2];
                    fVar47 = 0.0;
                    fVar48 = 0.0;
                    iVar39 = iVar10;
                    do {
                      fVar50 = ((float)iVar39 * 5.0 + 2.5) -
                               ((float)iVar13 * 5.0 + (float)(iVar13 + 1) * 5.0 + 5.0) * 0.5;
                      fVar51 = ((float)iVar24 * 5.0 + 2.5) -
                               ((float)iVar14 * 5.0 + (float)(iVar14 + 1) * 5.0 + 5.0) * 0.5;
                      fVar51 = SQRT(fVar51 * fVar51 + fVar50 * fVar50);
                      fVar50 = fVar47;
                      if ((((iVar39 < (int)uVar40) || (iVar20 < iVar39)) || (iVar24 < (int)uVar12))
                         || (iVar45 < iVar24)) {
                        bVar16 = true;
                        if ((fVar48 <= fVar51) && (bVar16 = false, !NAN(fVar48))) {
                          bVar16 = fVar48 == 0.0;
                        }
                        if (!bVar16) {
                          fVar51 = fVar48;
                        }
                      }
                      else {
                        bVar16 = true;
                        if ((fVar47 <= fVar51) && (bVar16 = false, !NAN(fVar47))) {
                          bVar16 = fVar47 == 0.0;
                        }
                        fVar50 = fVar51;
                        fVar51 = fVar48;
                        if (!bVar16) {
                          fVar50 = fVar47;
                        }
                      }
                      fVar48 = fVar51;
                      fVar47 = fVar50;
                      if (iVar39 < (int)plVar43[4]) {
                        iVar39 = iVar39 + 1;
                      }
                      else {
                        iVar24 = iVar24 + 1;
                        iVar39 = iVar10;
                      }
                    } while ((iVar10 != iVar39) || (iVar21 != iVar24));
                    if (fVar48 < fVar47 && !bVar8) {
                      bVar8 = false;
                      goto LAB_015443d8;
                    }
                  }
                }
                if (iVar19 != 0 || iVar17 != 0) {
LAB_015458cc:
                  *(undefined4 *)(param_1 + 0x2e) = 9;
                  return;
                }
                local_130 = PTR_DAT_04bbc1a0 + 0x10;
                puStack_128 = PTR_DAT_04bb2010 + 0x10;
                iVar45 = (int)plVar43[2];
                iVar24 = *(int *)((long)plVar43 + 0x14);
                fVar47 = *(float *)(param_1 + 1) + -2.5;
                fVar48 = *(float *)(param_1 + 2) + -2.5;
                iVar21 = (int)plVar43[4];
                iVar10 = *(int *)((long)plVar43 + 0x24);
                iVar13 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
                iVar19 = iVar13 + 1;
                iVar14 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
                iVar20 = iVar14 + 1;
                local_120 = CONCAT44(iVar14,iVar13);
                local_110 = CONCAT44(iVar20,iVar19);
                if (((((iVar19 < iVar45 || iVar21 < iVar13) || iVar20 < iVar24) ||
                     iVar10 - iVar14 < 0) ==
                     (((iVar19 >= iVar45 && iVar21 >= iVar13) && iVar20 >= iVar24) &&
                     SBORROW4(iVar10,iVar14))) ||
                   (((iVar13 <= iVar45 && iVar21 <= iVar19) && iVar14 <= iVar24) && iVar10 == iVar20
                    || (((iVar13 <= iVar45 && iVar21 <= iVar19) && iVar14 <= iVar24) &&
                       iVar10 - iVar20 < 0) !=
                       (((iVar13 <= iVar45 && iVar21 <= iVar19) && iVar14 <= iVar24) &&
                       SBORROW4(iVar10,iVar20)))) {
                  uVar37 = (ulong)((float)(*local_1f0 + 0x10000000U >> 0x1d) * 45.0 * 11930465.0);
                  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar37 >> 0x18 & 0xff) * 0x10);
                  fVar48 = (float)((uint)uVar37 & 0xffffff) * 5.9604645e-08;
                  fVar47 = (*(float *)(param_1 + 1) - (*pfVar1 + fVar48 * pfVar1[1]) * 5.0) + -2.5;
                  fVar48 = (*(float *)(param_1 + 2) - (pfVar1[2] + fVar48 * pfVar1[3]) * 5.0) + -2.5
                  ;
                  iVar19 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
                  iVar20 = (int)((float)(int)fVar48 / 5.0) - (uint)(fVar48 < 0.0);
                  local_148 = CONCAT44(iVar20,iVar19);
                  local_138 = CONCAT44(iVar20 + 1,iVar19 + 1);
                  if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
                     (lVar29 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar29 == 0))
                  goto LAB_015458cc;
                  ppuVar28 = &local_158;
                  local_158 = local_130;
                  puStack_150 = puStack_128;
                  local_140 = puStack_128;
                }
                else {
                  if ((*(long *)PTR_DAT_04bb27c8 == 0) ||
                     (lVar29 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar29 == 0))
                  goto LAB_015458cc;
                  ppuVar28 = &local_130;
                }
                local_118 = puStack_128;
                uVar37 = FUN_009721a0(lVar29,ppuVar28,0);
                if ((uVar37 & 1) == 0) goto LAB_015458cc;
                bVar8 = true;
              }
            }
LAB_015443d8:
            iVar19 = 1;
            bVar16 = false;
          } while (bVar15);
        }
        else {
LAB_015442ec:
          if (iVar17 != 1) goto LAB_01544398;
          plVar7 = plVar43 + 1;
          plVar25 = (long *)FUN_01a5190c(&puStack_c0,0,plVar7,0);
          local_190 = (long *)*plVar25;
          uVar37 = FUN_01aef228(&local_190,*local_1f0 + 0x20000000U >> 0x1e);
          if ((uVar37 & 1) != 0) {
            if (local_1a4 < 4) goto LAB_01544398;
            bVar8 = true;
            do {
              bVar16 = bVar8;
              psVar26 = (short *)FUN_01a5190c(&puStack_c0,0,plVar7,0);
              local_108 = *(undefined4 *)psVar26;
              local_104 = *(undefined4 *)(psVar26 + 2);
              if (*psVar26 != -2) {
                uVar37 = FUN_0277e294(&local_108);
                puVar31 = PTR_DAT_04bb43c0;
                if ((uVar37 & 1) != 0) {
                  local_180 = (undefined *)0x0;
                  local_188 = (long *)CONCAT44(local_104,local_108);
                  lVar29 = *(long *)PTR_DAT_04bb43c0;
                  local_190 = plVar5;
                  uVar22 = FUN_0277d6c4(&local_188);
                  if (*(long *)puVar31 != 0) {
                    lVar29 = *(long *)(lVar29 + 0x57e58);
                    uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                    if ((uVar22 < *(uint *)(lVar29 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8) != 0)) {
                      lVar29 = *(long *)PTR_DAT_04bc0428;
                      uVar22 = FUN_0277d6c4(&local_108);
                      uVar22 = (uVar22 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
                      if (uVar22 < *(uint *)(lVar29 + 0x1d8)) {
                        puVar31 = *(undefined **)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar22 * 8)
                        ;
                        if (puVar31 != (undefined *)0x0) {
                          local_180 = puVar31;
                        }
                      }
                    }
                  }
                  iVar19 = FUN_01ae7550(&local_190);
                  local_130 = (undefined *)CONCAT44(local_130._4_4_,iVar19);
                  if (iVar19 - 1U < 6) {
                    puVar30 = (uint *)FUN_014fbd50(&puStack_c0,0,plVar7);
                    uVar22 = *puVar30;
                    if ((uVar22 != 0) && (lVar29 = *(long *)PTR_DAT_04bb27c0, lVar29 != 0)) {
                      plVar25 = *(long **)(*(long *)(*(long *)(lVar29 + 0x1c0) + 8) +
                                          ((ulong)(uVar22 >> 0x11) & 0x7ff8));
                      if ((plVar25 == (long *)0x0) ||
                         (((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0 ||
                          (*(uint *)(plVar25 + 0x46) != uVar22)))) {
                        plVar25 = (long *)0x0;
                      }
                      if ((*(int *)(lVar29 + 0x288) == 1) || (*(int *)(lVar29 + 0x288) == -1)) {
                        plVar27 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                               (*(long *)PTR_DAT_04bb3350 + 0x68));
                        lVar29 = *(long *)PTR_DAT_04bb27c0;
                        iVar19 = (**(code **)(*plVar27 + 0x60))();
                        if (iVar19 < 0x11) {
                          uVar22 = 1;
                        }
                        else {
                          if (4 < *(uint *)(lVar29 + 0x5e8)) goto LAB_01544fd4;
                          uVar22 = 0x1aU >> (ulong)(*(uint *)(lVar29 + 0x5e8) & 0x1f) & 1;
                        }
                      }
                      else {
LAB_01544fd4:
                        uVar22 = 0;
                      }
                      if (plVar25 != (long *)0x0) {
                        lVar29 = plVar25[0x2a];
                        uVar36 = *(uint *)(plVar25 + 0x49);
                        if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                           (iVar19 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar19 != 0)) {
                          *(undefined **)PTR_DAT_04bb5920 = puVar6;
                          __cxa_guard_release(PTR_DAT_04bb5928);
                        }
                        uVar23 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb5920);
                        if ((((int)lVar29 == 1) && ((uVar23 & uVar22) != 0)) &&
                           ((uVar36 >> 4 & 1) != 0)) {
                          local_120 = 0;
                          puStack_128 = PTR_DAT_04bb2010 + 0x10;
                          local_110 = 0;
                          local_130 = puVar2;
                          local_118 = puStack_128;
                          FUN_01470a84(plVar25,&local_130);
                          puVar31 = PTR_DAT_04bbc1a0;
                          iVar19 = local_110._4_4_ + 1;
                          if (iVar19 != local_120._4_4_) {
                            iVar21 = (int)local_120;
                            iVar20 = local_120._4_4_;
                            iVar45 = (int)local_120;
                            do {
                              local_158 = puVar31 + 0x10;
                              local_148 = 0;
                              puStack_150 = PTR_DAT_04bb2010 + 0x10;
                              local_138 = 0;
                              local_140 = puStack_150;
                              FUN_01afb7fc(&local_d8,&local_158,0);
                              uVar22 = (int)local_148 + iVar45;
                              uVar36 = local_148._4_4_ + iVar20;
                              local_138._0_4_ = (int)local_138 + iVar45;
                              local_138._4_4_ = local_138._4_4_ + iVar20;
                              local_148 = CONCAT44(uVar36,uVar22);
                              if (local_138._4_4_ + 1U != uVar36) {
                                uVar23 = uVar36;
                                uVar40 = uVar22;
                                do {
                                  if (((uVar23 < 0x100) && (uVar40 < 0x120)) &&
                                     ((*(uint *)(PTR_DAT_04bbcc10 +
                                                (ulong)(uVar40 + uVar23 * 0x120 >> 5) * 4 + 8) >>
                                       (ulong)(uVar40 & 0x1f) & 1) != 0)) goto LAB_01545320;
                                  if ((int)uVar40 < (int)local_138) {
                                    uVar40 = uVar40 + 1;
                                  }
                                  else {
                                    uVar23 = uVar23 + 1;
                                    uVar40 = uVar22;
                                  }
                                } while ((uVar22 != uVar40) || (local_138._4_4_ + 1U != uVar23));
                              }
                              if (((int)uVar22 <= (int)plVar43[2]) &&
                                 ((((int)plVar43[4] <= (int)local_138 &&
                                   ((int)uVar36 <= *(int *)((long)plVar43 + 0x14))) &&
                                  (*(int *)((long)plVar43 + 0x24) <= local_138._4_4_)))) {
                                local_180 = (undefined *)CONCAT44(uVar36,uVar22);
                                local_15c = 1;
                                local_190 = (long *)*param_1;
                                local_15a = 0;
                                local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
                                local_178 = 0x100000000;
                                local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                                            (uint)(*(float *)(param_1 + 1) < 0.0);
                                iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                                             (uint)(*(float *)(param_1 + 2) < 0.0);
                                local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
                                lVar29 = *(long *)PTR_DAT_04bb39b0;
                                pbVar33 = pbVar44;
                                if (lVar29 == 0) {
                                  if (7 < *pbVar44) goto LAB_0154527c;
LAB_015452f4:
                                  local_15b = *pbVar33;
                                  if (7 < local_15b) {
                                    local_15b = 0xff;
                                  }
                                }
                                else {
                                  if (*(int *)(lVar29 + 0x15c) != 0) {
                                    pbVar33 = (byte *)(lVar29 + 0x158);
                                  }
                                  if ((*pbVar33 < 8) ||
                                     (((*(int *)(lVar29 + 0x15c) != 0 &&
                                       (*(long *)PTR_DAT_04bb4718 != 0)) &&
                                      (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5),
                                      *pbVar33 < 8)))) goto LAB_015452f4;
LAB_0154527c:
                                  pbVar33 = PTR_DAT_04bb5038;
                                  if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_015452f4;
                                  lVar29 = **(long **)PTR_DAT_04bb27d0;
                                  bVar11 = *(byte *)(lVar29 + 0x473);
                                  pbVar32 = PTR_DAT_04bb5038;
                                  if ((long)(char)bVar11 != 0xffffffffffffffff) {
                                    puVar30 = (uint *)(lVar29 + 0x48) +
                                              ((long)(char)bVar11 & 0xffffffffU) * 0x20;
                                    if (7 < bVar11) {
                                      puVar30 = (uint *)(lVar29 + 0x48);
                                    }
                                    if ((*puVar30 & 8) != 0) {
                                      pbVar32 = (byte *)(lVar29 + 0x471);
                                    }
                                  }
                                  local_15b = *pbVar32;
                                  if (7 < local_15b) goto LAB_015452f4;
                                }
                                if (7 < local_15b) {
                                  local_15b = 0xff;
                                }
                                local_170 = local_188;
                                iVar24 = FUN_0148e51c(plVar4,&local_190);
                                if (iVar24 == 9) goto LAB_01545990;
                              }
LAB_01545320:
                              local_158 = puVar31 + 0x10;
                              local_148 = 0;
                              puStack_150 = PTR_DAT_04bb2010 + 0x10;
                              local_138 = 0;
                              local_140 = puStack_150;
                              FUN_01afb7fc(&local_d8,&local_158,1);
                              uVar22 = (int)local_148 + iVar45;
                              uVar36 = local_148._4_4_ + iVar20;
                              local_138._0_4_ = (int)local_138 + iVar45;
                              local_138._4_4_ = local_138._4_4_ + iVar20;
                              local_148 = CONCAT44(uVar36,uVar22);
                              if (local_138._4_4_ + 1U != uVar36) {
                                uVar23 = uVar36;
                                uVar40 = uVar22;
                                do {
                                  if (((uVar23 < 0x100) && (uVar40 < 0x120)) &&
                                     ((*(uint *)(PTR_DAT_04bbcc10 +
                                                (ulong)(uVar40 + uVar23 * 0x120 >> 5) * 4 + 8) >>
                                       (ulong)(uVar40 & 0x1f) & 1) != 0)) goto LAB_015455b4;
                                  if ((int)uVar40 < (int)local_138) {
                                    uVar40 = uVar40 + 1;
                                  }
                                  else {
                                    uVar23 = uVar23 + 1;
                                    uVar40 = uVar22;
                                  }
                                } while ((uVar22 != uVar40) || (local_138._4_4_ + 1U != uVar23));
                              }
                              if (((int)uVar22 <= (int)plVar43[2]) &&
                                 ((((int)plVar43[4] <= (int)local_138 &&
                                   ((int)uVar36 <= *(int *)((long)plVar43 + 0x14))) &&
                                  (*(int *)((long)plVar43 + 0x24) <= local_138._4_4_)))) {
                                local_180 = (undefined *)CONCAT44(uVar36,uVar22);
                                local_15c = 1;
                                local_190 = (long *)*param_1;
                                local_15a = 0;
                                local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
                                local_178 = 0x100000001;
                                local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                                            (uint)(*(float *)(param_1 + 1) < 0.0);
                                iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                                             (uint)(*(float *)(param_1 + 2) < 0.0);
                                local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
                                lVar29 = *(long *)PTR_DAT_04bb39b0;
                                pbVar33 = pbVar44;
                                if (lVar29 == 0) {
                                  if (7 < *pbVar44) goto LAB_01545510;
LAB_01545588:
                                  local_15b = *pbVar33;
                                  if (7 < local_15b) {
                                    local_15b = 0xff;
                                  }
                                }
                                else {
                                  if (*(int *)(lVar29 + 0x15c) != 0) {
                                    pbVar33 = (byte *)(lVar29 + 0x158);
                                  }
                                  if ((*pbVar33 < 8) ||
                                     (((*(int *)(lVar29 + 0x15c) != 0 &&
                                       (*(long *)PTR_DAT_04bb4718 != 0)) &&
                                      (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5),
                                      *pbVar33 < 8)))) goto LAB_01545588;
LAB_01545510:
                                  pbVar33 = PTR_DAT_04bb5038;
                                  if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01545588;
                                  lVar29 = **(long **)PTR_DAT_04bb27d0;
                                  bVar11 = *(byte *)(lVar29 + 0x473);
                                  pbVar32 = PTR_DAT_04bb5038;
                                  if ((long)(char)bVar11 != 0xffffffffffffffff) {
                                    puVar30 = (uint *)(lVar29 + 0x48) +
                                              ((long)(char)bVar11 & 0xffffffffU) * 0x20;
                                    if (7 < bVar11) {
                                      puVar30 = (uint *)(lVar29 + 0x48);
                                    }
                                    if ((*puVar30 & 8) != 0) {
                                      pbVar32 = (byte *)(lVar29 + 0x471);
                                    }
                                  }
                                  local_15b = *pbVar32;
                                  if (7 < local_15b) goto LAB_01545588;
                                }
                                if (7 < local_15b) {
                                  local_15b = 0xff;
                                }
                                local_170 = local_188;
                                iVar24 = FUN_0148e51c(plVar4,&local_190);
                                if (iVar24 == 9) goto LAB_01545990;
                              }
LAB_015455b4:
                              local_158 = puVar31 + 0x10;
                              local_148 = 0;
                              puStack_150 = PTR_DAT_04bb2010 + 0x10;
                              local_138 = 0;
                              local_140 = puStack_150;
                              FUN_01afb7fc(&local_d8,&local_158,2);
                              uVar22 = (int)local_148 + iVar45;
                              uVar36 = local_148._4_4_ + iVar20;
                              local_138._0_4_ = (int)local_138 + iVar45;
                              local_138._4_4_ = local_138._4_4_ + iVar20;
                              local_148 = CONCAT44(uVar36,uVar22);
                              if (local_138._4_4_ + 1U != uVar36) {
                                uVar23 = uVar36;
                                uVar40 = uVar22;
                                do {
                                  if (((uVar23 < 0x100) && (uVar40 < 0x120)) &&
                                     ((*(uint *)(PTR_DAT_04bbcc10 +
                                                (ulong)(uVar40 + uVar23 * 0x120 >> 5) * 4 + 8) >>
                                       (ulong)(uVar40 & 0x1f) & 1) != 0)) goto LAB_01545854;
                                  if ((int)uVar40 < (int)local_138) {
                                    uVar40 = uVar40 + 1;
                                  }
                                  else {
                                    uVar23 = uVar23 + 1;
                                    uVar40 = uVar22;
                                  }
                                } while ((uVar22 != uVar40) || (local_138._4_4_ + 1U != uVar23));
                              }
                              if (((int)uVar22 <= (int)plVar43[2]) &&
                                 ((((int)plVar43[4] <= (int)local_138 &&
                                   ((int)uVar36 <= *(int *)((long)plVar43 + 0x14))) &&
                                  (*(int *)((long)plVar43 + 0x24) <= local_138._4_4_)))) {
                                local_180 = (undefined *)CONCAT44(uVar36,uVar22);
                                local_15c = 1;
                                local_190 = (long *)*param_1;
                                local_15a = 0;
                                local_188 = (long *)(PTR_DAT_04bb2010 + 0x10);
                                local_178 = 0x100000002;
                                local_168 = (int)((float)(int)*(float *)(param_1 + 1) / 5.0) -
                                            (uint)(*(float *)(param_1 + 1) < 0.0);
                                iStack_164 = (int)((float)(int)*(float *)(param_1 + 2) / 5.0) -
                                             (uint)(*(float *)(param_1 + 2) < 0.0);
                                local_160 = *(int *)((long)param_1 + 0x14) + 0x20000000U >> 0x1e;
                                lVar29 = *(long *)PTR_DAT_04bb39b0;
                                pbVar33 = pbVar44;
                                if (lVar29 == 0) {
                                  if (7 < *pbVar44) goto LAB_015457b0;
LAB_01545828:
                                  local_15b = *pbVar33;
                                  if (7 < local_15b) {
                                    local_15b = 0xff;
                                  }
                                }
                                else {
                                  if (*(int *)(lVar29 + 0x15c) != 0) {
                                    pbVar33 = (byte *)(lVar29 + 0x158);
                                  }
                                  if ((*pbVar33 < 8) ||
                                     (((*(int *)(lVar29 + 0x15c) != 0 &&
                                       (*(long *)PTR_DAT_04bb4718 != 0)) &&
                                      (pbVar33 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5),
                                      *pbVar33 < 8)))) goto LAB_01545828;
LAB_015457b0:
                                  pbVar33 = PTR_DAT_04bb5038;
                                  if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_01545828;
                                  lVar29 = **(long **)PTR_DAT_04bb27d0;
                                  bVar11 = *(byte *)(lVar29 + 0x473);
                                  pbVar32 = PTR_DAT_04bb5038;
                                  if ((long)(char)bVar11 != 0xffffffffffffffff) {
                                    puVar30 = (uint *)(lVar29 + 0x48) +
                                              ((long)(char)bVar11 & 0xffffffffU) * 0x20;
                                    if (7 < bVar11) {
                                      puVar30 = (uint *)(lVar29 + 0x48);
                                    }
                                    if ((*puVar30 & 8) != 0) {
                                      pbVar32 = (byte *)(lVar29 + 0x471);
                                    }
                                  }
                                  local_15b = *pbVar32;
                                  if (7 < local_15b) goto LAB_01545828;
                                }
                                if (7 < local_15b) {
                                  local_15b = 0xff;
                                }
                                local_170 = local_188;
                                iVar24 = FUN_0148e51c(plVar4,&local_190);
                                if (iVar24 == 9) {
LAB_01545990:
                                  *(undefined4 *)(param_1 + 0x2e) = 9;
                                  return;
                                }
                              }
LAB_01545854:
                              if (iVar45 < (int)local_110) {
                                iVar45 = iVar45 + 1;
                              }
                              else {
                                iVar20 = iVar20 + 1;
                                iVar45 = (int)local_120;
                              }
                            } while ((iVar21 != iVar45) || (iVar19 != iVar20));
                          }
                        }
                      }
                    }
                  }
                }
              }
              bVar8 = false;
            } while (bVar16);
          }
        }
LAB_015442a0:
        local_1a4 = local_1a4 + 1;
        iVar35 = iVar35 + 1;
      } while (local_1a4 != 7);
      bVar8 = iVar17 != 0;
      iVar17 = iVar17 + -1;
    } while (bVar8);
    bVar8 = !bVar38;
    bVar38 = false;
    if (bVar8) {
      return;
    }
  } while( true );
}

