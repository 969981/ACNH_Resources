
void FUN_0096e9e0(long param_1,long param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  char cVar16;
  uint uVar17;
  float *pfVar18;
  uint uVar19;
  long lVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  bool bVar25;
  float *pfVar26;
  uint uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_10c;
  float local_108;
  float local_104;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  undefined1 local_dc;
  undefined1 local_db;
  undefined1 local_da;
  undefined1 local_d9;
  undefined *local_d8;
  uint local_d0;
  uint uStack_cc;
  int local_c4;
  undefined *local_c0;
  uint local_b8;
  uint local_b4;
  int local_ac;
  
  uVar9 = *(int *)(param_2 + 0x10) - 1;
  iVar15 = *(int *)(param_2 + 0x20);
  iVar7 = *(int *)(param_2 + 0x24);
  uVar27 = *(int *)(param_2 + 0x14) - 1;
  uVar5 = uVar9;
  if (iVar15 + 1 <= (int)uVar9) {
    uVar5 = iVar15 + 1;
  }
  if ((int)uVar9 <= iVar15 + 1) {
    uVar9 = iVar15 + 1;
  }
  uVar6 = uVar27;
  if ((int)uVar27 <= iVar7 + 1) {
    uVar6 = iVar7 + 1;
  }
  if (iVar7 + 1 <= (int)uVar27) {
    uVar27 = iVar7 + 1;
  }
  if (uVar6 + 1 != uVar27) {
    puVar2 = PTR_DAT_04bb2010 + 0x10;
    uVar24 = uVar5;
    do {
      if ((-1 < (int)uVar24) && (-1 < (int)uVar27)) {
        if ((uVar24 < *(uint *)(param_1 + 0x38)) && (uVar27 < *(uint *)(param_1 + 0x3c))) {
          uVar17 = uVar24 + *(uint *)(param_1 + 0x38) * uVar27;
          puVar1 = (uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar17 * 4);
          if (*(uint *)(param_1 + 0x68) <= uVar17) {
            puVar1 = (uint *)0x0;
          }
          local_d8 = puVar2;
          local_d0 = uVar24;
          uStack_cc = uVar27;
          FUN_00962530(param_1,&local_d8,&local_10c);
          fVar28 = local_10c;
          if (local_104 <= local_10c) {
            fVar28 = local_104;
          }
          fVar35 = local_10c;
          if (local_10c <= local_104) {
            fVar35 = local_104;
          }
          fVar36 = local_108;
          if (local_104 <= local_108) {
            fVar36 = local_104;
          }
          fVar45 = local_108;
          if (local_108 <= local_104) {
            fVar45 = local_104;
          }
          if (local_108 <= local_10c) {
            fVar28 = fVar36;
          }
          if (local_10c <= local_108) {
            fVar35 = fVar45;
          }
          fVar36 = local_100;
          if (local_e0 <= local_100) {
            fVar36 = local_e0;
          }
          fVar45 = local_100;
          if (local_100 <= local_e0) {
            fVar45 = local_e0;
          }
          fVar46 = local_fc;
          if (local_e0 <= local_fc) {
            fVar46 = local_e0;
          }
          fVar47 = local_fc;
          if (local_fc <= local_e0) {
            fVar47 = local_e0;
          }
          if (local_100 == local_fc || local_fc > local_100) {
            fVar45 = fVar47;
          }
          if (local_fc <= local_100) {
            fVar36 = fVar46;
          }
          fVar46 = local_f4;
          if (local_ec <= local_f4) {
            fVar46 = local_ec;
          }
          fVar47 = local_f4;
          if (local_f4 <= local_ec) {
            fVar47 = local_ec;
          }
          fVar48 = local_f0;
          if (local_ec <= local_f0) {
            fVar48 = local_ec;
          }
          fVar41 = local_f0;
          if (local_f0 <= local_ec) {
            fVar41 = local_ec;
          }
          if (local_f0 <= local_f4) {
            fVar46 = fVar48;
          }
          if (local_f4 <= local_f0) {
            fVar47 = fVar41;
          }
          fVar48 = local_e8;
          if (local_e0 <= local_e8) {
            fVar48 = local_e0;
          }
          fVar41 = local_e8;
          if (local_e8 <= local_e0) {
            fVar41 = local_e0;
          }
          fVar43 = local_e4;
          if (local_e0 <= local_e4) {
            fVar43 = local_e0;
          }
          fVar39 = local_e4;
          if (local_e4 <= local_e0) {
            fVar39 = local_e0;
          }
          if (local_e4 <= local_e8) {
            fVar48 = fVar43;
          }
          if (local_e8 <= local_e4) {
            fVar41 = fVar39;
          }
          fVar43 = fVar28;
          if (fVar46 <= fVar28) {
            fVar43 = fVar46;
          }
          fVar39 = fVar36;
          if (fVar46 <= fVar36) {
            fVar39 = fVar46;
          }
          if (fVar36 <= fVar28) {
            fVar43 = fVar39;
          }
          fVar28 = fVar35;
          if (fVar35 <= fVar47) {
            fVar28 = fVar47;
          }
          fVar36 = fVar45;
          if (fVar45 <= fVar47) {
            fVar36 = fVar47;
          }
          if (fVar35 <= fVar45) {
            fVar28 = fVar36;
          }
          if (fVar48 <= fVar43) {
            fVar43 = fVar48;
          }
          if (fVar28 <= fVar41) {
            fVar28 = fVar41;
          }
          if (0.11 <= fVar28 - fVar43) {
            uVar17 = *puVar1 & 0xfffffffe;
          }
          else {
            uVar17 = *puVar1 | 1;
          }
          *puVar1 = uVar17;
          if ((((((local_10c == local_108) && (local_108 == local_104)) && (local_104 == local_100))
               && (((local_100 == local_fc && (local_fc == local_f8)) &&
                   ((local_f8 == local_f4 && ((local_f4 == local_f0 && (local_f0 == local_ec))))))))
              && (local_ec == local_e8)) && ((local_e8 == local_e4 && (local_e4 == local_e0)))) {
            uVar17 = *puVar1 | 0x10000;
          }
          else {
            uVar17 = *puVar1 & 0xfffeffff;
          }
          *puVar1 = uVar17;
          uVar17 = local_d0 + *(int *)(param_1 + 0x38) * uStack_cc;
          pfVar18 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34);
          if (*(uint *)(param_1 + 0x48) <= uVar17) {
            pfVar18 = (float *)0x0;
          }
          fVar48 = *pfVar18;
          fVar47 = pfVar18[1];
          fVar46 = pfVar18[2];
          fVar45 = pfVar18[3];
          fVar35 = pfVar18[10];
          fVar36 = pfVar18[0xb];
          fVar28 = fVar48;
          if (fVar46 <= fVar48) {
            fVar28 = fVar46;
          }
          fVar41 = fVar48;
          if (fVar48 <= fVar46) {
            fVar41 = fVar46;
          }
          fVar43 = fVar47;
          if (fVar46 <= fVar47) {
            fVar43 = fVar46;
          }
          fVar39 = fVar47;
          if (fVar47 <= fVar46) {
            fVar39 = fVar46;
          }
          if (fVar47 <= fVar48) {
            fVar28 = fVar43;
          }
          fVar44 = pfVar18[4];
          fVar43 = pfVar18[5];
          if (fVar48 <= fVar47) {
            fVar41 = fVar39;
          }
          fVar42 = pfVar18[6];
          fVar40 = pfVar18[7];
          fVar38 = pfVar18[8];
          fVar37 = pfVar18[9];
          fVar39 = fVar45;
          if (fVar36 <= fVar45) {
            fVar39 = fVar36;
          }
          fVar33 = fVar45;
          if (fVar45 <= fVar36) {
            fVar33 = fVar36;
          }
          fVar34 = fVar44;
          if (fVar36 <= fVar44) {
            fVar34 = fVar36;
          }
          fVar32 = fVar44;
          if (fVar44 <= fVar36) {
            fVar32 = fVar36;
          }
          if (fVar44 <= fVar45) {
            fVar39 = fVar34;
          }
          if (fVar45 <= fVar44) {
            fVar33 = fVar32;
          }
          fVar34 = fVar42;
          if (fVar38 <= fVar42) {
            fVar34 = fVar38;
          }
          fVar32 = fVar42;
          if (fVar42 <= fVar38) {
            fVar32 = fVar38;
          }
          fVar31 = fVar40;
          if (fVar38 <= fVar40) {
            fVar31 = fVar38;
          }
          fVar30 = fVar40;
          if (fVar40 <= fVar38) {
            fVar30 = fVar38;
          }
          if (fVar40 <= fVar42) {
            fVar34 = fVar31;
          }
          if (fVar42 <= fVar40) {
            fVar32 = fVar30;
          }
          fVar31 = fVar37;
          if (fVar36 <= fVar37) {
            fVar31 = fVar36;
          }
          fVar30 = fVar37;
          if (fVar37 <= fVar36) {
            fVar30 = fVar36;
          }
          fVar49 = fVar35;
          if (fVar36 <= fVar35) {
            fVar49 = fVar36;
          }
          fVar29 = fVar35;
          if (fVar35 <= fVar36) {
            fVar29 = fVar36;
          }
          if (fVar35 <= fVar37) {
            fVar31 = fVar49;
          }
          if (fVar37 <= fVar35) {
            fVar30 = fVar29;
          }
          fVar49 = fVar28;
          if (fVar34 <= fVar28) {
            fVar49 = fVar34;
          }
          fVar29 = fVar39;
          if (fVar34 <= fVar39) {
            fVar29 = fVar34;
          }
          if (fVar39 <= fVar28) {
            fVar49 = fVar29;
          }
          fVar28 = fVar41;
          if (fVar41 <= fVar32) {
            fVar28 = fVar32;
          }
          fVar39 = fVar33;
          if (fVar33 <= fVar32) {
            fVar39 = fVar32;
          }
          if (fVar41 <= fVar33) {
            fVar28 = fVar39;
          }
          if (fVar31 <= fVar49) {
            fVar49 = fVar31;
          }
          if (fVar28 <= fVar30) {
            fVar28 = fVar30;
          }
          if (0.11 <= fVar28 - fVar49) {
            uVar17 = *puVar1 & 0xfffffffd;
          }
          else {
            uVar17 = *puVar1 | 2;
          }
          *puVar1 = uVar17;
          if (((((((fVar48 == fVar47) && (fVar47 == fVar46)) && (fVar46 == fVar45)) &&
                ((fVar45 == fVar44 && (fVar44 == fVar43)))) &&
               ((fVar43 == fVar42 && ((fVar42 == fVar40 && (fVar40 == fVar38)))))) &&
              (fVar38 == fVar37)) && ((fVar37 == fVar35 && (fVar35 == fVar36)))) {
            uVar17 = *puVar1 | 0x20000;
          }
          else {
            uVar17 = *puVar1 & 0xfffdffff;
          }
          *puVar1 = uVar17;
          *puVar1 = *puVar1 & 0xffffffef;
          uVar17 = *(uint *)(param_1 + 0x38);
          if ((int)local_d0 < 0) {
            uVar19 = *(uint *)(param_1 + 0x48);
            lVar20 = *(long *)(param_1 + 0x50);
LAB_0096ef48:
            uVar10 = local_d0 - 1;
            uVar21 = uStack_cc - 1;
            uVar23 = uVar10;
            do {
              if (((((-1 < (int)uVar23) && (-1 < (int)uVar21)) && (uVar23 < uVar17)) &&
                  (((uVar21 < *(uint *)(param_1 + 0x3c) &&
                    (uVar8 = uVar23 + uVar17 * uVar21, uVar8 < uVar19)) && (lVar20 != 0)))) &&
                 (((lVar22 = lVar20 + (long)(int)uVar8 * 0x34, *(char *)(lVar22 + 0x30) == '\x01' ||
                   (*(char *)(lVar22 + 0x31) == '\x01')) ||
                  ((*(char *)(lVar22 + 0x32) == '\x01' || (*(char *)(lVar22 + 0x33) == '\x01'))))))
              {
                *puVar1 = *puVar1 | 0x10;
                break;
              }
              if ((int)local_d0 < (int)uVar23) {
                uVar21 = uVar21 + 1;
                uVar23 = uVar10;
              }
              else {
                uVar23 = uVar23 + 1;
              }
            } while ((uVar10 != uVar23) || (uStack_cc + 2 != uVar21));
          }
          else {
            uVar19 = *(uint *)(param_1 + 0x48);
            lVar20 = *(long *)(param_1 + 0x50);
            if (((((int)uStack_cc < 0) || (uVar17 <= local_d0)) ||
                (*(uint *)(param_1 + 0x3c) <= uStack_cc)) ||
               (((uVar21 = local_d0 + uVar17 * uStack_cc, uVar19 <= uVar21 || (lVar20 == 0)) ||
                (((lVar22 = lVar20 + (long)(int)uVar21 * 0x34, *(char *)(lVar22 + 0x30) != '\x01' &&
                  ((*(char *)(lVar22 + 0x31) != '\x01' && (*(char *)(lVar22 + 0x32) != '\x01')))) &&
                 (*(char *)(lVar20 + (long)(int)uVar21 * 0x34 + 0x33) != '\x01'))))))
            goto LAB_0096ef48;
          }
          local_c0 = (undefined *)((ulong)local_c0 & 0xffffffff00000000);
          if ((*puVar1 & 1) == 0) {
            bVar11 = true;
            if ((local_100 - local_10c <= 1.25) && (local_fc - local_104 <= 1.25)) {
              bVar11 = local_fc - local_104 < -1.25 || local_100 - local_10c < -1.25;
            }
            bVar13 = true;
            if ((local_f4 - local_100 <= 1.25) && (local_f0 - local_f8 <= 1.25)) {
              bVar13 = local_f0 - local_f8 < -1.25 || local_f4 - local_100 < -1.25;
            }
            bVar12 = true;
            if ((local_e8 - local_f4 <= 1.25) && (local_e4 - local_ec <= 1.25)) {
              bVar12 = local_e4 - local_ec < -1.25 || local_e8 - local_f4 < -1.25;
            }
            bVar14 = true;
            if ((local_10c - local_e8 <= 1.25) && (local_108 - local_e0 <= 1.25)) {
              bVar14 = local_108 - local_e0 < -1.25 || local_10c - local_e8 < -1.25;
            }
            bVar25 = (bool)((bVar11 | bVar13 | bVar12 | bVar14) ^ 1);
            if (!bVar11) goto LAB_0096f0e0;
LAB_0096f0f8:
            bVar11 = true;
            if (bVar13) goto LAB_0096f13c;
LAB_0096f124:
            iVar15 = FUN_0096803c(param_1,&local_d8);
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar15);
            if (iVar15 != 0) goto LAB_0096f13c;
            local_ac = FUN_0096834c(param_1,&local_d8);
            bVar13 = local_ac != 0;
            if (!bVar12) goto LAB_0096f144;
LAB_0096f1a0:
            bVar12 = true;
            if (bVar14) goto LAB_0096f1c0;
LAB_0096f1a8:
            iVar15 = FUN_00968c7c(param_1,&local_d8);
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar15);
            if (iVar15 != 0) goto LAB_0096f1c0;
            local_ac = FUN_00968f8c(param_1,&local_d8);
            bVar14 = local_ac != 0;
            if (((!bVar25) || (bVar12 || (bVar11 || bVar13))) || (local_ac != 0)) goto LAB_0096f1cc;
            bVar11 = false;
            bVar13 = false;
            bVar12 = false;
            bVar14 = false;
            uVar17 = *puVar1 | 0x1000;
            *puVar1 = uVar17;
LAB_0096f270:
            uVar17 = uVar17 & 0xffffdfff;
            if (((bVar12) || (bVar11)) || ((!bVar13 || (!bVar14)))) goto LAB_0096f2d0;
            uVar17 = uVar17 | 0x4000;
          }
          else {
            bVar14 = false;
            bVar12 = false;
            bVar13 = false;
            bVar25 = true;
LAB_0096f0e0:
            iVar15 = FUN_00967a1c(param_1,&local_d8);
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar15);
            if (iVar15 != 0) goto LAB_0096f0f8;
            local_ac = FUN_00967d2c(param_1,&local_d8);
            bVar11 = local_ac != 0;
            if (!bVar13) goto LAB_0096f124;
LAB_0096f13c:
            bVar13 = true;
            if (bVar12) goto LAB_0096f1a0;
LAB_0096f144:
            iVar15 = FUN_0096865c(param_1,&local_d8);
            local_c0 = (undefined *)CONCAT44(local_c0._4_4_,iVar15);
            if (iVar15 != 0) goto LAB_0096f1a0;
            local_ac = FUN_0096896c(param_1,&local_d8);
            bVar12 = local_ac != 0;
            if (!bVar14) goto LAB_0096f1a8;
LAB_0096f1c0:
            bVar14 = true;
LAB_0096f1cc:
            uVar17 = *puVar1 & 0xffffefff;
            if (((bVar14) || (bVar13)) || ((!bVar11 || (!bVar12)))) goto LAB_0096f270;
            uVar17 = uVar17 | 0x2000;
LAB_0096f2d0:
            uVar17 = uVar17 & 0xffffbfff;
          }
          puVar4 = PTR_DAT_04bb2010;
          puVar3 = PTR_DAT_04bb2010 + 0x10;
          *puVar1 = uVar17 & 0xfffffeff;
          local_b4 = uStack_cc - 1;
          local_b8 = local_d0;
          if ((((-1 < (int)local_d0) && (0 < (int)uStack_cc)) &&
              (local_d0 < *(uint *)(param_1 + 0x38))) && (local_b4 < *(uint *)(param_1 + 0x3c))) {
            lVar20 = *(long *)(param_1 + 0x60);
            uVar17 = local_d0 + *(uint *)(param_1 + 0x38) * local_b4;
            if (((lVar20 == 0) || (*(uint *)(param_1 + 0x58) <= uVar17)) ||
               (cVar16 = *(char *)(lVar20 + (long)(int)uVar17 * 0x34 + 0x32), cVar16 == '\a')) {
              lVar20 = *(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34;
              if (*(uint *)(param_1 + 0x48) <= uVar17) {
                lVar20 = 0;
              }
              pfVar18 = (float *)(lVar20 + 0x18);
LAB_0096f3cc:
              cVar16 = *(char *)(lVar20 + 0x32);
            }
            else {
              pfVar18 = (float *)(lVar20 + (long)(int)uVar17 * 0x34 + 0x18);
              if (cVar16 == '\t') {
                lVar20 = *(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34;
                if (*(uint *)(param_1 + 0x48) <= uVar17) {
                  lVar20 = 0;
                }
                goto LAB_0096f3cc;
              }
            }
            local_c0 = puVar3;
            local_c4 = FUN_009652ec(param_1,local_dc,cVar16,&local_d8,&local_c0,0);
            if (local_c4 == 0) {
              fVar28 = pfVar18[2];
              if (fVar28 - local_108 <= 1.25) {
                fVar35 = pfVar18[1];
                if (fVar35 - local_104 <= 1.25) {
                  fVar36 = local_10c;
                  if (local_104 <= local_10c) {
                    fVar36 = local_104;
                  }
                  fVar45 = local_10c;
                  if (local_10c <= local_104) {
                    fVar45 = local_104;
                  }
                  fVar46 = local_108;
                  if (local_104 <= local_108) {
                    fVar46 = local_104;
                  }
                  fVar47 = local_108;
                  if (local_108 <= local_104) {
                    fVar47 = local_104;
                  }
                  if (local_108 <= local_10c) {
                    fVar36 = fVar46;
                  }
                  if (local_10c <= local_108) {
                    fVar45 = fVar47;
                  }
                  if (*(float *)(param_1 + 0x30) <= fVar45 - fVar36) {
LAB_0096f500:
                    if ((((((int)local_b8 < 0) || ((int)local_b4 < 0)) ||
                         (*(uint *)(param_1 + 0x38) <= local_b8)) ||
                        ((*(uint *)(param_1 + 0x3c) <= local_b4 ||
                         (local_b8 = local_b8 + *(uint *)(param_1 + 0x38) * local_b4,
                         *(uint *)(param_1 + 0x68) <= local_b8)))) ||
                       ((*(long *)(param_1 + 0x70) == 0 ||
                        (local_ac = 6,
                        (*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)local_b8 * 4) >> 6 & 1) ==
                        0)))) {
                      local_ac = 8;
                      *puVar1 = *puVar1 | 0x100;
                    }
                  }
                  else if ((-1.25 <= fVar28 - local_108) && (-1.25 <= fVar35 - local_104)) {
                    fVar45 = *pfVar18;
                    fVar36 = fVar45;
                    if (fVar28 <= fVar45) {
                      fVar36 = fVar28;
                    }
                    fVar46 = fVar45;
                    if (fVar45 <= fVar28) {
                      fVar46 = fVar28;
                    }
                    fVar47 = fVar35;
                    if (fVar28 <= fVar35) {
                      fVar47 = fVar28;
                    }
                    fVar48 = fVar35;
                    if (fVar35 <= fVar28) {
                      fVar48 = fVar28;
                    }
                    if (fVar35 <= fVar45) {
                      fVar36 = fVar47;
                    }
                    if (fVar45 <= fVar35) {
                      fVar46 = fVar48;
                    }
                    if (fVar46 - fVar36 < *(float *)(param_1 + 0x30)) goto LAB_0096f500;
                  }
                }
              }
            }
          }
          *puVar1 = *puVar1 & 0xfffffdff;
          local_b8 = local_d0 - 1;
          local_b4 = uStack_cc;
          if (((0 < (int)local_d0) && (-1 < (int)uStack_cc)) &&
             ((local_b8 < *(uint *)(param_1 + 0x38) && (uStack_cc < *(uint *)(param_1 + 0x3c))))) {
            lVar20 = *(long *)(param_1 + 0x60);
            uVar17 = local_b8 + *(uint *)(param_1 + 0x38) * uStack_cc;
            if (((lVar20 == 0) || (*(uint *)(param_1 + 0x58) <= uVar17)) ||
               (cVar16 = *(char *)(lVar20 + (long)(int)uVar17 * 0x34 + 0x33), cVar16 == '\a')) {
              lVar20 = *(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34;
              if (*(uint *)(param_1 + 0x48) <= uVar17) {
                lVar20 = 0;
              }
              pfVar18 = (float *)(lVar20 + 0x24);
LAB_0096f580:
              cVar16 = *(char *)(lVar20 + 0x33);
            }
            else {
              pfVar18 = (float *)(lVar20 + (long)(int)uVar17 * 0x34 + 0x24);
              if (cVar16 == '\t') {
                lVar20 = *(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34;
                if (*(uint *)(param_1 + 0x48) <= uVar17) {
                  lVar20 = 0;
                }
                goto LAB_0096f580;
              }
            }
            local_c0 = puVar3;
            local_c4 = FUN_009658a4(param_1,local_db,cVar16,&local_d8,&local_c0,0);
            if (local_c4 == 0) {
              fVar28 = pfVar18[2];
              if (fVar28 - local_fc <= 1.25) {
                fVar35 = pfVar18[1];
                if (fVar35 - local_f8 <= 1.25) {
                  fVar36 = local_100;
                  if (local_f8 <= local_100) {
                    fVar36 = local_f8;
                  }
                  fVar45 = local_100;
                  if (local_100 <= local_f8) {
                    fVar45 = local_f8;
                  }
                  fVar46 = local_fc;
                  if (local_f8 <= local_fc) {
                    fVar46 = local_f8;
                  }
                  fVar47 = local_fc;
                  if (local_fc <= local_f8) {
                    fVar47 = local_f8;
                  }
                  if (local_fc <= local_100) {
                    fVar36 = fVar46;
                  }
                  if (local_100 <= local_fc) {
                    fVar45 = fVar47;
                  }
                  if (*(float *)(param_1 + 0x30) <= fVar45 - fVar36) {
LAB_0096f6b8:
                    if ((((int)local_b8 < 0) || ((int)local_b4 < 0)) ||
                       ((*(uint *)(param_1 + 0x38) <= local_b8 ||
                        ((((*(uint *)(param_1 + 0x3c) <= local_b4 ||
                           (local_b8 = local_b8 + *(uint *)(param_1 + 0x38) * local_b4,
                           *(uint *)(param_1 + 0x68) <= local_b8)) ||
                          (*(long *)(param_1 + 0x70) == 0)) ||
                         (local_ac = 6,
                         (*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)local_b8 * 4) >> 6 & 1)
                         == 0)))))) {
                      local_ac = 9;
                      *puVar1 = *puVar1 | 0x200;
                    }
                  }
                  else if ((-1.25 <= fVar28 - local_fc) && (-1.25 <= fVar35 - local_f8)) {
                    fVar45 = *pfVar18;
                    fVar36 = fVar45;
                    if (fVar28 <= fVar45) {
                      fVar36 = fVar28;
                    }
                    fVar46 = fVar45;
                    if (fVar45 <= fVar28) {
                      fVar46 = fVar28;
                    }
                    fVar47 = fVar35;
                    if (fVar28 <= fVar35) {
                      fVar47 = fVar28;
                    }
                    fVar48 = fVar35;
                    if (fVar35 <= fVar28) {
                      fVar48 = fVar28;
                    }
                    if (fVar35 <= fVar45) {
                      fVar36 = fVar47;
                    }
                    if (fVar45 <= fVar35) {
                      fVar46 = fVar48;
                    }
                    if (fVar46 - fVar36 < *(float *)(param_1 + 0x30)) goto LAB_0096f6b8;
                  }
                }
              }
            }
          }
          puVar4 = puVar4 + 0x10;
          *puVar1 = *puVar1 & 0xfffffbff;
          local_b4 = uStack_cc + 1;
          local_b8 = local_d0;
          if (((-1 < (int)local_d0) && (-2 < (int)uStack_cc)) &&
             ((local_d0 < *(uint *)(param_1 + 0x38) && (local_b4 < *(uint *)(param_1 + 0x3c))))) {
            lVar20 = *(long *)(param_1 + 0x60);
            uVar17 = local_d0 + *(uint *)(param_1 + 0x38) * local_b4;
            if (((lVar20 == 0) || (*(uint *)(param_1 + 0x58) <= uVar17)) ||
               (cVar16 = *(char *)(lVar20 + (long)(int)uVar17 * 0x34 + 0x30), cVar16 == '\a')) {
              pfVar18 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34);
              if (*(uint *)(param_1 + 0x48) <= uVar17) {
                pfVar18 = (float *)0x0;
              }
              pfVar26 = pfVar18;
LAB_0096f734:
              cVar16 = *(char *)(pfVar18 + 0xc);
            }
            else {
              pfVar26 = (float *)(lVar20 + (long)(int)uVar17 * 0x34);
              if (cVar16 == '\t') {
                pfVar18 = (float *)(*(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34);
                if (*(uint *)(param_1 + 0x48) <= uVar17) {
                  pfVar18 = (float *)0x0;
                }
                goto LAB_0096f734;
              }
            }
            local_c0 = puVar4;
            local_c4 = FUN_00965e6c(param_1,local_da,cVar16,&local_d8,&local_c0,0);
            if (local_c4 == 0) {
              fVar28 = pfVar26[2];
              if (fVar28 - local_f0 <= 1.25) {
                fVar35 = pfVar26[1];
                if (fVar35 - local_ec <= 1.25) {
                  fVar36 = local_f4;
                  if (local_ec <= local_f4) {
                    fVar36 = local_ec;
                  }
                  fVar45 = local_f4;
                  if (local_f4 <= local_ec) {
                    fVar45 = local_ec;
                  }
                  fVar46 = local_f0;
                  if (local_ec <= local_f0) {
                    fVar46 = local_ec;
                  }
                  fVar47 = local_f0;
                  if (local_f0 <= local_ec) {
                    fVar47 = local_ec;
                  }
                  if (local_f0 <= local_f4) {
                    fVar36 = fVar46;
                  }
                  if (local_f4 <= local_f0) {
                    fVar45 = fVar47;
                  }
                  if (*(float *)(param_1 + 0x30) <= fVar45 - fVar36) {
LAB_0096f864:
                    if (((((int)local_b8 < 0) || ((int)local_b4 < 0)) ||
                        (*(uint *)(param_1 + 0x38) <= local_b8)) ||
                       (((*(uint *)(param_1 + 0x3c) <= local_b4 ||
                         (local_b8 = local_b8 + *(uint *)(param_1 + 0x38) * local_b4,
                         *(uint *)(param_1 + 0x68) <= local_b8)) ||
                        ((*(long *)(param_1 + 0x70) == 0 ||
                         (local_ac = 6,
                         (*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)local_b8 * 4) >> 6 & 1)
                         == 0)))))) {
                      local_ac = 10;
                      *puVar1 = *puVar1 | 0x400;
                    }
                  }
                  else if ((-1.25 <= fVar28 - local_f0) && (-1.25 <= fVar35 - local_ec)) {
                    fVar45 = *pfVar26;
                    fVar36 = fVar45;
                    if (fVar28 <= fVar45) {
                      fVar36 = fVar28;
                    }
                    fVar46 = fVar45;
                    if (fVar45 <= fVar28) {
                      fVar46 = fVar28;
                    }
                    fVar47 = fVar35;
                    if (fVar28 <= fVar35) {
                      fVar47 = fVar28;
                    }
                    fVar48 = fVar35;
                    if (fVar35 <= fVar28) {
                      fVar48 = fVar28;
                    }
                    if (fVar35 <= fVar45) {
                      fVar36 = fVar47;
                    }
                    if (fVar45 <= fVar35) {
                      fVar46 = fVar48;
                    }
                    if (fVar46 - fVar36 < *(float *)(param_1 + 0x30)) goto LAB_0096f864;
                  }
                }
              }
            }
          }
          *puVar1 = *puVar1 & 0xfffff7ff;
          local_b8 = local_d0 + 1;
          local_b4 = uStack_cc;
          local_c0 = puVar4;
          if ((-2 < (int)local_d0) && (-1 < (int)uStack_cc)) {
            if ((local_b8 < *(uint *)(param_1 + 0x38)) && (uStack_cc < *(uint *)(param_1 + 0x3c))) {
              lVar20 = *(long *)(param_1 + 0x60);
              uVar17 = local_b8 + *(uint *)(param_1 + 0x38) * uStack_cc;
              if (((lVar20 == 0) || (*(uint *)(param_1 + 0x58) <= uVar17)) ||
                 (cVar16 = *(char *)(lVar20 + (long)(int)uVar17 * 0x34 + 0x31), cVar16 == '\a')) {
                lVar20 = *(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34;
                if (*(uint *)(param_1 + 0x48) <= uVar17) {
                  lVar20 = 0;
                }
                pfVar18 = (float *)(lVar20 + 0xc);
LAB_0096f8e0:
                cVar16 = *(char *)(lVar20 + 0x31);
              }
              else {
                pfVar18 = (float *)(lVar20 + (long)(int)uVar17 * 0x34 + 0xc);
                if (cVar16 == '\t') {
                  lVar20 = *(long *)(param_1 + 0x50) + (long)(int)uVar17 * 0x34;
                  if (*(uint *)(param_1 + 0x48) <= uVar17) {
                    lVar20 = 0;
                  }
                  goto LAB_0096f8e0;
                }
              }
              local_c4 = FUN_0096637c(param_1,local_d9,cVar16,&local_d8,&local_c0,0);
              if (local_c4 == 0) {
                fVar28 = pfVar18[2];
                if (fVar28 - local_e4 <= 1.25) {
                  fVar35 = pfVar18[1];
                  if (fVar35 - local_e0 <= 1.25) {
                    fVar36 = local_e8;
                    if (local_e0 <= local_e8) {
                      fVar36 = local_e0;
                    }
                    fVar45 = local_e8;
                    if (local_e8 <= local_e0) {
                      fVar45 = local_e0;
                    }
                    fVar46 = local_e4;
                    if (local_e0 <= local_e4) {
                      fVar46 = local_e0;
                    }
                    fVar47 = local_e4;
                    if (local_e4 <= local_e0) {
                      fVar47 = local_e0;
                    }
                    if (local_e4 <= local_e8) {
                      fVar36 = fVar46;
                    }
                    if (local_e8 <= local_e4) {
                      fVar45 = fVar47;
                    }
                    if (*(float *)(param_1 + 0x30) <= fVar45 - fVar36) {
LAB_0096f998:
                      if ((((int)local_b8 < 0) || ((int)local_b4 < 0)) ||
                         ((*(uint *)(param_1 + 0x38) <= local_b8 ||
                          ((((*(uint *)(param_1 + 0x3c) <= local_b4 ||
                             (uVar17 = local_b8 + *(uint *)(param_1 + 0x38) * local_b4,
                             *(uint *)(param_1 + 0x68) <= uVar17)) ||
                            (*(long *)(param_1 + 0x70) == 0)) ||
                           (local_ac = 6,
                           (*(uint *)(*(long *)(param_1 + 0x70) + (long)(int)uVar17 * 4) >> 6 & 1)
                           == 0)))))) {
                        local_ac = 0xb;
                        *puVar1 = *puVar1 | 0x800;
                      }
                    }
                    else if ((-1.25 <= fVar28 - local_e4) && (-1.25 <= fVar35 - local_e0)) {
                      fVar45 = *pfVar18;
                      fVar36 = fVar45;
                      if (fVar28 <= fVar45) {
                        fVar36 = fVar28;
                      }
                      fVar46 = fVar45;
                      if (fVar45 <= fVar28) {
                        fVar46 = fVar28;
                      }
                      fVar47 = fVar35;
                      if (fVar28 <= fVar35) {
                        fVar47 = fVar28;
                      }
                      fVar48 = fVar35;
                      if (fVar35 <= fVar28) {
                        fVar48 = fVar28;
                      }
                      if (fVar35 <= fVar45) {
                        fVar36 = fVar47;
                      }
                      if (fVar45 <= fVar35) {
                        fVar46 = fVar48;
                      }
                      if (fVar46 - fVar36 < *(float *)(param_1 + 0x30)) goto LAB_0096f998;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if ((int)uVar24 < (int)uVar9) {
        uVar24 = uVar24 + 1;
      }
      else {
        uVar27 = uVar27 + 1;
        uVar24 = uVar5;
      }
    } while ((uVar5 != uVar24) || (uVar6 + 1 != uVar27));
  }
  return;
}

