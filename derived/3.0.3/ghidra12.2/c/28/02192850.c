
void FUN_02192850(long param_1,ulong param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  char cVar6;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  undefined1 uVar11;
  undefined1 uVar12;
  undefined4 *puVar13;
  uint *puVar14;
  long lVar15;
  uint *puVar16;
  undefined8 *puVar17;
  long *plVar18;
  undefined1 *puVar19;
  long lVar20;
  undefined4 *puVar21;
  float fVar22;
  float fVar23;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined4 uStack_194;
  undefined8 local_190;
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined *local_178;
  undefined *puStack_170;
  undefined8 local_168;
  undefined *local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined4 local_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined1 uStack_118;
  undefined8 local_114;
  undefined8 local_10c;
  undefined8 local_104;
  undefined8 local_fc;
  undefined8 local_f4;
  undefined8 local_ec;
  undefined4 local_e4;
  undefined *local_e0;
  undefined1 *local_d8;
  int local_d0;
  undefined1 local_cc [31];
  undefined1 local_ad;
  undefined *local_a8;
  undefined1 *local_a0;
  int local_98;
  undefined1 local_94 [31];
  undefined1 local_75;
  uint local_70;
  undefined4 local_6c;
  
  pbVar3 = (byte *)(param_1 + 0x366c);
  *pbVar3 = *pbVar3 & 0xfc;
  iVar9 = *(int *)(param_1 + 0x1b30);
  if (iVar9 < 1) {
    uVar7 = *(uint *)(param_1 + 0x3658);
    if (((int)uVar7 < 0) || (*(int *)(param_1 + 0x10) <= (int)uVar7)) goto LAB_021928d8;
    lVar15 = *(long *)(param_1 + 0x18);
LAB_021928c8:
    puVar21 = *(undefined4 **)(lVar15 + (ulong)uVar7 * 8);
    cVar6 = *(char *)(puVar21 + 0x16);
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x365c);
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar9)) {
      lVar15 = *(long *)(param_1 + 0x1b38);
      goto LAB_021928c8;
    }
LAB_021928d8:
    puVar21 = &DAT_053fd568;
    cVar6 = DAT_053fd5c0;
  }
  if ((cVar6 != '\0') &&
     (lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68),
     fVar22 = *(float *)(lVar15 + 0x278) - (float)puVar21[10],
     fVar23 = *(float *)(lVar15 + 0x280) - (float)puVar21[0xc],
     (float)puVar21[0x60] + 5.0 + (float)puVar21[0xd] < SQRT(fVar23 * fVar23 + fVar22 * fVar22))) {
    FUN_02193d74(param_1,param_3 & 1);
    goto joined_r0x02192938;
  }
  if (puVar21[0x18] != 0) {
    if (iVar9 < 1) {
      uVar7 = *(uint *)(param_1 + 0x3658);
      puVar13 = &DAT_053fd568;
      if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x10))) {
        plVar18 = (long *)(param_1 + 0x18);
        goto LAB_0219299c;
      }
    }
    else {
      uVar7 = *(uint *)(param_1 + 0x365c);
      puVar13 = &DAT_053fd568;
      if ((-1 < (int)uVar7) && ((int)uVar7 < iVar9)) {
        plVar18 = (long *)(param_1 + 0x1b38);
LAB_0219299c:
        puVar13 = *(undefined4 **)(*plVar18 + (ulong)uVar7 * 8);
      }
    }
    if (puVar13[0x18] == 2) {
      uVar7 = puVar13[0x11];
    }
    else if (puVar13[0x18] == 1) {
      lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
      uVar7 = FUN_006f0400((float)puVar13[0xe] - *(float *)(lVar15 + 0x278),
                           (float)puVar13[0x10] - *(float *)(lVar15 + 0x280));
    }
    else {
      uVar7 = 0;
    }
    lVar15 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    uVar5 = *(uint *)(lVar15 + 0x2b4);
    if (uVar5 - uVar7 == 0) {
      iVar9 = *(int *)(param_1 + 0x1b30);
    }
    else {
      uVar4 = uVar5 - uVar7;
      if (uVar5 <= uVar7) {
        uVar4 = uVar7 - uVar5;
      }
      uVar7 = -uVar4;
      if (uVar4 < 0x80000001) {
        uVar7 = uVar4;
      }
      iVar9 = *(int *)(param_1 + 0x1b30);
      if (5.0 <= (float)uVar7 * 8.381903e-08) {
        if (iVar9 < 1) {
          uVar7 = *(uint *)(param_1 + 0x3658);
          puVar21 = &DAT_053fd568;
          if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x10))) {
            plVar18 = (long *)(param_1 + 0x18);
            goto LAB_02192f8c;
          }
        }
        else {
          uVar7 = *(uint *)(param_1 + 0x365c);
          puVar21 = &DAT_053fd568;
          if ((-1 < (int)uVar7) && ((int)uVar7 < iVar9)) {
            plVar18 = (long *)(param_1 + 0x1b38);
LAB_02192f8c:
            puVar21 = *(undefined4 **)(*plVar18 + (ulong)uVar7 * 8);
          }
        }
        if (puVar21[0x18] == 2) {
          uVar8 = puVar21[0x11];
        }
        else if (puVar21[0x18] == 1) {
          uVar8 = FUN_006f0400((float)puVar21[0xe] - *(float *)(lVar15 + 0x278),
                               (float)puVar21[0x10] - *(float *)(lVar15 + 0x280));
        }
        else {
          uVar8 = 0;
        }
        local_180 = 0;
        uStack_144 = 0;
        uStack_140 = 0xfffe;
        local_168 = 0;
        local_13c = 0;
        local_178 = PTR_DAT_04bbc1a0 + 0x10;
        puStack_170 = PTR_DAT_04bb2010 + 0x10;
        local_158 = 0;
        local_160 = puStack_170;
        FUN_0277d4ac(&uStack_140);
        uStack_124 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        local_128 = 0xbf800000;
        local_138 = 0x41c8000041800000;
        uStack_130 = 0xbf800000bf800000;
        local_114 = (undefined *)0xfffe;
        FUN_0277d4ac();
        local_10c = (ulong)local_10c._4_4_ << 0x20;
        local_d0 = 0x20;
        local_a0 = local_94;
        local_98 = 0x20;
        local_d8 = local_cc;
        local_ad = 0;
        local_e0 = PTR_DAT_04bb2028 + 0x10;
        local_cc[0] = 0;
        local_75 = 0;
        local_94[0] = 0;
        local_180 = 0;
        local_168 = 0;
        local_148 = 0;
        uStack_144 = 0;
        local_1a0 = (undefined *)0xfffe;
        local_158 = 0;
        local_150 = 0;
        local_a8 = local_e0;
        FUN_0277d4ac(&local_1a0);
        uStack_140 = (undefined4)local_1a0;
        local_13c = local_1a0._4_4_;
        local_138 = 0x41c8000041800000;
        uStack_130 = 0xbf800000bf800000;
        local_128 = 0xbf800000;
        uStack_124 = 0;
        uStack_120 = 0;
        uStack_11c = 0;
        uStack_118 = 0;
        local_1a0 = (undefined *)0xfffe;
        FUN_0277d4ac(&local_1a0);
        local_10c = local_10c & 0xffff000000000000;
        local_104 = 0;
        local_fc = 0;
        local_f4 = 0;
        local_ec = 0;
        local_e4 = 0;
        local_114 = local_1a0;
        *local_d8 = 0;
        *local_a0 = 0;
        uStack_144 = uVar8;
        if (*(char *)((long)puVar21 + 0x69) == '\0') {
          uVar11 = *(undefined1 *)((long)puVar21 + 0xde);
          puVar17 = (undefined8 *)(puVar21 + 0x37);
          puVar13 = puVar21 + 0x38;
          uVar12 = *(undefined1 *)((long)puVar21 + 0xdf);
        }
        else {
          plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
          if (plVar18 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(&DAT_052461c0);
              plVar18 = &DAT_05240280;
              if (iVar9 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar18 = &DAT_05240280;
            }
          }
          puVar17 = &local_1a0;
          (**(code **)(*plVar18 + 0x370))(&local_1a0,plVar18);
          puVar13 = (undefined4 *)((long)&local_1a0 + 4);
          uVar11 = local_1a0._2_1_;
          uVar12 = local_1a0._3_1_;
        }
        puVar2 = local_114;
        puVar1 = PTR_DAT_04bb43c0;
        local_114._4_4_ = SUB84(puVar2,4);
        local_114._0_4_ = CONCAT13(uVar12,CONCAT12(uVar11,(undefined2)local_114));
        local_114 = (undefined *)CONCAT62(local_114._2_6_,*(undefined2 *)puVar17);
        local_114 = (undefined *)CONCAT44(*puVar13,(undefined4)local_114);
        if ((*(char *)((long)puVar21 + 0x6a) != '\0') &&
           (uVar7 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), 3 < uVar7)) {
          plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
          if (plVar18 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(&DAT_052461c0);
              plVar18 = &DAT_05240280;
              if (iVar9 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar18 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar18 + 0x370))(&local_188,plVar18);
          lVar20 = *(long *)puVar1;
          uVar7 = FUN_0277d6c4(&local_188);
          lVar15 = *(long *)puVar1;
          if (lVar15 != 0) {
            lVar20 = *(long *)(lVar20 + 0x57e58);
            uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((uVar7 < *(uint *)(lVar20 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
              local_190 = 0;
              local_1a0 = PTR_DAT_04bc0510 + 0x10;
              local_198 = local_188;
              uStack_194 = uStack_184;
              uVar7 = FUN_0277d6c4(&local_198);
              if (*(long *)puVar1 == 0) {
LAB_02193404:
                local_70 = 0xbc;
              }
              else {
                lVar15 = *(long *)(lVar15 + 0x57e58);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
                   (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0))
                goto LAB_02193404;
                lVar15 = *(long *)PTR_DAT_04bc0428;
                uVar7 = FUN_0277d6c4(&local_188);
                uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
                if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
                   (puVar14 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
                   puVar14 == (uint *)0x0)) goto LAB_02193404;
                local_70 = 0;
                uVar7 = *puVar14;
                if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
                  puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
                  local_70 = 0;
                  if (*puVar16 != 0) {
                    uVar7 = puVar16[1];
                    if (uVar7 == 0) {
LAB_02193358:
                      local_70 = 0;
                    }
                    else {
                      if ((ulong)(ushort)puVar16[2] != 0) {
                        lVar15 = 0xc;
                        if (*(char *)((long)puVar16 + 10) != '\0') {
                          lVar15 = 0x1c;
                        }
                        lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
                        if (lVar15 != 0) {
                          uVar5 = 0;
                          if ((ulong)uVar7 != 0) {
                            uVar5 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar7);
                          }
                          if (*puVar16 <= uVar5) {
                            uVar5 = 0xffffffff;
                          }
                          if (uVar5 < *(uint *)PTR_DAT_04bc00c8) {
                            local_70 = (uint)*(ushort *)
                                              (*(long *)(PTR_DAT_04bc00c8 + 8) +
                                              (long)(int)uVar5 * 2);
                            if (local_70 < 0xbd) goto LAB_02193410;
                            goto LAB_02193358;
                          }
                        }
                      }
                      local_70 = 0;
                    }
                  }
                }
              }
LAB_02193410:
              local_6c = 0x14;
              if (local_70 == 0x14) {
                plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
                if (plVar18 == (long *)0x0) {
                  if ((DAT_052461c0 & 1) == 0) {
                    iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                    plVar18 = &DAT_05240280;
                    if (iVar9 != 0) {
                      FUN_016fcf10(&DAT_05240280);
                      FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                      __cxa_guard_release(&DAT_052461c0);
                    }
                  }
                  else {
                    plVar18 = &DAT_05240280;
                  }
                }
                (**(code **)(*plVar18 + 0x370))(&local_1a0,plVar18);
                local_114 = local_1a0;
              }
            }
          }
        }
        lVar15 = *(long *)puVar1;
        uVar7 = FUN_0277d6c4(&local_114);
        if (*(long *)puVar1 != 0) {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar15 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
            plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
            if (plVar18 == (long *)0x0) {
              if ((DAT_052461c0 & 1) == 0) {
                iVar9 = __cxa_guard_acquire(&DAT_052461c0);
                plVar18 = &DAT_05240280;
                if (iVar9 != 0) {
                  FUN_016fcf10(&DAT_05240280);
                  FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                  __cxa_guard_release(&DAT_052461c0);
                }
              }
              else {
                plVar18 = &DAT_05240280;
              }
            }
            (**(code **)(*plVar18 + 0x370))(&local_1a0,plVar18);
            uVar10 = FUN_0277d7b4(&local_114,&local_1a0);
            if ((uVar10 & 1) == 0) {
              local_114 = *(undefined **)PTR_DAT_04bb37e0;
            }
          }
        }
        plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
        (**(code **)(*plVar18 + 0x38))(plVar18,2,&local_180,1);
        *pbVar3 = *pbVar3 | 2;
        goto joined_r0x02192938;
      }
    }
  }
  if (iVar9 < 1) {
    uVar7 = *(uint *)(param_1 + 0x3658);
    puVar13 = &DAT_053fd568;
    if ((-1 < (int)uVar7) && ((int)uVar7 < *(int *)(param_1 + 0x10))) {
      plVar18 = (long *)(param_1 + 0x18);
      goto LAB_02192a88;
    }
  }
  else {
    uVar7 = *(uint *)(param_1 + 0x365c);
    puVar13 = &DAT_053fd568;
    if ((-1 < (int)uVar7) && ((int)uVar7 < iVar9)) {
      plVar18 = (long *)(param_1 + 0x1b38);
LAB_02192a88:
      puVar13 = *(undefined4 **)(*plVar18 + (ulong)uVar7 * 8);
    }
  }
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3b0) + 0x568) = puVar13[0x68];
  *(undefined4 *)(*(long *)(*(long *)(param_1 + 8) + 0x3b0) + 0x56c) = puVar13[0x69];
  if (*(char *)(puVar21 + 0x1a) != '\0') {
    puVar21[0x39] = *(undefined4 *)(*(long *)(param_1 + 8) + 0x750);
  }
  if (*(char *)((long)puVar21 + 0x69) != '\0') {
    plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar18 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar18 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar18 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar18 + 0x370))(&local_180,plVar18);
    puVar21[0x37] = local_180;
    puVar21[0x38] = uStack_17c;
  }
  if (*(undefined8 **)(puVar21 + 2) != (undefined8 *)0x0) {
    (**(code **)**(undefined8 **)(puVar21 + 2))();
  }
  local_180 = puVar21[0x1c];
  local_178 = PTR_DAT_04bbc1a0 + 0x10;
  local_168 = *(undefined8 *)(puVar21 + 0x22);
  puStack_170 = PTR_DAT_04bb2010 + 0x10;
  local_158 = *(undefined8 *)(puVar21 + 0x26);
  local_150 = *(undefined8 *)(puVar21 + 0x28);
  local_148 = puVar21[0x2a];
  uStack_144 = puVar21[0x2b];
  uStack_140 = puVar21[0x2c];
  local_13c = puVar21[0x2d];
  local_d0 = 0x20;
  local_128 = (undefined4)*(undefined8 *)(puVar21 + 0x32);
  uStack_124 = (undefined4)((ulong)*(undefined8 *)(puVar21 + 0x32) >> 0x20);
  uStack_120 = (undefined4)*(undefined8 *)(puVar21 + 0x34);
  uStack_11c = (undefined4)((ulong)*(undefined8 *)(puVar21 + 0x34) >> 0x20);
  uStack_118 = *(undefined1 *)(puVar21 + 0x36);
  local_138 = *(undefined8 *)(puVar21 + 0x2e);
  uStack_130 = *(undefined8 *)(puVar21 + 0x30);
  local_e4 = puVar21[0x43];
  local_114 = *(undefined **)(puVar21 + 0x37);
  local_ec = *(undefined8 *)(puVar21 + 0x41);
  local_f4 = *(undefined8 *)(puVar21 + 0x3f);
  local_fc = *(undefined8 *)(puVar21 + 0x3d);
  local_104 = *(undefined8 *)(puVar21 + 0x3b);
  local_10c = *(ulong *)(puVar21 + 0x39);
  local_ad = 0;
  puVar1 = PTR_DAT_04bb2a08 + 0x10;
  local_160 = puStack_170;
  local_e0 = puVar1;
  local_d8 = local_cc;
  (**(code **)(*(long *)(puVar21 + 0x44) + 0x18))(puVar21 + 0x44);
  puVar19 = *(undefined1 **)(puVar21 + 0x46);
  if (local_cc != puVar19) {
    (**(code **)(*(long *)(puVar21 + 0x44) + 0x18))(puVar21 + 0x44);
    lVar15 = 0;
    do {
      if (*(char *)(*(long *)(puVar21 + 0x46) + lVar15) == '\0') goto LAB_02192ca8;
      lVar20 = *(long *)(puVar21 + 0x46) + lVar15;
      if (*(char *)(lVar20 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02192ca8;
      }
      if (*(char *)(lVar20 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02192ca8;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02192ca8:
    iVar9 = (int)lVar15;
    if (local_d0 <= (int)lVar15) {
      iVar9 = local_d0 + -1;
    }
    memcpy(local_cc,puVar19,(long)iVar9);
    local_cc[iVar9] = 0;
  }
  local_98 = 0x20;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
  local_75 = 0;
  local_e0 = puVar2;
  local_a8 = puVar1;
  local_a0 = local_94;
  (**(code **)(*(long *)(puVar21 + 0x52) + 0x18))(puVar21 + 0x52);
  puVar19 = *(undefined1 **)(puVar21 + 0x54);
  if (local_94 != puVar19) {
    (**(code **)(*(long *)(puVar21 + 0x52) + 0x18))(puVar21 + 0x52);
    lVar15 = 0;
    do {
      if (*(char *)(*(long *)(puVar21 + 0x54) + lVar15) == '\0') goto LAB_02192d6c;
      lVar20 = *(long *)(puVar21 + 0x54) + lVar15;
      if (*(char *)(lVar20 + 1) == '\0') {
        lVar15 = lVar15 + 1;
        goto LAB_02192d6c;
      }
      if (*(char *)(lVar20 + 2) == '\0') {
        lVar15 = lVar15 + 2;
        goto LAB_02192d6c;
      }
      lVar15 = lVar15 + 3;
    } while (lVar15 != 0x80001);
    lVar15 = 0;
LAB_02192d6c:
    iVar9 = (int)lVar15;
    if (local_98 <= (int)lVar15) {
      iVar9 = local_98 + -1;
    }
    memcpy(local_94,puVar19,(long)iVar9);
    local_94[iVar9] = 0;
  }
  local_a8 = puVar2;
  if ((*(char *)((long)puVar21 + 0x6a) != '\0') &&
     (uVar7 = FUN_00a86724(*(undefined8 *)PTR_DAT_04bb30a0), 3 < uVar7)) {
    plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
    if (plVar18 == (long *)0x0) {
      if ((DAT_052461c0 & 1) == 0) {
        iVar9 = __cxa_guard_acquire(&DAT_052461c0);
        plVar18 = &DAT_05240280;
        if (iVar9 != 0) {
          FUN_016fcf10(&DAT_05240280);
          FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
          __cxa_guard_release(&DAT_052461c0);
        }
      }
      else {
        plVar18 = &DAT_05240280;
      }
    }
    (**(code **)(*plVar18 + 0x370))(&local_188,plVar18);
    puVar1 = PTR_DAT_04bb43c0;
    lVar20 = *(long *)PTR_DAT_04bb43c0;
    uVar7 = FUN_0277d6c4(&local_188);
    lVar15 = *(long *)puVar1;
    if (lVar15 != 0) {
      lVar20 = *(long *)(lVar20 + 0x57e58);
      uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
      if ((uVar7 < *(uint *)(lVar20 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
        local_190 = 0;
        local_1a0 = PTR_DAT_04bc0510 + 0x10;
        local_198 = local_188;
        uStack_194 = uStack_184;
        uVar7 = FUN_0277d6c4(&local_198);
        if (*(long *)puVar1 == 0) {
LAB_02193360:
          local_70 = 0xbc;
        }
        else {
          lVar15 = *(long *)(lVar15 + 0x57e58);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
             (*(long *)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8) == 0)) goto LAB_02193360;
          lVar15 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(&local_188);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar15 + 0x1f8);
          if ((*(uint *)(lVar15 + 0x1d8) <= uVar7) ||
             (puVar14 = *(uint **)(*(long *)(lVar15 + 0x1e0) + (long)(int)uVar7 * 8),
             puVar14 == (uint *)0x0)) goto LAB_02193360;
          local_70 = 0;
          uVar7 = *puVar14;
          if ((uVar7 != 0) && (puVar14 != (uint *)(ulong)uVar7)) {
            puVar16 = (uint *)((long)puVar14 - (long)(ulong)uVar7);
            local_70 = 0;
            if (*puVar16 != 0) {
              uVar7 = puVar16[1];
              if ((uVar7 != 0) && ((ulong)(ushort)puVar16[2] != 0)) {
                lVar15 = 0xc;
                if (*(char *)((long)puVar16 + 10) != '\0') {
                  lVar15 = 0x1c;
                }
                lVar15 = (long)puVar16 + lVar15 + (ulong)(ushort)puVar16[2] * 8;
                if (lVar15 != 0) {
                  uVar5 = 0;
                  if ((ulong)uVar7 != 0) {
                    uVar5 = (uint)((ulong)((long)puVar14 - lVar15) / (ulong)uVar7);
                  }
                  if (*puVar16 <= uVar5) {
                    uVar5 = 0xffffffff;
                  }
                  if ((uVar5 < *(uint *)PTR_DAT_04bc00c8) &&
                     (local_70 = (uint)*(ushort *)
                                        (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar5 * 2),
                     local_70 < 0xbd)) goto LAB_0219336c;
                }
              }
              local_70 = 0;
            }
          }
        }
LAB_0219336c:
        local_6c = 0x14;
        if (local_70 == 0x14) {
          plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x60);
          if (plVar18 == (long *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar9 = __cxa_guard_acquire(&DAT_052461c0);
              plVar18 = &DAT_05240280;
              if (iVar9 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              plVar18 = &DAT_05240280;
            }
          }
          (**(code **)(*plVar18 + 0x370))(&local_1a0,plVar18);
          local_114 = local_1a0;
        }
      }
    }
  }
  plVar18 = *(long **)(*(long *)(param_1 + 8) + 0x3b8);
  (**(code **)(*plVar18 + 0x38))(plVar18,*puVar21,&local_180,1);
joined_r0x02192938:
  if ((param_2 & 1) == 0) {
    if (*(int *)(param_1 + 0x1b30) < 1) {
      *(undefined4 *)(param_1 + 0x3660) = 0;
    }
    else {
      *(undefined4 *)(param_1 + 0x3664) = 0;
    }
  }
  return;
}

