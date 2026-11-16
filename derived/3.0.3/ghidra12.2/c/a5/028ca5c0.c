
void FUN_028ca5c0(long param_1,undefined8 param_2,undefined8 *param_3,long param_4,long param_5,
                 undefined8 param_6,undefined8 *param_7,long param_8,long param_9,long *param_10,
                 undefined8 param_11,long *param_12)

{
  ulong uVar1;
  bool bVar2;
  short *psVar3;
  long lVar4;
  long lVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  byte bVar9;
  ulong uVar10;
  ulong uVar11;
  void *pvVar12;
  void *pvVar13;
  size_t __n;
  uint uVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  short *psVar20;
  uint *puVar21;
  uint uVar22;
  uint uVar23;
  short *psVar24;
  ulong local_190;
  long local_188;
  long local_180;
  ulong local_178;
  ulong local_168;
  ulong local_118;
  uint local_f4;
  ulong local_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  long lStack_90;
  short *local_88;
  long lStack_80;
  undefined8 local_78;
  undefined8 local_70;
  
  (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
  local_78 = (uint *)((ulong)local_78._5_3_ << 0x28);
  uVar10 = FUN_03ea9450(param_3,&local_78,DAT_0558d458);
  if ((uVar10 & 1) != 0) {
    if (local_78._4_1_ - 0xc0 < 2) {
      psVar20 = (short *)*param_3;
      puVar21 = (uint *)((long)psVar20 + ((ulong)local_78 & 0xffffffff));
    }
    else {
      if (local_78._4_1_ != 0xff) {
        return;
      }
      psVar20 = (short *)*param_3;
      puVar21 = (uint *)0x0;
    }
    if (psVar20 != (short *)0x0) {
      (**(code **)(DAT_0558d450 + 0x18))(&DAT_0558d450);
      local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
      uVar10 = FUN_03ea9450(param_7,&local_78,DAT_0558d458);
      if ((uVar10 & 1) != 0) {
        if (local_78._4_1_ - 0xc0 < 2) {
          psVar24 = (short *)*param_7;
          if (psVar24 == (short *)0x0) {
            return;
          }
          puVar19 = (uint *)((long)psVar24 + ((ulong)local_78 & 0xffffffff));
          if ((*puVar19 & 0xfe) == 0xc0) {
            uVar23 = *puVar19 >> 8;
            if (*psVar24 == 0x5942) {
              bVar2 = false;
              uVar23 = uVar23 & 0xff00 | *puVar19 >> 0x18 | (uVar23 & 0xff) << 0x10;
            }
            else {
              bVar2 = false;
            }
          }
          else {
            bVar2 = false;
            uVar23 = 0;
          }
        }
        else {
          if (local_78._4_1_ != 0xff) {
            return;
          }
          psVar24 = (short *)*param_7;
          if (psVar24 == (short *)0x0) {
            return;
          }
          puVar19 = (uint *)0x0;
          uVar23 = 0;
          bVar2 = true;
        }
        if ((puVar21 == (uint *)0x0) || ((*puVar21 & 0xfe) != 0xc0)) {
          local_f4 = 0;
        }
        else {
          local_f4 = *puVar21 >> 8;
          if (*psVar20 == 0x5942) {
            local_f4 = local_f4 & 0xff00 | *puVar21 >> 0x18 | (local_f4 & 0xff) << 0x10;
          }
        }
        if (uVar23 != 0) {
          if (local_f4 == 0) {
            uVar22 = 0;
            if (param_9 == 0) {
              do {
                local_98 = (short *)((ulong)local_98 & 0xffffff0000000000);
                if (!bVar2) {
                  if ((char)*puVar19 == -0x3f) {
                    local_70 = CONCAT71(local_70._1_7_,*psVar24 == 0x5942);
                    local_78 = puVar19;
                    uVar10 = FUN_03eaa938(&local_78,&local_98,uVar22);
                  }
                  else {
                    if ((char)*puVar19 != -0x40) goto LAB_028cb0c4;
                    local_70 = CONCAT71(local_70._1_7_,*psVar24 == 0x5942);
                    local_78 = puVar19;
                    uVar10 = FUN_03eaa544(&local_78,&local_98,uVar22);
                  }
                  if ((uVar10 & 1) != 0) {
                    if (local_98._4_1_ - 0xc0 < 2) {
                      lStack_80 = (long)psVar24 + ((ulong)local_98 & 0xffffffff);
                    }
                    else {
                      if (local_98._4_1_ != 0xff) goto LAB_028cb0c4;
                      lStack_80 = 0;
                    }
                    local_88 = psVar24;
                    (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                    local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
                    FUN_03ea9450(&local_88,&local_78,DAT_0558d468);
                  }
                }
LAB_028cb0c4:
                uVar22 = uVar22 + 1;
              } while (uVar23 != uVar22);
            }
            else {
              do {
                local_98 = (short *)((ulong)local_98 & 0xffffff0000000000);
                if (!bVar2) {
                  if ((char)*puVar19 == -0x3f) {
                    local_70 = CONCAT71(local_70._1_7_,*psVar24 == 0x5942);
                    local_78 = puVar19;
                    uVar10 = FUN_03eaa938(&local_78,&local_98,uVar22);
                    psVar20 = local_98;
                  }
                  else {
                    if ((char)*puVar19 != -0x40) goto LAB_028cb180;
                    local_70 = CONCAT71(local_70._1_7_,*psVar24 == 0x5942);
                    local_78 = puVar19;
                    uVar10 = FUN_03eaa544(&local_78,&local_98,uVar22);
                    psVar20 = local_98;
                  }
                  local_98 = psVar20;
                  if ((uVar10 & 1) != 0) {
                    local_98._4_1_ = (byte)((ulong)psVar20 >> 0x20);
                    uVar14 = (uint)local_98._4_1_;
                    if (uVar14 - 0xc0 < 2) {
                      lStack_80 = (long)psVar24 + ((ulong)psVar20 & 0xffffffff);
                    }
                    else {
                      if (uVar14 != 0xff) goto LAB_028cb180;
                      lStack_80 = 0;
                    }
                    local_88 = psVar24;
                    (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                    local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
                    uVar10 = FUN_03ea9450(&local_88,&local_78,DAT_0558d468);
                    if ((uVar10 & 1) != 0) {
                      if (local_78._4_1_ == -0x2f) {
                        if (-1 < (int)local_78) goto LAB_028cb170;
                      }
                      else if (local_78._4_1_ == -0x2d) {
LAB_028cb170:
                        nn::os::GetSystemTick();
                      }
                    }
                  }
                }
LAB_028cb180:
                uVar22 = uVar22 + 1;
              } while (uVar23 != uVar22);
            }
          }
          else {
            uVar22 = 0;
            do {
              local_98 = (short *)((ulong)local_98 & 0xffffff0000000000);
              if (!bVar2) {
                if ((char)*puVar19 == -0x3f) {
                  local_70 = CONCAT71(local_70._1_7_,*psVar24 == 0x5942);
                  local_78 = puVar19;
                  uVar10 = FUN_03eaa938(&local_78,&local_98,uVar22);
                  psVar3 = local_98;
                }
                else {
                  if ((char)*puVar19 != -0x40) goto LAB_028ca7e0;
                  local_70 = CONCAT71(local_70._1_7_,*psVar24 == 0x5942);
                  local_78 = puVar19;
                  uVar10 = FUN_03eaa544(&local_78,&local_98,uVar22);
                  psVar3 = local_98;
                }
                local_98 = psVar3;
                if ((uVar10 & 1) != 0) {
                  local_98._4_1_ = (byte)((ulong)psVar3 >> 0x20);
                  uVar14 = (uint)local_98._4_1_;
                  if (uVar14 - 0xc0 < 2) {
                    lStack_80 = (long)psVar24 + ((ulong)psVar3 & 0xffffffff);
                  }
                  else {
                    if (uVar14 != 0xff) goto LAB_028ca7e0;
                    lStack_80 = 0;
                  }
                  local_88 = psVar24;
                  (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                  local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
                  uVar10 = FUN_03ea9450(&local_88,&local_78,DAT_0558d468);
                  if ((((uVar10 & 1) != 0) && (local_78._4_1_ != -1)) &&
                     ((iVar6 = (int)local_78, local_78._4_1_ == -0x2d ||
                      ((local_78._4_1_ == -0x2f && (-1 < (int)local_78)))))) {
                    uVar14 = 0;
LAB_028ca944:
                    local_a8 = local_a8 & 0xffffff0000000000;
                    if (puVar21 == (uint *)0x0) goto LAB_028ca934;
                    if ((char)*puVar21 != -0x3f) {
                      if ((char)*puVar21 == -0x40) {
                        local_70 = CONCAT71(local_70._1_7_,*psVar20 == 0x5942);
                        local_78 = puVar21;
                        uVar10 = FUN_03eaa544(&local_78,&local_a8,uVar14);
                        if ((uVar10 & 1) != 0) goto LAB_028ca9c8;
                      }
                      goto LAB_028ca934;
                    }
                    local_70 = CONCAT71(local_70._1_7_,*psVar20 == 0x5942);
                    local_78 = puVar21;
                    uVar10 = FUN_03eaa938(&local_78,&local_a8,uVar14);
                    if ((uVar10 & 1) == 0) goto LAB_028ca934;
LAB_028ca9c8:
                    if (local_a8._4_1_ - 0xc0 < 2) {
                      lStack_90 = (long)psVar20 + (local_a8 & 0xffffffff);
                    }
                    else {
                      if (local_a8._4_1_ != 0xff) goto LAB_028ca934;
                      lStack_90 = 0;
                    }
                    local_98 = psVar20;
                    (**(code **)(DAT_0558d460 + 0x18))(&DAT_0558d460);
                    local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
                    uVar10 = FUN_03ea9450(&local_98,&local_78,DAT_0558d468);
                    if (((uVar10 & 1) == 0) || (local_78._4_1_ == -1)) goto LAB_028ca934;
                    if (local_78._4_1_ == -0x2f) {
                      if (-1 < (int)local_78) goto LAB_028ca920;
                      goto LAB_028ca934;
                    }
                    if (local_78._4_1_ != -0x2d) goto LAB_028ca934;
LAB_028ca920:
                    if (iVar6 != (int)local_78) goto LAB_028ca934;
                    (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
                    local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
                    uVar10 = FUN_03ea9450(&local_88,&local_78,DAT_0558d448);
                    puVar7 = local_78;
                    if (((uVar10 & 1) == 0) || (local_78._4_1_ == -1)) goto LAB_028caaac;
                    iVar6 = (int)local_78;
                    if (local_78._4_1_ == -0x2f) {
                      if ((int)local_78 < 0) goto LAB_028caaac;
                    }
                    else if (local_78._4_1_ != -0x2d) goto LAB_028caaac;
                    (**(code **)(DAT_0558d440 + 0x18))(&DAT_0558d440);
                    local_78 = (uint *)((ulong)local_78 & 0xffffff0000000000);
                    uVar10 = FUN_03ea9450(&local_98,&local_78,DAT_0558d448);
                    puVar8 = local_78;
                    if (((uVar10 & 1) == 0) || (local_78._4_1_ == -1)) goto LAB_028caaac;
                    if (local_78._4_1_ == -0x2f) {
                      if ((int)local_78 < 0) goto LAB_028caaac;
                    }
                    else if (local_78._4_1_ != -0x2d) goto LAB_028caaac;
                    if (iVar6 != (int)local_78) goto LAB_028caaac;
                    local_78 = (uint *)0x0;
                    local_70 = 0;
                    local_a8 = 0;
                    uStack_a0 = 0;
                    FUN_028ca480(&local_78,param_6,(ulong)puVar7 & 0xffffffff);
                    FUN_028ca480(&local_a8,param_2,(ulong)puVar8 & 0xffffffff);
                    puVar8 = local_78;
                    if (local_78 == (uint *)0x0) {
                      if (local_a8 != 0) goto LAB_028caaac;
                    }
                    else if (local_a8 == 0) goto LAB_028caaac;
                    local_b0 = 0;
                    (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
                    uVar10 = FUN_03ea9e9c(&local_88,&local_b0,DAT_0558d478);
                    if ((uVar10 & 1) != 0) {
                      local_b8 = 0;
                      (**(code **)(DAT_0558d470 + 0x18))(&DAT_0558d470);
                      uVar10 = FUN_03ea9e9c(&local_98,&local_b8,DAT_0558d478);
                      if (((uVar10 & 1) != 0) && ((puVar8 != (uint *)0x0 || (local_b0 == local_b8)))
                         ) {
                        local_c0 = 0;
                        (**(code **)(DAT_0558d480 + 0x18))(&DAT_0558d480);
                        uVar10 = FUN_03ea9e9c(&local_88,&local_c0,DAT_0558d488);
                        if ((uVar10 & 1) != 0) {
                          local_c8 = 0;
                          (**(code **)(DAT_0558d480 + 0x18))(&DAT_0558d480);
                          uVar10 = FUN_03ea9e9c(&local_98,&local_c8,DAT_0558d488);
                          if ((uVar10 & 1) != 0) {
                            local_d0 = 0;
                            (**(code **)(DAT_0558d490 + 0x18))(&DAT_0558d490);
                            uVar10 = FUN_03ea9e9c(&local_88,&local_d0,DAT_0558d498);
                            if ((uVar10 & 1) != 0) {
                              local_d8 = 0;
                              (**(code **)(DAT_0558d490 + 0x18))(&DAT_0558d490);
                              uVar10 = FUN_03ea9e9c(&local_98,&local_d8,DAT_0558d498);
                              if ((uVar10 & 1) != 0) {
                                local_e0 = 0;
                                (**(code **)(DAT_0558d4a0 + 0x18))(&DAT_0558d4a0);
                                uVar10 = FUN_03ea9e9c(&local_88,&local_e0,DAT_0558d4a8);
                                if ((uVar10 & 1) == 0) {
                                  local_e0 = 0;
                                }
                                local_e8 = 0;
                                (**(code **)(DAT_0558d4a0 + 0x18))(&DAT_0558d4a0);
                                uVar11 = FUN_03ea9e9c(&local_98,&local_e8,DAT_0558d4a8);
                                uVar10 = local_e0;
                                if ((uVar11 & 1) == 0) {
                                  local_e8 = 0;
                                }
                                uVar11 = local_e8;
                                bVar9 = puVar8 == (uint *)0x0;
                                local_178 = local_d0;
                                if (local_d8 <= local_d0) {
                                  local_178 = local_d8;
                                }
                                uVar1 = local_e0;
                                if (local_e8 <= local_e0) {
                                  uVar1 = local_e8;
                                }
                                if ((param_12 != (long *)0x0) && (puVar8 != (uint *)0x0)) {
                                  bVar9 = (**(code **)(*param_12 + 0x18))
                                                    (param_12,(ulong)puVar7 & 0xffffffff);
                                }
                                lVar5 = local_b0;
                                lVar4 = local_b8;
                                lVar16 = local_c0;
                                lVar15 = local_c8;
                                if (uVar10 == 0 && uVar11 == 0) {
                                  if ((bVar9 & 1) != 0) {
                                    __n = local_b0 * local_178;
                                    *param_10 = *param_10 + __n;
                                    pvVar12 = (void *)(local_c8 + param_1 + param_4);
                                    pvVar13 = (void *)(local_c0 + param_5 + param_8);
                                    goto LAB_028cb064;
                                  }
                                  if (local_178 != 0) {
                                    lVar15 = param_4 + local_c8;
                                    lVar16 = param_8 + local_c0;
                                    do {
                                      FUN_028ca5c0(param_1,param_2,&local_a8,lVar15,param_5,param_6,
                                                   &local_78,lVar16,param_9,param_10,param_11,
                                                   param_12);
                                      local_178 = local_178 - 1;
                                      lVar15 = lVar15 + lVar4;
                                      lVar16 = lVar16 + lVar5;
                                    } while (local_178 != 0);
                                  }
                                }
                                else if (local_178 != 0) {
                                  if ((bVar9 & 1) == 0) {
                                    if (uVar1 != 0) {
                                      local_180 = param_4 + local_c8;
                                      local_188 = param_8 + local_c0;
                                      local_190 = 0;
                                      lVar16 = uVar11 * local_b8;
                                      lVar15 = uVar10 * local_b0;
                                      do {
                                        lVar18 = local_188;
                                        lVar17 = local_180;
                                        local_118 = uVar1;
                                        do {
                                          FUN_028ca5c0(param_1,param_2,&local_a8,lVar17,param_5,
                                                       param_6,&local_78,lVar18,param_9,param_10,
                                                       param_11,param_12);
                                          local_118 = local_118 - 1;
                                          lVar17 = lVar17 + lVar4;
                                          lVar18 = lVar18 + lVar5;
                                        } while (local_118 != 0);
                                        local_180 = local_180 + lVar16;
                                        local_190 = local_190 + 1;
                                        local_188 = local_188 + lVar15;
                                      } while (local_190 != local_178);
                                    }
                                  }
                                  else {
                                    __n = local_b0 * uVar1;
                                    if (local_178 == 1) {
                                      local_168 = 0;
                                    }
                                    else {
                                      local_168 = 0;
                                      lVar17 = uVar10 * local_b0;
                                      pvVar12 = (void *)(param_8 + param_5 + local_c0);
                                      lVar18 = uVar11 * local_b8;
                                      pvVar13 = (void *)(param_4 + param_1 + local_c8);
                                      do {
                                        *param_10 = *param_10 + __n;
                                        memcpy(pvVar13,pvVar12,__n);
                                        *param_10 = *param_10 + __n;
                                        memcpy((void *)(lVar18 + (long)pvVar13),
                                               (void *)(lVar17 + (long)pvVar12),__n);
                                        pvVar12 = (void *)((long)pvVar12 + lVar17 * 2);
                                        local_168 = local_168 + 2;
                                        pvVar13 = (void *)((long)pvVar13 + lVar18 * 2);
                                      } while ((local_178 & 0xfffffffffffffffe) != local_168);
                                    }
                                    if ((local_178 & 1) != 0) {
                                      *param_10 = *param_10 + __n;
                                      pvVar12 = (void *)(lVar15 + param_1 + param_4 +
                                                        lVar4 * local_168 * uVar11);
                                      pvVar13 = (void *)(lVar16 + param_5 + param_8 +
                                                        local_168 * uVar10 * lVar5);
LAB_028cb064:
                                      memcpy(pvVar12,pvVar13,__n);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                    goto LAB_028caaac;
                  }
                }
              }
LAB_028ca7e0:
              uVar22 = uVar22 + 1;
            } while (uVar22 != uVar23);
          }
        }
      }
    }
  }
  return;
LAB_028ca934:
  uVar14 = uVar14 + 1;
  if (local_f4 == uVar14) {
LAB_028caaac:
    if (param_9 != 0) {
      nn::os::GetSystemTick();
    }
    goto LAB_028ca7e0;
  }
  goto LAB_028ca944;
}

