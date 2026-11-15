
undefined8 FUN_01f00ff0(long param_1)

{
  int iVar1;
  float *pfVar2;
  int *piVar3;
  uint uVar4;
  ushort uVar5;
  ushort uVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  undefined8 uVar14;
  long lVar15;
  undefined *puVar16;
  char *pcVar17;
  uint uVar18;
  char *pcVar19;
  ulong uVar20;
  char cVar21;
  char *pcVar22;
  int *piVar23;
  bool bVar24;
  undefined8 *puVar25;
  uint uVar26;
  uint *puVar27;
  short *psVar28;
  uint uVar29;
  uint *puVar30;
  long lVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined8 local_338;
  char *local_330;
  undefined8 *local_328;
  undefined8 local_320;
  undefined8 local_318;
  undefined8 local_310;
  undefined8 local_308;
  float local_300;
  float local_2fc;
  float local_2f8;
  int local_2e4;
  undefined1 local_2d0;
  undefined8 local_2c8;
  undefined1 local_2c0;
  undefined1 local_2bf;
  undefined4 local_2a0;
  undefined4 local_29c;
  undefined4 local_290;
  undefined4 local_28c;
  undefined4 local_288;
  undefined4 uStack_284;
  undefined4 local_280;
  undefined2 local_278;
  char local_276;
  char local_275;
  undefined4 local_274;
  undefined1 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  uint local_184;
  undefined8 local_180;
  undefined8 local_178;
  ulong local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined *local_158;
  undefined *local_150;
  int local_148;
  int local_144;
  undefined *local_140;
  int local_138;
  int local_134;
  undefined2 local_130;
  undefined1 local_12e;
  undefined1 local_12d;
  undefined4 local_12c;
  undefined *local_128;
  undefined *local_120;
  int local_118;
  int local_114;
  undefined *local_110;
  int local_108;
  int local_104;
  char local_100;
  int local_f4;
  undefined8 local_f0;
  undefined *local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  int local_c8;
  uint uStack_c4;
  undefined *local_c0;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  
  piVar3 = (int *)(param_1 + 0xaf50);
  lVar15 = *(long *)(param_1 + 8);
  lVar31 = *(long *)(lVar15 + 0x68);
  pcVar22 = PTR_DAT_04bc2b20;
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    uVar29 = *(uint *)(lVar15 + 0x508);
    if (uVar29 == 0xffffffff) {
      uVar29 = *(uint *)(lVar15 + 0x50c);
      if (uVar29 == 0xffffffff) {
        pcVar17 = (char *)0x0;
      }
      else {
        pcVar19 = &DAT_05454358 + (ulong)uVar29 * 0x2d8;
        if (0x10 < uVar29) {
          pcVar19 = &DAT_05454358;
        }
        pcVar17 = (char *)0x0;
        if (*pcVar19 != '\0') {
          pcVar17 = pcVar19;
        }
      }
      if (pcVar17 != (char *)0x0) {
        pcVar22 = pcVar17 + 0x90;
      }
    }
    else {
      puVar16 = &DAT_053fe348 + (ulong)uVar29 * 0xba0;
      if (9 < uVar29) {
        puVar16 = &DAT_053fe348;
      }
      pcVar22 = puVar16 + 0x658;
    }
  }
  lVar15 = *(long *)PTR_DAT_04bb3968;
  if (lVar15 == 0) {
    uVar29 = *(uint *)(param_1 + 0xe8a8);
LAB_01f01120:
    puVar27 = (uint *)PTR_DAT_04bc2828;
  }
  else {
    uVar29 = *(uint *)(param_1 + 0xe8a8);
    if ((int)*(uint *)(lVar15 + 0x16ac8) < 1) {
      if ((((*(long *)(lVar15 + 0x169b8) != 0) &&
           (puVar27 = *(uint **)(*(long *)(lVar15 + 0x169b8) + 8), puVar27 != (uint *)0x0)) &&
          ((*(uint *)(lVar15 + 0x169d0) <= uVar29 ||
           (*(char *)(*(long *)(lVar15 + 0x169d8) + (long)(int)uVar29) != '\0')))) &&
         (((uVar29 < *puVar27 && (puVar27[1] != 0)) && ((ushort)puVar27[2] != 0)))) {
        iVar12 = 0xc;
        if (*(char *)((long)puVar27 + 10) != '\0') {
          iVar12 = 0x1c;
        }
        puVar27 = (uint *)((ulong)(puVar27[1] * uVar29 + (uint)(ushort)puVar27[2] * 8 + iVar12) +
                          (long)puVar27);
        if (puVar27 != (uint *)0x0) goto LAB_01f01128;
      }
      goto LAB_01f01120;
    }
    if (*(uint *)(lVar15 + 0x16ac8) <= uVar29) goto LAB_01f01120;
    uVar26 = uVar29;
    if (*(uint *)(lVar15 + 0x16ab8) <= uVar29) {
      uVar26 = 0;
    }
    puVar27 = *(uint **)(*(long *)(lVar15 + 0x16ac0) + (ulong)uVar26 * 8);
    if (puVar27 == (uint *)0x0) goto LAB_01f01120;
  }
LAB_01f01128:
  pfVar2 = (float *)(lVar31 + 0x278);
  FUN_01efa990(&local_b0,param_1,uVar29);
  puVar30 = (uint *)(pcVar22 + 8);
  uVar14 = 0;
  switch(*puVar30) {
  case 2:
  case 6:
    lVar15 = *(long *)(param_1 + 8);
    if (*(int *)(lVar15 + 0x750) != 2) {
      if ((*(int *)(lVar15 + 0x178) == 0) && (*(char *)(param_1 + 0xad5d) < '\0')) {
        uVar20 = FUN_021dd780();
        lVar15 = *(long *)(param_1 + 8);
        if ((uVar20 & 1) != 0) goto LAB_01f01188;
      }
      bVar24 = true;
      goto LAB_01f01610;
    }
LAB_01f01188:
    iVar12 = *(int *)(*(long *)(lVar15 + 0x68) + 0x2b4);
    fVar37 = (float)(int)((int)((float)(int)*(float *)(lVar31 + 0x278) / 5.0) -
                         (uint)(*(float *)(lVar31 + 0x278) < 0.0)) * 5.0 + 2.5;
    fVar36 = (float)(int)((int)((float)(int)*(float *)(lVar31 + 0x280) / 5.0) -
                         (uint)(*(float *)(lVar31 + 0x280) < 0.0)) * 5.0 + 2.5;
LAB_01f011e8:
    FUN_01e63f1c(&local_328);
    local_328._0_4_ = 0x16;
    local_2d0 = 1;
    local_2fc = 0.0;
    local_2c8 = 0x100000002;
    local_2bf = 1;
    local_300 = fVar37;
    local_2f8 = fVar36;
    local_2e4 = iVar12;
    if (*piVar3 < *(int *)(param_1 + 0xaf54)) {
      FUN_021920b0(piVar3,&local_328);
    }
    FUN_01e63f1c(&local_328);
    puVar9 = PTR_DAT_04bc1568;
    puVar16 = PTR_DAT_04bc1560;
    local_328 = (undefined8 *)CONCAT44(local_328._4_4_,1);
    local_24c = local_b0;
    local_248 = uStack_ac;
    if (*puVar27 != 0) {
      cVar21 = *PTR_DAT_04bc1560;
      do {
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar16 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar29 = *(uint *)(puVar9 + 0x9c);
          if (-1 < (int)uVar29) {
            pcVar22 = (char *)((ulong)uVar29 + (long)puVar27);
            goto LAB_01f01348;
          }
          if (uVar29 != 0xffffffff) break;
        }
        puVar30 = (uint *)(ulong)*puVar27;
        pcVar22 = (char *)0x0;
        if ((*puVar27 == 0) || (puVar27 == puVar30)) goto LAB_01f01348;
        lVar15 = 0xc;
        if (*(char *)((long)puVar27 + (10 - (long)puVar30)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar27 + (lVar15 - (long)puVar30);
        if (lVar15 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar30));
        *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
        pcVar22 = (char *)0x0;
        if (uVar20 == 0) goto LAB_01f01348;
        piVar23 = (int *)(lVar15 + 4);
        while (piVar23[-1] != -0x71543da9) {
          piVar23 = piVar23 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            pcVar22 = (char *)0x0;
            goto LAB_01f01348;
          }
        }
        iVar12 = 0;
        if (*piVar23 != -1) {
          iVar12 = *piVar23;
        }
        *(int *)(puVar9 + 0x9c) = iVar12;
      } while (*puVar27 != 0);
    }
    pcVar22 = (char *)0x0;
LAB_01f01348:
    puVar16 = PTR_s_cDefault_04bc1610;
    local_180 = PTR_DAT_04bb2020 + 0x10;
    local_178 = *(char **)PTR_PTR_04bc1908;
    if (pcVar22 != (char *)0x0) {
      local_178 = pcVar22;
    }
    uVar29 = 0;
    do {
      pcVar22 = "";
      if (uVar29 < 0x36) {
        pcVar22 = *(char **)(puVar16 + (ulong)uVar29 * 8 + 0x370);
      }
      (**(code **)(local_180 + 0x18))(&local_180);
      if (pcVar22 == local_178) {
LAB_01f0143c:
        local_184 = uVar29;
        break;
      }
      if (*pcVar22 == *local_178) {
        if (*pcVar22 == '\0') goto LAB_01f0143c;
        lVar15 = 0x7fffe;
        pcVar17 = local_178;
        while( true ) {
          if (pcVar22[1] != pcVar17[1]) break;
          if (pcVar22[1] == '\0') goto LAB_01f0143c;
          if (pcVar22[2] != pcVar17[2]) break;
          if (pcVar22[2] == '\0') goto LAB_01f0143c;
          if ((lVar15 == 0) || (cVar21 = pcVar22[3], cVar21 != pcVar17[3])) break;
          lVar15 = lVar15 + -3;
          pcVar17 = pcVar17 + 3;
          pcVar22 = pcVar22 + 3;
          if (cVar21 == '\0') goto LAB_01f0143c;
        }
      }
      uVar26 = 0x36;
      if ((int)uVar29 < 0x36) {
        uVar26 = uVar29 + 1;
      }
      uVar29 = uVar26;
    } while (uVar26 != 0x36);
    *(long *)(param_1 + 0x12820) = param_1;
    local_2c0 = 1;
    local_2c8 = CONCAT44(1,(undefined4)local_2c8);
    local_320 = (undefined **)(param_1 + 0x12818);
    *(undefined8 *)(param_1 + 0x12828) = PTR_LAB_04bc2188;
    *(undefined8 *)(param_1 + 0x12830) = 0;
    break;
  default:
    lVar15 = *(long *)(param_1 + 8);
    bVar24 = false;
LAB_01f01610:
    local_328 = (undefined8 *)CONCAT44(local_328._4_4_,*(undefined4 *)(lVar15 + 0x230));
    FUN_021e8490(&local_328,pfVar2,param_1 + 0x188,1,0);
    puVar16 = PTR_DAT_04bb27c8;
    uVar29 = (uint)*(ushort *)(param_1 + 0x18c);
    uVar5 = *(ushort *)(param_1 + 400);
    if (*(ushort *)(param_1 + 0x18c) <= uVar5) {
      uVar6 = *(ushort *)(param_1 + 0x192);
      if (*(ushort *)(param_1 + 0x18e) <= uVar6) {
        uVar26 = (uint)*(ushort *)(param_1 + 0x18e);
        if (bVar24) {
          do {
            uVar18 = uVar26;
            do {
              if (((((int)uVar29 < *(int *)(pcVar22 + 0x38)) ||
                   (*(int *)(pcVar22 + 0x48) < (int)uVar29)) ||
                  ((int)uVar18 < *(int *)(pcVar22 + 0x3c))) ||
                 (*(int *)(pcVar22 + 0x4c) < (int)uVar18)) {
                lVar15 = *(long *)(param_1 + 0x1c8);
                uVar8 = (uVar29 - *(ushort *)(param_1 + 0x188)) +
                        *(int *)(lVar15 + 0x1c) * (uVar18 - *(ushort *)(param_1 + 0x18a));
                uVar7 = 1 << (ulong)(uVar8 & 0x1f);
                uVar4 = *(uint *)(*(long *)(lVar15 + 0x10) + (long)((int)uVar8 >> 5) * 4);
                if ((uVar7 & uVar4) != 0) {
                  *(uint *)(*(long *)(lVar15 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
                       uVar4 & (uVar7 ^ 0xffffffff);
                  *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
                }
              }
              local_328 = (undefined8 *)CONCAT44(local_328._4_4_,(float)(int)uVar29 * 5.0 + 2.5);
              local_320 = (undefined **)CONCAT44(local_320._4_4_,(float)(int)uVar18 * 5.0 + 2.5);
              if (((*(long *)puVar16 == 0) ||
                  (lVar15 = *(long *)(*(long *)puVar16 + 0xa8), lVar15 == 0)) ||
                 (*(uint *)(lVar15 + 0x38) <= uVar29 || *(uint *)(lVar15 + 0x3c) <= uVar18)) {
LAB_01f01840:
                lVar15 = *(long *)(param_1 + 0x1c8);
                uVar8 = (uVar29 - *(ushort *)(param_1 + 0x188)) +
                        *(int *)(lVar15 + 0x1c) * (uVar18 - *(ushort *)(param_1 + 0x18a));
                uVar7 = 1 << (ulong)(uVar8 & 0x1f);
                uVar4 = *(uint *)(*(long *)(lVar15 + 0x10) + (long)((int)uVar8 >> 5) * 4);
                if ((uVar7 & uVar4) != 0) {
                  *(uint *)(*(long *)(lVar15 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
                       uVar4 & (uVar7 ^ 0xffffffff);
                  *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
                }
              }
              else {
                uVar4 = uVar29 + *(uint *)(lVar15 + 0x38) * uVar18;
                lVar31 = *(long *)(lVar15 + 0x70);
                if (*(uint *)(lVar15 + 0x68) <= uVar4 || lVar31 == 0) goto LAB_01f01840;
                uVar20 = (ulong)local_180 >> 0x20;
                local_180 = (undefined *)((ulong)local_180 & 0xffffffff00000000);
                if ((((*(uint *)(lVar31 + (long)(int)uVar4 * 4) & 1) == 0) ||
                    (local_180 = (undefined *)CONCAT44((int)uVar20,3),
                    (*(uint *)(lVar31 + (long)(int)uVar4 * 4) >> 3 & 1) != 0)) ||
                   (uVar20 = FUN_02b60610(&local_328), (uVar20 & 1) != 0)) goto LAB_01f01840;
              }
              uVar18 = uVar18 + 1;
            } while (uVar6 + 1 != uVar18);
            bVar10 = uVar29 != uVar5;
            uVar29 = uVar29 + 1;
          } while (bVar10);
        }
        else {
          uVar18 = uVar26;
          do {
            do {
              if (((((int)uVar29 < *(int *)(pcVar22 + 0x38)) ||
                   (*(int *)(pcVar22 + 0x48) < (int)uVar29)) ||
                  ((int)uVar18 < *(int *)(pcVar22 + 0x3c))) ||
                 (*(int *)(pcVar22 + 0x4c) < (int)uVar18)) {
                lVar15 = *(long *)(param_1 + 0x1c8);
                uVar8 = (uVar29 - *(ushort *)(param_1 + 0x188)) +
                        *(int *)(lVar15 + 0x1c) * (uVar18 - *(ushort *)(param_1 + 0x18a));
                uVar7 = 1 << (ulong)(uVar8 & 0x1f);
                uVar4 = *(uint *)(*(long *)(lVar15 + 0x10) + (long)((int)uVar8 >> 5) * 4);
                if ((uVar7 & uVar4) != 0) {
                  *(uint *)(*(long *)(lVar15 + 0x10) + ((long)((ulong)uVar8 << 0x20) >> 0x25) * 4) =
                       uVar4 & (uVar7 ^ 0xffffffff);
                  *(int *)(lVar15 + 0x18) = *(int *)(lVar15 + 0x18) + -1;
                }
              }
              uVar18 = uVar18 + 1;
            } while (uVar6 + 1 != uVar18);
            bVar10 = uVar29 != uVar5;
            uVar29 = uVar29 + 1;
            uVar18 = uVar26;
          } while (bVar10);
        }
      }
    }
    lVar31 = *(long *)(param_1 + 8);
    lVar15 = *(long *)(param_1 + 0x1c8);
    uVar26 = *(uint *)(lVar15 + 0x18);
    uVar29 = *(uint *)(lVar31 + 0x288);
    *(undefined4 *)(lVar31 + 0x288) = *(undefined4 *)(lVar31 + 0x28c);
    uVar29 = uVar29 ^ uVar29 << 0xb;
    *(undefined4 *)(lVar31 + 0x28c) = *(undefined4 *)(lVar31 + 0x290);
    uVar18 = *(uint *)(lVar31 + 0x294);
    *(uint *)(lVar31 + 0x290) = uVar18;
    uVar29 = uVar29 >> 8 ^ uVar18 >> 0x13 ^ uVar29 ^ uVar18;
    *(uint *)(lVar31 + 0x294) = uVar29;
    if (0 < (int)*(uint *)(lVar15 + 8)) {
      uVar18 = 0;
      uVar20 = (ulong)uVar26 * (ulong)uVar29 >> 0x20;
      do {
        if ((*(uint *)(*(long *)(lVar15 + 0x10) + (ulong)(uVar18 >> 5) * 4) >>
             (ulong)(uVar18 & 0x1f) & 1) != 0) {
          if ((int)uVar20 == 0) {
            iVar12 = *(int *)(lVar15 + 0x1c);
            iVar13 = 0;
            if (iVar12 != 0) {
              iVar13 = (int)uVar18 / iVar12;
            }
            fVar37 = (float)(int)((uVar18 - iVar13 * iVar12) + (uint)*(ushort *)(param_1 + 0x188)) *
                     5.0 + 2.5;
            fVar36 = (float)(int)(iVar13 + (uint)*(ushort *)(param_1 + 0x18a)) * 5.0 + 2.5;
            if ((*puVar30 < 7) && ((1 << (ulong)(*puVar30 & 0x1f) & 0x66U) != 0)) {
              iVar12 = FUN_006f0400(*(float *)(pcVar22 + 0x18) - fVar37,
                                    *(float *)(pcVar22 + 0x20) - fVar36);
              lVar15 = *(long *)(param_1 + 8);
              uVar29 = *(uint *)(lVar15 + 0x288);
              *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
              uVar29 = uVar29 ^ uVar29 << 0xb;
              *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
              uVar26 = *(uint *)(lVar15 + 0x294);
              *(uint *)(lVar15 + 0x290) = uVar26;
              uVar29 = uVar29 >> 8 ^ uVar26 >> 0x13 ^ uVar29 ^ uVar26;
              *(uint *)(lVar15 + 0x294) = uVar29;
              iVar12 = iVar12 + (int)(long)((float)((int)((ulong)uVar29 * 0x1f >> 0x20) + -0xf) *
                                           11930465.0);
              pcVar22 = PTR_DAT_04bc1560;
              puVar25 = (undefined8 *)PTR_DAT_04bc1568;
            }
            else {
              lVar15 = *(long *)(param_1 + 8);
              uVar29 = *(uint *)(lVar15 + 0x288);
              *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
              uVar29 = uVar29 ^ uVar29 << 0xb;
              *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
              uVar26 = *(uint *)(lVar15 + 0x294);
              *(uint *)(lVar15 + 0x290) = uVar26;
              uVar29 = uVar29 >> 8 ^ uVar26 >> 0x13 ^ uVar29 ^ uVar26;
              *(uint *)(lVar15 + 0x294) = uVar29;
              iVar12 = (int)(long)((float)((int)((ulong)uVar29 * 0x1f >> 0x20) + -0xf) * 11930465.0)
              ;
              pcVar22 = PTR_DAT_04bc1560;
              puVar25 = (undefined8 *)PTR_DAT_04bc1568;
            }
            PTR_DAT_04bc1560 = pcVar22;
            PTR_DAT_04bc1568 = (undefined *)puVar25;
            if (bVar24) goto LAB_01f011e8;
            if (*puVar27 == 0) goto LAB_01f01a44;
            cVar21 = *pcVar22;
            goto LAB_01f01998;
          }
          uVar20 = (ulong)((int)uVar20 - 1);
        }
        uVar18 = uVar18 + 1;
      } while (*(uint *)(lVar15 + 8) != uVar18);
    }
LAB_01f022bc:
    uVar14 = 0;
    goto switchD_01f01170_caseD_a;
  case 4:
    psVar28 = (short *)(pcVar22 + 0x50);
    if (*psVar28 != -2) {
      local_320 = (undefined **)((ulong)local_320._4_4_ << 0x20);
      lVar15 = *(long *)PTR_DAT_04bb2720;
      if (lVar15 == 0) {
        puVar25 = &DAT_055c04a0;
      }
      else {
        puVar25 = &DAT_055c04a0;
        if (*(long *)(lVar15 + 0x330) != 0) {
          puVar25 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
          iVar12 = FUN_006bd550(*puVar25,0);
          puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar25 = &DAT_055c04a0;
          }
        }
      }
      local_320 = (undefined **)CONCAT44(*(undefined4 *)(puVar25 + 7),(undefined4)local_320);
      uVar11 = FUN_017baf44();
      local_318 = (undefined *)(CONCAT71(local_318._1_7_,uVar11) & 0xffffffffffffff01);
      local_328 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
      uVar14 = FUN_01a5190c(&local_328,1,pcVar22 + 0x60,0);
      uVar20 = FUN_0277d7b4(uVar14,psVar28);
      if ((uVar20 & 1) == 0) {
        uVar14 = FUN_01a5190c(&local_328,0,pcVar22 + 0x60,0);
        uVar20 = FUN_0277d7b4(uVar14,psVar28);
        if ((uVar20 & 1) == 0) goto LAB_01f022bc;
      }
    }
    puVar9 = PTR_DAT_04bb2018;
    puVar16 = PTR_DAT_04bb2010;
    fVar36 = *(float *)(lVar31 + 0x278) + 2.5;
    fVar37 = *(float *)(lVar31 + 0x280) + 2.5;
    local_d8 = PTR_DAT_04bbc5d8 + 0x10;
    local_d0 = PTR_DAT_04bb2018 + 0x10;
    fVar36 = (float)((int)((float)(int)fVar36 / 5.0) - (uint)(fVar36 < 0.0) & 0xffff) * 5.0 + -55.0;
    fVar37 = (float)((int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0) & 0xffff) * 5.0 + -55.0;
    local_c8 = (int)((float)(int)fVar36 / 10.0) - (uint)(fVar36 < 0.0);
    uStack_c4 = (int)((float)(int)fVar37 / 10.0) - (uint)(fVar37 < 0.0);
    local_b8 = local_c8 + 0xb;
    local_b4 = uStack_c4 + 0xb;
    local_e8 = PTR_DAT_04bb2010 + 0x10;
    local_e0 = 0;
    local_f0 = 0xfffe;
    local_c0 = local_d0;
    FUN_0277d4ac(&local_f0);
    lVar15 = *(long *)(param_1 + 8);
    if (*(int *)(lVar15 + 0x750) == 2) {
LAB_01f02140:
      bVar24 = true;
      fVar39 = *(float *)(lVar31 + 0x278);
      fVar36 = *(float *)(lVar31 + 0x27c);
      fVar38 = *(float *)(lVar31 + 0x280);
      iVar13 = *(int *)(*(long *)(lVar15 + 0x68) + 0x2b4);
    }
    else {
      if ((*(int *)(lVar15 + 0x178) == 0) && (*(char *)(param_1 + 0xad5d) < '\0')) {
        uVar20 = FUN_021dd780();
        if ((uVar20 & 1) == 0) {
          lVar15 = *(long *)(param_1 + 8);
        }
        else {
          local_320 = (undefined **)(puVar16 + 0x10);
          local_318 = (undefined *)CONCAT44(*(int *)(pcVar22 + 0x6c),*(int *)(pcVar22 + 0x68) + 2);
          local_308 = CONCAT44(*(int *)(pcVar22 + 0x6c) + 3,*(int *)(pcVar22 + 0x68) + 7);
          local_328 = (undefined8 *)(PTR_DAT_04bbc1a0 + 0x10);
          local_310 = local_320;
          uVar20 = FUN_012e2100(&local_328,pfVar2);
          lVar15 = *(long *)(param_1 + 8);
          if ((uVar20 & 1) != 0) goto LAB_01f02140;
        }
      }
      local_328 = (undefined8 *)CONCAT44(local_328._4_4_,*(undefined4 *)(lVar15 + 0x230));
      FUN_021e8490(&local_328,pfVar2,param_1 + 0x188,1,0);
      iVar12 = local_c8;
      local_318 = puVar9 + 0x10;
      uVar29 = local_b4 + 1;
      local_310 = (undefined **)CONCAT44(uStack_c4,local_c8);
      local_328 = &local_d0;
      local_320 = &local_c0;
      if (uVar29 == uStack_c4) {
        iVar13 = 0;
        fVar39 = 0.0;
        fVar36 = 0.0;
        fVar38 = 0.0;
      }
      else {
        fVar38 = 0.0;
        fVar37 = 3.4028235e+38;
        fVar36 = 0.0;
        fVar39 = 0.0;
        iVar13 = 0;
        puVar16 = PTR_DAT_04bb3140 + 0x10;
        do {
          local_f4 = 0;
          uVar20 = FUN_021e7590(&local_318,pfVar2,&local_338,&local_f4,1);
          iVar1 = local_f4;
          if ((uVar20 & 1) != 0) {
            fVar32 = (float)local_338;
            fVar35 = *(float *)(lVar31 + 0x278) - (float)local_338;
            fVar34 = local_330._0_4_;
            fVar33 = *(float *)(lVar31 + 0x280) - local_330._0_4_;
            fVar35 = fVar33 * fVar33 + fVar35 * fVar35;
            if (fVar35 < fVar37) {
              local_178 = (char *)((ulong)local_178 & 0xffffffff00000000);
              fVar36 = local_338._4_4_;
              fVar38 = (float)(int)local_310._4_4_ * 10.0 + 2.5;
              fVar37 = (float)(int)local_310 * 10.0 + 2.5;
              local_e0 = CONCAT44((int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0),
                                  (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0));
              lVar15 = *(long *)PTR_DAT_04bb2720;
              if ((lVar15 == 0) || (*(long *)(lVar15 + 0x330) == 0)) {
                puVar25 = &DAT_055c04a0;
              }
              else {
                puVar25 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
                iVar13 = FUN_006bd550(*puVar25,0);
                puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar13 != 0x758f7eaf) {
                  puVar25 = &DAT_055c04a0;
                }
              }
              local_178 = (char *)CONCAT44(*(undefined4 *)(puVar25 + 7),(undefined4)local_178);
              uVar11 = FUN_017baf44();
              local_170 = CONCAT71(local_170._1_7_,uVar11) & 0xffffffffffffff01;
              local_180 = puVar16;
              puVar25 = (undefined8 *)FUN_01a5010c(&local_180,0,&local_e8);
              local_f0 = *puVar25;
              FUN_02201b50(&local_f0);
              iVar13 = iVar1;
              fVar37 = fVar35;
              fVar38 = fVar34;
              fVar39 = fVar32;
            }
          }
          if ((int)local_310 < *(int *)(local_320 + 1)) {
            iVar1 = (int)local_310 + 1;
            uVar26 = local_310._4_4_;
          }
          else {
            uVar26 = local_310._4_4_ + 1;
            iVar1 = *(int *)(local_328 + 1);
            local_310 = (undefined **)((ulong)uVar26 << 0x20);
          }
          local_310 = (undefined **)CONCAT44(local_310._4_4_,iVar1);
        } while (iVar12 != iVar1 || uVar29 != uVar26);
      }
      bVar24 = false;
      puVar16 = PTR_DAT_04bb2010;
    }
    if (((fVar39 == 0.0) && (fVar36 == 0.0)) && (fVar38 == 0.0)) goto LAB_01f022bc;
    uStack_168 = *(undefined8 *)(pcVar22 + 0x18);
    local_100 = pcVar22[0x80];
    local_160 = *(undefined4 *)(pcVar22 + 0x20);
    local_130 = (undefined2)local_f0;
    local_150 = puVar16 + 0x10;
    local_12e = local_f0._2_1_;
    fVar37 = (float)(int)local_e0 * 5.0 + 5.0;
    fVar32 = (float)local_e0._4_4_ * 5.0 + 5.0;
    local_12d = local_f0._3_1_;
    fVar35 = fVar37 + -12.5;
    fVar34 = fVar32 + -12.5;
    local_12c = local_f0._4_4_;
    local_118 = (int)local_e0;
    local_114 = local_e0._4_4_;
    local_108 = (int)local_e0 + 1;
    local_104 = local_e0._4_4_ + 1;
    local_180 = PTR_DAT_04bc1968 + 0x10;
    local_178._0_4_ = (undefined4)*(undefined8 *)puVar30;
    local_178 = (char *)CONCAT44(fVar37,(undefined4)local_178);
    local_170 = (ulong)(uint)fVar32 << 0x20;
    local_158 = PTR_DAT_04bbc1a0 + 0x10;
    local_148 = (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0);
    local_138 = local_148 + 5;
    local_144 = (int)((float)(int)fVar34 / 5.0) - (uint)(fVar34 < 0.0);
    local_134 = local_144 + 5;
    local_140 = local_150;
    local_128 = local_158;
    local_120 = local_150;
    local_110 = local_150;
    FUN_021dd4e0(&local_180,*(undefined8 *)(param_1 + 8));
    if (!bVar24) {
      lVar15 = *(long *)(param_1 + 8);
      uVar29 = *(uint *)(lVar15 + 0x288);
      *(undefined4 *)(lVar15 + 0x288) = *(undefined4 *)(lVar15 + 0x28c);
      uVar29 = uVar29 ^ uVar29 << 0xb;
      *(undefined4 *)(lVar15 + 0x28c) = *(undefined4 *)(lVar15 + 0x290);
      uVar26 = *(uint *)(lVar15 + 0x294);
      *(uint *)(lVar15 + 0x290) = uVar26;
      uVar29 = uVar29 >> 8 ^ uVar26 >> 0x13 ^ uVar29 ^ uVar26;
      *(uint *)(lVar15 + 0x294) = uVar29;
      iVar13 = iVar13 + (int)(long)((((float)(uVar29 >> 9 | 0x3f800000) + -1.0) * 90.0 + -45.0) *
                                   11930465.0);
    }
    FUN_01e63f1c(&local_328);
    local_328._0_4_ = 0x16;
    local_2d0 = 1;
    local_2c8 = 0x100000002;
    local_2bf = 1;
    local_300 = fVar39;
    local_2fc = fVar36;
    local_2f8 = fVar38;
    local_2e4 = iVar13;
    if (*piVar3 < *(int *)(param_1 + 0xaf54)) {
      FUN_021920b0(piVar3,&local_328);
    }
    FUN_01e63f1c(&local_328);
    puVar9 = PTR_DAT_04bc1568;
    puVar16 = PTR_DAT_04bc1560;
    local_328 = (undefined8 *)CONCAT44(local_328._4_4_,1);
    local_24c = local_b0;
    local_248 = uStack_ac;
    if (*puVar27 != 0) {
      cVar21 = *PTR_DAT_04bc1560;
      do {
        if (cVar21 == '\0') {
          cVar21 = '\x01';
          *(undefined8 *)puVar9 = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
          *puVar16 = 1;
          *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
          *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
        }
        else {
          uVar29 = *(uint *)(puVar9 + 0x9c);
          if (-1 < (int)uVar29) {
            pcVar22 = (char *)((ulong)uVar29 + (long)puVar27);
            goto LAB_01f025b8;
          }
          if (uVar29 != 0xffffffff) break;
        }
        puVar30 = (uint *)(ulong)*puVar27;
        pcVar22 = (char *)0x0;
        if ((*puVar27 == 0) || (puVar27 == puVar30)) goto LAB_01f025b8;
        lVar15 = 0xc;
        if (*(char *)((long)puVar27 + (10 - (long)puVar30)) != '\0') {
          lVar15 = 0x1c;
        }
        lVar15 = (long)puVar27 + (lVar15 - (long)puVar30);
        if (lVar15 == 0) break;
        uVar20 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar30));
        *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
        pcVar22 = (char *)0x0;
        if (uVar20 == 0) goto LAB_01f025b8;
        piVar23 = (int *)(lVar15 + 4);
        while (piVar23[-1] != -0x71543da9) {
          piVar23 = piVar23 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            pcVar22 = (char *)0x0;
            goto LAB_01f025b8;
          }
        }
        iVar12 = 0;
        if (*piVar23 != -1) {
          iVar12 = *piVar23;
        }
        *(int *)(puVar9 + 0x9c) = iVar12;
      } while (*puVar27 != 0);
    }
    pcVar22 = (char *)0x0;
LAB_01f025b8:
    puVar16 = PTR_s_cDefault_04bc1610;
    local_338 = PTR_DAT_04bb2020 + 0x10;
    local_330 = *(char **)PTR_PTR_04bc1908;
    if (pcVar22 != (char *)0x0) {
      local_330 = pcVar22;
    }
    uVar29 = 0;
    do {
      pcVar22 = "";
      if (uVar29 < 0x36) {
        pcVar22 = *(char **)(puVar16 + (ulong)uVar29 * 8 + 0x370);
      }
      (**(code **)(local_338 + 0x18))(&local_338);
      if (pcVar22 == local_330) {
LAB_01f026ac:
        local_184 = uVar29;
        break;
      }
      if (*pcVar22 == *local_330) {
        if (*pcVar22 == '\0') goto LAB_01f026ac;
        lVar15 = 0x7fffe;
        pcVar17 = local_330;
        while( true ) {
          if (pcVar22[1] != pcVar17[1]) break;
          if (pcVar22[1] == '\0') goto LAB_01f026ac;
          if (pcVar22[2] != pcVar17[2]) break;
          if (pcVar22[2] == '\0') goto LAB_01f026ac;
          if ((lVar15 == 0) || (cVar21 = pcVar22[3], cVar21 != pcVar17[3])) break;
          lVar15 = lVar15 + -3;
          pcVar17 = pcVar17 + 3;
          pcVar22 = pcVar22 + 3;
          if (cVar21 == '\0') goto LAB_01f026ac;
        }
      }
      uVar26 = 0x36;
      if ((int)uVar29 < 0x36) {
        uVar26 = uVar29 + 1;
      }
      uVar29 = uVar26;
    } while (uVar26 != 0x36);
    local_2c0 = 1;
    local_2c8 = CONCAT44(1,(undefined4)local_2c8);
    break;
  case 9:
    local_320 = (undefined **)((ulong)local_320._4_4_ << 0x20);
    lVar15 = *(long *)PTR_DAT_04bb2720;
    if (lVar15 == 0) {
      puVar25 = &DAT_055c04a0;
    }
    else {
      puVar25 = &DAT_055c04a0;
      if (*(long *)(lVar15 + 0x330) != 0) {
        puVar25 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
        iVar12 = FUN_006bd550(*puVar25,0);
        puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar25 = &DAT_055c04a0;
        }
      }
    }
    local_320 = (undefined **)CONCAT44(*(undefined4 *)(puVar25 + 7),(undefined4)local_320);
    uVar11 = FUN_017baf44();
    local_318 = (undefined *)(CONCAT71(local_318._1_7_,uVar11) & 0xffffffffffffff01);
    pcVar17 = pcVar22 + 0x50;
    local_328 = (undefined8 *)(PTR_DAT_04bb3140 + 0x10);
    uVar14 = FUN_01a5190c(&local_328,1,pcVar22 + 0x60,0);
    uVar20 = FUN_0277d7b4(uVar14,pcVar17);
    if ((uVar20 & 1) == 0) {
      uVar14 = FUN_01a5190c(&local_328,0,pcVar22 + 0x60,0);
      uVar20 = FUN_0277d7b4(uVar14,pcVar17);
      if ((uVar20 & 1) == 0) goto LAB_01f022bc;
    }
    local_d0 = (undefined *)((ulong)local_d0._4_4_ << 0x20);
    local_d8 = (undefined *)0x0;
    local_e8 = (undefined *)((ulong)local_e8 & 0xffffffffffffff00);
    if (((*(int *)(*(long *)(param_1 + 8) + 0x750) != 1) ||
        (*pfVar2 < (float)*(int *)(pcVar22 + 0x68) * 5.0)) ||
       (((float)*(int *)(pcVar22 + 0x78) * 5.0 + 5.0 <= *pfVar2 ||
        ((*(float *)(lVar31 + 0x280) < (float)*(int *)(pcVar22 + 0x6c) * 5.0 ||
         ((float)*(int *)(pcVar22 + 0x7c) * 5.0 + 5.0 <= *(float *)(lVar31 + 0x280))))))) {
      local_328._0_4_ = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
      FUN_021e8490(&local_328,pfVar2,param_1 + 0x188,1,0);
      uVar20 = FUN_021f2630(pcVar17,pcVar22 + 0x58,pfVar2,param_1 + 0x188,&local_d8,&local_e8,0);
      if ((uVar20 & 1) == 0) goto LAB_01f022bc;
      FUN_01e63f1c(&local_328);
      puVar16 = PTR_LAB_04bc2180;
      local_278 = *(undefined2 *)(pcVar22 + 0x50);
      local_308 = param_1 + 0x12878;
      local_276 = pcVar22[0x52];
      local_275 = pcVar22[0x53];
      local_274 = *(undefined4 *)(pcVar22 + 0x54);
      local_2c8 = CONCAT44(1,(undefined4)local_2c8);
      local_2a0 = *(undefined4 *)(pcVar22 + 0x68);
      local_2bf = 1;
      local_328 = (undefined8 *)CONCAT44(local_328._4_4_,0x14);
      local_29c = *(undefined4 *)(pcVar22 + 0x6c);
      local_318 = (undefined *)(param_1 + 0x12838);
      local_290 = *(undefined4 *)(pcVar22 + 0x78);
      local_28c = *(undefined4 *)(pcVar22 + 0x7c);
      local_250 = local_e8._0_1_;
      *(long *)(param_1 + 0x12880) = param_1;
      *(undefined1 **)(param_1 + 0x12888) = &LAB_01f02a30;
      *(undefined8 *)(param_1 + 0x12890) = 0;
      *(undefined8 *)(param_1 + 0x12850) = 0;
      local_288 = (undefined4)local_d8;
      uStack_284 = local_d8._4_4_;
      *(long *)(param_1 + 0x12840) = param_1;
      *(undefined **)(param_1 + 0x12848) = puVar16;
      local_280 = (undefined4)local_d0;
    }
    else {
      FUN_01e63f1c(&local_328);
      local_328 = (undefined8 *)CONCAT44(local_328._4_4_,1);
      local_24c = local_b0;
      local_248 = uStack_ac;
      pcVar22 = (char *)FUN_01e27050(puVar27,0x27,0x8eabc257,*(undefined8 *)PTR_DAT_04bc1900);
      local_178 = *(char **)PTR_PTR_04bc1908;
      if (pcVar22 != (char *)0x0) {
        local_178 = pcVar22;
      }
      local_180 = PTR_DAT_04bb2020 + 0x10;
      FUN_01e733c0(&local_184,&local_180);
      puVar16 = PTR_LAB_04bc2188;
      local_2c0 = 1;
      local_320 = (undefined **)(param_1 + 0x12818);
      *(long *)(param_1 + 0x12820) = param_1;
      local_2c8 = CONCAT44(1,(undefined4)local_2c8);
      *(undefined8 *)(param_1 + 0x12828) = puVar16;
      *(undefined8 *)(param_1 + 0x12830) = 0;
    }
    break;
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
    goto switchD_01f01170_caseD_a;
  }
  goto LAB_01f026bc;
LAB_01f01998:
  if (cVar21 == '\0') {
    cVar21 = '\x01';
    *puVar25 = 0xffffffffffffffff;
    puVar25[1] = 0xffffffffffffffff;
    *pcVar22 = '\x01';
    puVar25[2] = 0xffffffffffffffff;
    puVar25[3] = 0xffffffffffffffff;
    puVar25[4] = 0xffffffffffffffff;
    puVar25[5] = 0xffffffffffffffff;
    puVar25[6] = 0xffffffffffffffff;
    puVar25[7] = 0xffffffffffffffff;
    puVar25[8] = 0xffffffffffffffff;
    puVar25[9] = 0xffffffffffffffff;
    puVar25[10] = 0xffffffffffffffff;
    puVar25[0xb] = 0xffffffffffffffff;
    puVar25[0xc] = 0xffffffffffffffff;
    puVar25[0xd] = 0xffffffffffffffff;
    puVar25[0xe] = 0xffffffffffffffff;
    puVar25[0xf] = 0xffffffffffffffff;
    puVar25[0x10] = 0xffffffffffffffff;
    puVar25[0x11] = 0xffffffffffffffff;
    puVar25[0x12] = 0xffffffffffffffff;
    puVar25[0x13] = 0xffffffffffffffff;
  }
  else if (*(int *)((long)puVar25 + 0xc) != -1) goto LAB_01f01a44;
  lVar15 = (long)puVar27 - (ulong)*puVar27;
  if ((*puVar27 == 0) || (lVar15 == 0)) goto LAB_01f01a44;
  lVar31 = 0xc;
  if (*(char *)(lVar15 + 10) != '\0') {
    lVar31 = 0x1c;
  }
  if (lVar31 + lVar15 == 0) goto LAB_01f01a44;
  uVar20 = (ulong)*(ushort *)(lVar15 + 8);
  *(undefined4 *)((long)puVar25 + 0xc) = 0xfffffffe;
  if (uVar20 == 0) goto LAB_01f01a44;
  piVar23 = (int *)(lVar31 + lVar15 + 4);
  while (piVar23[-1] != 0x40876b17) {
    piVar23 = piVar23 + 2;
    uVar20 = uVar20 - 1;
    if (uVar20 == 0) goto LAB_01f01a44;
  }
  iVar13 = 0;
  if (*piVar23 != -1) {
    iVar13 = *piVar23;
  }
  *(int *)((long)puVar25 + 0xc) = iVar13;
  if (*puVar27 == 0) goto LAB_01f01a44;
  goto LAB_01f01998;
LAB_01f01a44:
  FUN_01e63f1c(&local_328);
  puVar9 = PTR_DAT_04bc1568;
  puVar16 = PTR_DAT_04bc1560;
  local_328 = (undefined8 *)CONCAT44(local_328._4_4_,1);
  local_24c = local_b0;
  local_248 = uStack_ac;
  if (*puVar27 != 0) {
    cVar21 = *PTR_DAT_04bc1560;
    do {
      if (cVar21 == '\0') {
        cVar21 = '\x01';
        *(undefined8 *)puVar9 = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
        *puVar16 = 1;
        *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x50) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x58) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x60) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x68) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x70) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x78) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x80) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x88) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x90) = 0xffffffffffffffff;
        *(undefined8 *)(puVar9 + 0x98) = 0xffffffffffffffff;
      }
      else {
        uVar29 = *(uint *)(puVar9 + 0x9c);
        if (-1 < (int)uVar29) {
          pcVar22 = (char *)((ulong)uVar29 + (long)puVar27);
          goto LAB_01f01b58;
        }
        if (uVar29 != 0xffffffff) break;
      }
      puVar30 = (uint *)(ulong)*puVar27;
      pcVar22 = (char *)0x0;
      if ((*puVar27 == 0) || (puVar27 == puVar30)) goto LAB_01f01b58;
      lVar15 = 0xc;
      if (*(char *)((long)puVar27 + (10 - (long)puVar30)) != '\0') {
        lVar15 = 0x1c;
      }
      lVar15 = (long)puVar27 + (lVar15 - (long)puVar30);
      if (lVar15 == 0) break;
      uVar20 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar30));
      *(undefined4 *)(puVar9 + 0x9c) = 0xfffffffe;
      pcVar22 = (char *)0x0;
      if (uVar20 == 0) goto LAB_01f01b58;
      piVar23 = (int *)(lVar15 + 4);
      while (piVar23[-1] != -0x71543da9) {
        piVar23 = piVar23 + 2;
        uVar20 = uVar20 - 1;
        if (uVar20 == 0) {
          pcVar22 = (char *)0x0;
          goto LAB_01f01b58;
        }
      }
      iVar13 = 0;
      if (*piVar23 != -1) {
        iVar13 = *piVar23;
      }
      *(int *)(puVar9 + 0x9c) = iVar13;
    } while (*puVar27 != 0);
  }
  pcVar22 = (char *)0x0;
LAB_01f01b58:
  puVar16 = PTR_s_cDefault_04bc1610;
  local_180 = PTR_DAT_04bb2020 + 0x10;
  local_178 = *(char **)PTR_PTR_04bc1908;
  if (pcVar22 != (char *)0x0) {
    local_178 = pcVar22;
  }
  uVar29 = 0;
  do {
    pcVar22 = "";
    if (uVar29 < 0x36) {
      pcVar22 = *(char **)(puVar16 + (ulong)uVar29 * 8 + 0x370);
    }
    (**(code **)(local_180 + 0x18))(&local_180);
    if (pcVar22 == local_178) {
LAB_01f01c4c:
      local_184 = uVar29;
      break;
    }
    if (*pcVar22 == *local_178) {
      if (*pcVar22 == '\0') goto LAB_01f01c4c;
      lVar15 = 0x7fffe;
      pcVar17 = local_178;
      while( true ) {
        if (pcVar22[1] != pcVar17[1]) break;
        if (pcVar22[1] == '\0') goto LAB_01f01c4c;
        if (pcVar22[2] != pcVar17[2]) break;
        if (pcVar22[2] == '\0') goto LAB_01f01c4c;
        if ((lVar15 == 0) || (cVar21 = pcVar22[3], cVar21 != pcVar17[3])) break;
        lVar15 = lVar15 + -3;
        pcVar17 = pcVar17 + 3;
        pcVar22 = pcVar22 + 3;
        if (cVar21 == '\0') goto LAB_01f01c4c;
      }
    }
    uVar26 = 0x36;
    if ((int)uVar29 < 0x36) {
      uVar26 = uVar29 + 1;
    }
    uVar29 = uVar26;
  } while (uVar26 != 0x36);
  local_2fc = 0.0;
  local_2d0 = 1;
  local_2c8 = 0x100000002;
  local_300 = fVar37;
  local_2f8 = fVar36;
  local_2e4 = iVar12;
LAB_01f026bc:
  if (*piVar3 < *(int *)(param_1 + 0xaf54)) {
    FUN_021920b0(piVar3,&local_328);
  }
  uVar14 = 1;
switchD_01f01170_caseD_a:
  return uVar14;
}

