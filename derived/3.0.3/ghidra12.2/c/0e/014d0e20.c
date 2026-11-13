
void FUN_014d0e20(undefined1 param_1 [16],undefined1 param_2 [16],undefined4 param_3,long param_4)

{
  float *pfVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  uint uVar7;
  float *pfVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  long lVar14;
  undefined8 *puVar15;
  ulong uVar16;
  long *plVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined8 uVar22;
  int iVar23;
  int iVar24;
  long *plVar25;
  int iVar26;
  float fVar27;
  float fVar28;
  int local_2bc;
  undefined **local_2b0;
  undefined8 local_2a8;
  undefined8 uStack_2a0;
  int local_298;
  undefined *local_290;
  undefined8 local_288;
  undefined8 local_280;
  undefined4 local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined4 local_258;
  undefined2 local_250;
  undefined1 local_24e;
  undefined1 local_24d;
  undefined4 local_24c;
  char cStack_23c;
  undefined1 local_238;
  undefined4 local_234;
  undefined8 local_230;
  undefined1 local_228;
  uint local_224;
  undefined *local_220;
  undefined4 local_218;
  undefined4 uStack_1c4;
  undefined1 *local_1c0;
  undefined8 ****local_1b8;
  undefined8 ****local_1b0;
  undefined8 ***local_1a8 [3];
  undefined8 **local_190 [3];
  undefined8 *local_178 [3];
  undefined8 local_160 [3];
  undefined1 auStack_148 [32];
  undefined *local_128;
  int local_120;
  int iStack_11c;
  uint local_114;
  undefined *local_110;
  undefined4 local_108;
  undefined4 local_104;
  byte local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined *local_e8;
  undefined *puStack_e0;
  undefined8 local_d8;
  undefined *puStack_d0;
  undefined8 local_c8;
  undefined *local_c0;
  undefined4 local_b8;
  float fStack_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined8 local_90;
  undefined *local_88;
  undefined8 uStack_80;
  
  if (*(long *)PTR_DAT_04bbbc38 == 0) {
    lVar14 = FUN_014c9440(param_4);
    plVar25 = (long *)(lVar14 + 0x7d8);
  }
  else {
    uVar22 = *(undefined8 *)(*(long *)PTR_DAT_04bbbc38 + 0xc);
    lVar14 = FUN_014c9440(param_4);
    plVar25 = (long *)(lVar14 + 0x818);
    if ((int)uVar22 != 2) {
      plVar25 = (long *)(lVar14 + 0x7d8);
    }
  }
  puVar15 = (undefined8 *)(**(code **)(*plVar25 + 0xf0))();
  local_f8 = *puVar15;
  uStack_f0 = puVar15[1];
  local_108 = 0;
  lVar14 = *(long *)PTR_DAT_04bb2720;
  if (lVar14 == 0) {
    puVar15 = &DAT_055c04a0;
  }
  else {
    puVar15 = &DAT_055c04a0;
    if (*(long *)(lVar14 + 0x330) != 0) {
      puVar15 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar14 + 0x338));
      iVar11 = FUN_006bd550(*puVar15,0);
      puVar15 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar15 = &DAT_055c04a0;
      }
    }
  }
  local_104 = *(undefined4 *)(puVar15 + 7);
  local_100 = FUN_017baf44();
  local_100 = local_100 & 1;
  local_110 = PTR_DAT_04bb3140 + 0x10;
  lVar14 = FUN_01a4fa00(&local_110);
  iVar10 = *(int *)(lVar14 + 0x10);
  pfVar1 = (float *)(param_4 + 0x408);
  iVar11 = *(int *)(lVar14 + 0x14);
  iVar19 = *(int *)(lVar14 + 0x20);
  iVar9 = *(int *)(lVar14 + 0x24);
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  puVar3 = PTR_DAT_04bbbc20 + 0x10;
  puVar4 = PTR_DAT_04bbcf08 + 0x10;
  puVar5 = PTR_DAT_04bbc1a0 + 0x10;
  puVar6 = PTR_DAT_04bb3290 + 0x10;
  uVar21 = 0;
  do {
    local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,uVar21);
    if (uVar21 - 2 < 6) {
      uVar18 = (&DAT_041757a0)[(int)(uVar21 - 2)];
    }
    else {
      uVar18 = 0;
    }
    local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar18);
    pfVar8 = pfVar1 + (ulong)uVar18 * 0x10;
    if (6 < uVar18) {
      pfVar8 = pfVar1;
    }
    if (((pfVar8[3] < *pfVar8) || (pfVar8[4] < pfVar8[1])) ||
       (fVar28 = pfVar8[5], fVar28 < pfVar8[2])) break;
    local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,uVar21);
    if ((uVar21 < 2 || uVar21 == 7) && (iVar9 + 1 != iVar11)) {
      pfVar8 = pfVar1 + (ulong)uVar18 * 0x10;
      if (6 < uVar18) {
        pfVar8 = pfVar1;
      }
      iVar23 = iVar11;
      iVar26 = iVar10;
      local_114 = uVar21;
      do {
        local_298 = 0;
        local_278 = 0;
        local_258 = 0;
        local_2b0 = &PTR_LAB_049a6ce8;
        local_2a8 = 0;
        uStack_2a0 = 0;
        local_288 = 0;
        local_280 = 0;
        local_268 = 0;
        uStack_260 = 0;
        local_250 = *(undefined2 *)PTR_DAT_04bb37e0;
        local_238 = 0;
        local_234 = 0;
        local_230 = 0;
        local_228 = 0;
        cStack_23c = '\0';
        local_24e = PTR_DAT_04bb37e0[2];
        local_24d = PTR_DAT_04bb37e0[3];
        local_24c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
        local_218 = 0;
        local_160[0] = 0;
        local_224 = *(uint *)PTR_DAT_04bb3238;
        uStack_1c4 = 0;
        local_1c0 = (undefined1 *)0x0;
        if (auStack_148 != (undefined1 *)0x0) {
          uStack_1c4 = 4;
          local_1c0 = auStack_148;
        }
        local_290 = puVar3;
        local_270 = puVar3;
        local_220 = puVar4;
        local_1b8 = local_1a8;
        local_1b0 = local_1a8;
        local_1a8[0] = local_190;
        local_190[0] = local_178;
        local_178[0] = local_160;
        local_128 = puVar2;
        local_120 = iVar26;
        iStack_11c = iVar23;
        uVar16 = FUN_014cb6a0(param_4,&local_2b0,&local_128,&local_114,0,1);
        if ((uVar16 & 1) != 0) {
          local_c8 = 0;
          puStack_e0 = PTR_DAT_04bb2010 + 0x10;
          local_c0 = PTR_DAT_04bbbc20 + 0x10;
          local_d8 = 0;
          local_b8 = (undefined4)local_288;
          fStack_b4 = (float)((ulong)local_288 >> 0x20);
          local_b0 = (undefined4)local_280;
          local_ac = local_280._4_4_;
          uStack_a8 = local_278;
          local_e8 = puVar5;
          puStack_d0 = puStack_e0;
          if (cStack_23c != '\0') {
            local_90 = 0;
            uStack_80 = 0;
            local_a0 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_98 = puStack_e0;
            local_88 = puStack_e0;
            FUN_014edb38(&local_2b0,&local_a0,&local_290);
            local_b8 = FUN_014eda28(&local_a0,&local_288,&local_288);
            fStack_b4 = fVar28;
            local_b0 = param_3;
          }
          FUN_014edb38(&local_2b0,&local_e8,&local_c0);
          if ((((int)local_d8 < (int)pfVar8[10]) || ((int)pfVar8[0xe] < (int)local_c8)) ||
             ((local_d8._4_4_ < (int)pfVar8[0xb] || ((int)pfVar8[0xf] < local_c8._4_4_)))) {
            FUN_014ee128(0x3f800000,&local_2b0,&local_f8);
            if ((local_298 == 1) && (lVar14 = *(long *)PTR_DAT_04bb27c0, lVar14 != 0)) {
              if ((local_224 == 0) ||
                 (((plVar25 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                        ((ulong)(local_224 >> 0x11) & 0x7ff8)),
                   plVar25 == (long *)0x0 || ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) ||
                  (*(uint *)(plVar25 + 0x46) != local_224)))) {
                plVar25 = (long *)0x0;
              }
              if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
                plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar14 = *(long *)PTR_DAT_04bb27c0;
                iVar12 = (**(code **)(*plVar17 + 0x60))();
                if (iVar12 < 0x11) {
                  uVar18 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_014d138c;
                  uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_014d138c:
                uVar18 = 0;
              }
              if (plVar25 != (long *)0x0) {
                lVar14 = plVar25[0x2a];
                if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar12 != 0)) {
                  *(undefined **)PTR_DAT_04bb5920 = puVar6;
                  __cxa_guard_release(PTR_DAT_04bb5928);
                }
                uVar16 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb5920);
                uVar7 = 0;
                if ((int)lVar14 == 1) {
                  uVar7 = uVar18;
                }
                if (((uVar16 & 1) != 0) && (uVar7 != 0)) {
                  lVar14 = plVar25[0x150];
                  uVar20 = 0x3f7f3b64;
                  goto LAB_014d13f0;
                }
              }
            }
          }
          else {
            FUN_014ee128(0,&local_2b0,&local_f8);
            if ((local_298 == 1) && (lVar14 = *(long *)PTR_DAT_04bb27c0, lVar14 != 0)) {
              if ((local_224 == 0) ||
                 (((plVar25 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                        ((ulong)(local_224 >> 0x11) & 0x7ff8)),
                   plVar25 == (long *)0x0 || ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) ||
                  (*(uint *)(plVar25 + 0x46) != local_224)))) {
                plVar25 = (long *)0x0;
              }
              if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
                plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar14 = *(long *)PTR_DAT_04bb27c0;
                iVar12 = (**(code **)(*plVar17 + 0x60))();
                if (iVar12 < 0x11) {
                  uVar18 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_014d14f0;
                  uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_014d14f0:
                uVar18 = 0;
              }
              if (plVar25 != (long *)0x0) {
                lVar14 = plVar25[0x2a];
                if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                   (iVar12 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar12 != 0)) {
                  *(undefined **)PTR_DAT_04bb5920 = PTR_DAT_04bb3290 + 0x10;
                  __cxa_guard_release(PTR_DAT_04bb5928);
                }
                uVar16 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb5920);
                uVar7 = 0;
                if ((int)lVar14 == 1) {
                  uVar7 = uVar18;
                }
                if (((uVar16 & 1) != 0) && (uVar7 != 0)) {
                  lVar14 = plVar25[0x150];
                  uVar20 = 0x3f800000;
LAB_014d13f0:
                  *(undefined4 *)(lVar14 + 0x142c) = uVar20;
                  lVar14 = plVar25[0x150];
                  fVar27 = (float)FUN_015324a8(lVar14);
                  fVar28 = *(float *)(lVar14 + 0x142c);
                  *(float *)(lVar14 + 0x1428) = fVar27 * fVar28;
                  (**(code **)(**(long **)(*(long *)(lVar14 + 0x48) + 0x68) + 0x178))();
                }
              }
            }
          }
        }
        if (iVar26 < iVar19) {
          iVar26 = iVar26 + 1;
        }
        else {
          iVar23 = iVar23 + 1;
          iVar26 = iVar10;
        }
      } while ((iVar10 != iVar26) || (iVar9 + 1 != iVar23));
    }
    uVar18 = 8;
    if ((int)uVar21 < 8) {
      uVar18 = uVar21 + 1;
    }
    uVar21 = uVar18;
  } while (uVar18 != 8);
  iVar23 = iVar11;
  if (iVar9 <= iVar11) {
    iVar23 = iVar9;
  }
  if (iVar11 <= iVar9) {
    iVar11 = iVar9;
  }
  iVar9 = iVar10;
  if (iVar19 <= iVar10) {
    iVar9 = iVar19;
  }
  if (iVar10 <= iVar19) {
    iVar10 = iVar19;
  }
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  puVar3 = PTR_DAT_04bbbc20 + 0x10;
  puVar4 = PTR_DAT_04bbcf08 + 0x10;
  puVar5 = PTR_DAT_04bbc1a0 + 0x10;
  puVar6 = PTR_DAT_04bb3290 + 0x10;
  uVar21 = 0;
  do {
    local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,uVar21);
    if (uVar21 - 2 < 4) {
      local_2b0 = (undefined **)CONCAT44(local_2b0._4_4_,uVar21);
      if (uVar21 - 2 < 6) {
        uVar18 = (&DAT_041757a0)[(int)(uVar21 - 2)];
      }
      else {
        uVar18 = 0;
      }
      local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar18);
      pfVar8 = pfVar1 + (ulong)uVar18 * 0x10;
      if (6 < uVar18) {
        pfVar8 = pfVar1;
      }
      if (pfVar8[3] < *pfVar8) {
        return;
      }
      if (pfVar8[4] < pfVar8[1]) {
        return;
      }
      fVar28 = pfVar8[5];
      if (fVar28 < pfVar8[2]) {
        return;
      }
      pfVar8 = pfVar1 + (ulong)uVar18 * 0x10;
      if (6 < uVar18) {
        pfVar8 = pfVar1;
      }
      local_114 = uVar21;
      lVar14 = FUN_015002dc(&local_110,uVar21);
      iVar19 = iVar9;
      local_2bc = iVar10;
      switch(local_114) {
      case 3:
      case 5:
        iVar19 = iVar23;
        local_2bc = iVar11;
      case 2:
      case 4:
        iVar12 = *(int *)(lVar14 + 0xc);
        iVar26 = iVar12 + 8;
        iVar24 = iVar19;
        do {
          local_298 = 0;
          local_278 = 0;
          local_258 = 0;
          local_2b0 = &PTR_LAB_049a6ce8;
          local_2a8 = 0;
          uStack_2a0 = 0;
          local_288 = 0;
          local_280 = 0;
          local_268 = 0;
          uStack_260 = 0;
          local_250 = *(undefined2 *)PTR_DAT_04bb37e0;
          local_238 = 0;
          local_234 = 0;
          local_230 = 0;
          local_228 = 0;
          local_24e = PTR_DAT_04bb37e0[2];
          local_24d = PTR_DAT_04bb37e0[3];
          local_24c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
          cStack_23c = '\0';
          local_218 = 0;
          local_160[0] = 0;
          local_224 = *(uint *)PTR_DAT_04bb3238;
          uStack_1c4 = 0;
          local_1c0 = (undefined1 *)0x0;
          if (auStack_148 != (undefined1 *)0x0) {
            uStack_1c4 = 4;
            local_1c0 = auStack_148;
          }
          local_290 = puVar3;
          local_270 = puVar3;
          local_220 = puVar4;
          local_1b8 = local_1a8;
          local_1b0 = local_1a8;
          local_1a8[0] = local_190;
          local_190[0] = local_178;
          local_178[0] = local_160;
          local_128 = puVar2;
          local_120 = iVar24;
          iStack_11c = iVar12;
          uVar16 = FUN_014cb6a0(param_4,&local_2b0,&local_128,&local_114,0,1);
          if ((uVar16 & 1) != 0) {
            local_c8 = 0;
            puStack_e0 = PTR_DAT_04bb2010 + 0x10;
            local_c0 = PTR_DAT_04bbbc20 + 0x10;
            local_d8 = 0;
            local_b8 = (undefined4)local_288;
            fStack_b4 = (float)((ulong)local_288 >> 0x20);
            local_b0 = (undefined4)local_280;
            local_ac = local_280._4_4_;
            uStack_a8 = local_278;
            local_e8 = puVar5;
            puStack_d0 = puStack_e0;
            if (cStack_23c != '\0') {
              local_90 = 0;
              uStack_80 = 0;
              local_a0 = PTR_DAT_04bbc1a0 + 0x10;
              puStack_98 = puStack_e0;
              local_88 = puStack_e0;
              FUN_014edb38(&local_2b0,&local_a0,&local_290);
              local_b8 = FUN_014eda28(&local_a0,&local_288,&local_288);
              fStack_b4 = fVar28;
              local_b0 = param_3;
            }
            FUN_014edb38(&local_2b0,&local_e8,&local_c0);
            uVar22 = 0x3f800000;
            if ((int)pfVar8[10] <= (int)local_d8) {
              uVar22 = 0x3f800000;
              if ((int)local_c8 <= (int)pfVar8[0xe]) {
                uVar22 = 0x3f800000;
                if ((int)pfVar8[0xb] <= local_d8._4_4_) {
                  uVar22 = 0x3f800000;
                  if (local_c8._4_4_ <= (int)pfVar8[0xf]) {
                    uVar22 = 0;
                  }
                }
              }
            }
            FUN_014ee128(uVar22,&local_2b0,&local_f8);
            lVar14 = *(long *)PTR_DAT_04bb27c0;
            if (lVar14 != 0) {
              if ((((local_224 == 0) ||
                   (plVar25 = *(long **)(*(long *)(*(long *)(lVar14 + 0x1c0) + 8) +
                                        ((ulong)(local_224 >> 0x11) & 0x7ff8)),
                   plVar25 == (long *)0x0)) || ((*(uint *)(plVar25 + 0x49) >> 1 & 1) != 0)) ||
                 (*(uint *)(plVar25 + 0x46) != local_224)) {
                plVar25 = (long *)0x0;
              }
              if ((*(int *)(lVar14 + 0x288) == 1) || (*(int *)(lVar14 + 0x288) == -1)) {
                plVar17 = (long *)nn::os::GetTlsValue(*(undefined4 *)
                                                       (*(long *)PTR_DAT_04bb3350 + 0x68));
                lVar14 = *(long *)PTR_DAT_04bb27c0;
                iVar13 = (**(code **)(*plVar17 + 0x60))();
                if (iVar13 < 0x11) {
                  uVar18 = 1;
                }
                else {
                  if (4 < *(uint *)(lVar14 + 0x5e8)) goto LAB_014d1a8c;
                  uVar18 = 0x1aU >> (ulong)(*(uint *)(lVar14 + 0x5e8) & 0x1f) & 1;
                }
              }
              else {
LAB_014d1a8c:
                uVar18 = 0;
              }
              if (plVar25 != (long *)0x0) {
                lVar14 = plVar25[0x2a];
                if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                   (iVar13 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar13 != 0)) {
                  *(undefined **)PTR_DAT_04bb5920 = puVar6;
                  __cxa_guard_release(PTR_DAT_04bb5928);
                }
                uVar16 = (**(code **)(*plVar25 + 0x20))(plVar25,PTR_DAT_04bb5920);
                uVar7 = 0;
                if ((int)lVar14 == 1) {
                  uVar7 = uVar18;
                }
                if (((uVar16 & 1) != 0) && (uVar7 != 0)) {
                  if ((long *)plVar25[0x16] != plVar25 + 0x15) {
                    lVar14 = (long)*(int *)((long)plVar25 + 0xbc);
                    plVar17 = (long *)(plVar25[0x16] - lVar14);
                    do {
                      if (((*PTR_DAT_04bbcf38 & 1) == 0) &&
                         (iVar13 = __cxa_guard_acquire(PTR_DAT_04bbcf38), iVar13 != 0)) {
                        *(undefined ***)PTR_DAT_04bbcf30 = &PTR_LAB_049a6d08;
                        __cxa_guard_release(PTR_DAT_04bbcf38);
                      }
                      if ((plVar17 != (long *)0x0) &&
                         (uVar16 = (**(code **)(*plVar17 + 0x10))(plVar17,PTR_DAT_04bbcf30),
                         (uVar16 & 1) != 0)) {
                        FUN_0153dfac(plVar17);
                        break;
                      }
                      plVar17 = (long *)(*(long *)((long)plVar17 + lVar14 + 8) - lVar14);
                    } while (plVar17 != (long *)((long)(plVar25 + 0x15) - lVar14));
                  }
                }
              }
            }
          }
          if (iVar24 < local_2bc) {
            iVar24 = iVar24 + 1;
          }
          else {
            iVar12 = iVar12 + 1;
            iVar24 = iVar19;
          }
        } while ((iVar19 != iVar24) || (iVar26 != iVar12));
      }
    }
    uVar18 = 8;
    if ((int)uVar21 < 8) {
      uVar18 = uVar21 + 1;
    }
    uVar21 = uVar18;
    if (uVar18 == 8) {
      return;
    }
  } while( true );
}

