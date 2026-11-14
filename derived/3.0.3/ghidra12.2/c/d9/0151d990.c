
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined4
FUN_0151d990(float *param_1,float *param_2,uint *param_3,float *param_4,undefined8 param_5,
            uint param_6,byte *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ulong uVar17;
  byte bVar18;
  uint uVar19;
  long lVar20;
  uint *puVar21;
  uint *puVar22;
  long *plVar23;
  int iVar24;
  undefined8 *puVar25;
  long lVar26;
  float fVar27;
  undefined4 uVar28;
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
  float fVar42;
  undefined8 local_1f0;
  undefined8 local_1e8;
  undefined *local_1e0;
  int local_1d8;
  int local_1d4;
  undefined8 local_1d0;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 *local_1b8;
  undefined *local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  float local_198;
  undefined8 local_194;
  float local_18c;
  undefined *local_188;
  undefined4 local_180;
  undefined4 uStack_17c;
  uint *local_178;
  undefined8 local_170;
  undefined8 local_168;
  int local_160;
  int local_15c;
  undefined *local_158;
  int local_150;
  undefined8 local_14c;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined *local_138;
  int local_130;
  int iStack_12c;
  undefined *local_128;
  undefined *puStack_120;
  int local_118;
  int iStack_114;
  undefined *local_110;
  int local_108;
  int iStack_104;
  undefined *local_100;
  undefined4 local_f8;
  undefined4 uStack_f4;
  uint *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  byte local_d0;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  undefined8 local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  
  puVar1 = PTR_DAT_04bb2d00;
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x15) & 0x7f0));
  fVar27 = (float)(*param_3 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar30 = *pfVar3 + fVar27 * pfVar3[1];
  fVar27 = pfVar3[2] + fVar27 * pfVar3[3];
  fVar29 = fVar30 * 0.0;
  fVar27 = fVar27 + fVar27;
  fVar33 = fVar30 * (fVar30 + fVar30);
  fVar36 = fVar27 * fVar29;
  fVar27 = fVar30 * fVar27;
  fVar37 = (fVar30 + fVar30) * fVar29;
  fVar38 = fVar29 * (fVar29 + fVar29);
  fVar30 = fVar30 * (fVar29 + fVar29);
  fVar32 = *param_2;
  fVar34 = param_2[1];
  fVar31 = param_2[2];
  local_d8 = 0;
  fVar29 = fVar32 + (fVar30 - fVar36) * 0.0 + ((1.0 - fVar33) - fVar38) * 0.0 +
                    (fVar27 + fVar38) * 2.5;
  fVar27 = fVar31 + (fVar36 + fVar37) * 0.0 + (fVar38 - fVar27) * 0.0 +
                    ((1.0 - fVar38) - fVar33) * 2.5;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  fVar35 = fVar29 + -4.0;
  fVar29 = fVar29 + 4.0;
  fVar33 = fVar27 + -4.0;
  fVar27 = fVar27 + 4.0;
  local_c0 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
  iStack_bc = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
  iVar9 = (int)((float)(int)fVar35 / 5.0) - (uint)(fVar35 < 0.0);
  iVar10 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  iVar16 = iVar9;
  if (iVar10 <= iVar9) {
    iVar16 = iVar10;
  }
  if (iVar9 <= iVar10) {
    iVar9 = iVar10;
  }
  iVar11 = (int)((float)(int)fVar33 / 5.0) - (uint)(fVar33 < 0.0);
  iVar14 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar10 = iVar11;
  if (iVar14 <= iVar11) {
    iVar10 = iVar14;
  }
  if (iVar11 <= iVar14) {
    iVar11 = iVar14;
  }
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if (lVar20 == 0) {
    puVar25 = &DAT_055c04a0;
  }
  else {
    puVar25 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar25 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar14 = FUN_006bd550(*puVar25,0);
      puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar25 = &DAT_055c04a0;
      }
    }
  }
  local_d4 = *(undefined4 *)(puVar25 + 7);
  local_d0 = FUN_017baf44();
  local_d0 = local_d0 & 1;
  local_e0 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(&local_e8,&local_e0,0,&local_c8,&local_c8);
  puVar2 = PTR_DAT_04bb43c0;
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  uVar15 = FUN_0277d6c4(&local_e8);
  lVar20 = *(long *)puVar2;
  if (lVar20 == 0) {
    return 5;
  }
  lVar26 = *(long *)(lVar26 + 0x57e58);
  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
  if (*(uint *)(lVar26 + 0x1d8) <= uVar15) {
    return 5;
  }
  if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) == 0) {
    return 5;
  }
  local_f0 = (uint *)0x0;
  local_f8 = local_e8;
  uStack_f4 = uStack_e4;
  local_100 = PTR_DAT_04bc0510 + 0x10;
  uVar15 = FUN_0277d6c4(&local_f8);
  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0151dda8:
    uVar19 = 0;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar15) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0151dda8;
    lVar20 = *(long *)PTR_DAT_04bc0428;
    uVar15 = FUN_0277d6c4(&local_e8);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if (*(uint *)(lVar20 + 0x1d8) <= uVar15) goto LAB_0151dda8;
    puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8);
    if (puVar21 == (uint *)0x0) goto LAB_0151dda8;
    uVar15 = *puVar21;
    uVar19 = 0;
    local_f0 = puVar21;
    if ((uVar15 != 0) && (puVar21 != (uint *)(ulong)uVar15)) {
      puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar15);
      uVar19 = 0;
      if (*puVar22 != 0) {
        uVar15 = puVar22[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar20 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar20 != 0) {
            uVar19 = 0;
            if ((ulong)uVar15 != 0) {
              uVar19 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar15);
            }
            if (*puVar22 <= uVar19) {
              uVar19 = 0xffffffff;
            }
            if ((uVar19 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar19 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar19 * 2),
               uVar19 < 0x52)) goto LAB_0151ddac;
          }
        }
        goto LAB_0151dda8;
      }
    }
  }
LAB_0151ddac:
  local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar19);
  if ((uVar19 & 0xfffffffe) != 10) {
    return 5;
  }
  fVar33 = param_4[2];
  pfVar3 = (float *)(puVar1 + ((ulong)(*param_3 >> 0x15) & 0x7f0));
  fVar27 = (float)(*param_3 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar31 = *pfVar3 + fVar27 * pfVar3[1];
  fVar29 = *param_4;
  fVar32 = param_4[1];
  fVar27 = pfVar3[2] + fVar27 * pfVar3[3];
  fVar35 = fVar31 * 0.0;
  fVar40 = fVar31 * (fVar31 + fVar31);
  fVar27 = fVar27 + fVar27;
  fVar39 = (fVar31 + fVar31) * fVar35;
  fVar42 = fVar35 * (fVar35 + fVar35);
  fVar41 = fVar31 * (fVar35 + fVar35);
  fVar35 = fVar27 * fVar35;
  fVar31 = fVar31 * fVar27;
  fVar27 = ((float)iVar16 * 5.0 + (float)iVar9 * 5.0 + 5.0) * 0.5 +
           fVar32 * (fVar41 - fVar35) + fVar29 * ((1.0 - fVar40) - fVar42) +
           fVar33 * (fVar31 + fVar42);
  fVar31 = ((float)iVar10 * 5.0 + (float)iVar11 * 5.0 + 5.0) * 0.5 +
           fVar32 * (fVar35 + fVar39) + fVar29 * (fVar42 - fVar31) +
           fVar33 * ((1.0 - fVar42) - fVar40);
  *param_1 = fVar27;
  param_1[1] = fVar34 + ((1.0 - fVar38) - fVar38) * 0.0 + (fVar36 + fVar30) * 0.0 +
                        (fVar37 - fVar36) * 2.5 +
               fVar32 * ((1.0 - fVar42) - fVar42) + fVar29 * (fVar35 + fVar41) +
               fVar33 * (fVar39 - fVar35);
  puVar1 = PTR_DAT_04bbc1a0;
  fVar27 = fVar27 + -2.5;
  fVar29 = fVar31 + -2.5;
  param_1[2] = fVar31;
  puVar1 = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  iVar10 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar16 = iVar10 + 1;
  fVar27 = (float)iVar10 * 5.0;
  iVar11 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  iVar9 = iVar11 + 1;
  fVar29 = (float)iVar11 * 5.0;
  local_130 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iStack_12c = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  local_138 = puVar2;
  local_128 = puVar1;
  puStack_120 = puVar2;
  local_118 = iVar10;
  iStack_114 = iVar11;
  local_110 = puVar2;
  local_108 = iVar16;
  iStack_104 = iVar9;
  FUN_01a5033c(&local_140,&local_e0,0,&local_138,&local_138);
  lVar20 = *(long *)PTR_DAT_04bb27c8;
  if (((lVar20 == 0) || (*(long *)(lVar20 + 0xa8) == 0)) || (*(char *)(lVar20 + 0x11c8) != '\0')) {
    fVar30 = -500.0;
  }
  else {
    fVar30 = (float)FUN_0093a950(lVar20 + 0x28,param_2,0);
  }
  FUN_01317b90(param_2,0);
  puVar12 = PTR_DAT_04bb6298;
  plVar23 = (long *)PTR_DAT_04bb27c8;
  iVar14 = iVar11;
  iVar24 = iVar10;
  do {
    sVar8 = *(short *)puVar12;
    local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,(float)iVar24 * 5.0 + 2.5);
    local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,(float)iVar14 * 5.0 + 2.5);
    if (sVar8 == -1) {
      uVar15 = 0;
      lVar20 = *plVar23;
      if (lVar20 != 0) goto LAB_0151e0bc;
LAB_0151e0d0:
      fVar31 = -500.0;
    }
    else {
      local_170 = (undefined *)((ulong)local_170 & 0xffffffff00000000);
      puVar21 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar8 * 8);
      if (0xff < (uint)(int)sVar8) {
        puVar21 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar15 = *puVar21 & 1;
      lVar20 = *plVar23;
      if (lVar20 == 0) goto LAB_0151e0d0;
LAB_0151e0bc:
      if ((*(long *)(lVar20 + 0xa8) == 0) || (*(char *)(lVar20 + 0x11c8) != '\0'))
      goto LAB_0151e0d0;
      fVar31 = (float)FUN_0093a950(lVar20 + 0x28,&local_1f0,0);
      plVar23 = (long *)PTR_DAT_04bb27c8;
    }
    fVar31 = fVar30 - fVar31;
    fVar32 = -fVar31;
    if (0.0 <= fVar31) {
      fVar32 = fVar31;
    }
    if (uVar15 == 0) {
      if (7.0 < fVar32) {
        return 0;
      }
      local_150 = (int)((float)(int)*param_2 / 5.0) - (uint)(*param_2 < 0.0);
      local_160 = local_150;
      if (iVar24 <= local_150) {
        local_160 = iVar24;
      }
      if (local_150 <= iVar24) {
        local_150 = iVar24;
      }
      iVar5 = (int)((float)(int)param_2[2] / 5.0) - (uint)(param_2[2] < 0.0);
      local_15c = iVar5;
      if (iVar14 <= iVar5) {
        local_15c = iVar14;
      }
      if (iVar5 <= iVar14) {
        iVar5 = iVar14;
      }
      local_14c = CONCAT44(local_14c._4_4_,iVar5);
      local_170 = puVar1;
      local_168 = puVar2;
      local_158 = puVar2;
      if (*plVar23 != 0) {
        lVar20 = *(long *)(*plVar23 + 0xa8);
        if (lVar20 != 0) {
          uVar17 = FUN_009721a0(lVar20,&local_170,0);
          plVar23 = (long *)PTR_DAT_04bb27c8;
          if ((uVar17 & 1) != 0) {
            return 0;
          }
        }
      }
    }
    else if (0.1 < fVar32) {
      return 0;
    }
    puVar13 = PTR_DAT_04bc0510;
    if (iVar24 < iVar16) {
      iVar24 = iVar24 + 1;
    }
    else {
      iVar14 = iVar14 + 1;
      iVar24 = iVar10;
    }
  } while ((iVar10 != iVar24) || (iVar11 + 2 != iVar14));
  lVar20 = *(long *)PTR_DAT_04bb2720;
  if (lVar20 == 0) {
    puVar25 = &DAT_055c04a0;
  }
  else {
    puVar25 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar25 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar14 = FUN_006bd550(*puVar25,0);
      puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar14 != 0x758f7eaf) {
        puVar25 = &DAT_055c04a0;
      }
    }
  }
  if (*(int *)(puVar25 + 7) == -0x17df00c3) {
    lVar20 = *(long *)PTR_DAT_04bb59d8;
    iVar24 = *(int *)(lVar20 + 0x50);
    iVar5 = *(int *)(lVar20 + 0x60);
    iVar6 = *(int *)(lVar20 + 100);
    iVar7 = *(int *)(lVar20 + 0x2c);
    iVar14 = iVar24;
    if (iVar5 <= iVar24) {
      iVar14 = iVar5;
    }
    if (iVar24 <= iVar5) {
      iVar24 = iVar5;
    }
    iVar5 = iVar7;
    if (iVar6 <= iVar7) {
      iVar5 = iVar6;
    }
    iVar4 = iVar7;
    if (iVar7 <= iVar6) {
      iVar4 = iVar6;
    }
    if ((((iVar10 < *(int *)(lVar20 + 0x28)) || (*(int *)(lVar20 + 0x38) < iVar16)) ||
        (iVar11 < iVar7)) || (*(int *)(lVar20 + 0x3c) < iVar9)) {
      if (iVar10 < iVar14) {
        return 4;
      }
      if (iVar24 < iVar16) {
        return 4;
      }
      if (iVar11 < iVar5) {
        return 4;
      }
      if (iVar4 < iVar9) {
        return 4;
      }
    }
  }
  if (((param_6 & 1) == 0) && (*param_7 < 8)) {
    local_170 = (undefined *)CONCAT44(local_170._4_4_,0x15);
    uVar17 = FUN_0290cbcc(&local_170);
    if ((((uVar17 & 1) != 0) ||
        ((uVar17 = FUN_016e6244(), (uVar17 & 1) != 0 || (uVar17 = FUN_0180c600(), (uVar17 & 1) != 0)
         ))) || (uVar17 = FUN_016cf9f0(), (uVar17 & 1) != 0)) {
      local_1f0 = (undefined8 *)CONCAT44(local_1f0._4_4_,(fVar27 + (float)iVar16 * 5.0 + 5.0) * 0.5)
      ;
      local_1e8 = (undefined **)CONCAT44(local_1e8._4_4_,(fVar29 + (float)iVar9 * 5.0 + 5.0) * 0.5);
      uVar28 = FUN_016e026c(0,&local_1f0,0,0);
      local_1f0 = (undefined8 *)CONCAT44(uVar28,(undefined4)local_1f0);
      local_158 = (undefined *)0xbf8000000000001f;
      bVar18 = *param_7;
      local_150 = CONCAT13(local_150._3_1_,0x10101);
      local_14c = 0x1000000000000;
      if (7 < bVar18) {
        bVar18 = 0xff;
      }
      local_160 = CONCAT31(local_160._1_3_,bVar18);
      local_15c = *(int *)PTR_DAT_04bb3238;
      local_170 = (undefined *)CONCAT44(uVar28,(undefined4)local_1f0);
      local_168 = (undefined *)CONCAT44(0x40400000,(undefined4)local_1e8);
      uVar17 = FUN_0251fad0(&local_170,0);
      if ((uVar17 & 1) != 0) {
        return 0;
      }
    }
  }
  puVar1 = PTR_DAT_04bb43c0;
  lVar26 = *(long *)PTR_DAT_04bb43c0;
  uVar15 = FUN_0277d6c4(&local_140);
  lVar20 = *(long *)puVar1;
  if (lVar20 == 0) goto LAB_0151e904;
  lVar26 = *(long *)(lVar26 + 0x57e58);
  uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
  if ((*(uint *)(lVar26 + 0x1d8) <= uVar15) ||
     (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0151e904;
  local_188 = puVar13 + 0x10;
  local_178 = (uint *)0x0;
  local_180 = local_140;
  uStack_17c = uStack_13c;
  uVar15 = FUN_0277d6c4(&local_180);
  if (*(long *)PTR_DAT_04bb43c0 == 0) {
LAB_0151e5d8:
    uVar19 = 0;
  }
  else {
    lVar20 = *(long *)(lVar20 + 0x57e58);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if ((*(uint *)(lVar20 + 0x1d8) <= uVar15) ||
       (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8) == 0)) goto LAB_0151e5d8;
    lVar20 = *(long *)PTR_DAT_04bc0428;
    uVar15 = FUN_0277d6c4(&local_140);
    uVar15 = (uVar15 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
    if (*(uint *)(lVar20 + 0x1d8) <= uVar15) goto LAB_0151e5d8;
    puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar15 * 8);
    if (puVar21 == (uint *)0x0) goto LAB_0151e5d8;
    uVar15 = *puVar21;
    uVar19 = 0;
    local_178 = puVar21;
    if ((uVar15 != 0) && (puVar21 != (uint *)(ulong)uVar15)) {
      puVar22 = (uint *)((long)puVar21 - (long)(ulong)uVar15);
      uVar19 = 0;
      if (*puVar22 != 0) {
        uVar15 = puVar22[1];
        if ((uVar15 != 0) && ((ulong)(ushort)puVar22[2] != 0)) {
          lVar20 = 0xc;
          if (*(char *)((long)puVar22 + 10) != '\0') {
            lVar20 = 0x1c;
          }
          lVar20 = (long)puVar22 + lVar20 + (ulong)(ushort)puVar22[2] * 8;
          if (lVar20 != 0) {
            uVar19 = 0;
            if ((ulong)uVar15 != 0) {
              uVar19 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar15);
            }
            if (*puVar22 <= uVar19) {
              uVar19 = 0xffffffff;
            }
            if ((uVar19 < *(uint *)PTR_DAT_04bc0048) &&
               (uVar19 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar19 * 2),
               uVar19 < 0x52)) goto LAB_0151e5dc;
          }
        }
        goto LAB_0151e5d8;
      }
    }
  }
LAB_0151e5dc:
  local_170 = (undefined *)CONCAT44(local_170._4_4_,uVar19);
  if ((uVar19 & 0xfffffffe) == 10) {
    local_194 = 0;
    local_18c = -2.5;
    FUN_006f0730(param_3,&local_194);
    local_1a0 = *(undefined8 *)param_4;
    fVar27 = *param_2 + (float)local_194;
    local_198 = param_4[2];
    fVar29 = param_2[2] + local_18c;
    FUN_006f0730(param_3,&local_1a0);
    local_170 = PTR_DAT_04bbc1a0 + 0x10;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    fVar27 = fVar27 + (float)local_1a0 + -2.5;
    fVar29 = fVar29 + local_198 + -7.5;
    local_160 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
    local_15c = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
    local_150 = local_160 + 1;
    local_14c = CONCAT44(local_14c._4_4_,local_15c + 3);
    local_168 = puVar1;
    local_158 = puVar1;
    FUN_012e1f40(&local_170,param_3);
    local_1b8 = (undefined8 *)0xfffe;
    local_1a8 = 0;
    local_1b0 = puVar1;
    FUN_0277d4ac(&local_1b8);
    FUN_01a5033c(&local_1f0,&local_e0,0,&local_c8,&local_1b0);
    local_1c0 = 0;
    local_1d0 = 0xfffe;
    local_1b8 = local_1f0;
    local_1c8 = puVar1;
    FUN_0277d4ac(&local_1d0);
    fVar27 = param_1[2];
    fVar29 = (float)(int)fVar27 / 5.0;
    local_1e8 = (undefined **)
                CONCAT44((int)fVar29 - (uint)(fVar27 < 0.0),
                         (int)((float)(int)*param_1 / 5.0) - (uint)(*param_1 < 0.0));
    local_1f0 = (undefined8 *)puVar1;
    FUN_01a5033c(&local_b8,&local_e0,0,&local_1f0,&local_1c8);
    iVar9 = local_160;
    iVar16 = (int)local_14c + 1;
    local_1d8 = local_160;
    local_1d4 = local_15c;
    local_1f0 = &local_168;
    local_1e8 = &local_158;
    local_1e0 = puVar1;
    if (iVar16 != local_15c) {
      do {
        uVar17 = FUN_01512760(&local_1e0);
        if ((uVar17 & 1) != 0) {
          return 0;
        }
        uVar17 = FUN_009765e0(&local_1e0);
        if ((uVar17 & 1) != 0) {
          return 0;
        }
        local_b0 = 0;
        local_ac = 8;
        local_b8 = 0;
        local_b8 = 0x100;
        local_ac = 8;
        local_b0 = 0;
        lVar20 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar20 != 0) && (*(long *)(lVar20 + 0xa8) != 0)) &&
           (uVar17 = FUN_00949ac8(lVar20 + 0x28,&local_1e0,&local_b8), (uVar17 & 1) != 0)) {
          return 0;
        }
        if (local_1d8 < *(int *)(local_1e8 + 1)) {
          local_1d8 = local_1d8 + 1;
        }
        else {
          local_1d4 = local_1d4 + 1;
          local_1d8 = *(int *)(local_1f0 + 1);
        }
      } while ((iVar9 != local_1d8) || (iVar16 != local_1d4));
    }
    if ((*(long *)PTR_DAT_04bb27c8 != 0) &&
       ((lVar20 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8), lVar20 != 0 &&
        (uVar17 = FUN_009721a0(lVar20,&local_170,0), (uVar17 & 1) != 0)))) {
      return 0;
    }
    uVar17 = FUN_0151f7f8(&local_170,&local_1c8,&local_1b8,&local_1d0);
    if ((uVar17 & 1) != 0) {
      if ((int)local_1a8 == (int)local_1c0) {
        if ((local_1a8._4_4_ == local_1c0._4_4_) &&
           (iVar16 = FUN_0277d6c4(&local_1b8), iVar16 == 0x33ee)) {
          return 0;
        }
      }
      fVar30 = (float)FUN_0151f71c(param_2,param_3,param_4);
      *param_1 = fVar30;
      param_1[1] = fVar27;
      param_1[2] = fVar29;
      return 1;
    }
  }
LAB_0151e904:
  iVar16 = FUN_01515c00(&local_128,0);
  local_170 = (undefined *)CONCAT44(local_170._4_4_,iVar16);
  if (iVar16 != 0) {
    return 0;
  }
  uVar17 = FUN_015158d0(&local_128,param_6 & 1);
  uVar28 = 2;
  if ((uVar17 & 1) == 0) {
    uVar28 = 0;
  }
  return uVar28;
}

