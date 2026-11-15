
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_022170a0(long param_1)

{
  undefined2 *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined *puVar4;
  undefined1 uVar5;
  ushort uVar6;
  undefined2 uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  long lVar19;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  undefined1 auStack_1d8 [8];
  undefined2 local_1d0;
  undefined1 local_1ce;
  undefined **local_1c8;
  undefined1 *puStack_1c0;
  undefined4 local_1b8;
  undefined1 local_1b4 [7];
  undefined1 local_1ad;
  uint local_1a8 [36];
  undefined8 local_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  undefined2 local_78;
  undefined1 local_76;
  uint local_74;
  
  local_90 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  local_118 = 0;
  local_1a8[0x22] = 0;
  local_1a8[0] = 0;
  local_1a8[1] = 0;
  local_b0 = 0;
  uStack_a8 = 0;
  local_c0 = 0;
  uStack_b8 = 0;
  local_d0 = 0;
  uStack_c8 = 0;
  local_e0 = 0;
  uStack_d8 = 0;
  local_f0 = 0;
  uStack_e8 = 0;
  local_100 = 0;
  uStack_f8 = 0;
  local_110 = 0;
  uStack_108 = 0;
  local_1a8[0x1e] = 0;
  local_1a8[0x1f] = 0;
  local_1a8[0x20] = 0;
  local_1a8[0x21] = 0;
  local_1a8[0x1a] = 0;
  local_1a8[0x1b] = 0;
  local_1a8[0x1c] = 0;
  local_1a8[0x1d] = 0;
  local_1a8[0x16] = 0;
  local_1a8[0x17] = 0;
  local_1a8[0x18] = 0;
  local_1a8[0x19] = 0;
  local_1a8[0x12] = 0;
  local_1a8[0x13] = 0;
  local_1a8[0x14] = 0;
  local_1a8[0x15] = 0;
  local_1a8[0xe] = 0;
  local_1a8[0xf] = 0;
  local_1a8[0x10] = 0;
  local_1a8[0x11] = 0;
  local_1a8[10] = 0;
  local_1a8[0xb] = 0;
  local_1a8[0xc] = 0;
  local_1a8[0xd] = 0;
  local_1a8[6] = 0;
  local_1a8[7] = 0;
  local_1a8[8] = 0;
  local_1a8[9] = 0;
  local_1a8[2] = 0;
  local_1a8[3] = 0;
  local_1a8[4] = 0;
  local_1a8[5] = 0;
  FUN_0376c3f0(&local_118,local_1a8,0,0);
  uVar13 = 0;
  do {
    local_74 = uVar13;
    uVar12 = (ulong)uVar13;
    if (0x22 < uVar13) {
      uVar12 = 0;
    }
    uVar10 = local_1a8[uVar12] - (local_1a8[uVar12] >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
    uVar12 = (ulong)uVar13;
    if (0x22 < uVar13) {
      uVar12 = 0;
    }
    if (uVar10 != 0) {
      uVar20 = 0;
      iVar16 = 2;
      uVar2 = local_1a8[uVar12];
      uVar11 = uVar2 - (uVar2 >> 1 & 0x55555555);
      uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
      uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
      uVar11 = uVar11 + (uVar11 >> 8);
      do {
        if (uVar20 < (uVar11 + (uVar11 >> 0x10) & 0x3f)) {
          uVar17 = 0xffffffff;
          if (uVar2 != 0) {
            iVar14 = iVar16;
            uVar17 = uVar2;
            do {
              iVar14 = iVar14 + -1;
              if (iVar14 < 2) {
                uVar17 = uVar17 - 1 & (uVar17 ^ 0xffffffff);
                uVar17 = uVar17 - (uVar17 >> 1 & 0x55555555);
                uVar17 = (uVar17 >> 2 & 0x33333333) + (uVar17 & 0x33333333);
                uVar17 = uVar17 + (uVar17 >> 4) & 0xf0f0f0f;
                uVar17 = uVar17 + (uVar17 >> 8);
                uVar17 = uVar17 + (uVar17 >> 0x10) & 0x3f;
                goto LAB_022172a8;
              }
              uVar17 = uVar17 - 1 & uVar17;
            } while (uVar17 != 0);
            goto LAB_02217268;
          }
        }
        else {
LAB_02217268:
          uVar17 = 0xffffffff;
        }
LAB_022172a8:
        local_78 = 0x23;
        local_76 = 8;
        FUN_020fd218(&local_78,local_74,uVar17);
        uVar12 = (ulong)(byte)local_78;
        if (((uVar12 < 0x23) && (local_78._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar12])) &&
           (uVar8 = (uint)local_78._1_1_,
           ((uint)(&DAT_053e6eb8)[uVar12] >> (ulong)(uVar8 & 0x1f) & 1) != 0)) {
          local_1b8 = 8;
          local_1ad = 0;
          local_1b4[0] = 0;
          local_1c8 = &PTR_LAB_04908da0;
          puStack_1c0 = local_1b4;
          FUN_038d1270(&local_1c8,"-----");
          FUN_038d1270(&local_1c8,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar12 * 8 + 0xb0),
                       uVar8);
          FUN_0376baa0(&local_1c8);
          uVar6 = FUN_0376baa0(&local_1c8);
          if (uVar6 < 500) {
            uVar6 = *(ushort *)(DAT_05aba420 + (ulong)uVar6 * 2 + 0x620);
            if ((int)*(uint *)(DAT_05aba420 + 0x1c0) < 1) {
              if (((((*(long *)(DAT_05aba420 + 0xb0) != 0) &&
                    (puVar18 = *(uint **)(*(long *)(DAT_05aba420 + 0xb0) + 8),
                    puVar18 != (uint *)0x0)) &&
                   ((uVar8 = (uint)uVar6, *(uint *)(DAT_05aba420 + 200) <= uVar8 ||
                    (*(char *)(*(long *)(DAT_05aba420 + 0xd0) + (ulong)uVar8) != '\0')))) &&
                  ((uVar8 < *puVar18 && (puVar18[1] != 0)))) && ((ushort)puVar18[2] != 0)) {
                iVar14 = 0xc;
                if (*(char *)((long)puVar18 + 10) != '\0') {
                  iVar14 = 0x1c;
                }
                puVar18 = (uint *)((ulong)(puVar18[1] * uVar8 + (uint)(ushort)puVar18[2] * 8 +
                                          iVar14) + (long)puVar18);
                goto joined_r0x0221752c;
              }
            }
            else if ((uint)uVar6 < *(uint *)(DAT_05aba420 + 0x1c0)) {
              uVar8 = (uint)uVar6;
              if (*(uint *)(DAT_05aba420 + 0x1b0) <= uVar8) {
                uVar8 = 0;
              }
              puVar18 = *(uint **)(*(long *)(DAT_05aba420 + 0x1b8) + (ulong)uVar8 * 8);
joined_r0x0221752c:
              if (puVar18 != (uint *)0x0) {
                uVar8 = *puVar18;
                if (uVar8 != 0) {
                  cVar9 = DAT_053360b0;
                  do {
                    if (cVar9 == '\0') {
                      cVar9 = '\x01';
                      *PTR_DAT_04bc0670 = 1;
                      DAT_053360b4 = 0xffffffffffffffff;
                      DAT_053360bc = 0xffffffffffffffff;
                      DAT_053360c4 = 0xffffffffffffffff;
                      DAT_053360cc = 0xffffffffffffffff;
                      DAT_05336104 = 0xffffffff;
                      DAT_053360d4 = 0xffffffffffffffff;
                      DAT_053360dc = 0xffffffffffffffff;
                      DAT_053360e4 = 0xffffffffffffffff;
                      DAT_053360ec = 0xffffffffffffffff;
                      DAT_053360f4 = 0xffffffffffffffff;
                      _DAT_053360fc = 0xffffffffffffffff;
                      uVar8 = *puVar18;
                    }
                    else {
                      if (-1 < (int)DAT_053360b4) {
                        puVar1 = (undefined2 *)((DAT_053360b4 & 0xffffffff) + (long)puVar18);
                        if (puVar1 != (undefined2 *)0x0) {
                          uVar7 = *puVar1;
                          goto LAB_02217548;
                        }
                        break;
                      }
                      if ((int)DAT_053360b4 != -1) break;
                    }
                    puVar3 = (uint *)(ulong)uVar8;
                    uVar7 = 0xffff;
                    if ((puVar3 == (uint *)0x0) || (uVar7 = 0xffff, puVar18 == puVar3))
                    goto LAB_02217548;
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar18 + (10 - (long)puVar3)) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar18 + (lVar19 - (long)puVar3);
                    if (lVar19 == 0) goto LAB_02217548;
                    uVar12 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar3));
                    *(undefined4 *)PTR_DAT_04bc0678 = 0xfffffffe;
                    if (uVar12 == 0) goto LAB_02217548;
                    piVar15 = (int *)(lVar19 + 4);
                    while (piVar15[-1] != -0x62ea7268) {
                      piVar15 = piVar15 + 2;
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_02217544;
                    }
                    iVar14 = 0;
                    if (*piVar15 != -1) {
                      iVar14 = *piVar15;
                    }
                    *(int *)PTR_DAT_04bc0678 = iVar14;
                    uVar8 = *puVar18;
                    if (uVar8 == 0) break;
                  } while( true );
                }
LAB_02217544:
                uVar7 = 0xffff;
LAB_02217548:
                FUN_03751f30(&local_1d0,uVar7,0,1);
                uVar8 = *puVar18;
                if (uVar8 != 0) {
                  cVar9 = DAT_053360b0;
                  do {
                    if (cVar9 == '\0') {
                      cVar9 = '\x01';
                      *PTR_DAT_04bc0670 = 1;
                      DAT_053360b4 = 0xffffffffffffffff;
                      DAT_053360bc = 0xffffffffffffffff;
                      DAT_053360c4 = 0xffffffffffffffff;
                      DAT_053360cc = 0xffffffffffffffff;
                      DAT_05336104 = 0xffffffff;
                      DAT_053360d4 = 0xffffffffffffffff;
                      DAT_053360dc = 0xffffffffffffffff;
                      DAT_053360e4 = 0xffffffffffffffff;
                      DAT_053360ec = 0xffffffffffffffff;
                      DAT_053360f4 = 0xffffffffffffffff;
                      _DAT_053360fc = 0xffffffffffffffff;
                      uVar8 = *puVar18;
                    }
                    else {
                      if (-1 < (int)DAT_053360b4) {
                        puVar1 = (undefined2 *)((DAT_053360b4 & 0xffffffff) + (long)puVar18);
                        if (puVar1 != (undefined2 *)0x0) {
                          uVar7 = *puVar1;
                          goto LAB_02217678;
                        }
                        break;
                      }
                      if ((int)DAT_053360b4 != -1) break;
                    }
                    puVar3 = (uint *)(ulong)uVar8;
                    uVar7 = 0xffff;
                    if ((puVar3 == (uint *)0x0) || (uVar7 = 0xffff, puVar18 == puVar3))
                    goto LAB_02217678;
                    lVar19 = 0xc;
                    if (*(char *)((long)puVar18 + (10 - (long)puVar3)) != '\0') {
                      lVar19 = 0x1c;
                    }
                    lVar19 = (long)puVar18 + (lVar19 - (long)puVar3);
                    if (lVar19 == 0) goto LAB_02217678;
                    uVar12 = (ulong)*(ushort *)((long)puVar18 + (8 - (long)puVar3));
                    *(undefined4 *)PTR_DAT_04bc0678 = 0xfffffffe;
                    if (uVar12 == 0) goto LAB_02217678;
                    piVar15 = (int *)(lVar19 + 4);
                    while (piVar15[-1] != -0x62ea7268) {
                      piVar15 = piVar15 + 2;
                      uVar12 = uVar12 - 1;
                      if (uVar12 == 0) goto LAB_02217674;
                    }
                    iVar14 = 0;
                    if (*piVar15 != -1) {
                      iVar14 = *piVar15;
                    }
                    *(int *)PTR_DAT_04bc0678 = iVar14;
                    uVar8 = *puVar18;
                    if (uVar8 == 0) break;
                  } while( true );
                }
LAB_02217674:
                uVar7 = 0xffff;
LAB_02217678:
                FUN_03751f30(auStack_1d8,uVar7,1,1);
                puVar4 = PTR_DAT_04bb43c0;
                lVar21 = *(long *)PTR_DAT_04bb43c0;
                uVar8 = FUN_0277d6c4(&local_1d0);
                lVar19 = *(long *)puVar4;
                if (lVar19 == 0) {
LAB_022176d4:
                  uVar8 = FUN_0277d6c4(auStack_1d8);
                  if (DAT_053274a0 != 0) {
                    lVar19 = *(long *)(lVar19 + 0x57e58);
                    uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar19 + 0x1f8);
                    if ((uVar8 < *(uint *)(lVar19 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar19 + 0x1e0) + (long)(int)uVar8 * 8) != 0))
                    goto LAB_0221771c;
                  }
                }
                else {
                  lVar21 = *(long *)(lVar21 + 0x57e58);
                  uVar8 = (uVar8 & 0xffff) - (uint)*(ushort *)(lVar21 + 0x1f8);
                  if ((*(uint *)(lVar21 + 0x1d8) <= uVar8) ||
                     (*(long *)(*(long *)(lVar21 + 0x1e0) + (long)(int)uVar8 * 8) == 0))
                  goto LAB_022176d4;
LAB_0221771c:
                  uVar12 = (ulong)local_74;
                  if (uVar17 < 0x20) {
                    if (0x22 < local_74) {
                      uVar12 = 0;
                    }
                    local_1a8[uVar12] =
                         local_1a8[uVar12] & (1 << (ulong)(uVar17 & 0x1f) ^ 0xffffffffU);
                  }
                }
              }
            }
          }
        }
        uVar20 = uVar20 + 1;
        iVar16 = iVar16 + 1;
      } while (uVar20 != uVar10);
    }
    puVar4 = PTR_DAT_04bb39d8;
    uVar10 = 0x23;
    if ((int)uVar13 < 0x23) {
      uVar10 = uVar13 + 1;
    }
    uVar13 = uVar10;
  } while (uVar10 != 0x23);
  local_1d0 = 0x23;
  local_1ce = 8;
  fVar22 = -3.4028235e+38;
  uVar13 = 0;
  do {
    local_1c8 = (undefined **)CONCAT44(local_1c8._4_4_,uVar13);
    uVar12 = (ulong)uVar13;
    if (0x22 < uVar13) {
      uVar12 = 0;
    }
    uVar10 = local_1a8[uVar12] - (local_1a8[uVar12] >> 1 & 0x55555555);
    uVar10 = (uVar10 >> 2 & 0x33333333) + (uVar10 & 0x33333333);
    uVar10 = uVar10 + (uVar10 >> 4) & 0xf0f0f0f;
    uVar10 = uVar10 + (uVar10 >> 8);
    uVar10 = uVar10 + (uVar10 >> 0x10) & 0x3f;
    if (uVar10 != 0) {
      uVar20 = 0;
      fVar23 = fVar22;
      do {
        while( true ) {
          puVar18 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar4);
          uVar11 = *puVar18 ^ *puVar18 << 0xb;
          uVar2 = puVar18[3];
          *puVar18 = puVar18[1];
          puVar18[1] = puVar18[2];
          uVar11 = uVar11 >> 8 ^ uVar2 >> 0x13 ^ uVar11 ^ uVar2;
          puVar18[2] = uVar2;
          puVar18[3] = uVar11;
          fVar22 = (float)(uVar11 >> 9 | 0x3f800000) + -1.0;
          if (fVar22 <= fVar23) break;
          uVar12 = (ulong)local_1c8 & 0xffffffff;
          if (0x22 < (uint)local_1c8) {
            uVar12 = 0;
          }
          uVar11 = local_1a8[uVar12];
          if (uVar11 == 0) {
LAB_022178ac:
            uVar17 = 0xffffffff;
          }
          else {
            uVar17 = 0xffffffff;
            uVar2 = uVar11 - (uVar11 >> 1 & 0x55555555);
            uVar2 = (uVar2 >> 2 & 0x33333333) + (uVar2 & 0x33333333);
            uVar2 = uVar2 + (uVar2 >> 4) & 0xf0f0f0f;
            uVar2 = uVar2 + (uVar2 >> 8);
            if (uVar20 < (uVar2 + (uVar2 >> 0x10) & 0x3f)) {
              iVar16 = uVar20 + 2;
              do {
                iVar16 = iVar16 + -1;
                if (iVar16 < 2) {
                  uVar11 = uVar11 - 1 & (uVar11 ^ 0xffffffff);
                  uVar11 = uVar11 - (uVar11 >> 1 & 0x55555555);
                  uVar11 = (uVar11 >> 2 & 0x33333333) + (uVar11 & 0x33333333);
                  uVar11 = uVar11 + (uVar11 >> 4) & 0xf0f0f0f;
                  uVar11 = uVar11 + (uVar11 >> 8);
                  uVar17 = uVar11 + (uVar11 >> 0x10) & 0x3f;
                  goto LAB_022178e4;
                }
                uVar11 = uVar11 - 1 & uVar11;
              } while (uVar11 != 0);
              goto LAB_022178ac;
            }
          }
LAB_022178e4:
          uVar20 = uVar20 + 1;
          FUN_020fd218(&local_1d0,(ulong)local_1c8 & 0xffffffff,uVar17);
          fVar23 = fVar22;
          if (uVar20 == uVar10) goto LAB_02217788;
        }
        uVar20 = uVar20 + 1;
        fVar22 = fVar23;
      } while (uVar20 != uVar10);
    }
LAB_02217788:
    uVar10 = 0x23;
    if ((int)uVar13 < 0x23) {
      uVar10 = uVar13 + 1;
    }
    uVar13 = uVar10;
    if (uVar10 == 0x23) {
      uVar12 = (ulong)(byte)local_1d0;
      if (((uVar12 < 0x23) && (local_1d0._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar12])) &&
         (((uint)(&DAT_053e6eb8)[uVar12] >> (ulong)(local_1d0._1_1_ & 0x1f) & 1) != 0)) {
        *(byte *)(param_1 + 0x2d) = (byte)local_1d0;
        *(byte *)(param_1 + 0x2e) = local_1d0._1_1_;
        uVar5 = FUN_020fd7d8(&local_1d0);
        *(undefined1 *)(param_1 + 0x2f) = uVar5;
      }
      return;
    }
  } while( true );
}

