
void FUN_03754280(long *param_1,long param_2)

{
  long lVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  char cVar7;
  long lVar8;
  long lVar9;
  uint *puVar10;
  ulong uVar11;
  ulong uVar12;
  int *piVar13;
  ushort uVar14;
  int iVar15;
  char *pcVar16;
  ulong uVar17;
  uint *puVar18;
  long lVar19;
  undefined **local_c0;
  long *plStack_b8;
  uint *local_b0;
  uint local_a0 [16];
  
  puVar4 = PTR_DAT_04bc0678;
  lVar19 = *(long *)PTR_DAT_04bb4958;
  lVar8 = *(long *)PTR_DAT_04bb4970;
  if (lVar19 != 0 && lVar8 != 0) {
    uVar17 = 0;
    local_a0[0xc] = 0;
    local_a0[0xd] = 0;
    local_a0[0xe] = 0;
    local_a0[0xf] = 0;
    local_a0[8] = 0;
    local_a0[9] = 0;
    local_a0[10] = 0;
    local_a0[0xb] = 0;
    local_a0[4] = 0;
    local_a0[5] = 0;
    local_a0[6] = 0;
    local_a0[7] = 0;
    local_a0[0] = 0;
    local_a0[1] = 0;
    local_a0[2] = 0;
    local_a0[3] = 0;
    pcVar16 = PTR_DAT_04bc0670;
    do {
      uVar6 = (uint)uVar17;
      if (((*(uint *)(param_2 + (uVar17 >> 5 & 0x7ffffff) * 4) >> (ulong)(uVar6 & 0x1f) & 1) != 0)
         && ((uVar6 & 0xffff) < 500)) {
        uVar14 = *(ushort *)(lVar19 + 0x620 + uVar17 * 2);
        if ((int)*(uint *)(lVar19 + 0x1c0) < 1) {
          if ((((*(long *)(lVar19 + 0xb0) != 0) &&
               (puVar18 = *(uint **)(*(long *)(lVar19 + 0xb0) + 8), puVar18 != (uint *)0x0)) &&
              ((uVar5 = (uint)uVar14, *(uint *)(lVar19 + 200) <= uVar5 ||
               (*(char *)(*(long *)(lVar19 + 0xd0) + (ulong)uVar5) != '\0')))) &&
             (((uVar5 < *puVar18 && (puVar18[1] != 0)) && ((ushort)puVar18[2] != 0)))) {
            iVar15 = 0xc;
            if (*(char *)((long)puVar18 + 10) != '\0') {
              iVar15 = 0x1c;
            }
            puVar18 = (uint *)((ulong)(puVar18[1] * uVar5 + (uint)(ushort)puVar18[2] * 8 + iVar15) +
                              (long)puVar18);
            goto joined_r0x0375449c;
          }
        }
        else if ((uint)uVar14 < *(uint *)(lVar19 + 0x1c0)) {
          uVar5 = (uint)uVar14;
          if (*(uint *)(lVar19 + 0x1b0) <= uVar5) {
            uVar5 = 0;
          }
          puVar18 = *(uint **)(*(long *)(lVar19 + 0x1b8) + (ulong)uVar5 * 8);
joined_r0x0375449c:
          if (puVar18 != (uint *)0x0) {
            if (*puVar18 != 0) {
              cVar7 = *pcVar16;
              do {
                if (cVar7 == '\0') {
                  cVar7 = '\x01';
                  *pcVar16 = '\x01';
                  *(undefined8 *)puVar4 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                }
                else {
                  uVar5 = *(uint *)(puVar4 + 0x44);
                  if (-1 < (int)uVar5) {
                    if (((char *)((ulong)uVar5 + (long)puVar18) != (char *)0x0) &&
                       (*(char *)((ulong)uVar5 + (long)puVar18) != '\0')) {
                      FUN_03751f30(&local_c0,uVar17 & 0xffffffff,0,0);
                      puVar3 = PTR_DAT_04bb43c0;
                      lVar9 = *(long *)PTR_DAT_04bb43c0;
                      uVar5 = FUN_0277d6c4(&local_c0);
                      if (*(long *)puVar3 != 0) {
                        lVar9 = *(long *)(lVar9 + 0x57e58);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                          FUN_0277dedc(&local_c0);
                          lVar9 = (**(code **)(*param_1 + 0x18))();
                          uVar5 = FUN_0277d6c4(&local_c0);
                          if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                            lVar1 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                            *(uint *)(lVar9 + lVar1) =
                                 *(uint *)(lVar9 + lVar1) | 1 << (ulong)(uVar5 & 0x1f);
                          }
                        }
                      }
                      FUN_03751f30(&local_c0,uVar17 & 0xffffffff,1,0);
                      puVar3 = PTR_DAT_04bb43c0;
                      lVar9 = *(long *)PTR_DAT_04bb43c0;
                      uVar5 = FUN_0277d6c4(&local_c0);
                      if (*(long *)puVar3 != 0) {
                        lVar9 = *(long *)(lVar9 + 0x57e58);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                          FUN_0277dedc(&local_c0);
                          lVar9 = (**(code **)(*param_1 + 0x18))();
                          uVar5 = FUN_0277d6c4(&local_c0);
                          if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                            lVar1 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                            *(uint *)(lVar9 + lVar1) =
                                 *(uint *)(lVar9 + lVar1) | 1 << (ulong)(uVar5 & 0x1f);
                          }
                        }
                      }
                      FUN_03751f30(&local_c0,uVar17 & 0xffffffff,2,0);
                      puVar3 = PTR_DAT_04bb43c0;
                      lVar9 = *(long *)PTR_DAT_04bb43c0;
                      uVar5 = FUN_0277d6c4(&local_c0);
                      if (*(long *)puVar3 != 0) {
                        lVar9 = *(long *)(lVar9 + 0x57e58);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                          FUN_0277dedc(&local_c0);
                          lVar9 = (**(code **)(*param_1 + 0x18))();
                          uVar5 = FUN_0277d6c4(&local_c0);
                          if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                            lVar1 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                            *(uint *)(lVar9 + lVar1) =
                                 *(uint *)(lVar9 + lVar1) | 1 << (ulong)(uVar5 & 0x1f);
                          }
                        }
                      }
                      FUN_03751f30(&local_c0,uVar17 & 0xffffffff,0,1);
                      puVar3 = PTR_DAT_04bb43c0;
                      lVar9 = *(long *)PTR_DAT_04bb43c0;
                      uVar5 = FUN_0277d6c4(&local_c0);
                      if (*(long *)puVar3 != 0) {
                        lVar9 = *(long *)(lVar9 + 0x57e58);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                          FUN_0277dedc(&local_c0);
                          lVar9 = (**(code **)(*param_1 + 0x18))();
                          uVar5 = FUN_0277d6c4(&local_c0);
                          if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                            lVar1 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                            *(uint *)(lVar9 + lVar1) =
                                 *(uint *)(lVar9 + lVar1) | 1 << (ulong)(uVar5 & 0x1f);
                          }
                        }
                      }
                      FUN_03751f30(&local_c0,uVar17 & 0xffffffff,1,1);
                      puVar3 = PTR_DAT_04bb43c0;
                      lVar9 = *(long *)PTR_DAT_04bb43c0;
                      uVar5 = FUN_0277d6c4(&local_c0);
                      if (*(long *)puVar3 != 0) {
                        lVar9 = *(long *)(lVar9 + 0x57e58);
                        uVar5 = (uVar5 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
                        if ((uVar5 < *(uint *)(lVar9 + 0x1d8)) &&
                           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar5 * 8) != 0)) {
                          FUN_0277dedc(&local_c0);
                          lVar9 = (**(code **)(*param_1 + 0x18))();
                          uVar5 = FUN_0277d6c4(&local_c0);
                          if ((uVar5 >> 3 & 0x1fff) < 0x753) {
                            lVar1 = (ulong)((uVar5 & 0xffff) >> 5) * 4;
                            *(uint *)(lVar9 + lVar1) =
                                 *(uint *)(lVar9 + lVar1) | 1 << (ulong)(uVar5 & 0x1f);
                          }
                        }
                      }
                    }
                    break;
                  }
                  if (uVar5 != 0xffffffff) break;
                }
                lVar9 = (long)puVar18 - (ulong)*puVar18;
                if ((*puVar18 == 0) || (lVar9 == 0)) break;
                lVar1 = 0xc;
                if (*(char *)(lVar9 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                if (lVar1 + lVar9 == 0) break;
                uVar11 = (ulong)*(ushort *)(lVar9 + 8);
                *(undefined4 *)(puVar4 + 0x44) = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar13 = (int *)(lVar1 + lVar9 + 4);
                while (piVar13[-1] != -0x36872a92) {
                  piVar13 = piVar13 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_03754858;
                }
                iVar15 = 0;
                if (*piVar13 != -1) {
                  iVar15 = *piVar13;
                }
                *(int *)(puVar4 + 0x44) = iVar15;
                if (*puVar18 == 0) break;
              } while( true );
            }
LAB_03754858:
            lVar9 = *(long *)PTR_DAT_04bb4958;
            uVar6 = uVar6 - *(ushort *)(lVar9 + 0x418);
            if ((uVar6 < *(uint *)(lVar9 + 0x3f8)) &&
               (puVar10 = *(uint **)(*(long *)(lVar9 + 0x400) + (long)(int)uVar6 * 8),
               puVar10 != (uint *)0x0)) {
              uVar6 = *puVar10;
              if (uVar6 != 0) {
                cVar7 = *PTR_DAT_04bcacc8;
                do {
                  if (cVar7 == '\0') {
                    cVar7 = '\x01';
                    *PTR_DAT_04bcacc8 = 1;
                    puVar3 = PTR_DAT_04bcacd0;
                    *(undefined8 *)PTR_DAT_04bcacd0 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 0x48) = 0xffffffffffffffff;
                    uVar6 = *puVar10;
                  }
                  else {
                    uVar5 = *(uint *)PTR_DAT_04bcacd0;
                    if (-1 < (int)uVar5) {
                      if ((ushort *)((ulong)uVar5 + (long)puVar10) != (ushort *)0x0) {
                        uVar14 = *(ushort *)((ulong)uVar5 + (long)puVar10);
                        goto LAB_0375499c;
                      }
                      break;
                    }
                    if (uVar5 != 0xffffffff) break;
                  }
                  puVar2 = (uint *)(ulong)uVar6;
                  uVar14 = 0xffff;
                  if ((puVar2 == (uint *)0x0) || (uVar14 = 0xffff, puVar10 == puVar2))
                  goto LAB_0375499c;
                  lVar9 = 0xc;
                  if (*(char *)((long)puVar10 + (10 - (long)puVar2)) != '\0') {
                    lVar9 = 0x1c;
                  }
                  lVar9 = (long)puVar10 + (lVar9 - (long)puVar2);
                  if (lVar9 == 0) break;
                  uVar11 = (ulong)*(ushort *)((long)puVar10 + (8 - (long)puVar2));
                  *(undefined4 *)PTR_DAT_04bcacd0 = 0xfffffffe;
                  if (uVar11 == 0) break;
                  piVar13 = (int *)(lVar9 + 4);
                  while (piVar13[-1] != -0x59d9ee3) {
                    piVar13 = piVar13 + 2;
                    uVar11 = uVar11 - 1;
                    if (uVar11 == 0) goto LAB_03754998;
                  }
                  iVar15 = 0;
                  if (*piVar13 != -1) {
                    iVar15 = *piVar13;
                  }
                  *(int *)PTR_DAT_04bcacd0 = iVar15;
                  uVar6 = *puVar10;
                  if (uVar6 == 0) break;
                } while( true );
              }
LAB_03754998:
              uVar14 = 0xffff;
LAB_0375499c:
              local_c0 = (undefined **)(ulong)uVar14;
              FUN_0277d4ac(&local_c0);
            }
            else {
              local_c0 = *(undefined ***)PTR_DAT_04bb37e0;
            }
            puVar3 = PTR_DAT_04bb43c0;
            lVar9 = *(long *)PTR_DAT_04bb43c0;
            uVar6 = FUN_0277d6c4(&local_c0);
            if (*(long *)puVar3 != 0) {
              lVar9 = *(long *)(lVar9 + 0x57e58);
              uVar6 = (uVar6 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
              if ((uVar6 < *(uint *)(lVar9 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar6 * 8) != 0)) {
                FUN_0277dedc(&local_c0);
                lVar9 = (**(code **)(*param_1 + 0x18))();
                uVar6 = FUN_0277d6c4(&local_c0);
                if ((uVar6 >> 3 & 0x1fff) < 0x753) {
                  lVar1 = (ulong)((uVar6 & 0xffff) >> 5) * 4;
                  *(uint *)(lVar9 + lVar1) = *(uint *)(lVar9 + lVar1) | 1 << (ulong)(uVar6 & 0x1f);
                }
              }
            }
            pcVar16 = PTR_DAT_04bc0670;
            uVar6 = *puVar18;
            if (uVar6 != 0) {
              cVar7 = *PTR_DAT_04bc0670;
              do {
                uVar11 = (ulong)uVar6;
                if (cVar7 == '\0') {
                  cVar7 = '\x01';
                  *pcVar16 = 1;
                  *(undefined8 *)puVar4 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 8) = 0xffffffffffffffff;
                  *(undefined4 *)(puVar4 + 0x50) = 0xffffffff;
                  *(undefined8 *)(puVar4 + 0x10) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x18) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x20) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x28) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x30) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x38) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x40) = 0xffffffffffffffff;
                  *(undefined8 *)(puVar4 + 0x48) = 0xffffffffffffffff;
                  uVar11 = (ulong)*puVar18;
                }
                else {
                  uVar12 = (ulong)*(uint *)puVar4;
                  if (-1 < (int)*(uint *)puVar4) {
                    if (((ushort *)(uVar12 + (long)puVar18) != (ushort *)0x0) &&
                       (*(ushort *)(uVar12 + (long)puVar18) < 500)) goto LAB_03754b50;
                    break;
                  }
                  if (uVar12 != 0xffffffff) break;
                }
                if ((uVar11 == 0) || (lVar9 = (long)puVar18 - uVar11, lVar9 == 0)) break;
                lVar1 = 0xc;
                if (*(char *)(lVar9 + 10) != '\0') {
                  lVar1 = 0x1c;
                }
                if (lVar1 + lVar9 == 0) break;
                uVar11 = (ulong)*(ushort *)(lVar9 + 8);
                *(undefined4 *)puVar4 = 0xfffffffe;
                if (uVar11 == 0) break;
                piVar13 = (int *)(lVar1 + lVar9 + 4);
                while (piVar13[-1] != -0x62ea7268) {
                  piVar13 = piVar13 + 2;
                  uVar11 = uVar11 - 1;
                  if (uVar11 == 0) goto LAB_03754320;
                }
                iVar15 = 0;
                if (*piVar13 != -1) {
                  iVar15 = *piVar13;
                }
                *(int *)puVar4 = iVar15;
                uVar6 = *puVar18;
                if (uVar6 == 0) break;
              } while( true );
            }
          }
        }
      }
LAB_03754320:
      uVar17 = uVar17 + 1;
    } while (uVar17 != 500);
    local_c0 = &PTR_LAB_04b46970;
    local_b0 = local_a0;
    plStack_b8 = param_1;
    FUN_036f09c0(lVar8,&local_c0);
  }
  return;
LAB_03754b50:
  if (-1 < (int)uVar12) {
    if (((ushort *)(uVar12 + (long)puVar18) != (ushort *)0x0) &&
       (uVar14 = *(ushort *)(uVar12 + (long)puVar18), uVar14 < 500)) {
      uVar11 = (ulong)(uVar14 >> 3) & 0x1ffc;
      *(uint *)((long)local_a0 + uVar11) =
           *(uint *)((long)local_a0 + uVar11) | 1 << (ulong)(uVar14 & 0x1f);
    }
    goto LAB_03754320;
  }
  if ((uVar12 != 0xffffffff) || (lVar9 = (long)puVar18 - uVar11, lVar9 == 0)) goto LAB_03754320;
  lVar1 = 0xc;
  if (*(char *)(lVar9 + 10) != '\0') {
    lVar1 = 0x1c;
  }
  if (lVar1 + lVar9 == 0) goto LAB_03754320;
  uVar11 = (ulong)*(ushort *)(lVar9 + 8);
  *(undefined4 *)puVar4 = 0xfffffffe;
  if (uVar11 == 0) goto LAB_03754320;
  puVar10 = (uint *)(lVar1 + lVar9 + 4);
  while (puVar10[-1] != 0x9d158d98) {
    puVar10 = puVar10 + 2;
    uVar11 = uVar11 - 1;
    if (uVar11 == 0) goto LAB_03754320;
  }
  uVar12 = 0;
  if (*puVar10 != 0xffffffff) {
    uVar12 = (ulong)*puVar10;
  }
  *(int *)puVar4 = (int)uVar12;
  uVar11 = (ulong)*puVar18;
  if (*puVar18 == 0) goto LAB_03754320;
  goto LAB_03754b50;
}

