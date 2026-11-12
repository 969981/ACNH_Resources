
/* WARNING: Type propagation algorithm not settling */

void FUN_0093fb30(long param_1,long param_2)

{
  MutexType *pMVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint uVar5;
  uint *puVar6;
  float *pfVar7;
  undefined8 uVar8;
  float *pfVar9;
  int iVar10;
  int iVar11;
  char cVar12;
  char cVar13;
  char cVar14;
  short sVar15;
  uint uVar16;
  int iVar17;
  float *pfVar18;
  uint *puVar19;
  bool bVar20;
  bool bVar21;
  bool bVar22;
  bool bVar23;
  bool bVar24;
  byte bVar25;
  int iVar26;
  uint uVar27;
  int iVar28;
  ulong uVar29;
  float *pfVar30;
  byte bVar31;
  long *plVar32;
  long *plVar33;
  float *pfVar34;
  long lVar35;
  uint *puVar36;
  undefined *puVar37;
  undefined *puVar38;
  long lVar39;
  ulong uVar40;
  uint uVar41;
  int *piVar42;
  ulong uVar43;
  ulong uVar44;
  uint uVar45;
  ulong uVar46;
  int iVar47;
  int iVar48;
  int iVar49;
  ulong uVar50;
  ulong uVar51;
  ulong uVar52;
  byte bVar53;
  uint uVar54;
  long lVar55;
  long *plVar56;
  undefined8 *puVar57;
  char cVar58;
  long lVar59;
  uint uVar60;
  undefined4 uVar61;
  float fVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float fVar67;
  float fVar68;
  float fVar69;
  float fVar70;
  float fVar71;
  float fVar72;
  float fVar73;
  float fVar74;
  float fVar75;
  undefined8 local_1f8;
  float local_19c;
  uint local_17c;
  undefined8 local_178;
  float local_170;
  float fStack_16c;
  uint *local_168;
  undefined8 local_160;
  float local_158;
  int iStack_154;
  float local_150;
  float local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  float local_130;
  uint uStack_12c;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  undefined *local_110;
  undefined8 local_108;
  undefined1 local_d5;
  undefined8 local_d0;
  float local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined8 local_b8;
  float local_b0;
  
  pMVar1 = (MutexType *)(param_1 + 0x28);
  puVar6 = (uint *)(param_2 + 0x4c9c);
  nn::os::LockMutex(pMVar1);
  lVar39 = param_1 + 0x48;
  if (*(long *)(param_1 + 0x50) != lVar39) {
    lVar55 = (long)*(int *)(param_1 + 0x5c);
    plVar56 = (long *)(*(long *)(param_1 + 0x50) - lVar55);
    do {
      if ((((*(char *)(param_1 + 0x60) != '\0') || (*(char *)((long)plVar56 + 0x24) == '\0')) &&
          ((*(uint *)((long)plVar56 + 0x1c) == 0 ||
           ((*(uint *)((long)plVar56 + 0x1c) & *(uint *)(param_2 + 0x4ca0)) != 0)))) &&
         (*(uint *)(plVar56 + 3) != *puVar6)) {
        (**(code **)(*plVar56 + 0x48))(plVar56,param_2);
      }
      plVar56 = (long *)(*(long *)((long)plVar56 + lVar55 + 8) - lVar55);
    } while (plVar56 != (long *)(lVar39 - lVar55));
  }
  nn::os::UnlockMutex(pMVar1);
  local_c8 = 0.0;
  fVar63 = (float)((int)((float)(int)*(float *)(param_2 + 0x4ca4) / 5.0) -
                  (uint)(*(float *)(param_2 + 0x4ca4) < 0.0));
  uVar41 = (int)((float)(int)*(float *)(param_2 + 0x4cac) / 5.0) -
           (uint)(*(float *)(param_2 + 0x4cac) < 0.0);
  fVar65 = (float)((int)((float)(int)*(float *)(param_2 + 0x4cb0) / 5.0) -
                  (uint)(*(float *)(param_2 + 0x4cb0) < 0.0));
  fVar62 = fVar63;
  if ((int)fVar65 <= (int)fVar63) {
    fVar62 = fVar65;
  }
  if ((int)fVar63 <= (int)fVar65) {
    fVar63 = fVar65;
  }
  uVar45 = (int)((float)(int)*(float *)(param_2 + 0x4cb8) / 5.0) -
           (uint)(*(float *)(param_2 + 0x4cb8) < 0.0);
  uVar60 = uVar41;
  if ((int)uVar45 <= (int)uVar41) {
    uVar60 = uVar45;
  }
  if ((int)uVar41 <= (int)uVar45) {
    uVar41 = uVar45;
  }
  lVar55 = *(long *)PTR_DAT_04bb2720;
  if (lVar55 == 0) {
    puVar57 = &DAT_055c04a0;
  }
  else {
    puVar57 = &DAT_055c04a0;
    if (*(long *)(lVar55 + 0x330) != 0) {
      puVar57 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar55 + 0x338));
      iVar26 = FUN_006bd550(*puVar57,0);
      puVar57 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar26 != 0x758f7eaf) {
        puVar57 = &DAT_055c04a0;
      }
    }
  }
  local_c4 = *(undefined4 *)(puVar57 + 7);
  local_c0 = FUN_017baf44();
  local_c0 = local_c0 & 1;
  local_d0 = PTR_DAT_04bb3140 + 0x10;
  iVar26 = ((int)fVar63 - (int)fVar62) + 1;
  if (iVar26 < 0xd) {
    uVar45 = uVar41 + 1;
    iVar17 = uVar45 - uVar60;
    if (iVar17 < 0xd) {
      *(float *)(param_2 + 0x4d20) = fVar63;
      *(uint *)(param_2 + 0x4d24) = uVar41;
      *(undefined8 *)(param_2 + 0x4c80) = 0;
      *(float *)(param_2 + 0x4d10) = fVar62;
      *(uint *)(param_2 + 0x4d14) = uVar60;
      lVar55 = param_2 + 0x4c80;
      *(undefined4 *)(param_2 + 0x4c90) = 0;
      puVar4 = PTR_DAT_04bb6298;
      *(undefined8 *)(param_2 + 0x4c88) = 0;
      sVar15 = *(short *)puVar4;
      if (sVar15 == -1) {
        local_19c = 0.0;
      }
      else {
        local_128 = (undefined *)CONCAT44(local_128._4_4_,4);
        puVar36 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
        if (0xff < (uint)(int)sVar15) {
          puVar36 = (uint *)PTR_DAT_04bc39f8;
        }
        local_19c = (float)(*puVar36 >> 4 & 1);
      }
      if (uVar45 != uVar60) {
        pfVar7 = (float *)(param_2 + 0x24ec);
        puVar4 = PTR_DAT_04bb2010 + 0x10;
        puVar38 = PTR_DAT_04bc0510 + 0x10;
        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
        local_1f8 = 0x80100;
        puVar3 = PTR_DAT_04bb3290 + 0x10;
        fVar65 = fVar62;
        uVar41 = uVar60;
        do {
          uVar27 = (int)fVar65 - (int)fVar62;
          uVar54 = uVar41 - uVar60;
          local_138 = puVar4;
          local_130 = fVar65;
          uStack_12c = uVar41;
          if ((((0xb < uVar54) || (0xb < uVar27)) ||
              (uVar16 = uVar27 + uVar54 * 0xc,
              (*(uint *)(lVar55 + (ulong)(uVar16 >> 5) * 4) >> (ulong)(uVar16 & 0x1f) & 1) == 0)) ||
             (*(char *)(param_2 + 0x4cf9) != '\0')) {
            local_148 = PTR_DAT_04bb2010 + 0x10;
            local_140 = 0;
            pfVar30 = (float *)FUN_01a5190c(&local_d0,0,&local_138,&local_148);
            local_150 = *pfVar30;
            local_14c = pfVar30[1];
            fVar64 = (float)0;
            if (*(short *)pfVar30 == -2) {
              fVar64 = local_19c;
            }
            if (fVar64 == 1.4013e-45) {
              if (((0xb < uVar27) || (0xb < uVar54 + 1)) ||
                 ((uVar27 = uVar27 + (uVar54 + 1) * 0xc,
                  (*(uint *)(lVar55 + (ulong)(uVar27 >> 5) * 4) >> (ulong)(uVar27 & 0x1f) & 1) == 0
                  || (*(char *)(param_2 + 0x4cf9) != '\0')))) {
                local_160 = PTR_DAT_04bb2010 + 0x10;
                iStack_154 = uStack_12c + 1;
                local_158 = local_130;
                pfVar30 = (float *)FUN_01a5190c(&local_d0,0,&local_160,&local_148);
                puVar37 = PTR_DAT_04bb43c0;
                local_150 = *pfVar30;
                local_14c = pfVar30[1];
                lVar59 = *(long *)PTR_DAT_04bb43c0;
                uVar27 = FUN_0277d6c4(&local_150);
                lVar35 = *(long *)puVar37;
                if (lVar35 != 0) {
                  lVar59 = *(long *)(lVar59 + 0x57e58);
                  uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar59 + 0x1f8);
                  if ((uVar27 < *(uint *)(lVar59 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar59 + 0x1e0) + (long)(int)uVar27 * 8) != 0)) {
                    local_168 = (uint *)0x0;
                    local_170 = local_150;
                    fStack_16c = local_14c;
                    local_178 = puVar38;
                    uVar27 = FUN_0277d6c4(&local_170);
                    if (*(long *)PTR_DAT_04bb43c0 != 0) {
                      lVar35 = *(long *)(lVar35 + 0x57e58);
                      uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                      if ((uVar27 < *(uint *)(lVar35 + 0x1d8)) &&
                         (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar27 * 8) != 0)) {
                        lVar35 = *(long *)PTR_DAT_04bc0428;
                        uVar27 = FUN_0277d6c4(&local_150);
                        uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                        if (uVar27 < *(uint *)(lVar35 + 0x1d8)) {
                          puVar36 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar27 * 8);
                          if (puVar36 != (uint *)0x0) {
                            local_168 = puVar36;
                          }
                        }
                      }
                    }
                    uVar29 = FUN_01ae59b0(&local_178);
                    if ((uVar29 & 1) != 0) {
                      local_118 = 0;
                      local_120 = PTR_DAT_04bb2010 + 0x10;
                      local_108 = 0;
                      local_128 = puVar2;
                      local_110 = local_120;
                      FUN_01afb480(&local_178,&local_128);
                      if (local_108._4_4_ == local_118._4_4_) goto LAB_00940270;
                    }
                  }
                }
              }
            }
            else {
LAB_00940270:
              puVar37 = PTR_DAT_04bb43c0;
              lVar59 = *(long *)PTR_DAT_04bb43c0;
              uVar27 = FUN_0277d6c4(&local_150);
              lVar35 = *(long *)puVar37;
              if (lVar35 != 0) {
                lVar59 = *(long *)(lVar59 + 0x57e58);
                uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar59 + 0x1f8);
                if ((uVar27 < *(uint *)(lVar59 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar59 + 0x1e0) + (long)(int)uVar27 * 8) != 0)) {
                  local_168 = (uint *)0x0;
                  local_178 = PTR_DAT_04bc0510 + 0x10;
                  local_170 = local_150;
                  fStack_16c = local_14c;
                  uVar27 = FUN_0277d6c4(&local_170);
                  if (*(long *)PTR_DAT_04bb43c0 != 0) {
                    lVar35 = *(long *)(lVar35 + 0x57e58);
                    uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                    if ((uVar27 < *(uint *)(lVar35 + 0x1d8)) &&
                       (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar27 * 8) != 0)) {
                      lVar35 = *(long *)PTR_DAT_04bc0428;
                      uVar27 = FUN_0277d6c4(&local_150);
                      uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                      if (uVar27 < *(uint *)(lVar35 + 0x1d8)) {
                        puVar36 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar27 * 8);
                        if (puVar36 != (uint *)0x0) {
                          local_168 = puVar36;
                        }
                      }
                    }
                  }
                  uVar29 = FUN_01ae59b0(&local_178);
                  if ((uVar29 & 1) == 0) goto LAB_00941310;
                  puVar36 = (uint *)FUN_014fbd50(&local_d0,0,&local_148);
                  if ((*(long *)PTR_DAT_04bb27c0 == 0) || (uVar27 = *puVar36, uVar27 == 0)) {
LAB_00940660:
                    plVar56 = (long *)0x0;
LAB_0094066c:
                    bVar21 = false;
                    uVar54 = 0;
                    uVar27 = 1;
                  }
                  else {
                    plVar56 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8)
                                        + ((ulong)(uVar27 >> 0x11) & 0x7ff8));
                    if (plVar56 == (long *)0x0) goto LAB_0094066c;
                    if (((*(uint *)(plVar56 + 0x49) >> 1 & 1) != 0) ||
                       (*(uint *)(plVar56 + 0x46) != uVar27)) goto LAB_00940660;
                    bVar21 = (int)plVar56[0x2a] == 1;
                    uVar27 = *(uint *)(plVar56 + 0x49);
                    if (((*PTR_DAT_04bb5928 & 1) == 0) &&
                       (iVar28 = __cxa_guard_acquire(PTR_DAT_04bb5928), iVar28 != 0)) {
                      *(undefined **)PTR_DAT_04bb5920 = puVar3;
                      __cxa_guard_release(PTR_DAT_04bb5928);
                    }
                    uVar54 = uVar27 >> 4 & 1;
                    uVar27 = (**(code **)(*plVar56 + 0x20))(plVar56,PTR_DAT_04bb5920);
                    uVar27 = uVar27 & 1;
                  }
                  local_118 = 0;
                  local_128 = PTR_DAT_04bbc1a0 + 0x10;
                  local_120 = PTR_DAT_04bb2010 + 0x10;
                  local_108 = 0;
                  local_110 = local_120;
                  FUN_01afb480(&local_178,&local_128);
                  if (local_108._4_4_ + 1 != local_118._4_4_) {
                    iVar28 = local_118._4_4_;
                    iVar49 = (int)local_118;
                    do {
                      uVar16 = (iVar49 - (int)fVar62) + (int)(float)local_140;
                      if (((((-1 < (int)uVar16) && ((int)uVar16 < iVar26)) &&
                           (uVar5 = (iVar28 - uVar60) + local_140._4_4_, -1 < (int)uVar5)) &&
                          (((int)uVar5 < iVar17 && (uVar5 < 0xc)))) && (uVar16 < 0xc)) {
                        uVar16 = uVar16 + uVar5 * 0xc;
                        lVar35 = (ulong)(uVar16 >> 5) * 4;
                        *(uint *)(lVar55 + lVar35) =
                             *(uint *)(lVar55 + lVar35) | 1 << (ulong)(uVar16 & 0x1f);
                      }
                      if (iVar49 < (int)local_108) {
                        iVar49 = iVar49 + 1;
                      }
                      else {
                        iVar28 = iVar28 + 1;
                        iVar49 = (int)local_118;
                      }
                    } while (((int)local_118 != iVar49) || (local_108._4_4_ + 1 != iVar28));
                  }
                  if (((plVar56 == (long *)0x0) || (((!bVar21 || (uVar27 == 0)) || (uVar54 == 0))))
                     || ((*(uint *)((long)plVar56 + 0x484) != 0 &&
                         ((*(uint *)((long)plVar56 + 0x484) & *(uint *)(param_2 + 0x4ca0)) == 0))))
                  {
LAB_00940770:
                    puVar36 = local_168;
                    fVar64 = 0.0;
                    if ((local_168 != (uint *)0x0) && (uVar27 = *local_168, uVar27 != 0)) {
                      cVar58 = *PTR_DAT_04bbfe88;
                      do {
                        if (cVar58 == '\0') {
                          cVar58 = '\x01';
                          *PTR_DAT_04bbfe88 = 1;
                          memset(PTR_DAT_04bbfe90,0xff,0x1ac);
                          uVar27 = *puVar36;
                        }
                        else {
                          uVar54 = *(uint *)(PTR_DAT_04bbfe90 + 0x28);
                          if (-1 < (int)uVar54) {
                            if ((float *)((ulong)uVar54 + (long)puVar36) != (float *)0x0) {
                              fVar64 = *(float *)((ulong)uVar54 + (long)puVar36);
                            }
                            break;
                          }
                          if (uVar54 != 0xffffffff) break;
                        }
                        puVar19 = (uint *)(ulong)uVar27;
                        if ((puVar19 == (uint *)0x0) || (puVar36 == puVar19)) break;
                        lVar35 = 0xc;
                        if (*(char *)((long)puVar36 + (10 - (long)puVar19)) != '\0') {
                          lVar35 = 0x1c;
                        }
                        lVar35 = (long)puVar36 + (lVar35 - (long)puVar19);
                        if (lVar35 == 0) break;
                        uVar29 = (ulong)*(ushort *)((long)puVar36 + (8 - (long)puVar19));
                        *(undefined4 *)(PTR_DAT_04bbfe90 + 0x28) = 0xfffffffe;
                        if (uVar29 == 0) break;
                        piVar42 = (int *)(lVar35 + 4);
                        while (piVar42[-1] != -0x3e783aea) {
                          piVar42 = piVar42 + 2;
                          uVar29 = uVar29 - 1;
                          if (uVar29 == 0) goto LAB_00940c74;
                        }
                        iVar28 = 0;
                        if (*piVar42 != -1) {
                          iVar28 = *piVar42;
                        }
                        *(int *)(PTR_DAT_04bbfe90 + 0x28) = iVar28;
                        uVar27 = *puVar36;
                        if (uVar27 == 0) break;
                      } while( true );
                    }
LAB_00940c74:
                    if ((fVar64 < -1.1920929e-07) || (1.1920929e-07 < fVar64)) {
                      fVar66 = (float)(int)local_118;
                      fVar67 = (float)local_118._4_4_;
                      fVar70 = (float)local_108._4_4_ * 5.0 + 5.0;
                      fVar69 = (float)(int)local_108 * 5.0 + 5.0;
                      local_158 = (fVar67 * 5.0 + fVar70) * 0.5 + (float)local_140._4_4_ * 5.0;
                      local_160 = (undefined *)
                                  CONCAT44(local_160._4_4_,
                                           (fVar66 * 5.0 + fVar69) * 0.5 +
                                           (float)(int)(float)local_140 * 5.0);
                      sVar15 = *(short *)PTR_DAT_04bb6298;
                      if (sVar15 == -1) {
                        uVar61 = 7;
                      }
                      else {
                        local_b8 = CONCAT44(local_b8._4_4_,1);
                        puVar36 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
                        if (0xff < (uint)(int)sVar15) {
                          puVar36 = (uint *)PTR_DAT_04bc39f8;
                        }
                        uVar61 = 7;
                        if ((*puVar36 & 2) != 0) {
                          uVar61 = 5;
                        }
                      }
                      local_b8 = CONCAT44(local_b8._4_4_,uVar61);
                      nn::os::LockMutex(pMVar1);
                      if (*(long *)(param_1 + 0x50) == lVar39) {
                        fVar71 = -500.0;
                      }
                      else {
                        lVar35 = (long)*(int *)(param_1 + 0x5c);
                        plVar56 = (long *)(*(long *)(param_1 + 0x50) - lVar35);
                        fVar71 = -500.0;
                        do {
                          local_17c = local_17c & 0xffffff00;
                          fVar72 = (float)(**(code **)(*plVar56 + 0x30))
                                                    (plVar56,&local_160,&local_b8,0,&local_17c);
                          if (fVar72 <= fVar71) {
                            fVar72 = fVar71;
                          }
                          fVar71 = fVar72;
                          plVar56 = (long *)(*(long *)((long)plVar56 + lVar35 + 8) - lVar35);
                        } while (plVar56 != (long *)(lVar39 - lVar35));
                      }
                      nn::os::UnlockMutex(pMVar1);
                      local_b0 = fVar70 - fVar67 * 5.0;
                      local_160 = (undefined *)CONCAT44(fVar71,(undefined4)local_160);
                      fVar67 = 10.0;
                      if (10.0 <= fVar64) {
                        fVar67 = fVar64;
                      }
                      local_b8 = CONCAT44(fVar67,fVar69 - fVar66 * 5.0);
                      iVar28 = FUN_0277ebd0(&local_150);
                      if (((uint)(iVar28 == 0) & ((uint)local_19c ^ 0xffffffff)) == 0) {
                        local_17c = FUN_0277ebd0(&local_150);
                        uVar27 = (uint)local_19c ^ 1;
                        if (local_17c == 0) {
                          uVar27 = 1;
                        }
                        if (uVar27 == 0) {
                          if (local_108._4_4_ != local_118._4_4_) goto LAB_00940e7c;
                          local_b0 = 10.0;
                          local_158 = local_158 + -2.5;
                        }
                        else {
LAB_00940e7c:
                          iVar28 = FUN_0277ebd0(&local_150);
                          if (((uint)(iVar28 != 1) & ((uint)local_19c ^ 0xffffffff)) != 0) {
                            iVar28 = FUN_0277ebd0(&local_150);
                            if (iVar28 == 4) {
                              local_17c = FUN_01aee3b4(&local_178);
                              puVar57 = &local_b8;
                              plVar32 = &local_160;
                              uVar54 = 0x100080;
                              plVar33 = (long *)0x0;
                              uVar27 = *(uint *)PTR_DAT_04bb3238;
                              puVar37 = PTR_DAT_04bb2150;
                              goto LAB_00940f1c;
                            }
                            iVar28 = FUN_0277ebd0(&local_150);
                            if (iVar28 == 3) {
                              iVar28 = FUN_01aee3b4(&local_178);
                              if (iVar28 != 4) {
                                iVar28 = FUN_01aee3b4(&local_178);
                                if (iVar28 == 8) {
                                  puVar57 = &local_b8;
                                  plVar33 = &local_160;
                                  uVar27 = *(uint *)PTR_DAT_04bb3238;
                                  uVar54 = 0x100080;
                                  plVar32 = (long *)0x0;
                                  puVar37 = PTR_DAT_04bb2150;
                                  goto LAB_00941158;
                                }
                                FUN_01aee3b4(&local_178);
                                puVar57 = &local_b8;
                                plVar33 = &local_160;
                                uVar27 = *(uint *)PTR_DAT_04bb3238;
                                uVar54 = 0x100080;
                                plVar32 = (long *)0x0;
                                puVar37 = PTR_DAT_04bb2150;
                                goto LAB_00941304;
                              }
                              puVar57 = &local_b8;
                              plVar32 = &local_160;
                              uVar27 = *(uint *)PTR_DAT_04bb3238;
                              uVar54 = 0x100080;
                              plVar33 = (long *)0x0;
                              puVar37 = PTR_DAT_04bb2150;
                              goto LAB_00940f70;
                            }
                            goto LAB_00941310;
                          }
                        }
                        puVar57 = &local_b8;
                        plVar33 = &local_160;
                        uVar54 = *(uint *)PTR_DAT_04bb3238;
                        uVar27 = 0x100080;
                        plVar32 = (long *)0x0;
                        puVar37 = PTR_DAT_04bb2150;
                        goto LAB_00940ec4;
                      }
                    }
                  }
                  else {
                    iVar28 = FUN_0277ebd0(&local_150);
                    if (((uint)(iVar28 == 0) & ((uint)local_19c ^ 0xffffffff)) != 0)
                    goto LAB_00941310;
                    iVar28 = FUN_0277ebd0(&local_150);
                    local_160 = (undefined *)CONCAT44(local_160._4_4_,iVar28);
                    uVar27 = (uint)local_19c ^ 1;
                    if (iVar28 == 0) {
                      uVar27 = 1;
                    }
                    if (uVar27 == 0) {
                      if (local_108._4_4_ != local_118._4_4_) goto LAB_00940938;
                      puVar37 = (undefined *)plVar56[0x92];
                      local_160._4_4_ = (float)((ulong)puVar37 >> 0x20);
                      bVar21 = local_160._4_4_ < 10.0;
                      local_160 = puVar37;
                      if (bVar21) {
                        local_160._0_4_ = SUB84(puVar37,0);
                        local_160 = (undefined *)CONCAT44(0x41200000,(undefined4)local_160);
                      }
                      local_158 = 10.0;
                      plVar33 = &local_b8;
                      local_b8 = plVar56[0x95];
                      uVar27 = *(uint *)((long)plVar56 + 0x4b4);
                      local_b0 = *(float *)(plVar56 + 0x96) + -2.5;
                    }
                    else {
LAB_00940938:
                      iVar28 = FUN_0277ebd0(&local_150);
                      if (((uint)(iVar28 != 1) & ((uint)local_19c ^ 0xffffffff)) != 0) {
                        iVar28 = FUN_0277ebd0(&local_150);
                        if (iVar28 == 4) {
                          FUN_01aee3b4(&local_178);
                          puVar37 = (undefined *)plVar56[0x92];
                          local_158 = *(float *)(plVar56 + 0x93);
                          local_160._4_4_ = (float)((ulong)puVar37 >> 0x20);
                          bVar21 = local_160._4_4_ < 10.0;
                          local_160 = puVar37;
                          if (bVar21) {
                            local_160._0_4_ = SUB84(puVar37,0);
                            local_160 = (undefined *)CONCAT44(0x41200000,(undefined4)local_160);
                          }
                          puVar37 = (undefined *)((long)plVar56 + 0x49c);
                          plVar32 = plVar56 + 0x95;
                          plVar33 = plVar56 + 0x97;
                          puVar57 = &local_160;
                          uVar54 = *(uint *)((long)plVar56 + 0x4b4) | 0x80;
                          uVar27 = *puVar36;
LAB_00940f1c:
                          FUN_0093d160(param_2,puVar57,puVar37,plVar32,uVar54,uVar27,plVar33);
                        }
                        else {
                          iVar28 = FUN_0277ebd0(&local_150);
                          if (iVar28 != 3) goto LAB_00940770;
                          iVar28 = FUN_01aee3b4(&local_178);
                          if (iVar28 == 4) {
                            puVar37 = (undefined *)plVar56[0x92];
                            local_158 = *(float *)(plVar56 + 0x93);
                            local_160._4_4_ = (float)((ulong)puVar37 >> 0x20);
                            bVar21 = local_160._4_4_ < 10.0;
                            local_160 = puVar37;
                            if (bVar21) {
                              local_160._0_4_ = SUB84(puVar37,0);
                              local_160 = (undefined *)CONCAT44(0x41200000,(undefined4)local_160);
                            }
                            puVar37 = (undefined *)((long)plVar56 + 0x49c);
                            plVar32 = plVar56 + 0x95;
                            plVar33 = plVar56 + 0x97;
                            puVar57 = &local_160;
                            uVar54 = *(uint *)((long)plVar56 + 0x4b4) | 0x80;
                            uVar27 = *puVar36;
LAB_00940f70:
                            FUN_0093dbf0(param_2,puVar57,puVar37,plVar32,uVar54,uVar27,plVar33);
                          }
                          else {
                            iVar28 = FUN_01aee3b4(&local_178);
                            if (iVar28 == 8) {
                              puVar37 = (undefined *)plVar56[0x92];
                              local_158 = *(float *)(plVar56 + 0x93);
                              local_160._4_4_ = (float)((ulong)puVar37 >> 0x20);
                              bVar21 = local_160._4_4_ < 10.0;
                              local_160 = puVar37;
                              if (bVar21) {
                                local_160._0_4_ = SUB84(puVar37,0);
                                local_160 = (undefined *)CONCAT44(0x41200000,(undefined4)local_160);
                              }
                              puVar37 = (undefined *)((long)plVar56 + 0x49c);
                              plVar33 = plVar56 + 0x95;
                              uVar27 = *puVar36;
                              plVar32 = plVar56 + 0x97;
                              puVar57 = &local_160;
                              uVar54 = *(uint *)((long)plVar56 + 0x4b4) | 0x80;
LAB_00941158:
                              FUN_0093e140(param_2,puVar57,puVar37,plVar33,uVar54,uVar27,plVar32);
                            }
                            else {
                              FUN_01aee3b4(&local_178);
                              puVar37 = (undefined *)plVar56[0x92];
                              local_158 = *(float *)(plVar56 + 0x93);
                              local_160._4_4_ = (float)((ulong)puVar37 >> 0x20);
                              bVar21 = local_160._4_4_ < 10.0;
                              local_160 = puVar37;
                              if (bVar21) {
                                local_160._0_4_ = SUB84(puVar37,0);
                                local_160 = (undefined *)CONCAT44(0x41200000,(undefined4)local_160);
                              }
                              puVar37 = (undefined *)((long)plVar56 + 0x49c);
                              plVar33 = plVar56 + 0x95;
                              plVar32 = plVar56 + 0x97;
                              puVar57 = &local_160;
                              uVar54 = *(uint *)((long)plVar56 + 0x4b4) | 0x80;
                              uVar27 = *puVar36;
LAB_00941304:
                              FUN_0093d6a0(param_2,puVar57,puVar37,plVar33,uVar54,uVar27,plVar32);
                            }
                          }
                        }
                        goto LAB_00941310;
                      }
                      puVar37 = (undefined *)plVar56[0x92];
                      local_158 = *(float *)(plVar56 + 0x93);
                      local_160._4_4_ = (float)((ulong)puVar37 >> 0x20);
                      bVar21 = local_160._4_4_ < 10.0;
                      local_160 = puVar37;
                      if (bVar21) {
                        local_160._0_4_ = SUB84(puVar37,0);
                        local_160 = (undefined *)CONCAT44(0x41200000,(undefined4)local_160);
                      }
                      uVar27 = *(uint *)((long)plVar56 + 0x4b4);
                      plVar33 = plVar56 + 0x95;
                    }
                    plVar32 = plVar56 + 0x97;
                    uVar27 = uVar27 | 0x80;
                    puVar37 = (undefined *)((long)plVar56 + 0x49c);
                    puVar57 = &local_160;
                    uVar54 = *puVar36;
LAB_00940ec4:
                    FUN_0093ccd0(param_2,puVar57,puVar37,plVar33,uVar27,uVar54,plVar32,0);
                  }
                  goto LAB_00941310;
                }
              }
              lVar35 = *(long *)PTR_DAT_04bbbc68;
              if ((((lVar35 != 0) && (*(long *)(lVar35 + 0xb0) != 0)) &&
                  (*(long *)(*(long *)(lVar35 + 0xb0) + 8) != 0)) &&
                 (((*(long *)(lVar35 + 0x488) != 0 &&
                   (*(long *)(*(long *)(lVar35 + 0x488) + 8) != 0)) &&
                  ((*(long *)(lVar35 + 0x2b0) != 0 &&
                   (*(long *)(*(long *)(lVar35 + 0x2b0) + 8) != 0)))))) {
                uVar27 = FUN_0277d6c4(&local_150);
                uVar27 = (uVar27 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                if ((uVar27 < *(uint *)(lVar35 + 0x1d8)) &&
                   (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar27 * 8) != 0)) {
                  iVar28 = FUN_0277ebd0(&local_150);
                  if (iVar28 == 2) {
                    iVar49 = *(int *)(PTR_DAT_04bb2e10 + 8);
                    iVar11 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
                    iVar28 = iVar49;
                    if (0 < iVar49) {
                      iVar28 = 1;
                    }
                    if (iVar49 < 2) {
                      iVar49 = 1;
                    }
                    iVar10 = iVar11;
                    if (0 < iVar11) {
                      iVar10 = 1;
                    }
                    if (iVar11 < 2) {
                      iVar11 = 1;
                    }
                    iVar48 = iVar28;
                    iVar47 = iVar10;
                    do {
                      uVar27 = (iVar48 - (int)fVar62) + (int)(float)local_140;
                      if (((((-1 < (int)uVar27) && ((int)uVar27 < iVar26)) &&
                           (uVar54 = (iVar47 - uVar60) + local_140._4_4_, -1 < (int)uVar54)) &&
                          (((int)uVar54 < iVar17 && (uVar54 < 0xc)))) && (uVar27 < 0xc)) {
                        uVar27 = uVar27 + uVar54 * 0xc;
                        lVar35 = (ulong)(uVar27 >> 5) * 4;
                        *(uint *)(lVar55 + lVar35) =
                             *(uint *)(lVar55 + lVar35) | 1 << (ulong)(uVar27 & 0x1f);
                      }
                      if (iVar48 < iVar49) {
                        iVar48 = iVar48 + 1;
                      }
                      else {
                        iVar47 = iVar47 + 1;
                        iVar48 = iVar28;
                      }
                    } while ((iVar28 != iVar48) || (iVar11 + 1 != iVar47));
                    FUN_0124c030(&local_128,&local_150);
                    fVar64 = 0.0;
                    if ((local_118 != 0) &&
                       (pfVar30 = (float *)FUN_01246470(local_118,0,0xc315945,
                                                        *(undefined8 *)PTR_DAT_04bbbca8),
                       pfVar30 != (float *)0x0)) {
                      fVar64 = *pfVar30;
                    }
                    if ((fVar64 < -1.1920929e-07) || (1.1920929e-07 < fVar64)) {
                      fVar66 = 31.5;
                      if (31.5 <= fVar64) {
                        fVar66 = fVar64;
                      }
                      local_170 = ((float)iVar10 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5 +
                                  (float)local_140._4_4_ * 5.0;
                      local_178 = (undefined *)
                                  CONCAT44(local_178._4_4_,
                                           ((float)iVar28 * 5.0 + (float)iVar49 * 5.0 + 5.0) * 0.5 +
                                           (float)(int)(float)local_140 * 5.0);
                      sVar15 = *(short *)PTR_DAT_04bb6298;
                      if (sVar15 == -1) {
                        uVar61 = 7;
                      }
                      else {
                        local_160 = (undefined *)CONCAT44(local_160._4_4_,1);
                        puVar36 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
                        if (0xff < (uint)(int)sVar15) {
                          puVar36 = (uint *)PTR_DAT_04bc39f8;
                        }
                        uVar61 = 7;
                        if ((*puVar36 & 2) != 0) {
                          uVar61 = 5;
                        }
                      }
                      local_160 = (undefined *)CONCAT44(local_160._4_4_,uVar61);
                      nn::os::LockMutex(pMVar1);
                      if (*(long *)(param_1 + 0x50) == lVar39) {
                        fVar64 = -500.0;
                      }
                      else {
                        lVar35 = (long)*(int *)(param_1 + 0x5c);
                        plVar56 = (long *)(*(long *)(param_1 + 0x50) - lVar35);
                        fVar64 = -500.0;
                        do {
                          local_b8 = local_b8 & 0xffffffffffffff00;
                          fVar67 = (float)(**(code **)(*plVar56 + 0x30))
                                                    (plVar56,&local_178,&local_160,0,&local_b8);
                          if (fVar67 <= fVar64) {
                            fVar67 = fVar64;
                          }
                          fVar64 = fVar67;
                          plVar56 = (long *)(*(long *)((long)plVar56 + lVar35 + 8) - lVar35);
                        } while (plVar56 != (long *)(lVar39 - lVar35));
                      }
                      nn::os::UnlockMutex(pMVar1);
                      local_178 = (undefined *)CONCAT44(fVar64,(float)local_178);
                      uVar61 = FUN_0277edd4(&local_150,&local_138);
                      iVar28 = FUN_0277d6c4(&local_150);
                      uVar8 = local_1f8;
                      if (iVar28 != 0xea79) {
                        uVar8 = 0x80080;
                      }
                      uVar29 = FUN_0093f250(uVar61,fVar66,param_2,&local_178,uVar8,
                                            *(undefined4 *)PTR_DAT_04bb3238,0);
                      if ((uVar29 & 1) != 0) {
                        uVar29 = 0;
                        uVar27 = *(uint *)(param_2 + 0x24e8);
                        if (uVar27 != 0) {
                          pfVar30 = pfVar7;
                          do {
                            pfVar34 = pfVar30;
                            if (0x1f < uVar29) {
                              pfVar34 = pfVar7;
                            }
                            if ((*pfVar34 == (float)local_178) && (pfVar34[2] == local_170))
                            goto LAB_00941310;
                            uVar29 = uVar29 + 1;
                            pfVar30 = pfVar30 + 3;
                          } while (uVar27 != uVar29);
                          uVar29 = (ulong)uVar27;
                          if (0x1f < uVar27) goto LAB_00941310;
                        }
                        pfVar30 = pfVar7 + uVar29 * 3;
                        *(uint *)(param_2 + 0x24e8) = uVar27 + 1;
                        pfVar30[2] = local_170;
                        *pfVar30 = (float)local_178;
                        pfVar30[1] = local_178._4_4_;
                      }
                    }
                  }
                  else {
                    iVar28 = FUN_0277ebd0(&local_150);
                    if (iVar28 == 1) {
                      FUN_0124c030(&local_128,&local_150);
                      iVar49 = *(int *)(PTR_DAT_04bb2e10 + 8);
                      iVar11 = *(int *)(PTR_DAT_04bb2e10 + 0xc);
                      iVar28 = iVar49;
                      if (0 < iVar49) {
                        iVar28 = 1;
                      }
                      if (iVar49 < 2) {
                        iVar49 = 1;
                      }
                      iVar10 = iVar11;
                      if (0 < iVar11) {
                        iVar10 = 1;
                      }
                      if (iVar11 < 2) {
                        iVar11 = 1;
                      }
                      iVar48 = iVar28;
                      iVar47 = iVar10;
                      do {
                        uVar27 = (iVar48 - (int)fVar62) + (int)(float)local_140;
                        if ((((-1 < (int)uVar27) && ((int)uVar27 < iVar26)) &&
                            (uVar54 = (iVar47 - uVar60) + local_140._4_4_, -1 < (int)uVar54)) &&
                           ((((int)uVar54 < iVar17 && (uVar54 < 0xc)) && (uVar27 < 0xc)))) {
                          uVar27 = uVar27 + uVar54 * 0xc;
                          lVar35 = (ulong)(uVar27 >> 5) * 4;
                          *(uint *)(lVar55 + lVar35) =
                               *(uint *)(lVar55 + lVar35) | 1 << (ulong)(uVar27 & 0x1f);
                        }
                        if (iVar48 < iVar49) {
                          iVar48 = iVar48 + 1;
                        }
                        else {
                          iVar47 = iVar47 + 1;
                          iVar48 = iVar28;
                        }
                      } while ((iVar28 != iVar48) || (iVar11 + 1 != iVar47));
                      fVar64 = 0.0;
                      if ((local_118 != 0) &&
                         (pfVar30 = (float *)FUN_01246470(local_118,0,0xc315945,
                                                          *(undefined8 *)PTR_DAT_04bbbca8),
                         pfVar30 != (float *)0x0)) {
                        fVar64 = *pfVar30;
                      }
                      if ((fVar64 < -1.1920929e-07) || (1.1920929e-07 < fVar64)) {
                        fVar67 = (float)iVar49 * 5.0 + 5.0;
                        fVar69 = (float)iVar11 * 5.0 + 5.0;
                        fVar66 = 10.0;
                        if (10.0 <= fVar64) {
                          fVar66 = fVar64;
                        }
                        local_170 = ((float)iVar10 * 5.0 + fVar69) * 0.5 +
                                    (float)local_140._4_4_ * 5.0;
                        local_178 = (undefined *)
                                    CONCAT44(local_178._4_4_,
                                             ((float)iVar28 * 5.0 + fVar67) * 0.5 +
                                             (float)(int)(float)local_140 * 5.0);
                        sVar15 = *(short *)PTR_DAT_04bb6298;
                        if (sVar15 == -1) {
                          uVar61 = 7;
                        }
                        else {
                          local_160 = (undefined *)CONCAT44(local_160._4_4_,1);
                          puVar36 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
                          if (0xff < (uint)(int)sVar15) {
                            puVar36 = (uint *)PTR_DAT_04bc39f8;
                          }
                          uVar61 = 7;
                          if ((*puVar36 & 2) != 0) {
                            uVar61 = 5;
                          }
                        }
                        local_160 = (undefined *)CONCAT44(local_160._4_4_,uVar61);
                        nn::os::LockMutex(pMVar1);
                        if (*(long *)(param_1 + 0x50) == lVar39) {
                          fVar64 = -500.0;
                        }
                        else {
                          lVar35 = (long)*(int *)(param_1 + 0x5c);
                          plVar56 = (long *)(*(long *)(param_1 + 0x50) - lVar35);
                          fVar64 = -500.0;
                          do {
                            local_b8 = local_b8 & 0xffffffffffffff00;
                            fVar70 = (float)(**(code **)(*plVar56 + 0x30))
                                                      (plVar56,&local_178,&local_160,0,&local_b8);
                            if (fVar70 <= fVar64) {
                              fVar70 = fVar64;
                            }
                            fVar64 = fVar70;
                            plVar56 = (long *)(*(long *)((long)plVar56 + lVar35 + 8) - lVar35);
                          } while (plVar56 != (long *)(lVar39 - lVar35));
                        }
                        nn::os::UnlockMutex(pMVar1);
                        local_158 = fVar69 - (float)iVar10 * 5.0;
                        local_178 = (undefined *)CONCAT44(fVar64,(float)local_178);
                        local_160 = (undefined *)CONCAT44(fVar66,fVar67 - (float)iVar28 * 5.0);
                        FUN_0093ccd0(param_2,&local_160,PTR_DAT_04bb2150,&local_178,0x400080,
                                     *(undefined4 *)PTR_DAT_04bb3238,0,0);
                      }
                    }
                  }
                }
              }
            }
          }
LAB_00941310:
          if ((int)fVar65 < (int)fVar63) {
            fVar65 = (float)((int)fVar65 + 1);
          }
          else {
            uVar41 = uVar41 + 1;
            fVar65 = fVar62;
          }
        } while ((fVar62 != fVar65) || (uVar45 != uVar41));
      }
      uVar29 = FUN_0180c170();
      if ((uVar29 & 1) != 0) {
        lVar35 = *(long *)PTR_DAT_04bb2720;
        if (lVar35 == 0) {
          puVar57 = &DAT_055c04a0;
        }
        else {
          puVar57 = &DAT_055c04a0;
          if (*(long *)(lVar35 + 0x330) != 0) {
            puVar57 = (undefined8 *)
                      (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar35 + 0x338));
            iVar26 = FUN_006bd550(*puVar57,0);
            puVar57 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar26 != 0x758f7eaf) {
              puVar57 = &DAT_055c04a0;
            }
          }
        }
        FUN_017baf44(*(undefined4 *)(puVar57 + 7));
        if (uVar45 != uVar60) {
          puVar4 = PTR_DAT_04bb2010 + 0x10;
          puVar38 = PTR_DAT_04bb2010;
          uVar41 = uVar60;
          fVar65 = fVar62;
          do {
            local_120 = (undefined *)CONCAT44(uVar41,fVar65);
            local_128 = puVar4;
            uVar29 = FUN_01512308(puVar38,&local_128,*puVar6);
            if ((uVar29 & 1) != 0) {
              if (((uint)((int)fVar65 - (int)fVar62) < 0xc) && (uVar41 - uVar60 < 0xc)) {
                uVar27 = ((int)fVar65 - (int)fVar62) + (uVar41 - uVar60) * 0xc;
                lVar35 = (ulong)(uVar27 >> 5) * 4;
                *(uint *)(lVar55 + lVar35) =
                     *(uint *)(lVar55 + lVar35) | 1 << (ulong)(uVar27 & 0x1f);
              }
              fVar64 = (float)local_120._4_4_;
              local_170 = fVar64 * 5.0 + 2.5;
              fVar66 = (float)(int)local_120;
              local_178 = (undefined *)CONCAT44(local_178._4_4_,fVar66 * 5.0 + 2.5);
              sVar15 = *(short *)PTR_DAT_04bb6298;
              if (sVar15 == -1) {
                uVar61 = 7;
              }
              else {
                local_138 = (undefined *)CONCAT44(local_138._4_4_,1);
                puVar36 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar15 * 8);
                if (0xff < (uint)(int)sVar15) {
                  puVar36 = (uint *)PTR_DAT_04bc39f8;
                }
                uVar61 = 7;
                if ((*puVar36 & 2) != 0) {
                  uVar61 = 5;
                }
              }
              local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar61);
              nn::os::LockMutex(pMVar1);
              if (*(long *)(param_1 + 0x50) == lVar39) {
                fVar67 = -500.0;
              }
              else {
                lVar35 = (long)*(int *)(param_1 + 0x5c);
                plVar56 = (long *)(*(long *)(param_1 + 0x50) - lVar35);
                fVar67 = -500.0;
                do {
                  local_148 = (undefined *)((ulong)local_148 & 0xffffffffffffff00);
                  fVar69 = (float)(**(code **)(*plVar56 + 0x30))
                                            (plVar56,&local_178,&local_138,0,&local_148);
                  if (fVar69 <= fVar67) {
                    fVar69 = fVar67;
                  }
                  fVar67 = fVar69;
                  plVar56 = (long *)(*(long *)((long)plVar56 + lVar35 + 8) - lVar35);
                } while (plVar56 != (long *)(lVar39 - lVar35));
              }
              fVar66 = fVar66 * 5.0;
              fVar64 = fVar64 * 5.0;
              nn::os::UnlockMutex(pMVar1);
              local_130 = (fVar64 + 5.0) - fVar64;
              local_178 = (undefined *)CONCAT44(fVar67,(float)local_178);
              local_138 = (undefined *)CONCAT44(0x41200000,(fVar66 + 5.0) - fVar66);
              FUN_0093ccd0(param_2,&local_138,PTR_DAT_04bb2150,&local_178,0x100080,
                           *(undefined4 *)PTR_DAT_04bb3238,0,0);
              if ((((*(char *)(param_2 + 0x4cc9) != '\0') &&
                   (*(int *)(param_2 + 0x4ce0) <= (int)local_120)) &&
                  ((int)local_120 <= *(int *)(param_2 + 0x4cf0))) &&
                 ((*(int *)(param_2 + 0x4ce4) <= local_120._4_4_ &&
                  (local_120._4_4_ <= *(int *)(param_2 + 0x4cf4))))) {
                *(undefined1 *)(param_2 + 0x4cf8) = 1;
              }
            }
            puVar38 = (undefined *)(ulong)(uint)fVar62;
            if ((int)fVar65 < (int)fVar63) {
              fVar65 = (float)((int)fVar65 + 1);
            }
            else {
              uVar41 = uVar41 + 1;
              fVar65 = fVar62;
            }
          } while ((fVar62 != fVar65) || (puVar38 = (undefined *)(ulong)uVar45, uVar45 != uVar41));
        }
      }
      goto LAB_009415dc;
    }
  }
  plVar56 = (long *)0x0;
  uVar29 = 1;
  if ((*(long *)PTR_DAT_04bb27c0 != 0) &&
     ((uVar41 = *puVar6, uVar41 != 0 &&
      (plVar56 = *(long **)(*(long *)(*(long *)(*(long *)PTR_DAT_04bb27c0 + 0x1c0) + 8) +
                           ((ulong)(uVar41 >> 0x11) & 0x7ff8)), plVar56 != (long *)0x0)))) {
    if (((*(uint *)(plVar56 + 0x49) >> 1 & 1) == 0) && (*(uint *)(plVar56 + 0x46) == uVar41)) {
      if (((*PTR_DAT_04bb2e60 & 1) == 0) &&
         (iVar26 = __cxa_guard_acquire(PTR_DAT_04bb2e60), iVar26 != 0)) {
        *(undefined **)PTR_DAT_04bb2e58 = PTR_DAT_04bb2000 + 0x10;
        __cxa_guard_release(PTR_DAT_04bb2e60);
      }
      uVar29 = (**(code **)(*plVar56 + 0x20))(plVar56,PTR_DAT_04bb2e58);
    }
    else {
      plVar56 = (long *)0x0;
    }
  }
  local_d5 = 0;
  puVar4 = (undefined *)((long)&local_118 + 4);
  local_118 = CONCAT35(local_118._5_3_,0x40);
  local_128 = PTR_DAT_04bb2bc0 + 0x10;
  local_120 = puVar4;
  if (((((uVar29 & 1) != 0) && (plVar56 != (long *)0x0)) &&
      (*(uint *)((long)plVar56 + 0x15c) < 0xec)) &&
     ((int *)(&DAT_04c969c8)[*(uint *)((long)plVar56 + 0x15c)] != (int *)0x0)) {
    plVar56 = (long *)(PTR_DAT_04bb3840 +
                      (long)*(int *)(&DAT_04c969c8)[*(uint *)((long)plVar56 + 0x15c)] * 0x10);
    (**(code **)(*plVar56 + 0x18))(plVar56);
    if (puVar4 != (undefined *)plVar56[1]) {
      (**(code **)(*plVar56 + 0x18))(plVar56);
    }
  }
LAB_009415dc:
  puVar4 = PTR_DAT_04bb2640;
  lVar39 = *(long *)PTR_DAT_04bb2720;
  if ((lVar39 != 0) && (*(long *)(lVar39 + 0x330) != 0)) {
    puVar57 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar39 + 0x338));
    iVar26 = FUN_006bd550(*puVar57,0);
    if (((iVar26 == 0x758f7eaf) &&
        ((lVar39 = *(long *)PTR_DAT_04bb2720, lVar39 != 0 && (*(long *)(lVar39 + 0x330) != 0)))) &&
       (*(long *)PTR_DAT_04bb5ce0 != 0)) {
      puVar57 = (undefined8 *)
                (**(code **)(**(long **)puVar4 + 0x18))
                          (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
      iVar26 = FUN_006bd550(*puVar57,0);
      puVar38 = PTR_DAT_04bb3238;
      if ((((iVar26 == 0x758f7eaf) && (lVar39 = *(long *)PTR_DAT_04bb2720, lVar39 != 0)) &&
          (*(long *)(lVar39 + 0x330) != 0)) &&
         ((*(int *)(*(long *)(lVar39 + 0x330) + 0x244) != 0 && (*(char *)(param_1 + 0x60) != '\0')))
         ) {
        if (((*(long *)PTR_DAT_04bb7ff8 != 0) && (*(int *)(*(long *)PTR_DAT_04bb7ff8 + 0x588) != 0))
           || (*(char *)(param_2 + 0x4cc1) != '\0')) {
          uVar41 = 0;
          uVar60 = 1;
          while ((lVar39 != 0 && (*(long *)(lVar39 + 0x330) != 0))) {
            puVar57 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
            FUN_006bd550(*puVar57,0);
            lVar39 = *(long *)PTR_DAT_04bb2720;
            if ((lVar39 == 0) || (*(long *)(lVar39 + 0x330) == 0)) break;
            puVar57 = (undefined8 *)
                      (**(code **)(**(long **)puVar4 + 0x18))
                                (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
            iVar26 = FUN_006bd550(*puVar57,0);
            if ((((iVar26 != 0x758f7eaf) || (*(long *)PTR_DAT_04bb2720 == 0)) ||
                (lVar39 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar39 == 0)) ||
               (*(uint *)(lVar39 + 0x260) <= uVar41)) break;
            lVar39 = *(long *)PTR_DAT_04bb2720;
            if ((lVar39 != 0) && (*(long *)(lVar39 + 0x330) != 0)) {
              puVar57 = (undefined8 *)
                        (**(code **)(**(long **)puVar4 + 0x18))
                                  (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
              FUN_006bd550(*puVar57,0);
              lVar39 = *(long *)PTR_DAT_04bb2720;
              if ((lVar39 != 0) && (*(long *)(lVar39 + 0x330) != 0)) {
                puVar57 = (undefined8 *)
                          (**(code **)(**(long **)puVar4 + 0x18))
                                    (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
                iVar26 = FUN_006bd550(*puVar57,0);
                lVar39 = *(long *)PTR_DAT_04bb2720;
                if ((((iVar26 == 0x758f7eaf) && (lVar39 != 0)) &&
                    (lVar55 = *(long *)(lVar39 + 0x330), lVar55 != 0)) &&
                   (uVar41 < *(uint *)(lVar55 + 0x260))) {
                  lVar55 = lVar55 + 0x250;
                  if (6 < uVar41) {
                    uVar45 = uVar60 & 0xfffffff8;
                    do {
                      uVar45 = uVar45 - 8;
                      lVar55 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(lVar55 + 8) + 8) + 8) + 8) + 8) + 8) +
                                                  8) + 8);
                    } while (uVar45 != 0);
                  }
                  if ((uVar41 + 1 & 7) != 0) {
                    uVar45 = uVar60 & 7;
                    do {
                      lVar55 = *(long *)(lVar55 + 8);
                      uVar45 = uVar45 - 1;
                    } while (uVar45 != 0);
                  }
                  if ((lVar55 != 0) && (lVar55 != 0x40)) {
                    if (((*(uint *)(param_2 + 0x4ca0) >> 0xc & 1) != 0) &&
                       (*(char *)(param_2 + 0x4cc2) == '\0')) {
                      iVar26 = *(int *)(lVar55 + -0xc);
                      local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar26);
                      if (iVar26 != 2) {
                        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,iVar26);
                        if (iVar26 != 1) {
                          local_178 = (undefined *)CONCAT44(local_178._4_4_,iVar26);
                          if (iVar26 != 4) {
                            local_138 = (undefined *)CONCAT44(local_138._4_4_,iVar26);
                            if (iVar26 != 3) goto LAB_00941840;
                          }
                        }
                      }
                    }
                    fVar62 = (float)NEON_ucvtf(*(undefined4 *)(lVar55 + -0x20));
                    local_170 = 0.0;
                    pfVar7 = (float *)(PTR_DAT_04bb2d00 +
                                      ((ulong)(long)(fVar62 * 11930465.0) >> 0x19 & 0x7f) * 0x10);
                    fVar63 = (float)((uint)(long)(fVar62 * 11930465.0) >> 1 & 0xffffff) *
                             5.9604645e-08;
                    fVar65 = *pfVar7 + fVar63 * pfVar7[1];
                    fVar63 = pfVar7[2] + fVar63 * pfVar7[3];
                    fVar66 = fVar65 * 0.0;
                    fVar63 = fVar63 + fVar63;
                    fVar69 = fVar65 * (fVar65 + fVar65);
                    fVar64 = (fVar65 + fVar65) * fVar66;
                    fVar70 = fVar66 * (fVar66 + fVar66);
                    fVar67 = fVar66 * fVar63;
                    fVar63 = fVar65 * fVar63;
                    fVar65 = fVar65 * (fVar66 + fVar66);
                    fVar66 = *(float *)(lVar55 + -0x24);
                    local_c8 = fVar66 * 3.0;
                    local_d0 = (undefined *)CONCAT44(0x41a00000,*(undefined4 *)(lVar55 + -0x28));
                    local_128._0_4_ = (float)*(undefined8 *)(lVar55 + -0x34);
                    local_128._4_4_ = (float)((ulong)*(undefined8 *)(lVar55 + -0x34) >> 0x20);
                    local_178 = (undefined *)((ulong)(uint)(fVar62 * 0.017453292) << 0x20);
                    local_128 = (undefined *)
                                CONCAT44(local_128._4_4_ +
                                         ((((1.0 - fVar70) - fVar70) * 0.0 + (fVar65 + fVar67) * 0.0
                                          ) - fVar66 * (fVar64 - fVar67)),
                                         (float)local_128 +
                                         (((fVar65 - fVar67) * 0.0 + ((1.0 - fVar69) - fVar70) * 0.0
                                          ) - fVar66 * (fVar70 + fVar63)));
                    local_120 = (undefined *)
                                CONCAT44(local_120._4_4_,
                                         *(float *)(lVar55 + -0x2c) +
                                         (((fVar64 + fVar67) * 0.0 + (fVar70 - fVar63) * 0.0) -
                                         fVar66 * ((1.0 - fVar70) - fVar69)));
                    FUN_0093ccd0(param_2,&local_d0,&local_178,&local_128,0x80,*(undefined4 *)puVar38
                                 ,0,0);
                    lVar39 = *(long *)PTR_DAT_04bb2720;
                  }
                }
              }
            }
LAB_00941840:
            uVar41 = uVar41 + 1;
            uVar60 = uVar60 + 1;
          }
        }
        puVar38 = PTR_DAT_04bb3238;
        if ((*(byte *)(param_2 + 0x4ca1) >> 3 & 1) != 0) {
          uVar41 = 0;
          uVar60 = 1;
          do {
            lVar39 = *(long *)PTR_DAT_04bb2720;
            uVar45 = 0;
            if (lVar39 != 0) {
              if (*(long *)(lVar39 + 0x330) == 0) {
LAB_00943ac8:
                uVar45 = 0;
              }
              else {
                puVar57 = (undefined8 *)
                          (**(code **)(**(long **)puVar4 + 0x18))
                                    (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
                FUN_006bd550(*puVar57,0);
                lVar39 = *(long *)PTR_DAT_04bb2720;
                uVar45 = 0;
                if (lVar39 != 0) {
                  if (*(long *)(lVar39 + 0x330) == 0) goto LAB_00943ac8;
                  puVar57 = (undefined8 *)
                            (**(code **)(**(long **)puVar4 + 0x18))
                                      (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
                  iVar26 = FUN_006bd550(*puVar57,0);
                  uVar45 = 0;
                  if (iVar26 == 0x758f7eaf) {
                    uVar45 = 0;
                    if (*(long *)PTR_DAT_04bb2720 != 0) {
                      lVar39 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330);
                      uVar45 = 0;
                      if (lVar39 != 0) {
                        uVar45 = *(uint *)(lVar39 + 0x260);
                      }
                    }
                  }
                }
              }
            }
            if (uVar45 <= uVar41) break;
            lVar39 = *(long *)PTR_DAT_04bb2720;
            if ((lVar39 != 0) && (*(long *)(lVar39 + 0x330) != 0)) {
              puVar57 = (undefined8 *)
                        (**(code **)(**(long **)puVar4 + 0x18))
                                  (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
              FUN_006bd550(*puVar57,0);
              lVar39 = *(long *)PTR_DAT_04bb2720;
              if ((lVar39 != 0) && (*(long *)(lVar39 + 0x330) != 0)) {
                puVar57 = (undefined8 *)
                          (**(code **)(**(long **)puVar4 + 0x18))
                                    (*(long **)puVar4,*(undefined4 *)(lVar39 + 0x338));
                iVar26 = FUN_006bd550(*puVar57,0);
                if ((((iVar26 == 0x758f7eaf) && (*(long *)PTR_DAT_04bb2720 != 0)) &&
                    (lVar39 = *(long *)(*(long *)PTR_DAT_04bb2720 + 0x330), lVar39 != 0)) &&
                   (uVar41 < *(uint *)(lVar39 + 0x260))) {
                  lVar39 = lVar39 + 0x250;
                  if (6 < uVar41) {
                    uVar45 = uVar60 & 0xfffffff8;
                    do {
                      uVar45 = uVar45 - 8;
                      lVar39 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)(*(long *)
                                                  (*(long *)(lVar39 + 8) + 8) + 8) + 8) + 8) + 8) +
                                                  8) + 8);
                    } while (uVar45 != 0);
                  }
                  if ((uVar41 + 1 & 7) != 0) {
                    uVar45 = uVar60 & 7;
                    do {
                      lVar39 = *(long *)(lVar39 + 8);
                      uVar45 = uVar45 - 1;
                    } while (uVar45 != 0);
                  }
                  if ((lVar39 != 0) && (lVar39 != 0x40)) {
                    fVar62 = (float)NEON_ucvtf(*(undefined4 *)(lVar39 + -0x20));
                    local_170 = 0.0;
                    pfVar7 = (float *)(PTR_DAT_04bb2d00 +
                                      ((ulong)(long)(fVar62 * 11930465.0) >> 0x19 & 0x7f) * 0x10);
                    fVar63 = (float)((uint)(long)(fVar62 * 11930465.0) >> 1 & 0xffffff) *
                             5.9604645e-08;
                    fVar65 = *pfVar7 + fVar63 * pfVar7[1];
                    fVar63 = pfVar7[2] + fVar63 * pfVar7[3];
                    local_d0 = (undefined *)CONCAT44(0x41a00000,*(undefined4 *)(lVar39 + -0x28));
                    fVar66 = fVar65 * 0.0;
                    fVar63 = fVar63 + fVar63;
                    fVar69 = fVar65 * (fVar65 + fVar65);
                    fVar64 = (fVar65 + fVar65) * fVar66;
                    fVar70 = fVar66 * (fVar66 + fVar66);
                    fVar67 = fVar66 * fVar63;
                    fVar63 = fVar65 * fVar63;
                    fVar65 = fVar65 * (fVar66 + fVar66);
                    fVar66 = *(float *)(lVar39 + -0x24) * -2.0;
                    local_128._0_4_ = (float)*(undefined8 *)(lVar39 + -0x34);
                    local_128._4_4_ = (float)((ulong)*(undefined8 *)(lVar39 + -0x34) >> 0x20);
                    local_c8 = *(float *)(lVar39 + -0x24) * 3.0;
                    local_178 = (undefined *)((ulong)(uint)(fVar62 * 0.017453292) << 0x20);
                    local_128 = (undefined *)
                                CONCAT44(local_128._4_4_ +
                                         ((1.0 - fVar70) - fVar70) * 0.0 + (fVar65 + fVar67) * 0.0 +
                                         fVar66 * (fVar64 - fVar67),
                                         (float)local_128 +
                                         (fVar65 - fVar67) * 0.0 + ((1.0 - fVar69) - fVar70) * 0.0 +
                                         fVar66 * (fVar70 + fVar63));
                    local_120 = (undefined *)
                                CONCAT44(local_120._4_4_,
                                         *(float *)(lVar39 + -0x2c) +
                                         (fVar64 + fVar67) * 0.0 + (fVar70 - fVar63) * 0.0 +
                                         fVar66 * ((1.0 - fVar70) - fVar69));
                    FUN_0093ccd0(param_2,&local_d0,&local_178,&local_128,0x80,*(undefined4 *)puVar38
                                 ,0,0);
                  }
                }
              }
            }
            uVar41 = uVar41 + 1;
            uVar60 = uVar60 + 1;
          } while( true );
        }
      }
    }
  }
  iVar26 = *(int *)(param_2 + 0xe4);
  if (((iVar26 != 0) &&
      ((*(float *)(param_2 + 0x2c) < -1.1920929e-07 || (1.1920929e-07 < *(float *)(param_2 + 0x2c)))
      )) && (*(char *)(param_2 + 0x4cc8) != '\0')) {
    if (0 < iVar26) {
      uVar29 = 0;
      pfVar7 = (float *)(param_2 + 0x2674);
      do {
        lVar39 = param_2 + 0xe8 + uVar29 * 0x90;
        if (0x3f < uVar29) {
          lVar39 = param_2 + 0xe8;
        }
        fVar63 = *(float *)(lVar39 + 0x40);
        fVar62 = *(float *)(lVar39 + 0x48);
        bVar21 = false;
        bVar22 = true;
        if (-1.1920929e-07 <= fVar63) {
          bVar21 = false;
          bVar22 = true;
          if (!NAN(fVar63)) {
            bVar21 = fVar63 == 1.1920929e-07;
            bVar22 = 1.1920929e-07 <= fVar63;
          }
        }
        bVar20 = true;
        bVar24 = false;
        if (!bVar22 || bVar21) {
          bVar20 = false;
          bVar24 = true;
          if (!NAN(fVar62)) {
            bVar20 = fVar62 < -1.1920929e-07;
            bVar24 = false;
          }
        }
        bVar21 = false;
        bVar22 = true;
        if (bVar20 == bVar24) {
          bVar21 = false;
          bVar22 = true;
          if (!NAN(fVar62)) {
            bVar21 = fVar62 == 1.1920929e-07;
            bVar22 = 1.1920929e-07 <= fVar62;
          }
        }
        if ((bVar22 && !bVar21) && (*(char *)(lVar39 + 0x68) == '\0')) {
          fVar65 = SQRT(fVar63 * fVar63 + 0.0 + fVar62 * fVar62);
          if (0.0 < fVar65) {
            fVar65 = 1.0 / fVar65;
            fVar63 = fVar63 * fVar65;
            fVar62 = fVar62 * fVar65;
          }
          fVar62 = (float)FUN_006f0400(fVar62,fVar63);
          uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
          if (*(uint *)(param_2 + 0x2670) == 0) {
            uVar40 = 0;
            bVar20 = true;
            uVar46 = 0xffffffff;
            uVar43 = 0xffffffff;
            bVar21 = true;
            bVar22 = true;
            uVar44 = 0xffffffff;
            uVar51 = 0xffffffff;
            uVar50 = 0xffffffff;
            uVar52 = 0xffffffff;
          }
          else {
            uVar43 = 0;
            pfVar30 = pfVar7;
            do {
              pfVar34 = pfVar30;
              if (0x3f < uVar43) {
                pfVar34 = pfVar7;
              }
              fVar63 = *(float *)(lVar39 + 0x10) - *pfVar34;
              bVar21 = false;
              bVar22 = true;
              if (-0.05 <= fVar63) {
                bVar21 = false;
                bVar22 = true;
                if (!NAN(fVar63)) {
                  bVar21 = fVar63 == 0.05;
                  bVar22 = 0.05 <= fVar63;
                }
              }
              if (!bVar22 || bVar21) {
                fVar63 = *(float *)(lVar39 + 0x18) - pfVar34[2];
                bVar21 = false;
                bVar22 = true;
                if (-0.05 <= fVar63) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar63)) {
                    bVar21 = fVar63 == 0.05;
                    bVar22 = 0.05 <= fVar63;
                  }
                }
                if (!bVar22 || bVar21) {
                  fVar63 = pfVar34[4];
                  if (fVar63 != fVar62) {
                    uVar41 = (int)fVar62 - (int)fVar63;
                    if ((uint)fVar62 <= (uint)fVar63) {
                      uVar41 = (int)fVar63 - (int)fVar62;
                    }
                    uVar60 = -uVar41;
                    if (uVar41 < 0x80000001) {
                      uVar60 = uVar41;
                    }
                    if (0x71c71c8 < uVar60) goto LAB_00941b90;
                  }
                  if ((uint)uVar43 != 0xffffffff) {
                    bVar21 = false;
                    if (0x3f < (uint)uVar43) {
                      pfVar30 = pfVar7;
                    }
                    if (*(float *)(lVar39 + 0x14) < pfVar30[1]) {
                      pfVar30[1] = *(float *)(lVar39 + 0x14);
                      uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
                    }
                    uVar43 = uVar43 & 0xffffffff;
                    goto joined_r0x00941c38;
                  }
                  break;
                }
              }
LAB_00941b90:
              uVar43 = uVar43 + 1;
              pfVar30 = pfVar30 + 6;
            } while (uVar40 != uVar43);
            bVar21 = true;
            uVar43 = 0xffffffff;
joined_r0x00941c38:
            if (uVar40 == 0) {
              bVar20 = true;
              uVar46 = 0xffffffff;
              bVar22 = true;
              uVar44 = 0xffffffff;
LAB_00941e2c:
              uVar51 = 0xffffffff;
              uVar50 = 0xffffffff;
            }
            else {
              uVar44 = 0;
              pfVar30 = pfVar7;
              do {
                pfVar34 = pfVar30;
                if (0x3f < uVar44) {
                  pfVar34 = pfVar7;
                }
                fVar63 = *(float *)(lVar39 + 0x1c) - *pfVar34;
                bVar22 = false;
                bVar20 = true;
                if (-0.05 <= fVar63) {
                  bVar22 = false;
                  bVar20 = true;
                  if (!NAN(fVar63)) {
                    bVar22 = fVar63 == 0.05;
                    bVar20 = 0.05 <= fVar63;
                  }
                }
                if (!bVar20 || bVar22) {
                  fVar63 = *(float *)(lVar39 + 0x24) - pfVar34[2];
                  bVar22 = false;
                  bVar20 = true;
                  if (-0.05 <= fVar63) {
                    bVar22 = false;
                    bVar20 = true;
                    if (!NAN(fVar63)) {
                      bVar22 = fVar63 == 0.05;
                      bVar20 = 0.05 <= fVar63;
                    }
                  }
                  if (!bVar20 || bVar22) {
                    fVar63 = pfVar34[4];
                    if (fVar63 != fVar62) {
                      uVar41 = (int)fVar62 - (int)fVar63;
                      if ((uint)fVar62 <= (uint)fVar63) {
                        uVar41 = (int)fVar63 - (int)fVar62;
                      }
                      uVar60 = -uVar41;
                      if (uVar41 < 0x80000001) {
                        uVar60 = uVar41;
                      }
                      if (0x71c71c8 < uVar60) goto LAB_00941c70;
                    }
                    if ((uint)uVar44 != 0xffffffff) {
                      bVar22 = false;
                      if (0x3f < (uint)uVar44) {
                        pfVar30 = pfVar7;
                      }
                      if (*(float *)(lVar39 + 0x20) < pfVar30[1]) {
                        pfVar30[1] = *(float *)(lVar39 + 0x20);
                        uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
                      }
                      uVar44 = uVar44 & 0xffffffff;
                      goto joined_r0x00941d18;
                    }
                    break;
                  }
                }
LAB_00941c70:
                uVar44 = uVar44 + 1;
                pfVar30 = pfVar30 + 6;
              } while (uVar40 != uVar44);
              bVar22 = true;
              uVar44 = 0xffffffff;
joined_r0x00941d18:
              if (uVar40 == 0) {
                bVar20 = true;
                uVar46 = 0xffffffff;
                goto LAB_00941e2c;
              }
              uVar46 = 0;
              pfVar30 = pfVar7;
              do {
                pfVar34 = pfVar30;
                if (0x3f < uVar46) {
                  pfVar34 = pfVar7;
                }
                fVar63 = *(float *)(lVar39 + 0x28) - *pfVar34;
                bVar20 = false;
                bVar24 = true;
                if (-0.05 <= fVar63) {
                  bVar20 = false;
                  bVar24 = true;
                  if (!NAN(fVar63)) {
                    bVar20 = fVar63 == 0.05;
                    bVar24 = 0.05 <= fVar63;
                  }
                }
                if (!bVar24 || bVar20) {
                  fVar63 = *(float *)(lVar39 + 0x30) - pfVar34[2];
                  bVar20 = false;
                  bVar24 = true;
                  if (-0.05 <= fVar63) {
                    bVar20 = false;
                    bVar24 = true;
                    if (!NAN(fVar63)) {
                      bVar20 = fVar63 == 0.05;
                      bVar24 = 0.05 <= fVar63;
                    }
                  }
                  if (!bVar24 || bVar20) {
                    fVar63 = pfVar34[4];
                    if (fVar63 != fVar62) {
                      uVar41 = (int)fVar62 - (int)fVar63;
                      if ((uint)fVar62 <= (uint)fVar63) {
                        uVar41 = (int)fVar63 - (int)fVar62;
                      }
                      uVar60 = -uVar41;
                      if (uVar41 < 0x80000001) {
                        uVar60 = uVar41;
                      }
                      if (0x71c71c8 < uVar60) goto LAB_00941d80;
                    }
                    if ((uint)uVar46 != 0xffffffff) {
                      if (0x3f < (uint)uVar46) {
                        pfVar30 = pfVar7;
                      }
                      bVar20 = false;
                      if (*(float *)(lVar39 + 0x2c) < pfVar30[1]) {
                        pfVar30[1] = *(float *)(lVar39 + 0x2c);
                        uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
                      }
                      uVar46 = uVar46 & 0xffffffff;
                      goto joined_r0x00941e28;
                    }
                    break;
                  }
                }
LAB_00941d80:
                uVar46 = uVar46 + 1;
                pfVar30 = pfVar30 + 6;
              } while (uVar40 != uVar46);
              bVar20 = true;
              uVar46 = 0xffffffff;
joined_r0x00941e28:
              if (uVar40 == 0) goto LAB_00941e2c;
              uVar50 = 0;
              pfVar30 = pfVar7;
              do {
                pfVar34 = pfVar30;
                if (0x3f < uVar50) {
                  pfVar34 = pfVar7;
                }
                fVar63 = *(float *)(lVar39 + 0x10) - *pfVar34;
                bVar24 = false;
                bVar23 = true;
                if (-0.05 <= fVar63) {
                  bVar24 = false;
                  bVar23 = true;
                  if (!NAN(fVar63)) {
                    bVar24 = fVar63 == 0.05;
                    bVar23 = 0.05 <= fVar63;
                  }
                }
                if (!bVar23 || bVar24) {
                  fVar63 = *(float *)(lVar39 + 0x18) - pfVar34[2];
                  bVar24 = false;
                  bVar23 = true;
                  if (-0.05 <= fVar63) {
                    bVar24 = false;
                    bVar23 = true;
                    if (!NAN(fVar63)) {
                      bVar24 = fVar63 == 0.05;
                      bVar23 = 0.05 <= fVar63;
                    }
                  }
                  if (!bVar23 || bVar24) {
                    uVar50 = uVar50 & 0xffffffff;
                    goto LAB_00942278;
                  }
                }
                uVar50 = uVar50 + 1;
                pfVar30 = pfVar30 + 6;
              } while (uVar40 != uVar50);
              uVar50 = 0xffffffff;
LAB_00942278:
              uVar51 = 0;
              pfVar30 = pfVar7;
              do {
                pfVar34 = pfVar30;
                if (0x3f < uVar51) {
                  pfVar34 = pfVar7;
                }
                fVar63 = *(float *)(lVar39 + 0x1c) - *pfVar34;
                bVar24 = false;
                bVar23 = true;
                if (-0.05 <= fVar63) {
                  bVar24 = false;
                  bVar23 = true;
                  if (!NAN(fVar63)) {
                    bVar24 = fVar63 == 0.05;
                    bVar23 = 0.05 <= fVar63;
                  }
                }
                if (!bVar23 || bVar24) {
                  fVar63 = *(float *)(lVar39 + 0x24) - pfVar34[2];
                  bVar24 = false;
                  bVar23 = true;
                  if (-0.05 <= fVar63) {
                    bVar24 = false;
                    bVar23 = true;
                    if (!NAN(fVar63)) {
                      bVar24 = fVar63 == 0.05;
                      bVar23 = 0.05 <= fVar63;
                    }
                  }
                  if (!bVar23 || bVar24) {
                    uVar51 = uVar51 & 0xffffffff;
                    goto LAB_009422ec;
                  }
                }
                uVar51 = uVar51 + 1;
                pfVar30 = pfVar30 + 6;
              } while (uVar40 != uVar51);
              uVar51 = 0xffffffff;
LAB_009422ec:
              uVar52 = 0;
              pfVar30 = pfVar7;
              do {
                pfVar34 = pfVar30;
                if (0x3f < uVar52) {
                  pfVar34 = pfVar7;
                }
                fVar63 = *(float *)(lVar39 + 0x28) - *pfVar34;
                bVar24 = false;
                bVar23 = true;
                if (-0.05 <= fVar63) {
                  bVar24 = false;
                  bVar23 = true;
                  if (!NAN(fVar63)) {
                    bVar24 = fVar63 == 0.05;
                    bVar23 = 0.05 <= fVar63;
                  }
                }
                if (!bVar23 || bVar24) {
                  fVar63 = *(float *)(lVar39 + 0x30) - pfVar34[2];
                  bVar24 = false;
                  bVar23 = true;
                  if (-0.05 <= fVar63) {
                    bVar24 = false;
                    bVar23 = true;
                    if (!NAN(fVar63)) {
                      bVar24 = fVar63 == 0.05;
                      bVar23 = 0.05 <= fVar63;
                    }
                  }
                  if (!bVar23 || bVar24) {
                    uVar52 = uVar52 & 0xffffffff;
                    goto LAB_00941e38;
                  }
                }
                uVar52 = uVar52 + 1;
                pfVar30 = pfVar30 + 6;
              } while (uVar40 != uVar52);
            }
            uVar52 = 0xffffffff;
          }
LAB_00941e38:
          if ((((uint)uVar50 & (uint)uVar51) & uVar52) == 0xffffffff) {
            if (uVar40 < 0x40) {
              uVar44 = 0;
              fVar63 = (float)(*(int *)(param_2 + 0x266c) + 1);
              pfVar30 = pfVar7 + uVar40 * 6;
              *(float *)(param_2 + 0x266c) = fVar63;
              *pfVar30 = *(float *)(lVar39 + 0x10);
              pfVar30[1] = *(float *)(lVar39 + 0x14);
              fVar65 = *(float *)(lVar39 + 0x18);
              pfVar30[3] = fVar63;
              pfVar30[4] = fVar62;
              *(undefined2 *)(pfVar30 + 5) = 0;
              pfVar30[2] = fVar65;
              uVar43 = uVar40 + 1;
              *(int *)(param_2 + 0x2670) = (int)uVar43;
              pfVar30 = pfVar7;
              do {
                fVar65 = *(float *)(lVar39 + 0x1c) - *pfVar30;
                bVar21 = false;
                bVar22 = true;
                if (-0.05 <= fVar65) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar65)) {
                    bVar21 = fVar65 == 0.05;
                    bVar22 = 0.05 <= fVar65;
                  }
                }
                if (!bVar22 || bVar21) {
                  fVar65 = *(float *)(lVar39 + 0x24) - pfVar30[2];
                  bVar21 = false;
                  bVar22 = true;
                  if (-0.05 <= fVar65) {
                    bVar21 = false;
                    bVar22 = true;
                    if (!NAN(fVar65)) {
                      bVar21 = fVar65 == 0.05;
                      bVar22 = 0.05 <= fVar65;
                    }
                  }
                  if (!bVar22 || bVar21) {
                    fVar65 = pfVar30[4];
                    if (fVar65 != fVar62) {
                      uVar41 = (int)fVar62 - (int)fVar65;
                      if ((uint)fVar62 <= (uint)fVar65) {
                        uVar41 = (int)fVar65 - (int)fVar62;
                      }
                      uVar60 = -uVar41;
                      if (uVar41 < 0x80000001) {
                        uVar60 = uVar41;
                      }
                      if (0x71c71c8 < uVar60) goto LAB_00941ea0;
                    }
                    if ((int)uVar44 != 1) {
                      if (0x3f < (uint)-(int)uVar44) {
                        pfVar30 = pfVar7;
                      }
                      if (pfVar30[1] <= *(float *)(lVar39 + 0x20)) goto LAB_00941f48;
                      pfVar30[1] = *(float *)(lVar39 + 0x20);
                      uVar43 = (ulong)*(uint *)(param_2 + 0x2670);
                      if (*(uint *)(param_2 + 0x2670) != 0) goto LAB_00941f48;
                      fVar63 = *(float *)(lVar39 + 0x28);
                      uVar43 = 0;
                      goto LAB_00941ad4;
                    }
                    break;
                  }
                }
LAB_00941ea0:
                uVar44 = uVar44 - 1;
                pfVar30 = pfVar30 + 6;
              } while (~uVar40 != uVar44);
              if (uVar40 < 0x3f) {
                pfVar30 = pfVar7 + uVar43 * 6;
                *pfVar30 = *(float *)(lVar39 + 0x1c);
                pfVar30[1] = *(float *)(lVar39 + 0x20);
                fVar65 = *(float *)(lVar39 + 0x24);
                pfVar30[3] = fVar63;
                pfVar30[4] = fVar62;
                *(undefined2 *)(pfVar30 + 5) = 0;
                pfVar30[2] = fVar65;
                uVar43 = uVar40 + 2;
                *(int *)(param_2 + 0x2670) = (int)uVar43;
LAB_00941f48:
                fVar63 = *(float *)(lVar39 + 0x28);
                uVar40 = 0;
                pfVar30 = pfVar7;
                do {
                  pfVar34 = pfVar30;
                  if (0x3f < uVar40) {
                    pfVar34 = pfVar7;
                  }
                  fVar65 = fVar63 - *pfVar34;
                  bVar21 = false;
                  bVar22 = true;
                  if (-0.05 <= fVar65) {
                    bVar21 = false;
                    bVar22 = true;
                    if (!NAN(fVar65)) {
                      bVar21 = fVar65 == 0.05;
                      bVar22 = 0.05 <= fVar65;
                    }
                  }
                  if (!bVar22 || bVar21) {
                    fVar65 = *(float *)(lVar39 + 0x30) - pfVar34[2];
                    bVar21 = false;
                    bVar22 = true;
                    if (-0.05 <= fVar65) {
                      bVar21 = false;
                      bVar22 = true;
                      if (!NAN(fVar65)) {
                        bVar21 = fVar65 == 0.05;
                        bVar22 = 0.05 <= fVar65;
                      }
                    }
                    if (!bVar22 || bVar21) {
                      fVar65 = pfVar34[4];
                      if (fVar65 != fVar62) {
                        uVar41 = (int)fVar62 - (int)fVar65;
                        if ((uint)fVar62 <= (uint)fVar65) {
                          uVar41 = (int)fVar65 - (int)fVar62;
                        }
                        uVar60 = -uVar41;
                        if (uVar41 < 0x80000001) {
                          uVar60 = uVar41;
                        }
                        if (0x71c71c8 < uVar60) goto LAB_00941f60;
                      }
                      if ((uint)uVar40 != 0xffffffff) {
                        if (0x3f < (uint)uVar40) {
                          pfVar30 = pfVar7;
                        }
                        if (*(float *)(lVar39 + 0x2c) < pfVar30[1]) {
                          pfVar30[1] = *(float *)(lVar39 + 0x2c);
                        }
                        goto LAB_00941b00;
                      }
                      break;
                    }
                  }
LAB_00941f60:
                  uVar40 = uVar40 + 1;
                  pfVar30 = pfVar30 + 6;
                } while (uVar40 < uVar43);
                if (uVar43 < 0x40) {
LAB_00941ad4:
                  pfVar30 = pfVar7 + uVar43 * 6;
                  fVar65 = *(float *)(param_2 + 0x266c);
                  *pfVar30 = fVar63;
                  pfVar30[1] = *(float *)(lVar39 + 0x2c);
                  fVar63 = *(float *)(lVar39 + 0x30);
                  pfVar30[3] = fVar65;
                  pfVar30[4] = fVar62;
                  *(undefined2 *)(pfVar30 + 5) = 0;
                  pfVar30[2] = fVar63;
                  *(int *)(param_2 + 0x2670) = (int)uVar43 + 1;
                }
              }
            }
          }
          else {
            if (uVar50 == 0xffffffff) {
              fVar63 = 8.96831e-44;
            }
            else {
              pfVar30 = pfVar7 + uVar50 * 6;
              if (0x3f < uVar50) {
                pfVar30 = pfVar7;
              }
              fVar63 = pfVar30[3];
            }
            if (uVar51 != 0xffffffff) {
              pfVar30 = pfVar7 + uVar51 * 6;
              if (0x3f < uVar51) {
                pfVar30 = pfVar7;
              }
              if ((uint)pfVar30[3] <= (uint)fVar63) {
                fVar63 = pfVar30[3];
              }
            }
            if (uVar52 == 0xffffffff) {
              if (!bVar21) goto LAB_009420f0;
LAB_00942054:
              if (uVar40 < 0x40) {
                pfVar30 = pfVar7 + uVar40 * 6;
                *pfVar30 = *(float *)(lVar39 + 0x10);
                pfVar30[1] = *(float *)(lVar39 + 0x14);
                fVar65 = *(float *)(lVar39 + 0x18);
                pfVar30[3] = fVar63;
                pfVar30[4] = fVar62;
                *(undefined2 *)(pfVar30 + 5) = 0;
                pfVar30[2] = fVar65;
                *(int *)(param_2 + 0x2670) = (int)uVar40 + 1;
                uVar43 = uVar40;
                if (bVar22) goto LAB_00942118;
LAB_0094208c:
                pfVar30 = pfVar7 + uVar44 * 6;
                if (0x3f < uVar44) {
                  pfVar30 = pfVar7;
                }
                if (pfVar30[1] <= *(float *)(lVar39 + 0x20)) goto joined_r0x009421e0;
                pfVar30[1] = *(float *)(lVar39 + 0x20);
                if (bVar20) goto LAB_00942394;
                goto LAB_009420b0;
              }
            }
            else {
              pfVar30 = pfVar7 + uVar52 * 6;
              if (0x3f < uVar52) {
                pfVar30 = pfVar7;
              }
              if ((uint)pfVar30[3] <= (uint)fVar63) {
                fVar63 = pfVar30[3];
              }
              if (bVar21) goto LAB_00942054;
LAB_009420f0:
              pfVar30 = pfVar7 + uVar43 * 6;
              if (0x3f < uVar43) {
                pfVar30 = pfVar7;
              }
              if (*(float *)(lVar39 + 0x14) < pfVar30[1]) {
                pfVar30[1] = *(float *)(lVar39 + 0x14);
              }
              if (!bVar22) goto LAB_0094208c;
LAB_00942118:
              uVar41 = *(uint *)(param_2 + 0x2670);
              uVar44 = (ulong)uVar41;
              if (uVar41 == 0) {
                uVar40 = 0;
              }
              else {
                uVar40 = 0;
                pfVar30 = pfVar7;
                do {
                  pfVar34 = pfVar30;
                  if (0x3f < uVar40) {
                    pfVar34 = pfVar7;
                  }
                  fVar65 = *(float *)(lVar39 + 0x1c) - *pfVar34;
                  bVar21 = false;
                  bVar22 = true;
                  if (-0.05 <= fVar65) {
                    bVar21 = false;
                    bVar22 = true;
                    if (!NAN(fVar65)) {
                      bVar21 = fVar65 == 0.05;
                      bVar22 = 0.05 <= fVar65;
                    }
                  }
                  if (!bVar22 || bVar21) {
                    fVar65 = *(float *)(lVar39 + 0x24) - pfVar34[2];
                    bVar21 = false;
                    bVar22 = true;
                    if (-0.05 <= fVar65) {
                      bVar21 = false;
                      bVar22 = true;
                      if (!NAN(fVar65)) {
                        bVar21 = fVar65 == 0.05;
                        bVar22 = 0.05 <= fVar65;
                      }
                    }
                    if (!bVar22 || bVar21) {
                      fVar65 = pfVar34[4];
                      if (fVar65 != fVar62) {
                        uVar60 = (int)fVar62 - (int)fVar65;
                        if ((uint)fVar62 <= (uint)fVar65) {
                          uVar60 = (int)fVar65 - (int)fVar62;
                        }
                        uVar45 = -uVar60;
                        if (uVar60 < 0x80000001) {
                          uVar45 = uVar60;
                        }
                        if (0x71c71c8 < uVar45) goto LAB_00942140;
                      }
                      if ((uint)uVar40 != 0xffffffff) {
                        if (0x3f < (uint)uVar40) {
                          pfVar30 = pfVar7;
                        }
                        if (pfVar30[1] <= *(float *)(lVar39 + 0x20)) {
                          uVar44 = uVar40 & 0xffffffff;
                        }
                        else {
                          pfVar30[1] = *(float *)(lVar39 + 0x20);
                          uVar44 = uVar40 & 0xffffffff;
                        }
                        goto joined_r0x009421e0;
                      }
                      break;
                    }
                  }
LAB_00942140:
                  uVar40 = uVar40 + 1;
                  pfVar30 = pfVar30 + 6;
                } while (uVar44 != uVar40);
                uVar40 = uVar44;
                if (0x3f < uVar41) goto LAB_00941b00;
              }
              pfVar30 = pfVar7 + uVar40 * 6;
              *pfVar30 = *(float *)(lVar39 + 0x1c);
              pfVar30[1] = *(float *)(lVar39 + 0x20);
              fVar65 = *(float *)(lVar39 + 0x24);
              pfVar30[3] = fVar63;
              pfVar30[4] = fVar62;
              *(undefined2 *)(pfVar30 + 5) = 0;
              pfVar30[2] = fVar65;
              *(uint *)(param_2 + 0x2670) = uVar41 + 1;
joined_r0x009421e0:
              if (bVar20) {
LAB_00942394:
                uVar41 = *(uint *)(param_2 + 0x2670);
                uVar46 = (ulong)uVar41;
                if (uVar41 == 0) {
                  uVar40 = 0;
                }
                else {
                  uVar40 = 0;
                  pfVar30 = pfVar7;
                  do {
                    pfVar34 = pfVar30;
                    if (0x3f < uVar40) {
                      pfVar34 = pfVar7;
                    }
                    fVar65 = *(float *)(lVar39 + 0x28) - *pfVar34;
                    bVar21 = false;
                    bVar22 = true;
                    if (-0.05 <= fVar65) {
                      bVar21 = false;
                      bVar22 = true;
                      if (!NAN(fVar65)) {
                        bVar21 = fVar65 == 0.05;
                        bVar22 = 0.05 <= fVar65;
                      }
                    }
                    if (!bVar22 || bVar21) {
                      fVar65 = *(float *)(lVar39 + 0x30) - pfVar34[2];
                      bVar21 = false;
                      bVar22 = true;
                      if (-0.05 <= fVar65) {
                        bVar21 = false;
                        bVar22 = true;
                        if (!NAN(fVar65)) {
                          bVar21 = fVar65 == 0.05;
                          bVar22 = 0.05 <= fVar65;
                        }
                      }
                      if (!bVar22 || bVar21) {
                        fVar65 = pfVar34[4];
                        if (fVar65 != fVar62) {
                          uVar60 = (int)fVar62 - (int)fVar65;
                          if ((uint)fVar62 <= (uint)fVar65) {
                            uVar60 = (int)fVar65 - (int)fVar62;
                          }
                          uVar45 = -uVar60;
                          if (uVar60 < 0x80000001) {
                            uVar45 = uVar60;
                          }
                          if (0x71c71c8 < uVar45) goto LAB_009423b4;
                        }
                        if ((uint)uVar40 != 0xffffffff) {
                          if (0x3f < (uint)uVar40) {
                            pfVar30 = pfVar7;
                          }
                          if (pfVar30[1] <= *(float *)(lVar39 + 0x2c)) {
                            uVar46 = uVar40 & 0xffffffff;
                          }
                          else {
                            pfVar30[1] = *(float *)(lVar39 + 0x2c);
                            uVar46 = uVar40 & 0xffffffff;
                          }
                          goto LAB_00942490;
                        }
                        break;
                      }
                    }
LAB_009423b4:
                    uVar40 = uVar40 + 1;
                    pfVar30 = pfVar30 + 6;
                  } while (uVar46 != uVar40);
                  uVar40 = uVar46;
                  if (0x3f < uVar41) goto LAB_00941b00;
                }
                pfVar30 = pfVar7 + uVar40 * 6;
                *pfVar30 = *(float *)(lVar39 + 0x28);
                pfVar30[1] = *(float *)(lVar39 + 0x2c);
                fVar65 = *(float *)(lVar39 + 0x30);
                pfVar30[3] = fVar63;
                pfVar30[4] = fVar62;
                *(undefined2 *)(pfVar30 + 5) = 0;
                pfVar30[2] = fVar65;
                *(uint *)(param_2 + 0x2670) = uVar41 + 1;
              }
              else {
LAB_009420b0:
                pfVar30 = pfVar7 + uVar46 * 6;
                if (0x3f < uVar46) {
                  pfVar30 = pfVar7;
                }
                if (*(float *)(lVar39 + 0x2c) < pfVar30[1]) {
                  pfVar30[1] = *(float *)(lVar39 + 0x2c);
                }
              }
LAB_00942490:
              pfVar30 = pfVar7 + uVar43 * 6;
              if (0x3f < uVar43) {
                pfVar30 = pfVar7;
              }
              fVar62 = pfVar30[3];
              uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
              if ((fVar63 != fVar62) && (uVar40 != 0)) {
                uVar43 = 0;
                pfVar30 = pfVar7;
                do {
                  pfVar34 = pfVar30;
                  if (0x3f < uVar43) {
                    pfVar34 = pfVar7;
                  }
                  if (pfVar34[3] == fVar62) {
                    pfVar34[3] = fVar63;
                    uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
                  }
                  uVar43 = uVar43 + 1;
                  pfVar30 = pfVar30 + 6;
                } while (uVar43 < uVar40);
              }
              pfVar30 = pfVar7 + uVar44 * 6;
              if (0x3f < uVar44) {
                pfVar30 = pfVar7;
              }
              fVar62 = pfVar30[3];
              if (fVar63 != fVar62 && uVar40 != 0) {
                uVar43 = 0;
                pfVar30 = pfVar7;
                do {
                  pfVar34 = pfVar30;
                  if (0x3f < uVar43) {
                    pfVar34 = pfVar7;
                  }
                  if (pfVar34[3] == fVar62) {
                    pfVar34[3] = fVar63;
                    uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
                  }
                  uVar43 = uVar43 + 1;
                  pfVar30 = pfVar30 + 6;
                } while (uVar43 < uVar40);
              }
              pfVar30 = pfVar7 + uVar46 * 6;
              if (0x3f < uVar46) {
                pfVar30 = pfVar7;
              }
              fVar62 = pfVar30[3];
              if (fVar63 != fVar62 && uVar40 != 0) {
                uVar43 = 0;
                pfVar30 = pfVar7;
                do {
                  pfVar34 = pfVar30;
                  if (0x3f < uVar43) {
                    pfVar34 = pfVar7;
                  }
                  if (pfVar34[3] == fVar62) {
                    pfVar34[3] = fVar63;
                    uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
                  }
                  uVar43 = uVar43 + 1;
                  pfVar30 = pfVar30 + 6;
                } while (uVar43 < uVar40);
              }
            }
          }
LAB_00941b00:
          iVar26 = *(int *)(param_2 + 0xe4);
        }
        uVar29 = uVar29 + 1;
      } while ((long)uVar29 < (long)iVar26);
    }
    uVar29 = (ulong)*(uint *)(param_2 + 0x24e8);
    if (*(uint *)(param_2 + 0x24e8) == 0) {
      uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
    }
    else {
      uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
      uVar43 = 0;
      pfVar7 = (float *)(param_2 + 0x2674);
      do {
        pfVar30 = (float *)(param_2 + 0x24ec) + uVar43 * 3;
        if (0x1f < uVar43) {
          pfVar30 = (float *)(param_2 + 0x24ec);
        }
        uVar41 = (uint)uVar40;
        if (uVar41 == 0) {
          uVar40 = 0;
LAB_00942704:
          iVar17 = *(int *)(param_2 + 0x266c);
          pfVar34 = pfVar7 + uVar40 * 6;
          uVar40 = (ulong)(uVar41 + 1);
          iVar26 = 0;
          fVar62 = (float)(iVar17 + 1);
          *(float *)(param_2 + 0x266c) = fVar62;
          *pfVar34 = *pfVar30;
          pfVar34[1] = pfVar30[1];
          fVar63 = pfVar30[2];
          pfVar34[3] = fVar62;
          pfVar34[4] = 0.0;
          *(undefined2 *)(pfVar34 + 5) = 1;
          *(uint *)(param_2 + 0x2670) = uVar41 + 1;
          pfVar34[2] = fVar63;
          *(int *)(param_2 + 0x266c) = iVar17 + 2;
          fVar62 = (*(float *)(param_2 + 8) - *pfVar30) * 0.1;
          fVar63 = (*(float *)(param_2 + 0x10) - pfVar30[2]) * 0.1;
          do {
            if (iVar26 == 2) {
              if (fVar62 < -0.43) {
                fVar65 = -0.0;
                fVar64 = -5.0;
LAB_00942804:
                fVar67 = 5.0;
                fVar66 = -5.0;
LAB_0094280c:
                fVar66 = fVar66 + *pfVar30;
                fVar70 = pfVar30[1] + 0.0;
                fVar69 = fVar64 + pfVar30[2];
                fVar64 = fVar64 + *pfVar30;
                fVar67 = fVar67 + pfVar30[2];
                fVar72 = fVar70 - fVar70;
                fVar71 = fVar64 - fVar66;
                fVar73 = fVar67 - fVar69;
                bVar21 = false;
                bVar22 = true;
                if (-1.1920929e-07 <= fVar71) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar71)) {
                    bVar21 = fVar71 == 1.1920929e-07;
                    bVar22 = 1.1920929e-07 <= fVar71;
                  }
                }
                bVar20 = true;
                bVar24 = false;
                if (!bVar22 || bVar21) {
                  bVar20 = false;
                  bVar24 = true;
                  if (!NAN(fVar72)) {
                    bVar20 = fVar72 < -1.1920929e-07;
                    bVar24 = false;
                  }
                }
                bVar21 = false;
                bVar22 = true;
                if (bVar20 == bVar24) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar72)) {
                    bVar21 = fVar72 == 1.1920929e-07;
                    bVar22 = 1.1920929e-07 <= fVar72;
                  }
                }
                bVar20 = true;
                bVar24 = false;
                if (!bVar22 || bVar21) {
                  bVar20 = false;
                  bVar24 = true;
                  if (!NAN(fVar73)) {
                    bVar20 = fVar73 < -1.1920929e-07;
                    bVar24 = false;
                  }
                }
                bVar21 = false;
                bVar22 = true;
                if (bVar20 == bVar24) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar73)) {
                    bVar21 = fVar73 == 1.1920929e-07;
                    bVar22 = 1.1920929e-07 <= fVar73;
                  }
                }
                if (!bVar22 || bVar21) break;
                fVar68 = SQRT(fVar72 * fVar72 + fVar71 * fVar71 + fVar73 * fVar73);
                if (0.0 < fVar68) {
                  fVar74 = 1.0 / fVar68;
                  fVar71 = fVar71 * fVar74;
                  fVar72 = fVar72 * fVar74;
                  fVar73 = fVar73 * fVar74;
                }
                bVar21 = false;
                fVar74 = fVar70;
                while( true ) {
                  fVar75 = (float)*(int *)(param_2 + 0x4d20) * 5.0 + 5.0;
                  bVar22 = false;
                  if (((float)*(int *)(param_2 + 0x4d10) * 5.0 <= fVar66) &&
                     (bVar22 = false, !NAN(fVar66) && !NAN(fVar75))) {
                    bVar22 = fVar66 < fVar75;
                  }
                  if (bVar22) {
                    fVar75 = (float)*(int *)(param_2 + 0x4d24) * 5.0 + 5.0;
                    bVar22 = false;
                    if (((float)*(int *)(param_2 + 0x4d14) * 5.0 <= fVar69) &&
                       (bVar22 = false, !NAN(fVar69) && !NAN(fVar75))) {
                      bVar22 = fVar69 < fVar75;
                    }
                    if (bVar22) {
                      pfVar34 = pfVar7 + uVar40 * 6;
                      if (0x3f < (uint)uVar40) {
                        pfVar34 = pfVar7;
                      }
                      *pfVar34 = fVar66;
                      pfVar34[1] = fVar74;
                      pfVar34[2] = fVar69;
                      pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                      if (0x3f < *(uint *)(param_2 + 0x2670)) {
                        pfVar34 = pfVar7;
                      }
                      pfVar34[4] = fVar65;
                      pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                      if (0x3f < *(uint *)(param_2 + 0x2670)) {
                        pfVar34 = pfVar7;
                      }
                      pfVar34[3] = *(float *)(param_2 + 0x266c);
                      pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                      if (0x3f < *(uint *)(param_2 + 0x2670)) {
                        pfVar34 = pfVar7;
                      }
                      *(undefined1 *)(pfVar34 + 5) = 0;
                      pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                      if (0x3f < *(uint *)(param_2 + 0x2670)) {
                        pfVar34 = pfVar7;
                      }
                      *(undefined1 *)((long)pfVar34 + 0x15) = 1;
                      uVar41 = *(int *)(param_2 + 0x2670) + 1;
                      uVar40 = (ulong)uVar41;
                      *(uint *)(param_2 + 0x2670) = uVar41;
                    }
                  }
                  if (bVar21) break;
                  if (fVar68 <= 0.0) {
                    do {
                      fVar66 = (float)*(int *)(param_2 + 0x4d20) * 5.0 + 5.0;
                      bVar21 = false;
                      if (((float)*(int *)(param_2 + 0x4d10) * 5.0 <= fVar64) &&
                         (bVar21 = false, !NAN(fVar64) && !NAN(fVar66))) {
                        bVar21 = fVar64 < fVar66;
                      }
                      if (bVar21) {
                        fVar66 = (float)*(int *)(param_2 + 0x4d24) * 5.0 + 5.0;
                        bVar21 = false;
                        if (((float)*(int *)(param_2 + 0x4d14) * 5.0 <= fVar67) &&
                           (bVar21 = false, !NAN(fVar67) && !NAN(fVar66))) {
                          bVar21 = fVar67 < fVar66;
                        }
                        if (bVar21) {
                          pfVar34 = pfVar7 + uVar40 * 6;
                          if (0x3f < (uint)uVar40) {
                            pfVar34 = pfVar7;
                          }
                          *pfVar34 = fVar64;
                          pfVar34[1] = fVar70;
                          pfVar34[2] = fVar67;
                          pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                          if (0x3f < *(uint *)(param_2 + 0x2670)) {
                            pfVar34 = pfVar7;
                          }
                          pfVar34[4] = fVar65;
                          pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                          if (0x3f < *(uint *)(param_2 + 0x2670)) {
                            pfVar34 = pfVar7;
                          }
                          pfVar34[3] = *(float *)(param_2 + 0x266c);
                          pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                          if (0x3f < *(uint *)(param_2 + 0x2670)) {
                            pfVar34 = pfVar7;
                          }
                          *(undefined1 *)(pfVar34 + 5) = 0;
                          pfVar34 = pfVar7 + (ulong)*(uint *)(param_2 + 0x2670) * 6;
                          if (0x3f < *(uint *)(param_2 + 0x2670)) {
                            pfVar34 = pfVar7;
                          }
                          *(undefined1 *)((long)pfVar34 + 0x15) = 1;
                          uVar41 = *(int *)(param_2 + 0x2670) + 1;
                          uVar40 = (ulong)uVar41;
                          *(uint *)(param_2 + 0x2670) = uVar41;
                        }
                      }
                      if (fVar68 <= 0.0) goto LAB_00942770;
                    } while (fVar68 <= 0.0);
                    fVar66 = fVar64;
                    fVar69 = fVar67;
                    fVar74 = fVar70;
                  }
                  bVar21 = fVar68 <= 0.0;
                  fVar66 = fVar71 * 5.0 + fVar66;
                  fVar74 = fVar72 * 5.0 + fVar74;
                  fVar69 = fVar73 * 5.0 + fVar69;
                  fVar68 = fVar68 + -5.0;
                }
              }
            }
            else if (iVar26 == 1) {
              if (0.43 < fVar62) {
                fVar65 = 0.0;
                fVar64 = 5.0;
LAB_009427c4:
                fVar67 = -5.0;
                fVar66 = 5.0;
                goto LAB_0094280c;
              }
            }
            else if (iVar26 == 0) {
              if (fVar63 < -0.43) {
                fVar64 = -5.0;
                fVar65 = -2.0;
                goto LAB_009427c4;
              }
            }
            else if (0.43 < fVar63) {
              fVar64 = 5.0;
              fVar65 = 2.0;
              goto LAB_00942804;
            }
LAB_00942770:
            iVar26 = iVar26 + 1;
          } while (iVar26 != 4);
          uVar29 = (ulong)*(uint *)(param_2 + 0x24e8);
        }
        else {
          uVar44 = 0;
          pfVar34 = pfVar7;
          do {
            pfVar9 = pfVar34;
            if (0x3f < uVar44) {
              pfVar9 = pfVar7;
            }
            fVar62 = *pfVar30 - *pfVar9;
            bVar21 = false;
            bVar22 = true;
            if (-0.05 <= fVar62) {
              bVar21 = false;
              bVar22 = true;
              if (!NAN(fVar62)) {
                bVar21 = fVar62 == 0.05;
                bVar22 = 0.05 <= fVar62;
              }
            }
            if (!bVar22 || bVar21) {
              fVar62 = pfVar30[2] - pfVar9[2];
              bVar21 = false;
              bVar22 = true;
              if (-0.05 <= fVar62) {
                bVar21 = false;
                bVar22 = true;
                if (!NAN(fVar62)) {
                  bVar21 = fVar62 == 0.05;
                  bVar22 = 0.05 <= fVar62;
                }
              }
              if (!bVar22 || bVar21) {
                if ((0x3f < uVar41) || (uVar44 != 0xffffffff)) goto LAB_00942654;
                goto LAB_00942704;
              }
            }
            uVar44 = uVar44 + 1;
            pfVar34 = pfVar34 + 6;
          } while (uVar40 != uVar44);
          if (uVar41 < 0x40) goto LAB_00942704;
        }
LAB_00942654:
        uVar43 = uVar43 + 1;
      } while (uVar43 < uVar29);
    }
    if (1 < (uint)uVar40) {
      pfVar7 = (float *)(param_2 + 0x2674);
      lVar39 = param_2 + 0xe8;
      uVar29 = 1;
      fVar62 = *(float *)(param_2 + 0x2c) * 1.5;
      puVar4 = PTR_DAT_04bb2010 + 0x10;
      uVar43 = 0;
      do {
        uVar44 = uVar43 + 1;
        if (uVar44 < uVar40) {
          uVar46 = uVar29;
          pfVar30 = pfVar7 + uVar43 * 6;
          if (0x3f < uVar43) {
            pfVar30 = pfVar7;
          }
          do {
            if (*(char *)(pfVar30 + 5) == '\0') {
              pfVar34 = pfVar7 + uVar46 * 6;
              if (0x3f < uVar46) {
                pfVar34 = pfVar7;
              }
              if (*(char *)(pfVar34 + 5) != '\0') {
LAB_00942bd4:
                cVar58 = *(char *)(pfVar30 + 5);
                goto LAB_00942bd8;
              }
              fVar63 = *pfVar34 - *pfVar30;
              fVar65 = pfVar34[2] - pfVar30[2];
              bVar21 = false;
              bVar22 = true;
              if (-1.1920929e-07 <= fVar63) {
                bVar21 = false;
                bVar22 = true;
                if (!NAN(fVar63)) {
                  bVar21 = fVar63 == 1.1920929e-07;
                  bVar22 = 1.1920929e-07 <= fVar63;
                }
              }
              bVar20 = true;
              bVar24 = false;
              if (!bVar22 || bVar21) {
                bVar20 = false;
                bVar24 = true;
                if (!NAN(fVar65)) {
                  bVar20 = fVar65 < -1.1920929e-07;
                  bVar24 = false;
                }
              }
              bVar21 = false;
              bVar22 = true;
              if (bVar20 == bVar24) {
                bVar21 = false;
                bVar22 = true;
                if (!NAN(fVar65)) {
                  bVar21 = fVar65 == 1.1920929e-07;
                  bVar22 = 1.1920929e-07 <= fVar65;
                }
              }
              if (!bVar22 || bVar21) {
                fVar64 = 0.0;
LAB_00942f70:
                bVar21 = true;
                bVar22 = false;
                if (fVar63 <= 1.1920929e-07) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar63)) {
                    bVar21 = fVar63 < -1.1920929e-07;
                    bVar22 = false;
                  }
                }
                bVar20 = false;
                bVar24 = true;
                if (bVar21 == bVar22) {
                  bVar20 = false;
                  bVar24 = true;
                  if (!NAN(fVar64)) {
                    bVar20 = fVar64 == 1.1920929e-07;
                    bVar24 = 1.1920929e-07 <= fVar64;
                  }
                }
                bVar21 = true;
                bVar22 = false;
                if (!bVar24 || bVar20) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar64)) {
                    bVar21 = fVar64 < -1.1920929e-07;
                    bVar22 = false;
                  }
                }
                bVar20 = false;
                bVar24 = true;
                if (bVar21 == bVar22) {
                  bVar20 = false;
                  bVar24 = true;
                  if (!NAN(fVar65)) {
                    bVar20 = fVar65 == 1.1920929e-07;
                    bVar24 = 1.1920929e-07 <= fVar65;
                  }
                }
                bVar21 = true;
                bVar22 = false;
                if (!bVar24 || bVar20) {
                  bVar21 = false;
                  bVar22 = true;
                  if (!NAN(fVar65)) {
                    bVar21 = fVar65 < -1.1920929e-07;
                    bVar22 = false;
                  }
                }
                if (bVar21 != bVar22) {
                  fVar67 = -fVar63;
                  fVar66 = -fVar65;
                  fVar63 = SQRT(fVar64 * fVar64 + fVar63 * fVar63 + fVar65 * fVar65);
                  if (0.0 < fVar63) {
                    fVar63 = 1.0 / fVar63;
                    fVar67 = fVar63 * fVar67;
                    fVar66 = fVar63 * fVar66;
                  }
                  fVar65 = (float)FUN_006f0400(fVar66,fVar67);
                  fVar63 = pfVar34[4];
                  if ((int)fVar63 - (int)fVar65 != 0) {
                    uVar41 = (int)fVar63 - (int)fVar65;
                    if ((uint)fVar63 <= (uint)fVar65) {
                      uVar41 = (int)fVar65 - (int)fVar63;
                    }
                    uVar60 = -uVar41;
                    if (uVar41 < 0x80000001) {
                      uVar60 = uVar41;
                    }
                    if (0x40b60b7f < uVar60) goto LAB_00942ba0;
                  }
                }
                goto LAB_00942bd4;
              }
              fVar64 = 0.0;
              fVar66 = SQRT(fVar63 * fVar63 + 0.0 + fVar65 * fVar65);
              if (0.0 < fVar66) {
                fVar66 = 1.0 / fVar66;
                fVar63 = fVar63 * fVar66;
                fVar64 = fVar66 * 0.0;
                fVar65 = fVar65 * fVar66;
              }
              fVar67 = (float)FUN_006f0400(fVar65,fVar63);
              fVar66 = pfVar30[4];
              if ((int)fVar66 - (int)fVar67 == 0) goto LAB_00942f70;
              uVar41 = (int)fVar66 - (int)fVar67;
              if ((uint)fVar66 <= (uint)fVar67) {
                uVar41 = (int)fVar67 - (int)fVar66;
              }
              uVar60 = -uVar41;
              if (uVar41 < 0x80000001) {
                uVar60 = uVar41;
              }
              if (uVar60 < 0x40b60b80) goto LAB_00942f70;
            }
            else {
              cVar58 = '\x01';
LAB_00942bd8:
              pfVar34 = pfVar7 + uVar46 * 6;
              if (0x3f < uVar46) {
                pfVar34 = pfVar7;
              }
              cVar12 = *(char *)(pfVar34 + 5);
              bVar21 = *(char *)((long)pfVar34 + 0x15) == '\0';
              if (((*(char *)((long)pfVar30 + 0x15) == '\0' || bVar21 && cVar12 == '\0') &&
                  (bVar21 || cVar58 == '\0')) && (cVar58 == '\0') == (cVar12 == '\0')) {
                fVar65 = *pfVar30;
                fVar64 = *pfVar34;
                fVar63 = pfVar30[2];
                fVar66 = pfVar34[2];
                fVar67 = SQRT((fVar63 - fVar66) * (fVar63 - fVar66) +
                              (fVar65 - fVar64) * (fVar65 - fVar64));
                if (3.6 <= fVar67) {
                  if (pfVar30[3] == pfVar34[3]) {
                    fVar69 = pfVar30[4];
                    fVar70 = pfVar34[4];
                    if ((int)fVar69 - (int)fVar70 != 0) {
                      uVar41 = (int)fVar69 - (int)fVar70;
                      if ((uint)fVar69 <= (uint)fVar70) {
                        uVar41 = (int)fVar70 - (int)fVar69;
                      }
                      uVar60 = -uVar41;
                      if (uVar41 < 0x80000001) {
                        uVar60 = uVar41;
                      }
                      if (0x40b60b7f < uVar60) {
                        uVar41 = *(uint *)(param_2 + 0xe4);
                        uVar40 = (ulong)uVar41;
                        if ((int)uVar41 < 1) {
                          bVar21 = false;
                        }
                        else {
                          uVar50 = 0;
                          bVar21 = true;
                          lVar55 = lVar39;
                          do {
                            lVar35 = lVar55;
                            if (0x3f < uVar50) {
                              lVar35 = lVar39;
                            }
                            if ((*(float *)(lVar35 + 0x10) == fVar65) &&
                               (*(float *)(lVar35 + 0x18) == fVar63)) {
                              bVar53 = 1;
                            }
                            else {
                              bVar53 = 0;
                            }
                            if ((*(float *)(lVar35 + 0x1c) == fVar65) &&
                               (*(float *)(lVar35 + 0x24) == fVar63)) {
                              bVar53 = 1;
                            }
                            if ((*(float *)(lVar35 + 0x28) == fVar65) &&
                               (*(float *)(lVar35 + 0x30) == fVar63)) {
                              bVar53 = 1;
                            }
                            if ((*(float *)(lVar35 + 0x10) == fVar64) &&
                               (*(float *)(lVar35 + 0x18) == fVar66)) {
                              bVar25 = 1;
                            }
                            else {
                              bVar25 = 0;
                            }
                            if ((*(float *)(lVar35 + 0x1c) == fVar64) &&
                               (*(float *)(lVar35 + 0x24) == fVar66)) {
                              bVar25 = 1;
                            }
                            if ((*(float *)(lVar35 + 0x28) == fVar64) &&
                               (*(float *)(lVar35 + 0x30) == fVar66)) {
                              bVar25 = 1;
                            }
                            if ((bool)(bVar53 & bVar25)) break;
                            uVar50 = uVar50 + 1;
                            lVar55 = lVar55 + 0x90;
                            bVar21 = uVar50 < uVar40;
                          } while (uVar40 != uVar50);
                        }
                        if (((fVar67 < fVar62) && (0.0 < fVar67)) && (!bVar21)) {
                          if ((*(uint *)(param_2 + 0x2670) != 0) && (0 < (int)uVar41)) {
                            uVar50 = 0;
                            do {
                              if ((uVar43 != uVar50) && (uVar46 != uVar50)) {
                                uVar51 = 0;
                                pfVar9 = pfVar7 + uVar50 * 6;
                                if (0x3f < uVar50) {
                                  pfVar9 = pfVar7;
                                }
                                fVar69 = *pfVar9;
                                fVar70 = pfVar9[2];
                                bVar21 = true;
                                lVar55 = lVar39;
                                do {
                                  lVar35 = lVar55;
                                  if (0x3f < uVar51) {
                                    lVar35 = lVar39;
                                  }
                                  if ((*(float *)(lVar35 + 0x10) == fVar65) &&
                                     (*(float *)(lVar35 + 0x18) == fVar63)) {
                                    bVar53 = 1;
                                  }
                                  else {
                                    bVar53 = 0;
                                  }
                                  if ((*(float *)(lVar35 + 0x1c) == fVar65) &&
                                     (*(float *)(lVar35 + 0x24) == fVar63)) {
                                    bVar53 = 1;
                                  }
                                  if ((*(float *)(lVar35 + 0x28) == fVar65) &&
                                     (*(float *)(lVar35 + 0x30) == fVar63)) {
                                    bVar53 = 1;
                                  }
                                  if ((*(float *)(lVar35 + 0x10) == fVar69) &&
                                     (*(float *)(lVar35 + 0x18) == fVar70)) {
                                    bVar25 = 1;
                                  }
                                  else {
                                    bVar25 = 0;
                                  }
                                  if ((*(float *)(lVar35 + 0x1c) == fVar69) &&
                                     (*(float *)(lVar35 + 0x24) == fVar70)) {
                                    bVar25 = 1;
                                  }
                                  if ((*(float *)(lVar35 + 0x28) == fVar69) &&
                                     (*(float *)(lVar35 + 0x30) == fVar70)) {
                                    bVar25 = 1;
                                  }
                                  if ((bool)(bVar53 & bVar25)) break;
                                  uVar51 = uVar51 + 1;
                                  lVar55 = lVar55 + 0x90;
                                  bVar21 = uVar51 < uVar40;
                                } while (uVar40 != uVar51);
                                if (bVar21) {
                                  fVar71 = SQRT((fVar66 - fVar70) * (fVar66 - fVar70) +
                                                (fVar64 - fVar69) * (fVar64 - fVar69));
                                  bVar21 = false;
                                  bVar22 = true;
                                  bVar20 = false;
                                  if (3.6 <= fVar71) {
                                    bVar21 = false;
                                    bVar22 = false;
                                    bVar20 = true;
                                    if (!NAN(fVar67) && !NAN(fVar71)) {
                                      bVar21 = fVar67 < fVar71;
                                      bVar22 = fVar67 == fVar71;
                                      bVar20 = false;
                                    }
                                  }
                                  if (!bVar22 && bVar21 == bVar20) goto LAB_00942ba0;
                                }
                                uVar51 = 0;
                                bVar21 = true;
                                lVar55 = lVar39;
                                do {
                                  lVar35 = lVar55;
                                  if (0x3f < uVar51) {
                                    lVar35 = lVar39;
                                  }
                                  if ((*(float *)(lVar35 + 0x10) == fVar64) &&
                                     (*(float *)(lVar35 + 0x18) == fVar66)) {
                                    bVar53 = 1;
                                  }
                                  else {
                                    bVar53 = 0;
                                  }
                                  if ((*(float *)(lVar35 + 0x1c) == fVar64) &&
                                     (*(float *)(lVar35 + 0x24) == fVar66)) {
                                    bVar53 = 1;
                                  }
                                  if ((*(float *)(lVar35 + 0x28) == fVar64) &&
                                     (*(float *)(lVar35 + 0x30) == fVar66)) {
                                    bVar53 = 1;
                                  }
                                  if ((*(float *)(lVar35 + 0x10) == fVar69) &&
                                     (*(float *)(lVar35 + 0x18) == fVar70)) {
                                    bVar25 = 1;
                                  }
                                  else {
                                    bVar25 = 0;
                                  }
                                  if ((*(float *)(lVar35 + 0x1c) == fVar69) &&
                                     (*(float *)(lVar35 + 0x24) == fVar70)) {
                                    bVar25 = 1;
                                  }
                                  if ((*(float *)(lVar35 + 0x28) == fVar69) &&
                                     (*(float *)(lVar35 + 0x30) == fVar70)) {
                                    bVar25 = 1;
                                  }
                                  if ((bool)(bVar53 & bVar25)) break;
                                  uVar51 = uVar51 + 1;
                                  lVar55 = lVar55 + 0x90;
                                  bVar21 = uVar51 < uVar40;
                                } while (uVar40 != uVar51);
                                if (bVar21) {
                                  fVar69 = SQRT((fVar63 - fVar70) * (fVar63 - fVar70) +
                                                (fVar65 - fVar69) * (fVar65 - fVar69));
                                  bVar21 = false;
                                  bVar22 = true;
                                  bVar20 = false;
                                  if (3.6 <= fVar69) {
                                    bVar21 = false;
                                    bVar22 = false;
                                    bVar20 = true;
                                    if (!NAN(fVar67) && !NAN(fVar69)) {
                                      bVar21 = fVar67 < fVar69;
                                      bVar22 = fVar67 == fVar69;
                                      bVar20 = false;
                                    }
                                  }
                                  if (!bVar22 && bVar21 == bVar20) goto LAB_00942ba0;
                                }
                              }
                              uVar50 = uVar50 + 1;
                            } while (uVar50 != *(uint *)(param_2 + 0x2670));
                          }
                          goto LAB_00943580;
                        }
                      }
                    }
                  }
                  else if ((cVar58 == '\0') || (cVar12 == '\0')) {
                    uVar41 = *(uint *)(param_2 + 0xe4);
                    uVar40 = (ulong)uVar41;
                    if ((int)uVar41 < 1) {
                      bVar21 = false;
                    }
                    else {
                      uVar50 = 0;
                      bVar21 = true;
                      lVar55 = lVar39;
                      do {
                        lVar35 = lVar55;
                        if (0x3f < uVar50) {
                          lVar35 = lVar39;
                        }
                        if ((*(float *)(lVar35 + 0x10) == fVar65) &&
                           (*(float *)(lVar35 + 0x18) == fVar63)) {
                          bVar53 = 1;
                        }
                        else {
                          bVar53 = 0;
                        }
                        if ((*(float *)(lVar35 + 0x1c) == fVar65) &&
                           (*(float *)(lVar35 + 0x24) == fVar63)) {
                          bVar53 = 1;
                        }
                        if ((*(float *)(lVar35 + 0x28) == fVar65) &&
                           (*(float *)(lVar35 + 0x30) == fVar63)) {
                          bVar53 = 1;
                        }
                        if ((*(float *)(lVar35 + 0x10) == fVar64) &&
                           (*(float *)(lVar35 + 0x18) == fVar66)) {
                          bVar25 = 1;
                        }
                        else {
                          bVar25 = 0;
                        }
                        if ((*(float *)(lVar35 + 0x1c) == fVar64) &&
                           (*(float *)(lVar35 + 0x24) == fVar66)) {
                          bVar25 = 1;
                        }
                        if ((*(float *)(lVar35 + 0x28) == fVar64) &&
                           (*(float *)(lVar35 + 0x30) == fVar66)) {
                          bVar25 = 1;
                        }
                        if ((bool)(bVar53 & bVar25)) break;
                        uVar50 = uVar50 + 1;
                        lVar55 = lVar55 + 0x90;
                        bVar21 = uVar50 < uVar40;
                      } while (uVar40 != uVar50);
                    }
                    if (((fVar67 < fVar62) && (0.0 < fVar67)) && (!bVar21)) {
                      if (*(uint *)(param_2 + 0x2670) != 0) {
                        uVar50 = 0;
                        do {
                          if ((uVar43 != uVar50) && (uVar46 != uVar50)) {
                            pfVar9 = pfVar7 + uVar50 * 6;
                            if (0x3f < uVar50) {
                              pfVar9 = pfVar7;
                            }
                            if ((int)uVar41 < 1) {
LAB_0094317c:
                              if (pfVar30[3] == pfVar9[3]) {
                                fVar69 = *pfVar9;
                                fVar70 = pfVar9[2];
                                goto LAB_00943190;
                              }
                            }
                            else {
                              fVar69 = *pfVar9;
                              uVar51 = 0;
                              bVar21 = true;
                              fVar70 = pfVar9[2];
                              lVar55 = lVar39;
                              do {
                                lVar35 = lVar55;
                                if (0x3f < uVar51) {
                                  lVar35 = lVar39;
                                }
                                if ((*(float *)(lVar35 + 0x10) == fVar65) &&
                                   (*(float *)(lVar35 + 0x18) == fVar63)) {
                                  bVar53 = 1;
                                }
                                else {
                                  bVar53 = 0;
                                }
                                if ((*(float *)(lVar35 + 0x1c) == fVar65) &&
                                   (*(float *)(lVar35 + 0x24) == fVar63)) {
                                  bVar53 = 1;
                                }
                                if ((*(float *)(lVar35 + 0x28) == fVar65) &&
                                   (*(float *)(lVar35 + 0x30) == fVar63)) {
                                  bVar53 = 1;
                                }
                                if ((*(float *)(lVar35 + 0x10) == fVar69) &&
                                   (*(float *)(lVar35 + 0x18) == fVar70)) {
                                  bVar31 = 1;
                                  bVar25 = 1;
                                }
                                else {
                                  bVar31 = 0;
                                  bVar25 = 0;
                                }
                                if ((*(float *)(lVar35 + 0x1c) == fVar69) &&
                                   (bVar25 = bVar31, *(float *)(lVar35 + 0x24) == fVar70)) {
                                  bVar25 = 1;
                                }
                                if ((*(float *)(lVar35 + 0x28) == fVar69) &&
                                   (*(float *)(lVar35 + 0x30) == fVar70)) {
                                  bVar25 = 1;
                                }
                                if ((bool)(bVar53 & bVar25)) break;
                                uVar51 = uVar51 + 1;
                                lVar55 = lVar55 + 0x90;
                                bVar21 = uVar51 < uVar40;
                              } while (uVar40 != uVar51);
                              if (!bVar21) goto LAB_0094317c;
LAB_00943190:
                              fVar69 = SQRT((fVar66 - fVar70) * (fVar66 - fVar70) +
                                            (fVar64 - fVar69) * (fVar64 - fVar69));
                              bVar21 = false;
                              bVar22 = true;
                              bVar20 = false;
                              if (3.6 <= fVar69) {
                                bVar21 = false;
                                bVar22 = false;
                                bVar20 = true;
                                if (!NAN(fVar67) && !NAN(fVar69)) {
                                  bVar21 = fVar67 < fVar69;
                                  bVar22 = fVar67 == fVar69;
                                  bVar20 = false;
                                }
                              }
                              if (!bVar22 && bVar21 == bVar20) goto LAB_00942ba0;
                            }
                            if ((int)uVar41 < 1) {
LAB_009432bc:
                              if (pfVar34[3] != pfVar9[3]) goto LAB_00943044;
                              fVar69 = *pfVar9;
                              fVar70 = pfVar9[2];
                            }
                            else {
                              fVar69 = *pfVar9;
                              uVar51 = 0;
                              bVar21 = true;
                              fVar70 = pfVar9[2];
                              lVar55 = lVar39;
                              do {
                                lVar35 = lVar55;
                                if (0x3f < uVar51) {
                                  lVar35 = lVar39;
                                }
                                if ((*(float *)(lVar35 + 0x10) == fVar64) &&
                                   (*(float *)(lVar35 + 0x18) == fVar66)) {
                                  bVar53 = 1;
                                }
                                else {
                                  bVar53 = 0;
                                }
                                if ((*(float *)(lVar35 + 0x1c) == fVar64) &&
                                   (*(float *)(lVar35 + 0x24) == fVar66)) {
                                  bVar53 = 1;
                                }
                                if ((*(float *)(lVar35 + 0x28) == fVar64) &&
                                   (*(float *)(lVar35 + 0x30) == fVar66)) {
                                  bVar53 = 1;
                                }
                                if ((*(float *)(lVar35 + 0x10) == fVar69) &&
                                   (*(float *)(lVar35 + 0x18) == fVar70)) {
                                  bVar31 = 1;
                                  bVar25 = 1;
                                }
                                else {
                                  bVar31 = 0;
                                  bVar25 = 0;
                                }
                                if ((*(float *)(lVar35 + 0x1c) == fVar69) &&
                                   (bVar25 = bVar31, *(float *)(lVar35 + 0x24) == fVar70)) {
                                  bVar25 = 1;
                                }
                                if ((*(float *)(lVar35 + 0x28) == fVar69) &&
                                   (*(float *)(lVar35 + 0x30) == fVar70)) {
                                  bVar25 = 1;
                                }
                                if ((bool)(bVar53 & bVar25)) break;
                                uVar51 = uVar51 + 1;
                                lVar55 = lVar55 + 0x90;
                                bVar21 = uVar51 < uVar40;
                              } while (uVar40 != uVar51);
                              if (!bVar21) goto LAB_009432bc;
                            }
                            fVar69 = SQRT((fVar63 - fVar70) * (fVar63 - fVar70) +
                                          (fVar65 - fVar69) * (fVar65 - fVar69));
                            bVar21 = false;
                            bVar22 = true;
                            bVar20 = false;
                            if (3.6 <= fVar69) {
                              bVar21 = false;
                              bVar22 = false;
                              bVar20 = true;
                              if (!NAN(fVar67) && !NAN(fVar69)) {
                                bVar21 = fVar67 < fVar69;
                                bVar22 = fVar67 == fVar69;
                                bVar20 = false;
                              }
                            }
                            if (!bVar22 && bVar21 == bVar20) goto LAB_00942ba0;
                          }
LAB_00943044:
                          uVar50 = uVar50 + 1;
                        } while (uVar50 != *(uint *)(param_2 + 0x2670));
                      }
                      goto LAB_00943580;
                    }
                  }
                  else {
                    bVar21 = false;
                    if ((0.0 < fVar67) && (bVar21 = false, !NAN(fVar67))) {
                      bVar21 = fVar67 < 15.0;
                    }
                    if (bVar21) {
LAB_00943580:
                      pfVar9 = pfVar34;
                      pfVar18 = pfVar30;
                      fVar67 = fVar66;
                      fVar69 = fVar64;
                      if (0.0 <= -((fVar63 - *(float *)(param_2 + 0x10)) *
                                  (fVar64 - *(float *)(param_2 + 8))) +
                                 (fVar66 - *(float *)(param_2 + 0x10)) *
                                 (fVar65 - *(float *)(param_2 + 8))) {
                        pfVar9 = pfVar30;
                        pfVar18 = pfVar34;
                        fVar67 = fVar63;
                        fVar69 = fVar65;
                        fVar63 = fVar66;
                        fVar65 = fVar64;
                      }
                      fVar70 = fVar65 - fVar69;
                      fVar66 = fVar63 - fVar67;
                      fVar64 = SQRT(fVar66 * fVar66 + fVar70 * fVar70);
                      bVar21 = false;
                      bVar22 = true;
                      if (-1.1920929e-07 <= fVar64) {
                        bVar21 = false;
                        bVar22 = true;
                        if (!NAN(fVar64)) {
                          bVar21 = fVar64 == 1.1920929e-07;
                          bVar22 = 1.1920929e-07 <= fVar64;
                        }
                      }
                      if (bVar22 && !bVar21) {
                        cVar13 = *(char *)((long)pfVar9 + 0x15);
                        fVar73 = pfVar18[1];
                        cVar14 = *(char *)((long)pfVar18 + 0x15);
                        fVar71 = fVar69 * 0.45 + fVar65 * 0.55;
                        fVar64 = fVar67 * 0.45 + fVar63 * 0.55;
                        fVar72 = pfVar9[1];
                        local_120 = (undefined *)
                                    CONCAT44((int)((float)(int)fVar64 / 5.0) - (uint)(fVar64 < 0.0),
                                             (int)((float)(int)fVar71 / 5.0) - (uint)(fVar71 < 0.0))
                        ;
                        local_128 = puVar4;
                        if ((((-1.1920929e-07 <= fVar70) && (fVar70 <= 1.1920929e-07)) ||
                            (cVar12 != '\0' || cVar58 != '\0')) ||
                           ((fVar66 <= 1.1920929e-07 && -1.1920929e-07 <= fVar66 ||
                            (uVar40 = FUN_00976dd0(&local_128), (uVar40 & 1) != 0)))) {
                          local_d0 = (undefined *)CONCAT44(fVar72,fVar69);
                          local_148 = (undefined *)CONCAT44(fVar72 + 20.0,fVar69);
                          local_140 = CONCAT44(local_140._4_4_,fVar67);
                          uVar61 = *(undefined4 *)PTR_DAT_04bb3238;
                          local_138 = (undefined *)CONCAT44(fVar73 + 20.0,fVar65);
                          local_130 = fVar63;
                          local_c8 = fVar67;
LAB_00942b64:
                          local_178 = (undefined *)CONCAT44(fVar73,fVar65);
                          local_170 = local_130;
                          FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                       uVar61,0,0,0,0);
                        }
                        else {
                          fVar71 = fVar69 + fVar70;
                          fVar64 = -fVar66;
                          local_170 = fVar67;
                          local_130 = fVar67;
                          local_140._0_4_ = fVar67;
                          if (-(fVar66 * (fVar71 - fVar69)) + (fVar67 - fVar67) * fVar70 <= 0.0) {
                            fVar68 = fVar72 + 20.0;
                            if (cVar13 != '\0') {
                              fVar74 = fVar64;
                              if (0.0 <= fVar66) {
                                fVar74 = fVar66;
                              }
                              local_d0 = (undefined *)CONCAT44(fVar72,fVar69);
                              local_178 = (undefined *)CONCAT44(fVar72,fVar69);
                              local_148 = (undefined *)CONCAT44(fVar68,fVar69);
                              local_138 = (undefined *)CONCAT44(fVar68,fVar69);
                              local_c8 = fVar67 + (fVar64 / fVar74) * 5.0;
                              local_140 = CONCAT44(local_140._4_4_,local_c8);
                              FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                           *(undefined4 *)PTR_DAT_04bb3238,0,0,0,0);
                            }
                            puVar38 = PTR_DAT_04bb3238;
                            local_d0 = (undefined *)CONCAT44(fVar72,fVar69);
                            local_178 = (undefined *)CONCAT44(fVar72,fVar71);
                            local_148 = (undefined *)CONCAT44(fVar68,fVar69);
                            local_138 = (undefined *)CONCAT44(fVar68,fVar71);
                            local_170 = fVar67;
                            local_130 = fVar67;
                            local_c8 = fVar67;
                            FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                         *(undefined4 *)PTR_DAT_04bb3238,0,0,0,0);
                            local_d0 = (undefined *)CONCAT44(fVar72,fVar71);
                            local_178 = (undefined *)CONCAT44(fVar73,fVar65);
                            local_148 = (undefined *)CONCAT44(fVar68,fVar71);
                            local_140 = CONCAT44(local_140._4_4_,fVar67);
                            local_138 = (undefined *)CONCAT44(fVar73 + 20.0,fVar65);
                            local_170 = fVar63;
                            local_130 = fVar63;
                            local_c8 = fVar67;
                            FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                         *(undefined4 *)puVar38,0,0,0,0);
                            if (cVar14 != '\0') {
                              fVar64 = -fVar70;
                              if (0.0 <= fVar70) {
                                fVar64 = fVar70;
                              }
                              fVar64 = fVar65 + (fVar70 / fVar64) * 5.0;
                              local_138 = (undefined *)CONCAT44(fVar73 + 20.0,fVar64);
                              local_130 = fVar63;
                              goto LAB_009439e4;
                            }
                          }
                          else {
                            if (cVar13 != '\0') {
                              fVar71 = -fVar70;
                              if (0.0 <= fVar70) {
                                fVar71 = fVar70;
                              }
                              local_178 = (undefined *)CONCAT44(fVar72,fVar69);
                              fVar70 = fVar69 + (fVar70 / fVar71) * -5.0;
                              local_140 = CONCAT44(local_140._4_4_,fVar67);
                              local_138 = (undefined *)CONCAT44(fVar72 + 20.0,fVar69);
                              local_d0 = (undefined *)CONCAT44(fVar72,fVar70);
                              local_148 = (undefined *)CONCAT44(fVar72 + 20.0,fVar70);
                              local_c8 = fVar67;
                              FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                           *(undefined4 *)PTR_DAT_04bb3238,0,0,0,0);
                            }
                            puVar38 = PTR_DAT_04bb3238;
                            local_19c = fVar72 + 20.0;
                            fVar70 = fVar67 + fVar66;
                            local_d0 = (undefined *)CONCAT44(fVar72,fVar69);
                            local_178 = (undefined *)CONCAT44(fVar72,fVar69);
                            local_148 = (undefined *)CONCAT44(local_19c,fVar69);
                            local_138 = (undefined *)CONCAT44(local_19c,fVar69);
                            local_170 = fVar70;
                            local_130 = fVar70;
                            local_c8 = fVar67;
                            FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                         *(undefined4 *)PTR_DAT_04bb3238,0,0,0,0);
                            local_140 = CONCAT44(local_140._4_4_,fVar70);
                            local_d0 = (undefined *)CONCAT44(fVar72,fVar69);
                            local_178 = (undefined *)CONCAT44(fVar73,fVar65);
                            local_148 = (undefined *)CONCAT44(local_19c,fVar69);
                            local_138 = (undefined *)CONCAT44(fVar73 + 20.0,fVar65);
                            local_170 = fVar63;
                            local_130 = fVar63;
                            local_c8 = fVar70;
                            FUN_0096693c(param_2,&local_d0,&local_178,&local_138,&local_148,0x44,
                                         *(undefined4 *)puVar38,0,0,0,0);
                            if (cVar14 != '\0') {
                              if (0.0 <= fVar66) {
                                fVar64 = fVar66;
                              }
                              local_138 = (undefined *)CONCAT44(fVar73 + 20.0,fVar65);
                              local_130 = fVar63 + (fVar66 / fVar64) * 5.0;
                              fVar64 = fVar65;
LAB_009439e4:
                              local_d0 = (undefined *)CONCAT44(fVar73,fVar65);
                              local_140 = CONCAT44(local_140._4_4_,fVar63);
                              local_148 = (undefined *)CONCAT44(fVar73 + 20.0,fVar65);
                              uVar61 = *(undefined4 *)PTR_DAT_04bb3238;
                              local_c8 = fVar63;
                              fVar65 = fVar64;
                              goto LAB_00942b64;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
LAB_00942ba0:
            uVar40 = (ulong)*(uint *)(param_2 + 0x2670);
            uVar46 = uVar46 + 1;
          } while (uVar46 < uVar40);
        }
        uVar29 = uVar29 + 1;
        uVar43 = uVar44;
      } while (uVar44 < (int)uVar40 - 1);
    }
  }
  return;
}

