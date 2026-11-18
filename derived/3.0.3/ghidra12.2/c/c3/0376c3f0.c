
/* WARNING: Removing unreachable block (ram,0x0376cc9c) */
/* WARNING: Removing unreachable block (ram,0x0376d990) */

void FUN_0376c3f0(undefined **param_1,undefined8 *param_2,uint param_3,uint param_4)

{
  char *pcVar1;
  undefined **ppuVar2;
  undefined **ppuVar3;
  undefined **ppuVar4;
  undefined *puVar5;
  char *__src;
  uint uVar6;
  uint *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined **__src_00;
  bool bVar10;
  ushort uVar11;
  int iVar12;
  undefined4 uVar13;
  ulong uVar14;
  undefined8 *puVar15;
  ulong uVar16;
  byte *pbVar17;
  char cVar18;
  uint uVar19;
  uint *puVar20;
  ushort *puVar21;
  byte *pbVar22;
  byte *pbVar23;
  byte bVar24;
  long lVar25;
  long lVar26;
  int *piVar27;
  char *pcVar28;
  uint uVar29;
  uint uVar30;
  uint *puVar31;
  long *plVar32;
  long lVar33;
  long lVar34;
  uint local_e4;
  undefined ***local_e0;
  undefined **local_d8;
  undefined **local_d0;
  undefined8 local_c8;
  undefined1 local_bd;
  undefined **local_a0;
  undefined ****local_98;
  undefined8 local_90;
  undefined1 local_85;
  undefined1 local_6d;
  
  *(undefined4 *)(param_1 + 0x11) = 0;
  param_1[0xf] = (undefined *)0x0;
  param_1[0x10] = (undefined *)0x0;
  *param_1 = (undefined *)0x0;
  param_1[0xd] = (undefined *)0x0;
  param_1[0xe] = (undefined *)0x0;
  param_1[0xb] = (undefined *)0x0;
  param_1[0xc] = (undefined *)0x0;
  param_1[9] = (undefined *)0x0;
  param_1[10] = (undefined *)0x0;
  param_1[7] = (undefined *)0x0;
  param_1[8] = (undefined *)0x0;
  param_1[5] = (undefined *)0x0;
  param_1[6] = (undefined *)0x0;
  param_1[3] = (undefined *)0x0;
  param_1[4] = (undefined *)0x0;
  param_1[1] = (undefined *)0x0;
  param_1[2] = (undefined *)0x0;
  *(undefined4 *)(param_2 + 0x11) = 0;
  param_2[4] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = 0;
  param_2[0xd] = 0;
  param_2[0xe] = 0;
  param_2[0xb] = 0;
  param_2[0xc] = 0;
  param_2[9] = 0;
  param_2[10] = 0;
  param_2[7] = 0;
  param_2[8] = 0;
  param_2[5] = 0;
  param_2[6] = 0;
  puVar5 = PTR_DAT_04bb4138;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  puVar8 = PTR_DAT_04bb40b8;
  lVar33 = *(long *)puVar5;
  if ((lVar33 != 0) &&
     ((uVar30 = *(uint *)(lVar33 + 0x1c0), 0 < (int)uVar30 ||
      (((*(long *)(lVar33 + 0xb0) != 0 &&
        (puVar31 = *(uint **)(*(long *)(lVar33 + 0xb0) + 8), puVar31 != (uint *)0x0)) &&
       (uVar30 = *puVar31, uVar30 != 0)))))) {
    uVar29 = 0;
    pcVar1 = (char *)((long)&local_90 + 4);
    ppuVar2 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
    ppuVar3 = (undefined **)(PTR_DAT_04bb2a08 + 0x10);
    ppuVar4 = (undefined **)(PTR_DAT_04bb2028 + 0x10);
    do {
      if ((int)*(uint *)(lVar33 + 0x1c0) < 1) {
        if (((((*(long *)(lVar33 + 0xb0) != 0) &&
              (puVar31 = *(uint **)(*(long *)(lVar33 + 0xb0) + 8), puVar31 != (uint *)0x0)) &&
             ((*(uint *)(lVar33 + 200) <= uVar29 ||
              (*(char *)(*(long *)(lVar33 + 0xd0) + (long)(int)uVar29) != '\0')))) &&
            ((uVar29 < *puVar31 && (puVar31[1] != 0)))) && ((ushort)puVar31[2] != 0)) {
          iVar12 = 0xc;
          if (*(char *)((long)puVar31 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar31 = (uint *)((ulong)(puVar31[1] * uVar29 + (uint)(ushort)puVar31[2] * 8 + iVar12) +
                            (long)puVar31);
          goto joined_r0x0376c7d8;
        }
      }
      else if (uVar29 < *(uint *)(lVar33 + 0x1c0)) {
        uVar19 = uVar29;
        if (*(uint *)(lVar33 + 0x1b0) <= uVar29) {
          uVar19 = 0;
        }
        puVar31 = *(uint **)(*(long *)(lVar33 + 0x1b8) + (ulong)uVar19 * 8);
joined_r0x0376c7d8:
        if (puVar31 != (uint *)0x0) {
          if (*puVar31 != 0) {
            cVar18 = *PTR_DAT_04bb40b0;
            do {
              puVar5 = PTR_DAT_04bb40b0;
              if (cVar18 == '\0') {
                cVar18 = '\x01';
                *(undefined8 *)puVar8 = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar8 + 0xa0) = 0xffffffff;
                *puVar5 = 1;
                *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
              }
              else {
                uVar19 = *(uint *)(puVar8 + 0x80);
                if (-1 < (int)uVar19) {
                  lVar25 = (ulong)uVar19 + (long)puVar31;
                  goto LAB_0376c60c;
                }
                if (uVar19 != 0xffffffff) break;
              }
              puVar20 = (uint *)(ulong)*puVar31;
              lVar25 = 0;
              if ((*puVar31 == 0) || (puVar31 == puVar20)) goto LAB_0376c60c;
              lVar25 = 0xc;
              if (*(char *)((long)puVar31 + (10 - (long)puVar20)) != '\0') {
                lVar25 = 0x1c;
              }
              lVar34 = (long)puVar31 + (lVar25 - (long)puVar20);
              if (lVar34 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar20));
              *(undefined4 *)(puVar8 + 0x80) = 0xfffffffe;
              lVar25 = 0;
              if (uVar14 == 0) goto LAB_0376c60c;
              piVar27 = (int *)(lVar34 + 4);
              while (piVar27[-1] != 0x2f1b930d) {
                piVar27 = piVar27 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  lVar25 = 0;
                  goto LAB_0376c60c;
                }
              }
              iVar12 = 0;
              if (*piVar27 != -1) {
                iVar12 = *piVar27;
              }
              *(int *)(puVar8 + 0x80) = iVar12;
            } while (*puVar31 != 0);
          }
          lVar25 = 0;
LAB_0376c60c:
          local_98 = (undefined ****)*(long *)PTR_PTR_04bc1178;
          if (lVar25 != 0) {
            local_98 = (undefined ****)lVar25;
          }
          local_a0 = ppuVar2;
          uVar11 = FUN_0376baa0(&local_a0);
          puVar5 = PTR_DAT_04bc0678;
          if (uVar11 < 500) {
            lVar25 = *(long *)PTR_DAT_04bb4958;
            uVar11 = *(ushort *)(lVar25 + (ulong)uVar11 * 2 + 0x620);
            if ((int)*(uint *)(lVar25 + 0x1c0) < 1) {
              if ((((*(long *)(lVar25 + 0xb0) != 0) &&
                   (puVar20 = *(uint **)(*(long *)(lVar25 + 0xb0) + 8), puVar20 != (uint *)0x0)) &&
                  ((uVar19 = (uint)uVar11, *(uint *)(lVar25 + 200) <= uVar19 ||
                   (*(char *)(*(long *)(lVar25 + 0xd0) + (ulong)uVar19) != '\0')))) &&
                 (((uVar19 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
                iVar12 = 0xc;
                if (*(char *)((long)puVar20 + 10) != '\0') {
                  iVar12 = 0x1c;
                }
                puVar20 = (uint *)((ulong)(puVar20[1] * uVar19 + (uint)(ushort)puVar20[2] * 8 +
                                          iVar12) + (long)puVar20);
                goto joined_r0x0376c848;
              }
            }
            else if ((uint)uVar11 < *(uint *)(lVar25 + 0x1c0)) {
              uVar19 = (uint)uVar11;
              if (*(uint *)(lVar25 + 0x1b0) <= uVar19) {
                uVar19 = 0;
              }
              puVar20 = *(uint **)(*(long *)(lVar25 + 0x1b8) + (ulong)uVar19 * 8);
joined_r0x0376c848:
              if (puVar20 != (uint *)0x0) {
                uVar19 = *puVar20;
                if (uVar19 != 0) {
                  cVar18 = *PTR_DAT_04bc0670;
                  do {
                    puVar9 = PTR_DAT_04bc0670;
                    if (cVar18 == '\0') {
                      cVar18 = '\x01';
                      *(undefined8 *)puVar5 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 8) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar5 + 0x50) = 0xffffffff;
                      *puVar9 = 1;
                      *(undefined8 *)(puVar5 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar5 + 0x48) = 0xffffffffffffffff;
                      uVar19 = *puVar20;
                    }
                    else {
                      uVar6 = *(uint *)(puVar5 + 0x50);
                      if (-1 < (int)uVar6) {
                        if (((byte *)((ulong)uVar6 + (long)puVar20) != (byte *)0x0) &&
                           (bVar24 = *(byte *)((ulong)uVar6 + (long)puVar20), uVar19 = (uint)bVar24,
                           bVar24 < 0xb)) goto LAB_0376c874;
                        break;
                      }
                      if (uVar6 != 0xffffffff) break;
                    }
                    puVar7 = (uint *)(ulong)uVar19;
                    uVar19 = 0;
                    if ((puVar7 == (uint *)0x0) || (uVar19 = 0, puVar20 == puVar7))
                    goto LAB_0376c874;
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar20 + (10 - (long)puVar7)) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar25 = (long)puVar20 + (lVar25 - (long)puVar7);
                    uVar19 = 0;
                    if (lVar25 == 0) goto LAB_0376c874;
                    uVar14 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar7));
                    *(undefined4 *)(puVar5 + 0x50) = 0xfffffffe;
                    if (uVar14 == 0) break;
                    piVar27 = (int *)(lVar25 + 4);
                    while (piVar27[-1] != -0x1bbe4e6d) {
                      piVar27 = piVar27 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) goto LAB_0376c870;
                    }
                    iVar12 = 0;
                    if (*piVar27 != -1) {
                      iVar12 = *piVar27;
                    }
                    *(int *)(puVar5 + 0x50) = iVar12;
                    uVar19 = *puVar20;
                    if (uVar19 == 0) break;
                  } while( true );
                }
LAB_0376c870:
                uVar19 = 0;
LAB_0376c874:
                local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,uVar19);
                if (uVar19 != 0) {
                  puVar5 = &DAT_040c7be9;
                  if (uVar19 < 10) {
                    puVar5 = &DAT_040ae943;
                  }
                  FUN_006d8678(&local_d8,puVar5);
                  local_6d = 0;
                  local_90 = (undefined8 *)CONCAT44(local_90._4_4_,0x20);
                  local_a0 = ppuVar3;
                  local_98 = (undefined ****)pcVar1;
                  (*(code *)local_d8[3])(&local_d8);
                  __src_00 = local_d0;
                  if ((undefined **)pcVar1 != local_d0) {
                    (*(code *)local_d8[3])(&local_d8);
                    lVar25 = 0;
                    do {
                      if (*(char *)((long)local_d0 + lVar25) == '\0') goto LAB_0376c944;
                      if (*(char *)((long)local_d0 + lVar25 + 1) == '\0') {
                        lVar25 = lVar25 + 1;
                        goto LAB_0376c944;
                      }
                      if (*(char *)((long)local_d0 + lVar25 + 2) == '\0') {
                        lVar25 = lVar25 + 2;
                        goto LAB_0376c944;
                      }
                      lVar25 = lVar25 + 3;
                    } while (lVar25 != 0x80001);
                    lVar25 = 0;
LAB_0376c944:
                    iVar12 = (int)lVar25;
                    if ((int)local_90 <= (int)lVar25) {
                      iVar12 = (int)local_90 + -1;
                    }
                    memcpy(pcVar1,__src_00,(long)iVar12);
                    pcVar1[iVar12] = '\0';
                  }
                  *(char *)((long)local_98 + (long)(int)local_90 + -1) = '\0';
                  local_a0 = ppuVar4;
                  FUN_006d8678(&local_d8,"Unlock_NPC_%s",local_98);
                  iVar12 = FUN_02758850(&local_d8);
                  if (iVar12 != 1) goto LAB_0376c4e4;
                }
                local_d8 = (undefined **)((ulong)local_d8 & 0xffffffff00000000);
                if (*puVar31 != 0) {
                  cVar18 = *PTR_DAT_04bb40b0;
                  do {
                    puVar5 = PTR_DAT_04bb40b0;
                    if (cVar18 == '\0') {
                      cVar18 = '\x01';
                      *(undefined8 *)puVar8 = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 8) = 0xffffffffffffffff;
                      *(undefined4 *)(puVar8 + 0xa0) = 0xffffffff;
                      *puVar5 = 1;
                      *(undefined8 *)(puVar8 + 0x10) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x18) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x20) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x28) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x30) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x38) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x40) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x48) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x50) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x58) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x60) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x68) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x70) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x78) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x80) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x88) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x90) = 0xffffffffffffffff;
                      *(undefined8 *)(puVar8 + 0x98) = 0xffffffffffffffff;
                    }
                    else {
                      uVar19 = *(uint *)(puVar8 + 0x80);
                      if (-1 < (int)uVar19) {
                        lVar25 = (ulong)uVar19 + (long)puVar31;
                        goto LAB_0376caa8;
                      }
                      if (uVar19 != 0xffffffff) break;
                    }
                    puVar20 = (uint *)(ulong)*puVar31;
                    lVar25 = 0;
                    if ((*puVar31 == 0) || (puVar31 == puVar20)) goto LAB_0376caa8;
                    lVar25 = 0xc;
                    if (*(char *)((long)puVar31 + (10 - (long)puVar20)) != '\0') {
                      lVar25 = 0x1c;
                    }
                    lVar34 = (long)puVar31 + (lVar25 - (long)puVar20);
                    if (lVar34 == 0) break;
                    uVar14 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar20));
                    *(undefined4 *)(puVar8 + 0x80) = 0xfffffffe;
                    lVar25 = 0;
                    if (uVar14 == 0) goto LAB_0376caa8;
                    piVar27 = (int *)(lVar34 + 4);
                    while (piVar27[-1] != 0x2f1b930d) {
                      piVar27 = piVar27 + 2;
                      uVar14 = uVar14 - 1;
                      if (uVar14 == 0) {
                        lVar25 = 0;
                        goto LAB_0376caa8;
                      }
                    }
                    iVar12 = 0;
                    if (*piVar27 != -1) {
                      iVar12 = *piVar27;
                    }
                    *(int *)(puVar8 + 0x80) = iVar12;
                  } while (*puVar31 != 0);
                }
                lVar25 = 0;
LAB_0376caa8:
                local_98 = (undefined ****)*(long *)PTR_PTR_04bc1178;
                if (lVar25 != 0) {
                  local_98 = (undefined ****)lVar25;
                }
                local_a0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
                uVar14 = FUN_020fc100(&local_d8,&local_e0,&local_a0);
                if ((uVar14 & 1) != 0) {
                  uVar14 = (ulong)local_d8 & 0xffffffff;
                  if ((uint)local_e0 < 0x20) {
                    if (0x22 < (uint)local_d8) {
                      uVar14 = 0;
                    }
                    *(uint *)((long)param_2 + uVar14 * 4) =
                         *(uint *)((long)param_2 + uVar14 * 4) | 1 << (ulong)((uint)local_e0 & 0x1f)
                    ;
                  }
                }
              }
            }
          }
        }
      }
LAB_0376c4e4:
      uVar29 = uVar29 + 1;
    } while (uVar29 != uVar30);
  }
  local_a0 = (undefined **)&DAT_04b46b10;
  local_98 = (undefined ****)param_1;
  local_90 = param_2;
  FUN_02685630(&local_a0);
  puVar5 = PTR_DAT_04bc3a48;
  puVar8 = PTR_DAT_04bb27f8;
  lVar33 = *(long *)PTR_DAT_04bb27f8;
  if (lVar33 != 0) {
    puVar21 = *(ushort **)PTR_DAT_04bc3a48;
    if ((puVar21 == (ushort *)0x0) || (uVar11 = *puVar21, (uVar11 & 1) == 0)) {
      if ((*(int *)(lVar33 + 0x10) == 1) && (*(int *)(lVar33 + 0x14) != 0)) {
        if (puVar21 != (ushort *)0x0) {
          uVar11 = *puVar21;
          goto LAB_0376cba8;
        }
LAB_0376cbac:
        local_a0 = param_1;
        local_98 = (undefined ****)param_2;
        FUN_0376db90(&local_a0,*(undefined2 *)(lVar33 + 0x2a));
        if (((*(ushort **)puVar5 == (ushort *)0x0) || ((**(ushort **)puVar5 & 1) == 0)) ||
           (*(long *)PTR_DAT_04bc1530 == 0)) {
          uVar30 = (uint)*(ushort *)(lVar33 + 0x2c);
          if ((*(ushort *)(lVar33 + 0x28) & 0x80) != 0) {
            uVar30 = 0xffffffff;
          }
        }
        else {
          lVar33 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x10);
          if ((*(long **)(lVar33 + 0x11b0) == (long *)0x0) ||
             (puVar15 = (undefined8 *)**(long **)(lVar33 + 0x11b0), puVar15 == (undefined8 *)0x0)) {
            uVar30 = (uint)*(ushort *)(*(long *)(lVar33 + 0x1198) + *(long *)(lVar33 + 0x1190) + 2);
          }
          else {
            uVar14 = (**(code **)*puVar15)();
            uVar30 = (uint)*(ushort *)(*(long *)(lVar33 + 0x1198) + *(long *)(lVar33 + 0x1190) + 2);
            if ((((uVar14 & 1) != 0) && (*(long *)(lVar33 + 0x11b0) != 0)) &&
               (puVar15 = *(undefined8 **)(*(long *)(lVar33 + 0x11b0) + 8),
               puVar15 != (undefined8 *)0x0)) {
              (**(code **)*puVar15)();
            }
          }
        }
        FUN_0376db90(&local_a0,uVar30);
      }
    }
    else if ((((uVar11 ^ 0xffff) & 3) == 0) && (*(int *)(lVar33 + 0x14) != 0)) {
LAB_0376cba8:
      if ((uVar11 & 1) == 0) goto LAB_0376cbac;
    }
  }
  local_a0 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
  local_98 = (undefined ****)0x4082a74;
  iVar12 = FUN_02758850(&local_a0);
  plVar32 = (long *)PTR_DAT_04bb46b0;
  if (iVar12 != 0) {
    lVar25 = *(long *)PTR_DAT_04bb46b0;
    lVar33 = 0;
    if (lVar25 != 0) {
      local_a0 = (undefined **)CONCAT44(local_a0._4_4_,1);
      if (((*(byte *)(lVar25 + 0x50d) ^ 0xff) & 6) == 0) {
        lVar25 = (**(code **)(**(long **)(*(long *)(lVar25 + 0x10) + 0x188) + 0x38))();
      }
      else {
        lVar25 = 0;
      }
      lVar33 = 0;
      if (lVar25 != 0) {
        lVar33 = lVar25 + 0xa8;
      }
    }
    if ((*(long **)(lVar33 + 0x36540) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar33 + 0x36540), puVar15 == (undefined8 *)0x0)) {
      uVar14 = 0;
    }
    else {
      uVar14 = (**(code **)*puVar15)();
      uVar14 = uVar14 & 0xffffffff;
    }
    puVar9 = PTR_DAT_04bc0678;
    puVar5 = PTR_DAT_04bc0670;
    uVar11 = *(ushort *)(*(long *)(lVar33 + 0x36528) + *(long *)(lVar33 + 0x36520) + 0x3f8);
    if (uVar11 != 0xffff) {
      local_85 = 0;
      pcVar1 = (char *)((long)&local_90 + 4);
      local_90._4_4_ = (uint)((ulong)local_90 >> 0x20) & 0xffffff00;
      local_90 = (undefined8 *)CONCAT44(local_90._4_4_,8);
      local_a0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      local_98 = (undefined ****)pcVar1;
      if ((uVar11 < 500) && (lVar25 = *(long *)PTR_DAT_04bb4958, lVar25 != 0)) {
        uVar11 = *(ushort *)(lVar25 + (ulong)uVar11 * 2 + 0x620);
        if ((int)*(uint *)(lVar25 + 0x1c0) < 1) {
          if ((((*(long *)(lVar25 + 0xb0) != 0) &&
               (puVar31 = *(uint **)(*(long *)(lVar25 + 0xb0) + 8), puVar31 != (uint *)0x0)) &&
              ((uVar30 = (uint)uVar11, *(uint *)(lVar25 + 200) <= uVar30 ||
               (*(char *)(*(long *)(lVar25 + 0xd0) + (ulong)uVar30) != '\0')))) &&
             (((uVar30 < *puVar31 && (puVar31[1] != 0)) && ((ushort)puVar31[2] != 0)))) {
            iVar12 = 0xc;
            if (*(char *)((long)puVar31 + 10) != '\0') {
              iVar12 = 0x1c;
            }
            puVar31 = (uint *)((ulong)(puVar31[1] * uVar30 + (uint)(ushort)puVar31[2] * 8 + iVar12)
                              + (long)puVar31);
            goto joined_r0x0376daec;
          }
        }
        else if ((uint)uVar11 < *(uint *)(lVar25 + 0x1c0)) {
          uVar30 = (uint)uVar11;
          if (*(uint *)(lVar25 + 0x1b0) <= uVar30) {
            uVar30 = 0;
          }
          puVar31 = *(uint **)(*(long *)(lVar25 + 0x1b8) + (ulong)uVar30 * 8);
joined_r0x0376daec:
          if (puVar31 != (uint *)0x0) {
            if (*puVar31 != 0) {
              cVar18 = *PTR_DAT_04bc0670;
              do {
                if (cVar18 == '\0') {
                  cVar18 = '\x01';
                  *(undefined8 *)puVar9 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 8) = 0xffffffffffffffff;
                  *puVar5 = 1;
                  *(undefined4 *)(puVar9 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar9 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar9 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar30 = *(uint *)(puVar9 + 0x48);
                  if (-1 < (int)uVar30) {
                    pcVar28 = (char *)((ulong)uVar30 + (long)puVar31);
                    goto LAB_0376cf68;
                  }
                  if (uVar30 != 0xffffffff) break;
                }
                puVar20 = (uint *)(ulong)*puVar31;
                pcVar28 = (char *)0x0;
                if ((*puVar31 == 0) || (puVar31 == puVar20)) goto LAB_0376cf68;
                lVar25 = 0xc;
                if (*(char *)((long)puVar31 + (10 - (long)puVar20)) != '\0') {
                  lVar25 = 0x1c;
                }
                lVar25 = (long)puVar31 + (lVar25 - (long)puVar20);
                if (lVar25 == 0) break;
                uVar16 = (ulong)*(ushort *)((long)puVar31 + (8 - (long)puVar20));
                *(undefined4 *)(puVar9 + 0x48) = 0xfffffffe;
                pcVar28 = (char *)0x0;
                if (uVar16 == 0) goto LAB_0376cf68;
                piVar27 = (int *)(lVar25 + 4);
                while (piVar27[-1] != 0x34c8eed5) {
                  piVar27 = piVar27 + 2;
                  uVar16 = uVar16 - 1;
                  if (uVar16 == 0) {
                    pcVar28 = (char *)0x0;
                    goto LAB_0376cf68;
                  }
                }
                iVar12 = 0;
                if (*piVar27 != -1) {
                  iVar12 = *piVar27;
                }
                *(int *)(puVar9 + 0x48) = iVar12;
              } while (*puVar31 != 0);
            }
            pcVar28 = (char *)0x0;
LAB_0376cf68:
            __src = *(char **)PTR_PTR_04bc0668;
            if (pcVar28 != (char *)0x0) {
              __src = pcVar28;
            }
            if (pcVar1 != __src) {
              lVar25 = 0;
              do {
                if (__src[lVar25] == '\0') {
LAB_0376db14:
                  iVar12 = (int)lVar25;
                  if (7 < iVar12) {
                    iVar12 = 7;
                  }
                  goto LAB_0376db20;
                }
                if (__src[lVar25 + 1] == '\0') {
                  lVar25 = lVar25 + 1;
                  goto LAB_0376db14;
                }
                if (__src[lVar25 + 2] == '\0') {
                  lVar25 = lVar25 + 2;
                  goto LAB_0376db14;
                }
                lVar25 = lVar25 + 3;
              } while (lVar25 != 0x80001);
              iVar12 = 0;
LAB_0376db20:
              memcpy(pcVar1,__src,(long)iVar12);
              pcVar1[iVar12] = '\0';
            }
            local_d8 = (undefined **)((ulong)local_d8 & 0xffffffff00000000);
            uVar16 = FUN_020fc100(&local_d8,&local_e0,&local_a0);
            if ((uVar16 & 1) != 0) {
              uVar16 = (ulong)local_d8 & 0xffffffff;
              if ((uint)local_e0 < 0x20) {
                if (0x22 < (uint)local_d8) {
                  uVar16 = 0;
                }
                *(uint *)((long)param_1 + uVar16 * 4) =
                     *(uint *)((long)param_1 + uVar16 * 4) &
                     (1 << (ulong)((uint)local_e0 & 0x1f) ^ 0xffffffffU);
              }
            }
          }
        }
      }
    }
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar33 + 0x36540) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar33 + 0x36540) + 8), puVar15 != (undefined8 *)0x0))
    {
      (**(code **)*puVar15)();
    }
  }
  lVar33 = *(long *)puVar8;
  if (lVar33 == 0) {
LAB_0376d024:
    lVar33 = *plVar32;
  }
  else {
    local_85 = 0;
    local_98 = (undefined ****)((long)&local_90 + 4);
    local_d0 = (undefined **)((long)&local_c8 + 4);
    local_90 = (undefined8 *)CONCAT35(local_90._5_3_,8);
    local_bd = 0;
    local_d8 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
    local_c8 = (undefined8 *)CONCAT35(local_c8._5_3_,8);
    local_a0 = local_d8;
    if ((*(byte *)(lVar33 + 0x1a70) & 1) == 0) goto LAB_0376d024;
    FUN_0376b510(&local_a0,*(undefined2 *)(lVar33 + 0x1a88));
    FUN_0376b510(&local_d8,*(undefined2 *)(lVar33 + 0x1a8a));
    local_e0 = (undefined ***)((ulong)local_e0 & 0xffffffff00000000);
    uVar14 = FUN_020fc100(&local_e0,&local_e4,&local_a0);
    if ((uVar14 & 1) != 0) {
      uVar14 = (ulong)local_e0 & 0xffffffff;
      if (local_e4 < 0x20) {
        if (0x22 < (uint)local_e0) {
          uVar14 = 0;
        }
        uVar30 = 1 << (ulong)(local_e4 & 0x1f);
        *(uint *)((long)param_1 + uVar14 * 4) =
             *(uint *)((long)param_1 + uVar14 * 4) & (uVar30 ^ 0xffffffff);
        uVar14 = (ulong)local_e0 & 0xffffffff;
        if (0x22 < (uint)local_e0) {
          uVar14 = 0;
        }
        *(uint *)((long)param_2 + uVar14 * 4) =
             *(uint *)((long)param_2 + uVar14 * 4) & (uVar30 ^ 0xffffffff);
      }
    }
    uVar14 = FUN_020fc100(&local_e0,&local_e4,&local_d8);
    if ((uVar14 & 1) == 0) goto LAB_0376d024;
    uVar14 = (ulong)local_e0 & 0xffffffff;
    if (local_e4 < 0x20) {
      if (0x22 < (uint)local_e0) {
        uVar14 = 0;
      }
      uVar30 = 1 << (ulong)(local_e4 & 0x1f);
      *(uint *)((long)param_1 + uVar14 * 4) =
           *(uint *)((long)param_1 + uVar14 * 4) & (uVar30 ^ 0xffffffff);
      uVar14 = (ulong)local_e0 & 0xffffffff;
      if (0x22 < (uint)local_e0) {
        uVar14 = 0;
      }
      *(uint *)((long)param_2 + uVar14 * 4) =
           *(uint *)((long)param_2 + uVar14 * 4) & (uVar30 ^ 0xffffffff);
      goto LAB_0376d024;
    }
    lVar33 = *plVar32;
  }
  if (lVar33 == 0) goto LAB_0376d948;
  puVar15 = *(undefined8 **)(lVar33 + 0x10);
  if ((*(byte *)(lVar33 + 0x453) & 1) == 0) {
    lVar33 = (**(code **)(*(long *)*puVar15 + 0x38))();
    if (lVar33 != 0) {
      lVar33 = lVar33 + 0x70;
      goto LAB_0376d074;
    }
  }
  else if (((puVar15 != (undefined8 *)0x0) && ((long *)puVar15[0x26] != (long *)0x0)) &&
          (lVar33 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar33 != 0)) {
LAB_0376d074:
    if ((*(long **)(lVar33 + 0xd0) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar33 + 0xd0), puVar15 == (undefined8 *)0x0)) {
      uVar30 = 0;
    }
    else {
      uVar30 = (**(code **)*puVar15)();
    }
    puVar5 = PTR_DAT_04bc27f0;
    puVar8 = PTR_DAT_04bb5038;
    pcVar1 = (char *)((long)&local_90 + 4);
    if ((param_4 & 1) == 0) {
      if ((param_3 & 1) == 0) {
        pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        uVar14 = (ulong)*pbVar17;
        if (((uVar14 < 0x23) && (pbVar17[1] <= (byte)PTR_DAT_04bc27f0[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[1] & 0x1f) & 1) != 0)) {
          FUN_020fcb1c(param_2);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x13230];
        if (((uVar14 < 0x23) && (pbVar17[0x13231] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x13231] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x13230);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x26460];
        if (((uVar14 < 0x23) && (pbVar17[0x26461] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x26461] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x26460);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x39690];
        if (((uVar14 < 0x23) && (pbVar17[0x39691] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x39691] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x39690);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x4c8c0];
        if (((uVar14 < 0x23) && (pbVar17[0x4c8c1] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x4c8c1] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x4c8c0);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x5faf0];
        if (((uVar14 < 0x23) && (pbVar17[0x5faf1] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x5faf1] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x5faf0);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x72d20];
        if (((uVar14 < 0x23) && (pbVar17[0x72d21] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x72d21] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x72d20);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x85f50];
        if (((uVar14 < 0x23) && (pbVar17[0x85f51] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x85f51] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x85f50);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0x99180];
        if (((uVar14 < 0x23) && (pbVar17[0x99181] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0x99181] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2,pbVar17 + 0x99180);
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0));
        }
        uVar14 = (ulong)pbVar17[0xac3b0];
        if (((uVar14 < 0x23) && (pbVar17[0xac3b1] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[0xac3b1] & 0x1f) & 1) != 0)
           ) {
          FUN_020fcb1c(param_2);
        }
      }
      else {
        lVar25 = 0;
        lVar34 = 10;
        ppuVar2 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
        do {
          pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0) + lVar25);
          uVar14 = (ulong)*pbVar17;
          if (((uVar14 < 0x23) && (pbVar17[1] <= (byte)puVar5[uVar14])) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[1] & 0x1f) & 1) != 0)) {
            FUN_020fcb1c(param_2,pbVar17);
            local_85 = 0;
            local_90 = (undefined8 *)CONCAT35(local_90._5_3_,8);
            local_a0 = ppuVar2;
            local_98 = (undefined ****)pcVar1;
            FUN_038d1270(&local_a0,"-----");
            if ((ulong)*pbVar17 < 0x23) {
              FUN_038d1270(&local_a0,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar17 * 8 + 0xb0),pbVar17[1]
                          );
            }
            uVar13 = FUN_0376dea0(&local_a0,0);
            local_d8 = (undefined **)CONCAT44(local_d8._4_4_,uVar13);
            iVar12 = FUN_0376e6b0(&local_a0);
            local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,iVar12);
            if (((uint)local_d8 != 0) || (iVar12 != 0)) {
              FUN_020fcb1c(param_1,pbVar17);
            }
          }
          lVar34 = lVar34 + -1;
          lVar25 = lVar25 + 0x13230;
        } while (lVar34 != 0);
      }
    }
    else {
      lVar25 = 0;
      lVar34 = 10;
      ppuVar2 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
      ppuVar3 = (undefined **)(PTR_DAT_04bb2020 + 0x10);
      do {
        pbVar17 = (byte *)(*(long *)(lVar33 + 0xb8) + *(long *)(lVar33 + 0xb0) + lVar25);
        uVar14 = (ulong)*pbVar17;
        if (((uVar14 < 0x23) && (pbVar17[1] <= (byte)puVar5[uVar14])) &&
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar14 * 4) >> (ulong)(pbVar17[1] & 0x1f) & 1) != 0)) {
          FUN_020fcb1c(param_2,pbVar17);
          if ((param_3 & 1) != 0) {
            local_85 = 0;
            local_90 = (undefined8 *)CONCAT35(local_90._5_3_,8);
            local_a0 = ppuVar2;
            local_98 = (undefined ****)pcVar1;
            FUN_038d1270(&local_a0,"-----");
            if ((ulong)*pbVar17 < 0x23) {
              FUN_038d1270(&local_a0,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar17 * 8 + 0xb0),pbVar17[1]
                          );
            }
            uVar13 = FUN_0376dea0(&local_a0,0);
            local_d8 = (undefined **)CONCAT44(local_d8._4_4_,uVar13);
            iVar12 = FUN_0376e6b0(&local_a0);
            local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,iVar12);
            if (((uint)local_d8 != 0) || (iVar12 != 0)) {
              FUN_020fcb1c(param_1,pbVar17);
            }
          }
          local_85 = 0;
          local_90 = (undefined8 *)CONCAT35(local_90._5_3_,8);
          local_a0 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
          local_98 = (undefined ****)pcVar1;
          FUN_038d1270(&local_a0,"-----");
          if ((ulong)*pbVar17 < 0x23) {
            FUN_038d1270(&local_a0,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar17 * 8 + 0xb0),pbVar17[1]);
          }
          iVar12 = FUN_0376dea0(&local_a0,0);
          local_e0 = (undefined ***)CONCAT44(local_e0._4_4_,iVar12);
          if (((iVar12 == 0) || (iVar12 == 1)) || (iVar12 == 6)) {
            lVar26 = *(long *)PTR_DAT_04bb39b0;
            pbVar23 = PTR_DAT_04bb32e0;
            if (lVar26 == 0) {
              if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_0376d2fc;
LAB_0376d374:
              bVar24 = *pbVar23;
              if (7 < bVar24) {
                bVar24 = 0xff;
              }
              local_e4 = CONCAT31(local_e4._1_3_,bVar24);
            }
            else {
              if (*(int *)(lVar26 + 0x15c) != 0) {
                pbVar23 = (byte *)(lVar26 + 0x158);
              }
              if ((*pbVar23 < 8) ||
                 (((*(int *)(lVar26 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
                  (pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar23 < 8))))
              goto LAB_0376d374;
LAB_0376d2fc:
              pbVar23 = puVar8;
              if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) goto LAB_0376d374;
              lVar26 = **(long **)PTR_DAT_04bb27d0;
              bVar24 = *(byte *)(lVar26 + 0x473);
              pbVar22 = puVar8;
              if ((long)(char)bVar24 != 0xffffffffffffffff) {
                puVar31 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
                if (7 < bVar24) {
                  puVar31 = (uint *)(lVar26 + 0x48);
                }
                if ((*puVar31 & 8) != 0) {
                  pbVar22 = (byte *)(lVar26 + 0x471);
                }
              }
              bVar24 = *pbVar22;
              bVar10 = 7 < bVar24;
              if (bVar10) {
                bVar24 = 0xff;
              }
              local_e4 = CONCAT31(local_e4._1_3_,bVar24);
              if (bVar10) goto LAB_0376d374;
            }
            local_d0 = (undefined **)0x40a6aec;
            local_d8 = ppuVar3;
            iVar12 = FUN_02753180(&local_e4,&local_d8);
            if ((iVar12 == 0) || (uVar14 = FUN_0376ea70(&local_a0), (uVar14 & 1) == 0))
            goto LAB_0376d104;
          }
          FUN_020fcb1c(param_1,pbVar17);
        }
LAB_0376d104:
        lVar34 = lVar34 + -1;
        lVar25 = lVar25 + 0x13230;
      } while (lVar34 != 0);
    }
    plVar32 = (long *)PTR_DAT_04bb46b0;
    if ((((uVar30 & 1) != 0) && (*(long *)(lVar33 + 0xd0) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar33 + 0xd0) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
  }
  lVar33 = *plVar32;
  if (lVar33 != 0) {
    puVar15 = *(undefined8 **)(lVar33 + 0x10);
    if ((*(byte *)(lVar33 + 0x453) & 1) == 0) {
      lVar33 = (**(code **)(*(long *)*puVar15 + 0x38))();
      if (lVar33 == 0) goto LAB_0376d948;
      lVar33 = lVar33 + 0x70;
    }
    else if (((puVar15 == (undefined8 *)0x0) || ((long *)puVar15[0x26] == (long *)0x0)) ||
            (lVar33 = (**(code **)(*(long *)puVar15[0x26] + 0x38))(), lVar33 == 0))
    goto LAB_0376d948;
    if ((*(long **)(lVar33 + 0x1c2980) == (long *)0x0) ||
       (puVar15 = (undefined8 *)**(long **)(lVar33 + 0x1c2980), puVar15 == (undefined8 *)0x0)) {
      uVar30 = 1;
    }
    else {
      uVar30 = (**(code **)*puVar15)();
      uVar30 = uVar30 ^ 1;
    }
    lVar25 = *(long *)(lVar33 + 0x1c2960);
    lVar34 = *(long *)(lVar33 + 0x1c2968);
    uVar14 = FUN_027c5f10();
    if ((uVar14 & 1) == 0) {
      local_a0 = (undefined **)CONCAT53(local_a0._3_5_,0x80023);
      uVar11 = *(ushort *)(lVar34 + lVar25);
      if ((byte)(uVar11 >> 8) < 0x23) {
        FUN_020fd218(&local_a0,uVar11 >> 8,uVar11 & 0xff);
      }
    }
    else {
      local_a0 = (undefined **)CONCAT53(local_a0._3_5_,*(undefined3 *)PTR_DAT_04bb9cf0);
    }
    if (((ushort)local_a0 & 0xff) < 0x23) {
      if (((uint)((ushort)local_a0 >> 8) <= (uint)(byte)PTR_DAT_04bc27f0[(ulong)local_a0 & 0xff]) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + ((ulong)local_a0 & 0xff) * 4) >>
           (ulong)((ushort)local_a0 >> 8 & 0x1f) & 1) != 0)) {
        FUN_020fcb1c(param_2,&local_a0);
      }
    }
    if ((((uVar30 & 1) == 0) && (*(long *)(lVar33 + 0x1c2980) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar33 + 0x1c2980) + 8), puVar15 != (undefined8 *)0x0))
    {
      (**(code **)*puVar15)();
    }
  }
LAB_0376d948:
  local_a0 = &PTR_LAB_04b46b38;
  local_98 = (undefined ****)param_2;
  FUN_016d43e0(&local_a0);
  local_d8 = (undefined **)&DAT_04b46b60;
  lVar33 = *plVar32;
  local_d0 = param_1;
  local_c8 = param_2;
  if (lVar33 == 0) {
    lVar33 = 0;
  }
  else {
    local_a0 = (undefined **)CONCAT44(local_a0._4_4_,1);
    if (((*(byte *)(lVar33 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar25 = (**(code **)(**(long **)(*(long *)(lVar33 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar25 = 0;
    }
    lVar33 = 0;
    if (lVar25 != 0) {
      lVar33 = lVar25 + 0xa8;
    }
  }
  local_e0 = &local_d8;
  local_98 = &local_e0;
  local_a0 = &PTR_FUN_04b46c50;
  if ((*(long **)(lVar33 + 0x60) == (long *)0x0) ||
     (puVar15 = (undefined8 *)**(long **)(lVar33 + 0x60), puVar15 == (undefined8 *)0x0)) {
    FUN_028f3d70(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40),&local_a0);
  }
  else {
    uVar14 = (**(code **)*puVar15)();
    FUN_028f3d70(*(long *)(lVar33 + 0x48) + *(long *)(lVar33 + 0x40),&local_a0);
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar33 + 0x60) != 0)) &&
       (puVar15 = *(undefined8 **)(*(long *)(lVar33 + 0x60) + 8), puVar15 != (undefined8 *)0x0)) {
      (**(code **)*puVar15)();
    }
  }
  local_a0 = (undefined **)&DAT_04b46b88;
  local_98 = (undefined ****)param_1;
  local_90 = param_2;
  FUN_0376ec70(&local_a0);
  return;
}

