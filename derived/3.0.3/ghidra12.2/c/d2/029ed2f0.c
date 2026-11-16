
/* WARNING: Type propagation algorithm not settling */

uint FUN_029ed2f0(uint *param_1,undefined8 *param_2,ulong param_3)

{
  undefined *puVar1;
  uint uVar2;
  long lVar3;
  byte bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *******pppppppuVar7;
  uint uVar8;
  int *piVar9;
  char cVar10;
  uint uVar11;
  uint *******pppppppuVar12;
  uint *puVar13;
  ulong uVar14;
  char *pcVar15;
  long lVar16;
  uint ******ppppppuVar17;
  int iVar18;
  uint uVar19;
  uint *puVar20;
  uint *******pppppppuVar21;
  long lVar22;
  char *pcVar23;
  float fVar24;
  float fVar25;
  float fVar26;
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
  
  puVar6 = PTR_DAT_04bc4168;
  puVar5 = PTR_DAT_04bc4160;
  local_6a8 = 0;
  pppppppuVar21 = (uint *******)&local_6b0;
  local_688[0] = local_670;
  local_670[0] = local_658;
  local_658[0] = local_640;
  local_628[0] = local_610;
  local_640[0] = local_628;
  local_5f8[0] = local_5e0;
  local_5c8[0] = local_5b0;
  local_610[0] = local_5f8;
  local_598[0] = local_580;
  local_568[0] = local_550;
  local_5e0[0] = local_5c8;
  local_538[0] = local_520;
  local_508[0] = local_4f0;
  local_5b0[0] = local_598;
  local_4d8[0] = local_4c0;
  local_4a8[0] = local_490;
  local_580[0] = local_568;
  local_490[0] = local_478;
  local_478[0] = local_460;
  local_550[0] = local_538;
  local_460[0] = local_448;
  local_448[0] = local_430;
  local_520[0] = local_508;
  local_430[0] = local_418;
  local_418[0] = local_400;
  local_4f0[0] = local_4d8;
  local_400[0] = local_3e8;
  local_3e8[0] = local_3d0;
  local_4c0[0] = local_4a8;
  local_3d0[0] = local_3b8;
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
  local_6b8 = (uint *******)&local_6b8;
  local_6b0 = (uint *******)&local_6b8;
  local_a0[0] = 0;
  lVar22 = *(long *)(*(long *)PTR_DAT_04bb26a8 + 0x19f7e8);
  local_6a0 = local_688;
  pppppppuStack_698 = local_688;
  local_690 = 0x40;
  if (lVar22 == 0) {
    uVar8 = 0xffffffff;
    goto LAB_029ee1e0;
  }
  uVar8 = *(uint *)(lVar22 + 0x1c0);
  if ((int)uVar8 < 1) {
    fVar26 = 0.0;
    if ((*(long *)(lVar22 + 0xb0) != 0) &&
       (puVar20 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar20 != (uint *)0x0)) {
      uVar8 = *puVar20;
      goto joined_r0x029ed9f4;
    }
LAB_029edfa4:
    if (local_6a8 != 0) {
      uVar19 = param_1[3];
      uVar8 = *param_1 ^ *param_1 << 0xb;
      *param_1 = param_1[1];
      param_1[1] = param_1[2];
      uVar8 = uVar8 >> 8 ^ uVar19 >> 0x13 ^ uVar8 ^ uVar19;
      param_1[2] = uVar19;
      param_1[3] = uVar8;
      puVar6 = PTR_DAT_04bc4168;
      puVar5 = PTR_DAT_04bc4160;
      if ((uint ********)local_6b0 == &local_6b8) {
        uVar8 = 0xffffffff;
      }
      else {
        cVar10 = *PTR_DAT_04bc4160;
        uVar19 = *(uint *)(lVar22 + 0x1c0);
        fVar24 = fVar26 * ((float)(uVar8 >> 9 | 0x3f800000) + -1.0);
        do {
          uVar8 = *(uint *)(local_6b0 + -1);
          if ((int)uVar19 < 1) {
            if ((((*(long *)(lVar22 + 0xb0) != 0) &&
                 (puVar20 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar20 != (uint *)0x0)) &&
                ((*(uint *)(lVar22 + 200) <= uVar8 ||
                 (*(char *)(*(long *)(lVar22 + 0xd0) + (long)(int)uVar8) != '\0')))) &&
               (((uVar8 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
              iVar18 = 0xc;
              if (*(char *)((long)puVar20 + 10) != '\0') {
                iVar18 = 0x1c;
              }
              puVar20 = (uint *)((ulong)(puVar20[1] * uVar8 + (uint)(ushort)puVar20[2] * 8 + iVar18)
                                + (long)puVar20);
              goto joined_r0x029ee194;
            }
          }
          else if (uVar8 < uVar19) {
            uVar2 = uVar8;
            if (*(uint *)(lVar22 + 0x1b0) <= uVar8) {
              uVar2 = 0;
            }
            puVar20 = *(uint **)(*(long *)(lVar22 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x029ee194:
            if (puVar20 != (uint *)0x0) {
              uVar2 = *puVar20;
              if (uVar2 != 0) {
                do {
                  if (cVar10 == '\0') {
                    *(undefined8 *)puVar6 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                    cVar10 = '\x01';
                    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                    *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
                    uVar2 = *puVar20;
                    *puVar5 = 1;
                  }
                  else {
                    uVar11 = *(uint *)puVar6;
                    if (-1 < (int)uVar11) {
                      if ((float *)((ulong)uVar11 + (long)puVar20) != (float *)0x0) {
                        fVar25 = *(float *)((ulong)uVar11 + (long)puVar20);
                        goto LAB_029ee1b4;
                      }
                      break;
                    }
                    if (uVar11 != 0xffffffff) break;
                  }
                  if (((ulong)uVar2 == 0) || (lVar16 = (long)puVar20 - (ulong)uVar2, lVar16 == 0))
                  break;
                  lVar3 = 0xc;
                  if (*(char *)(lVar16 + 10) != '\0') {
                    lVar3 = 0x1c;
                  }
                  if (lVar3 + lVar16 == 0) break;
                  uVar14 = (ulong)*(ushort *)(lVar16 + 8);
                  *(undefined4 *)puVar6 = 0xfffffffe;
                  if (uVar14 == 0) break;
                  piVar9 = (int *)(lVar3 + lVar16 + 4);
                  while (piVar9[-1] != 0x293ee089) {
                    piVar9 = piVar9 + 2;
                    uVar14 = uVar14 - 1;
                    if (uVar14 == 0) goto LAB_029ee1b0;
                  }
                  iVar18 = 0;
                  if (*piVar9 != -1) {
                    iVar18 = *piVar9;
                  }
                  *(int *)puVar6 = iVar18;
                  uVar2 = *puVar20;
                  if (uVar2 == 0) break;
                } while( true );
              }
LAB_029ee1b0:
              fVar25 = 1.0;
LAB_029ee1b4:
              fVar26 = fVar26 - fVar25;
              if (fVar26 <= fVar24) break;
            }
          }
          local_6b0 = (uint *******)local_6b0[1];
        } while (local_6b0 + -1 != &local_6c0);
      }
      goto LAB_029ee1e0;
    }
  }
  else {
joined_r0x029ed9f4:
    if ((param_3 & 1) != 0) {
      if (uVar8 != 0) {
        fVar26 = 0.0;
        uVar19 = 0;
LAB_029ed5bc:
        if ((int)*(uint *)(lVar22 + 0x1c0) < 1) {
          if ((((*(long *)(lVar22 + 0xb0) == 0) ||
               (puVar20 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar20 == (uint *)0x0)) ||
              ((uVar19 < *(uint *)(lVar22 + 200) &&
               (*(char *)(*(long *)(lVar22 + 0xd0) + (long)(int)uVar19) == '\0')))) ||
             (((*puVar20 <= uVar19 || (puVar20[1] == 0)) || ((ushort)puVar20[2] == 0))))
          goto LAB_029ed5b0;
          iVar18 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            iVar18 = 0x1c;
          }
          puVar20 = (uint *)((ulong)(puVar20[1] * uVar19 + (uint)(ushort)puVar20[2] * 8 + iVar18) +
                            (long)puVar20);
          if (puVar20 == (uint *)0x0) goto LAB_029ed5b0;
LAB_029ed5e8:
          uVar2 = *puVar20;
          if (uVar2 != 0) {
            cVar10 = *PTR_DAT_04bc4160;
            do {
              puVar13 = (uint *)(ulong)uVar2;
              if (cVar10 != '\0') {
                uVar2 = *(uint *)(puVar6 + 0x14);
                if ((int)uVar2 < 0) {
                  if (uVar2 == 0xffffffff) {
                    pcVar15 = (char *)0x0;
                    if (puVar13 != (uint *)0x0) goto LAB_029ed64c;
                  }
                  else {
LAB_029ed72c:
                    pcVar15 = (char *)0x0;
                  }
                }
                else {
                  pcVar15 = (char *)((ulong)uVar2 + (long)puVar20);
                }
LAB_029ed730:
                uVar2 = *puVar20;
                pcVar23 = "EventNone";
                if (pcVar15 != (char *)0x0) {
                  pcVar23 = pcVar15;
                }
                if (uVar2 == 0) goto LAB_029ed7f4;
                uVar14 = (ulong)*(uint *)(puVar6 + 0x18);
                goto LAB_029ed74c;
              }
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              cVar10 = '\x01';
              *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
              puVar13 = (uint *)(ulong)*puVar20;
              *PTR_DAT_04bc4160 = 1;
              pcVar15 = (char *)0x0;
              if (puVar13 == (uint *)0x0) goto LAB_029ed730;
LAB_029ed64c:
              pcVar15 = (char *)0x0;
              if (puVar20 == puVar13) goto LAB_029ed730;
              lVar16 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar20 + (lVar16 - (long)puVar13);
              pcVar15 = (char *)0x0;
              if (lVar16 == 0) goto LAB_029ed730;
              uVar14 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
              *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
              if (uVar14 == 0) goto LAB_029ed72c;
              piVar9 = (int *)(lVar16 + 4);
              while (piVar9[-1] != -0x7f93028e) {
                piVar9 = piVar9 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029ed72c;
              }
              iVar18 = 0;
              if (*piVar9 != -1) {
                iVar18 = *piVar9;
              }
              *(int *)(puVar6 + 0x14) = iVar18;
              uVar2 = *puVar20;
            } while (uVar2 != 0);
          }
          pcVar23 = "EventNone";
LAB_029ed7f4:
          (**(code **)(DAT_055efdc0 + 0x18))(&DAT_055efdc0);
          pppppppuVar7 = local_6a0;
          pppppppuVar12 = local_6b8;
          if (pcVar23 != DAT_055efdc8) {
            if (*pcVar23 != *DAT_055efdc8) goto LAB_029ed5b0;
            if (*pcVar23 != '\0') {
              lVar16 = 0x7fffe;
              pcVar15 = DAT_055efdc8;
              do {
                if (pcVar23[1] != pcVar15[1]) goto LAB_029ed5b0;
                if (pcVar23[1] == '\0') break;
                if (pcVar23[2] != pcVar15[2]) goto LAB_029ed5b0;
                if (pcVar23[2] == '\0') break;
                if ((lVar16 == 0) || (cVar10 = pcVar23[3], cVar10 != pcVar15[3])) goto LAB_029ed5b0;
                lVar16 = lVar16 + -3;
                pcVar15 = pcVar15 + 3;
                pcVar23 = pcVar23 + 3;
              } while (cVar10 != '\0');
            }
          }
          if (local_6a8 < local_690) {
            if (local_6a0 != (undefined8 *******)0x0) {
              local_6a0 = (undefined8 *******)*local_6a0;
            }
            *(uint *)pppppppuVar7 = uVar19;
            local_6b8 = (uint *******)(pppppppuVar7 + 1);
            *local_6b8 = (uint ******)0x0;
            pppppppuVar7[2] = &local_6b8;
            *local_6b8 = (uint ******)pppppppuVar12;
            if (pppppppuVar12 != (uint *******)0x0) {
              pppppppuVar12[1] = (uint ******)local_6b8;
            }
            local_6a8 = local_6a8 + 1;
          }
          uVar2 = *puVar20;
          fVar24 = 1.0;
          if (uVar2 != 0) {
            cVar10 = *PTR_DAT_04bc4160;
            do {
              if (cVar10 == '\0') {
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                cVar10 = '\x01';
                *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
                uVar2 = *puVar20;
                *PTR_DAT_04bc4160 = 1;
              }
              else {
                uVar11 = *(uint *)puVar6;
                if (-1 < (int)uVar11) {
                  fVar24 = 1.0;
                  if ((float *)((ulong)uVar11 + (long)puVar20) != (float *)0x0) {
                    fVar24 = *(float *)((ulong)uVar11 + (long)puVar20);
                  }
                  break;
                }
                if (uVar11 != 0xffffffff) goto LAB_029ed9a8;
              }
              if (((ulong)uVar2 == 0) || (lVar16 = (long)puVar20 - (ulong)uVar2, lVar16 == 0))
              goto LAB_029ed9a8;
              lVar3 = 0xc;
              if (*(char *)(lVar16 + 10) != '\0') {
                lVar3 = 0x1c;
              }
              if (lVar3 + lVar16 == 0) goto LAB_029ed9a8;
              uVar14 = (ulong)*(ushort *)(lVar16 + 8);
              *(undefined4 *)puVar6 = 0xfffffffe;
              if (uVar14 == 0) goto LAB_029ed9a8;
              piVar9 = (int *)(lVar3 + lVar16 + 4);
              while (piVar9[-1] != 0x293ee089) {
                piVar9 = piVar9 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029ed9a8;
              }
              iVar18 = 0;
              if (*piVar9 != -1) {
                iVar18 = *piVar9;
              }
              *(int *)puVar6 = iVar18;
              uVar2 = *puVar20;
              if (uVar2 == 0) goto LAB_029ed9a8;
            } while( true );
          }
          goto LAB_029ed9ac;
        }
        if (uVar19 < *(uint *)(lVar22 + 0x1c0)) {
          uVar2 = uVar19;
          if (*(uint *)(lVar22 + 0x1b0) <= uVar19) {
            uVar2 = 0;
          }
          puVar20 = *(uint **)(*(long *)(lVar22 + 0x1b8) + (ulong)uVar2 * 8);
          if (puVar20 != (uint *)0x0) goto LAB_029ed5e8;
        }
        goto LAB_029ed5b0;
      }
      fVar26 = 0.0;
      goto LAB_029edfa4;
    }
    if (uVar8 != 0) {
      fVar26 = 0.0;
      uVar19 = 0;
      puVar1 = PTR_DAT_04bb2020 + 0x10;
LAB_029eda7c:
      if ((int)*(uint *)(lVar22 + 0x1c0) < 1) {
        if ((((*(long *)(lVar22 + 0xb0) != 0) &&
             (puVar20 = *(uint **)(*(long *)(lVar22 + 0xb0) + 8), puVar20 != (uint *)0x0)) &&
            ((*(uint *)(lVar22 + 200) <= uVar19 ||
             (*(char *)(*(long *)(lVar22 + 0xd0) + (long)(int)uVar19) != '\0')))) &&
           (((uVar19 < *puVar20 && (puVar20[1] != 0)) && ((ushort)puVar20[2] != 0)))) {
          iVar18 = 0xc;
          if (*(char *)((long)puVar20 + 10) != '\0') {
            iVar18 = 0x1c;
          }
          puVar20 = (uint *)((ulong)(puVar20[1] * uVar19 + (uint)(ushort)puVar20[2] * 8 + iVar18) +
                            (long)puVar20);
          goto joined_r0x029edaa4;
        }
      }
      else if (uVar19 < *(uint *)(lVar22 + 0x1c0)) {
        uVar2 = uVar19;
        if (*(uint *)(lVar22 + 0x1b0) <= uVar19) {
          uVar2 = 0;
        }
        puVar20 = *(uint **)(*(long *)(lVar22 + 0x1b8) + (ulong)uVar2 * 8);
joined_r0x029edaa4:
        if (puVar20 != (uint *)0x0) {
          uVar2 = *puVar20;
          if (uVar2 != 0) {
            cVar10 = *puVar5;
            do {
              if (cVar10 == '\0') {
                cVar10 = '\x01';
                *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
                *(undefined8 *)puVar6 = 0xffffffffffffffff;
                *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
                *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
                uVar2 = *puVar20;
                *puVar5 = 1;
              }
              else {
                uVar11 = *(uint *)(puVar6 + 0x14);
                if (-1 < (int)uVar11) {
                  ppppppuVar17 = (uint ******)((ulong)uVar11 + (long)puVar20);
                  goto LAB_029edb6c;
                }
                if (uVar11 != 0xffffffff) break;
              }
              puVar13 = (uint *)(ulong)uVar2;
              ppppppuVar17 = (uint ******)0x0;
              if ((puVar13 == (uint *)0x0) || (ppppppuVar17 = (uint ******)0x0, puVar20 == puVar13))
              goto LAB_029edb6c;
              lVar16 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar20 + (lVar16 - (long)puVar13);
              ppppppuVar17 = (uint ******)0x0;
              if (lVar16 == 0) goto LAB_029edb6c;
              uVar14 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
              *(undefined4 *)(puVar6 + 0x14) = 0xfffffffe;
              if (uVar14 == 0) break;
              piVar9 = (int *)(lVar16 + 4);
              while (piVar9[-1] != -0x7f93028e) {
                piVar9 = piVar9 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) goto LAB_029edb68;
              }
              iVar18 = 0;
              if (*piVar9 != -1) {
                iVar18 = *piVar9;
              }
              *(int *)(puVar6 + 0x14) = iVar18;
              uVar2 = *puVar20;
              if (uVar2 == 0) break;
            } while( true );
          }
LAB_029edb68:
          ppppppuVar17 = (uint ******)0x0;
LAB_029edb6c:
          local_6c0 = (uint ******)"EventNone";
          if (ppppppuVar17 != (uint ******)0x0) {
            local_6c0 = ppppppuVar17;
          }
          uVar2 = *puVar20;
          if (uVar2 != 0) {
            cVar10 = *puVar5;
            do {
              puVar13 = (uint *)(ulong)uVar2;
              if (cVar10 != '\0') {
                uVar2 = *(uint *)(puVar6 + 0x10);
                if ((int)uVar2 < 0) {
                  if (uVar2 == 0xffffffff) {
                    uVar11 = 0;
                    if (puVar13 != (uint *)0x0) goto LAB_029edbd8;
                  }
                  else {
LAB_029edcb8:
                    uVar11 = 0;
                  }
                }
                else {
                  uVar11 = 0;
                  if ((byte *)((ulong)uVar2 + (long)puVar20) != (byte *)0x0) {
                    uVar11 = (uint)*(byte *)((ulong)uVar2 + (long)puVar20);
                  }
                }
LAB_029edcd4:
                uVar2 = *puVar20;
                if (uVar2 == 0) goto LAB_029edde4;
                uVar14 = (ulong)*(uint *)(puVar6 + 0x18);
                goto LAB_029edce0;
              }
              cVar10 = '\x01';
              *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
              *(undefined8 *)puVar6 = 0xffffffffffffffff;
              *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
              *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
              puVar13 = (uint *)(ulong)*puVar20;
              *puVar5 = 1;
              uVar11 = 0;
              if (puVar13 == (uint *)0x0) goto LAB_029edcd4;
LAB_029edbd8:
              uVar11 = 0;
              if (puVar20 == puVar13) goto LAB_029edcd4;
              lVar16 = 0xc;
              if (*(char *)((long)puVar20 + (10 - (long)puVar13)) != '\0') {
                lVar16 = 0x1c;
              }
              lVar16 = (long)puVar20 + (lVar16 - (long)puVar13);
              if (lVar16 == 0) goto LAB_029edcb8;
              uVar14 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar13));
              *(undefined4 *)(puVar6 + 0x10) = 0xfffffffe;
              uVar11 = 0;
              if (uVar14 == 0) goto LAB_029edcd4;
              piVar9 = (int *)(lVar16 + 4);
              while (piVar9[-1] != 0x244ce4) {
                piVar9 = piVar9 + 2;
                uVar14 = uVar14 - 1;
                if (uVar14 == 0) {
                  uVar11 = 0;
                  goto LAB_029edcd4;
                }
              }
              iVar18 = 0;
              if (*piVar9 != -1) {
                iVar18 = *piVar9;
              }
              *(int *)(puVar6 + 0x10) = iVar18;
              uVar2 = *puVar20;
            } while (uVar2 != 0);
          }
          uVar11 = 0;
LAB_029edde4:
          iVar18 = uVar11 + 1;
          local_88 = *param_2;
          local_6c8 = puVar1;
          do {
            uVar14 = FUN_029ec1a0(&local_6c8,&local_88);
            pppppppuVar7 = local_6a0;
            pppppppuVar12 = local_6b8;
            if ((uVar14 & 1) != 0) {
              if (local_6a8 < local_690) {
                if (local_6a0 != (undefined8 *******)0x0) {
                  local_6a0 = (undefined8 *******)*local_6a0;
                }
                *(uint *)pppppppuVar7 = uVar19;
                local_6b8 = (uint *******)(pppppppuVar7 + 1);
                *local_6b8 = (uint ******)0x0;
                pppppppuVar7[2] = &local_6b8;
                *local_6b8 = (uint ******)pppppppuVar12;
                if (pppppppuVar12 != (uint *******)0x0) {
                  pppppppuVar12[1] = (uint ******)local_6b8;
                }
                local_6a8 = local_6a8 + 1;
              }
              uVar2 = *puVar20;
              fVar24 = 1.0;
              if (uVar2 == 0) goto LAB_029eda64;
              cVar10 = *puVar5;
              goto LAB_029edee0;
            }
            local_80[0] = nn::time::ToPosixTimeFromUtc((CalendarTime *)&local_88);
            local_80[0] = local_80[0] + 0x15180;
            local_88 = nn::time::ToCalendarTimeInUtc((PosixTime *)local_80);
            iVar18 = iVar18 + -1;
          } while (iVar18 != 0);
        }
      }
      goto LAB_029eda70;
    }
  }
  uVar8 = 0xffffffff;
LAB_029ee1e0:
  do {
    pppppppuVar12 = (uint *******)*pppppppuVar21;
    pppppppuVar21 = pppppppuVar12 + 1;
  } while ((uint ********)pppppppuVar12 != &local_6b8);
  return uVar8;
LAB_029ed74c:
  if (-1 < (int)uVar14) {
    if ((byte *)(uVar14 + (long)puVar20) != (byte *)0x0) {
      bVar4 = *(byte *)(uVar14 + (long)puVar20);
      if (((bVar4 < 4) && (bVar4 != 3)) && (bVar4 != 0)) goto LAB_029ed5b0;
    }
    goto LAB_029ed7f4;
  }
  if ((uVar14 != 0xffffffff) || (lVar16 = (long)puVar20 - (ulong)uVar2, lVar16 == 0))
  goto LAB_029ed7f4;
  lVar3 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar16 == 0) goto LAB_029ed7f4;
  uVar14 = (ulong)*(ushort *)(lVar16 + 8);
  *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_029ed7f4;
  puVar13 = (uint *)(lVar3 + lVar16 + 4);
  while (puVar13[-1] != 0x627277e6) {
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_029ed7f4;
  }
  uVar14 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar14 = (ulong)*puVar13;
  }
  *(int *)(puVar6 + 0x18) = (int)uVar14;
  uVar2 = *puVar20;
  if (uVar2 == 0) goto LAB_029ed7f4;
  goto LAB_029ed74c;
LAB_029ed9a8:
  fVar24 = 1.0;
LAB_029ed9ac:
  fVar26 = fVar26 + fVar24;
LAB_029ed5b0:
  uVar19 = uVar19 + 1;
  if (uVar19 == uVar8) goto LAB_029edfa4;
  goto LAB_029ed5bc;
LAB_029edce0:
  if (-1 < (int)uVar14) {
    if (((char *)(uVar14 + (long)puVar20) == (char *)0x0) ||
       (cVar10 = *(char *)(uVar14 + (long)puVar20), (byte)(cVar10 - 4U) < 0xfd)) goto LAB_029edde4;
    uVar2 = (int)*(char *)((long)param_2 + 4) +
            (int)(((long)*(char *)((long)param_2 + 4) & 0xffffffffU) / 0x18) * -0x18;
    if (4 < uVar2) {
      if (uVar2 < 0xc) {
        if (cVar10 != '\x01') goto LAB_029eda70;
        goto LAB_029edde4;
      }
      if (uVar2 < 0x15) {
        if (cVar10 != '\x02') goto LAB_029eda70;
        goto LAB_029edde4;
      }
    }
    if (cVar10 != '\x03') goto LAB_029eda70;
    goto LAB_029edde4;
  }
  if ((uVar14 != 0xffffffff) || (lVar16 = (long)puVar20 - (ulong)uVar2, lVar16 == 0))
  goto LAB_029edde4;
  lVar3 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar16 == 0) goto LAB_029edde4;
  uVar14 = (ulong)*(ushort *)(lVar16 + 8);
  *(undefined4 *)(puVar6 + 0x18) = 0xfffffffe;
  if (uVar14 == 0) goto LAB_029edde4;
  puVar13 = (uint *)(lVar3 + lVar16 + 4);
  while (puVar13[-1] != 0x627277e6) {
    puVar13 = puVar13 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_029edde4;
  }
  uVar14 = 0;
  if (*puVar13 != 0xffffffff) {
    uVar14 = (ulong)*puVar13;
  }
  *(int *)(puVar6 + 0x18) = (int)uVar14;
  uVar2 = *puVar20;
  if (uVar2 == 0) goto LAB_029edde4;
  goto LAB_029edce0;
LAB_029edee0:
  if (cVar10 == '\0') {
    cVar10 = '\x01';
    *(undefined8 *)(puVar6 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)puVar6 = 0xffffffffffffffff;
    *(undefined8 *)(puVar6 + 8) = 0xffffffffffffffff;
    *(undefined4 *)(puVar6 + 0x18) = 0xffffffff;
    uVar2 = *puVar20;
    *puVar5 = 1;
  }
  else {
    uVar11 = *(uint *)puVar6;
    if (-1 < (int)uVar11) {
      fVar24 = 1.0;
      if ((float *)((ulong)uVar11 + (long)puVar20) != (float *)0x0) {
        fVar24 = *(float *)((ulong)uVar11 + (long)puVar20);
      }
      goto LAB_029eda64;
    }
    if (uVar11 != 0xffffffff) goto LAB_029eda60;
  }
  if (((ulong)uVar2 == 0) || (lVar16 = (long)puVar20 - (ulong)uVar2, lVar16 == 0))
  goto LAB_029eda60;
  lVar3 = 0xc;
  if (*(char *)(lVar16 + 10) != '\0') {
    lVar3 = 0x1c;
  }
  if (lVar3 + lVar16 == 0) goto LAB_029eda60;
  uVar14 = (ulong)*(ushort *)(lVar16 + 8);
  *(undefined4 *)puVar6 = 0xfffffffe;
  if (uVar14 == 0) goto LAB_029eda60;
  piVar9 = (int *)(lVar3 + lVar16 + 4);
  while (piVar9[-1] != 0x293ee089) {
    piVar9 = piVar9 + 2;
    uVar14 = uVar14 - 1;
    if (uVar14 == 0) goto LAB_029eda60;
  }
  iVar18 = 0;
  if (*piVar9 != -1) {
    iVar18 = *piVar9;
  }
  *(int *)puVar6 = iVar18;
  uVar2 = *puVar20;
  if (uVar2 == 0) goto LAB_029eda60;
  goto LAB_029edee0;
LAB_029eda60:
  fVar24 = 1.0;
LAB_029eda64:
  fVar26 = fVar26 + fVar24;
LAB_029eda70:
  uVar19 = uVar19 + 1;
  if (uVar19 == uVar8) goto LAB_029edfa4;
  goto LAB_029eda7c;
}

