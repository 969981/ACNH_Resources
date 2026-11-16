
/* WARNING: Type propagation algorithm not settling */

uint FUN_029ec430(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  char *pcVar2;
  long lVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  short sVar7;
  uint *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 *******pppppppuVar11;
  int iVar12;
  uint uVar13;
  ulong uVar14;
  int *piVar15;
  char cVar16;
  uint uVar17;
  uint *******pppppppuVar18;
  char *pcVar19;
  long lVar20;
  uint ******ppppppuVar21;
  uint uVar22;
  uint *******pppppppuVar23;
  long lVar24;
  uint *puVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined *local_6c8;
  uint ******local_6c0;
  uint *******local_6b8;
  uint *******local_6b0;
  int local_6a8;
  undefined8 *******local_6a0;
  undefined8 *******pppppppuStack_698;
  int local_690;
  undefined8 *******local_688 [3];
  undefined8 *******local_670 [3];
  undefined8 *******local_658 [3];
  undefined8 *******local_640 [3];
  undefined8 *******local_628 [3];
  undefined8 *******local_610 [3];
  undefined8 *******local_5f8 [3];
  undefined8 *******local_5e0 [3];
  undefined8 *******local_5c8 [3];
  undefined8 *******local_5b0 [3];
  undefined8 *******local_598 [3];
  undefined8 *******local_580 [3];
  undefined8 *******local_568 [3];
  undefined8 *******local_550 [3];
  undefined8 *******local_538 [3];
  undefined8 *******local_520 [3];
  undefined8 *******local_508 [3];
  undefined8 *******local_4f0 [3];
  undefined8 *******local_4d8 [3];
  undefined8 *******local_4c0 [3];
  undefined8 *******local_4a8 [3];
  undefined8 *******local_490 [3];
  undefined8 *******local_478 [3];
  undefined8 *******local_460 [3];
  undefined8 *******local_448 [3];
  undefined8 *******local_430 [3];
  undefined8 *******local_418 [3];
  undefined8 *******local_400 [3];
  undefined8 *******local_3e8 [3];
  undefined8 *******local_3d0 [3];
  undefined8 *******local_3b8 [3];
  undefined8 *******local_3a0 [3];
  undefined8 *******local_388 [3];
  undefined8 *******local_370 [3];
  undefined8 *******local_358 [3];
  undefined8 *******local_340 [3];
  undefined8 *******local_328 [3];
  undefined8 *******local_310 [3];
  undefined8 *******local_2f8 [3];
  undefined8 *******local_2e0 [3];
  undefined8 *******local_2c8 [3];
  undefined8 *******local_2b0 [3];
  undefined8 *******local_298 [3];
  undefined8 *******local_280 [3];
  undefined8 *******local_268 [3];
  undefined8 *******local_250 [3];
  undefined8 *******local_238 [3];
  undefined8 *******local_220 [3];
  undefined8 *******local_208 [3];
  undefined8 *******local_1f0 [3];
  undefined8 *******local_1d8 [3];
  undefined8 *******local_1c0 [3];
  undefined8 *******local_1a8 [3];
  undefined8 *******local_190 [3];
  undefined8 *******local_178 [3];
  undefined8 *******local_160 [3];
  undefined8 *******local_148 [3];
  undefined8 ******local_130 [3];
  undefined8 *****local_118 [3];
  undefined8 ****local_100 [3];
  undefined8 ***local_e8 [3];
  undefined8 **local_d0 [3];
  undefined8 *local_b8 [3];
  undefined8 local_a0 [3];
  undefined8 local_88;
  long local_80 [2];
  
  puVar10 = PTR_DAT_04bc4150;
  puVar9 = PTR_DAT_04bc4148;
  local_6a8 = 0;
  local_6b8 = (uint *******)&local_6b8;
  local_6b0 = (uint *******)&local_6b8;
  pppppppuVar23 = (uint *******)&local_6b0;
  local_688[0] = local_670;
  local_658[0] = local_640;
  local_670[0] = local_658;
  local_628[0] = local_610;
  local_5f8[0] = local_5e0;
  local_640[0] = local_628;
  local_5c8[0] = local_5b0;
  local_598[0] = local_580;
  local_610[0] = local_5f8;
  local_568[0] = local_550;
  local_538[0] = local_520;
  local_5e0[0] = local_5c8;
  local_508[0] = local_4f0;
  local_4d8[0] = local_4c0;
  local_5b0[0] = local_598;
  local_4a8[0] = local_490;
  local_490[0] = local_478;
  local_580[0] = local_568;
  local_478[0] = local_460;
  local_460[0] = local_448;
  local_550[0] = local_538;
  local_448[0] = local_430;
  local_430[0] = local_418;
  local_520[0] = local_508;
  local_418[0] = local_400;
  local_400[0] = local_3e8;
  local_4f0[0] = local_4d8;
  local_3e8[0] = local_3d0;
  local_3d0[0] = local_3b8;
  local_4c0[0] = local_4a8;
  local_3b8[0] = local_3a0;
  local_3a0[0] = local_388;
  local_388[0] = local_370;
  local_370[0] = local_358;
  local_358[0] = local_340;
  local_340[0] = local_328;
  local_328[0] = local_310;
  local_310[0] = local_2f8;
  local_2f8[0] = local_2e0;
  local_2e0[0] = local_2c8;
  local_2c8[0] = local_2b0;
  local_2b0[0] = local_298;
  local_298[0] = local_280;
  local_280[0] = local_268;
  local_268[0] = local_250;
  local_250[0] = local_238;
  local_238[0] = local_220;
  local_220[0] = local_208;
  local_208[0] = local_1f0;
  local_1f0[0] = local_1d8;
  local_1d8[0] = local_1c0;
  local_1c0[0] = local_1a8;
  local_1a8[0] = local_190;
  local_190[0] = local_178;
  local_178[0] = local_160;
  local_160[0] = local_148;
  local_148[0] = local_130;
  local_130[0] = local_118;
  local_118[0] = local_100;
  local_100[0] = local_e8;
  local_e8[0] = local_d0;
  local_d0[0] = local_b8;
  local_b8[0] = local_a0;
  lVar24 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7e0);
  local_a0[0] = 0;
  local_6a0 = local_688;
  pppppppuStack_698 = local_688;
  local_690 = 0x40;
  if (lVar24 == 0) {
    uVar13 = 0xffffffff;
    goto LAB_029ed2b0;
  }
  uVar13 = *(uint *)(lVar24 + 0x1c0);
  if ((int)uVar13 < 1) {
    fVar28 = 0.0;
    if ((*(long *)(lVar24 + 0xb0) != 0) &&
       (puVar25 = *(uint **)(*(long *)(lVar24 + 0xb0) + 8), puVar25 != (uint *)0x0)) {
      uVar13 = *puVar25;
      goto joined_r0x029ecb04;
    }
LAB_029ed074:
    if (local_6a8 != 0) {
      uVar22 = param_1[3];
      uVar13 = *param_1 ^ *param_1 << 0xb;
      *param_1 = param_1[1];
      param_1[1] = param_1[2];
      uVar13 = uVar13 >> 8 ^ uVar22 >> 0x13 ^ uVar13 ^ uVar22;
      param_1[2] = uVar22;
      param_1[3] = uVar13;
      puVar10 = PTR_DAT_04bc4150;
      puVar9 = PTR_DAT_04bc4148;
      if ((uint ********)local_6b0 == &local_6b8) {
        uVar13 = 0xffffffff;
      }
      else {
        cVar16 = *PTR_DAT_04bc4148;
        uVar22 = *(uint *)(lVar24 + 0x1c0);
        fVar26 = fVar28 * ((float)(uVar13 >> 9 | 0x3f800000) + -1.0);
        do {
          uVar13 = *(uint *)(local_6b0 + -1);
          if ((int)uVar22 < 1) {
            if ((((*(long *)(lVar24 + 0xb0) != 0) &&
                 (puVar25 = *(uint **)(*(long *)(lVar24 + 0xb0) + 8), puVar25 != (uint *)0x0)) &&
                ((*(uint *)(lVar24 + 200) <= uVar13 ||
                 (*(char *)(*(long *)(lVar24 + 0xd0) + (long)(int)uVar13) != '\0')))) &&
               (((uVar13 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
              iVar12 = 0xc;
              if (*(char *)((long)puVar25 + 10) != '\0') {
                iVar12 = 0x1c;
              }
              puVar25 = (uint *)((ulong)(puVar25[1] * uVar13 + (uint)(ushort)puVar25[2] * 8 + iVar12
                                        ) + (long)puVar25);
              goto joined_r0x029ed264;
            }
          }
          else if (uVar13 < uVar22) {
            uVar17 = uVar13;
            if (*(uint *)(lVar24 + 0x1b0) <= uVar13) {
              uVar17 = 0;
            }
            puVar25 = *(uint **)(*(long *)(lVar24 + 0x1b8) + (ulong)uVar17 * 8);
joined_r0x029ed264:
            if (puVar25 != (uint *)0x0) {
              uVar17 = *puVar25;
              if (uVar17 != 0) {
                do {
                  if (cVar16 == '\0') {
                    *(undefined8 *)puVar10 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                    cVar16 = '\x01';
                    *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
                    uVar17 = *puVar25;
                    *puVar9 = 1;
                  }
                  else {
                    uVar5 = *(uint *)puVar10;
                    if (-1 < (int)uVar5) {
                      if ((float *)((ulong)uVar5 + (long)puVar25) != (float *)0x0) {
                        fVar27 = *(float *)((ulong)uVar5 + (long)puVar25);
                        goto LAB_029ed284;
                      }
                      break;
                    }
                    if (uVar5 != 0xffffffff) break;
                  }
                  if (((ulong)uVar17 == 0) || (lVar20 = (long)puVar25 - (ulong)uVar17, lVar20 == 0))
                  break;
                  lVar3 = 0xc;
                  if (*(char *)(lVar20 + 10) != '\0') {
                    lVar3 = 0x1c;
                  }
                  if (lVar3 + lVar20 == 0) break;
                  uVar14 = (ulong)*(ushort *)(lVar20 + 8);
                  *(undefined4 *)puVar10 = 0xfffffffe;
                  if (uVar14 == 0) break;
                  piVar15 = (int *)(lVar3 + lVar20 + 4);
                  while (piVar15[-1] != 0x293ee089) {
                    piVar15 = piVar15 + 2;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) goto LAB_029ed280;
                  }
                  iVar12 = 0;
                  if (*piVar15 != -1) {
                    iVar12 = *piVar15;
                  }
                  *(int *)puVar10 = iVar12;
                  uVar17 = *puVar25;
                  if (uVar17 == 0) break;
                } while( true );
              }
LAB_029ed280:
              fVar27 = 1.0;
LAB_029ed284:
              fVar28 = fVar28 - fVar27;
              if (fVar28 <= fVar26) break;
            }
          }
          local_6b0 = (uint *******)local_6b0[1];
        } while (local_6b0 + -1 != &local_6c0);
      }
      goto LAB_029ed2b0;
    }
  }
  else {
joined_r0x029ecb04:
    if ((param_3 & 1) != 0) {
      if (uVar13 != 0) {
        fVar28 = 0.0;
        uVar22 = 0;
LAB_029ec6ec:
        if ((int)*(uint *)(lVar24 + 0x1c0) < 1) {
          if ((((*(long *)(lVar24 + 0xb0) == 0) ||
               (puVar25 = *(uint **)(*(long *)(lVar24 + 0xb0) + 8), puVar25 == (uint *)0x0)) ||
              ((uVar22 < *(uint *)(lVar24 + 200) &&
               (*(char *)(*(long *)(lVar24 + 0xd0) + (long)(int)uVar22) == '\0')))) ||
             (((*puVar25 <= uVar22 || (puVar25[1] == 0)) || ((ushort)puVar25[2] == 0))))
          goto LAB_029ec6e0;
          iVar12 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar25 = (uint *)((ulong)(puVar25[1] * uVar22 + (uint)(ushort)puVar25[2] * 8 + iVar12) +
                            (long)puVar25);
          if (puVar25 == (uint *)0x0) goto LAB_029ec6e0;
LAB_029ec718:
          uVar17 = *puVar25;
          if (uVar17 != 0) {
            cVar16 = *PTR_DAT_04bc4148;
            do {
              if (cVar16 == '\0') {
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                cVar16 = '\x01';
                *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
                uVar17 = *puVar25;
                *PTR_DAT_04bc4148 = 1;
              }
              else {
                uVar5 = *(uint *)(puVar10 + 0x18);
                if (-1 < (int)uVar5) {
                  pcVar19 = (char *)((ulong)uVar5 + (long)puVar25);
                  goto LAB_029ec7fc;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar17;
              pcVar19 = (char *)0x0;
              if ((puVar8 == (uint *)0x0) || (pcVar19 = (char *)0x0, puVar25 == puVar8))
              goto LAB_029ec7fc;
              lVar20 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar8)) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar25 + (lVar20 - (long)puVar8);
              pcVar19 = (char *)0x0;
              if (lVar20 == 0) goto LAB_029ec7fc;
              uVar14 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar8));
              *(undefined4 *)(puVar10 + 0x18) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar15 = (int *)(lVar20 + 4);
              while (piVar15[-1] != -0x7f93028e) {
                piVar15 = piVar15 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029ec7f8;
              }
              iVar12 = 0;
              if (*piVar15 != -1) {
                iVar12 = *piVar15;
              }
              *(int *)(puVar10 + 0x18) = iVar12;
              uVar17 = *puVar25;
              if (uVar17 == 0) break;
            } while( true );
          }
LAB_029ec7f8:
          pcVar19 = (char *)0x0;
LAB_029ec7fc:
          pcVar2 = "EventNone";
          if (pcVar19 != (char *)0x0) {
            pcVar2 = pcVar19;
          }
          puVar8 = (uint *)((long)puVar25 - (ulong)*puVar25);
          if (((*puVar25 != 0) && (puVar8 != (uint *)0x0)) &&
             ((*puVar8 != 0 &&
              ((uVar17 = puVar8[1], uVar17 != 0 && ((ulong)(ushort)puVar8[2] != 0)))))) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar8 + lVar20 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar20 != 0) {
              uVar5 = 0;
              if ((ulong)uVar17 != 0) {
                uVar5 = (uint)((ulong)((long)puVar25 - lVar20) / (ulong)uVar17);
              }
              if (*puVar8 <= uVar5) {
                uVar5 = 0xffffffff;
              }
              if ((uVar5 < *(uint *)PTR_DAT_04bc4158) &&
                 (uVar6 = *(ushort *)(*(long *)(PTR_DAT_04bc4158 + 8) + (long)(int)uVar5 * 2),
                 uVar6 < 3 && uVar6 != 0)) goto LAB_029ec6e0;
            }
          }
          (**(code **)(DAT_055efdc0 + 0x18))(&DAT_055efdc0);
          pppppppuVar11 = local_6a0;
          pppppppuVar18 = local_6b8;
          if (pcVar2 != DAT_055efdc8) {
            if (*pcVar2 != *DAT_055efdc8) goto LAB_029ec6e0;
            if (*pcVar2 != '\0') {
              lVar20 = 0x7fffe;
              pcVar19 = DAT_055efdc8;
              do {
                if (pcVar2[1] != pcVar19[1]) goto LAB_029ec6e0;
                if (pcVar2[1] == '\0') break;
                if (pcVar2[2] != pcVar19[2]) goto LAB_029ec6e0;
                if (pcVar2[2] == '\0') break;
                if ((lVar20 == 0) || (cVar16 = pcVar2[3], cVar16 != pcVar19[3])) goto LAB_029ec6e0;
                lVar20 = lVar20 + -3;
                pcVar19 = pcVar19 + 3;
                pcVar2 = pcVar2 + 3;
              } while (cVar16 != '\0');
            }
          }
          if (local_6a8 < local_690) {
            if (local_6a0 != (undefined8 *******)0x0) {
              local_6a0 = (undefined8 *******)*local_6a0;
            }
            *(uint *)pppppppuVar11 = uVar22;
            local_6b8 = (uint *******)(pppppppuVar11 + 1);
            *local_6b8 = (uint ******)0x0;
            pppppppuVar11[2] = &local_6b8;
            *local_6b8 = (uint ******)pppppppuVar18;
            if (pppppppuVar18 != (uint *******)0x0) {
              pppppppuVar18[1] = (uint ******)local_6b8;
            }
            local_6a8 = local_6a8 + 1;
          }
          uVar17 = *puVar25;
          fVar26 = 1.0;
          if (uVar17 != 0) {
            cVar16 = *PTR_DAT_04bc4148;
            do {
              if (cVar16 == '\0') {
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                cVar16 = '\x01';
                *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
                uVar17 = *puVar25;
                *PTR_DAT_04bc4148 = 1;
              }
              else {
                uVar5 = *(uint *)puVar10;
                if (-1 < (int)uVar5) {
                  fVar26 = 1.0;
                  if ((float *)((long)puVar25 + (ulong)uVar5) != (float *)0x0) {
                    fVar26 = *(float *)((long)puVar25 + (ulong)uVar5);
                  }
                  break;
                }
                if (uVar5 != 0xffffffff) goto LAB_029ec6d4;
              }
              if (((ulong)uVar17 == 0) || (lVar20 = (long)puVar25 - (ulong)uVar17, lVar20 == 0))
              goto LAB_029ec6d4;
              lVar3 = 0xc;
              if (*(char *)(lVar20 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar20 == 0) goto LAB_029ec6d4;
              uVar14 = (ulong)*(ushort *)(lVar20 + 8);
              *(undefined4 *)puVar10 = 0xfffffffe;
              if (uVar14 == 0) goto LAB_029ec6d4;
              piVar15 = (int *)(lVar3 + lVar20 + 4);
              while (piVar15[-1] != 0x293ee089) {
                piVar15 = piVar15 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029ec6d4;
              }
              iVar12 = 0;
              if (*piVar15 != -1) {
                iVar12 = *piVar15;
              }
              *(int *)puVar10 = iVar12;
              uVar17 = *puVar25;
              if (uVar17 == 0) goto LAB_029ec6d4;
            } while( true );
          }
          goto LAB_029ec6d8;
        }
        if (uVar22 < *(uint *)(lVar24 + 0x1c0)) {
          uVar17 = uVar22;
          if (*(uint *)(lVar24 + 0x1b0) <= uVar22) {
            uVar17 = 0;
          }
          puVar25 = *(uint **)(*(long *)(lVar24 + 0x1b8) + (ulong)uVar17 * 8);
          if (puVar25 != (uint *)0x0) goto LAB_029ec718;
        }
        goto LAB_029ec6e0;
      }
      fVar28 = 0.0;
      goto LAB_029ed074;
    }
    if (uVar13 != 0) {
      fVar28 = 0.0;
      uVar22 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_029ecb7c:
      if ((int)*(uint *)(lVar24 + 0x1c0) < 1) {
        if ((((*(long *)(lVar24 + 0xb0) != 0) &&
             (puVar25 = *(uint **)(*(long *)(lVar24 + 0xb0) + 8), puVar25 != (uint *)0x0)) &&
            ((*(uint *)(lVar24 + 200) <= uVar22 ||
             (*(char *)(*(long *)(lVar24 + 0xd0) + (long)(int)uVar22) != '\0')))) &&
           (((uVar22 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
          iVar12 = 0xc;
          if (*(char *)((long)puVar25 + 10) != '\0') {
            iVar12 = 0x1c;
          }
          puVar25 = (uint *)((ulong)(puVar25[1] * uVar22 + (uint)(ushort)puVar25[2] * 8 + iVar12) +
                            (long)puVar25);
          goto joined_r0x029ece64;
        }
      }
      else if (uVar22 < *(uint *)(lVar24 + 0x1c0)) {
        uVar17 = uVar22;
        if (*(uint *)(lVar24 + 0x1b0) <= uVar22) {
          uVar17 = 0;
        }
        puVar25 = *(uint **)(*(long *)(lVar24 + 0x1b8) + (ulong)uVar17 * 8);
joined_r0x029ece64:
        if (puVar25 != (uint *)0x0) {
          uVar17 = *puVar25;
          if (uVar17 != 0) {
            cVar16 = *puVar9;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
                uVar17 = *puVar25;
                *puVar9 = 1;
              }
              else {
                uVar5 = *(uint *)(puVar10 + 0x18);
                if (-1 < (int)uVar5) {
                  ppppppuVar21 = (uint ******)((ulong)uVar5 + (long)puVar25);
                  goto LAB_029ecc6c;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar17;
              ppppppuVar21 = (uint ******)0x0;
              if ((puVar8 == (uint *)0x0) || (ppppppuVar21 = (uint ******)0x0, puVar25 == puVar8))
              goto LAB_029ecc6c;
              lVar20 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar8)) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar25 + (lVar20 - (long)puVar8);
              ppppppuVar21 = (uint ******)0x0;
              if (lVar20 == 0) goto LAB_029ecc6c;
              uVar14 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar8));
              *(undefined4 *)(puVar10 + 0x18) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar15 = (int *)(lVar20 + 4);
              while (piVar15[-1] != -0x7f93028e) {
                piVar15 = piVar15 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029ecc68;
              }
              iVar12 = 0;
              if (*piVar15 != -1) {
                iVar12 = *piVar15;
              }
              *(int *)(puVar10 + 0x18) = iVar12;
              uVar17 = *puVar25;
              if (uVar17 == 0) break;
            } while( true );
          }
LAB_029ecc68:
          ppppppuVar21 = (uint ******)0x0;
LAB_029ecc6c:
          local_6c0 = (uint ******)"EventNone";
          if (ppppppuVar21 != (uint ******)0x0) {
            local_6c0 = ppppppuVar21;
          }
          uVar17 = *puVar25;
          if (uVar17 != 0) {
            cVar16 = *puVar9;
            do {
              if (cVar16 == '\0') {
                cVar16 = '\x01';
                *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar10 = 0xffffffffffffffff;
                *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
                uVar17 = *puVar25;
                *puVar9 = 1;
              }
              else {
                uVar5 = *(uint *)(puVar10 + 0x14);
                if (-1 < (int)uVar5) {
                  uVar17 = 0;
                  if ((byte *)((ulong)uVar5 + (long)puVar25) != (byte *)0x0) {
                    uVar17 = (uint)*(byte *)((ulong)uVar5 + (long)puVar25);
                  }
                  goto LAB_029ecd3c;
                }
                if (uVar5 != 0xffffffff) break;
              }
              puVar8 = (uint *)(ulong)uVar17;
              uVar17 = 0;
              if ((puVar8 == (uint *)0x0) || (uVar17 = 0, puVar25 == puVar8)) goto LAB_029ecd3c;
              lVar20 = 0xc;
              if (*(char *)((long)puVar25 + (10 - (long)puVar8)) != '\0') {
                lVar20 = 0x1c;
              }
              lVar20 = (long)puVar25 + (lVar20 - (long)puVar8);
              if (lVar20 == 0) break;
              uVar14 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar8));
              *(undefined4 *)(puVar10 + 0x14) = 0xfffffffe;
              uVar17 = 0;
              if (uVar14 == 0) goto LAB_029ecd3c;
              piVar15 = (int *)(lVar20 + 4);
              while (piVar15[-1] != 0x244ce4) {
                piVar15 = piVar15 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  uVar17 = 0;
                  goto LAB_029ecd3c;
                }
              }
              iVar12 = 0;
              if (*piVar15 != -1) {
                iVar12 = *piVar15;
              }
              *(int *)(puVar10 + 0x14) = iVar12;
              uVar17 = *puVar25;
            } while (uVar17 != 0);
          }
          uVar17 = 0;
LAB_029ecd3c:
          puVar8 = (uint *)((long)puVar25 - (ulong)*puVar25);
          if ((((*puVar25 != 0) && (puVar8 != (uint *)0x0)) && (*puVar8 != 0)) &&
             ((uVar5 = puVar8[1], uVar5 != 0 && ((ulong)(ushort)puVar8[2] != 0)))) {
            lVar20 = 0xc;
            if (*(char *)((long)puVar8 + 10) != '\0') {
              lVar20 = 0x1c;
            }
            lVar20 = (long)puVar8 + lVar20 + (ulong)(ushort)puVar8[2] * 8;
            if (lVar20 != 0) {
              uVar4 = 0;
              if ((ulong)uVar5 != 0) {
                uVar4 = (uint)((ulong)((long)puVar25 - lVar20) / (ulong)uVar5);
              }
              if (*puVar8 <= uVar4) {
                uVar4 = 0xffffffff;
              }
              if ((uVar4 < *(uint *)PTR_DAT_04bc4158) &&
                 (sVar7 = *(short *)(*(long *)(PTR_DAT_04bc4158 + 8) + (long)(int)uVar4 * 2),
                 0xfffc < (ushort)(sVar7 - 4U))) {
                uVar5 = (int)*(char *)((long)param_2 + 4) +
                        (int)(((long)*(char *)((long)param_2 + 4) & 0xffffffffU) / 0x18) * -0x18;
                if (uVar5 < 5) {
LAB_029ece9c:
                  if (sVar7 == 3) goto LAB_029eceb0;
                }
                else if (uVar5 < 0xc) {
                  if (sVar7 == 1) goto LAB_029eceb0;
                }
                else {
                  if (0x14 < uVar5) goto LAB_029ece9c;
                  if (sVar7 == 2) goto LAB_029eceb0;
                }
                goto LAB_029ecb70;
              }
            }
          }
LAB_029eceb0:
          local_88 = *param_2;
          iVar12 = uVar17 + 1;
          local_6c8 = puVar1;
          do {
            uVar14 = FUN_029ec1a0(&local_6c8,&local_88);
            pppppppuVar11 = local_6a0;
            pppppppuVar18 = local_6b8;
            if ((uVar14 & 1) != 0) {
              if (local_6a8 < local_690) {
                if (local_6a0 != (undefined8 *******)0x0) {
                  local_6a0 = (undefined8 *******)*local_6a0;
                }
                *(uint *)pppppppuVar11 = uVar22;
                local_6b8 = (uint *******)(pppppppuVar11 + 1);
                *local_6b8 = (uint ******)0x0;
                pppppppuVar11[2] = &local_6b8;
                *local_6b8 = (uint ******)pppppppuVar18;
                if (pppppppuVar18 != (uint *******)0x0) {
                  pppppppuVar18[1] = (uint ******)local_6b8;
                }
                local_6a8 = local_6a8 + 1;
              }
              uVar17 = *puVar25;
              fVar26 = 1.0;
              if (uVar17 == 0) goto LAB_029ecb6c;
              cVar16 = *puVar9;
              goto LAB_029ecfb0;
            }
            local_80[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
            local_80[0] = local_80[0] + 0x15180;
            local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_80);
            iVar12 = iVar12 + -1;
          } while (iVar12 != 0);
        }
      }
      goto LAB_029ecb70;
    }
  }
  uVar13 = 0xffffffff;
LAB_029ed2b0:
  do {
    pppppppuVar18 = (uint *******)*pppppppuVar23;
    pppppppuVar23 = pppppppuVar18 + 1;
  } while ((uint ********)pppppppuVar18 != &local_6b8);
  return uVar13;
LAB_029ec6d4:
  fVar26 = 1.0;
LAB_029ec6d8:
  fVar28 = fVar28 + fVar26;
LAB_029ec6e0:
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar13) goto LAB_029ed074;
  goto LAB_029ec6ec;
LAB_029ecfb0:
  if (cVar16 == '\0') {
    cVar16 = '\x01';
    *(undefined8 *)(puVar10 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar10 = 0xffffffffffffffff;
    *(undefined8 *)(puVar10 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar10 + 0x18) = 0xffffffff;
    uVar17 = *puVar25;
    *puVar9 = 1;
  }
  else {
    uVar5 = *(uint *)puVar10;
    if (-1 < (int)uVar5) {
      fVar26 = 1.0;
      if ((float *)((long)puVar25 + (ulong)uVar5) != (float *)0x0) {
        fVar26 = *(float *)((long)puVar25 + (ulong)uVar5);
      }
      goto LAB_029ecb6c;
    }
    if (uVar5 != 0xffffffff) goto LAB_029ecb68;
  }
  if (((ulong)uVar17 == 0) || (lVar20 = (long)puVar25 - (ulong)uVar17, lVar20 == 0))
  goto LAB_029ecb68;
  lVar3 = 0xc;
  if (*(char *)(lVar20 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar20 == 0) goto LAB_029ecb68;
  uVar14 = (ulong)*(ushort *)(lVar20 + 8);
  *(undefined4 *)puVar10 = 0xfffffffe;
  if (uVar14 == 0) goto LAB_029ecb68;
  piVar15 = (int *)(lVar3 + lVar20 + 4);
  while (piVar15[-1] != 0x293ee089) {
    piVar15 = piVar15 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_029ecb68;
  }
  iVar12 = 0;
  if (*piVar15 != -1) {
    iVar12 = *piVar15;
  }
  *(int *)puVar10 = iVar12;
  uVar17 = *puVar25;
  if (uVar17 == 0) goto LAB_029ecb68;
  goto LAB_029ecfb0;
LAB_029ecb68:
  fVar26 = 1.0;
LAB_029ecb6c:
  fVar28 = fVar28 + fVar26;
LAB_029ecb70:
  uVar22 = uVar22 + 1;
  if (uVar22 == uVar13) goto LAB_029ed074;
  goto LAB_029ecb7c;
}

