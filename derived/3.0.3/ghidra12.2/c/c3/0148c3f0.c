
/* WARNING: Removing unreachable block (ram,0x0148c8ac) */
/* WARNING: Removing unreachable block (ram,0x0148c8bc) */
/* WARNING: Removing unreachable block (ram,0x0148c8c8) */
/* WARNING: Removing unreachable block (ram,0x0148c9a0) */
/* WARNING: Removing unreachable block (ram,0x0148c9b0) */
/* WARNING: Removing unreachable block (ram,0x0148c9bc) */
/* WARNING: Removing unreachable block (ram,0x0148d01c) */
/* WARNING: Removing unreachable block (ram,0x0148d02c) */
/* WARNING: Removing unreachable block (ram,0x0148d038) */
/* WARNING: Removing unreachable block (ram,0x0148d108) */
/* WARNING: Removing unreachable block (ram,0x0148d118) */
/* WARNING: Removing unreachable block (ram,0x0148d124) */

undefined8 FUN_0148c3f0(uint *param_1,uint *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  uint uVar3;
  uint *puVar4;
  undefined1 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte bVar19;
  int iVar20;
  byte *pbVar21;
  byte *pbVar22;
  byte bVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 *puVar27;
  int iVar28;
  long lVar29;
  long lVar30;
  int iVar31;
  float fVar32;
  float fVar33;
  uint local_1e8;
  uint local_1d4;
  uint local_1d0;
  uint local_1cc;
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  uint local_1b0;
  uint uStack_1ac;
  ulong local_1a8;
  undefined *local_188;
  undefined2 local_180;
  undefined1 local_17e;
  undefined1 local_17d;
  uint local_17c;
  long local_178;
  undefined2 local_170;
  undefined1 local_16e;
  undefined1 local_16d;
  uint local_16c;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  int local_150;
  uint uStack_14c;
  undefined *local_148;
  undefined8 local_140;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  int local_120;
  int iStack_11c;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 local_f8;
  byte local_f0;
  uint local_ec;
  uint local_e8;
  uint local_e4;
  undefined *local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined4 local_b8;
  undefined1 local_b4;
  byte local_b3;
  undefined1 local_b2;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  undefined8 local_90;
  
  puVar1 = PTR_DAT_04bb43c0;
  lVar30 = *(long *)PTR_DAT_04bb43c0;
  uVar15 = FUN_0277d6c4(param_2);
  lVar29 = *(long *)puVar1;
  if (lVar29 != 0) {
    lVar30 = *(long *)(lVar30 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar30 + 0x1f8);
    if ((uVar15 < *(uint *)(lVar30 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar30 + 0x1e0) + (long)(int)uVar15 * 8) != 0)) {
      local_180 = (undefined2)*param_2;
      local_17e = *(undefined1 *)((long)param_2 + 2);
      local_17d = *(undefined1 *)((long)param_2 + 3);
      uVar24 = *param_2;
      uVar15 = param_2[1];
      puVar12 = *(undefined **)param_2;
      iVar7 = (int)((float)(int)(float)param_2[2] / 10.0) - (uint)((float)param_2[2] < 0.0);
      local_178 = 0;
      local_188 = PTR_DAT_04bc0510 + 0x10;
      uVar8 = (int)((float)(int)(float)param_2[4] / 10.0) - (uint)((float)param_2[4] < 0.0);
      local_17c = uVar15;
      local_170 = local_180;
      local_16e = local_17e;
      local_16d = local_17d;
      local_16c = uVar15;
      uVar16 = FUN_0277d6c4(&local_180);
      if (*(long *)puVar1 != 0) {
        lVar29 = *(long *)(lVar29 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
        if ((uVar16 < *(uint *)(lVar29 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
          lVar29 = *(long *)PTR_DAT_04bc0428;
          uVar16 = FUN_0277d6c4(&local_170);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar29 + 0x1f8);
          if (uVar16 < *(uint *)(lVar29 + 0x1d8)) {
            lVar29 = *(long *)(*(long *)(lVar29 + 0x1e0) + (long)(int)uVar16 * 8);
            if (lVar29 != 0) {
              local_178 = lVar29;
            }
          }
        }
      }
      puVar14 = PTR_DAT_04bb5038;
      local_1a8 = 0;
      local_1c0._0_4_ = 0;
      local_1c0._4_4_ = 0;
      local_1b8._0_4_ = 0;
      local_1b8._4_4_ = 0;
      local_1b0 = 0;
      uStack_1ac = 0;
      local_100 = (undefined *)0x0;
      local_f8 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      local_110 = puVar1;
      local_108 = 0;
      bVar11 = false;
      uVar16 = 0;
      local_ec = 0;
      local_f0 = *PTR_DAT_04bb32e0;
      local_1c8 = (ulong)CONCAT24(*(undefined2 *)PTR_DAT_04bb37e0,(uint)(byte)PTR_DAT_04bb37e0[2]);
      uVar5 = PTR_DAT_04bb37e0[3];
      local_1d0 = *(uint *)(PTR_DAT_04bb37e0 + 4);
      local_160 = (undefined *)CONCAT44(uVar8,iVar7);
      local_118 = (undefined *)*(undefined8 *)PTR_DAT_04bb37e0;
      if (7 < local_f0) {
        local_f0 = 0xff;
      }
      local_150 = iVar7 + 1;
      uStack_14c = uVar8;
      local_168 = PTR_DAT_04bb2018 + 0x10;
      local_158 = local_168;
      local_140 = CONCAT44(uVar8,iVar7 + -1);
      local_148 = local_168;
      local_130 = iVar7;
      iStack_12c = uVar8 + 1;
      local_138 = local_168;
      local_120 = iVar7;
      iStack_11c = uVar8 - 1;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      bVar19 = local_f0;
      do {
        local_a0 = 0;
        lVar29 = (long)((ulong)uVar16 << 0x20) >> 0x1c;
        iVar31 = *(int *)((long)&local_160 + lVar29);
        iVar28 = *(int *)((long)&local_160 + lVar29 + 4);
        local_90 = 0;
        local_b0 = puVar2;
        puStack_a8 = puVar1;
        local_98 = puVar1;
        FUN_01afb7fc(&local_188,&local_b0,1);
        local_b8 = 0;
        local_c0 = 0;
        local_b2 = 0;
        local_b4 = 0;
        fVar32 = ((float)iVar31 * 10.0 + 5.0) -
                 ((float)(((int)local_90 - (int)local_a0) + 1) * 0.5 * 5.0 + -2.5);
        fVar33 = ((float)iVar28 * 10.0 + 5.0) -
                 ((float)((local_90._4_4_ - local_a0._4_4_) + 1) * 0.5 * 5.0 + -2.5);
        local_d8 = CONCAT44((int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0),
                            (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0));
        local_d0 = CONCAT44(param_2[6],1);
        lVar29 = *(long *)PTR_DAT_04bb39b0;
        pbVar22 = PTR_DAT_04bb32e0;
        if (lVar29 == 0) {
          if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0148c7ec;
LAB_0148c860:
          local_b3 = *pbVar22;
          if (7 < local_b3) {
            local_b3 = 0xff;
          }
        }
        else {
          if (*(int *)(lVar29 + 0x15c) != 0) {
            pbVar22 = (byte *)(lVar29 + 0x158);
          }
          if ((*pbVar22 < 8) ||
             (((*(int *)(lVar29 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar22 < 8))))
          goto LAB_0148c860;
LAB_0148c7ec:
          pbVar22 = puVar14;
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_0148c860;
          lVar29 = **(long **)PTR_DAT_04bb27d0;
          bVar23 = *(byte *)(lVar29 + 0x473);
          pbVar21 = puVar14;
          if ((long)(char)bVar23 != 0xffffffffffffffff) {
            puVar4 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
            if (7 < bVar23) {
              puVar4 = (uint *)(lVar29 + 0x48);
            }
            if ((*puVar4 & 8) != 0) {
              pbVar21 = (byte *)(lVar29 + 0x471);
            }
          }
          local_b3 = *pbVar21;
          if (7 < local_b3) goto LAB_0148c860;
        }
        if (7 < local_b3) {
          local_b3 = 0xff;
        }
        local_e8 = uVar24;
        local_e4 = uVar15;
        local_e0 = puVar1;
        local_c8 = puVar1;
        iVar17 = FUN_01490cbc(&local_118,&local_e8);
        puVar13 = PTR_DAT_04bb2e10;
        if (iVar17 == 9) {
          if ((char)param_2[9] == '\0') goto LAB_0148cb18;
          lVar29 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          uVar25 = 0;
          if (lVar29 != 0) {
            lVar29 = *(long *)(lVar29 + 0xb0);
            uVar25 = 0;
            if (lVar29 != 0) {
              uVar25 = iVar7 - *(int *)(lVar29 + 0x28);
              if ((uVar25 < *(uint *)(lVar29 + 0x18)) &&
                 (uVar26 = uVar8 - *(int *)(lVar29 + 0x2c), uVar26 < *(uint *)(lVar29 + 0x1c))) {
                uVar25 = uVar25 + *(uint *)(lVar29 + 0x18) * uVar26;
LAB_0148c964:
                if (*(uint *)(lVar29 + 0x30) <= uVar25) {
                  uVar25 = 0;
                }
                puVar27 = (undefined8 *)(*(long *)(lVar29 + 0x38) + (long)(int)uVar25 * 0x68);
              }
              else {
                if (*(char *)(lVar29 + 0x88) != '\0') {
                  uVar25 = iVar7 - *(int *)(lVar29 + 0x98);
                  if (uVar25 < *(uint *)(lVar29 + 0xa0)) {
                    uVar26 = uVar8 - *(int *)(lVar29 + 0x9c);
                    puVar27 = &DAT_051a50f0;
                    if (uVar26 < *(uint *)(lVar29 + 0xa4)) {
                      uVar25 = uVar25 + *(uint *)(lVar29 + 0xa0) * uVar26 + *(int *)(lVar29 + 0x8c);
                      goto LAB_0148c964;
                    }
                    goto LAB_0148c988;
                  }
                }
                puVar27 = &DAT_051a50f0;
              }
LAB_0148c988:
              uVar25 = (uint)*(char *)(puVar27 + 2);
            }
          }
          local_b0 = (undefined *)CONCAT44(local_b0._4_4_,uVar25);
          lVar29 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          local_e8 = 0;
          if (lVar29 != 0) {
            lVar29 = *(long *)(lVar29 + 0xb0);
            local_e8 = 0;
            if (lVar29 != 0) {
              uVar26 = iVar31 - *(int *)(lVar29 + 0x28);
              if ((uVar26 < *(uint *)(lVar29 + 0x18)) &&
                 (uVar3 = iVar28 - *(int *)(lVar29 + 0x2c), uVar3 < *(uint *)(lVar29 + 0x1c))) {
                uVar26 = uVar26 + *(uint *)(lVar29 + 0x18) * uVar3;
LAB_0148ca48:
                if (*(uint *)(lVar29 + 0x30) <= uVar26) {
                  uVar26 = 0;
                }
                puVar27 = (undefined8 *)(*(long *)(lVar29 + 0x38) + (long)(int)uVar26 * 0x68);
              }
              else {
                if (*(char *)(lVar29 + 0x88) != '\0') {
                  uVar26 = iVar31 - *(int *)(lVar29 + 0x98);
                  if (uVar26 < *(uint *)(lVar29 + 0xa0)) {
                    uVar3 = iVar28 - *(int *)(lVar29 + 0x9c);
                    puVar27 = &DAT_051a50f0;
                    if (uVar3 < *(uint *)(lVar29 + 0xa4)) {
                      uVar26 = uVar26 + *(uint *)(lVar29 + 0xa0) * uVar3 + *(int *)(lVar29 + 0x8c);
                      goto LAB_0148ca48;
                    }
                    goto LAB_0148ca6c;
                  }
                }
                puVar27 = &DAT_051a50f0;
              }
LAB_0148ca6c:
              local_e8 = (uint)*(char *)(puVar27 + 2);
            }
          }
          if (uVar25 == local_e8) {
LAB_0148cb18:
            *param_1 = (uint)local_118;
            param_1[1] = local_118._4_4_;
            *(undefined **)(param_1 + 6) = local_100;
            param_1[4] = (uint)local_108;
            param_1[5] = local_108._4_4_;
            param_1[8] = (uint)local_f8;
            param_1[9] = local_f8._4_4_;
            if (7 < local_f0) {
              local_f0 = 0xff;
            }
            *(byte *)(param_1 + 10) = local_f0;
            param_1[0xb] = local_ec;
            return 9;
          }
          if (bVar11) {
            bVar11 = true;
          }
          else {
            bVar11 = true;
            local_1c8 = (ulong)CONCAT24((undefined2)local_118,(uint)local_118._2_1_);
            local_1d0 = local_118._4_4_;
            local_1b0 = local_108._4_4_;
            uStack_1ac = (uint)local_108;
            local_1a8 = (ulong)local_100 & 0xffffffff;
            local_1b8._0_4_ = (uint)local_f8;
            local_1b8._4_4_ = local_100._4_4_;
            bVar19 = local_f0;
            if (7 < local_f0) {
              bVar19 = 0xff;
            }
            local_1c0._0_4_ = local_ec;
            local_1c0._4_4_ = local_f8._4_4_;
            uVar5 = local_118._3_1_;
          }
        }
        uVar16 = uVar16 + 1;
      } while (uVar16 != 5);
      if ((bool)((char)param_2[9] != '\0' & bVar11)) {
        *(short *)param_1 = (short)(local_1c8 >> 0x20);
        *(char *)((long)param_1 + 2) = (char)local_1c8;
        *(undefined1 *)((long)param_1 + 3) = uVar5;
        param_1[1] = local_1d0;
        param_1[4] = uStack_1ac;
        param_1[5] = local_1b0;
        param_1[6] = (uint)local_1a8;
        param_1[7] = local_1b8._4_4_;
        param_1[8] = (uint)local_1b8;
        param_1[9] = local_1c0._4_4_;
        if (7 < bVar19) {
          bVar19 = 0xff;
        }
        *(byte *)(param_1 + 10) = bVar19;
        param_1[0xb] = (uint)local_1c0;
        return 9;
      }
      local_1b0 = 0;
      bVar11 = false;
      iVar31 = 0;
      iVar28 = -1;
      local_1cc = 0;
      local_1d4 = 0;
      local_1c8._0_4_ = 0;
      local_1c8._4_4_ = 0;
      local_1e8 = (uint)*(ushort *)PTR_DAT_04bb37e0;
      local_1b8 = (ulong)(byte)PTR_DAT_04bb37e0[2];
      local_e8 = *(uint *)PTR_DAT_04bb37e0;
      local_1c0 = (ulong)(byte)PTR_DAT_04bb37e0[3];
      local_1d0 = *(uint *)(PTR_DAT_04bb37e0 + 4);
      local_e0 = PTR_DAT_04bb2010 + 0x10;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = (undefined *)0x0;
      bVar19 = *PTR_DAT_04bb32e0;
      if (7 < bVar19) {
        bVar19 = 0xff;
      }
      local_c0 = CONCAT71((int7)(local_c0 >> 8),bVar19) & 0xffffffff;
      local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      local_e4 = local_1d0;
      do {
        uVar15 = *(uint *)(puVar13 + 8);
        uVar24 = *(uint *)(puVar13 + 0xc);
        if (iVar31 != 0) {
          fVar32 = SQRT((float)(iVar31 + 1));
          uVar16 = (uint)fVar32;
          if (fVar32 != (float)(int)fVar32) {
            uVar16 = uVar16 + 1;
          }
          uVar25 = uVar16 & 0xfffffffe;
          uVar26 = uVar16 >> 1;
          iVar17 = iVar28 + (uVar16 | 1) * (uVar16 | 1);
          if (uVar16 < 2) {
            uVar25 = 1;
          }
          iVar6 = 0;
          if (uVar25 != 0) {
            iVar6 = iVar17 / (int)uVar25;
          }
          uVar16 = uVar26;
          if ((int)(uVar25 * 4) <= iVar17) {
            uVar16 = 0;
          }
          iVar6 = iVar17 - iVar6 * uVar25;
          uVar9 = iVar6 - uVar26;
          uVar10 = uVar26 - iVar6;
          uVar3 = uVar9;
          if ((int)(uVar25 * 4) <= iVar17) {
            uVar3 = 0;
          }
          if (iVar17 < (int)(uVar25 * 3)) {
            uVar3 = -uVar26;
            uVar16 = uVar9;
          }
          if (iVar17 < (int)(uVar25 * 2)) {
            uVar16 = -uVar26;
            uVar3 = uVar10;
          }
          if (iVar17 < (int)uVar25) {
            uVar3 = uVar26;
            uVar16 = uVar10;
          }
          if ((uint)local_b0 < 4) {
            uVar15 = -uVar3;
            uVar24 = uVar16;
            switch((ulong)local_b0 & 0xffffffff) {
            case 1:
              uVar15 = uVar16;
              uVar24 = uVar3;
              break;
            case 2:
              uVar15 = uVar3;
              uVar24 = -uVar16;
              break;
            case 3:
              uVar15 = -uVar16;
              uVar24 = -uVar3;
            }
          }
        }
        iVar17 = uVar24 + uVar8;
        iVar6 = uVar15 + iVar7;
        local_108 = 0;
        puVar2 = PTR_DAT_04bb2010 + 0x10;
        local_f8 = 0;
        local_118 = puVar1;
        local_110 = puVar2;
        local_100 = puVar2;
        FUN_01afb7fc(&local_188,&local_118,(ulong)local_b0 & 0xffffffff);
        local_140 = 0;
        fVar32 = ((float)iVar6 * 10.0 + 5.0) -
                 ((float)(int)(((uint)local_f8 - (uint)local_108) + 1) * 0.5 * 5.0 + -2.5);
        fVar33 = ((float)iVar17 * 10.0 + 5.0) -
                 ((float)(int)((local_f8._4_4_ - local_108._4_4_) + 1) * 0.5 * 5.0 + -2.5);
        uStack_14c = param_2[6];
        local_158 = (undefined *)
                    CONCAT44((int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0),
                             (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0));
        local_150 = (uint)local_b0;
        lVar29 = *(long *)PTR_DAT_04bb39b0;
        pbVar22 = PTR_DAT_04bb32e0;
        if (lVar29 == 0) {
          if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0148cf6c;
LAB_0148cfd0:
          bVar23 = *pbVar22;
          if (7 < bVar23) {
            bVar23 = 0xff;
          }
        }
        else {
          if (*(int *)(lVar29 + 0x15c) != 0) {
            pbVar22 = (byte *)(lVar29 + 0x158);
          }
          if ((*pbVar22 < 8) ||
             (((*(int *)(lVar29 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
              (pbVar22 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar22 < 8))))
          goto LAB_0148cfd0;
LAB_0148cf6c:
          pbVar22 = puVar14;
          if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_0148cfd0;
          lVar29 = **(long **)PTR_DAT_04bb27d0;
          bVar23 = *(byte *)(lVar29 + 0x473);
          pbVar21 = puVar14;
          if ((long)(char)bVar23 != 0xffffffffffffffff) {
            puVar4 = (uint *)(lVar29 + 0x48) + ((long)(char)bVar23 & 0xffffffffU) * 0x20;
            if (7 < bVar23) {
              puVar4 = (uint *)(lVar29 + 0x48);
            }
            if ((*puVar4 & 8) != 0) {
              pbVar21 = (byte *)(lVar29 + 0x471);
            }
          }
          bVar23 = *pbVar21;
          if (7 < bVar23) goto LAB_0148cfd0;
        }
        if (7 < bVar23) {
          bVar23 = 0xff;
        }
        local_138 = (undefined *)
                    ((ulong)(CONCAT21((short)((ulong)local_138 >> 0x30),bVar23) & 0xff00ff) << 0x28)
        ;
        local_168 = puVar12;
        local_160 = puVar2;
        local_148 = puVar2;
        iVar18 = FUN_01490cbc(&local_e8,&local_168);
        if (iVar18 == 9) {
          if ((char)param_2[9] == '\0') goto LAB_0148d280;
          lVar29 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          iVar18 = 0;
          if (lVar29 != 0) {
            lVar29 = *(long *)(lVar29 + 0xb0);
            iVar18 = 0;
            if (lVar29 != 0) {
              uVar15 = iVar7 - *(int *)(lVar29 + 0x28);
              if ((uVar15 < *(uint *)(lVar29 + 0x18)) &&
                 (uVar24 = uVar8 - *(int *)(lVar29 + 0x2c), uVar24 < *(uint *)(lVar29 + 0x1c))) {
                uVar15 = uVar15 + *(uint *)(lVar29 + 0x18) * uVar24;
LAB_0148d0cc:
                if (*(uint *)(lVar29 + 0x30) <= uVar15) {
                  uVar15 = 0;
                }
                puVar27 = (undefined8 *)(*(long *)(lVar29 + 0x38) + (long)(int)uVar15 * 0x68);
              }
              else {
                if (*(char *)(lVar29 + 0x88) != '\0') {
                  uVar15 = iVar7 - *(int *)(lVar29 + 0x98);
                  if (uVar15 < *(uint *)(lVar29 + 0xa0)) {
                    uVar24 = uVar8 - *(int *)(lVar29 + 0x9c);
                    puVar27 = &DAT_051a50f0;
                    if (uVar24 < *(uint *)(lVar29 + 0xa4)) {
                      uVar15 = uVar15 + *(uint *)(lVar29 + 0xa0) * uVar24 + *(int *)(lVar29 + 0x8c);
                      goto LAB_0148d0cc;
                    }
                    goto LAB_0148d0f0;
                  }
                }
                puVar27 = &DAT_051a50f0;
              }
LAB_0148d0f0:
              iVar18 = (int)*(char *)(puVar27 + 2);
            }
          }
          lVar29 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
          iVar20 = 0;
          if (lVar29 != 0) {
            lVar29 = *(long *)(lVar29 + 0xb0);
            iVar20 = 0;
            if (lVar29 != 0) {
              uVar15 = iVar6 - *(int *)(lVar29 + 0x28);
              if ((uVar15 < *(uint *)(lVar29 + 0x18)) &&
                 (uVar24 = iVar17 - *(int *)(lVar29 + 0x2c), uVar24 < *(uint *)(lVar29 + 0x1c))) {
                uVar15 = uVar15 + *(uint *)(lVar29 + 0x18) * uVar24;
LAB_0148d1b0:
                if (*(uint *)(lVar29 + 0x30) <= uVar15) {
                  uVar15 = 0;
                }
                puVar27 = (undefined8 *)(*(long *)(lVar29 + 0x38) + (long)(int)uVar15 * 0x68);
              }
              else {
                if (*(char *)(lVar29 + 0x88) != '\0') {
                  uVar15 = iVar6 - *(int *)(lVar29 + 0x98);
                  if (uVar15 < *(uint *)(lVar29 + 0xa0)) {
                    uVar24 = iVar17 - *(int *)(lVar29 + 0x9c);
                    puVar27 = &DAT_051a50f0;
                    if (uVar24 < *(uint *)(lVar29 + 0xa4)) {
                      uVar15 = uVar15 + *(uint *)(lVar29 + 0xa0) * uVar24 + *(int *)(lVar29 + 0x8c);
                      goto LAB_0148d1b0;
                    }
                    goto LAB_0148d1d4;
                  }
                }
                puVar27 = &DAT_051a50f0;
              }
LAB_0148d1d4:
              iVar20 = (int)*(char *)(puVar27 + 2);
            }
          }
          local_168 = (undefined *)CONCAT44((int)((ulong)local_168 >> 0x20),iVar20);
          if (iVar18 == iVar20) {
LAB_0148d280:
            *param_1 = local_e8;
            param_1[1] = local_e4;
            *(undefined8 *)(param_1 + 6) = local_d0;
            param_1[4] = (uint)local_d8;
            param_1[5] = local_d8._4_4_;
            param_1[8] = (uint)local_c8;
            param_1[9] = local_c8._4_4_;
            if (7 < (byte)local_c0) {
              local_c0._0_1_ = 0xff;
            }
            *(byte *)(param_1 + 10) = (byte)local_c0;
            param_1[0xb] = local_c0._4_4_;
            return 9;
          }
          if (bVar11) {
            bVar11 = true;
          }
          else {
            local_1e8 = local_e8 & 0xffff;
            local_1b8 = CONCAT44(local_d8._4_4_,local_e8 >> 0x10) & 0xffffffff000000ff;
            local_1c0 = CONCAT44((undefined4)local_d0,local_e8 >> 0x18);
            local_1c8._4_4_ = local_d0._4_4_;
            local_1d0 = local_e4;
            local_1cc = local_c8._4_4_;
            bVar19 = (byte)local_c0;
            if (7 < (byte)local_c0) {
              bVar19 = 0xff;
            }
            bVar11 = true;
            local_1d4 = local_c0._4_4_;
            local_1b0 = (uint)local_d8;
            local_1c8._0_4_ = (uint)local_c8;
          }
        }
        iVar31 = iVar31 + 1;
        iVar28 = iVar28 + -1;
        if (iVar31 == 0x1000) {
          if (!(bool)((char)param_2[9] != '\0' & bVar11)) {
            return 1;
          }
          *(short *)param_1 = (short)local_1e8;
          *(char *)((long)param_1 + 2) = (char)local_1b8;
          *(char *)((long)param_1 + 3) = (char)local_1c0;
          param_1[1] = local_1d0;
          param_1[4] = local_1b0;
          param_1[5] = local_1b8._4_4_;
          param_1[6] = local_1c0._4_4_;
          param_1[7] = local_1c8._4_4_;
          param_1[8] = (uint)local_1c8;
          param_1[9] = local_1cc;
          if (7 < bVar19) {
            bVar19 = 0xff;
          }
          *(byte *)(param_1 + 10) = bVar19;
          param_1[0xb] = local_1d4;
          return 9;
        }
      } while( true );
    }
  }
  return 0;
}

