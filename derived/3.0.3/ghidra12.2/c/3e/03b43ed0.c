
/* WARNING: Removing unreachable block (ram,0x03b455a4) */

void FUN_03b43ed0(ulong param_1)

{
  byte *pbVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  ulong uVar8;
  undefined *puVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  long *plVar13;
  long lVar14;
  long lVar15;
  ulong uVar16;
  long *plVar17;
  long lVar18;
  long lVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint *puVar22;
  byte bVar23;
  long lVar24;
  uint uVar25;
  ulong uVar26;
  undefined1 *puVar27;
  undefined8 *puVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  undefined4 uVar35;
  float fVar36;
  float fVar37;
  undefined4 uVar38;
  undefined4 uVar39;
  undefined8 local_e0;
  undefined8 uStack_d8;
  uint local_d0;
  uint uStack_cc;
  float local_c8;
  undefined4 uStack_c4;
  long local_c0;
  undefined8 uStack_b8;
  undefined4 local_b0;
  undefined4 local_ac [3];
  
  FUN_03b46430();
  lVar14 = *(long *)(*(long *)(param_1 + 0x120) + 8);
  if (DAT_05aebc00 == '\0') {
    if (*(int *)(lVar14 + 0x10) == 0) goto LAB_03b43f34;
LAB_03b43f5c:
    fVar37 = *(float *)(*(long *)(param_1 + 0xd8) + 8) *
             *(float *)(*(long *)(*(long *)PTR_DAT_04bc3ee8 + 0x10) + 0x10);
    if (*(long *)(param_1 + 0x108) != 0) {
      fVar37 = fVar37 * *(float *)(*(long *)(param_1 + 0x108) + 0x148);
    }
    if (*(long *)(param_1 + 0x128) != 0) {
      iVar7 = *(int *)(param_1 + 0x34);
      local_e0 = CONCAT44(local_e0._4_4_,iVar7);
      fVar29 = *(float *)(*(long *)(param_1 + 0x128) + 8);
      if (iVar7 == 3) {
        fVar31 = sinf(fVar29 * 1.5707964);
      }
      else if (iVar7 == 2) {
        fVar31 = SQRT(fVar29);
        if (NAN(fVar31)) {
          fVar31 = sqrtf(fVar29);
        }
      }
      else {
        fVar31 = fVar29;
        if (iVar7 == 1) {
          fVar31 = fVar29 * fVar29;
        }
      }
      fVar37 = fVar37 * fVar31;
    }
    uVar16 = (ulong)*(ushort *)(param_1 + 0xea);
    if (*(ushort *)(param_1 + 0xea) != 0) {
      fVar29 = *(float *)(param_1 + 0xf8);
      pbVar1 = (byte *)(param_1 + 0x130);
      uVar20 = 0;
      do {
        uVar26 = 0;
        DAT_05aebb00 = 0;
        DAT_05aebb08 = 0;
        DAT_05aebaf0 = 0;
        DAT_05aebaf8 = 0;
        DAT_05aebae0 = 0;
        DAT_05aebae8 = 0;
        DAT_05aebad0 = 0;
        DAT_05aebad8 = 0;
        DAT_05aebac0 = 0;
        DAT_05aebac8 = 0;
        DAT_05aebab0 = 0;
        DAT_05aebab8 = 0;
        DAT_05aebaa0 = 0;
        DAT_05aebaa8 = 0;
        DAT_05aeba90 = 0;
        DAT_05aeba98 = 0;
        DAT_05aeba80 = 0;
        DAT_05aeba88 = 0;
        if (uVar20 < uVar16) {
          uVar26 = (ulong)*(byte *)(param_1 + uVar20 + 0xec);
        }
        uVar11 = local_e0._4_4_;
        if (*(long *)(param_1 + 0x118) == 0) {
          lVar14 = *(long *)(param_1 + 0x1e8);
          lVar15 = *(long *)PTR_DAT_04bc3ee8;
          if (lVar14 == 0) {
            if ((lVar15 != 0) && (puVar22 = *(uint **)(lVar15 + 0x10), puVar22 != (uint *)0x0)) {
              lVar14 = *(long *)(param_1 + 0xd8);
              uVar8 = (ulong)local_e0._4_4_;
              local_e0 = uVar8 << 0x20;
              uVar39 = *(undefined4 *)(lVar14 + 0x24);
              uVar38 = *(undefined4 *)(lVar14 + 0x38);
              iVar7 = *(int *)(lVar14 + 0x34);
              lVar15 = *(long *)(puVar22 + 2);
              if (lVar15 != 0) {
                puVar5 = puVar22 + 0x65 + *puVar22;
                if (2 < *puVar22) {
                  puVar5 = puVar22 + 0x65;
                }
                uVar10 = *puVar5;
                local_e0 = uVar8 << 0x20;
                if ((uVar26 != 0) && (fVar31 = *(float *)(lVar14 + 0xc), 0.0 < fVar31)) {
                  pbVar2 = (byte *)(param_1 + uVar20 + 0xec);
                  pbVar6 = pbVar1 + uVar20 * 6;
                  if (7 < uVar20) {
                    pbVar6 = pbVar1;
                  }
                  if ((uVar20 < uVar16) && (*pbVar2 != 0)) {
                    uVar25 = (uint)*pbVar6;
                  }
                  else {
                    uVar25 = 4;
                  }
                  lVar14 = *(long *)(lVar15 + 8);
                  if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
                     (uVar4 = *(uint *)(lVar14 + 8), uVar4 == 0)) {
LAB_03b44688:
                    lVar14 = 0;
                    iVar12 = iVar7;
                  }
                  else {
                    uVar3 = (uint)*(ushort *)(param_1 + 0xe8);
                    if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                      uVar3 = *(uint *)(lVar14 + 0x18);
                    }
                    if ((int)uVar4 <= (int)uVar3) {
                      uVar3 = 0;
                    }
                    if (uVar4 <= uVar3) goto LAB_03b44688;
                    lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar3 * 8);
                    if (lVar14 == 0) {
switchD_03b44678_default:
                      iVar12 = 0;
                    }
                    else {
                      local_e0 = CONCAT44(uVar11,uVar25);
                      switch(uVar25) {
                      case 0:
                        iVar12 = -*(int *)(lVar14 + 0x24);
                        break;
                      case 1:
                        iVar12 = *(int *)(lVar14 + 0x24);
                        break;
                      case 2:
                        iVar12 = -*(int *)(lVar14 + 0x28);
                        break;
                      case 3:
                        iVar12 = *(int *)(lVar14 + 0x28);
                        break;
                      default:
                        goto switchD_03b44678_default;
                      }
                    }
                    iVar12 = iVar12 + iVar7;
                  }
                  uVar35 = 0x40000000;
                  if (uVar25 != 5) {
                    uVar35 = uVar39;
                  }
                  FUN_03bac7c0(fVar31 * *(float *)(lVar15 + 0x20),0x3f800000,uVar38,uVar35,
                               &DAT_05aeba80,iVar12,lVar14,0,uVar10);
                  if (uVar26 != 1) {
                    if ((uVar20 < *(ushort *)(param_1 + 0xea)) && (1 < *pbVar2)) {
                      uVar11 = (uint)pbVar6[1];
                      lVar14 = *(long *)(lVar15 + 8);
                      if (lVar14 != 0) goto LAB_03b44700;
LAB_03b4476c:
                      lVar14 = 0;
                      iVar12 = iVar7;
                    }
                    else {
                      uVar11 = 4;
                      lVar14 = *(long *)(lVar15 + 8);
                      if (lVar14 == 0) goto LAB_03b4476c;
LAB_03b44700:
                      if ((*(long *)(lVar14 + 0x10) == 0) ||
                         (uVar25 = *(uint *)(lVar14 + 8), uVar25 == 0)) goto LAB_03b4476c;
                      uVar4 = (uint)*(ushort *)(param_1 + 0xe8);
                      if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                        uVar4 = *(uint *)(lVar14 + 0x18);
                      }
                      if ((int)uVar25 <= (int)uVar4) {
                        uVar4 = 0;
                      }
                      if (uVar25 <= uVar4) goto LAB_03b4476c;
                      lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar4 * 8);
                      if (lVar14 == 0) {
switchD_03b4475c_default:
                        iVar12 = 0;
                      }
                      else {
                        local_e0 = CONCAT44(local_e0._4_4_,uVar11);
                        switch(uVar11) {
                        case 0:
                          iVar12 = -*(int *)(lVar14 + 0x24);
                          break;
                        case 1:
                          iVar12 = *(int *)(lVar14 + 0x24);
                          break;
                        case 2:
                          iVar12 = -*(int *)(lVar14 + 0x28);
                          break;
                        case 3:
                          iVar12 = *(int *)(lVar14 + 0x28);
                          break;
                        default:
                          goto switchD_03b4475c_default;
                        }
                      }
                      iVar12 = iVar12 + iVar7;
                    }
                    uVar35 = 0x40000000;
                    if (uVar11 != 5) {
                      uVar35 = uVar39;
                    }
                    FUN_03bac7c0(fVar31 * *(float *)(lVar15 + 0x20),0x3f800000,uVar38,uVar35,
                                 &DAT_05aeba98,iVar12,lVar14,0,uVar10);
                    if (uVar26 != 2) {
                      if ((uVar20 < *(ushort *)(param_1 + 0xea)) && (2 < *pbVar2)) {
                        uVar11 = (uint)pbVar6[2];
                        lVar14 = *(long *)(lVar15 + 8);
                        if (lVar14 != 0) goto LAB_03b447e8;
LAB_03b44854:
                        lVar14 = 0;
                        iVar12 = iVar7;
                      }
                      else {
                        uVar11 = 4;
                        lVar14 = *(long *)(lVar15 + 8);
                        if (lVar14 == 0) goto LAB_03b44854;
LAB_03b447e8:
                        if ((*(long *)(lVar14 + 0x10) == 0) ||
                           (uVar25 = *(uint *)(lVar14 + 8), uVar25 == 0)) goto LAB_03b44854;
                        uVar4 = (uint)*(ushort *)(param_1 + 0xe8);
                        if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                          uVar4 = *(uint *)(lVar14 + 0x18);
                        }
                        if ((int)uVar25 <= (int)uVar4) {
                          uVar4 = 0;
                        }
                        if (uVar25 <= uVar4) goto LAB_03b44854;
                        lVar14 = *(long *)(*(long *)(lVar14 + 0x10) + (long)(int)uVar4 * 8);
                        if (lVar14 == 0) {
switchD_03b44844_default:
                          iVar12 = 0;
                        }
                        else {
                          local_e0 = CONCAT44(local_e0._4_4_,uVar11);
                          switch(uVar11) {
                          case 0:
                            iVar12 = -*(int *)(lVar14 + 0x24);
                            break;
                          case 1:
                            iVar12 = *(int *)(lVar14 + 0x24);
                            break;
                          case 2:
                            iVar12 = -*(int *)(lVar14 + 0x28);
                            break;
                          case 3:
                            iVar12 = *(int *)(lVar14 + 0x28);
                            break;
                          default:
                            goto switchD_03b44844_default;
                          }
                        }
                        iVar12 = iVar12 + iVar7;
                      }
                      uVar35 = 0x40000000;
                      if (uVar11 != 5) {
                        uVar35 = uVar39;
                      }
                      FUN_03bac7c0(fVar31 * *(float *)(lVar15 + 0x20),0x3f800000,uVar38,uVar35,
                                   &DAT_05aebab0,iVar12,lVar14,0,uVar10);
                      if (uVar26 != 3) {
                        if ((uVar20 < *(ushort *)(param_1 + 0xea)) && (3 < *pbVar2)) {
                          uVar11 = (uint)pbVar6[3];
                        }
                        else {
                          uVar11 = 4;
                        }
                        lVar14 = *(long *)(lVar15 + 8);
                        if ((lVar14 == 0) || (lVar18 = *(long *)(lVar14 + 0x10), lVar18 == 0)) {
                          fVar30 = *(float *)(lVar15 + 0x20);
                          uVar21 = 0;
                          uVar35 = 0x40000000;
                          if (uVar11 != 5) {
                            uVar35 = uVar39;
                          }
                          iVar12 = iVar7;
                        }
                        else {
                          uVar25 = *(uint *)(lVar14 + 8);
                          if (uVar25 == 0) {
switchD_03b44928_default:
                            iVar12 = 0;
                          }
                          else {
                            iVar12 = 0;
                            uVar4 = (uint)*(ushort *)(param_1 + 0xe8);
                            if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                              uVar4 = *(uint *)(lVar14 + 0x18);
                            }
                            if ((int)uVar25 <= (int)uVar4) {
                              uVar4 = 0;
                            }
                            if (uVar4 < uVar25) {
                              lVar24 = *(long *)(lVar18 + (long)(int)uVar4 * 8);
                              iVar12 = 0;
                              if (lVar24 != 0) {
                                local_e0 = CONCAT44(local_e0._4_4_,uVar11);
                                switch(uVar11) {
                                case 0:
                                  iVar12 = -*(int *)(lVar24 + 0x24);
                                  break;
                                case 1:
                                  iVar12 = *(int *)(lVar24 + 0x24);
                                  break;
                                case 2:
                                  iVar12 = -*(int *)(lVar24 + 0x28);
                                  break;
                                case 3:
                                  iVar12 = *(int *)(lVar24 + 0x28);
                                  break;
                                default:
                                  goto switchD_03b44928_default;
                                }
                              }
                            }
                          }
                          fVar30 = *(float *)(lVar15 + 0x20);
                          uVar25 = *(uint *)(lVar14 + 8);
                          uVar35 = 0x40000000;
                          if (uVar11 != 5) {
                            uVar35 = uVar39;
                          }
                          iVar12 = iVar12 + iVar7;
                          if (uVar25 != 0) {
                            uVar11 = (uint)*(ushort *)(param_1 + 0xe8);
                            if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                              uVar11 = *(uint *)(lVar14 + 0x18);
                            }
                            if ((int)uVar25 <= (int)uVar11) {
                              uVar11 = 0;
                            }
                            if (uVar11 < uVar25) {
                              uVar21 = *(undefined8 *)(lVar18 + (long)(int)uVar11 * 8);
                              goto LAB_03b449a4;
                            }
                          }
                          uVar21 = 0;
                        }
LAB_03b449a4:
                        FUN_03bac7c0(fVar31 * fVar30,0x3f800000,uVar38,uVar35,&DAT_05aebac8,iVar12,
                                     uVar21,0,uVar10);
                        if (uVar26 != 4) {
                          if ((uVar20 < *(ushort *)(param_1 + 0xea)) && (4 < *pbVar2)) {
                            bVar23 = pbVar6[4];
                          }
                          else {
                            bVar23 = 4;
                          }
                          iVar12 = FUN_03bac208(lVar15,bVar23,*(undefined2 *)(param_1 + 0xe8));
                          fVar30 = *(float *)(lVar15 + 0x20);
                          uVar35 = 0x40000000;
                          if (bVar23 != 5) {
                            uVar35 = uVar39;
                          }
                          uVar21 = FUN_03bac0b4(lVar15,*(undefined2 *)(param_1 + 0xe8));
                          FUN_03bac7c0(fVar31 * fVar30,0x3f800000,uVar38,uVar35,&DAT_05aebae0,
                                       iVar12 + iVar7,uVar21,0,uVar10);
                          if (uVar26 != 5) {
                            if ((uVar20 < *(ushort *)(param_1 + 0xea)) && (5 < *pbVar2)) {
                              bVar23 = pbVar6[5];
                            }
                            else {
                              bVar23 = 4;
                            }
                            iVar12 = FUN_03bac208(lVar15,bVar23,*(undefined2 *)(param_1 + 0xe8));
                            fVar30 = *(float *)(lVar15 + 0x20);
                            uVar35 = 0x40000000;
                            if (bVar23 != 5) {
                              uVar35 = uVar39;
                            }
                            uVar21 = FUN_03bac0b4(lVar15,*(undefined2 *)(param_1 + 0xe8));
                            FUN_03bac7c0(fVar31 * fVar30,0x3f800000,uVar38,uVar35,&DAT_05aebaf8,
                                         iVar12 + iVar7,uVar21,0,uVar10);
                            if (uVar26 != 6) {
                              puVar27 = &DAT_05aebb10;
                              uVar16 = 6;
                              do {
                                if ((uVar20 < *(ushort *)(param_1 + 0xea)) && (uVar16 < *pbVar2)) {
                                  uVar25 = (uint)*pbVar6;
                                  lVar14 = *(long *)(lVar15 + 8);
                                  uVar11 = (uint)*pbVar6;
                                  if (lVar14 != 0) goto LAB_03b44b88;
LAB_03b44b0c:
                                  uVar21 = 0;
                                  uVar35 = 0x40000000;
                                  iVar12 = iVar7;
                                  if (uVar25 != 5) {
                                    uVar35 = uVar39;
                                  }
                                }
                                else {
                                  uVar25 = 4;
                                  lVar14 = *(long *)(lVar15 + 8);
                                  uVar11 = 4;
                                  if (lVar14 == 0) goto LAB_03b44b0c;
LAB_03b44b88:
                                  uVar25 = uVar11;
                                  lVar18 = *(long *)(lVar14 + 0x10);
                                  if ((lVar18 == 0) || (uVar11 = *(uint *)(lVar14 + 8), uVar11 == 0)
                                     ) goto LAB_03b44b0c;
                                  uVar4 = (uint)*(ushort *)(param_1 + 0xe8);
                                  if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                                    uVar4 = *(uint *)(lVar14 + 0x18);
                                  }
                                  if ((int)uVar11 <= (int)uVar4) {
                                    uVar4 = 0;
                                  }
                                  if (uVar11 <= uVar4) goto LAB_03b44b0c;
                                  lVar14 = *(long *)(lVar18 + (long)(int)uVar4 * 8);
                                  iVar12 = 0;
                                  if (lVar14 != 0) {
                                    local_e0 = CONCAT44(local_e0._4_4_,uVar25);
                                    switch(uVar25) {
                                    case 0:
                                      iVar12 = -*(int *)(lVar14 + 0x24);
                                      break;
                                    case 1:
                                      iVar12 = *(int *)(lVar14 + 0x24);
                                      break;
                                    case 2:
                                      iVar12 = -*(int *)(lVar14 + 0x28);
                                      break;
                                    case 3:
                                      iVar12 = *(int *)(lVar14 + 0x28);
                                      break;
                                    default:
                                      iVar12 = 0;
                                    }
                                  }
                                  uVar35 = 0x40000000;
                                  if (uVar25 != 5) {
                                    uVar35 = uVar39;
                                  }
                                  uVar21 = *(undefined8 *)(lVar18 + (long)(int)uVar4 * 8);
                                  iVar12 = iVar12 + iVar7;
                                }
                                FUN_03bac7c0(fVar31 * *(float *)(lVar15 + 0x20),0x3f800000,uVar38,
                                             uVar35,puVar27,iVar12,uVar21,0,uVar10);
                                uVar16 = uVar16 + 1;
                                puVar27 = puVar27 + 0x18;
                              } while (uVar26 != uVar16);
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
          else if (((lVar15 != 0) && (puVar22 = *(uint **)(lVar15 + 0x10), puVar22 != (uint *)0x0))
                  && (0 < *(int *)(lVar14 + 0x1c))) {
            uVar11 = 0;
            uVar38 = *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x24);
            uVar10 = 1;
            pbVar2 = pbVar1 + uVar20 * 6;
            if (7 < uVar20) {
              pbVar2 = pbVar1;
            }
            do {
              lVar15 = *(long *)(lVar14 + 0x28);
              if ((lVar15 != 0) && ((int)uVar11 < (int)*(uint *)(lVar14 + 0x20))) {
                uVar25 = uVar11;
                if (*(uint *)(lVar14 + 0x20) <= uVar11) {
                  uVar25 = 0;
                }
                uVar4 = *(uint *)(lVar15 + (ulong)uVar25 * 0x1c);
                if (-1 < (int)uVar4) {
                  if (DAT_05aebb78 == 0) {
                    lVar18 = 0;
                  }
                  else {
                    lVar18 = *(long *)(DAT_05aebb78 + 0x20);
                  }
                  if (((int)uVar4 < (int)*(uint *)(lVar18 + 0x10) &&
                       uVar4 < *(uint *)(lVar18 + 0x10)) &&
                     (lVar18 = *(long *)(*(long *)(lVar18 + 0x18) + (ulong)uVar4 * 8), lVar18 != 0))
                  {
                    lVar24 = *(long *)(puVar22 + 2);
                    fVar31 = *(float *)(lVar15 + (ulong)uVar25 * 0x1c + 0x18);
                    uVar16 = local_e0 >> 0x20;
                    fVar30 = *(float *)(*(long *)(param_1 + 0xd8) + 0x38);
                    if (lVar24 != 0) {
                      lVar19 = *(long *)(lVar24 + 8);
                      fVar33 = 1.0;
                      if (lVar19 != 0) {
                        fVar33 = 1.0;
                        if (*(long *)(lVar19 + 0x10) != 0) {
                          uVar4 = *(uint *)(lVar19 + 8);
                          fVar33 = 1.0;
                          if (uVar4 != 0) {
                            fVar33 = 1.0;
                            uVar3 = (uint)*(ushort *)(param_1 + 0xe8);
                            if (-1 < (int)*(uint *)(lVar19 + 0x18)) {
                              uVar3 = *(uint *)(lVar19 + 0x18);
                            }
                            if ((int)uVar4 <= (int)uVar3) {
                              uVar3 = 0;
                            }
                            if (uVar3 < uVar4) {
                              lVar19 = *(long *)(*(long *)(lVar19 + 0x10) + (long)(int)uVar3 * 8);
                              fVar33 = 1.0;
                              if (lVar19 != 0) {
                                fVar33 = *(float *)(lVar19 + 0x18) *
                                         *(float *)(*(long *)(DAT_05aebb78 + 0x10) + 0x20);
                              }
                            }
                          }
                        }
                      }
                      puVar5 = puVar22 + 0x65 + *puVar22;
                      if (2 < *puVar22) {
                        puVar5 = puVar22 + 0x65;
                      }
                      uVar4 = *puVar5;
                      fVar34 = *(float *)(*(long *)(param_1 + 0xd8) + 0xc);
                      local_e0 = uVar16 << 0x20;
                      fVar36 = *(float *)(lVar18 + 0x54);
                      if (0.0 <= fVar36) {
                        if (0.0 <= fVar34) {
                          fVar34 = fVar34 * fVar36;
                        }
                        else {
                          fVar34 = fVar36;
                        }
                      }
                      fVar36 = 0.0;
                      if (0.0 <= fVar34) {
                        fVar36 = fVar34;
                      }
                      if ((uVar26 != 0) &&
                         (fVar34 = *(float *)(lVar15 + (ulong)uVar25 * 0x1c + 4) *
                                   *(float *)(lVar18 + 0x50) * fVar36, 0.0 < fVar34)) {
                        uVar16 = 0;
                        puVar28 = &DAT_05aeba80;
                        uVar39 = uVar38;
                        do {
                          lVar14 = *(long *)(*(long *)(param_1 + 0x1e8) + 0x28);
                          if ((lVar14 == 0) ||
                             (uVar25 = *(uint *)(*(long *)(param_1 + 0x1e8) + 0x20),
                             (int)uVar25 <= (int)uVar11)) {
                            fVar36 = 0.0;
                            iVar7 = *(int *)(*(long *)(param_1 + 0xd8) + 0x34);
                          }
                          else {
                            uVar3 = uVar11;
                            if (uVar25 <= uVar11) {
                              uVar3 = 0;
                            }
                            lVar14 = lVar14 + (ulong)uVar3 * 0x1c + (uVar16 & 1) * 4;
                            fVar36 = *(float *)(lVar14 + 8);
                            iVar7 = *(int *)(*(long *)(param_1 + 0xd8) + 0x34) +
                                    *(int *)(lVar14 + 0x10);
                          }
                          fVar32 = 0.0;
                          if ((0.0 < fVar33) && (fVar32 = 1.0, 0.0 <= fVar36)) {
                            fVar32 = fVar36 / fVar33;
                          }
                          uVar38 = uVar39;
                          if ((uVar20 < *(ushort *)(param_1 + 0xea)) &&
                             (uVar16 < *(byte *)(param_1 + uVar20 + 0xec))) {
                            pbVar6 = pbVar2 + uVar16;
                            if (5 < uVar16) {
                              pbVar6 = pbVar2;
                            }
                            uVar38 = 0x40000000;
                            if (*pbVar6 != 5) {
                              uVar38 = uVar39;
                            }
                          }
                          lVar14 = *(long *)(lVar24 + 8);
                          if (((lVar14 == 0) || (*(long *)(lVar14 + 0x10) == 0)) ||
                             (uVar25 = *(uint *)(lVar14 + 8), uVar25 == 0)) {
LAB_03b444d0:
                            uVar21 = 0;
                          }
                          else {
                            uVar3 = (uint)*(ushort *)(param_1 + 0xe8);
                            if (-1 < (int)*(uint *)(lVar14 + 0x18)) {
                              uVar3 = *(uint *)(lVar14 + 0x18);
                            }
                            if ((int)uVar25 <= (int)uVar3) {
                              uVar3 = 0;
                            }
                            if (uVar25 <= uVar3) goto LAB_03b444d0;
                            uVar21 = *(undefined8 *)
                                      (*(long *)(lVar14 + 0x10) + (long)(int)uVar3 * 8);
                          }
                          FUN_03bac7c0(fVar34 * *(float *)(lVar24 + 0x20),fVar32,fVar31 + fVar30,
                                       uVar38,puVar28,iVar7,uVar21,~uVar10 & 1,uVar4);
                          uVar16 = uVar16 + 1;
                          puVar28 = puVar28 + 3;
                          uVar39 = uVar38;
                        } while (uVar26 != uVar16);
                        lVar14 = *(long *)(param_1 + 0x1e8);
                        uVar10 = 0;
                        goto LAB_03b44330;
                      }
                    }
                    local_e0 = uVar16 << 0x20;
                    uVar10 = 0;
                  }
                }
              }
LAB_03b44330:
              uVar11 = uVar11 + 1;
            } while ((int)uVar11 < *(int *)(lVar14 + 0x1c));
          }
        }
        else {
          uVar16 = (ulong)local_e0._4_4_;
          lVar14 = *(long *)(*(long *)(DAT_05aebb78 + 0x10) + 8);
          if (lVar14 == 0) {
            fVar31 = 0.0;
          }
          else {
            fVar30 = *(float *)(*(long *)(param_1 + 0xd8) + 0xc);
            fVar31 = 1.0;
            if (0.0 <= fVar30) {
              fVar31 = fVar30;
            }
            fVar31 = *(float *)(lVar14 + 0x20) * fVar31;
          }
          local_e0 = uVar16 << 0x20;
          if (uVar26 != 0) {
            local_e0 = uVar16 << 0x20;
            uVar16 = 0;
            puVar28 = &DAT_05aeba80;
            do {
              (**(code **)(**(long **)(param_1 + 0x118) + 0x30))
                        (fVar31,*(long **)(param_1 + 0x118),puVar28,param_1,uVar20 & 0xffffffff,
                         uVar16 & 0xffffffff,0);
              uVar16 = uVar16 + 1;
              puVar28 = puVar28 + 3;
            } while (uVar26 != uVar16);
          }
        }
        if (((DAT_05aebc00 == '\0') &&
            (plVar13 = *(long **)(*(long *)(*(long *)(param_1 + 0x120) + 8) + 0x48),
            plVar13 != (long *)0x0)) && (lVar14 = *plVar13, lVar14 != 0)) {
          FUN_003cfb7c(lVar14,1);
        }
        fVar31 = 0.0;
        if (uVar20 < 8) {
          fVar31 = (float)NEON_ucvtf((uint)*(byte *)(param_1 + 0x100 + uVar20));
          fVar31 = fVar31 * 0.003921569;
        }
        if (uVar26 != 0) {
          fVar31 = fVar37 * fVar29 * fVar31;
          uVar16 = 0;
          iVar7 = 1 << (ulong)((uint)uVar20 & 0x1f);
          puVar28 = &DAT_05aeba80;
          do {
            lVar15 = *(long *)(*(long *)(param_1 + 0x120) + 8);
            lVar14 = *(long *)(lVar15 + 0x38);
            if (DAT_05aebc00 != '\0') {
              lVar14 = lVar15 + 0x70;
            }
            if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x11) >> 5 & 1) == 0)) {
              if (DAT_05aebc00 == '\0') {
                FUN_03b4754c(fVar31,lVar15 + 8,puVar28,0,uVar16 & 0xffffffff,0,iVar7);
              }
              else {
                FUN_03b60cc0(fVar31,lVar15 + 0x50,puVar28,0,uVar16 & 0xffffffff,0,iVar7);
              }
            }
            uVar16 = uVar16 + 1;
            puVar28 = puVar28 + 3;
          } while (uVar26 != uVar16);
        }
        uVar16 = (ulong)*(ushort *)(param_1 + 0xea);
        uVar20 = uVar20 + 1;
      } while (uVar20 < uVar16);
    }
    lVar14 = *(long *)(*(long *)(param_1 + 0x120) + 8);
    lVar15 = *(long *)(lVar14 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar15 = lVar14 + 0x70;
    }
    if ((lVar15 == 0) || ((*(byte *)(lVar15 + 0x11) >> 5 & 1) == 0)) {
      if (**(char **)(DAT_05aebb78 + 0x90) == '\0') {
        local_e0 = local_e0 & 0xffffffff00000000;
        if (DAT_05aebc00 == '\0') {
          FUN_03b474bc(*(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x10),lVar14 + 8,0);
        }
        else {
          FUN_03b60840(lVar14 + 0x50,0);
        }
        lVar15 = *(long *)(param_1 + 0xd8);
        fVar37 = *(float *)(lVar15 + 0x14);
        fVar29 = *(float *)(lVar15 + 0x18);
        local_e0 = CONCAT44(local_e0._4_4_,3);
        fVar31 = *(float *)(lVar15 + 0x1c);
        if (*(long **)(param_1 + 0x118) == (long *)0x0) {
          if (*(long *)(param_1 + 0x1e8) != 0) {
            fVar30 = *(float *)(*(long *)(param_1 + 0x1e8) + 0xc);
            goto joined_r0x03b44e14;
          }
        }
        else {
          fVar30 = (float)(**(code **)(**(long **)(param_1 + 0x118) + 0x38))();
joined_r0x03b44e14:
          if (0.0 <= fVar30) {
            lVar15 = *(long *)PTR_DAT_04bd1eb8;
            fVar33 = *(float *)(lVar15 + 0x28);
            iVar7 = *(int *)(lVar15 + 0x18);
            local_e0._4_4_ = (uint)(local_e0 >> 0x20);
            local_e0 = CONCAT44(local_e0._4_4_,iVar7);
            if (0.0 < fVar30) {
              fVar33 = fVar33 + fVar30 * (*(float *)(lVar15 + 0x40) - fVar33);
            }
            if (iVar7 == 3) {
              fVar33 = fVar31 + fVar33;
              fVar30 = 1.0;
              if (fVar33 <= 1.0) {
                fVar30 = fVar33;
              }
              fVar31 = 0.0;
              if (0.0 <= fVar33) {
                fVar31 = fVar30;
              }
            }
            else if (iVar7 == 2) {
              fVar33 = fVar29 + fVar33;
              fVar30 = 1.0;
              if (fVar33 <= 1.0) {
                fVar30 = fVar33;
              }
              fVar29 = 0.0;
              if (0.0 <= fVar33) {
                fVar29 = fVar30;
              }
            }
            else if (iVar7 == 1) {
              fVar33 = fVar37 + fVar33;
              fVar30 = 1.0;
              if (fVar33 <= 1.0) {
                fVar30 = fVar33;
              }
              fVar37 = 0.0;
              if (0.0 <= fVar33) {
                fVar37 = fVar30;
              }
            }
          }
        }
        if (DAT_05aebc00 == '\0') {
          FUN_03b474bc(fVar37,lVar14 + 8,1);
          if (DAT_05aebc00 != '\0') goto LAB_03b44f38;
LAB_03b44f7c:
          FUN_03b474bc(fVar29,lVar14 + 8,2);
        }
        else {
          FUN_03b60840(fVar37,lVar14 + 0x50,1);
          if (DAT_05aebc00 == '\0') goto LAB_03b44f7c;
LAB_03b44f38:
          FUN_03b60840(fVar29,lVar14 + 0x50,2);
        }
        if (DAT_05aebc00 == '\0') {
          FUN_03b474bc(fVar31,lVar14 + 8,3);
        }
        else {
          FUN_03b60840(fVar31,lVar14 + 0x50,3);
        }
      }
      else {
        lVar14 = lVar14 + 0x50;
        puVar22 = *(uint **)(*(long *)(param_1 + 0xd8) + 0x40);
        if (puVar22 == (uint *)0x0) {
          FUN_03b60a6c(0x3f800000,lVar14,0xffff);
          goto LAB_03b44fa4;
        }
        FUN_03b60a6c(puVar22[4],lVar14,0xffff);
        if (*(long **)(param_1 + 0x118) == (long *)0x0) {
          if (*(long *)(param_1 + 0x1e8) != 0) {
            fVar37 = *(float *)(*(long *)(param_1 + 0x1e8) + 0xc);
            goto joined_r0x03b44d94;
          }
          uVar11 = 0xffffffff;
          fVar37 = -1.0;
        }
        else {
          fVar37 = (float)(**(code **)(**(long **)(param_1 + 0x118) + 0x38))();
joined_r0x03b44d94:
          if (fVar37 <= 0.0) {
            uVar11 = 0xffffffff;
          }
          else {
            uVar11 = (uint)*(ushort *)(*(long *)(param_1 + 0xd8) + 0x4a);
            if (*(char *)(*(long *)(param_1 + 0xd8) + 0x49) == '\0') {
              uVar11 = 0xffffffff;
            }
          }
        }
        uVar10 = *puVar22;
        if (0 < (int)uVar10) {
          uVar25 = 0;
          do {
            uVar4 = uVar25;
            if (uVar10 <= uVar25) {
              uVar4 = 0;
            }
            fVar29 = fVar37;
            if (uVar11 != uVar25) {
              fVar29 = -0.0;
            }
            FUN_03b60a6c(fVar29 + *(float *)(*(long *)(puVar22 + 2) + (ulong)uVar4 * 4),lVar14,
                         uVar25 & 0xffff);
            uVar10 = *puVar22;
            uVar25 = uVar25 + 1;
          } while ((int)uVar25 < (int)uVar10);
        }
      }
    }
LAB_03b44fa4:
    lVar15 = *(long *)(*(long *)(param_1 + 0x120) + 8);
    lVar14 = *(long *)(lVar15 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar14 = lVar15 + 0x70;
    }
    if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x11) >> 5 & 1) == 0)) {
      fVar37 = *(float *)(*(long *)(param_1 + 0xd8) + 0x20);
      if (*(long *)(param_1 + 0x1e8) != 0) {
        fVar37 = fVar37 * *(float *)(*(long *)(param_1 + 0x1e8) + 0x10);
      }
      if (DAT_05aebc00 == '\0') {
        if ((*(long **)(lVar15 + 0x48) != (long *)0x0) && (**(long **)(lVar15 + 0x48) != 0)) {
          FUN_003cfb60(fVar37);
        }
      }
      else if ((*(char *)(lVar15 + 0x58) != '\0') && (*(long *)(lVar15 + 0x128) != 0)) {
        FUN_03b62e40();
      }
    }
    puVar9 = PTR_DAT_04bcb018;
    iVar7 = *(int *)(param_1 + 0x200);
    if (((*PTR_DAT_04bcb018 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_05ad1da8), iVar12 != 0)
       ) {
      FUN_037d8910(&DAT_05ad1d98);
      __cxa_guard_release(&DAT_05ad1da8);
    }
    if (0 < (int)DAT_05ad1d98) {
      uVar16 = 0;
      do {
        if (*(int *)(DAT_05ad1da0 + uVar16 * 4) == 0) {
          if (iVar7 != (int)uVar16) goto LAB_03b45118;
          goto LAB_03b4506c;
        }
        uVar16 = uVar16 + 1;
      } while (DAT_05ad1d98 != uVar16);
    }
    if (iVar7 == -1) {
LAB_03b4506c:
      lVar15 = *(long *)(*(long *)(param_1 + 0x120) + 8);
      lVar14 = *(long *)(lVar15 + 0x38);
      if (DAT_05aebc00 != '\0') {
        lVar14 = lVar15 + 0x70;
      }
      if ((lVar14 == 0) || ((*(byte *)(lVar14 + 0x11) >> 5 & 1) == 0)) {
        plVar13 = *(long **)(param_1 + 0x118);
        fVar37 = *(float *)(*(long *)(param_1 + 0xd8) + 0x28);
        if ((*(long *)(param_1 + 0x1e0) != 0) && (plVar13 == (long *)0x0)) {
          iVar7 = *(int *)(*(long *)(DAT_05aebb78 + 0x20) + 0x10);
          if (iVar7 == 0) {
            fVar29 = 3.4028235e+38;
          }
          else {
            uVar11 = 0;
            lVar14 = (long)iVar7 << 3;
            plVar17 = *(long **)(*(long *)(DAT_05aebb78 + 0x20) + 0x18);
            fVar31 = 3.4028235e+38;
            do {
              fVar29 = fVar31;
              if ((*(ushort *)(*(long *)(param_1 + 0x1e0) + 0x4a) >> (ulong)(uVar11 & 0x1f) & 1) !=
                  0) {
                uVar11 = uVar11 + 1;
                fVar29 = *(float *)(*plVar17 + 0x58);
                if (fVar31 <= *(float *)(*plVar17 + 0x58)) {
                  fVar29 = fVar31;
                }
              }
              plVar17 = plVar17 + 1;
              lVar14 = lVar14 + -8;
              fVar31 = fVar29;
            } while (lVar14 != 0);
          }
          fVar37 = fVar37 + fVar29;
        }
        if (plVar13 != (long *)0x0) {
          fVar29 = (float)(**(code **)(*plVar13 + 0x50))();
          fVar37 = fVar37 + fVar29;
          lVar15 = *(long *)(*(long *)(param_1 + 0x120) + 8);
        }
        fVar29 = 1.0;
        if (fVar37 <= 1.0) {
          fVar29 = fVar37;
        }
        fVar31 = 0.0;
        if (0.0 <= fVar37) {
          fVar31 = fVar29;
        }
        if (DAT_05aebc00 == '\0') {
          if ((*(long **)(lVar15 + 0x48) != (long *)0x0) && (**(long **)(lVar15 + 0x48) != 0)) {
            FUN_003cfb68(-fVar31);
          }
        }
        else if (((*(char *)(lVar15 + 0x58) != '\0') && (*(int *)(lVar15 + 0x5c) != 0)) &&
                (*(long *)(lVar15 + 0x128) != 0)) {
          FUN_03b63090(*(long *)(lVar15 + 0x128),0,1);
        }
      }
      lVar15 = *(long *)(*(long *)(param_1 + 0x120) + 8);
      lVar14 = *(long *)(lVar15 + 0x38);
      if (DAT_05aebc00 != '\0') {
        lVar14 = lVar15 + 0x70;
      }
      if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x11) >> 5 & 1) != 0)) goto LAB_03b45510;
      lVar14 = *(long *)(param_1 + 0xd8);
      plVar13 = *(long **)(param_1 + 0x118);
      fVar37 = *(float *)(lVar14 + 0x30);
      if ((*(long *)(param_1 + 0x1e0) != 0) && (plVar13 == (long *)0x0)) {
        iVar7 = *(int *)(*(long *)(DAT_05aebb78 + 0x20) + 0x10);
        if (iVar7 == 0) {
          fVar29 = 3.4028235e+38;
        }
        else {
          lVar15 = 0;
          fVar29 = 3.4028235e+38;
          lVar18 = (long)iVar7 << 3;
          do {
            if ((*(ushort *)(*(long *)(param_1 + 0x1e0) + 0x4a) >> (ulong)((uint)lVar15 & 0x1f) & 1)
                != 0) {
              fVar31 = *(float *)(*(long *)(*(long *)(*(long *)(DAT_05aebb78 + 0x20) + 0x18) +
                                           lVar15 * 8) + 0x5c);
              if (fVar31 < fVar29) {
                fVar29 = fVar31;
              }
            }
            lVar15 = lVar15 + 1;
            lVar18 = lVar18 + -8;
          } while (lVar18 != 0);
        }
        fVar37 = fVar37 + fVar29;
      }
      if (plVar13 == (long *)0x0) {
        if (*(long *)(param_1 + 0x1e8) != 0) {
          fVar29 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x14);
          goto LAB_03b45470;
        }
      }
      else {
        fVar29 = (float)(**(code **)(*plVar13 + 0x40))();
        lVar14 = *(long *)(param_1 + 0xd8);
LAB_03b45470:
        fVar37 = fVar37 + fVar29;
      }
      fVar29 = 1.0;
      if (fVar37 <= 1.0) {
        fVar29 = fVar37;
      }
      fVar31 = 0.0;
      if (0.0 <= fVar37) {
        fVar31 = fVar29;
      }
      if (*(long *)PTR_DAT_04bc3ee8 == 0) {
        uVar21 = 0;
      }
      else {
        uVar21 = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x70);
      }
      iVar7 = *(int *)(lVar14 + 0x2c);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_05ad1da8), iVar12 != 0)) {
        FUN_037d8910(&DAT_05ad1d98);
        __cxa_guard_release(&DAT_05ad1da8);
      }
      if (0 < (int)DAT_05ad1d98) {
        uVar16 = 0;
        do {
          if (*(int *)(DAT_05ad1da0 + uVar16 * 4) == iVar7) goto LAB_03b454ec;
          uVar16 = uVar16 + 1;
        } while (DAT_05ad1d98 != uVar16);
      }
      uVar16 = 0;
LAB_03b454ec:
      local_e0 = CONCAT44(local_e0._4_4_,(int)uVar16);
      uVar11 = FUN_03b38450(uVar21,&local_e0);
      FUN_03b610d4(fVar31,*(undefined8 *)(*(long *)(param_1 + 0x120) + 8),
                   uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU));
    }
    else {
LAB_03b45118:
      lVar14 = *(long *)(param_1 + 0xd8);
      plVar13 = *(long **)(param_1 + 0x118);
      fVar37 = *(float *)(lVar14 + 0x30);
      if ((*(long *)(param_1 + 0x1e0) != 0) && (plVar13 == (long *)0x0)) {
        iVar7 = *(int *)(*(long *)(DAT_05aebb78 + 0x20) + 0x10);
        if (iVar7 == 0) {
          fVar29 = 3.4028235e+38;
        }
        else {
          lVar15 = 0;
          fVar29 = 3.4028235e+38;
          lVar18 = (long)iVar7 << 3;
          do {
            if ((*(ushort *)(*(long *)(param_1 + 0x1e0) + 0x4a) >> (ulong)((uint)lVar15 & 0x1f) & 1)
                != 0) {
              fVar31 = *(float *)(*(long *)(*(long *)(*(long *)(DAT_05aebb78 + 0x20) + 0x18) +
                                           lVar15 * 8) + 0x5c);
              if (fVar31 < fVar29) {
                fVar29 = fVar31;
              }
            }
            lVar15 = lVar15 + 1;
            lVar18 = lVar18 + -8;
          } while (lVar18 != 0);
        }
        fVar37 = fVar37 + fVar29;
      }
      if (plVar13 == (long *)0x0) {
        if (*(long *)(param_1 + 0x1e8) != 0) {
          fVar29 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x14);
          goto LAB_03b451d0;
        }
      }
      else {
        fVar29 = (float)(**(code **)(*plVar13 + 0x40))();
        lVar14 = *(long *)(param_1 + 0xd8);
LAB_03b451d0:
        fVar37 = fVar37 + fVar29;
      }
      iVar7 = *(int *)(lVar14 + 0x2c);
      fVar29 = 1.0;
      if (fVar37 <= 1.0) {
        fVar29 = fVar37;
      }
      uVar21 = *(undefined8 *)(*(long *)PTR_DAT_04bc3ee8 + 0x70);
      local_ac[0] = *(undefined4 *)(param_1 + 0x200);
      fVar31 = 0.0;
      if (0.0 <= fVar37) {
        fVar31 = fVar29;
      }
      uVar11 = FUN_03b38450(uVar21,local_ac);
      if (((*puVar9 & 1) == 0) && (iVar12 = __cxa_guard_acquire(&DAT_05ad1da8), iVar12 != 0)) {
        FUN_037d8910(&DAT_05ad1d98);
        __cxa_guard_release(&DAT_05ad1da8);
      }
      if (0 < (int)DAT_05ad1d98) {
        uVar16 = 0;
        do {
          if (*(int *)(DAT_05ad1da0 + uVar16 * 4) == iVar7) goto LAB_03b45250;
          uVar16 = uVar16 + 1;
        } while (DAT_05ad1d98 != uVar16);
      }
      uVar16 = 0;
LAB_03b45250:
      uVar11 = uVar11 & ((int)uVar11 >> 0x1f ^ 0xffffffffU);
      local_b0 = (undefined4)uVar16;
      uVar10 = FUN_03b38450(uVar21,&local_b0);
      uVar10 = uVar10 & ((int)uVar10 >> 0x1f ^ 0xffffffffU);
      if (DAT_05aebb18 == (undefined8 *)0x0) {
        lVar14 = *(long *)(*(long *)(param_1 + 0x120) + 8);
        if (((*(char *)(lVar14 + 0x58) != '\0') && (*(int *)(lVar14 + 0x5c) != 0)) &&
           (*(long *)(lVar14 + 0x128) != 0)) {
          FUN_03b63090(fVar31,*(long *)(lVar14 + 0x128),0,uVar11);
        }
        lVar14 = *(long *)(*(long *)(param_1 + 0x120) + 8);
        if (((*(char *)(lVar14 + 0x58) != '\0') && (*(int *)(lVar14 + 0x5c) != 0)) &&
           (*(long *)(lVar14 + 0x128) != 0)) {
          FUN_03b63090(fVar31,*(long *)(lVar14 + 0x128),1,uVar10);
        }
      }
      else {
        uStack_b8 = *(undefined8 *)(param_1 + 0x118);
        uStack_d8 = *(undefined8 *)(param_1 + 0x120);
        uStack_c4 = *(undefined4 *)(*(long *)(param_1 + 0xd8) + 0x30);
        local_c0 = param_1 + 0x160;
        local_e0 = param_1;
        local_d0 = uVar11;
        uStack_cc = uVar10;
        local_c8 = fVar31;
        (**(code **)*DAT_05aebb18)(DAT_05aebb18,&local_e0);
      }
    }
  }
  else {
    if (*(int *)(lVar14 + 0x5c) != 0) goto LAB_03b43f5c;
LAB_03b43f34:
    lVar15 = *(long *)(*(long *)(param_1 + 0x120) + 8);
    lVar14 = *(long *)(lVar15 + 0x38);
    if (DAT_05aebc00 != '\0') {
      lVar14 = lVar15 + 0x70;
    }
    if ((lVar14 != 0) && ((*(byte *)(lVar14 + 0x11) >> 5 & 1) != 0)) goto LAB_03b43f5c;
  }
LAB_03b45510:
  if ((*(ushort *)(param_1 + 0x14) >> 3 & 1) != 0) {
    lVar14 = *(long *)(param_1 + 0x120);
    iVar7 = *(int *)(param_1 + 0x20);
    if (*(int *)(lVar14 + 0x10) == 0) {
      *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
    }
    else {
      lVar18 = *(long *)(lVar14 + 8);
      lVar15 = *(long *)(lVar18 + 0x38);
      if (DAT_05aebc00 != '\0') {
        lVar15 = lVar18 + 0x70;
      }
      if ((lVar15 == 0) || ((*(byte *)(lVar15 + 0x11) >> 5 & 1) == 0)) {
        if (*(int *)(lVar14 + 0x10) == 3) {
          iVar12 = (int)*(float *)(lVar14 + 0x24);
          *(int *)(param_1 + 0x20) = iVar12;
        }
        else {
          if (DAT_05aebc00 == '\0') {
            iVar12 = FUN_03b47678(lVar18 + 8);
          }
          else {
            if (*(char *)(lVar18 + 0x58) == '\0') goto LAB_03b45598;
            iVar12 = 0;
            if (*(long *)(lVar18 + 0x128) != 0) {
              iVar12 = FUN_03b632bc();
              *(int *)(param_1 + 0x20) = iVar12;
              goto joined_r0x03b455b4;
            }
          }
          *(int *)(param_1 + 0x20) = iVar12;
        }
joined_r0x03b455b4:
        if (iVar12 < 0) goto LAB_03b455cc;
      }
      else {
LAB_03b45598:
        iVar12 = 0;
        *(undefined4 *)(param_1 + 0x20) = 0;
      }
      if (iVar12 < iVar7) {
        *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
      }
    }
  }
LAB_03b455cc:
  if (*(long *)(param_1 + 0x1f8) != 0) {
    FUN_03b402d8(*(long *)(param_1 + 0x1f8),*(undefined4 *)(param_1 + 0x20),
                 *(undefined4 *)(param_1 + 0x24));
  }
  fVar37 = *(float *)(param_1 + 0xf4) * *(float *)(param_1 + 0xfc);
  uVar21 = *(undefined8 *)(*(long *)(param_1 + 0x120) + 8);
  if (*(long *)(param_1 + 0x1e8) == 0) {
    if (*(long **)(param_1 + 0x118) == (long *)0x0) goto LAB_03b45618;
    fVar29 = (float)(**(code **)(**(long **)(param_1 + 0x118) + 0x48))();
  }
  else {
    fVar29 = *(float *)(*(long *)(param_1 + 0x1e8) + 0x18);
  }
  fVar37 = fVar37 * fVar29;
LAB_03b45618:
  FUN_03b61160(fVar37,uVar21);
  return;
}

