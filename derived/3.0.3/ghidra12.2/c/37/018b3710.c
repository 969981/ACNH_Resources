
undefined8 FUN_018b3710(uint *param_1,float *param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  short *psVar14;
  uint *puVar15;
  long lVar16;
  int iVar17;
  undefined8 *puVar18;
  uint uVar19;
  int iVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  byte local_148;
  undefined *local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined4 local_128;
  undefined4 local_124;
  uint local_120;
  int local_11c;
  int local_110;
  int local_10c;
  undefined *local_108;
  uint local_100;
  int iStack_fc;
  undefined *local_f8;
  undefined *puStack_f0;
  uint local_e8;
  int iStack_e4;
  undefined *local_e0;
  uint local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined8 local_c8;
  uint local_c0;
  int iStack_bc;
  undefined *local_b8;
  uint local_b0;
  int iStack_ac;
  float local_a4 [2];
  float local_9c;
  
  if ((*(long *)(PTR_DAT_04bbec48 + 8) == 0) ||
     (uVar13 = FUN_018aa50c(PTR_DAT_04bbec48,param_2), (uVar13 & 1) == 0)) {
    puVar9 = PTR_DAT_04bbfe68;
    local_150 = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    local_158 = PTR_DAT_04bbfe68 + 0x10;
    local_138 = 0;
    lVar16 = *(long *)PTR_DAT_04bb2720;
    local_140 = puVar1;
    if (lVar16 == 0) {
      puVar18 = &DAT_055c04a0;
    }
    else {
      puVar18 = &DAT_055c04a0;
      if (*(long *)(lVar16 + 0x330) != 0) {
        puVar18 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
        iVar11 = FUN_006bd550(*puVar18,0);
        puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar11 != 0x758f7eaf) {
          puVar18 = &DAT_055c04a0;
        }
      }
    }
    local_14c = *(undefined4 *)(puVar18 + 7);
    local_148 = FUN_017baf44();
    local_148 = local_148 & 1;
    local_c8 = (undefined *)
               CONCAT44((int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0),
                        (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0));
    local_d0 = puVar1;
    psVar14 = (short *)FUN_01a5190c(&local_158,0,&local_d0,&local_140);
    if (*psVar14 != -2) {
      if (((DAT_052b1600 & 1) == 0) && (iVar11 = __cxa_guard_acquire(&DAT_052b1600), iVar11 != 0)) {
        DAT_052b15f0 = 0x40000000c0000000;
        DAT_052b15f8 = 0x80000000;
        __cxa_guard_release(&DAT_052b1600);
      }
      puVar15 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      puVar8 = PTR_DAT_04bb2018;
      iVar11 = 0;
      puVar1 = PTR_DAT_04bb2010 + 0x10;
      puVar2 = PTR_DAT_04bbc1a0 + 0x10;
      uVar7 = puVar15[3];
      uVar5 = *puVar15 ^ *puVar15 << 0xb;
      *puVar15 = puVar15[1];
      puVar15[1] = puVar15[2];
      uVar6 = uVar5 ^ uVar7;
      puVar15[2] = uVar7;
      puVar15[3] = uVar5 >> 8 ^ uVar7 >> 0x13 ^ uVar6;
      do {
        uVar5 = *(uint *)((long)&DAT_052b15f0 + (ulong)(iVar11 + (uVar6 >> 0x1e) & 3) * 4);
        local_128 = 0;
        pfVar4 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar5 >> 0x14) & 0xff0));
        local_c0 = (uint)local_138;
        iStack_bc = local_138._4_4_;
        local_b0 = (uint)local_138 + 1;
        iStack_ac = local_138._4_4_ + 1;
        fVar22 = (*pfVar4 + pfVar4[1] * (float)(uVar5 & 0xffffff) * 5.9604645e-08) * -2.0;
        fVar21 = (pfVar4[2] + pfVar4[3] * (float)(uVar5 & 0xffffff) * 5.9604645e-08) * -2.0;
        fVar23 = 0.5;
        if (fVar22 < 0.0) {
          fVar23 = -0.5;
        }
        fVar24 = 0.5;
        if (fVar21 < 0.0) {
          fVar24 = -0.5;
        }
        iVar20 = (int)(fVar22 + fVar23);
        local_e8 = (uint)local_138 + iVar20;
        iVar17 = (int)(fVar21 + fVar24);
        local_d8 = local_b0 + iVar20;
        iStack_e4 = local_138._4_4_ + iVar17;
        iStack_d4 = iStack_ac + iVar17;
        lVar16 = *(long *)PTR_DAT_04bb2720;
        local_130 = puVar9 + 0x10;
        local_f8 = puVar2;
        puStack_f0 = puVar1;
        local_e0 = puVar1;
        local_d0 = puVar2;
        local_c8 = puVar1;
        local_b8 = puVar1;
        if ((lVar16 == 0) || (*(long *)(lVar16 + 0x330) == 0)) {
          puVar18 = &DAT_055c04a0;
        }
        else {
          puVar18 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
          iVar12 = FUN_006bd550(*puVar18,0);
          puVar18 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar12 != 0x758f7eaf) {
            puVar18 = &DAT_055c04a0;
          }
        }
        local_124 = *(undefined4 *)(puVar18 + 7);
        uVar10 = FUN_017baf44();
        local_120 = CONCAT31(local_120._1_3_,uVar10) & 0xffffff01;
        uVar7 = (uint)local_138 + iVar20;
        iVar12 = local_138._4_4_ + iVar17;
        local_108 = PTR_DAT_04bb2010 + 0x10;
        local_100 = uVar7;
        iStack_fc = iVar12;
        psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
        if ((param_3 & 1) == 0) {
          if (*psVar14 == -2) {
            if ((int)local_100 <= (int)local_c0) {
              local_c0 = local_100;
            }
            if (iStack_fc <= iStack_bc) {
              iStack_bc = iStack_fc;
            }
            if ((int)local_b0 <= (int)local_100) {
              local_b0 = local_100;
            }
            if (iStack_ac <= iStack_fc) {
              iStack_ac = iStack_fc;
            }
            if ((int)local_100 <= (int)local_e8) {
              local_e8 = local_100;
            }
            if (iStack_fc <= iStack_e4) {
              iStack_e4 = iStack_fc;
            }
            if ((int)local_d8 <= (int)local_100) {
              local_d8 = local_100;
            }
            if (iStack_d4 <= iStack_fc) {
              iStack_d4 = iStack_fc;
            }
            puVar3 = PTR_DAT_04bb2010 + 0x10;
            local_108 = puVar3;
            local_100 = uVar7;
            iStack_fc = iVar12 + 1;
            psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
            if (*psVar14 == -2) {
              if ((int)local_100 <= (int)local_c0) {
                local_c0 = local_100;
              }
              if (iStack_fc <= iStack_bc) {
                iStack_bc = iStack_fc;
              }
              if ((int)local_b0 <= (int)local_100) {
                local_b0 = local_100;
              }
              if (iStack_ac <= iStack_fc) {
                iStack_ac = iStack_fc;
              }
              if ((int)local_100 <= (int)local_e8) {
                local_e8 = local_100;
              }
              if (iStack_fc <= iStack_e4) {
                iStack_e4 = iStack_fc;
              }
              if ((int)local_d8 <= (int)local_100) {
                local_d8 = local_100;
              }
              if (iStack_d4 <= iStack_fc) {
                iStack_d4 = iStack_fc;
              }
              local_108 = puVar3;
              local_100 = uVar7 + 1;
              iStack_fc = iVar12;
              psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
              if (*psVar14 == -2) {
                if ((int)local_100 <= (int)local_c0) {
                  local_c0 = local_100;
                }
                if (iStack_fc <= iStack_bc) {
                  iStack_bc = iStack_fc;
                }
                if ((int)local_b0 <= (int)local_100) {
                  local_b0 = local_100;
                }
                if (iStack_ac <= iStack_fc) {
                  iStack_ac = iStack_fc;
                }
                if ((int)local_100 <= (int)local_e8) {
                  local_e8 = local_100;
                }
                if (iStack_fc <= iStack_e4) {
                  iStack_e4 = iStack_fc;
                }
                if ((int)local_d8 <= (int)local_100) {
                  local_d8 = local_100;
                }
                if (iStack_d4 <= iStack_fc) {
                  iStack_d4 = iStack_fc;
                }
                puVar3 = PTR_DAT_04bb2010 + 0x10;
                local_108 = puVar3;
                local_100 = uVar7 + 1;
                iStack_fc = iVar12 + 1;
                psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                if (*psVar14 == -2) {
                  uVar7 = uVar7 + iVar20;
                  iVar12 = iVar12 + iVar17;
                  if ((int)local_100 <= (int)local_c0) {
                    local_c0 = local_100;
                  }
                  if (iStack_fc <= iStack_bc) {
                    iStack_bc = iStack_fc;
                  }
                  if ((int)local_b0 <= (int)local_100) {
                    local_b0 = local_100;
                  }
                  if (iStack_ac <= iStack_fc) {
                    iStack_ac = iStack_fc;
                  }
                  if ((int)local_100 <= (int)local_e8) {
                    local_e8 = local_100;
                  }
                  if (iStack_fc <= iStack_e4) {
                    iStack_e4 = iStack_fc;
                  }
                  if ((int)local_d8 <= (int)local_100) {
                    local_d8 = local_100;
                  }
                  if (iStack_d4 <= iStack_fc) {
                    iStack_d4 = iStack_fc;
                  }
                  local_108 = puVar3;
                  local_100 = uVar7;
                  iStack_fc = iVar12;
                  psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                  if (*psVar14 == -2) {
                    if ((int)local_100 <= (int)local_c0) {
                      local_c0 = local_100;
                    }
                    if (iStack_fc <= iStack_bc) {
                      iStack_bc = iStack_fc;
                    }
                    if ((int)local_b0 <= (int)local_100) {
                      local_b0 = local_100;
                    }
                    if (iStack_ac <= iStack_fc) {
                      iStack_ac = iStack_fc;
                    }
                    if ((int)local_100 <= (int)local_e8) {
                      local_e8 = local_100;
                    }
                    if (iStack_fc <= iStack_e4) {
                      iStack_e4 = iStack_fc;
                    }
                    if ((int)local_d8 <= (int)local_100) {
                      local_d8 = local_100;
                    }
                    if (iStack_d4 <= iStack_fc) {
                      iStack_d4 = iStack_fc;
                    }
                    puVar3 = PTR_DAT_04bb2010 + 0x10;
                    local_108 = puVar3;
                    local_100 = uVar7;
                    iStack_fc = iVar12 + 1;
                    psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                    if (*psVar14 == -2) {
                      if ((int)local_100 <= (int)local_c0) {
                        local_c0 = local_100;
                      }
                      if (iStack_fc <= iStack_bc) {
                        iStack_bc = iStack_fc;
                      }
                      if ((int)local_b0 <= (int)local_100) {
                        local_b0 = local_100;
                      }
                      if (iStack_ac <= iStack_fc) {
                        iStack_ac = iStack_fc;
                      }
                      if ((int)local_100 <= (int)local_e8) {
                        local_e8 = local_100;
                      }
                      if (iStack_fc <= iStack_e4) {
                        iStack_e4 = iStack_fc;
                      }
                      if ((int)local_d8 <= (int)local_100) {
                        local_d8 = local_100;
                      }
                      if (iStack_d4 <= iStack_fc) {
                        iStack_d4 = iStack_fc;
                      }
                      local_108 = puVar3;
                      local_100 = uVar7 + 1;
                      iStack_fc = iVar12;
                      psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                      if (*psVar14 == -2) {
                        if ((int)local_100 <= (int)local_c0) {
                          local_c0 = local_100;
                        }
                        if (iStack_fc <= iStack_bc) {
                          iStack_bc = iStack_fc;
                        }
                        if ((int)local_b0 <= (int)local_100) {
                          local_b0 = local_100;
                        }
                        if (iStack_ac <= iStack_fc) {
                          iStack_ac = iStack_fc;
                        }
                        if ((int)local_100 <= (int)local_e8) {
                          local_e8 = local_100;
                        }
                        if (iStack_fc <= iStack_e4) {
                          iStack_e4 = iStack_fc;
                        }
                        if ((int)local_d8 <= (int)local_100) {
                          local_d8 = local_100;
                        }
                        if (iStack_d4 <= iStack_fc) {
                          iStack_d4 = iStack_fc;
                        }
                        puVar3 = PTR_DAT_04bb2010 + 0x10;
                        local_108 = puVar3;
                        local_100 = uVar7 + 1;
                        iStack_fc = iVar12 + 1;
                        psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                        if (*psVar14 == -2) {
                          uVar7 = uVar7 + iVar20;
                          iVar12 = iVar12 + iVar17;
                          if ((int)local_100 <= (int)local_c0) {
                            local_c0 = local_100;
                          }
                          if (iStack_fc <= iStack_bc) {
                            iStack_bc = iStack_fc;
                          }
                          if ((int)local_b0 <= (int)local_100) {
                            local_b0 = local_100;
                          }
                          if (iStack_ac <= iStack_fc) {
                            iStack_ac = iStack_fc;
                          }
                          if ((int)local_100 <= (int)local_e8) {
                            local_e8 = local_100;
                          }
                          if (iStack_fc <= iStack_e4) {
                            iStack_e4 = iStack_fc;
                          }
                          if ((int)local_d8 <= (int)local_100) {
                            local_d8 = local_100;
                          }
                          if (iStack_d4 <= iStack_fc) {
                            iStack_d4 = iStack_fc;
                          }
                          local_108 = puVar3;
                          local_100 = uVar7;
                          iStack_fc = iVar12;
                          psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                          if (*psVar14 == -2) {
                            if ((int)local_100 <= (int)local_c0) {
                              local_c0 = local_100;
                            }
                            if (iStack_fc <= iStack_bc) {
                              iStack_bc = iStack_fc;
                            }
                            if ((int)local_b0 <= (int)local_100) {
                              local_b0 = local_100;
                            }
                            if (iStack_ac <= iStack_fc) {
                              iStack_ac = iStack_fc;
                            }
                            if ((int)local_100 <= (int)local_e8) {
                              local_e8 = local_100;
                            }
                            if (iStack_fc <= iStack_e4) {
                              iStack_e4 = iStack_fc;
                            }
                            if ((int)local_d8 <= (int)local_100) {
                              local_d8 = local_100;
                            }
                            if (iStack_d4 <= iStack_fc) {
                              iStack_d4 = iStack_fc;
                            }
                            puVar3 = PTR_DAT_04bb2010 + 0x10;
                            local_108 = puVar3;
                            local_100 = uVar7;
                            iStack_fc = iVar12 + 1;
                            psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                            if (*psVar14 == -2) {
                              if ((int)local_100 <= (int)local_c0) {
                                local_c0 = local_100;
                              }
                              if (iStack_fc <= iStack_bc) {
                                iStack_bc = iStack_fc;
                              }
                              if ((int)local_b0 <= (int)local_100) {
                                local_b0 = local_100;
                              }
                              if (iStack_ac <= iStack_fc) {
                                iStack_ac = iStack_fc;
                              }
                              if ((int)local_100 <= (int)local_e8) {
                                local_e8 = local_100;
                              }
                              if (iStack_fc <= iStack_e4) {
                                iStack_e4 = iStack_fc;
                              }
                              if ((int)local_d8 <= (int)local_100) {
                                local_d8 = local_100;
                              }
                              if (iStack_d4 <= iStack_fc) {
                                iStack_d4 = iStack_fc;
                              }
                              local_108 = puVar3;
                              local_100 = uVar7 + 1;
                              iStack_fc = iVar12;
                              psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                              if (*psVar14 == -2) {
                                if ((int)local_100 <= (int)local_c0) {
                                  local_c0 = local_100;
                                }
                                if (iStack_fc <= iStack_bc) {
                                  iStack_bc = iStack_fc;
                                }
                                if ((int)local_b0 <= (int)local_100) {
                                  local_b0 = local_100;
                                }
                                if (iStack_ac <= iStack_fc) {
                                  iStack_ac = iStack_fc;
                                }
                                if ((int)local_100 <= (int)local_e8) {
                                  local_e8 = local_100;
                                }
                                if (iStack_fc <= iStack_e4) {
                                  iStack_e4 = iStack_fc;
                                }
                                if ((int)local_d8 <= (int)local_100) {
                                  local_d8 = local_100;
                                }
                                if (iStack_d4 <= iStack_fc) {
                                  iStack_d4 = iStack_fc;
                                }
                                local_108 = PTR_DAT_04bb2010 + 0x10;
                                local_100 = uVar7 + 1;
                                iStack_fc = iVar12 + 1;
                                psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                                if (*psVar14 == -2) {
LAB_018b4a70:
                                  if ((int)local_100 <= (int)local_c0) {
                                    local_c0 = local_100;
                                  }
                                  if (iStack_fc <= iStack_bc) {
                                    iStack_bc = iStack_fc;
                                  }
                                  if ((int)local_b0 <= (int)local_100) {
                                    local_b0 = local_100;
                                  }
                                  if (iStack_ac <= iStack_fc) {
                                    iStack_ac = iStack_fc;
                                  }
                                  if ((int)local_100 <= (int)local_e8) {
                                    local_e8 = local_100;
                                  }
                                  if (iStack_fc <= iStack_e4) {
                                    iStack_e4 = iStack_fc;
                                  }
                                  if ((int)local_d8 <= (int)local_100) {
                                    local_d8 = local_100;
                                  }
                                  if (iStack_d4 <= iStack_fc) {
                                    iStack_d4 = iStack_fc;
                                  }
                                  FUN_01383220(&local_130,&local_f8);
                                  uVar7 = local_120;
                                  iVar17 = local_10c + 1;
                                  if (iVar17 != local_11c) {
                                    iVar20 = local_11c;
                                    uVar19 = local_120;
                                    do {
                                      local_108 = puVar8 + 0x10;
                                      local_100 = uVar19;
                                      iStack_fc = iVar20;
                                      uVar13 = FUN_00977130(&local_108);
                                      if ((uVar13 & 1) == 0) goto LAB_018b3950;
                                      if ((int)uVar19 < local_110) {
                                        uVar19 = uVar19 + 1;
                                      }
                                      else {
                                        iVar20 = iVar20 + 1;
                                        uVar19 = local_120;
                                      }
                                    } while (uVar7 != uVar19 || iVar17 != iVar20);
                                  }
                                  if ((((*(long *)PTR_DAT_04bb27c8 != 0) &&
                                       (lVar16 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),
                                       lVar16 != 0)) &&
                                      (uVar13 = FUN_00971f80(lVar16,&local_d0,0), (uVar13 & 1) != 0)
                                      ) && (uVar13 = FUN_01a1d370(&local_d0), (uVar13 & 1) == 0)) {
                                    *param_1 = uVar5;
                                    return 1;
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
        else if (*psVar14 == -2) {
          local_9c = (float)iStack_fc * 5.0 + 2.5;
          local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
          uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
          if ((uVar13 & 1) == 0) {
            if ((int)local_100 <= (int)local_c0) {
              local_c0 = local_100;
            }
            if (iStack_fc <= iStack_bc) {
              iStack_bc = iStack_fc;
            }
            if ((int)local_b0 <= (int)local_100) {
              local_b0 = local_100;
            }
            if (iStack_ac <= iStack_fc) {
              iStack_ac = iStack_fc;
            }
            if ((int)local_100 <= (int)local_e8) {
              local_e8 = local_100;
            }
            if (iStack_fc <= iStack_e4) {
              iStack_e4 = iStack_fc;
            }
            if ((int)local_d8 <= (int)local_100) {
              local_d8 = local_100;
            }
            if (iStack_d4 <= iStack_fc) {
              iStack_d4 = iStack_fc;
            }
            local_108 = PTR_DAT_04bb2010 + 0x10;
            local_100 = uVar7;
            iStack_fc = iVar12 + 1;
            psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
            if (*psVar14 == -2) {
              local_9c = (float)iStack_fc * 5.0 + 2.5;
              local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
              uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
              if ((uVar13 & 1) == 0) {
                if ((int)local_100 <= (int)local_c0) {
                  local_c0 = local_100;
                }
                if (iStack_fc <= iStack_bc) {
                  iStack_bc = iStack_fc;
                }
                if ((int)local_b0 <= (int)local_100) {
                  local_b0 = local_100;
                }
                if (iStack_ac <= iStack_fc) {
                  iStack_ac = iStack_fc;
                }
                if ((int)local_100 <= (int)local_e8) {
                  local_e8 = local_100;
                }
                if (iStack_fc <= iStack_e4) {
                  iStack_e4 = iStack_fc;
                }
                if ((int)local_d8 <= (int)local_100) {
                  local_d8 = local_100;
                }
                if (iStack_d4 <= iStack_fc) {
                  iStack_d4 = iStack_fc;
                }
                local_108 = PTR_DAT_04bb2010 + 0x10;
                local_100 = uVar7 + 1;
                iStack_fc = iVar12;
                psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                if (*psVar14 == -2) {
                  local_9c = (float)iStack_fc * 5.0 + 2.5;
                  local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                  uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                  if ((uVar13 & 1) == 0) {
                    if ((int)local_100 <= (int)local_c0) {
                      local_c0 = local_100;
                    }
                    if (iStack_fc <= iStack_bc) {
                      iStack_bc = iStack_fc;
                    }
                    if ((int)local_b0 <= (int)local_100) {
                      local_b0 = local_100;
                    }
                    if (iStack_ac <= iStack_fc) {
                      iStack_ac = iStack_fc;
                    }
                    if ((int)local_100 <= (int)local_e8) {
                      local_e8 = local_100;
                    }
                    if (iStack_fc <= iStack_e4) {
                      iStack_e4 = iStack_fc;
                    }
                    if ((int)local_d8 <= (int)local_100) {
                      local_d8 = local_100;
                    }
                    if (iStack_d4 <= iStack_fc) {
                      iStack_d4 = iStack_fc;
                    }
                    local_108 = PTR_DAT_04bb2010 + 0x10;
                    local_100 = uVar7 + 1;
                    iStack_fc = iVar12 + 1;
                    psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                    if (*psVar14 == -2) {
                      local_9c = (float)iStack_fc * 5.0 + 2.5;
                      local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                      uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                      if ((uVar13 & 1) == 0) {
                        uVar7 = uVar7 + iVar20;
                        iVar12 = iVar12 + iVar17;
                        if ((int)local_100 <= (int)local_c0) {
                          local_c0 = local_100;
                        }
                        if (iStack_fc <= iStack_bc) {
                          iStack_bc = iStack_fc;
                        }
                        if ((int)local_b0 <= (int)local_100) {
                          local_b0 = local_100;
                        }
                        if (iStack_ac <= iStack_fc) {
                          iStack_ac = iStack_fc;
                        }
                        if ((int)local_100 <= (int)local_e8) {
                          local_e8 = local_100;
                        }
                        if (iStack_fc <= iStack_e4) {
                          iStack_e4 = iStack_fc;
                        }
                        if ((int)local_d8 <= (int)local_100) {
                          local_d8 = local_100;
                        }
                        if (iStack_d4 <= iStack_fc) {
                          iStack_d4 = iStack_fc;
                        }
                        local_108 = PTR_DAT_04bb2010 + 0x10;
                        local_100 = uVar7;
                        iStack_fc = iVar12;
                        psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                        if (*psVar14 == -2) {
                          local_9c = (float)iStack_fc * 5.0 + 2.5;
                          local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                          uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                          if ((uVar13 & 1) == 0) {
                            if ((int)local_100 <= (int)local_c0) {
                              local_c0 = local_100;
                            }
                            if (iStack_fc <= iStack_bc) {
                              iStack_bc = iStack_fc;
                            }
                            if ((int)local_b0 <= (int)local_100) {
                              local_b0 = local_100;
                            }
                            if (iStack_ac <= iStack_fc) {
                              iStack_ac = iStack_fc;
                            }
                            if ((int)local_100 <= (int)local_e8) {
                              local_e8 = local_100;
                            }
                            if (iStack_fc <= iStack_e4) {
                              iStack_e4 = iStack_fc;
                            }
                            if ((int)local_d8 <= (int)local_100) {
                              local_d8 = local_100;
                            }
                            if (iStack_d4 <= iStack_fc) {
                              iStack_d4 = iStack_fc;
                            }
                            local_108 = PTR_DAT_04bb2010 + 0x10;
                            local_100 = uVar7;
                            iStack_fc = iVar12 + 1;
                            psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                            if (*psVar14 == -2) {
                              local_9c = (float)iStack_fc * 5.0 + 2.5;
                              local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                              uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                              if ((uVar13 & 1) == 0) {
                                if ((int)local_100 <= (int)local_c0) {
                                  local_c0 = local_100;
                                }
                                if (iStack_fc <= iStack_bc) {
                                  iStack_bc = iStack_fc;
                                }
                                if ((int)local_b0 <= (int)local_100) {
                                  local_b0 = local_100;
                                }
                                if (iStack_ac <= iStack_fc) {
                                  iStack_ac = iStack_fc;
                                }
                                if ((int)local_100 <= (int)local_e8) {
                                  local_e8 = local_100;
                                }
                                if (iStack_fc <= iStack_e4) {
                                  iStack_e4 = iStack_fc;
                                }
                                if ((int)local_d8 <= (int)local_100) {
                                  local_d8 = local_100;
                                }
                                if (iStack_d4 <= iStack_fc) {
                                  iStack_d4 = iStack_fc;
                                }
                                local_108 = PTR_DAT_04bb2010 + 0x10;
                                local_100 = uVar7 + 1;
                                iStack_fc = iVar12;
                                psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                                if (*psVar14 == -2) {
                                  local_9c = (float)iStack_fc * 5.0 + 2.5;
                                  local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                                  uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                                  if ((uVar13 & 1) == 0) {
                                    if ((int)local_100 <= (int)local_c0) {
                                      local_c0 = local_100;
                                    }
                                    if (iStack_fc <= iStack_bc) {
                                      iStack_bc = iStack_fc;
                                    }
                                    if ((int)local_b0 <= (int)local_100) {
                                      local_b0 = local_100;
                                    }
                                    if (iStack_ac <= iStack_fc) {
                                      iStack_ac = iStack_fc;
                                    }
                                    if ((int)local_100 <= (int)local_e8) {
                                      local_e8 = local_100;
                                    }
                                    if (iStack_fc <= iStack_e4) {
                                      iStack_e4 = iStack_fc;
                                    }
                                    if ((int)local_d8 <= (int)local_100) {
                                      local_d8 = local_100;
                                    }
                                    if (iStack_d4 <= iStack_fc) {
                                      iStack_d4 = iStack_fc;
                                    }
                                    local_108 = PTR_DAT_04bb2010 + 0x10;
                                    local_100 = uVar7 + 1;
                                    iStack_fc = iVar12 + 1;
                                    psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                                    if (*psVar14 == -2) {
                                      local_9c = (float)iStack_fc * 5.0 + 2.5;
                                      local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                                      uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                                      if ((uVar13 & 1) == 0) {
                                        uVar7 = uVar7 + iVar20;
                                        iVar12 = iVar12 + iVar17;
                                        if ((int)local_100 <= (int)local_c0) {
                                          local_c0 = local_100;
                                        }
                                        if (iStack_fc <= iStack_bc) {
                                          iStack_bc = iStack_fc;
                                        }
                                        if ((int)local_b0 <= (int)local_100) {
                                          local_b0 = local_100;
                                        }
                                        if (iStack_ac <= iStack_fc) {
                                          iStack_ac = iStack_fc;
                                        }
                                        if ((int)local_100 <= (int)local_e8) {
                                          local_e8 = local_100;
                                        }
                                        if (iStack_fc <= iStack_e4) {
                                          iStack_e4 = iStack_fc;
                                        }
                                        if ((int)local_d8 <= (int)local_100) {
                                          local_d8 = local_100;
                                        }
                                        if (iStack_d4 <= iStack_fc) {
                                          iStack_d4 = iStack_fc;
                                        }
                                        local_108 = PTR_DAT_04bb2010 + 0x10;
                                        local_100 = uVar7;
                                        iStack_fc = iVar12;
                                        psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,0);
                                        if (*psVar14 == -2) {
                                          local_9c = (float)iStack_fc * 5.0 + 2.5;
                                          local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                                          uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                                          if ((uVar13 & 1) == 0) {
                                            if ((int)local_100 <= (int)local_c0) {
                                              local_c0 = local_100;
                                            }
                                            if (iStack_fc <= iStack_bc) {
                                              iStack_bc = iStack_fc;
                                            }
                                            if ((int)local_b0 <= (int)local_100) {
                                              local_b0 = local_100;
                                            }
                                            if (iStack_ac <= iStack_fc) {
                                              iStack_ac = iStack_fc;
                                            }
                                            if ((int)local_100 <= (int)local_e8) {
                                              local_e8 = local_100;
                                            }
                                            if (iStack_fc <= iStack_e4) {
                                              iStack_e4 = iStack_fc;
                                            }
                                            if ((int)local_d8 <= (int)local_100) {
                                              local_d8 = local_100;
                                            }
                                            if (iStack_d4 <= iStack_fc) {
                                              iStack_d4 = iStack_fc;
                                            }
                                            local_108 = PTR_DAT_04bb2010 + 0x10;
                                            local_100 = uVar7;
                                            iStack_fc = iVar12 + 1;
                                            psVar14 = (short *)FUN_01a5190c(&local_130,0,&local_108,
                                                                            0);
                                            if (*psVar14 == -2) {
                                              local_9c = (float)iStack_fc * 5.0 + 2.5;
                                              local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                                              uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                                              if ((uVar13 & 1) == 0) {
                                                if ((int)local_100 <= (int)local_c0) {
                                                  local_c0 = local_100;
                                                }
                                                if (iStack_fc <= iStack_bc) {
                                                  iStack_bc = iStack_fc;
                                                }
                                                if ((int)local_b0 <= (int)local_100) {
                                                  local_b0 = local_100;
                                                }
                                                if (iStack_ac <= iStack_fc) {
                                                  iStack_ac = iStack_fc;
                                                }
                                                if ((int)local_100 <= (int)local_e8) {
                                                  local_e8 = local_100;
                                                }
                                                if (iStack_fc <= iStack_e4) {
                                                  iStack_e4 = iStack_fc;
                                                }
                                                if ((int)local_d8 <= (int)local_100) {
                                                  local_d8 = local_100;
                                                }
                                                if (iStack_d4 <= iStack_fc) {
                                                  iStack_d4 = iStack_fc;
                                                }
                                                local_108 = PTR_DAT_04bb2010 + 0x10;
                                                local_100 = uVar7 + 1;
                                                iStack_fc = iVar12;
                                                psVar14 = (short *)FUN_01a5190c(&local_130,0,
                                                                                &local_108,0);
                                                if (*psVar14 == -2) {
                                                  local_9c = (float)iStack_fc * 5.0 + 2.5;
                                                  local_a4[0] = (float)(int)local_100 * 5.0 + 2.5;
                                                  uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                                                  if ((uVar13 & 1) == 0) {
                                                    if ((int)local_100 <= (int)local_c0) {
                                                      local_c0 = local_100;
                                                    }
                                                    if (iStack_fc <= iStack_bc) {
                                                      iStack_bc = iStack_fc;
                                                    }
                                                    if ((int)local_b0 <= (int)local_100) {
                                                      local_b0 = local_100;
                                                    }
                                                    if (iStack_ac <= iStack_fc) {
                                                      iStack_ac = iStack_fc;
                                                    }
                                                    if ((int)local_100 <= (int)local_e8) {
                                                      local_e8 = local_100;
                                                    }
                                                    if (iStack_fc <= iStack_e4) {
                                                      iStack_e4 = iStack_fc;
                                                    }
                                                    if ((int)local_d8 <= (int)local_100) {
                                                      local_d8 = local_100;
                                                    }
                                                    if (iStack_d4 <= iStack_fc) {
                                                      iStack_d4 = iStack_fc;
                                                    }
                                                    local_108 = PTR_DAT_04bb2010 + 0x10;
                                                    local_100 = uVar7 + 1;
                                                    iStack_fc = iVar12 + 1;
                                                    psVar14 = (short *)FUN_01a5190c(&local_130,0,
                                                                                    &local_108,0);
                                                    if (*psVar14 == -2) {
                                                      local_9c = (float)iStack_fc * 5.0 + 2.5;
                                                      local_a4[0] = (float)(int)local_100 * 5.0 +
                                                                    2.5;
                                                      uVar13 = FUN_035a2340(local_a4,&DAT_0418f444);
                                                      if ((uVar13 & 1) == 0) goto LAB_018b4a70;
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
              }
            }
          }
        }
LAB_018b3950:
        iVar11 = iVar11 + 1;
      } while (iVar11 != 4);
    }
  }
  return 0;
}

