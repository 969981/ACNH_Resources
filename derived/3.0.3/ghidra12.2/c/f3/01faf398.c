
/* WARNING: Removing unreachable block (ram,0x01faf908) */
/* WARNING: Removing unreachable block (ram,0x01faf918) */
/* WARNING: Type propagation algorithm not settling */

bool FUN_01faf398(undefined *param_1,float *param_2,int *param_3,uint *param_4)

{
  uint *puVar1;
  int iVar2;
  undefined ***pppuVar3;
  undefined ***pppuVar4;
  byte *pbVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  bool bVar13;
  bool bVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  long *plVar19;
  ulong uVar20;
  int iVar21;
  long lVar22;
  undefined **ppuVar23;
  int iVar24;
  ulong uVar25;
  long *plVar26;
  undefined8 *puVar27;
  undefined8 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float local_2b0;
  float local_2ac;
  undefined8 local_298;
  undefined *local_288;
  undefined8 *local_280;
  undefined **local_278;
  undefined8 local_270;
  undefined ***local_268;
  undefined **local_260;
  undefined8 uStack_258;
  uint local_24c;
  undefined1 local_248 [4];
  int local_244;
  undefined8 local_240;
  float local_238;
  undefined **local_228;
  undefined8 local_220;
  undefined **local_218;
  undefined8 local_210;
  undefined **local_208;
  int local_200;
  int iStack_1fc;
  undefined **local_1f8;
  int local_1f0;
  int iStack_1ec;
  ulong local_1e4;
  float local_1dc;
  undefined *local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined4 local_1ac;
  uint local_1a8 [2];
  undefined4 local_1a0;
  undefined4 local_19c;
  undefined *local_198;
  undefined *puStack_190;
  undefined8 local_188;
  undefined *puStack_180;
  undefined8 local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined *puStack_160;
  undefined1 *local_158;
  undefined4 local_150;
  undefined1 local_14c [63];
  undefined1 local_10d;
  undefined *local_108;
  char *local_100;
  undefined4 local_f8;
  char local_f4 [63];
  undefined1 local_b5;
  undefined8 local_b0;
  
  puVar6 = PTR_DAT_04bb27c0;
  lVar22 = *(long *)PTR_DAT_04bb27c0;
  if (lVar22 == 0) {
    return false;
  }
  uVar16 = *param_4;
  if ((((uVar16 == 0) ||
       (plVar26 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                            ((ulong)(uVar16 >> 0x11) & 0x7ff8)), plVar26 == (long *)0x0)) ||
      ((*(uint *)(plVar26 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar26 + 0x46) != uVar16)) {
    plVar26 = (long *)0x0;
  }
  if (*(int *)(lVar22 + 0x288) == 1 || *(int *)(lVar22 + 0x288) == -1) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar22 = *(long *)puVar6;
    iVar15 = (**(code **)(*plVar19 + 0x60))();
    pbVar5 = PTR_DAT_04bb37d8;
    if (iVar15 < 0x11) {
      uVar16 = 1;
    }
    else {
      if (4 < *(uint *)(lVar22 + 0x5e8)) goto LAB_01faf47c;
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar22 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_01faf47c:
    uVar16 = 0;
    pbVar5 = PTR_DAT_04bb37d8;
  }
  if (plVar26 == (long *)0x0) {
    PTR_DAT_04bb37d8 = pbVar5;
    return false;
  }
  lVar22 = plVar26[0x2a];
  PTR_DAT_04bb37d8 = pbVar5;
  if (((*pbVar5 & 1) == 0) && (iVar15 = __cxa_guard_acquire(pbVar5), iVar15 != 0)) {
    *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb37d8);
  }
  puVar8 = PTR_DAT_04bb37d0;
  uVar20 = (**(code **)(*plVar26 + 0x20))(plVar26,PTR_DAT_04bb37d0);
  uVar17 = 0;
  if ((int)lVar22 == 1) {
    uVar17 = uVar16;
  }
  if ((uVar20 & 1) == 0) {
    return false;
  }
  if (uVar17 == 0) {
    return false;
  }
  puVar27 = (undefined8 *)plVar26[0x77];
  if (((*PTR_DAT_04bb6710 & 1) == 0) &&
     (iVar15 = __cxa_guard_acquire(PTR_DAT_04bb6710), iVar15 != 0)) {
    *(undefined **)PTR_DAT_04bb6708 = PTR_DAT_04bb6718 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb6710);
  }
  if (puVar27 == (undefined8 *)0x0) {
    return false;
  }
  uVar20 = (**(code **)*puVar27)(puVar27,PTR_DAT_04bb6708);
  puStack_1d0 = PTR_DAT_04bb2010;
  if ((uVar20 & 1) == 0) {
    return false;
  }
  local_178 = 0;
  uStack_170 = 0;
  local_158 = local_14c;
  local_1a8[0] = 0;
  local_10d = 0;
  local_14c[0] = 0;
  local_198 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_190 = PTR_DAT_04bb2010 + 0x10;
  local_188 = 0;
  local_150 = 0x40;
  local_1a0 = *(undefined4 *)PTR_DAT_04bb37e0;
  local_19c = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
  local_100 = local_f4;
  local_f8 = 0x40;
  puStack_160 = PTR_DAT_04bb2bc0 + 0x10;
  local_b5 = 0;
  local_f4[0] = '\0';
  local_b0 = 0;
  local_168 = 0;
  puStack_180 = puStack_190;
  local_108 = puStack_160;
  uVar20 = FUN_01fa2a90(puVar27,local_1a8);
  puVar9 = PTR_DAT_04bb5ce0;
  puVar7 = PTR_DAT_04bb2720;
  if ((uVar20 & 1) == 0) {
    return false;
  }
  if (*local_100 == '\0') {
    return false;
  }
  puStack_1d0 = puStack_1d0 + 0x10;
  local_1b8 = 0;
  local_1c8 = 0;
  local_1ac = *(undefined4 *)(*(long *)(param_1 + 8) + 0x230);
  local_1d8 = PTR_DAT_04bbc1a0 + 0x10;
  local_1c0 = puStack_1d0;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar22 = *(long *)PTR_DAT_04bb2720, lVar22 == 0)) ||
     (*(long *)(lVar22 + 0x330) == 0)) {
LAB_01faf670:
    lVar22 = *(long *)PTR_DAT_04bb59d8;
    if (lVar22 != 0) {
      iVar18 = *(int *)(lVar22 + 0x2c);
      local_1c8 = *(undefined8 *)(lVar22 + 0x28);
      iVar15 = *(int *)(lVar22 + 0x38);
      iVar21 = *(int *)(lVar22 + 0x3c);
      local_298 = CONCAT44(*(undefined4 *)(lVar22 + 0x28),iVar15);
      goto LAB_01faf69c;
    }
    iVar18 = 0;
    iVar21 = 0;
    local_298 = 0;
  }
  else {
    puVar27 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
    iVar15 = FUN_006bd550(*puVar27,0);
    if (((iVar15 != 0x758f7eaf) || (*(long *)puVar7 == 0)) ||
       ((lVar22 = *(long *)(*(long *)puVar7 + 0x330), lVar22 == 0 || (*(int *)(lVar22 + 0x244) == 0)
        ))) goto LAB_01faf670;
    lVar22 = *(long *)puVar9;
    if (lVar22 == 0) {
      iVar15 = 0;
      iVar21 = 0;
      iVar24 = 0x10;
      iVar18 = 0x10;
    }
    else {
      iVar15 = *(int *)(lVar22 + 0xd88);
      iVar21 = *(int *)(lVar22 + 0xd8c);
      iVar18 = *(int *)(lVar22 + 0xd98);
      iVar24 = *(int *)(lVar22 + 0xd9c);
    }
    iVar2 = iVar15;
    if (iVar18 <= iVar15) {
      iVar2 = iVar18;
    }
    if (iVar15 <= iVar18) {
      iVar15 = iVar18;
    }
    local_298 = CONCAT44(iVar2,iVar15);
    iVar18 = iVar21;
    if (iVar24 <= iVar21) {
      iVar18 = iVar24;
    }
    if (iVar21 <= iVar24) {
      iVar21 = iVar24;
    }
    local_1c8 = CONCAT44(iVar18,iVar2);
LAB_01faf69c:
    local_1b8 = CONCAT44(iVar21,iVar15);
  }
  local_1e4 = 0;
  puVar1 = (uint *)(param_1 + 0xafb0);
  local_1dc = 0.0;
  lVar22 = *(long *)PTR_DAT_04bb4e28;
  iVar15 = FUN_03722560(lVar22,plVar26 + 0x7c);
  puVar7 = PTR_DAT_04bb43c0;
  fVar36 = 0.0;
  if ((iVar15 == -1) ||
     (lVar22 = *(long *)(*(long *)(lVar22 + 0xe8) + (long)iVar15 * 8),
     (*(ushort *)(lVar22 + 0x114) >> 9 & 1) == 0)) {
    iVar15 = 0;
    fVar37 = 0.0;
  }
  else {
    fVar37 = *(float *)(lVar22 + 0x104);
    local_1e4 = *(ulong *)(lVar22 + 0x104);
    fVar36 = *(float *)(lVar22 + 0x10c);
    iVar15 = *(int *)(lVar22 + 0x110);
    local_1dc = fVar36;
  }
  if ((int)local_b0 == 2) {
    iVar11 = local_178._4_4_;
    local_228 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
    iVar10 = (int)local_178;
    iVar2 = local_188._4_4_;
    iVar24 = (int)local_188;
    iVar15 = (int)local_178 + (int)local_188;
    if (iVar15 < 0 != SCARRY4((int)local_178,(int)local_188)) {
      iVar15 = iVar15 + 1;
    }
    local_200 = (iVar15 >> 1) + 1;
    local_220 = (undefined **)CONCAT44((int)(float)(local_178._4_4_ + 2),local_200);
    iVar15 = local_178._4_4_ + local_188._4_4_;
    if (iVar15 < 0 != SCARRY4(local_178._4_4_,local_188._4_4_)) {
      iVar15 = iVar15 + 1;
    }
    iStack_1ec = (iVar15 >> 1) + 1;
    local_210 = (undefined **)CONCAT44(iStack_1ec,(int)(float)((int)local_178 + 2));
    iStack_1fc = (int)(float)(local_188._4_4_ + -1);
    local_1f0 = (int)(float)((int)local_188 + -1);
    lVar22 = *(long *)PTR_DAT_04bb43c0;
    local_218 = local_228;
    local_208 = local_228;
    local_1f8 = local_228;
    uVar16 = FUN_0277d6c4(&local_1a0);
    if (*(long *)puVar7 == 0) {
      return false;
    }
    lVar22 = *(long *)(lVar22 + 0x57e58);
    uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar22 + 0x1f8);
    if (*(uint *)(lVar22 + 0x1d8) <= uVar16) {
      return false;
    }
    if (*(long *)(*(long *)(lVar22 + 0x1e0) + (long)(int)uVar16 * 8) == 0) {
      return false;
    }
    FUN_01ad5d04(&local_240,&local_1a0);
    local_244 = FUN_01b0e240(&local_240);
    puVar6 = PTR_DAT_04bb27a8;
    if (local_244 - 1U < 2) {
      return false;
    }
    fVar31 = 0.0;
    fVar38 = (float)iVar21 * 5.0 + 5.0;
    local_248[0] = 0;
    fVar40 = (float)iVar18 * 5.0;
    fVar33 = (float)(int)local_298 * 5.0 + 5.0;
    fVar34 = ((float)iVar24 * 5.0 + (float)iVar10 * 5.0 + 5.0) * 0.5;
    fVar29 = ((float)iVar2 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5;
    local_2b0 = 0.0;
    local_2ac = 0.0;
    uVar16 = 0;
    do {
      local_24c = uVar16;
      local_288 = (undefined *)((ulong)local_288 & 0xffffffff00000000);
      pppuVar4 = &local_228 + (ulong)uVar16 * 2;
      pppuVar3 = pppuVar4;
      if (3 < uVar16) {
        pppuVar3 = &local_228;
      }
      local_278 = *(undefined ***)(*(long *)puVar6 + 0x1f8);
      if (3 < uVar16) {
        pppuVar4 = &local_228;
      }
      iVar15 = *(int *)(pppuVar4 + 1);
      iVar18 = *(int *)((long)pppuVar4 + 0xc);
      local_270 = (undefined **)(*(long *)PTR_DAT_04bb27c8 + 0x28);
      uVar20 = FUN_035aa210(iVar15 + -1,iVar18 + -1,&local_278);
      if (((((uVar20 & 1) == 0) ||
           (uVar20 = FUN_035aa210(iVar15 + -1,iVar18,&local_278), (uVar20 & 1) == 0)) ||
          (uVar20 = FUN_035aa210(iVar15,iVar18 + -1,&local_278), (uVar20 & 1) == 0)) ||
         (uVar20 = FUN_035aa210(iVar15,iVar18,&local_278), (uVar20 & 1) == 0)) {
LAB_01fafa44:
      }
      else {
        local_288 = (undefined *)((ulong)local_288 & 0xffffffffffffff00);
        local_278 = &PTR_FUN_04a699f8;
        local_270 = (undefined **)&local_1ac;
        local_268 = pppuVar3;
        local_260 = &local_288;
        iVar15 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
        if (iVar15 != 0) {
          lVar22 = (long)iVar15 << 3;
          puVar27 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
          do {
            uVar20 = (*(code *)*local_278)(&local_278,*puVar27);
            lVar22 = lVar22 + -8;
            puVar27 = puVar27 + 1;
          } while (lVar22 != 0);
          if ((char)local_288 != '\0') goto LAB_01fafa44;
        }
        fVar41 = (float)*(int *)(pppuVar4 + 1) * 5.0;
        local_278 = (undefined **)(ulong)(uint)fVar41;
        fVar39 = (float)*(int *)((long)pppuVar4 + 0xc) * 5.0;
        local_270 = (undefined **)CONCAT44(local_270._4_4_,fVar39);
        bVar12 = false;
        if (((float)local_298._4_4_ * 5.0 <= fVar41) &&
           (bVar12 = false, !NAN(fVar41) && !NAN(fVar33))) {
          bVar12 = fVar41 < fVar33;
        }
        bVar13 = false;
        bVar14 = true;
        if (bVar12) {
          bVar13 = false;
          bVar14 = true;
          if (!NAN(fVar40) && !NAN(fVar39)) {
            bVar13 = fVar40 == fVar39;
            bVar14 = fVar39 <= fVar40;
          }
        }
        bVar12 = false;
        if ((!bVar14 || bVar13) && (bVar12 = false, !NAN(fVar39) && !NAN(fVar38))) {
          bVar12 = fVar39 < fVar38;
        }
        if ((!bVar12) ||
           (uVar20 = FUN_01fb0064(uVar20,&local_278,&local_1a0,&local_198,&local_244),
           (uVar20 & 1) == 0)) goto LAB_01fafa44;
        FUN_01fb0324(local_248,local_24c);
        uVar20 = FUN_0180ade0();
        if (((uVar20 & 1) == 0) && (local_24c != 0)) {
          fVar32 = fVar29 - fVar39;
          fVar30 = -((fVar34 - fVar41) * (fVar36 - fVar39));
          fVar35 = fVar30 + (fVar37 - fVar41) * fVar32;
          fVar30 = -(fVar32 * (fVar37 - fVar41)) - fVar30;
          if (0.0 <= fVar35) {
            fVar30 = fVar35;
          }
          bVar12 = true;
          if ((0.0 <= fVar35) && (bVar12 = false, !NAN(fVar30))) {
            bVar12 = fVar30 < 1.1920929e-07;
          }
          if (bVar12) goto LAB_01fafac8;
LAB_01fafadc:
          fVar31 = fVar39;
          local_2b0 = fVar41;
          local_2ac = fVar41;
        }
        else {
LAB_01fafac8:
          if ((local_2ac == 0.0) && (fVar31 == 0.0)) goto LAB_01fafadc;
        }
      }
      uVar17 = 4;
      if ((int)uVar16 < 4) {
        uVar17 = uVar16 + 1;
      }
      uVar16 = uVar17;
      if (uVar17 == 4) {
        iVar15 = FUN_01fc7458(local_248);
        if (iVar15 == 0) {
          return false;
        }
        param_2[1] = 0.0;
        param_2[2] = fVar31;
        *param_2 = local_2ac;
        iVar18 = FUN_006f0400(fVar34 - local_2b0,fVar29 - fVar31);
        *param_3 = iVar18;
        *puVar1 = *puVar1 | 0x200;
        *(uint *)(param_1 + 0x12088) = *param_4;
        return iVar15 != 0;
      }
    } while( true );
  }
  lVar22 = *(long *)puVar6;
  if (lVar22 == 0) {
    return false;
  }
  if ((((local_1a8[0] == 0) ||
       (plVar26 = *(long **)(*(long *)(*(long *)(lVar22 + 0x1c0) + 8) +
                            ((ulong)(local_1a8[0] >> 0x11) & 0x7ff8)), plVar26 == (long *)0x0)) ||
      ((*(uint *)(plVar26 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar26 + 0x46) != local_1a8[0])) {
    plVar26 = (long *)0x0;
  }
  if ((*(int *)(lVar22 + 0x288) == 1) || (*(int *)(lVar22 + 0x288) == -1)) {
    plVar19 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar22 = *(long *)puVar6;
    iVar18 = (**(code **)(*plVar19 + 0x60))();
    if (iVar18 < 0x11) {
      uVar16 = 1;
      goto LAB_01fafb90;
    }
    if (*(uint *)(lVar22 + 0x5e8) < 5) {
      uVar16 = 0x1aU >> (ulong)(*(uint *)(lVar22 + 0x5e8) & 0x1f) & 1;
      goto LAB_01fafb90;
    }
  }
  uVar16 = 0;
LAB_01fafb90:
  if (plVar26 != (long *)0x0) {
    lVar22 = plVar26[0x2a];
    if (((*pbVar5 & 1) == 0) && (iVar18 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar18 != 0)) {
      *(undefined **)puVar8 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar20 = (**(code **)(*plVar26 + 0x20))(plVar26,PTR_DAT_04bb37d0);
    uVar17 = 0;
    if ((int)lVar22 == 1) {
      uVar17 = uVar16;
    }
    if ((uVar20 & 1) == 0) {
      return false;
    }
    if (uVar17 == 0) {
      return false;
    }
    lVar22 = FUN_01fa2530(plVar26);
    if (lVar22 != 0) {
      if ((int)local_b0 == 0) {
        local_218 = (undefined **)0x0;
        local_268 = (undefined ***)0x0;
        local_278 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
        local_270 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
        local_208 = (undefined **)0x0;
        local_240._0_4_ = (float)(iVar15 + 0x40000000);
        uStack_258 = 0;
        local_260 = local_270;
        local_228 = local_278;
        local_220 = local_270;
        local_210 = local_270;
        FUN_01fa3144(&local_228,&local_1e4,&local_240);
        local_240 = (undefined *)CONCAT44(local_240._4_4_,iVar15 + -0x40000000);
        FUN_01fa3144(&local_278,&local_1e4,&local_240);
        FUN_01a4f4bc(&local_240);
        local_240 = PTR_DAT_04bb3140 + 0x10;
        local_288 = param_1;
        local_280 = &local_240;
        uVar16 = FUN_01fb0380(&local_288,&local_228);
        uVar20 = FUN_01fb0380(&local_288,&local_278);
        uVar25 = uVar20 & 0xffffffff;
        uVar28 = 3;
        if (((uVar16 & 1) != 0) && ((uVar20 & 1) != 0)) {
          return false;
        }
      }
      else {
        uVar25 = 0;
        uVar16 = 0;
        uVar28 = 2;
      }
      puVar6 = PTR_DAT_04bb2010;
      local_238 = 0.0;
      local_240 = (undefined *)0x0;
      local_280 = (undefined8 *)((ulong)local_280 & 0xffffffff00000000);
      local_288 = (undefined *)0x0;
      local_228._0_4_ = iVar15 + 0x40000000;
      FUN_01fa3288(&local_288,&local_1e4,&local_228,uVar28);
      local_228 = (undefined **)CONCAT44(local_228._4_4_,iVar15 + -0x40000000);
      FUN_01fa3288(&local_240,&local_1e4,&local_228,uVar28);
      uVar17 = FUN_012e2100(&local_1d8,&local_288);
      uVar20 = FUN_012e2100(&local_1d8,&local_240);
      fVar37 = local_238;
      fVar31 = local_288._0_4_;
      local_278 = (undefined **)(puVar6 + 0x10);
      fVar29 = local_280._0_4_;
      fVar36 = (float)local_240;
      local_220 = (undefined **)
                  CONCAT44((int)((float)(int)local_280._0_4_ / 5.0) - (uint)(local_280._0_4_ < 0.0),
                           (int)((float)(int)local_288._0_4_ / 5.0) - (uint)(local_288._0_4_ < 0.0))
      ;
      local_270 = (undefined **)
                  CONCAT44((int)((float)(int)local_238 / 5.0) - (uint)(local_238 < 0.0),
                           (int)((float)(int)(float)local_240 / 5.0) -
                           (uint)((float)local_240 < 0.0));
      local_228 = local_278;
      if (((((uVar25 & 1) == 0) && ((uVar20 & 1) != 0)) &&
          (uVar20 = FUN_01fadef8(uVar20,&local_278), (uVar20 & 1) != 0)) &&
         (uVar20 = FUN_01faffe0(&local_1ac,&local_278), (uVar20 & 1) == 0)) {
        ppuVar23 = (undefined **)&local_240;
      }
      else {
        if (((uVar16 | uVar17 ^ 1) & 1) != 0) {
          return false;
        }
        uVar20 = FUN_01fadef8(uVar20,&local_228);
        if ((uVar20 & 1) == 0) {
          return false;
        }
        uVar20 = FUN_01faffe0(&local_1ac,&local_228);
        if ((uVar20 & 1) != 0) {
          return false;
        }
        ppuVar23 = &local_288;
        fVar36 = fVar31;
        fVar37 = fVar29;
      }
      fVar31 = *(float *)((long)ppuVar23 + 4);
      param_2[2] = fVar37;
      *param_2 = fVar36;
      param_2[1] = fVar31;
      if ((int)local_b0 == 0) {
        iVar15 = FUN_006f0400(local_1e4 & 0xffffffff,local_1dc);
      }
      *param_3 = iVar15;
      *puVar1 = *puVar1 | 0x200;
      *(uint *)(param_1 + 0x12088) = *param_4;
      return true;
    }
  }
  return false;
}

