
int FUN_0240c470(long param_1,char *param_2,undefined8 *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  byte *pbVar3;
  int iVar4;
  char cVar5;
  char cVar6;
  undefined2 uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  bool bVar16;
  undefined *puVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  bool bVar20;
  bool bVar21;
  int iVar22;
  int iVar23;
  long lVar24;
  float *pfVar25;
  undefined8 *puVar26;
  uint *puVar27;
  ulong uVar28;
  byte bVar29;
  long lVar30;
  undefined8 *puVar31;
  short sVar32;
  uint uVar33;
  undefined8 *puVar34;
  undefined8 *puVar35;
  float fVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float local_15c;
  float fStack_158;
  float local_154;
  undefined8 local_150;
  float local_148;
  uint local_144;
  undefined8 local_140;
  float local_138;
  int local_134;
  float local_130;
  float local_12c;
  float local_128;
  undefined4 local_124;
  undefined2 local_120;
  undefined1 local_11e;
  undefined4 local_11c;
  undefined8 local_118;
  undefined2 local_110;
  undefined1 local_10e;
  undefined8 local_10c;
  float local_104;
  float fStack_100;
  float local_fc;
  undefined1 local_f8;
  undefined1 uStack_f7;
  undefined2 uStack_f6;
  float fStack_f4;
  float fStack_f0;
  undefined1 local_ec;
  undefined1 uStack_eb;
  short sStack_ea;
  undefined2 uStack_e8;
  undefined1 uStack_e6;
  undefined1 uStack_e5;
  undefined4 local_e4;
  int iStack_e0;
  int iStack_dc;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined4 local_c8;
  undefined2 local_c4;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  
  puVar17 = PTR_DAT_04bb2d00;
  puVar26 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x278);
  if (*param_2 != '\0') {
    puVar26 = (undefined8 *)(*(long *)(param_1 + 0x68) + 0x284);
  }
  local_140 = *puVar26;
  local_138 = *(float *)(puVar26 + 1);
  uVar33 = *(int *)(param_2 + 4) + 0x10000000U >> 0x1d;
  uVar28 = (ulong)((float)uVar33 * 45.0 * 11930465.0);
  pfVar25 = (float *)(PTR_DAT_04bb2d00 + (uVar28 >> 0x18 & 0xff) * 0x10);
  fVar36 = (float)((uint)uVar28 & 0xffffff) * 5.9604645e-08;
  fVar46 = *pfVar25 + fVar36 * pfVar25[1];
  fVar54 = pfVar25[2] + fVar36 * pfVar25[3];
  pfVar25 = (float *)(PTR_DAT_04bb2d00 +
                     ((ulong)(long)(*(float *)(param_2 + 0xc) * 11930465.0) >> 0x19 & 0x7f) * 0x10);
  fVar36 = (float)((uint)(long)(*(float *)(param_2 + 0xc) * 11930465.0) >> 1 & 0xffffff) *
           5.9604645e-08;
  fVar39 = *pfVar25 + fVar36 * pfVar25[1];
  fVar36 = pfVar25[2] + fVar36 * pfVar25[3];
  fVar43 = fVar39 * 0.0;
  fVar49 = fVar39 * (fVar39 + fVar39);
  fVar36 = fVar36 + fVar36;
  fVar48 = (fVar39 + fVar39) * fVar43;
  fVar52 = fVar43 * (fVar43 + fVar43);
  fVar51 = fVar39 * (fVar43 + fVar43);
  fVar43 = fVar36 * fVar43;
  fVar39 = fVar39 * fVar36;
  local_144 = uVar33;
  if (((uVar33 & 1) == 0) && (param_2[0x10] != '\0')) {
    fVar56 = (float)(int)((int)((float)(int)(float)local_140 / 5.0) - (uint)((float)local_140 < 0.0)
                         & 0xfffffffe) * 5.0 + 5.0;
    fVar55 = (float)(int)((int)((float)(int)local_138 / 5.0) - (uint)(local_138 < 0.0) & 0xfffffffe)
             * 5.0 + 5.0;
    uVar37 = FUN_016e026c(0,&local_140,0,0);
    fVar36 = (float)local_140 - fVar56;
    fVar44 = local_138 - fVar55;
    if (SQRT(fVar44 * fVar44 + fVar36 * fVar36) <= 4.5) {
      local_140 = CONCAT44(uVar37,fVar56);
      local_138 = fVar55;
      uVar37 = FUN_016e026c(0,&local_140,0,0);
      local_140 = CONCAT44(uVar37,(float)local_140);
    }
  }
  bVar21 = (uVar33 & 1) != 0;
  pbVar3 = (byte *)(param_1 + 0x1ee8);
  bVar15 = false;
  fVar36 = 5.0;
  if (bVar21) {
    fVar36 = 7.071068;
  }
  fVar44 = 0.0;
  bVar16 = false;
  fVar55 = 15.0;
  if (bVar21) {
    fVar55 = 7.071068;
  }
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  do {
    bVar21 = true;
    local_ec = 0;
    uStack_eb = 0;
    sStack_ea = 0x4020;
    uStack_e8 = 0;
    uStack_e6 = 0x80;
    uStack_e5 = 0x3f;
    local_e4 = 1;
    iStack_e0 = 0;
    local_150._0_4_ = (float)local_140;
    local_150._4_4_ = (float)((ulong)local_140 >> 0x20);
    fStack_f4 = (((1.0 - fVar52) - fVar52) * 0.0 + fVar46 * (fVar43 + fVar51) +
                fVar54 * (fVar48 - fVar43)) * fVar55 + local_150._4_4_;
    local_150._0_4_ =
         ((fVar51 - fVar43) * 0.0 + fVar46 * ((1.0 - fVar49) - fVar52) + fVar54 * (fVar39 + fVar52))
         * fVar55 + (float)local_150;
    local_148 = ((fVar43 + fVar48) * 0.0 + fVar46 * (fVar52 - fVar39) +
                fVar54 * ((1.0 - fVar52) - fVar49)) * fVar55 + local_138;
    local_150 = CONCAT44(fStack_f4,(float)local_150);
    local_f8 = SUB41((float)local_150,0);
    uStack_f7 = (undefined1)((uint)(float)local_150 >> 8);
    uStack_f6 = (undefined2)((uint)(float)local_150 >> 0x10);
    fStack_f0 = local_148;
    iVar22 = FUN_016ed290(&local_f8,0,0,0);
    fVar56 = local_140._4_4_;
    uVar33 = 0;
    do {
      pfVar25 = (float *)(puVar17 + (ulong)(DAT_05240230 * uVar33 >> 0x18) * 0x10);
      fVar38 = (float)(DAT_05240230 * uVar33 & 0xffffff) * 5.9604645e-08;
      fStack_f4 = local_150._4_4_ + 0.0;
      fVar40 = (*pfVar25 + fVar38 * pfVar25[1]) * 2.5 + (float)local_150;
      fStack_f0 = (pfVar25[2] + fVar38 * pfVar25[3]) * 2.5 + local_148;
      local_f8 = SUB41(fVar40,0);
      uStack_f7 = (undefined1)((uint)fVar40 >> 8);
      uStack_f6 = (undefined2)((uint)fVar40 >> 0x10);
      fVar38 = (float)FUN_016e026c(0,&local_f8,0,0);
      if ((10.5 <= fVar56 - fVar38) && (uVar28 = FUN_016ebc50(0,&local_f8), (uVar28 & 1) == 0))
      break;
      bVar21 = uVar33 < 7;
      uVar33 = uVar33 + 1;
    } while (uVar33 != 8);
    local_12c = (local_150._4_4_ + local_140._4_4_) * 0.5;
    local_130 = ((float)local_150 + (float)local_140) * 0.5;
    local_128 = (local_148 + local_138) * 0.5;
    fVar38 = (float)FUN_016e026c(0,&local_130,0,0);
    fVar56 = (float)FUN_016e026c(0,&local_150,0,0);
    if (iVar22 == 0) {
      if (!bVar21) {
        local_f8 = (undefined1)local_150;
        uStack_f7 = (undefined1)((ulong)local_150 >> 8);
        uStack_f6 = (undefined2)((ulong)local_150 >> 0x10);
        fStack_f4 = (float)((ulong)local_150 >> 0x20);
        fStack_f0 = local_148;
        local_ec = 0;
        uStack_eb = 0;
        sStack_ea = 0x4020;
        uStack_e8 = 0;
        uStack_e6 = 0x80;
        uStack_e5 = 0x3f;
        local_e4 = 0x10;
        iStack_e0 = 0;
        iVar22 = FUN_016ed290(&local_f8,0,0,0);
        if (iVar22 != 0) {
          lVar24 = FUN_0251e98c(1);
          lVar30 = *(long *)(lVar24 + 0xe40);
          lVar24 = lVar24 + 0xe40;
          goto LAB_0240c928;
        }
        goto LAB_0240c940;
      }
      lVar24 = FUN_0251e98c(1);
      pfVar25 = (float *)(**(code **)(*(long *)(lVar24 + 0xe10) + 0xf0))(lVar24 + 0xe10);
      fVar40 = fVar44;
      if (fVar44 <= *pfVar25) {
        fVar40 = *pfVar25;
      }
LAB_0240c9e0:
      bVar15 = true;
      lVar24 = FUN_0251e98c(1);
      pfVar25 = (float *)(**(code **)(*(long *)(lVar24 + 0xe10) + 0xf0))(lVar24 + 0xe10);
      fVar44 = *pfVar25;
      if (fVar40 <= *pfVar25) {
        fVar44 = fVar40;
      }
      bVar21 = true;
      if (bVar16) {
LAB_0240ca14:
        bVar15 = bVar21;
        sVar32 = *(short *)PTR_DAT_04bb6298;
        if (sVar32 != -1) {
          local_f8 = 0x11;
          uStack_f7 = 0;
          uStack_f6 = 0;
          puVar27 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar32 * 8);
          if (0xff < (uint)(int)sVar32) {
            puVar27 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar27 >> 0x11 & 1) != 0) {
            local_f8 = 0;
            uStack_f7 = 0;
            uStack_f6 = 0;
            FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_140,&local_f8);
            if (CONCAT22(uStack_f6,CONCAT11(uStack_f7,local_f8)) == 0x2d) {
              return 0;
            }
          }
        }
        bVar20 = true;
      }
      else {
        bVar20 = false;
      }
    }
    else {
      bVar16 = true;
      lVar24 = FUN_0251e98c(1);
      lVar30 = *(long *)(lVar24 + 0xde0);
      lVar24 = lVar24 + 0xde0;
LAB_0240c928:
      pfVar25 = (float *)(**(code **)(lVar30 + 0xf0))(lVar24);
      if (fVar44 <= *pfVar25) {
        fVar44 = *pfVar25;
      }
LAB_0240c940:
      fVar40 = fVar44;
      if (bVar15) goto LAB_0240c9e0;
      fVar56 = fVar56 - local_140._4_4_;
      fVar45 = -fVar56;
      if (0.0 <= fVar56) {
        fVar45 = fVar56;
      }
      if (14.5 < fVar45) goto LAB_0240c9e0;
      fVar38 = fVar38 - local_140._4_4_;
      fVar56 = -fVar38;
      if (0.0 <= fVar38) {
        fVar56 = fVar38;
      }
      if (14.5 < fVar56) goto LAB_0240c9e0;
      bVar15 = false;
      bVar21 = false;
      bVar20 = false;
      if (bVar16) goto LAB_0240ca14;
    }
    bVar16 = bVar20;
    fVar56 = local_148;
    uVar18 = local_150;
    iVar22 = 0;
    fVar38 = (float)(int)((int)((float)(int)(float)local_150 / 5.0) - (uint)((float)local_150 < 0.0)
                         & 0xfffffffe) * 5.0 + 5.0;
    fVar40 = (float)(int)((int)((float)(int)local_148 / 5.0) - (uint)(local_148 < 0.0) & 0xfffffffe)
             * 5.0 + 5.0;
    do {
      local_148 = fVar56;
      local_150 = uVar18;
      if (iVar22 == 2) {
        uVar37 = FUN_016e026c(0,&local_150,0,0);
        fVar41 = (float)(int)((int)((float)(int)(float)local_150 / 5.0) -
                             (uint)((float)local_150 < 0.0));
        fVar45 = fVar41 * 5.0;
        fVar53 = (float)(int)((int)((float)(int)local_148 / 5.0) - (uint)(local_148 < 0.0));
        fVar42 = fVar53 * 5.0;
        if (fVar41 * 5.0 + 2.5 < (float)local_150) {
          fVar45 = fVar45 + 5.0;
        }
        if (fVar53 * 5.0 + 2.5 < local_148) {
          fVar42 = fVar42 + 5.0;
        }
        if (SQRT((fVar40 - local_138) * (fVar40 - local_138) +
                 (fVar38 - (float)local_140) * (fVar38 - (float)local_140)) <
            SQRT((fVar42 - local_138) * (fVar42 - local_138) +
                 (fVar45 - (float)local_140) * (fVar45 - (float)local_140))) goto LAB_0240cc84;
LAB_0240cd4c:
        local_148 = fVar40;
        fVar45 = fVar38;
LAB_0240cd54:
        local_150 = CONCAT44(uVar37,fVar45);
      }
      else if (iVar22 == 1) {
        uVar37 = FUN_016e026c(0,&local_150,0,0);
        fVar41 = (float)(int)((int)((float)(int)(float)local_150 / 5.0) -
                             (uint)((float)local_150 < 0.0));
        fVar45 = fVar41 * 5.0;
        fVar53 = (float)(int)((int)((float)(int)local_148 / 5.0) - (uint)(local_148 < 0.0));
        fVar42 = fVar53 * 5.0;
        if (fVar41 * 5.0 + 2.5 < (float)local_150) {
          fVar45 = fVar45 + 5.0;
        }
        if (fVar53 * 5.0 + 2.5 < local_148) {
          fVar42 = fVar42 + 5.0;
        }
        if (SQRT((fVar40 - local_138) * (fVar40 - local_138) +
                 (fVar38 - (float)local_140) * (fVar38 - (float)local_140)) <
            SQRT((fVar42 - local_138) * (fVar42 - local_138) +
                 (fVar45 - (float)local_140) * (fVar45 - (float)local_140))) goto LAB_0240cd4c;
LAB_0240cc84:
        uVar37 = (undefined4)((ulong)local_150 >> 0x20);
        local_148 = fVar42;
        goto LAB_0240cd54;
      }
      fVar45 = (float)FUN_0231eef4(param_1,&local_150,0);
      uVar19 = local_150;
      local_150 = CONCAT44(fVar45,(float)local_150);
      fVar42 = SQRT((local_138 - local_148) * (local_138 - local_148) +
                    ((float)local_140 - (float)local_150) * ((float)local_140 - (float)local_150));
      if (fVar44 < fVar42) {
        return 0;
      }
      if (10.0 <= fVar42) {
        fVar41 = fVar45 - local_140._4_4_;
        fVar42 = -fVar41;
        if (0.0 <= fVar41) {
          fVar42 = fVar41;
        }
        if (fVar42 <= 5.0) {
          local_f8 = (undefined1)uVar19;
          uStack_f7 = (undefined1)((ulong)uVar19 >> 8);
          uStack_f6 = (undefined2)((ulong)uVar19 >> 0x10);
          fStack_f0 = local_148;
          local_e4 = 0x13;
          iStack_e0 = 0x1000000;
          local_ec = 0;
          uStack_eb = 0;
          sStack_ea = 0x4088;
          uStack_e8 = 0;
          uStack_e6 = 0x80;
          uStack_e5 = 0x3f;
          fStack_f4 = fVar45;
          iVar23 = FUN_016ed290(&local_f8,0,0,0);
          if (iVar23 == 0) {
            local_e4 = 4;
            iVar23 = FUN_016ed290(&local_f8,0,0,0);
            if (iVar23 == 0) {
              local_e4 = 0x60;
              iVar23 = FUN_016ed290(&local_f8,0,0,0);
              if (iVar23 == 0) {
                if ((bVar16) && (sVar32 = *(short *)PTR_DAT_04bb6298, sVar32 != -1)) {
                  local_130 = 2.38221e-44;
                  puVar27 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar32 * 8);
                  if (0xff < (uint)(int)sVar32) {
                    puVar27 = (uint *)PTR_DAT_04bc39f8;
                  }
                  if ((*puVar27 >> 0x11 & 1) != 0) {
                    local_130 = 0.0;
                    FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_150,&local_130);
                    if (local_130 == 6.30584e-44) goto LAB_0240cba0;
                  }
                }
                if (iVar22 == 0) {
                  uVar28 = FUN_016eac50(0x40880000,&local_150);
                  if ((uVar28 & 1) != 0) goto LAB_0240ced4;
                }
                else {
                  uVar28 = FUN_016eafec(&local_150,0,0,0);
                  if ((uVar28 & 1) == 0) {
LAB_0240ced4:
                    local_130 = (float)((uint)local_130 & 0xffffff00);
                    local_12c = -100.0;
                    lVar24 = *(long *)PTR_DAT_04bb2720;
                    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x330) == 0)) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar24 + 0x338));
                      iVar23 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar23 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                    }
                    puVar31 = DAT_055c1b60 + -8;
                    if (DAT_055c1b60 != &DAT_055c1b58) {
                      sVar32 = 0;
                      puVar34 = DAT_055c1b60;
                      puVar35 = puVar31;
                      do {
                        if (*(int *)(puVar35 + 7) == *(int *)(puVar26 + 7)) {
                          if (sVar32 != -1) goto LAB_0240cfa4;
                          break;
                        }
                        puVar34 = (undefined8 *)puVar34[1];
                        sVar32 = sVar32 + 1;
                        puVar35 = puVar34 + -8;
                      } while (puVar34 != &DAT_055c1b58);
                    }
                    sVar32 = 0;
LAB_0240cfa4:
                    local_124 = (float)CONCAT22(sVar32,(undefined2)local_124);
                    local_11e = 1;
                    fVar41 = 0.0;
                    local_124 = (float)CONCAT31(local_124._1_3_,1);
                    local_128 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
                    local_120 = 0;
                    fVar42 = (float)local_140 - (float)local_150;
                    fVar45 = local_138 - local_148;
                    fVar53 = SQRT(fVar42 * fVar42 + 0.0 + fVar45 * fVar45);
                    if (0.0 < fVar53) {
                      fVar53 = 1.0 / fVar53;
                      fVar42 = fVar42 * fVar53;
                      fVar41 = fVar53 * 0.0;
                      fVar45 = fVar45 * fVar53;
                    }
                    local_f8 = 0;
                    fStack_f4 = -100.0;
                    fStack_f0 = 0.0;
                    local_ec = 0;
                    local_15c = (float)local_150 + fVar42 * 7.5;
                    fStack_158 = local_150._4_4_ + fVar41 * 7.5;
                    local_154 = local_148 + fVar45 * 7.5;
                    lVar24 = *(long *)PTR_DAT_04bb2720;
                    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x330) == 0)) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar24 + 0x338));
                      iVar23 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar23 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                      puVar31 = DAT_055c1b60 + -8;
                    }
                    if (puVar31 != &DAT_055c1b18) {
                      sStack_ea = 0;
                      puVar34 = DAT_055c1b60;
                      do {
                        if (*(int *)(puVar31 + 7) == *(int *)(puVar26 + 7)) {
                          if (sStack_ea != -1) goto LAB_0240d0f8;
                          break;
                        }
                        puVar34 = (undefined8 *)puVar34[1];
                        sStack_ea = sStack_ea + 1;
                        puVar31 = puVar34 + -8;
                      } while (puVar34 != &DAT_055c1b58);
                    }
                    sStack_ea = 0;
LAB_0240d0f8:
                    uStack_e8 = 0;
                    uStack_e6 = 1;
                    fVar45 = (float)FUN_016e8440(&local_15c,&local_f8);
                    lVar24 = 0;
                    do {
                      fVar41 = *(float *)((long)&DAT_04176bac + lVar24);
                      fVar42 = *(float *)((long)&DAT_04176bb4 + lVar24);
                      fVar53 = 0.0;
                      fVar47 = SQRT(fVar41 * fVar41 + 0.0 + fVar42 * fVar42);
                      if (0.0 < fVar47) {
                        fVar47 = 1.0 / fVar47;
                        fVar41 = fVar41 * fVar47;
                        fVar53 = fVar47 * 0.0;
                        fVar42 = fVar42 * fVar47;
                      }
                      local_104 = fVar41 * 3.465 + local_15c;
                      fStack_100 = fVar53 * 3.465 + fStack_158;
                      local_fc = fVar42 * 3.465 + local_154;
                      fVar42 = (float)FUN_016e8440(&local_104,&local_f8);
                      lVar24 = lVar24 + 0xc;
                      if (fVar42 <= fVar45) {
                        fVar42 = fVar45;
                      }
                      fVar45 = fVar42;
                    } while (lVar24 != 0x6c);
                    if (1.25 < fVar45 - local_140._4_4_) {
                      return 0;
                    }
                    fVar42 = (float)local_140 - (float)local_150;
                    fVar45 = local_138 - local_148;
                    fVar41 = 0.0;
                    fVar53 = SQRT(fVar42 * fVar42 + 0.0 + fVar45 * fVar45);
                    if (0.0 < fVar53) {
                      fVar53 = 1.0 / fVar53;
                      fVar42 = fVar42 * fVar53;
                      fVar41 = fVar53 * 0.0;
                      fVar45 = fVar45 * fVar53;
                    }
                    local_f8 = 0;
                    fStack_f4 = -100.0;
                    fStack_f0 = 0.0;
                    local_ec = 0;
                    local_15c = (float)local_150 + fVar42 * 5.0;
                    fStack_158 = local_150._4_4_ + fVar41 * 5.0;
                    local_154 = local_148 + fVar45 * 5.0;
                    lVar24 = *(long *)PTR_DAT_04bb2720;
                    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x330) == 0)) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar24 + 0x338));
                      iVar23 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar23 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                    }
                    if (DAT_055c1b60 != &DAT_055c1b58) {
                      sStack_ea = 0;
                      puVar31 = DAT_055c1b60;
                      do {
                        if (*(int *)(puVar31 + -1) == *(int *)(puVar26 + 7)) {
                          if (sStack_ea != -1) goto LAB_0240d2f4;
                          break;
                        }
                        puVar31 = (undefined8 *)puVar31[1];
                        sStack_ea = sStack_ea + 1;
                      } while (puVar31 != &DAT_055c1b58);
                    }
                    sStack_ea = 0;
LAB_0240d2f4:
                    uStack_e8 = 0;
                    uStack_e6 = 1;
                    fVar45 = (float)FUN_016e8440(&local_15c,&local_f8);
                    lVar24 = 0;
                    do {
                      fVar41 = *(float *)((long)&DAT_04176bac + lVar24);
                      fVar42 = *(float *)((long)&DAT_04176bb4 + lVar24);
                      fVar53 = 0.0;
                      fVar47 = SQRT(fVar41 * fVar41 + 0.0 + fVar42 * fVar42);
                      if (0.0 < fVar47) {
                        fVar47 = 1.0 / fVar47;
                        fVar41 = fVar41 * fVar47;
                        fVar53 = fVar47 * 0.0;
                        fVar42 = fVar42 * fVar47;
                      }
                      local_104 = fVar41 * 2.475 + local_15c;
                      fStack_100 = fVar53 * 2.475 + fStack_158;
                      local_fc = fVar42 * 2.475 + local_154;
                      fVar42 = (float)FUN_016e8440(&local_104,&local_f8);
                      lVar24 = lVar24 + 0xc;
                      if (fVar42 <= fVar45) {
                        fVar42 = fVar45;
                      }
                      fVar45 = fVar42;
                    } while (lVar24 != 0x6c);
                    if (1.25 < fVar45 - local_140._4_4_) {
                      return 0;
                    }
                    local_ec = 0;
                    uStack_eb = 0;
                    sStack_ea = 0x4088;
                    uStack_e8 = 0;
                    uStack_e6 = 0x80;
                    uStack_e5 = 0x3f;
                    local_e4 = 4;
                    iStack_e0 = 0x1000000;
                    local_f8 = (undefined1)local_140;
                    uStack_f7 = (undefined1)((ulong)local_140 >> 8);
                    uStack_f6 = (undefined2)((ulong)local_140 >> 0x10);
                    fStack_f4 = local_140._4_4_;
                    fStack_f0 = local_138;
                    iVar23 = FUN_016ed290(&local_f8,0,0,0);
                    if (iVar23 != 0) {
                      return 0;
                    }
                    fVar42 = (float)local_150 - (float)local_140;
                    fVar45 = local_148 - local_138;
                    fVar41 = 0.0;
                    fVar53 = SQRT(fVar42 * fVar42 + 0.0 + fVar45 * fVar45);
                    if (0.0 < fVar53) {
                      fVar53 = 1.0 / fVar53;
                      fVar42 = fVar42 * fVar53;
                      fVar41 = fVar53 * 0.0;
                      fVar45 = fVar45 * fVar53;
                    }
                    local_f8 = 0;
                    fStack_f4 = -100.0;
                    fStack_f0 = 0.0;
                    local_ec = 0;
                    local_15c = (float)local_140 + fVar42 * 7.5;
                    fStack_158 = local_140._4_4_ + fVar41 * 7.5;
                    local_154 = local_138 + fVar45 * 7.5;
                    lVar24 = *(long *)PTR_DAT_04bb2720;
                    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x330) == 0)) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar24 + 0x338));
                      iVar23 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar23 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                    }
                    if (DAT_055c1b60 != &DAT_055c1b58) {
                      sStack_ea = 0;
                      puVar31 = DAT_055c1b60;
                      do {
                        if (*(int *)(puVar31 + -1) == *(int *)(puVar26 + 7)) {
                          if (sStack_ea != -1) goto LAB_0240d538;
                          break;
                        }
                        puVar31 = (undefined8 *)puVar31[1];
                        sStack_ea = sStack_ea + 1;
                      } while (puVar31 != &DAT_055c1b58);
                    }
                    sStack_ea = 0;
LAB_0240d538:
                    uStack_e8 = 0;
                    uStack_e6 = 1;
                    fVar45 = (float)FUN_016e8440(&local_15c,&local_f8);
                    lVar24 = 0;
                    do {
                      fVar41 = *(float *)((long)&DAT_04176bac + lVar24);
                      fVar42 = *(float *)((long)&DAT_04176bb4 + lVar24);
                      fVar53 = 0.0;
                      fVar47 = SQRT(fVar41 * fVar41 + 0.0 + fVar42 * fVar42);
                      if (0.0 < fVar47) {
                        fVar47 = 1.0 / fVar47;
                        fVar41 = fVar41 * fVar47;
                        fVar53 = fVar47 * 0.0;
                        fVar42 = fVar42 * fVar47;
                      }
                      local_104 = fVar41 * 3.465 + local_15c;
                      fStack_100 = fVar53 * 3.465 + fStack_158;
                      local_fc = fVar42 * 3.465 + local_154;
                      fVar42 = (float)FUN_016e8440(&local_104,&local_f8);
                      lVar24 = lVar24 + 0xc;
                      if (fVar42 <= fVar45) {
                        fVar42 = fVar45;
                      }
                      fVar45 = fVar42;
                    } while (lVar24 != 0x6c);
                    if (1.25 < fVar45 - local_140._4_4_) {
                      return 0;
                    }
                    fVar42 = (float)local_150 - (float)local_140;
                    fVar45 = local_148 - local_138;
                    fVar41 = 0.0;
                    fVar53 = SQRT(fVar42 * fVar42 + 0.0 + fVar45 * fVar45);
                    if (0.0 < fVar53) {
                      fVar53 = 1.0 / fVar53;
                      fVar42 = fVar42 * fVar53;
                      fVar41 = fVar53 * 0.0;
                      fVar45 = fVar45 * fVar53;
                    }
                    local_f8 = 0;
                    fStack_f4 = -100.0;
                    fStack_f0 = 0.0;
                    local_ec = 0;
                    local_15c = (float)local_140 + fVar42 * 5.0;
                    fStack_158 = local_140._4_4_ + fVar41 * 5.0;
                    local_154 = local_138 + fVar45 * 5.0;
                    lVar24 = *(long *)PTR_DAT_04bb2720;
                    if ((lVar24 == 0) || (*(long *)(lVar24 + 0x330) == 0)) {
                      puVar26 = &DAT_055c04a0;
                    }
                    else {
                      puVar26 = (undefined8 *)
                                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                          (*(long **)PTR_DAT_04bb2640,
                                           *(undefined4 *)(lVar24 + 0x338));
                      iVar23 = FUN_006bd550(*puVar26,0);
                      puVar26 = (undefined8 *)PTR_DAT_04bc3a80;
                      if (iVar23 != 0x758f7eaf) {
                        puVar26 = &DAT_055c04a0;
                      }
                    }
                    if (DAT_055c1b60 != &DAT_055c1b58) {
                      sStack_ea = 0;
                      puVar31 = DAT_055c1b60;
                      do {
                        if (*(int *)(puVar31 + -1) == *(int *)(puVar26 + 7)) {
                          if (sStack_ea != -1) goto LAB_0240d734;
                          break;
                        }
                        puVar31 = (undefined8 *)puVar31[1];
                        sStack_ea = sStack_ea + 1;
                      } while (puVar31 != &DAT_055c1b58);
                    }
                    sStack_ea = 0;
LAB_0240d734:
                    uStack_e8 = 0;
                    uStack_e6 = 1;
                    fVar45 = (float)FUN_016e8440(&local_15c,&local_f8);
                    lVar24 = 0;
                    do {
                      fVar41 = *(float *)((long)&DAT_04176bac + lVar24);
                      fVar42 = *(float *)((long)&DAT_04176bb4 + lVar24);
                      fVar53 = 0.0;
                      fVar47 = SQRT(fVar41 * fVar41 + 0.0 + fVar42 * fVar42);
                      if (0.0 < fVar47) {
                        fVar47 = 1.0 / fVar47;
                        fVar41 = fVar41 * fVar47;
                        fVar53 = fVar47 * 0.0;
                        fVar42 = fVar42 * fVar47;
                      }
                      local_104 = fVar41 * 2.475 + local_15c;
                      fStack_100 = fVar53 * 2.475 + fStack_158;
                      local_fc = fVar42 * 2.475 + local_154;
                      fVar42 = (float)FUN_016e8440(&local_104,&local_f8);
                      lVar24 = lVar24 + 0xc;
                      if (fVar42 <= fVar45) {
                        fVar42 = fVar45;
                      }
                      fVar45 = fVar42;
                    } while (lVar24 != 0x6c);
                    if (1.25 < fVar45 - local_140._4_4_) {
                      return 0;
                    }
                    fStack_100 = (local_140._4_4_ + local_150._4_4_) * 0.5;
                    local_104 = ((float)local_150 + (float)local_140) * 0.5;
                    local_fc = (local_148 + local_138) * 0.5;
                    fVar45 = (float)FUN_016e8440(&local_104,&local_130);
                    lVar24 = 0;
                    do {
                      fVar41 = *(float *)((long)&DAT_04176bac + lVar24);
                      fVar42 = *(float *)((long)&DAT_04176bb4 + lVar24);
                      fVar53 = 0.0;
                      fVar47 = SQRT(fVar41 * fVar41 + 0.0 + fVar42 * fVar42);
                      if (0.0 < fVar47) {
                        fVar47 = 1.0 / fVar47;
                        fVar41 = fVar41 * fVar47;
                        fVar53 = fVar47 * 0.0;
                        fVar42 = fVar42 * fVar47;
                      }
                      fVar41 = fVar41 * 4.95 + local_104;
                      fStack_f4 = fVar53 * 4.95 + fStack_100;
                      fStack_f0 = fVar42 * 4.95 + local_fc;
                      local_f8 = SUB41(fVar41,0);
                      uStack_f7 = (undefined1)((uint)fVar41 >> 8);
                      uStack_f6 = (undefined2)((uint)fVar41 >> 0x10);
                      fVar42 = (float)FUN_016e8440(&local_f8,&local_130);
                      lVar24 = lVar24 + 0xc;
                      if (fVar42 <= fVar45) {
                        fVar42 = fVar45;
                      }
                      fVar45 = fVar42;
                    } while (lVar24 != 0x6c);
                    if (1.25 < fVar45 - local_140._4_4_) {
                      return 0;
                    }
                    cVar5 = *param_2;
                    cVar6 = param_2[8];
                    lVar24 = FUN_0251e98c(1);
                    puVar27 = (uint *)(**(code **)(*(long *)(lVar24 + 0xed0) + 0xf0))
                                                (lVar24 + 0xed0);
                    bVar21 = (uint)*(ushort *)(param_1 + 0x6a0) <= *puVar27;
                    if (cVar5 == '\0') {
                      lVar24 = *(long *)(param_1 + 0x68);
                      fVar45 = 10.0;
                      if (cVar6 == '\0') {
                        fVar42 = (float)local_150 - *(float *)(lVar24 + 0x278);
                        fVar41 = local_148 - *(float *)(lVar24 + 0x280);
                        if (10.0 <= SQRT(fVar41 * fVar41 + fVar42 * fVar42)) {
                          fStack_f0 = (local_148 + *(float *)(lVar24 + 0x280)) * 0.5;
                          fVar42 = ((float)local_150 + *(float *)(lVar24 + 0x278)) * 0.5;
                          fStack_f4 = (*(float *)(lVar24 + 0x27c) + local_150._4_4_) * 0.5;
                          local_f8 = SUB41(fVar42,0);
                          uStack_f7 = (undefined1)((uint)fVar42 >> 8);
                          uStack_f6 = (undefined2)((uint)fVar42 >> 0x10);
                          uVar28 = FUN_016ebc50(0,&local_f8);
                          if ((uVar28 & 1) != 0) goto LAB_0240d970;
                        }
                        iVar23 = 0;
                      }
                      else {
LAB_0240d970:
                        uVar28 = FUN_0240b654(&local_150,0);
                        iVar23 = 0;
                        if ((uVar28 & 1) == 0) {
                          iVar23 = 2;
                        }
                        if ((uVar28 & 1) == 0 && (cVar6 == '\0' || !bVar21)) {
                          lVar30 = FUN_0251e98c(1);
                          pfVar25 = (float *)(**(code **)(*(long *)(lVar30 + 0x2a0) + 0xf0))
                                                       (lVar30 + 0x2a0);
                          local_10e = 0;
                          fVar57 = *pfVar25 * 0.9;
                          fVar42 = fVar57 * 0.2 * 0.97;
                          fVar47 = *(float *)(lVar24 + 0x278) - fVar42;
                          fVar50 = *(float *)(lVar24 + 0x280) - fVar42;
                          fVar41 = *(float *)(lVar24 + 0x278) + fVar42;
                          fVar42 = *(float *)(lVar24 + 0x280) + fVar42;
                          local_128 = local_148;
                          fVar53 = fVar57 * 0.97;
                          local_130 = (float)local_150;
                          local_12c = local_150._4_4_;
                          iVar8 = (int)((float)(int)fVar50 / 5.0) - (uint)(fVar50 < 0.0);
                          iVar23 = (int)((float)(int)fVar47 / 5.0) - (uint)(fVar47 < 0.0);
                          iVar9 = (int)((float)(int)fVar42 / 5.0) - (uint)(fVar42 < 0.0);
                          iVar10 = (int)((float)(int)fVar41 / 5.0) - (uint)(fVar41 < 0.0);
                          iVar4 = iVar23;
                          if (iVar10 <= iVar23) {
                            iVar4 = iVar10;
                          }
                          if (iVar23 <= iVar10) {
                            iVar23 = iVar10;
                          }
                          iVar10 = iVar8;
                          if (iVar9 <= iVar8) {
                            iVar10 = iVar9;
                          }
                          if (iVar8 <= iVar9) {
                            iVar8 = iVar9;
                          }
                          iVar11 = (int)((float)(int)((float)local_150 - fVar53) / 5.0) -
                                   (uint)((float)local_150 - fVar53 < 0.0);
                          iVar12 = (int)((float)(int)(local_148 - fVar53) / 5.0) -
                                   (uint)(local_148 - fVar53 < 0.0);
                          iVar13 = (int)((float)(int)(fVar53 + (float)local_150) / 5.0) -
                                   (uint)(fVar53 + (float)local_150 < 0.0);
                          iVar14 = (int)((float)(int)(fVar53 + local_148) / 5.0) -
                                   (uint)(fVar53 + local_148 < 0.0);
                          iVar9 = iVar11;
                          if (iVar13 <= iVar11) {
                            iVar9 = iVar13;
                          }
                          if (iVar11 <= iVar13) {
                            iVar11 = iVar13;
                          }
                          iVar13 = iVar12;
                          if (iVar14 <= iVar12) {
                            iVar13 = iVar14;
                          }
                          if (iVar12 <= iVar14) {
                            iVar12 = iVar14;
                          }
                          if (iVar9 <= iVar4) {
                            iVar4 = iVar9;
                          }
                          local_10c = 0x1000000000000;
                          if (iVar13 <= iVar10) {
                            iVar10 = iVar13;
                          }
                          if (iVar23 <= iVar11) {
                            iVar23 = iVar11;
                          }
                          if (iVar8 <= iVar12) {
                            iVar8 = iVar12;
                          }
                          iVar9 = iVar4;
                          if (iVar23 <= iVar4) {
                            iVar9 = iVar23;
                          }
                          if (iVar4 <= iVar23) {
                            iVar4 = iVar23;
                          }
                          iVar11 = iVar10;
                          if (iVar8 <= iVar10) {
                            iVar11 = iVar8;
                          }
                          if (iVar10 <= iVar8) {
                            iVar10 = iVar8;
                          }
                          bVar29 = *pbVar3;
                          if (7 < bVar29) {
                            bVar29 = 0xff;
                          }
                          local_120 = CONCAT11(local_120._1_1_,bVar29);
                          local_11c = *(undefined4 *)(param_1 + 0x230);
                          local_118 = 0xbf8000000000001f;
                          local_110 = 0x101;
                          local_124 = fVar57;
                          uVar28 = FUN_0251fad0(&local_130,0);
                          iVar23 = 0;
                          if ((uVar28 & 1) == 0) {
                            fVar41 = 0.0;
                            fVar53 = (float)local_150 -
                                     *(float *)(*(long *)(param_1 + 0x68) + 0x278);
                            fVar47 = local_148 - *(float *)(*(long *)(param_1 + 0x68) + 0x280);
                            fVar42 = SQRT(fVar53 * fVar53 + 0.0 + fVar47 * fVar47);
                            if (0.0 < fVar42) {
                              fVar42 = 1.0 / fVar42;
                              fVar53 = fVar53 * fVar42;
                              fVar41 = fVar42 * 0.0;
                              fVar47 = fVar47 * fVar42;
                            }
                            fVar50 = *(float *)(lVar24 + 0x278) - (float)local_150;
                            fVar42 = *(float *)(lVar24 + 0x280) - local_148;
                            fVar42 = SQRT(fVar42 * fVar42 + fVar50 * fVar50);
                            if (10.0 < fVar42) {
                              do {
                                local_11c = *(undefined4 *)(param_1 + 0x230);
                                local_10e = 0;
                                local_130 = fVar53 * fVar45 + *(float *)(lVar24 + 0x278);
                                bVar29 = *pbVar3;
                                local_12c = fVar41 * fVar45 + *(float *)(lVar24 + 0x27c);
                                if (7 < bVar29) {
                                  bVar29 = 0xff;
                                }
                                local_120 = CONCAT11(local_120._1_1_,bVar29);
                                local_128 = fVar47 * fVar45 + *(float *)(lVar24 + 0x280);
                                local_118 = 0xbf8000000000001f;
                                local_110 = 0x101;
                                local_124 = fVar57;
                                uVar28 = FUN_0251fad0(&local_130,0);
                                if ((uVar28 & 1) != 0) {
                                  iVar23 = 0;
                                  goto LAB_0240cb84;
                                }
                                fVar45 = fVar45 + 5.0;
                              } while (fVar45 < fVar42);
                            }
                            if (param_3 == (undefined8 *)0x0) {
                              lVar24 = *(long *)PTR_DAT_04bb4f78 + 0x20 +
                                       (ulong)(uint)*pbVar3 * 0x740;
                              if (7 < *pbVar3) {
                                lVar24 = *(long *)PTR_DAT_04bb4f78 + 0x20;
                              }
                              *(undefined8 *)(lVar24 + 0x420) = 0x100000000;
                              *(undefined4 *)(lVar24 + 0x4c0) = 0;
                              bVar29 = *pbVar3;
                              uVar7 = *(undefined2 *)PTR_DAT_04bb6298;
                              uVar33 = (uint)bVar29;
                              if (7 < uVar33) {
                                uVar33 = 0xffffffff;
                              }
                              *(uint *)(lVar24 + 0x4d4) = uVar33;
                              if (bVar29 < 8) {
                                *(byte *)(lVar24 + 0x4d8) = bVar29;
                              }
                              local_f8 = (undefined1)uVar7;
                              uStack_f7 = (undefined1)((ushort)uVar7 >> 8);
                              *(undefined1 *)(lVar24 + 0x4d9) = 1;
                              local_b8 = 0;
                              fStack_f0 = SUB84(puVar1,0);
                              local_ec = (undefined1)((ulong)puVar1 >> 0x20);
                              uStack_eb = (undefined1)((ulong)puVar1 >> 0x28);
                              sStack_ea = (short)((ulong)puVar1 >> 0x30);
                              uStack_e8 = SUB82(puVar2,0);
                              uStack_e6 = (undefined1)((ulong)puVar2 >> 0x10);
                              uStack_e5 = (undefined1)((ulong)puVar2 >> 0x18);
                              local_e4 = (undefined4)((ulong)puVar2 >> 0x20);
                              local_c4 = 0;
                              local_c2 = 0;
                              local_c0 = 0xffffffffffffffff;
                              local_b4 = 0x41200000;
                              local_b0 = 0;
                              local_ac = 0;
                              local_ab = 0xff;
                              local_c8 = 0x100ff00;
                              if (*(int *)(lVar24 + 0x4d0) == 0x15) {
                                local_c8 = 0x1001400;
                              }
                              local_fc._0_3_ = (uint3)local_fc._0_2_;
                              iStack_e0 = iVar9;
                              iStack_dc = iVar11;
                              local_d8 = puVar2;
                              local_d0 = iVar4;
                              iStack_cc = iVar10;
                              uVar28 = FUN_023016c0(lVar24 + 0x4c8,&local_f8,&local_104);
                              iVar23 = 0;
                              if ((uVar28 & 1) != 0) {
                                FUN_0240df04(param_1,&local_150);
                                iVar23 = 1;
                              }
                            }
                            else {
                              *(int *)(param_3 + 4) = iVar9;
                              *(int *)((long)param_3 + 0x24) = iVar11;
                              *(float *)(param_3 + 1) = local_148;
                              *param_3 = local_150;
                              *(int *)(param_3 + 6) = iVar4;
                              *(int *)((long)param_3 + 0x34) = iVar10;
                              iVar23 = 1;
                              *(undefined1 *)(param_3 + 7) = 1;
                            }
                          }
                        }
                      }
                    }
                    else {
                      iVar23 = 1;
                      if (cVar6 != '\0' && bVar21) {
                        iVar23 = 2;
                      }
                    }
LAB_0240cb84:
                    local_134 = iVar23;
                    if (iVar23 != 0) {
                      return iVar23;
                    }
                  }
                }
              }
            }
          }
        }
      }
LAB_0240cba0:
      iVar22 = iVar22 + 1;
    } while (iVar22 != 3);
    fVar55 = fVar36 + fVar55;
  } while( true );
}

