
uint FUN_01fbd8e0(long param_1,long param_2)

{
  float *pfVar1;
  float *pfVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  char *pcVar11;
  bool bVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  ulong uVar17;
  long *plVar18;
  ulong uVar19;
  undefined4 *puVar20;
  int iVar21;
  uint uVar22;
  long lVar23;
  undefined1 *puVar24;
  long lVar25;
  uint *puVar26;
  int iVar27;
  undefined1 *puVar28;
  int iVar29;
  undefined1 *puVar30;
  uint *puVar31;
  int *piVar32;
  int iVar33;
  void *pvVar34;
  void *pvVar35;
  long lVar36;
  long *plVar37;
  undefined8 *puVar38;
  undefined1 *puVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined8 local_4b0;
  undefined8 *local_4a8;
  undefined8 local_4a0;
  undefined1 auStack_498 [16];
  undefined1 auStack_488 [12];
  undefined1 auStack_47c [20];
  undefined1 local_468;
  uint local_460;
  undefined4 local_45c;
  undefined4 local_458;
  undefined4 local_454;
  undefined4 local_450;
  int local_3d4;
  char *local_3a8;
  int local_3a0;
  undefined8 local_318;
  uint local_310 [2];
  undefined4 local_308;
  undefined4 local_304;
  undefined *local_300;
  undefined *puStack_2f8;
  undefined8 local_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined8 local_2d8;
  undefined8 local_2d0;
  undefined *local_2c8;
  char *local_2c0;
  undefined4 local_2b8;
  char local_2b4 [63];
  undefined1 local_275;
  undefined *local_270;
  char *local_268;
  undefined4 local_260;
  char local_25c [63];
  undefined1 local_21d;
  undefined8 local_218;
  float *local_210;
  undefined8 *local_208;
  undefined4 local_200;
  undefined4 local_1fc;
  undefined8 *local_1f8;
  undefined4 local_1f0;
  undefined4 local_1ec;
  float *local_1e8;
  undefined8 *local_1e0;
  undefined4 local_1d8;
  undefined4 local_1d4;
  undefined8 *local_1d0;
  undefined4 local_1c8;
  undefined4 local_1c4;
  undefined8 local_1c0;
  undefined4 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined1 local_1a0 [4];
  undefined1 local_19c [4];
  undefined8 local_198;
  undefined1 *local_190;
  undefined8 local_188;
  undefined1 *local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined *local_160;
  undefined4 local_158;
  undefined4 local_154;
  byte local_150;
  undefined1 *local_148;
  int local_140;
  int iStack_13c;
  undefined1 *local_138;
  int local_130;
  int iStack_12c;
  undefined1 local_124 [4];
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 *local_108;
  undefined8 local_100;
  undefined1 local_8d;
  
  puVar10 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb37e0;
  puVar5 = PTR_DAT_04bb2010;
  local_2e0 = 0;
  local_2d8 = 0;
  local_2c0 = local_2b4;
  local_2f0 = 0;
  local_310[0] = 0;
  local_300 = PTR_DAT_04bbc1a0 + 0x10;
  local_275 = 0;
  local_2b4[0] = '\0';
  puStack_2f8 = PTR_DAT_04bb2010 + 0x10;
  local_308 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_304 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_2b8 = 0x40;
  local_268 = local_25c;
  local_2d0 = 0;
  local_2c8 = PTR_DAT_04bb2bc0 + 0x10;
  local_260 = 0x40;
  local_21d = 0;
  local_25c[0] = '\0';
  local_218 = 0;
  local_2e8 = puStack_2f8;
  local_270 = local_2c8;
  uVar17 = FUN_01fa2a90(param_2,local_310);
  uVar14 = 0;
  if ((uVar17 & 1) == 0) goto LAB_01fbf19c;
  if (*(int *)(*(long *)(param_2 + 8) + 0x750) == 1) {
    local_318 = 0xfffe;
    FUN_0277d4ac(&local_318);
    puVar8 = PTR_DAT_04bb27c0;
    lVar23 = *(long *)PTR_DAT_04bb27c0;
    if (lVar23 != 0) {
      if ((((local_310[0] == 0) ||
           (plVar37 = *(long **)(*(long *)(*(long *)(lVar23 + 0x1c0) + 8) +
                                ((ulong)(local_310[0] >> 0x11) & 0x7ff8)), plVar37 == (long *)0x0))
          || ((*(uint *)(plVar37 + 0x49) >> 1 & 1) != 0)) ||
         (*(uint *)(plVar37 + 0x46) != local_310[0])) {
        plVar37 = (long *)0x0;
      }
      if ((*(int *)(lVar23 + 0x288) == 1) || (*(int *)(lVar23 + 0x288) == -1)) {
        plVar18 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        lVar23 = *(long *)puVar8;
        iVar13 = (**(code **)(*plVar18 + 0x60))();
        if (iVar13 < 0x11) {
          uVar14 = 1;
        }
        else if (*(uint *)(lVar23 + 0x5e8) < 5) {
          uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar23 + 0x5e8) & 0x1f) & 1;
        }
        else {
          uVar14 = 0;
        }
      }
      else {
        uVar14 = 0;
      }
      if (plVar37 != (long *)0x0) {
        lVar23 = plVar37[0x2a];
        if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
           (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar13 != 0)) {
          *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
          __cxa_guard_release(PTR_DAT_04bb37d8);
        }
        uVar17 = (**(code **)(*plVar37 + 0x20))(plVar37,PTR_DAT_04bb37d0);
        uVar15 = 0;
        if ((int)lVar23 == 1) {
          uVar15 = uVar14;
        }
        if (((uVar17 & 1) != 0) && (uVar15 != 0)) {
          puVar38 = (undefined8 *)plVar37[0x77];
          if (((*PTR_DAT_04bb6710 & 1) == 0) &&
             (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar13 != 0)) {
            *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
            __cxa_guard_release(PTR_DAT_04bb6710);
          }
          if ((puVar38 != (undefined8 *)0x0) &&
             (uVar17 = (**(code **)*puVar38)(puVar38,PTR_DAT_04bb6708), (uVar17 & 1) != 0)) {
            puVar24 = puVar5 + 0x10;
            lVar23 = *(long *)(puVar38[1] + 0x68);
            uVar14 = *(uint *)(lVar23 + 0x2b4);
            local_158 = 0;
            pfVar1 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar14 + 0x40000000 >> 0x18) * 0x10);
            pfVar2 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar14 + 0xc0000000 >> 0x18) * 0x10);
            fVar40 = (float)(uVar14 & 0xffffff) * 5.9604645e-08;
            fVar42 = (*pfVar1 + fVar40 * pfVar1[1]) * 5.0;
            fVar43 = (pfVar1[2] + fVar40 * pfVar1[3]) * 5.0;
            fVar44 = (*pfVar2 + fVar40 * pfVar2[1]) * 5.0;
            fVar40 = (pfVar2[2] + fVar40 * pfVar2[3]) * 5.0;
            fVar45 = *(float *)(lVar23 + 0x278) + fVar42 + fVar42;
            fVar43 = *(float *)(lVar23 + 0x280) + fVar43 + fVar43;
            fVar42 = *(float *)(lVar23 + 0x278) + fVar44 + fVar44;
            fVar40 = *(float *)(lVar23 + 0x280) + fVar40 + fVar40;
            local_130 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
            iStack_12c = (int)((float)(int)fVar43 / 5.0) - (uint)(fVar43 < 0.0);
            local_140 = (int)((float)(int)fVar42 / 5.0) - (uint)(fVar42 < 0.0);
            iStack_13c = (int)((float)(int)fVar40 / 5.0) - (uint)(fVar40 < 0.0);
            lVar23 = *(long *)PTR_DAT_04bb2720;
            local_148 = puVar24;
            local_138 = puVar24;
            if (lVar23 == 0) {
              puVar38 = &DAT_055c04a0;
            }
            else {
              puVar38 = &DAT_055c04a0;
              if (*(long *)(lVar23 + 0x330) != 0) {
                puVar38 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar23 + 0x338));
                iVar13 = FUN_006bd550(*puVar38,0);
                puVar38 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar13 != 0x758f7eaf) {
                  puVar38 = &DAT_055c04a0;
                }
              }
            }
            local_154 = *(undefined4 *)(puVar38 + 7);
            local_150 = FUN_017baf44();
            local_150 = local_150 & 1;
            local_168 = 0xfffe;
            local_160 = PTR_DAT_04bb3140 + 0x10;
            FUN_0277d4ac(&local_168);
            local_170 = 0xfffe;
            FUN_0277d4ac(&local_170);
            local_198 = (float *)(puVar10 + 0x10);
            local_110 = 0;
            local_178 = 0;
            local_188 = 0;
            local_100 = 0;
            local_190 = puVar24;
            local_180 = puVar24;
            local_120 = local_198;
            local_118 = puVar24;
            local_108 = puVar24;
            uVar17 = FUN_01fc6064(&local_160,&local_168,&local_120,&local_138);
            uVar19 = FUN_01fc6064(&local_160,&local_170,&local_198,&local_148);
            if (((uVar17 & 1) != 0) || ((uVar19 & 1) != 0)) {
              local_19c[0] = 0;
              puVar20 = (undefined4 *)((long)&local_168 + 4);
              puVar39 = (undefined1 *)((ulong)&local_168 | 3);
              puVar24 = (undefined1 *)((ulong)&local_168 | 2);
              local_1a0[0] = 0;
              local_1a8 = 0;
              local_1b0 = 0;
              local_1b8 = 0;
              local_1c0 = 0;
              pfVar1 = local_1e8;
              if ((uVar17 & 1) == 0) {
joined_r0x01fbde4c:
                local_1e8 = pfVar1;
                if ((uVar19 & 1) != 0) {
                  uVar14 = 0;
LAB_01fbde94:
                  local_4c0 = (float *)(puVar10 + 0x10);
                  local_4b8 = puVar5 + 0x10;
                  local_200 = (undefined4)local_188;
                  local_1fc = local_188._4_4_;
                  local_4b0 = (uint *)0x0;
                  local_124[0] = 0;
                  local_1f0 = (undefined4)local_178;
                  local_1ec = local_178._4_4_;
                  local_4a0 = 0;
                  local_4a8 = (undefined8 *)local_4b8;
                  local_210 = local_4c0;
                  local_208 = (undefined8 *)local_4b8;
                  local_1f8 = (undefined8 *)local_4b8;
                  uVar17 = FUN_01517328(&local_4c0,local_124,&local_208,&local_170);
                  uVar15 = 0;
                  if ((uVar17 & 1) != 0) {
                    iVar13 = ((int)local_4a0 - (int)local_4b0) + 1;
                    lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278;
                    if (iVar13 + iVar13 * (local_4a0._4_4_ - local_4b0._4_4_) == 8) {
                      uVar15 = FUN_01fab12c(param_1,lVar23,&local_170,local_124,&local_4c0,
                                            &local_1c0,local_1a0);
                    }
                    else {
                      uVar15 = FUN_021f2630(&local_170,&local_210,lVar23,param_1 + 0x188,&local_1c0,
                                            local_1a0,0);
                    }
                  }
                  if (((uVar14 | uVar15) & 1) != 0) {
                    puVar28 = (undefined1 *)((ulong)&local_170 | 2);
                    puVar30 = (undefined1 *)((ulong)&local_170 | 3);
                    puVar4 = puVar28;
                    puVar6 = (undefined4 *)((long)&local_170 + 4);
                    puVar7 = puVar30;
                    puVar38 = &local_170;
                    if ((uVar15 & 1) == 0) {
                      puVar4 = puVar24;
                      puVar6 = puVar20;
                      puVar7 = puVar39;
                      puVar38 = &local_168;
                    }
                    if ((uVar15 & 1 & uVar14) == 1) {
                      lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x68);
                      fVar44 = *(float *)(lVar23 + 0x278);
                      fVar41 = *(float *)(lVar23 + 0x280);
                      fVar45 = fVar45 - fVar44;
                      fVar43 = fVar43 - fVar41;
                      fVar42 = fVar42 - fVar44;
                      fVar40 = fVar40 - fVar41;
                      puVar38 = &local_168;
                      if (fVar40 * fVar40 + fVar42 * fVar42 <= fVar43 * fVar43 + fVar45 * fVar45) {
                        puVar24 = puVar28;
                        puVar39 = puVar30;
                        puVar20 = (undefined4 *)((long)&local_170 + 4);
                        puVar38 = &local_170;
                      }
                    }
                    else {
                      puVar20 = puVar6;
                      puVar24 = puVar4;
                      puVar39 = puVar7;
                    }
                    goto LAB_01fbe014;
                  }
                }
              }
              else {
                pfVar1 = (float *)(puVar10 + 0x10);
                local_4b8 = puVar5 + 0x10;
                local_1d8 = (int)local_110;
                local_1d4 = local_110._4_4_;
                local_4b0 = (uint *)0x0;
                local_210 = (float *)((ulong)local_210 & 0xffffffffffffff00);
                local_1c8 = (undefined4)local_100;
                local_1c4 = local_100._4_4_;
                local_4a0 = 0;
                local_4c0 = pfVar1;
                local_4a8 = (undefined8 *)local_4b8;
                local_1e8 = pfVar1;
                local_1e0 = (undefined8 *)local_4b8;
                local_1d0 = (undefined8 *)local_4b8;
                uVar17 = FUN_01517328(&local_4c0,&local_210,&local_1e0,&local_168);
                if ((uVar17 & 1) == 0) goto joined_r0x01fbde4c;
                iVar13 = ((int)local_4a0 - (int)local_4b0) + 1;
                lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278;
                if (iVar13 + iVar13 * (local_4a0._4_4_ - local_4b0._4_4_) == 8) {
                  uVar14 = FUN_01fab12c(param_1,lVar23,&local_168,&local_210,&local_4c0,&local_1b0,
                                        local_19c);
                }
                else {
                  uVar14 = FUN_021f2630(&local_168,&local_1e8,lVar23,param_1 + 0x188,&local_1b0,
                                        local_19c,0);
                }
                local_1e8 = (float *)(puVar10 + 0x10);
                if ((uVar19 & 1) != 0) goto LAB_01fbde94;
                if ((uVar14 & 1) == 0) goto LAB_01fbe034;
                puVar38 = &local_168;
LAB_01fbe014:
                local_318 = CONCAT44(*puVar20,CONCAT13(*puVar39,CONCAT12(*puVar24,*(undefined2 *)
                                                                                   puVar38)));
              }
            }
          }
        }
      }
    }
LAB_01fbe034:
    uVar17 = FUN_01f9db88(param_1,&local_308,&local_300,1);
    if ((uVar17 & 1) == 0) goto LAB_01fbe0d8;
    lVar23 = *(long *)(param_2 + 8);
    pvVar34 = *(void **)(param_1 + 0x12010);
    (**(code **)(*(long *)(lVar23 + 0x3e0) + 0x18))(lVar23 + 0x3e0);
    pvVar35 = *(void **)(lVar23 + 1000);
    if (pvVar34 != pvVar35) {
      (**(code **)(*(long *)(lVar23 + 0x3e0) + 0x18))(lVar23 + 0x3e0);
      lVar25 = 0;
      do {
        if (*(char *)(*(long *)(lVar23 + 1000) + lVar25) == '\0') goto LAB_01fbe810;
        lVar36 = *(long *)(lVar23 + 1000) + lVar25;
        if (*(char *)(lVar36 + 1) == '\0') {
          lVar25 = lVar25 + 1;
          goto LAB_01fbe810;
        }
        if (*(char *)(lVar36 + 2) == '\0') {
          lVar25 = lVar25 + 2;
          goto LAB_01fbe810;
        }
        lVar25 = lVar25 + 3;
      } while (lVar25 != 0x80001);
      lVar25 = 0;
LAB_01fbe810:
      iVar13 = (int)lVar25;
      if (*(int *)(param_1 + 0x12018) <= (int)lVar25) {
        iVar13 = *(int *)(param_1 + 0x12018) + -1;
      }
      memcpy(pvVar34,pvVar35,(long)iVar13);
      *(undefined1 *)((long)pvVar34 + (long)iVar13) = 0;
    }
LAB_01fbe83c:
    uVar14 = 1;
  }
  else {
LAB_01fbe0d8:
    puVar5 = PTR_DAT_04bb2720;
    if (*local_268 == '\0') goto LAB_01fbf198;
    if (*(int *)(param_1 + 0xaf88) != 0) goto LAB_01fbe0ec;
    lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x68);
    pfVar1 = (float *)(lVar23 + 0x278);
    if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar25 = *(long *)PTR_DAT_04bb2720, lVar25 == 0)) ||
       (*(long *)(lVar25 + 0x330) == 0)) {
LAB_01fbe358:
      lVar25 = *(long *)PTR_DAT_04bb59d8;
      if (lVar25 == 0) {
        iVar13 = 0;
        iVar29 = 0;
        iVar21 = 0;
        iVar27 = 0;
      }
      else {
        iVar13 = *(int *)(lVar25 + 0x28);
        iVar29 = *(int *)(lVar25 + 0x2c);
        iVar21 = *(int *)(lVar25 + 0x38);
        iVar27 = *(int *)(lVar25 + 0x3c);
      }
    }
    else {
      puVar38 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar25 + 0x338));
      iVar13 = FUN_006bd550(*puVar38,0);
      if (((iVar13 != 0x758f7eaf) || (*(long *)puVar5 == 0)) ||
         ((lVar25 = *(long *)(*(long *)puVar5 + 0x330), lVar25 == 0 ||
          (*(int *)(lVar25 + 0x244) == 0)))) goto LAB_01fbe358;
      lVar25 = *(long *)PTR_DAT_04bb5ce0;
      if (lVar25 == 0) {
        iVar21 = 0;
        iVar27 = 0;
        iVar33 = 0x10;
        iVar29 = 0x10;
      }
      else {
        iVar21 = *(int *)(lVar25 + 0xd88);
        iVar27 = *(int *)(lVar25 + 0xd8c);
        iVar29 = *(int *)(lVar25 + 0xd98);
        iVar33 = *(int *)(lVar25 + 0xd9c);
      }
      iVar13 = iVar21;
      if (iVar29 <= iVar21) {
        iVar13 = iVar29;
      }
      if (iVar21 <= iVar29) {
        iVar21 = iVar29;
      }
      iVar29 = iVar27;
      if (iVar33 <= iVar27) {
        iVar29 = iVar33;
      }
      if (iVar27 <= iVar33) {
        iVar27 = iVar33;
      }
    }
    uVar14 = 0;
    if ((*pfVar1 < (float)iVar13 * 5.0) || ((float)iVar21 * 5.0 + 5.0 <= *pfVar1))
    goto LAB_01fbf19c;
    uVar14 = 0;
    if ((*(float *)(lVar23 + 0x280) < (float)iVar29 * 5.0) ||
       ((float)iVar27 * 5.0 + 5.0 <= *(float *)(lVar23 + 0x280))) goto LAB_01fbf19c;
    if ((int)local_218 == 2) {
      uVar17 = FUN_0277e294(&local_308);
      puVar5 = PTR_DAT_04bb43c0;
      if ((uVar17 & 1) != 0) {
        uVar14 = 0;
        iVar29 = (int)local_2f0 + -2;
        iVar13 = (int)local_2e0 + 2;
        iVar21 = iVar29;
        if (iVar13 <= iVar29) {
          iVar21 = iVar13;
        }
        if (iVar29 <= iVar13) {
          iVar29 = iVar13;
        }
        if ((*pfVar1 <= (float)iVar21 * 5.0) || ((float)iVar29 * 5.0 + 5.0 <= *pfVar1))
        goto LAB_01fbf19c;
        uVar14 = 0;
        iVar29 = local_2f0._4_4_ + -2;
        iVar13 = local_2e0._4_4_ + 2;
        iVar21 = iVar29;
        if (iVar29 <= iVar13) {
          iVar21 = iVar13;
        }
        if (iVar13 <= iVar29) {
          iVar29 = iVar13;
        }
        if ((*(float *)(lVar23 + 0x280) <= (float)iVar29 * 5.0) ||
           ((float)iVar21 * 5.0 + 5.0 <= *(float *)(lVar23 + 0x280))) goto LAB_01fbf19c;
        goto LAB_01fbe0ec;
      }
      local_4b0 = (uint *)0x0;
      local_4c0 = (float *)(PTR_DAT_04bc0510 + 0x10);
      local_4b8 = (char *)CONCAT44(local_304,local_308);
      lVar25 = *(long *)PTR_DAT_04bb43c0;
      uVar14 = FUN_0277d6c4(&local_4b8);
      if (*(long *)puVar5 == 0) {
LAB_01fbeb80:
        local_198 = (float *)CONCAT44(local_198._4_4_,0xbc);
        local_120 = (float *)CONCAT44(local_120._4_4_,5);
        uVar14 = 0xbc;
LAB_01fbebe4:
        uVar22 = uVar14;
LAB_01fbebe8:
        puVar5 = PTR_DAT_04bb27c0;
        local_198 = (float *)CONCAT44(local_198._4_4_,uVar22);
        if (uVar22 == (uint)local_120) goto LAB_01fbe0ec;
        lVar25 = *(long *)PTR_DAT_04bb27c0;
        if (lVar25 != 0) {
          if (((local_310[0] == 0) ||
              (lVar36 = *(long *)(*(long *)(*(long *)(lVar25 + 0x1c0) + 8) +
                                 ((ulong)(local_310[0] >> 0x11) & 0x7ff8)), lVar36 == 0)) ||
             (((*(uint *)(lVar36 + 0x248) >> 1 & 1) != 0 ||
              (*(uint *)(lVar36 + 0x230) != local_310[0])))) {
            lVar36 = 0;
          }
          if ((*(int *)(lVar25 + 0x288) == 1) || (*(int *)(lVar25 + 0x288) == -1)) {
            plVar37 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68))
            ;
            lVar25 = *(long *)puVar5;
            iVar13 = (**(code **)(*plVar37 + 0x60))();
            if (iVar13 < 0x11) {
              uVar14 = 1;
            }
            else if (*(uint *)(lVar25 + 0x5e8) < 5) {
              uVar14 = 0x1aU >> (ulong)(*(uint *)(lVar25 + 0x5e8) & 0x1f) & 1;
            }
            else {
              uVar14 = 0;
            }
          }
          else {
            uVar14 = 0;
          }
          if (lVar36 != 0) {
            uVar15 = 0;
            if (*(int *)(lVar36 + 0x150) == 1) {
              uVar15 = uVar14;
            }
            if ((uVar15 != 0) &&
               (fVar40 = *(float *)(*(long *)(lVar36 + 0x68) + 0x278) - *(float *)(lVar23 + 0x278),
               fVar42 = *(float *)(*(long *)(lVar36 + 0x68) + 0x280) - *(float *)(lVar23 + 0x280),
               fVar42 * fVar42 + fVar40 * fVar40 < 225.0)) goto LAB_01fbe0ec;
          }
        }
      }
      else {
        lVar25 = *(long *)(lVar25 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((*(uint *)(lVar25 + 0x1d8) <= uVar14) ||
           (*(long *)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar14 * 8) == 0)) {
LAB_01fbea98:
          goto LAB_01fbeb80;
        }
        lVar25 = *(long *)PTR_DAT_04bc0428;
        uVar14 = FUN_0277d6c4(&local_308);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar25 + 0x1f8);
        if ((*(uint *)(lVar25 + 0x1d8) <= uVar14) ||
           (puVar26 = *(uint **)(*(long *)(lVar25 + 0x1e0) + (long)(int)uVar14 * 8),
           puVar26 == (uint *)0x0)) goto LAB_01fbea98;
        uVar15 = 0;
        uVar14 = *puVar26;
        if ((uVar14 != 0) && (puVar26 != (uint *)(ulong)uVar14)) {
          puVar31 = (uint *)((long)puVar26 - (long)(ulong)uVar14);
          uVar15 = 0;
          if (*puVar31 != 0) {
            uVar14 = puVar31[1];
            if ((uVar14 != 0) && ((ulong)(ushort)puVar31[2] != 0)) {
              lVar25 = 0xc;
              if (*(char *)((long)puVar31 + 10) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar31 + lVar25 + (ulong)(ushort)puVar31[2] * 8;
              if (lVar25 != 0) {
                uVar15 = 0;
                if ((ulong)uVar14 != 0) {
                  uVar15 = (uint)((ulong)((long)puVar26 - lVar25) / (ulong)uVar14);
                }
                if (*puVar31 <= uVar15) {
                  uVar15 = 0xffffffff;
                }
                if ((uVar15 < *(uint *)PTR_DAT_04bc00c8) &&
                   (uVar15 = (uint)*(ushort *)
                                    (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2),
                   uVar15 < 0xbd)) goto LAB_01fbf1d8;
              }
            }
            uVar15 = 0;
          }
        }
LAB_01fbf1d8:
        local_198 = (float *)CONCAT44(local_198._4_4_,uVar15);
        local_4b0 = puVar26;
        if (uVar15 != 4) {
          uVar22 = 0;
          local_120 = (float *)CONCAT44(local_120._4_4_,5);
          uVar15 = *puVar26;
          uVar14 = 0;
          if (uVar15 == 0) goto LAB_01fbebe4;
          if (puVar26 != (uint *)(ulong)uVar15) {
            puVar31 = (uint *)((long)puVar26 - (long)(ulong)uVar15);
            if (((*puVar31 != 0) && (uVar14 = puVar31[1], uVar14 != 0)) &&
               ((ulong)(ushort)puVar31[2] != 0)) {
              lVar25 = 0xc;
              if (*(char *)((long)puVar31 + 10) != '\0') {
                lVar25 = 0x1c;
              }
              lVar25 = (long)puVar31 + lVar25 + (ulong)(ushort)puVar31[2] * 8;
              if (lVar25 != 0) {
                uVar15 = 0;
                if ((ulong)uVar14 != 0) {
                  uVar15 = (uint)((ulong)((long)puVar26 - lVar25) / (ulong)uVar14);
                }
                if (*puVar31 <= uVar15) {
                  uVar15 = 0xffffffff;
                }
                if (uVar15 < *(uint *)PTR_DAT_04bc00c8) {
                  uVar22 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar15 * 2);
                  if (0xbc < uVar22) {
                    uVar22 = 0;
                  }
                  goto LAB_01fbebe8;
                }
              }
            }
            uVar14 = 0;
            goto LAB_01fbebe4;
          }
          goto LAB_01fbebe8;
        }
        lVar23 = *(long *)PTR_DAT_04bb5ce0;
        local_120 = pfVar1;
        if (lVar23 == 0) {
LAB_01fbed9c:
          puVar5 = puVar9;
          if (lVar23 != 0) {
            puVar5 = (undefined *)(lVar23 + 0xe70);
          }
          uVar17 = FUN_0277d7b4(&local_308,puVar5);
          if ((uVar17 & 1) != 0) {
            uVar17 = FUN_01fc4ebc(&local_120,0);
            if ((((uVar17 & 1) != 0) || (uVar17 = FUN_01fc4ebc(&local_120,1), (uVar17 & 1) != 0)) ||
               (uVar17 = FUN_01fc4ebc(&local_120,2), (uVar17 & 1) != 0)) goto LAB_01fbe0ec;
LAB_01fbeec4:
            uVar17 = FUN_01fc4ebc(&local_120,3);
joined_r0x01fbeed0:
            if ((uVar17 & 1) != 0) goto LAB_01fbe0ec;
          }
        }
        else {
          uVar16 = *(undefined4 *)(lVar23 + 0xea0);
          local_198 = (float *)CONCAT44(local_198._4_4_,uVar16);
          if (*(char *)(lVar23 + 0xe9e) == '\0') goto LAB_01fbed9c;
          uVar17 = FUN_0277d7b4(lVar23 + 0xe94,&local_308);
          if ((uVar17 & 1) != 0) {
            uVar17 = FUN_01fc4ebc(&local_120,uVar16);
            goto joined_r0x01fbeed0;
          }
          puVar5 = puVar9;
          if (*(long *)PTR_DAT_04bb5ce0 != 0) {
            puVar5 = (undefined *)(*(long *)PTR_DAT_04bb5ce0 + 0xe70);
          }
          uVar17 = FUN_0277d7b4(&local_308,puVar5);
          if ((uVar17 & 1) != 0) {
            local_1e8 = (float *)((ulong)local_1e8 & 0xffffffff00000000);
            if (((int)local_198 != 0) && (uVar17 = FUN_01fc4ebc(&local_120,0), (uVar17 & 1) != 0))
            goto LAB_01fbe0ec;
            local_1e8 = (float *)CONCAT44(local_1e8._4_4_,1);
            if (((int)local_198 != 1) && (uVar17 = FUN_01fc4ebc(&local_120,1), (uVar17 & 1) != 0))
            goto LAB_01fbe0ec;
            local_1e8 = (float *)CONCAT44(local_1e8._4_4_,2);
            if (((int)local_198 != 2) && (uVar17 = FUN_01fc4ebc(&local_120,2), (uVar17 & 1) != 0))
            goto LAB_01fbe0ec;
            local_1e8 = (float *)CONCAT44(local_1e8._4_4_,3);
            if ((int)local_198 == 3) goto LAB_01fbf198;
            goto LAB_01fbeec4;
          }
        }
      }
    }
    else {
LAB_01fbe0ec:
      puVar5 = PTR_DAT_04bb43c0;
      if (*(int *)(param_2 + 0xaf8c) != 5) {
        if (*(int *)(*(long *)(param_1 + 8) + 0x750) == 0) {
          *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 2;
        }
        iVar13 = local_218._4_4_;
        if (local_218._4_4_ == 0) {
          iVar21 = *(int *)(*(long *)(param_2 + 8) + 0x230);
          if (*(int *)(param_1 + 0x12090) != 0) {
            puVar38 = *(undefined8 **)(param_1 + 0x12098);
            lVar23 = (long)*(int *)(param_1 + 0x12090) << 3;
            do {
              if (*(int *)*puVar38 == iVar21) goto LAB_01fbe3dc;
              puVar38 = puVar38 + 1;
              lVar23 = lVar23 + -8;
            } while (lVar23 != 0);
          }
          if (*(int *)(param_1 + 0x12088) == 0) {
            *(int *)(param_1 + 0x12088) = iVar21;
          }
LAB_01fbe3dc:
          iVar21 = *(int *)(*(long *)(param_1 + 8) + 0x230);
          if (*(int *)(param_2 + 0x12088) != iVar21) {
            iVar29 = *(int *)(param_2 + 0x12090);
            if (iVar29 != 0) {
              puVar38 = *(undefined8 **)(param_2 + 0x12098);
              lVar23 = (long)iVar29 << 3;
              do {
                if (*(int *)*puVar38 == iVar21) goto LAB_01fbe45c;
                puVar38 = puVar38 + 1;
                lVar23 = lVar23 + -8;
              } while (lVar23 != 0);
            }
            if (iVar29 < *(int *)(param_2 + 0x12094)) {
              piVar32 = *(int **)(param_2 + 0x120a0);
              if (piVar32 != (int *)0x0) {
                *(undefined8 *)(param_2 + 0x120a0) = *(undefined8 *)piVar32;
              }
              *piVar32 = iVar21;
              if (*(int *)(param_2 + 0x12090) < *(int *)(param_2 + 0x12094)) {
                *(int **)(*(long *)(param_2 + 0x12098) + (long)*(int *)(param_2 + 0x12090) * 8) =
                     piVar32;
                *(int *)(param_2 + 0x12090) = *(int *)(param_2 + 0x12090) + 1;
              }
            }
          }
        }
LAB_01fbe45c:
        iVar21 = *(int *)(param_2 + 0xaf8c);
        if (1 < iVar21 - 3U) {
          (**(code **)(local_2c8 + 0x18))(&local_2c8);
          (**(code **)(local_2c8 + 0x18))(&local_2c8);
          pcVar3 = local_2c0;
          (**(code **)(local_270 + 0x18))(&local_270);
          if (pcVar3 != local_268) {
            if (*local_2c0 != *local_268) {
LAB_01fbe844:
              FUN_01e63f1c(&local_4c0);
              if ((*(int *)(param_1 + 0xaf88) != 0) &&
                 (uVar17 = FUN_01fc07f8(param_1,auStack_498,local_310), (uVar17 & 1) == 0)) {
                FUN_01fc4b60(param_1);
                uVar14 = 0;
                goto LAB_01fbf19c;
              }
              FUN_01fc4510(param_1,auStack_488,auStack_47c,local_310);
              local_8d = 0;
              local_460 = 1;
              if ((int)local_218 == 1) {
                local_460 = 2;
              }
              pcVar3 = (char *)((long)&local_110 + 4);
              local_110 = CONCAT35(local_110._5_3_,0x80);
              local_120 = (float *)(PTR_DAT_04bb2d88 + 0x10);
              local_118 = pcVar3;
              (**(code **)(local_270 + 0x18))(&local_270);
              pcVar11 = local_268;
              if (pcVar3 != local_268) {
                (**(code **)(local_270 + 0x18))(&local_270);
                lVar23 = 0;
                do {
                  if (local_268[lVar23] == '\0') goto LAB_01fbecb4;
                  if (local_268[lVar23 + 1] == '\0') {
                    lVar23 = lVar23 + 1;
                    goto LAB_01fbecb4;
                  }
                  if (local_268[lVar23 + 2] == '\0') {
                    lVar23 = lVar23 + 2;
                    goto LAB_01fbecb4;
                  }
                  lVar23 = lVar23 + 3;
                } while (lVar23 != 0x80001);
                lVar23 = 0;
LAB_01fbecb4:
                iVar13 = (int)lVar23;
                if ((int)local_110 <= (int)lVar23) {
                  iVar13 = (int)local_110 + -1;
                }
                memcpy(pcVar3,pcVar11,(long)iVar13);
                pcVar3[iVar13] = '\0';
              }
              uVar17 = local_110;
              pcVar3 = local_118;
              if ((((*local_118 == 'M') && (local_118[1] == 'a')) && (local_118[2] == 'R')) &&
                 (local_118[3] == 'e')) {
                local_190 = &DAT_040b125b;
                local_1e0 = &DAT_0407ebb1;
                local_210 = (float *)((ulong)local_210 & 0xffffffffffffff00);
                local_1e8 = (float *)(PTR_DAT_04bb2020 + 0x10);
                local_198 = local_1e8;
                (**(code **)((long)local_120 + 0x18))(&local_120);
                pcVar11 = local_118;
                (**(code **)((long)local_120 + 0x18))(&local_120);
                lVar23 = 0;
                do {
                  if (local_118[lVar23] == '\0') goto LAB_01fbef00;
                  if (local_118[lVar23 + 1] == '\0') {
                    lVar23 = lVar23 + 1;
                    goto LAB_01fbef00;
                  }
                  if (local_118[lVar23 + 2] == '\0') {
                    lVar23 = lVar23 + 2;
                    goto LAB_01fbef00;
                  }
                  lVar23 = lVar23 + 3;
                } while (lVar23 != 0x80001);
                lVar23 = 0;
LAB_01fbef00:
                FUN_038d0770(pcVar3,0,uVar17 & 0xffffffff,pcVar11,lVar23,&local_198,&local_1e8,
                             &local_210);
              }
              (**(code **)((long)local_120 + 0x18))(&local_120);
              pcVar3 = local_118;
              if (local_3a8 != local_118) {
                (**(code **)((long)local_120 + 0x18))(&local_120);
                lVar23 = 0;
                do {
                  if (local_118[lVar23] == '\0') goto LAB_01fbef94;
                  if (local_118[lVar23 + 1] == '\0') {
                    lVar23 = lVar23 + 1;
                    goto LAB_01fbef94;
                  }
                  if (local_118[lVar23 + 2] == '\0') {
                    lVar23 = lVar23 + 2;
                    goto LAB_01fbef94;
                  }
                  lVar23 = lVar23 + 3;
                } while (lVar23 != 0x80001);
                lVar23 = 0;
LAB_01fbef94:
                iVar13 = (int)lVar23;
                if (local_3a0 <= (int)lVar23) {
                  iVar13 = local_3a0 + -1;
                }
                memcpy(local_3a8,pcVar3,(long)iVar13);
                local_3a8[iVar13] = '\0';
              }
              (**(code **)(local_270 + 0x18))(&local_270);
              (**(code **)(local_270 + 0x18))(&local_270);
              if (local_268 == "NpcSinging") {
LAB_01fbf028:
                local_4c0._0_4_ = 0x50;
                local_3d4 = local_218._4_4_;
              }
              else {
                uVar17 = 0;
                bVar12 = true;
                do {
                  if (local_268[uVar17] != "NpcSinging"[uVar17]) break;
                  if (local_268[uVar17] == '\0') {
                    if (bVar12) goto LAB_01fbf028;
                    break;
                  }
                  bVar12 = uVar17 < 0x80000;
                  uVar17 = uVar17 + 1;
                } while (uVar17 != 0x80001);
                if (local_218._4_4_ == 0) {
                  local_4c0._0_4_ = 0x41;
                }
                else {
                  local_4c0._0_4_ = 0x3f;
                }
              }
              local_468 = 1;
              local_45c = 1;
              uVar17 = FUN_01fc4e00(local_310);
              if ((uVar17 & 1) != 0) {
                *(undefined4 *)(param_1 + 0x12054) = (undefined4)local_4c0;
                local_4c0._0_4_ = 0x43;
              }
              if ((int)local_218 == 2) {
                local_198 = (float *)0x0;
                local_190 = (undefined1 *)((ulong)local_190 & 0xffffffff00000000);
                local_1e8 = (float *)((ulong)local_1e8 & 0xffffffff00000000);
                FUN_0207da6c(param_1 + 0xafb8,&local_198,&local_1e8,&local_308,&local_300);
                lVar23 = FUN_016e3954(*(undefined8 *)(param_1 + 8));
                local_120 = (float *)(PTR_DAT_04bb2020 + 0x10);
                local_118 = "NpcFtrHeight";
                if (((*(long *)(lVar23 + 0x1138) != 0) &&
                    (lVar23 = *(long *)(*(long *)(lVar23 + 0x1138) + 0x78), lVar23 != 0)) &&
                   (plVar37 = *(long **)(lVar23 + 0x48), plVar37 != (long *)0x0)) {
                  (**(code **)(*plVar37 + 0x30))((ulong)local_1e8 & 0xffffffff,plVar37,&local_120);
                }
              }
              else if ((int)local_218 == 0) {
                FUN_02085e20(*(undefined8 *)(param_1 + 0x18),0,local_310[0],PTR_DAT_04bb6928,0);
              }
              *(undefined4 *)(param_1 + 0xaf8c) = 6;
              FUN_01f9c324(param_1);
              FUN_01fb1020(param_1,&local_4c0,0x1e);
              goto LAB_01fbe83c;
            }
            if (*local_2c0 != '\0') {
              lVar23 = 0;
              do {
                if ((lVar23 == 0x80000) || (local_2c0[lVar23 + 1] != local_268[lVar23 + 1]))
                goto LAB_01fbe844;
                if (local_2c0[lVar23 + 1] == '\0') break;
                lVar25 = lVar23 + 2;
                if (local_2c0[lVar25] != local_268[lVar23 + 2]) goto LAB_01fbe844;
                lVar23 = lVar23 + 2;
              } while (local_2c0[lVar25] != '\0');
            }
          }
          FUN_01fc4510(param_1,param_1 + 0x1205c,&local_4c0,local_310);
          uVar14 = FUN_01f9d6fc(param_1,&local_308,&local_300,1,local_310);
          if ((uVar14 & 1) == 0) {
            FUN_01fc4b60(param_1);
          }
          else {
            if (iVar13 == 0) {
              *(uint *)(param_1 + 0xafb0) = *(uint *)(param_1 + 0xafb0) | 4;
            }
            *(undefined4 *)(param_1 + 0xaf8c) = 6;
          }
          goto LAB_01fbf19c;
        }
        FUN_01fc4510(param_1,param_1 + 0x1205c,param_1 + 0x12068,local_310);
        FUN_01fb5cac(param_1,&local_308,(ulong)(iVar21 != 3) << 1,local_310);
        lVar23 = *(long *)(*(long *)(param_1 + 8) + 0x3c0);
        uVar17 = FUN_02085a50(lVar23,1,0);
        if ((uVar17 & 1) != 0) {
          *(undefined1 *)(lVar23 + 0x801) = 1;
          lVar25 = lVar23 + 0x10 + (ulong)*(uint *)(lVar23 + 0x294) * 0x80;
          if (4 < *(uint *)(lVar23 + 0x294)) {
            lVar25 = lVar23 + 0x10;
          }
          *(undefined8 *)(lVar25 + 0xc) = 0;
          *(undefined4 *)(lVar25 + 0x14) = 0;
        }
        if (iVar21 == 3) {
          puVar20 = (undefined4 *)
                    (**(code **)(*(long *)(*(long *)PTR_DAT_04bb3968 + 0x18060) + 0xf0))();
          uVar16 = *puVar20;
          puVar38 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
          if (puVar38 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar13 = __cxa_guard_acquire(uVar16,&DAT_052461c0);
              puVar38 = &DAT_05240280;
              if (iVar13 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar38 = &DAT_05240280;
            }
          }
          if (((puVar38[0x227] != 0) && (lVar23 = *(long *)(puVar38[0x227] + 0x78), lVar23 != 0)) &&
             (plVar37 = *(long **)(lVar23 + 0x48), plVar37 != (long *)0x0)) {
            lVar23 = *plVar37;
            goto LAB_01fbe7ec;
          }
        }
        else {
          puVar38 = *(undefined8 **)(*(long *)(param_1 + 8) + 0x60);
          if (puVar38 == (undefined8 *)0x0) {
            if ((DAT_052461c0 & 1) == 0) {
              iVar13 = __cxa_guard_acquire(&DAT_052461c0);
              puVar38 = &DAT_05240280;
              if (iVar13 != 0) {
                FUN_016fcf10(&DAT_05240280);
                FUN_001001d0(PTR_FUN_04bbdea8,&DAT_05240280,&__DT_FINI_ARRAY);
                __cxa_guard_release(&DAT_052461c0);
              }
            }
            else {
              puVar38 = &DAT_05240280;
            }
          }
          if (((puVar38[0x227] != 0) && (lVar23 = *(long *)(puVar38[0x227] + 0x78), lVar23 != 0)) &&
             (plVar37 = *(long **)(lVar23 + 0x48), plVar37 != (long *)0x0)) {
            lVar23 = *plVar37;
            uVar16 = 0;
LAB_01fbe7ec:
            local_4c0 = (float *)(PTR_DAT_04bb2020 + 0x10);
            local_4b8 = "NpcFtrHeight";
            (**(code **)(lVar23 + 0x30))(uVar16,plVar37,&local_4c0);
          }
        }
        *(undefined4 *)(param_1 + 0xaf8c) = 6;
        goto LAB_01fbe83c;
      }
      lVar23 = *(long *)PTR_DAT_04bb43c0;
      uVar14 = FUN_0277d6c4(&local_308);
      lVar25 = *(long *)puVar5;
      if (lVar25 != 0) {
        lVar23 = *(long *)(lVar23 + 0x57e58);
        uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
        if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
          local_110 = 0;
          local_120 = (float *)(PTR_DAT_04bc0510 + 0x10);
          local_118 = (char *)CONCAT44(local_304,local_308);
          uVar14 = FUN_0277d6c4(&local_118);
          if (*(long *)puVar5 != 0) {
            lVar23 = *(long *)(lVar25 + 0x57e58);
            uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
            if ((uVar14 < *(uint *)(lVar23 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8) != 0)) {
              lVar23 = *(long *)PTR_DAT_04bc0428;
              uVar14 = FUN_0277d6c4(&local_308);
              uVar14 = (uVar14 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if (uVar14 < *(uint *)(lVar23 + 0x1d8)) {
                lVar23 = *(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar14 * 8);
                if (lVar23 != 0) {
                  local_110 = lVar23;
                }
              }
            }
          }
          puVar5 = PTR_PTR_04bb2238;
          local_4c0 = *(float **)puVar9;
          local_460 = local_460 & 0xffffff;
          pvVar34 = (void *)((long)&local_4a0 + 4);
          local_4a0 = CONCAT44(local_4a0._4_4_,0x40);
          local_4b0 = (uint *)(PTR_DAT_04bb2f70 + 0x10);
          local_4b8 = (char *)0x0;
          local_4a8 = pvVar34;
          (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
          pvVar35 = *(void **)(puVar5 + 8);
          if (pvVar34 != pvVar35) {
            (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
            lVar23 = 0;
            do {
              if (*(char *)(*(long *)(puVar5 + 8) + lVar23) == '\0') goto LAB_01fbeac0;
              lVar25 = *(long *)(puVar5 + 8) + lVar23;
              if (*(char *)(lVar25 + 1) == '\0') {
                lVar23 = lVar23 + 1;
                goto LAB_01fbeac0;
              }
              if (*(char *)(lVar25 + 2) == '\0') {
                lVar23 = lVar23 + 2;
                goto LAB_01fbeac0;
              }
              lVar23 = lVar23 + 3;
            } while (lVar23 != 0x80001);
            lVar23 = 0;
LAB_01fbeac0:
            iVar13 = (int)lVar23;
            if ((int)local_4a0 <= (int)lVar23) {
              iVar13 = (int)local_4a0 + -1;
            }
            memcpy(pvVar34,pvVar35,(long)iVar13);
            *(undefined1 *)((long)pvVar34 + (long)iVar13) = 0;
          }
          local_458 = *(undefined4 *)puVar9;
          local_454 = *(undefined4 *)(puVar9 + 4);
          local_4b0 = (uint *)(PTR_DAT_04bb2bc0 + 0x10);
          local_450 = 0;
          local_4c0 = (float *)CONCAT44(local_304,local_308);
          FUN_01b11fe0(&local_120,&local_4b0);
          uVar16 = FUN_01b12390(&local_120);
          local_4b8 = (char *)CONCAT44(uVar16,(undefined4)local_4b8);
          FUN_01b126a0(&local_198,&local_120);
          local_458 = (int)local_198;
          local_454 = local_198._4_4_;
          local_450 = FUN_01b11c60(&local_120);
          uVar14 = 1;
          FUN_01fa19e0(param_1,&local_4c0,1);
          goto LAB_01fbf19c;
        }
      }
    }
LAB_01fbf198:
    uVar14 = 0;
  }
LAB_01fbf19c:
  return uVar14 & 1;
}

