
undefined8 FUN_0245c480(long param_1)

{
  ulong uVar1;
  byte *pbVar2;
  float *pfVar3;
  uint *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined *puVar10;
  ushort uVar11;
  float fVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  ulong uVar19;
  long lVar20;
  float *pfVar21;
  int iVar22;
  byte bVar23;
  bool bVar24;
  byte bVar25;
  uint uVar26;
  long lVar27;
  uint uVar28;
  undefined8 *puVar29;
  long lVar30;
  uint uVar31;
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
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c [6];
  int local_154;
  uint local_150;
  uint local_14c;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  float local_128;
  float fStack_124;
  undefined4 local_120;
  float fStack_11c;
  float local_f8;
  float fStack_f4;
  undefined8 local_f0;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined2 local_d8;
  undefined1 uStack_d6;
  undefined1 uStack_d5;
  float fStack_d4;
  undefined1 uStack_d0;
  undefined2 uStack_cf;
  undefined1 uStack_cd;
  float fStack_cc;
  undefined2 local_c8;
  undefined4 local_c6;
  undefined1 local_c2;
  undefined8 local_c0;
  undefined1 local_b8;
  undefined8 local_b4;
  undefined2 local_ac;
  
  puVar10 = PTR_DAT_04bc39f8;
  if (DAT_04c487d4 == 0xffff) {
    return 0;
  }
  puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < DAT_04c487d4) {
    puVar4 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar4 & 1) == 0) {
    return 0;
  }
  local_f8 = 0.0;
  if (((*puVar4 & 1) == 0) || (local_f8 = 9.80909e-45, (*puVar4 >> 7 & 1) != 0)) goto LAB_0245c628;
  if (DAT_0548e140 < 8) {
    local_f8 = 8.40779e-45;
    if ((*puVar4 >> 6 & 1) == 0) goto LAB_0245c5d8;
    uVar19 = FUN_02915598(&DAT_0548e140);
    if ((uVar19 & 1) != 0) goto LAB_0245c628;
    if (DAT_04c487d4 != 0xffff) goto LAB_0245c5d8;
  }
  else {
    local_f8 = 8.40779e-45;
    if ((*puVar4 >> 6 & 1) != 0) goto LAB_0245c628;
LAB_0245c5d8:
    local_f8 = 2.94273e-44;
    puVar4 = (uint *)(puVar10 + ((long)(short)DAT_04c487d4 & 0xffffffffU) * 8);
    if (0xff < DAT_04c487d4) {
      puVar4 = (uint *)puVar10;
    }
    if ((*puVar4 >> 0x15 & 1) != 0) goto LAB_0245c628;
  }
  uVar19 = FUN_016cf9f0();
  if ((((uVar19 & 1) == 0) && (uVar19 = FUN_016e4ef8(), (uVar19 & 1) == 0)) &&
     (uVar19 = FUN_016e6334(), (uVar19 & 1) == 0)) {
    return 0;
  }
LAB_0245c628:
  pfVar3 = (float *)PTR_DAT_04bc3038;
  pfVar21 = (float *)PTR_DAT_04bc3038;
  if (*(char *)(param_1 + 0x12f8) != '\0') {
    pfVar21 = (float *)(param_1 + 0xeec);
  }
  fVar45 = SQRT(pfVar21[1] * pfVar21[1] + *pfVar21 * *pfVar21);
  lVar20 = FUN_0251e98c(1);
  pfVar21 = (float *)(**(code **)(*(long *)(lVar20 + 0x120) + 0xf0))(lVar20 + 0x120);
  if (*pfVar21 <= fVar45) {
    lVar20 = FUN_0251e98c(1);
    pfVar21 = (float *)(**(code **)(*(long *)(lVar20 + 0x120) + 0xf0))(lVar20 + 0x120);
    fVar32 = *pfVar21;
    lVar20 = FUN_0251e98c(1);
    pfVar21 = (float *)(**(code **)(*(long *)(lVar20 + 0x120) + 0xf0))(lVar20 + 0x120);
    fVar32 = (fVar45 - *pfVar21) / (1.0 - fVar32);
    fVar45 = 0.9999;
    if (fVar32 <= 0.9999) {
      fVar45 = fVar32;
    }
    if (fVar32 < 0.0) {
      return 0;
    }
    if (fVar45 <= 0.0 || *(int *)(param_1 + 0x178) != 0) {
      return 0;
    }
    if ((DAT_04cd19d8 != 0) && (*(int *)(DAT_04cd19d8 + 0x15c) != 0)) {
      pbVar2 = PTR_DAT_04bb32e0;
      if (*(int *)(DAT_04cd19d8 + 0x15c) != 0) {
        pbVar2 = (byte *)(DAT_04cd19d8 + 0x158);
      }
      bVar23 = *(byte *)(param_1 + 0x1ee8);
      bVar25 = *pbVar2;
      if (7 < bVar25) {
        bVar25 = 0xff;
      }
      if (7 < bVar23) {
        bVar23 = 0xff;
      }
      if (bVar25 != bVar23) {
        if (*DAT_055c10d8 != '\0') {
          return 0;
        }
        if (*DAT_055cdb40 != '\0') {
          return 0;
        }
      }
    }
    local_130 = 0;
    local_148 = 0;
    local_140 = 0xbf80000000000000;
    local_138 = 0x673f800000;
    lVar20 = FUN_0251e98c(1);
    pfVar21 = (float *)(**(code **)(*(long *)(lVar20 + 0x2d0) + 0xf0))(lVar20 + 0x2d0);
    local_138 = CONCAT44(0x77,(undefined4)local_138);
    local_14c = *(int *)(*(long *)(param_1 + 0x68) + 0x2b4) + 0x20000000U >> 0x1e;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar3 = (float *)(param_1 + 0xeec);
    }
    local_140 = CONCAT44(*pfVar21 * 0.99 * 0.5,(undefined4)local_140);
    FUN_02569464(&local_154,pfVar3);
    local_150 = local_154 + 0x20000000U >> 0x1e;
    if (local_14c == local_150) {
      lVar20 = 0;
      uVar19 = (ulong)((float)(int)local_14c * 90.0 * 11930465.0);
      uVar26 = (uint)uVar19;
      uVar19 = uVar19 >> 0x18 & 0xff;
      fVar45 = (float)(uVar26 & 0xffffff) * 5.9604645e-08;
      lVar27 = *(long *)(param_1 + 0x68);
      fVar42 = ((float)(&DAT_04199798)[uVar19 * 4] + fVar45 * (float)(&DAT_0419979c)[uVar19 * 4]) *
               5.0;
      fVar37 = ((float)(&DAT_041997a0)[uVar19 * 4] + fVar45 * (float)(&DAT_041997a4)[uVar19 * 4]) *
               5.0;
      local_16c[1] = *(float *)(lVar27 + 0x27c) + 0.0;
      uVar28 = uVar26 + 0x40000000;
      uVar19 = (ulong)(uVar28 >> 0x18);
      fVar43 = (float)(&DAT_04199798)[uVar19 * 4] + fVar45 * (float)(&DAT_0419979c)[uVar19 * 4];
      uVar26 = uVar26 + 0xc0000000;
      uVar1 = (ulong)(uVar26 >> 0x18);
      fVar44 = (float)(&DAT_041997a0)[uVar19 * 4] + fVar45 * (float)(&DAT_041997a4)[uVar19 * 4];
      fVar48 = (float)(&DAT_04199798)[uVar1 * 4] + fVar45 * (float)(&DAT_0419979c)[uVar1 * 4];
      fVar32 = (float)(&DAT_041997a0)[uVar1 * 4] + fVar45 * (float)(&DAT_041997a4)[uVar1 * 4];
      local_16c[0] = *(float *)(lVar27 + 0x278) + fVar43 * 1.5;
      local_16c[2] = *(float *)(lVar27 + 0x280) + fVar44 * 1.5;
      local_16c[3] = *(float *)(lVar27 + 0x278) + fVar48 * 1.5;
      fVar38 = fVar43 * 0.0;
      local_16c[4] = local_16c[1];
      local_16c[5] = *(float *)(lVar27 + 0x280) + fVar32 * 1.5;
      fVar39 = fVar48 * 0.0;
      fVar41 = (float)uVar28 * 8.381903e-08;
      fVar45 = fVar41;
      if (fVar41 < 0.0) {
        fVar45 = fVar41 - (float)(int)(fVar41 / 360.0 + -1.0) * 360.0;
      }
      bVar13 = true;
      fVar33 = fVar41 - (float)(int)(fVar41 / 360.0) * 360.0;
      if (fVar41 <= 360.0) {
        fVar33 = fVar45;
      }
      do {
        bVar24 = bVar13;
        local_178 = (float)(int)((int)((float)(int)local_16c[lVar20 * 3] / 5.0) -
                                (uint)(local_16c[lVar20 * 3] < 0.0)) * 5.0 + 2.5;
        local_170 = (float)(int)((int)((float)(int)local_16c[lVar20 * 3 + 2] / 5.0) -
                                (uint)(local_16c[lVar20 * 3 + 2] < 0.0)) * 5.0 + 2.5;
        local_174 = (float)FUN_016e026c(0,&local_178,0,0);
        uVar14 = FUN_0245be94(&local_178,1);
        local_180 = local_174 + 0.0;
        local_184 = (float)(int)((int)((float)(int)(fVar42 + local_178) / 5.0) -
                                (uint)(fVar42 + local_178 < 0.0)) * 5.0 + 2.5;
        local_17c = (float)(int)((int)((float)(int)(fVar37 + local_170) / 5.0) -
                                (uint)(fVar37 + local_170 < 0.0)) * 5.0 + 2.5;
        local_180 = (float)FUN_016e026c(0,&local_184,0,0);
        uVar15 = FUN_0245be94(&local_184,1);
        uVar16 = FUN_0245be94(&local_184,0);
        fVar12 = local_17c;
        fVar41 = local_180;
        fVar45 = local_184;
        lVar20 = *(long *)(param_1 + 0x68);
        fVar34 = *(float *)(lVar20 + 0x27c);
        fVar46 = *(float *)(lVar20 + 0x278);
        fVar47 = *(float *)(lVar20 + 0x280);
        uVar5 = *(undefined4 *)(lVar20 + 0x2b4);
        uVar17 = FUN_006f0400(local_184 - fVar46,local_17c - fVar47);
        local_f8 = fVar38 * 0.0 + fVar44 * 0.0 + (fVar43 + 0.0) * 5.0 + local_184;
        fStack_f4 = (fVar38 * 0.0 + 1.0) * 0.0 + fVar44 * 0.0 * 0.0 + fVar38 * 5.0 + local_180;
        local_f0._0_4_ = (fVar44 * 0.0 * 0.0 - fVar43 * 0.0) + fVar44 * 5.0 + local_17c;
        fVar35 = (float)FUN_016e026c(0,&local_f8,0,0);
        local_f8 = fVar39 * 0.0 + fVar32 * 0.0 + (fVar48 + 0.0) * 5.0 + local_184;
        fStack_f4 = (fVar39 * 0.0 + 1.0) * 0.0 + fVar32 * 0.0 * 0.0 + fVar39 * 5.0 + local_180;
        local_f0 = (undefined *)
                   CONCAT44(local_f0._4_4_,
                            (fVar32 * 0.0 * 0.0 - fVar48 * 0.0) + fVar32 * 5.0 + local_17c);
        fVar36 = (float)FUN_016e026c(0,&local_f8,0,0);
        fVar40 = *(float *)(*(long *)(param_1 + 0x68) + 0x27c);
        uVar31 = uVar26;
        if ((fVar35 - fVar40 <= 30.0) && (uVar31 = uVar28, fVar36 - fVar40 <= 30.0)) {
          fVar35 = (float)uVar17 * 8.381903e-08;
          if (fVar35 <= 360.0) {
            if (fVar35 < 0.0) {
              fVar36 = fVar35 / 360.0 + -1.0;
              goto LAB_0245cc84;
            }
          }
          else {
            fVar36 = fVar35 / 360.0;
LAB_0245cc84:
            fVar35 = fVar35 - (float)(int)fVar36 * 360.0;
          }
          fVar36 = 0.0;
          if (fVar35 != fVar33) {
            fVar36 = fVar35 - fVar33;
            if (fVar35 <= fVar33) {
              fVar36 = fVar33 - fVar35;
            }
            if (180.0 < fVar36) {
              fVar36 = 360.0 - fVar36;
            }
          }
          if (90.0 <= fVar36) {
            uVar31 = uVar26;
          }
        }
        if (local_14c != 0) {
          if (local_14c == 1) {
            if ((uVar14 >> 3 & 1) != 0) {
              local_148 = CONCAT44(local_180 + 0.0,fVar42 + local_184);
              local_140 = CONCAT44(local_140._4_4_,fVar37 + local_17c);
              iVar18 = FUN_016ed290(&local_148,0,0,0);
              if (iVar18 == 0) goto LAB_0245cf48;
            }
            if (((uVar15 >> 3 & 1) == 0) ||
               ((((uVar15 & 1) == 0 || ((uVar16 >> 2 & 1) != 0)) &&
                (((uVar15 >> 2 & 1) == 0 || ((uVar16 & 1) != 0)))))) {
              if ((uVar16 >> 1 & 1) == 0) goto LAB_0245ca20;
              uVar19 = FUN_0245bbd8(&local_184);
              if ((((uVar19 & 1) == 0) && (((uVar15 >> 3 & 1) == 0 || ((uVar16 & 5) != 0)))) &&
                 (((uVar15 & 1) == 0 || ((uVar16 & 0xc) != 0)))) {
                uVar14 = uVar16 & 9;
                uVar16 = uVar16 & 0xd;
                goto joined_r0x0245ce1c;
              }
            }
          }
          else if (local_14c == 2) {
            if ((uVar14 & 1) != 0) {
              local_148 = CONCAT44(local_180 + 0.0,fVar42 + local_184);
              local_140 = CONCAT44(local_140._4_4_,fVar37 + local_17c);
              iVar18 = FUN_016ed290(&local_148,0,0,0);
              if (iVar18 == 0) goto LAB_0245cf48;
            }
            if (((uVar15 & 1) == 0) ||
               ((((uVar15 >> 1 & 1) == 0 || ((uVar16 >> 3 & 1) != 0)) &&
                (((uVar15 >> 3 & 1) == 0 || ((uVar16 >> 1 & 1) != 0)))))) {
              if ((uVar16 >> 2 & 1) == 0) goto LAB_0245ca20;
              uVar19 = FUN_0245bbd8(&local_184);
              if ((((uVar19 & 1) == 0) && (((uVar15 >> 3 & 1) == 0 || ((uVar16 & 3) != 0)))) &&
                 (((uVar15 >> 1 & 1) == 0 || ((uVar16 & 9) != 0)))) {
                uVar14 = uVar16 & 10;
                uVar16 = uVar16 & 0xb;
                goto joined_r0x0245ca14;
              }
            }
          }
          else {
            if ((uVar14 >> 1 & 1) != 0) {
              local_148 = CONCAT44(local_180 + 0.0,fVar42 + local_184);
              local_140 = CONCAT44(local_140._4_4_,fVar37 + local_17c);
              iVar18 = FUN_016ed290(&local_148,0,0,0);
              if (iVar18 == 0) goto LAB_0245cf48;
            }
            if (((uVar15 >> 1 & 1) == 0) ||
               ((((uVar15 & 1) == 0 || ((uVar16 >> 2 & 1) != 0)) &&
                (((uVar15 >> 2 & 1) == 0 || ((uVar16 & 1) != 0)))))) {
              if ((uVar16 >> 3 & 1) == 0) goto LAB_0245ca20;
              uVar19 = FUN_0245bbd8(&local_184);
              if ((((uVar19 & 1) == 0) && (((uVar15 >> 2 & 1) == 0 || ((uVar16 & 3) != 0)))) &&
                 (((uVar15 >> 1 & 1) == 0 || ((uVar16 & 5) != 0)))) {
                uVar14 = uVar16 & 6;
                uVar16 = uVar16 & 7;
joined_r0x0245ca14:
                if (uVar16 != 0) {
                  uVar15 = uVar15 & uVar14 == 0;
                  goto joined_r0x0245ca1c;
                }
              }
            }
          }
LAB_0245cf48:
          pfVar21 = (float *)(PTR_DAT_04bb2d00 + (ulong)(uVar31 >> 0x18) * 0x10);
          iVar18 = (int)(fVar34 * 4.0);
          fVar32 = (float)(uVar31 & 0xffffff) * 5.9604645e-08;
          fVar37 = *pfVar21 + fVar32 * pfVar21[1];
          local_f8 = pfVar21[2] + fVar32 * pfVar21[3];
          fVar32 = -(pfVar21[1] * fVar32) - *pfVar21;
          if (0x7ffe < iVar18) {
            iVar18 = 0x7fff;
          }
          if (iVar18 < -0x7fff) {
            iVar18 = -0x8000;
          }
          uStack_d0 = SUB41(local_f8,0);
          uStack_cf = (undefined2)((uint)local_f8 >> 8);
          uStack_cd = (undefined1)((uint)local_f8 >> 0x18);
          fStack_cc = fVar12;
          fStack_f4 = fVar37 * 0.0;
          fStack_d4 = local_f8 * 0.0;
          local_d8 = SUB42(fVar32,0);
          uStack_d6 = (undefined1)((uint)fVar32 >> 0x10);
          uStack_d5 = (undefined1)((uint)fVar32 >> 0x18);
          local_f0 = (undefined *)CONCAT44(fVar45,fVar37 + 0.0);
          local_e0 = CONCAT44(fVar41,fStack_f4);
          local_e8 = (undefined8 *)CONCAT44(fStack_f4 * 0.0 + 1.0,fStack_d4);
          iVar22 = (int)(fVar41 * 4.0);
          if (0x7ffe < iVar22) {
            iVar22 = 0x7fff;
          }
          if (iVar22 < -0x7fff) {
            iVar22 = -0x8000;
          }
          FUN_007535b4(&local_128,&local_f8);
          *(undefined8 *)(param_1 + 0x1998) = 0;
          *(undefined8 *)(param_1 + 0x19a0) = 0;
          *(undefined8 *)(param_1 + 0x19a8) = 0;
          *(undefined8 *)(param_1 + 0x1960) = *(undefined8 *)(param_1 + 0x18e0);
          *(undefined8 *)(param_1 + 0x19b0) = 0;
          *(undefined8 *)(param_1 + 0x19b8) = 0;
          *(undefined8 *)(param_1 + 0x1968) = *(undefined8 *)(param_1 + 0x18e8);
          *(undefined8 *)(param_1 + 0x19c0) = 0;
          *(undefined8 *)(param_1 + 0x19c8) = 0;
          *(undefined8 *)(param_1 + 0x19d0) = 0;
          *(undefined2 *)(param_1 + 0x19d8) = 0;
          *(undefined8 *)(param_1 + 0x1970) = *(undefined8 *)(param_1 + 0x18f0);
          *(undefined8 *)(param_1 + 0x1978) = *(undefined8 *)(param_1 + 0x18f8);
          *(int *)(param_1 + 0x1980) = (int)(fVar46 * 999.99994);
          *(short *)(param_1 + 0x1984) = (short)iVar18;
          *(int *)(param_1 + 0x1986) = (int)(fVar47 * 999.99994);
          *(short *)(param_1 + 0x198a) = (short)((uint)uVar5 >> 0x10);
          *(int *)(param_1 + 0x198c) = (int)(fVar45 * 999.99994);
          *(short *)(param_1 + 0x1990) = (short)iVar22;
          *(int *)(param_1 + 0x1992) = (int)(fVar12 * 999.99994);
          *(short *)(param_1 + 0x1996) = (short)(uVar31 >> 0x10);
          *(bool *)(param_1 + 0x1998) =
               fStack_11c + fVar34 * fStack_124 + fVar46 * local_128 + fVar47 * local_120 < 0.0;
          if (DAT_054f5738 == 0) {
            if ((DAT_054f0960 & 1) == 0) {
              iVar18 = __cxa_guard_acquire(&DAT_054f0960);
              puVar29 = &DAT_054f0958;
              if (iVar18 != 0) {
                DAT_054f0958 = 0;
                __cxa_guard_release(&DAT_054f0960);
              }
            }
            else {
              puVar29 = &DAT_054f0958;
            }
          }
          else {
            puVar29 = (undefined8 *)(DAT_054f5738 + 0x204);
            if ((ulong)*(byte *)(param_1 + 0x1ee8) < 8) {
              puVar29 = puVar29 + *(byte *)(param_1 + 0x1ee8);
            }
          }
          puVar10 = PTR_DAT_04bb3238;
          if ((*(uint *)((long)puVar29 + 4) >> 0xf & 1) != 0) {
            return 1;
          }
          fStack_d4 = 0.0;
          uStack_cd = 0;
          local_d8 = 0x101;
          uStack_d6 = 1;
          uStack_cf = 0x100;
          local_e8 = (undefined8 *)CONCAT44(*(undefined4 *)PTR_DAT_04bb3238,(undefined4)local_e8);
          local_e0 = CONCAT44(local_e0._4_4_,0x1f);
          fStack_124 = (float)(int)*(short *)(param_1 + 0x1990) * 0.25;
          bVar25 = *(byte *)(param_1 + 0x1ee8);
          local_128 = (float)*(int *)(param_1 + 0x198c) * 0.001;
          local_120 = (float)*(int *)(param_1 + 0x1992) * 0.001;
          if (7 < bVar25) {
            bVar25 = 0xff;
          }
          local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,bVar25);
          local_f0 = (undefined *)CONCAT44(local_f0._4_4_,local_120);
          local_f8 = local_128;
          fStack_f4 = fStack_124;
          lVar20 = FUN_0251e98c(1);
          (**(code **)(*(long *)(lVar20 + 0x2d0) + 0xf0))(lVar20 + 0x2d0);
          uStack_d0 = 1;
          local_f0 = (undefined *)CONCAT44(0x40000000,(float)local_f0);
          local_e0 = CONCAT44(0x41480000,(undefined4)local_e0);
          uVar19 = FUN_0251fad0(&local_f8,0);
          if ((uVar19 & 1) != 0) {
            return 1;
          }
          uVar19 = FUN_016efacc(0x40200000,&local_128);
          if ((uVar19 & 1) != 0) {
            return 1;
          }
          if ((*(byte *)(param_1 + 0x17d6) >> 6 & 1) != 0) {
            return 1;
          }
          if (DAT_04c487d4 == 0xffff) {
LAB_0245d288:
            uVar19 = FUN_016e6244();
            if ((((uVar19 & 1) != 0) || (uVar19 = FUN_0180c600(), (uVar19 & 1) != 0)) ||
               (uVar19 = FUN_016cf9f0(), (uVar19 & 1) != 0)) goto LAB_0245d2a0;
            goto LAB_0245d3c4;
          }
          local_f8 = 2.94273e-44;
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
          if (0xff < (uint)(int)(short)DAT_04c487d4) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar4 >> 0x15 & 1) == 0) goto LAB_0245d288;
LAB_0245d2a0:
          iVar18 = FUN_006f0400((float)*(int *)(param_1 + 0x198c) * 0.001 -
                                (float)*(int *)(param_1 + 0x1980) * 0.001,
                                (float)*(int *)(param_1 + 0x1992) * 0.001 -
                                (float)*(int *)(param_1 + 0x1986) * 0.001);
          local_128 = (float)(iVar18 + 0x20000000U >> 0x1e);
          local_f8 = (float)*(int *)(param_1 + 0x198c) * 0.001;
          fStack_f4 = (float)(int)*(short *)(param_1 + 0x1990) * 0.25;
          fVar45 = (float)*(int *)(param_1 + 0x1992) * 0.001;
          switch(local_128) {
          case 0.0:
            fVar32 = -7.5;
            break;
          case 1.4013e-45:
            fVar32 = -7.5;
            goto LAB_0245d360;
          case 2.8026e-45:
            fVar32 = 7.5;
            break;
          case 4.2039e-45:
            fVar32 = 7.5;
LAB_0245d360:
            local_f8 = local_f8 + fVar32;
          default:
            goto switchD_0245d33c_default;
          }
          fVar45 = fVar45 + fVar32;
switchD_0245d33c_default:
          local_d8 = 0x101;
          local_e0 = 0xbf8000000000001f;
          uStack_d6 = 1;
          fStack_d4 = 0.0;
          uStack_d0 = 0;
          uStack_cf = 0x100;
          uStack_cd = 0;
          bVar25 = *(byte *)(param_1 + 0x1ee8);
          local_e8 = (undefined8 *)CONCAT44(*(undefined4 *)puVar10,(undefined4)local_e8);
          if (7 < bVar25) {
            bVar25 = 0xff;
          }
          local_e8 = (undefined8 *)CONCAT71(local_e8._1_7_,bVar25);
          local_f0 = (undefined *)CONCAT44(0x40400000,fVar45);
          uVar19 = FUN_0251fad0(&local_f8,0);
          if ((uVar19 & 1) == 0) {
LAB_0245d3c4:
            lVar20 = *(long *)PTR_DAT_04bb4f78 + 0x20 +
                     (ulong)(uint)*(byte *)(param_1 + 0x1ee8) * 0x740;
            if (7 < *(byte *)(param_1 + 0x1ee8)) {
              lVar20 = *(long *)PTR_DAT_04bb4f78 + 0x20;
            }
            *(undefined8 *)(lVar20 + 0x420) = 0x100000000;
            *(undefined4 *)(lVar20 + 0x4c0) = 0;
            lVar30 = *(long *)(param_1 + 0x68);
            fVar45 = (float)*(int *)(param_1 + 0x198c) * 0.001;
            fVar32 = (float)*(int *)(param_1 + 0x1992) * 0.001;
            iVar6 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
            iVar7 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
            lVar27 = FUN_0251e98c(1);
            pfVar21 = (float *)(**(code **)(*(long *)(lVar27 + 0x2a0) + 0xf0))(lVar27 + 0x2a0);
            uVar11 = DAT_04c487d4;
            fVar37 = *(float *)(lVar30 + 0x278);
            fVar45 = *pfVar21 * 0.97;
            fVar32 = *(float *)(lVar30 + 0x280);
            fVar38 = fVar37 - fVar45;
            fVar37 = fVar45 + fVar37;
            fVar39 = fVar32 - fVar45;
            fVar45 = fVar45 + fVar32;
            iVar22 = (int)((float)(int)fVar38 / 5.0) - (uint)(fVar38 < 0.0);
            iVar8 = (int)((float)(int)fVar37 / 5.0) - (uint)(fVar37 < 0.0);
            fStack_cc = (float)((int)((float)(int)fVar39 / 5.0) - (uint)(fVar39 < 0.0));
            iVar9 = (int)((float)(int)fVar45 / 5.0) - (uint)(fVar45 < 0.0);
            iVar18 = iVar22;
            if (iVar8 <= iVar22) {
              iVar18 = iVar8;
            }
            if (iVar22 <= iVar8) {
              iVar22 = iVar8;
            }
            iVar8 = (int)fStack_cc;
            if (iVar9 <= (int)fStack_cc) {
              iVar8 = iVar9;
            }
            if ((int)fStack_cc <= iVar9) {
              fStack_cc = (float)iVar9;
            }
            if (iVar6 <= iVar18) {
              iVar18 = iVar6;
            }
            if (iVar7 <= iVar8) {
              iVar8 = iVar7;
            }
            bVar25 = *(byte *)(param_1 + 0x1ee8);
            if (iVar22 <= iVar6) {
              iVar22 = iVar6;
            }
            if ((int)fStack_cc <= iVar7) {
              fStack_cc = (float)iVar7;
            }
            uVar28 = (uint)bVar25;
            if (7 < uVar28) {
              uVar28 = 0xffffffff;
            }
            *(uint *)(lVar20 + 0x4d4) = uVar28;
            if (bVar25 < 8) {
              *(byte *)(lVar20 + 0x4d8) = bVar25;
            }
            local_f0 = PTR_DAT_04bbc1a0;
            *(undefined1 *)(lVar20 + 0x4d9) = 1;
            local_c0 = 0xffffffffffffffff;
            local_e0 = CONCAT44(iVar8,iVar18);
            local_c8 = 0xff01;
            local_c2 = 0;
            local_f0 = local_f0 + 0x10;
            local_b8 = 0;
            local_f8 = (float)CONCAT22(local_f8._2_2_,uVar11);
            uStack_d0 = (undefined1)iVar22;
            uStack_cf = (undefined2)((uint)iVar22 >> 8);
            uStack_cd = (undefined1)((uint)iVar22 >> 0x18);
            local_c6 = 0x100;
            local_d8 = 0x9750;
            uStack_d6 = 0x8f;
            uStack_d5 = 4;
            fStack_d4 = 0.0;
            local_e8 = &DAT_048f9750;
            local_b4 = 0x41200000;
            local_ac = 0xff00;
            if (*(int *)(lVar20 + 0x4d0) == 0x15) {
              local_c8 = 0x1401;
            }
            local_120._0_3_ = CONCAT12(2,(undefined2)local_120);
            uVar19 = FUN_023016c0(lVar20 + 0x4c8,&local_f8,&local_128);
            if ((uVar19 & 1) != 0) {
              local_f8 = 3.8816e-43;
              *(undefined8 *)(param_1 + 0x18c0) = *(undefined8 *)(param_1 + 0x19c0);
              *(undefined8 *)(param_1 + 0x18c8) = *(undefined8 *)(param_1 + 0x19c8);
              *(undefined8 *)(param_1 + 0x18d0) = *(undefined8 *)(param_1 + 0x19d0);
              *(undefined2 *)(param_1 + 0x18d8) = *(undefined2 *)(param_1 + 0x19d8);
              *(undefined8 *)(param_1 + 0x18a0) = *(undefined8 *)(param_1 + 0x19a0);
              *(undefined8 *)(param_1 + 0x18a8) = *(undefined8 *)(param_1 + 0x19a8);
              *(undefined8 *)(param_1 + 0x18b0) = *(undefined8 *)(param_1 + 0x19b0);
              *(undefined8 *)(param_1 + 0x18b8) = *(undefined8 *)(param_1 + 0x19b8);
              *(undefined8 *)(param_1 + 0x1880) = *(undefined8 *)(param_1 + 0x1980);
              *(undefined8 *)(param_1 + 0x1888) = *(undefined8 *)(param_1 + 0x1988);
              *(undefined8 *)(param_1 + 0x1890) = *(undefined8 *)(param_1 + 0x1990);
              *(undefined8 *)(param_1 + 0x1898) = *(undefined8 *)(param_1 + 0x1998);
              *(undefined8 *)(param_1 + 0x1860) = *(undefined8 *)(param_1 + 0x1960);
              *(undefined8 *)(param_1 + 0x1868) = *(undefined8 *)(param_1 + 0x1968);
              *(undefined8 *)(param_1 + 0x1878) = *(undefined8 *)(param_1 + 0x1978);
              *(undefined8 *)(param_1 + 0x1870) = *(undefined8 *)(param_1 + 0x1970);
              lVar20 = 0;
              if (*(long *)(param_1 + 0x70) != 0) {
                lVar20 = *(long *)(param_1 + 0x70) + 0x278;
              }
              FUN_03ebb160(lVar20,0x115);
            }
          }
          return 1;
        }
        if ((uVar14 >> 2 & 1) != 0) {
          local_148 = CONCAT44(local_180 + 0.0,fVar42 + local_184);
          local_140 = CONCAT44(local_140._4_4_,fVar37 + local_17c);
          iVar18 = FUN_016ed290(&local_148,0,0,0);
          if (iVar18 == 0) goto LAB_0245cf48;
        }
        if (((uVar15 >> 2 & 1) != 0) &&
           ((((uVar15 >> 1 & 1) != 0 && ((uVar16 >> 3 & 1) == 0)) ||
            (((uVar15 >> 3 & 1) != 0 && ((uVar16 >> 1 & 1) == 0)))))) goto LAB_0245cf48;
        if ((uVar16 & 1) != 0) {
          uVar19 = FUN_0245bbd8(&local_184);
          if ((((uVar19 & 1) == 0) && (((uVar15 >> 3 & 1) == 0 || ((uVar16 & 6) != 0)))) &&
             (((uVar15 >> 1 & 1) == 0 || ((uVar16 & 0xc) != 0)))) {
            uVar14 = uVar16 & 10;
            uVar16 = uVar16 & 0xe;
joined_r0x0245ce1c:
            if (uVar16 != 0) {
              uVar15 = (uint)(uVar14 == 0) & uVar15 >> 2;
joined_r0x0245ca1c:
              if (uVar15 == 0) goto LAB_0245ca20;
            }
          }
          goto LAB_0245cf48;
        }
LAB_0245ca20:
        lVar20 = 1;
        bVar13 = false;
      } while (bVar24);
    }
  }
  return 0;
}

