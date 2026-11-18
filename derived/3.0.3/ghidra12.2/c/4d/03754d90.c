
/* WARNING: Removing unreachable block (ram,0x0375578c) */

void FUN_03754d90(ulong param_1,ulong param_2,int *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  bool bVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  ushort *puVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  int *piVar21;
  long lVar22;
  byte *pbVar23;
  byte bVar24;
  uint *puVar25;
  char cVar26;
  uint *puVar27;
  ulong uVar28;
  undefined2 uVar29;
  undefined *local_b0;
  char *pcStack_a8;
  undefined8 local_a0;
  undefined *local_98;
  char *local_90;
  long *local_78;
  int *piStack_70;
  long local_68;
  int local_44;
  
  puVar1 = PTR_DAT_04bb2020;
  local_44 = 0;
  local_68 = *(long *)PTR_DAT_04bb4968;
  if (local_68 == 0) {
    return;
  }
  local_78 = &local_68;
  piStack_70 = &local_44;
  local_98 = PTR_DAT_04bb2020 + 0x10;
  local_90 = "VisitTotal";
  uVar6 = FUN_02758850(&local_98);
  FUN_037567d0(&local_78,0,uVar6);
  local_a0 = (long *)((ulong)local_a0._4_4_ << 0x20);
  local_90 = (char *)&local_a0;
  local_98 = &DAT_04b469c0;
  FUN_02685630(&local_98);
  puVar3 = PTR_DAT_04bcad20;
  puVar2 = PTR_DAT_04bcad18;
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,1);
  iVar14 = (int)local_a0;
  uVar7 = *(uint *)(local_68 + 0x3c0);
  puVar4 = local_b0;
  if ((int)uVar7 < 1) {
    if ((((*(long *)(local_68 + 0x2b0) != 0) &&
         (puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8), puVar25 != (uint *)0x0)) &&
        ((*(uint *)(local_68 + 0x2c8) < 2 || (*(char *)(*(long *)(local_68 + 0x2d0) + 1) != '\0'))))
       && (((1 < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
      iVar15 = 0xc;
      if (*(char *)((long)puVar25 + 10) != '\0') {
        iVar15 = 0x1c;
      }
      puVar25 = (uint *)((ulong)(puVar25[1] + (uint)(ushort)puVar25[2] * 8 + iVar15) + (long)puVar25
                        );
      goto joined_r0x03754fa0;
    }
  }
  else if (1 < uVar7) {
    puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(1 < *(uint *)(local_68 + 0x3b0)) * 8)
    ;
joined_r0x03754fa0:
    if (puVar25 != (uint *)0x0) {
      if (*puVar25 == 0) {
LAB_03754fb8:
        uVar8 = 0;
      }
      else {
        cVar26 = *PTR_DAT_04bcad18;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
          }
          else {
            uVar8 = *(uint *)(puVar3 + 4);
            if (-1 < (int)uVar8) {
              if ((ushort *)((ulong)uVar8 + (long)puVar25) == (ushort *)0x0) goto LAB_03754fb8;
              uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar25);
              goto LAB_03754fbc;
            }
            if (uVar8 != 0xffffffff) goto LAB_03754fb8;
          }
          puVar27 = (uint *)(ulong)*puVar25;
          uVar8 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_03754fbc;
          lVar18 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
          if (lVar18 == 0) goto LAB_03754fb8;
          uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
          *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
          uVar8 = 0;
          if (uVar20 == 0) goto LAB_03754fbc;
          piVar21 = (int *)(lVar18 + 4);
          while (piVar21[-1] != 0x170af5b8) {
            piVar21 = piVar21 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) {
              uVar8 = 0;
              goto LAB_03754fbc;
            }
          }
          iVar15 = 0;
          if (*piVar21 != -1) {
            iVar15 = *piVar21;
          }
          *(int *)(puVar3 + 4) = iVar15;
        } while (*puVar25 != 0);
        uVar8 = 0;
      }
LAB_03754fbc:
      puVar3 = PTR_DAT_04bcad20;
      puVar2 = PTR_DAT_04bcad18;
      if ((int)uVar8 <= (int)local_a0) {
        if (*puVar25 == 0) {
LAB_037550a8:
          uVar8 = 0;
        }
        else {
          cVar26 = *PTR_DAT_04bcad18;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
            }
            else {
              uVar8 = *(uint *)(puVar3 + 8);
              if (-1 < (int)uVar8) {
                if ((ushort *)((ulong)uVar8 + (long)puVar25) == (ushort *)0x0) goto LAB_037550a8;
                uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar25);
                goto LAB_037550ac;
              }
              if (uVar8 != 0xffffffff) goto LAB_037550a8;
            }
            puVar27 = (uint *)(ulong)*puVar25;
            uVar8 = 0;
            if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_037550ac;
            lVar18 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
            if (lVar18 == 0) goto LAB_037550a8;
            uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
            *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
            uVar8 = 0;
            if (uVar20 == 0) goto LAB_037550ac;
            piVar21 = (int *)(lVar18 + 4);
            while (piVar21[-1] != 0x2f571a00) {
              piVar21 = piVar21 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) {
                uVar8 = 0;
                goto LAB_037550ac;
              }
            }
            iVar15 = 0;
            if (*piVar21 != -1) {
              iVar15 = *piVar21;
            }
            *(int *)(puVar3 + 8) = iVar15;
          } while (*puVar25 != 0);
          uVar8 = 0;
        }
LAB_037550ac:
        puVar3 = PTR_DAT_04bcad20;
        puVar2 = PTR_DAT_04bcad18;
        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,2);
        puVar4 = local_b0;
        local_44 = local_44 + uVar8;
        local_b0._0_4_ = 2;
        if ((int)uVar7 < 1) {
          if (*(long *)(local_68 + 0x2b0) != 0) {
            puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8);
            if ((puVar25 != (uint *)0x0) &&
               (((*(uint *)(local_68 + 0x2c8) < 3 ||
                 (*(char *)(*(long *)(local_68 + 0x2d0) + 2) != '\0')) && (2 < *puVar25)))) {
              if (puVar25[1] != 0) {
                if ((ushort)puVar25[2] != 0) {
                  iVar15 = 0xc;
                  if (*(char *)((long)puVar25 + 10) != '\0') {
                    iVar15 = 0x1c;
                  }
                  puVar25 = (uint *)((ulong)(puVar25[1] * 2 + (uint)(ushort)puVar25[2] * 8 + iVar15)
                                    + (long)puVar25);
                  goto joined_r0x03755220;
                }
              }
            }
          }
        }
        else if (2 < uVar7) {
          if (*(uint *)(local_68 + 0x3b0) < 3) {
            local_b0._0_4_ = 0;
          }
          puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_b0 * 8);
joined_r0x03755220:
          if (puVar25 != (uint *)0x0) {
            if (*puVar25 == 0) {
LAB_03755238:
              uVar8 = 0;
            }
            else {
              cVar26 = *PTR_DAT_04bcad18;
              do {
                if (cVar26 == '\0') {
                  cVar26 = '\x01';
                  *(undefined8 *)puVar3 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                }
                else {
                  uVar8 = *(uint *)(puVar3 + 4);
                  if (-1 < (int)uVar8) {
                    if ((ushort *)((ulong)uVar8 + (long)puVar25) == (ushort *)0x0)
                    goto LAB_03755238;
                    uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar25);
                    goto LAB_0375523c;
                  }
                  if (uVar8 != 0xffffffff) goto LAB_03755238;
                }
                puVar27 = (uint *)(ulong)*puVar25;
                uVar8 = 0;
                if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_0375523c;
                lVar18 = 0xc;
                if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
                if (lVar18 == 0) goto LAB_03755238;
                uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
                *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
                uVar8 = 0;
                if (uVar20 == 0) goto LAB_0375523c;
                piVar21 = (int *)(lVar18 + 4);
                while (piVar21[-1] != 0x170af5b8) {
                  piVar21 = piVar21 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) {
                    uVar8 = 0;
                    goto LAB_0375523c;
                  }
                }
                iVar15 = 0;
                if (*piVar21 != -1) {
                  iVar15 = *piVar21;
                }
                *(int *)(puVar3 + 4) = iVar15;
              } while (*puVar25 != 0);
              uVar8 = 0;
            }
LAB_0375523c:
            puVar3 = PTR_DAT_04bcad20;
            puVar2 = PTR_DAT_04bcad18;
            if ((int)uVar8 <= (int)local_a0) {
              if (*puVar25 == 0) {
LAB_03755320:
                uVar8 = 0;
              }
              else {
                cVar26 = *PTR_DAT_04bcad18;
                do {
                  if (cVar26 == '\0') {
                    cVar26 = '\x01';
                    *(undefined8 *)puVar3 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                    *puVar2 = 1;
                  }
                  else {
                    uVar8 = *(uint *)(puVar3 + 8);
                    if (-1 < (int)uVar8) {
                      if ((ushort *)((ulong)uVar8 + (long)puVar25) == (ushort *)0x0)
                      goto LAB_03755320;
                      uVar8 = (uint)*(ushort *)((ulong)uVar8 + (long)puVar25);
                      goto LAB_03755324;
                    }
                    if (uVar8 != 0xffffffff) goto LAB_03755320;
                  }
                  puVar27 = (uint *)(ulong)*puVar25;
                  uVar8 = 0;
                  if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_03755324;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
                  if (lVar18 == 0) goto LAB_03755320;
                  uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
                  *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
                  uVar8 = 0;
                  if (uVar20 == 0) goto LAB_03755324;
                  piVar21 = (int *)(lVar18 + 4);
                  while (piVar21[-1] != 0x2f571a00) {
                    piVar21 = piVar21 + 2;
                    uVar20 = uVar20 - 1;
                    if (uVar20 == 0) {
                      uVar8 = 0;
                      goto LAB_03755324;
                    }
                  }
                  iVar15 = 0;
                  if (*piVar21 != -1) {
                    iVar15 = *piVar21;
                  }
                  *(int *)(puVar3 + 8) = iVar15;
                } while (*puVar25 != 0);
                uVar8 = 0;
              }
LAB_03755324:
              puVar3 = PTR_DAT_04bcad20;
              puVar2 = PTR_DAT_04bcad18;
              local_44 = local_44 + uVar8;
              local_b0 = (undefined *)CONCAT44(local_b0._4_4_,3);
              puVar4 = local_b0;
              local_b0._0_4_ = 3;
              if ((int)uVar7 < 1) {
                if (*(long *)(local_68 + 0x2b0) != 0) {
                  puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8);
                  if ((puVar25 != (uint *)0x0) &&
                     (((*(uint *)(local_68 + 0x2c8) < 4 ||
                       (*(char *)(*(long *)(local_68 + 0x2d0) + 3) != '\0')) && (3 < *puVar25)))) {
                    if (puVar25[1] != 0) {
                      if ((ushort)puVar25[2] != 0) {
                        iVar15 = 0xc;
                        if (*(char *)((long)puVar25 + 10) != '\0') {
                          iVar15 = 0x1c;
                        }
                        puVar25 = (uint *)((ulong)(puVar25[1] * 3 + (uint)(ushort)puVar25[2] * 8 +
                                                  iVar15) + (long)puVar25);
                        goto joined_r0x03755494;
                      }
                    }
                  }
                }
              }
              else if (3 < uVar7) {
                if (*(uint *)(local_68 + 0x3b0) < 4) {
                  local_b0._0_4_ = 0;
                }
                puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_b0 * 8);
joined_r0x03755494:
                if (puVar25 != (uint *)0x0) {
                  if (*puVar25 == 0) {
LAB_037554ac:
                    uVar7 = 0;
                  }
                  else {
                    cVar26 = *PTR_DAT_04bcad18;
                    do {
                      if (cVar26 == '\0') {
                        cVar26 = '\x01';
                        *(undefined8 *)puVar3 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                        *puVar2 = 1;
                      }
                      else {
                        uVar7 = *(uint *)(puVar3 + 4);
                        if (-1 < (int)uVar7) {
                          if ((ushort *)((ulong)uVar7 + (long)puVar25) == (ushort *)0x0)
                          goto LAB_037554ac;
                          uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar25);
                          goto LAB_037554b0;
                        }
                        if (uVar7 != 0xffffffff) goto LAB_037554ac;
                      }
                      puVar27 = (uint *)(ulong)*puVar25;
                      uVar7 = 0;
                      if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_037554b0;
                      lVar18 = 0xc;
                      if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
                        lVar18 = 0x1c;
                      }
                      lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
                      if (lVar18 == 0) goto LAB_037554ac;
                      uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
                      *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
                      uVar7 = 0;
                      if (uVar20 == 0) goto LAB_037554b0;
                      piVar21 = (int *)(lVar18 + 4);
                      while (piVar21[-1] != 0x170af5b8) {
                        piVar21 = piVar21 + 2;
                        uVar20 = uVar20 - 1;
                        if (uVar20 == 0) {
                          uVar7 = 0;
                          goto LAB_037554b0;
                        }
                      }
                      iVar15 = 0;
                      if (*piVar21 != -1) {
                        iVar15 = *piVar21;
                      }
                      *(int *)(puVar3 + 4) = iVar15;
                    } while (*puVar25 != 0);
                    uVar7 = 0;
                  }
LAB_037554b0:
                  if ((int)uVar7 <= (int)local_a0) {
                    local_b0 = puVar4;
                    puVar17 = (ushort *)FUN_03751d60(puVar25,2,0x2f571a00,0);
                    if (puVar17 == (ushort *)0x0) {
                      uVar7 = 0;
                    }
                    else {
                      uVar7 = (uint)*puVar17;
                    }
                    local_44 = local_44 + uVar7;
                    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,4);
                    lVar18 = FUN_0374afc4(local_68,&local_b0);
                    puVar4 = local_b0;
                    if (lVar18 != 0) {
                      puVar17 = (ushort *)FUN_03751d60(lVar18,1,0x170af5b8,0);
                      if (puVar17 == (ushort *)0x0) {
                        uVar7 = 0;
                      }
                      else {
                        uVar7 = (uint)*puVar17;
                      }
                      puVar4 = local_b0;
                      if ((int)uVar7 <= iVar14) {
                        puVar17 = (ushort *)FUN_03751d60(lVar18,2,0x2f571a00,0);
                        if (puVar17 == (ushort *)0x0) {
                          uVar7 = 0;
                        }
                        else {
                          uVar7 = (uint)*puVar17;
                        }
                        local_b0 = (undefined *)CONCAT44(local_b0._4_4_,5);
                        local_44 = local_44 + uVar7;
                        lVar18 = FUN_0374afc4(local_68,&local_b0);
                        puVar4 = local_b0;
                        if (lVar18 != 0) {
                          puVar17 = (ushort *)FUN_03751d60(lVar18,1,0x170af5b8,0);
                          if (puVar17 == (ushort *)0x0) {
                            uVar7 = 0;
                          }
                          else {
                            uVar7 = (uint)*puVar17;
                          }
                          puVar4 = local_b0;
                          if ((int)uVar7 <= iVar14) {
                            puVar17 = (ushort *)FUN_03751d60(lVar18,2,0x2f571a00,0);
                            if (puVar17 == (ushort *)0x0) {
                              uVar7 = 0;
                            }
                            else {
                              uVar7 = (uint)*puVar17;
                            }
                            local_44 = local_44 + uVar7;
                            local_b0 = (undefined *)CONCAT44(local_b0._4_4_,6);
                            lVar18 = FUN_0374afc4(local_68,&local_b0);
                            puVar4 = local_b0;
                            if (lVar18 != 0) {
                              puVar17 = (ushort *)FUN_03751d60(lVar18,1,0x170af5b8,0);
                              if (puVar17 == (ushort *)0x0) {
                                uVar7 = 0;
                              }
                              else {
                                uVar7 = (uint)*puVar17;
                              }
                              puVar4 = local_b0;
                              if ((int)uVar7 <= iVar14) {
                                puVar17 = (ushort *)FUN_03751d60(lVar18,2,0x2f571a00,0);
                                if (puVar17 == (ushort *)0x0) {
                                  uVar7 = 0;
                                }
                                else {
                                  uVar7 = (uint)*puVar17;
                                }
                                local_44 = local_44 + uVar7;
                                local_b0 = (undefined *)CONCAT44(local_b0._4_4_,7);
                                lVar18 = FUN_0374afc4(local_68,&local_b0);
                                puVar4 = local_b0;
                                if (lVar18 != 0) {
                                  puVar17 = (ushort *)FUN_03751d60(lVar18,1,0x170af5b8,0);
                                  if (puVar17 == (ushort *)0x0) {
                                    uVar7 = 0;
                                  }
                                  else {
                                    uVar7 = (uint)*puVar17;
                                  }
                                  puVar4 = local_b0;
                                  if ((int)uVar7 <= iVar14) {
                                    puVar17 = (ushort *)FUN_03751d60(lVar18,2,0x2f571a00,0);
                                    if (puVar17 == (ushort *)0x0) {
                                      uVar7 = 0;
                                    }
                                    else {
                                      uVar7 = (uint)*puVar17;
                                    }
                                    local_44 = local_44 + uVar7;
                                    local_b0 = (undefined *)CONCAT44(local_b0._4_4_,8);
                                    lVar18 = FUN_0374afc4(local_68,&local_b0);
                                    puVar4 = local_b0;
                                    if (lVar18 != 0) {
                                      puVar17 = (ushort *)FUN_03751d60(lVar18,1,0x170af5b8,0);
                                      if (puVar17 == (ushort *)0x0) {
                                        uVar7 = 0;
                                      }
                                      else {
                                        uVar7 = (uint)*puVar17;
                                      }
                                      puVar4 = local_b0;
                                      if ((int)uVar7 <= iVar14) {
                                        puVar17 = (ushort *)FUN_03751d60(lVar18,2,0x2f571a00,0);
                                        if (puVar17 == (ushort *)0x0) {
                                          uVar7 = 0;
                                        }
                                        else {
                                          uVar7 = (uint)*puVar17;
                                        }
                                        local_44 = local_44 + uVar7;
                                        puVar4 = local_b0;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  local_b0 = puVar4;
  local_98 = puVar1 + 0x10;
  local_90 = "ShareHouseDoneCount";
  uVar6 = FUN_02758850(&local_98);
  FUN_037567d0(&local_78,9,uVar6);
  lVar22 = *(long *)PTR_DAT_04bb46b0;
  lVar18 = 0;
  if (lVar22 != 0) {
    local_98 = (undefined *)CONCAT44(local_98._4_4_,1);
    if (((*(byte *)(lVar22 + 0x50d) ^ 0xff) & 6) == 0) {
      lVar22 = (**(code **)(**(long **)(*(long *)(lVar22 + 0x10) + 0x188) + 0x38))();
    }
    else {
      lVar22 = 0;
    }
    lVar18 = 0;
    if (lVar22 != 0) {
      lVar18 = lVar22 + 0xa8;
    }
  }
  if (*(long **)(lVar18 + 0x36540) == (long *)0x0) {
    uVar20 = 0;
  }
  else {
    puVar19 = (undefined8 *)**(long **)(lVar18 + 0x36540);
    uVar20 = 0;
    if (puVar19 != (undefined8 *)0x0) {
      uVar20 = (**(code **)*puVar19)();
    }
  }
  uVar28 = *(ulong *)(*(long *)(lVar18 + 0x36528) + *(long *)(lVar18 + 0x36520) + 0x400);
  if ((((uVar20 & 1) != 0) && (*(long *)(lVar18 + 0x36540) != 0)) &&
     (puVar19 = *(undefined8 **)(*(long *)(lVar18 + 0x36540) + 8), puVar19 != (undefined8 *)0x0)) {
    (**(code **)*puVar19)();
  }
  puVar3 = PTR_DAT_04bcad20;
  puVar2 = PTR_DAT_04bcad18;
  local_98 = (undefined *)CONCAT44(local_98._4_4_,10);
  puVar4 = local_98;
  local_98._0_4_ = 10;
  uVar7 = *(uint *)(local_68 + 0x3c0);
  if ((int)uVar7 < 1) {
    if (*(long *)(local_68 + 0x2b0) != 0) {
      puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8);
      if ((puVar25 != (uint *)0x0) &&
         (((*(uint *)(local_68 + 0x2c8) < 0xb ||
           (*(char *)(*(long *)(local_68 + 0x2d0) + 10) != '\0')) && (10 < *puVar25)))) {
        if (puVar25[1] != 0) {
          if ((ushort)puVar25[2] != 0) {
            iVar14 = 0xc;
            if (*(char *)((long)puVar25 + 10) != '\0') {
              iVar14 = 0x1c;
            }
            puVar25 = (uint *)((ulong)(puVar25[1] * 10 + (uint)(ushort)puVar25[2] * 8 + iVar14) +
                              (long)puVar25);
            goto joined_r0x037559f4;
          }
        }
      }
    }
  }
  else if (10 < uVar7) {
    if (*(uint *)(local_68 + 0x3b0) < 0xb) {
      local_98._0_4_ = 0;
    }
    puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_98 * 8);
joined_r0x037559f4:
    if (puVar25 != (uint *)0x0) {
      uVar9 = (uint)(uVar28 >> 0x20);
      uVar8 = (int)uVar28 - ((uint)(uVar28 >> 1) & 0x55555555);
      uVar9 = uVar9 - (uVar9 >> 1 & 0x55555555);
      uVar8 = (uVar8 >> 2 & 0x33333333) + (uVar8 & 0x33333333);
      uVar9 = (uVar9 >> 2 & 0x33333333) + (uVar9 & 0x33333333);
      uVar8 = uVar8 + (uVar8 >> 4) & 0xf0f0f0f;
      uVar9 = uVar9 + (uVar9 >> 4) & 0xf0f0f0f;
      uVar8 = uVar8 + (uVar8 >> 8);
      uVar9 = uVar9 + (uVar9 >> 8);
      uVar8 = (uVar9 + (uVar9 >> 0x10) & 0x3f) + (uVar8 + (uVar8 >> 0x10) & 0x3f);
      if (*puVar25 == 0) {
LAB_03755a0c:
        uVar9 = 0;
      }
      else {
        cVar26 = *PTR_DAT_04bcad18;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
          }
          else {
            uVar9 = *(uint *)(puVar3 + 4);
            if (-1 < (int)uVar9) {
              if ((ushort *)((ulong)uVar9 + (long)puVar25) == (ushort *)0x0) goto LAB_03755a0c;
              uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar25);
              goto LAB_03755a10;
            }
            if (uVar9 != 0xffffffff) goto LAB_03755a0c;
          }
          puVar27 = (uint *)(ulong)*puVar25;
          uVar9 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_03755a10;
          lVar18 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
          if (lVar18 == 0) goto LAB_03755a0c;
          uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
          *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
          uVar9 = 0;
          if (uVar20 == 0) goto LAB_03755a10;
          piVar21 = (int *)(lVar18 + 4);
          while (piVar21[-1] != 0x170af5b8) {
            piVar21 = piVar21 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) {
              uVar9 = 0;
              goto LAB_03755a10;
            }
          }
          iVar14 = 0;
          if (*piVar21 != -1) {
            iVar14 = *piVar21;
          }
          *(int *)(puVar3 + 4) = iVar14;
        } while (*puVar25 != 0);
        uVar9 = 0;
      }
LAB_03755a10:
      puVar3 = PTR_DAT_04bcad20;
      puVar2 = PTR_DAT_04bcad18;
      if (uVar9 <= uVar8) {
        if (*puVar25 == 0) {
LAB_03755af8:
          uVar9 = 0;
        }
        else {
          cVar26 = *PTR_DAT_04bcad18;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
            }
            else {
              uVar9 = *(uint *)(puVar3 + 8);
              if (-1 < (int)uVar9) {
                if ((ushort *)((ulong)uVar9 + (long)puVar25) == (ushort *)0x0) goto LAB_03755af8;
                uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar25);
                goto LAB_03755afc;
              }
              if (uVar9 != 0xffffffff) goto LAB_03755af8;
            }
            puVar27 = (uint *)(ulong)*puVar25;
            uVar9 = 0;
            if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_03755afc;
            lVar18 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
            if (lVar18 == 0) goto LAB_03755af8;
            uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
            *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
            uVar9 = 0;
            if (uVar20 == 0) goto LAB_03755afc;
            piVar21 = (int *)(lVar18 + 4);
            while (piVar21[-1] != 0x2f571a00) {
              piVar21 = piVar21 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) {
                uVar9 = 0;
                goto LAB_03755afc;
              }
            }
            iVar14 = 0;
            if (*piVar21 != -1) {
              iVar14 = *piVar21;
            }
            *(int *)(puVar3 + 8) = iVar14;
          } while (*puVar25 != 0);
          uVar9 = 0;
        }
LAB_03755afc:
        puVar3 = PTR_DAT_04bcad20;
        puVar2 = PTR_DAT_04bcad18;
        local_98 = (undefined *)CONCAT44(local_98._4_4_,0xb);
        puVar4 = local_98;
        local_44 = local_44 + uVar9;
        local_98._0_4_ = 0xb;
        if ((int)uVar7 < 1) {
          if (*(long *)(local_68 + 0x2b0) != 0) {
            puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8);
            if ((puVar25 != (uint *)0x0) &&
               (((*(uint *)(local_68 + 0x2c8) < 0xc ||
                 (*(char *)(*(long *)(local_68 + 0x2d0) + 0xb) != '\0')) && (0xb < *puVar25)))) {
              if (puVar25[1] != 0) {
                if ((ushort)puVar25[2] != 0) {
                  iVar14 = 0xc;
                  if (*(char *)((long)puVar25 + 10) != '\0') {
                    iVar14 = 0x1c;
                  }
                  puVar25 = (uint *)((ulong)(puVar25[1] * 0xb + (uint)(ushort)puVar25[2] * 8 +
                                            iVar14) + (long)puVar25);
                  goto joined_r0x03755c70;
                }
              }
            }
          }
        }
        else if (0xb < uVar7) {
          if (*(uint *)(local_68 + 0x3b0) < 0xc) {
            local_98._0_4_ = 0;
          }
          puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_98 * 8);
joined_r0x03755c70:
          if (puVar25 != (uint *)0x0) {
            if (*puVar25 == 0) {
LAB_03755c88:
              uVar9 = 0;
            }
            else {
              cVar26 = *PTR_DAT_04bcad18;
              do {
                if (cVar26 == '\0') {
                  cVar26 = '\x01';
                  *(undefined8 *)puVar3 = 0xffffffffffffffff;
                  *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                  *puVar2 = 1;
                }
                else {
                  uVar9 = *(uint *)(puVar3 + 4);
                  if (-1 < (int)uVar9) {
                    if ((ushort *)((ulong)uVar9 + (long)puVar25) == (ushort *)0x0)
                    goto LAB_03755c88;
                    uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar25);
                    goto LAB_03755c8c;
                  }
                  if (uVar9 != 0xffffffff) goto LAB_03755c88;
                }
                puVar27 = (uint *)(ulong)*puVar25;
                uVar9 = 0;
                if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_03755c8c;
                lVar18 = 0xc;
                if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
                  lVar18 = 0x1c;
                }
                lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
                if (lVar18 == 0) goto LAB_03755c88;
                uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
                *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
                uVar9 = 0;
                if (uVar20 == 0) goto LAB_03755c8c;
                piVar21 = (int *)(lVar18 + 4);
                while (piVar21[-1] != 0x170af5b8) {
                  piVar21 = piVar21 + 2;
                  uVar20 = uVar20 - 1;
                  if (uVar20 == 0) {
                    uVar9 = 0;
                    goto LAB_03755c8c;
                  }
                }
                iVar14 = 0;
                if (*piVar21 != -1) {
                  iVar14 = *piVar21;
                }
                *(int *)(puVar3 + 4) = iVar14;
              } while (*puVar25 != 0);
              uVar9 = 0;
            }
LAB_03755c8c:
            puVar3 = PTR_DAT_04bcad20;
            puVar2 = PTR_DAT_04bcad18;
            if (uVar9 <= uVar8) {
              if (*puVar25 == 0) {
LAB_03755d70:
                uVar9 = 0;
              }
              else {
                cVar26 = *PTR_DAT_04bcad18;
                do {
                  if (cVar26 == '\0') {
                    cVar26 = '\x01';
                    *(undefined8 *)puVar3 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                    *puVar2 = 1;
                  }
                  else {
                    uVar9 = *(uint *)(puVar3 + 8);
                    if (-1 < (int)uVar9) {
                      if ((ushort *)((ulong)uVar9 + (long)puVar25) == (ushort *)0x0)
                      goto LAB_03755d70;
                      uVar9 = (uint)*(ushort *)((ulong)uVar9 + (long)puVar25);
                      goto LAB_03755d74;
                    }
                    if (uVar9 != 0xffffffff) goto LAB_03755d70;
                  }
                  puVar27 = (uint *)(ulong)*puVar25;
                  uVar9 = 0;
                  if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_03755d74;
                  lVar18 = 0xc;
                  if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
                    lVar18 = 0x1c;
                  }
                  lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
                  if (lVar18 == 0) goto LAB_03755d70;
                  uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
                  *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
                  uVar9 = 0;
                  if (uVar20 == 0) goto LAB_03755d74;
                  piVar21 = (int *)(lVar18 + 4);
                  while (piVar21[-1] != 0x2f571a00) {
                    piVar21 = piVar21 + 2;
                    uVar20 = uVar20 - 1;
                    if (uVar20 == 0) {
                      uVar9 = 0;
                      goto LAB_03755d74;
                    }
                  }
                  iVar14 = 0;
                  if (*piVar21 != -1) {
                    iVar14 = *piVar21;
                  }
                  *(int *)(puVar3 + 8) = iVar14;
                } while (*puVar25 != 0);
                uVar9 = 0;
              }
LAB_03755d74:
              puVar3 = PTR_DAT_04bcad20;
              puVar2 = PTR_DAT_04bcad18;
              local_44 = uVar9 + local_44;
              local_98 = (undefined *)CONCAT44(local_98._4_4_,0xc);
              puVar4 = local_98;
              local_98._0_4_ = 0xc;
              if ((int)uVar7 < 1) {
                if (*(long *)(local_68 + 0x2b0) != 0) {
                  puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8);
                  if ((puVar25 != (uint *)0x0) &&
                     (((*(uint *)(local_68 + 0x2c8) < 0xd ||
                       (*(char *)(*(long *)(local_68 + 0x2d0) + 0xc) != '\0')) && (0xc < *puVar25)))
                     ) {
                    if (puVar25[1] != 0) {
                      if ((ushort)puVar25[2] != 0) {
                        iVar14 = 0xc;
                        if (*(char *)((long)puVar25 + 10) != '\0') {
                          iVar14 = 0x1c;
                        }
                        puVar25 = (uint *)((ulong)(puVar25[1] * 0xc + (uint)(ushort)puVar25[2] * 8 +
                                                  iVar14) + (long)puVar25);
                        goto joined_r0x03755edc;
                      }
                    }
                  }
                }
              }
              else if (0xc < uVar7) {
                if (*(uint *)(local_68 + 0x3b0) < 0xd) {
                  local_98._0_4_ = 0;
                }
                puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_98 * 8);
joined_r0x03755edc:
                if (puVar25 != (uint *)0x0) {
                  if (*puVar25 != 0) {
                    cVar26 = *PTR_DAT_04bcad18;
                    do {
                      if (cVar26 == '\0') {
                        cVar26 = '\x01';
                        *(undefined8 *)puVar3 = 0xffffffffffffffff;
                        *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
                        *puVar2 = 1;
                      }
                      else {
                        uVar7 = *(uint *)(puVar3 + 4);
                        if (-1 < (int)uVar7) {
                          if (((ushort *)((ulong)uVar7 + (long)puVar25) != (ushort *)0x0) &&
                             (uVar8 < *(ushort *)((ulong)uVar7 + (long)puVar25))) goto LAB_03755f28;
                          break;
                        }
                        if (uVar7 != 0xffffffff) break;
                      }
                      lVar18 = (long)puVar25 - (ulong)*puVar25;
                      if ((*puVar25 == 0) || (lVar18 == 0)) break;
                      lVar22 = 0xc;
                      if (*(char *)(lVar18 + 10) != '\0') {
                        lVar22 = 0x1c;
                      }
                      if (lVar22 + lVar18 == 0) break;
                      uVar20 = (ulong)*(ushort *)(lVar18 + 8);
                      *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
                      if (uVar20 == 0) break;
                      piVar21 = (int *)(lVar22 + lVar18 + 4);
                      while (piVar21[-1] != 0x170af5b8) {
                        piVar21 = piVar21 + 2;
                        uVar20 = uVar20 - 1;
                        if (uVar20 == 0) goto LAB_03755ef8;
                      }
                      iVar14 = 0;
                      if (*piVar21 != -1) {
                        iVar14 = *piVar21;
                      }
                      *(int *)(puVar3 + 4) = iVar14;
                      if (*puVar25 == 0) break;
                    } while( true );
                  }
LAB_03755ef8:
                  local_98 = puVar4;
                  puVar17 = (ushort *)FUN_03751d60(puVar25,2,0x2f571a00,0);
                  if (puVar17 == (ushort *)0x0) {
                    uVar7 = 0;
                  }
                  else {
                    uVar7 = (uint)*puVar17;
                  }
                  local_44 = local_44 + uVar7;
                  puVar4 = local_98;
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03755f28:
  local_98 = puVar4;
  uVar7 = FUN_0377fb80(0);
  uVar8 = FUN_0377fb80(1);
  uVar9 = FUN_0377fb80(2);
  uVar10 = FUN_0377fb80(3);
  uVar11 = FUN_0377fb80(4);
  uVar12 = FUN_0377fb80(5);
  uVar13 = FUN_0377fb80(6);
  FUN_037567d0(&local_78,0xd,
               (uVar8 & 1) + (uVar7 & 1) + (uVar9 & 1) + (uVar10 & 1) +
               (uVar11 & 1) + (uVar12 & 1) + (uVar13 & 1));
  local_98 = puVar1 + 0x10;
  local_90 = "UseKabetasuDone";
  iVar14 = FUN_02758850(&local_98);
  puVar3 = PTR_DAT_04bcad20;
  puVar2 = PTR_DAT_04bcad18;
  local_98._0_4_ = 0xe;
  if ((int)*(uint *)(local_68 + 0x3c0) < 1) {
    if ((((*(long *)(local_68 + 0x2b0) != 0) &&
         (puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8), puVar25 != (uint *)0x0)) &&
        ((*(uint *)(local_68 + 0x2c8) < 0xf ||
         (*(char *)(*(long *)(local_68 + 0x2d0) + 0xe) != '\0')))) &&
       (((0xe < *puVar25 && (puVar25[1] != 0)) && ((ushort)puVar25[2] != 0)))) {
      iVar15 = 0xc;
      if (*(char *)((long)puVar25 + 10) != '\0') {
        iVar15 = 0x1c;
      }
      puVar25 = (uint *)((ulong)(puVar25[1] * 0xe + (uint)(ushort)puVar25[2] * 8 + iVar15) +
                        (long)puVar25);
      goto joined_r0x03756130;
    }
  }
  else if (0xe < *(uint *)(local_68 + 0x3c0)) {
    if (*(uint *)(local_68 + 0x3b0) < 0xf) {
      local_98._0_4_ = 0;
    }
    puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_98 * 8);
joined_r0x03756130:
    if (puVar25 != (uint *)0x0) {
      if (*puVar25 == 0) {
LAB_03756148:
        uVar7 = 0;
      }
      else {
        cVar26 = *PTR_DAT_04bcad18;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
          }
          else {
            uVar7 = *(uint *)(puVar3 + 4);
            if (-1 < (int)uVar7) {
              if ((ushort *)((ulong)uVar7 + (long)puVar25) == (ushort *)0x0) goto LAB_03756148;
              uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar25);
              goto LAB_0375614c;
            }
            if (uVar7 != 0xffffffff) goto LAB_03756148;
          }
          puVar27 = (uint *)(ulong)*puVar25;
          uVar7 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_0375614c;
          lVar18 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
          if (lVar18 == 0) goto LAB_03756148;
          uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
          *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
          uVar7 = 0;
          if (uVar20 == 0) goto LAB_0375614c;
          piVar21 = (int *)(lVar18 + 4);
          while (piVar21[-1] != 0x170af5b8) {
            piVar21 = piVar21 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) {
              uVar7 = 0;
              goto LAB_0375614c;
            }
          }
          iVar15 = 0;
          if (*piVar21 != -1) {
            iVar15 = *piVar21;
          }
          *(int *)(puVar3 + 4) = iVar15;
        } while (*puVar25 != 0);
        uVar7 = 0;
      }
LAB_0375614c:
      puVar3 = PTR_DAT_04bcad20;
      puVar2 = PTR_DAT_04bcad18;
      if ((int)uVar7 <= iVar14) {
        if (*puVar25 == 0) {
LAB_03756238:
          uVar7 = 0;
        }
        else {
          cVar26 = *PTR_DAT_04bcad18;
          do {
            if (cVar26 == '\0') {
              cVar26 = '\x01';
              *(undefined8 *)puVar3 = 0xffffffffffffffff;
              *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
              *puVar2 = 1;
            }
            else {
              uVar7 = *(uint *)(puVar3 + 8);
              if (-1 < (int)uVar7) {
                if ((ushort *)((ulong)uVar7 + (long)puVar25) == (ushort *)0x0) goto LAB_03756238;
                uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar25);
                goto LAB_0375623c;
              }
              if (uVar7 != 0xffffffff) goto LAB_03756238;
            }
            puVar27 = (uint *)(ulong)*puVar25;
            uVar7 = 0;
            if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_0375623c;
            lVar18 = 0xc;
            if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
              lVar18 = 0x1c;
            }
            lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
            if (lVar18 == 0) goto LAB_03756238;
            uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
            *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
            uVar7 = 0;
            if (uVar20 == 0) goto LAB_0375623c;
            piVar21 = (int *)(lVar18 + 4);
            while (piVar21[-1] != 0x2f571a00) {
              piVar21 = piVar21 + 2;
              uVar20 = uVar20 - 1;
              if (uVar20 == 0) {
                uVar7 = 0;
                goto LAB_0375623c;
              }
            }
            iVar14 = 0;
            if (*piVar21 != -1) {
              iVar14 = *piVar21;
            }
            *(int *)(puVar3 + 8) = iVar14;
          } while (*puVar25 != 0);
          uVar7 = 0;
        }
LAB_0375623c:
        local_44 = local_44 + uVar7;
      }
    }
  }
  local_98 = puVar1 + 0x10;
  local_90 = "GetDrinkCount";
  uVar6 = FUN_02758850(&local_98);
  FUN_037567d0(&local_78,0xf,uVar6);
  lVar18 = *(long *)PTR_DAT_04bb39b0;
  pbVar23 = PTR_DAT_04bb32e0;
  if (lVar18 == 0) {
LAB_037562c4:
    if (*pbVar23 < 8) goto LAB_0375633c;
LAB_037562d0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_03756334:
      pbVar23 = PTR_DAT_04bb5038;
      goto LAB_0375633c;
    }
    lVar18 = **(long **)PTR_DAT_04bb27d0;
    bVar24 = *(byte *)(lVar18 + 0x473);
    pbVar23 = PTR_DAT_04bb5038;
    if ((long)(char)bVar24 != 0xffffffffffffffff) {
      puVar25 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar24 & 0xffffffffU) * 0x20;
      if (7 < bVar24) {
        puVar25 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar25 & 8) != 0) {
        pbVar23 = (byte *)(lVar18 + 0x471);
      }
    }
    bVar24 = *pbVar23;
    bVar5 = 7 < bVar24;
    if (bVar5) {
      bVar24 = 0xff;
    }
    local_b0 = (undefined *)CONCAT71(local_b0._1_7_,bVar24);
    if (bVar5) goto LAB_03756334;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar23) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_037562c4;
      }
      goto LAB_037562d0;
    }
LAB_0375633c:
    bVar24 = *pbVar23;
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    local_b0 = (undefined *)CONCAT71(local_b0._1_7_,bVar24);
  }
  local_98 = puVar1 + 0x10;
  local_90 = "WHEREAREN_Unlock_CoordinateNpcHouse";
  iVar14 = FUN_0274bce0(&local_b0,&local_98);
  puVar3 = PTR_DAT_04bcad20;
  puVar2 = PTR_DAT_04bcad18;
  local_98._0_4_ = 0x10;
  if ((int)*(uint *)(local_68 + 0x3c0) < 1) {
    if ((((*(long *)(local_68 + 0x2b0) == 0) ||
         (puVar25 = *(uint **)(*(long *)(local_68 + 0x2b0) + 8), puVar25 == (uint *)0x0)) ||
        ((0x10 < *(uint *)(local_68 + 0x2c8) &&
         (*(char *)(*(long *)(local_68 + 0x2d0) + 0x10) == '\0')))) ||
       (((*puVar25 < 0x11 || (puVar25[1] == 0)) || ((ushort)puVar25[2] == 0)))) goto LAB_037565f8;
    iVar15 = 0xc;
    if (*(char *)((long)puVar25 + 10) != '\0') {
      iVar15 = 0x1c;
    }
    puVar25 = (uint *)((ulong)(puVar25[1] * 0x10 + (uint)(ushort)puVar25[2] * 8 + iVar15) +
                      (long)puVar25);
  }
  else {
    if (*(uint *)(local_68 + 0x3c0) < 0x11) goto LAB_037565f8;
    if (*(uint *)(local_68 + 0x3b0) < 0x11) {
      local_98._0_4_ = 0;
    }
    puVar25 = *(uint **)(*(long *)(local_68 + 0x3b8) + (ulong)(uint)local_98 * 8);
  }
  if (puVar25 != (uint *)0x0) {
    if (*puVar25 == 0) {
LAB_037564f8:
      uVar7 = 0;
    }
    else {
      cVar26 = *PTR_DAT_04bcad18;
      do {
        if (cVar26 == '\0') {
          cVar26 = '\x01';
          *(undefined8 *)puVar3 = 0xffffffffffffffff;
          *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
          *puVar2 = 1;
        }
        else {
          uVar7 = *(uint *)(puVar3 + 4);
          if (-1 < (int)uVar7) {
            if ((ushort *)((ulong)uVar7 + (long)puVar25) == (ushort *)0x0) goto LAB_037564f8;
            uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar25);
            goto LAB_037564fc;
          }
          if (uVar7 != 0xffffffff) goto LAB_037564f8;
        }
        puVar27 = (uint *)(ulong)*puVar25;
        uVar7 = 0;
        if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_037564fc;
        lVar18 = 0xc;
        if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
          lVar18 = 0x1c;
        }
        lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
        if (lVar18 == 0) goto LAB_037564f8;
        uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
        *(undefined4 *)(puVar3 + 4) = 0xfffffffe;
        uVar7 = 0;
        if (uVar20 == 0) goto LAB_037564fc;
        piVar21 = (int *)(lVar18 + 4);
        while (piVar21[-1] != 0x170af5b8) {
          piVar21 = piVar21 + 2;
          uVar20 = uVar20 - 1;
          if (uVar20 == 0) {
            uVar7 = 0;
            goto LAB_037564fc;
          }
        }
        iVar15 = 0;
        if (*piVar21 != -1) {
          iVar15 = *piVar21;
        }
        *(int *)(puVar3 + 4) = iVar15;
      } while (*puVar25 != 0);
      uVar7 = 0;
    }
LAB_037564fc:
    puVar3 = PTR_DAT_04bcad20;
    puVar2 = PTR_DAT_04bcad18;
    if ((int)uVar7 <= iVar14) {
      if (*puVar25 == 0) {
LAB_037565e8:
        uVar7 = 0;
      }
      else {
        cVar26 = *PTR_DAT_04bcad18;
        do {
          if (cVar26 == '\0') {
            cVar26 = '\x01';
            *(undefined8 *)puVar3 = 0xffffffffffffffff;
            *(undefined8 *)(puVar3 + 8) = 0xffffffffffffffff;
            *puVar2 = 1;
          }
          else {
            uVar7 = *(uint *)(puVar3 + 8);
            if (-1 < (int)uVar7) {
              if ((ushort *)((ulong)uVar7 + (long)puVar25) == (ushort *)0x0) goto LAB_037565e8;
              uVar7 = (uint)*(ushort *)((ulong)uVar7 + (long)puVar25);
              goto LAB_037565ec;
            }
            if (uVar7 != 0xffffffff) goto LAB_037565e8;
          }
          puVar27 = (uint *)(ulong)*puVar25;
          uVar7 = 0;
          if ((*puVar25 == 0) || (puVar25 == puVar27)) goto LAB_037565ec;
          lVar18 = 0xc;
          if (*(char *)((long)puVar25 + (10 - (long)puVar27)) != '\0') {
            lVar18 = 0x1c;
          }
          lVar18 = (long)puVar25 + (lVar18 - (long)puVar27);
          if (lVar18 == 0) goto LAB_037565e8;
          uVar20 = (ulong)*(ushort *)((long)puVar25 + (8 - (long)puVar27));
          *(undefined4 *)(puVar3 + 8) = 0xfffffffe;
          uVar7 = 0;
          if (uVar20 == 0) goto LAB_037565ec;
          piVar21 = (int *)(lVar18 + 4);
          while (piVar21[-1] != 0x2f571a00) {
            piVar21 = piVar21 + 2;
            uVar20 = uVar20 - 1;
            if (uVar20 == 0) {
              uVar7 = 0;
              goto LAB_037565ec;
            }
          }
          iVar14 = 0;
          if (*piVar21 != -1) {
            iVar14 = *piVar21;
          }
          *(int *)(puVar3 + 8) = iVar14;
        } while (*puVar25 != 0);
        uVar7 = 0;
      }
LAB_037565ec:
      local_44 = local_44 + uVar7;
    }
  }
LAB_037565f8:
  local_a0 = &local_68;
  local_90 = "CoordinatorGrade";
  local_98 = puVar1 + 0x10;
  iVar15 = FUN_02758850(&local_98);
  local_90 = "NewBuildCount";
  local_98 = puVar1 + 0x10;
  iVar14 = FUN_02758850(&local_98);
  lVar18 = *(long *)PTR_DAT_04bb27f8;
  if ((lVar18 != 0) && ((*(ushort *)(lVar18 + 0xc0) & 0xf) == 1)) {
    if ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0 || (*(long *)PTR_DAT_04bc1530 == 0)) ||
        (lVar22 = *(long *)(*(long *)PTR_DAT_04bc1530 + 8), lVar22 == 0)))) {
      uVar29 = *(undefined2 *)(lVar18 + 0x2a);
    }
    else if ((*(long **)(lVar22 + 0x60) == (long *)0x0) ||
            (puVar19 = (undefined8 *)**(long **)(lVar22 + 0x60), puVar19 == (undefined8 *)0x0)) {
      uVar29 = *(undefined2 *)(*(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40) + 2);
    }
    else {
      uVar20 = (**(code **)*puVar19)();
      uVar29 = *(undefined2 *)(*(long *)(lVar22 + 0x48) + *(long *)(lVar22 + 0x40) + 2);
      if ((((uVar20 & 1) != 0) && (*(long *)(lVar22 + 0x60) != 0)) &&
         (puVar19 = *(undefined8 **)(*(long *)(lVar22 + 0x60) + 8), puVar19 != (undefined8 *)0x0)) {
        (**(code **)*puVar19)();
      }
    }
    local_90 = (char *)CONCAT62(local_90._2_6_,uVar29);
    local_b0 = puVar1 + 0x10;
    local_98 = PTR_DAT_04bb7648 + 0x10;
    pcStack_a8 = "IsBuiltNewHouse";
    iVar16 = FUN_0376c020(&local_98,&local_b0);
    if (iVar16 == 0) {
      iVar14 = iVar14 + 1;
    }
  }
  iVar16 = local_44;
  if (iVar15 < 3) {
    iVar16 = iVar14;
  }
  local_b0 = (undefined *)CONCAT44(local_b0._4_4_,iVar16);
  if ((param_1 & 1) == 0) {
    if ((param_3 != (int *)0x0) && ((param_2 & 1) != 0)) {
      iVar14 = FUN_03756c40(&local_a0,&local_b0,2 < iVar15);
      if (iVar15 + 1 <= iVar14) {
        iVar14 = iVar15 + 1;
      }
      *param_3 = iVar14;
    }
  }
  else {
    iVar14 = FUN_03756c40(&local_a0,&local_b0,2 < iVar15);
    if (iVar15 + 1 <= iVar14) {
      iVar14 = iVar15 + 1;
    }
    iVar15 = iVar14;
  }
  local_90 = "CoordinatorGrade";
  local_98 = puVar1 + 0x10;
  FUN_02758bb8(&local_98,iVar15);
  local_90 = "CoordinatorRank";
  local_98 = puVar1 + 0x10;
  FUN_02758bb8(&local_98,local_44);
  return;
}

