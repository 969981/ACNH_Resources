
undefined8
FUN_0151e970(float *param_1,float *param_2,uint *param_3,float *param_4,undefined8 param_5,
            uint param_6,byte *param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  uint *puVar17;
  byte bVar18;
  int iVar19;
  uint *puVar20;
  undefined8 *puVar21;
  char cVar22;
  long lVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
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
  int local_1cc;
  int local_1c8;
  int local_1c0;
  int iStack_1bc;
  undefined8 local_188;
  undefined8 local_180;
  int local_178;
  int local_174;
  undefined *local_170;
  int local_168;
  undefined8 local_164;
  float local_15c;
  undefined4 local_158;
  float local_154;
  float local_150 [2];
  float local_148;
  float local_144 [2];
  float local_13c;
  undefined1 auStack_138 [8];
  undefined *local_130;
  undefined8 local_128;
  int local_120;
  int local_11c;
  undefined *local_118;
  int local_110;
  int local_10c;
  undefined *local_108;
  int local_100;
  int iStack_fc;
  uint local_f8;
  uint local_f4;
  undefined *local_f0;
  undefined4 local_e8;
  undefined4 uStack_e4;
  uint *local_e0;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined *local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  byte local_c0;
  undefined *local_b8;
  int local_b0;
  int iStack_ac;
  
  puVar1 = PTR_DAT_04bb2d00;
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
    return 0;
  }
  local_188 = (undefined *)((ulong)local_188 & 0xffffffff00000000);
  puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
  if (0xff < (uint)(int)sVar4) {
    puVar17 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar17 & 1) == 0) {
    return 0;
  }
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*param_3 >> 0x15) & 0x7f0));
  fVar24 = (float)(*param_3 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar26 = *pfVar3 + fVar24 * pfVar3[1];
  fVar24 = pfVar3[2] + fVar24 * pfVar3[3];
  fVar25 = fVar26 * 0.0;
  fVar24 = fVar24 + fVar24;
  fVar29 = fVar26 * (fVar26 + fVar26);
  fVar34 = fVar24 * fVar25;
  fVar24 = fVar26 * fVar24;
  fVar35 = (fVar26 + fVar26) * fVar25;
  fVar33 = fVar25 * (fVar25 + fVar25);
  fVar26 = fVar26 * (fVar25 + fVar25);
  fVar28 = *param_2;
  fVar25 = fVar28 + (fVar26 - fVar34) * 0.0 + ((1.0 - fVar29) - fVar33) * 0.0 +
                    (fVar24 + fVar33) * 2.5;
  fVar30 = param_2[1];
  fVar27 = param_2[2];
  local_c8 = 0;
  fVar24 = fVar27 + (fVar34 + fVar35) * 0.0 + (fVar33 - fVar24) * 0.0 +
                    ((1.0 - fVar33) - fVar29) * 2.5;
  local_b8 = PTR_DAT_04bb2010 + 0x10;
  fVar31 = fVar25 + -4.0;
  fVar25 = fVar25 + 4.0;
  fVar29 = fVar24 + -4.0;
  fVar24 = fVar24 + 4.0;
  local_b0 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
  iStack_ac = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  iVar19 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
  iVar5 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  iVar15 = iVar19;
  if (iVar5 <= iVar19) {
    iVar15 = iVar5;
  }
  if (iVar19 <= iVar5) {
    iVar19 = iVar5;
  }
  iVar6 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  iVar9 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  iVar5 = iVar6;
  if (iVar9 <= iVar6) {
    iVar5 = iVar9;
  }
  if (iVar6 <= iVar9) {
    iVar6 = iVar9;
  }
  lVar16 = *(long *)PTR_DAT_04bb2720;
  if (lVar16 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar9 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar9 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  local_c4 = *(undefined4 *)(puVar21 + 7);
  local_c0 = FUN_017baf44();
  local_c0 = local_c0 & 1;
  local_d0 = PTR_DAT_04bb3140 + 0x10;
  FUN_01a5033c(&local_d8,&local_d0,0,&local_b8,&local_b8);
  puVar2 = PTR_DAT_04bb43c0;
  lVar23 = *(long *)PTR_DAT_04bb43c0;
  uVar10 = FUN_0277d6c4(&local_d8);
  lVar16 = *(long *)puVar2;
  if (lVar16 == 0) {
    return 0;
  }
  lVar23 = *(long *)(lVar23 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
  if (*(uint *)(lVar23 + 0x1d8) <= uVar10) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
    return 0;
  }
  local_e0 = (uint *)0x0;
  local_f0 = PTR_DAT_04bc0510 + 0x10;
  local_e8 = local_d8;
  uStack_e4 = uStack_d4;
  uVar10 = FUN_0277d6c4(&local_e8);
  if (*(long *)PTR_DAT_04bb43c0 != 0) {
    lVar16 = *(long *)(lVar16 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar16 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(&local_d8);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
      if (uVar10 < *(uint *)(lVar16 + 0x1d8)) {
        puVar17 = *(uint **)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8);
        if (puVar17 != (uint *)0x0) {
          uVar10 = *puVar17;
          uVar12 = 0;
          local_e0 = puVar17;
          if ((uVar10 == 0) || (puVar17 == (uint *)(ulong)uVar10)) goto LAB_0151ede0;
          puVar20 = (uint *)((long)puVar17 - (long)(ulong)uVar10);
          uVar12 = 0;
          if (*puVar20 == 0) goto LAB_0151ede0;
          uVar10 = puVar20[1];
          if ((uVar10 != 0) && ((ulong)(ushort)puVar20[2] != 0)) {
            lVar16 = 0xc;
            if (*(char *)((long)puVar20 + 10) != '\0') {
              lVar16 = 0x1c;
            }
            lVar16 = (long)puVar20 + lVar16 + (ulong)(ushort)puVar20[2] * 8;
            if (lVar16 != 0) {
              uVar12 = 0;
              if ((ulong)uVar10 != 0) {
                uVar12 = (uint)((ulong)((long)puVar17 - lVar16) / (ulong)uVar10);
              }
              if (*puVar20 <= uVar12) {
                uVar12 = 0xffffffff;
              }
              if ((uVar12 < *(uint *)PTR_DAT_04bc0048) &&
                 (uVar12 = (uint)*(ushort *)
                                  (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar12 * 2),
                 uVar12 < 0x52)) goto LAB_0151ede0;
            }
          }
        }
      }
    }
  }
  uVar12 = 0;
LAB_0151ede0:
  local_188 = (undefined *)CONCAT44(local_188._4_4_,uVar12);
  if ((uVar12 & 0xfffffffe) == 10) {
    uVar10 = *param_3;
    fVar28 = param_4[2];
    fVar24 = ((float)iVar15 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
    fVar25 = ((float)iVar5 * 5.0 + (float)iVar6 * 5.0 + 5.0) * 0.5;
    fVar27 = *param_4;
    fVar29 = param_4[1];
    local_f4 = uVar10 + 0x20000000 >> 0x1e;
    switch(local_f4) {
    case 0:
    case 2:
      fVar27 = fVar27 * 0.75;
      fVar29 = fVar29 * 0.75;
      fVar28 = fVar28 * 0.75;
    default:
      iVar15 = 2;
      iVar19 = 1;
      break;
    case 1:
    case 3:
      iVar15 = 1;
      iVar19 = 2;
      fVar27 = fVar27 * 0.75;
      fVar29 = fVar29 * 0.75;
      fVar28 = fVar28 * 0.75;
    }
    pfVar3 = (float *)(puVar1 + ((ulong)(uVar10 >> 0x15) & 0x7f0));
    fVar31 = (float)(uVar10 >> 1 & 0xffffff) * 5.9604645e-08;
    fVar32 = *pfVar3 + fVar31 * pfVar3[1];
    fVar31 = pfVar3[2] + fVar31 * pfVar3[3];
    fVar36 = fVar32 * 0.0;
    fVar38 = fVar32 * (fVar32 + fVar32);
    fVar31 = fVar31 + fVar31;
    fVar37 = (fVar32 + fVar32) * fVar36;
    fVar40 = fVar36 * (fVar36 + fVar36);
    fVar39 = fVar32 * (fVar36 + fVar36);
    fVar36 = fVar36 * fVar31;
    fVar32 = fVar32 * fVar31;
    fVar31 = fVar24 + fVar29 * (fVar39 - fVar36) + fVar27 * ((1.0 - fVar38) - fVar40) +
                      fVar28 * (fVar40 + fVar32);
    fVar32 = fVar25 + fVar29 * (fVar37 + fVar36) + fVar27 * (fVar40 - fVar32) +
                      fVar28 * ((1.0 - fVar40) - fVar38);
    *param_1 = fVar31;
    param_1[1] = fVar30 + ((1.0 - fVar33) - fVar33) * 0.0 + (fVar34 + fVar26) * 0.0 +
                          (fVar35 - fVar34) * 2.5 +
                 fVar29 * ((1.0 - fVar40) - fVar40) + fVar27 * (fVar39 + fVar36) +
                 fVar28 * (fVar37 - fVar36);
    param_1[2] = fVar32;
    fVar31 = fVar31 - ((float)iVar19 * 0.5 * 5.0 + -2.5);
    fVar32 = fVar32 - ((float)iVar15 * 0.5 * 5.0 + -2.5);
    iVar6 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
    iVar5 = iVar19 + iVar6 + -1;
    iVar19 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
    iVar15 = iVar19 + iVar15;
    fVar26 = ((float)iVar6 * 5.0 + (float)iVar5 * 5.0 + 5.0) * 0.5;
    fVar27 = ((float)(iVar15 + -1) * 5.0 + 5.0 + (float)iVar19 * 5.0) * 0.5;
    iVar9 = FUN_006f0400(fVar26 - fVar24,fVar27 - fVar25);
    local_f8 = iVar9 + 0x20000000U >> 0x1e;
    lVar16 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar16 == 0) || (*(long *)(lVar16 + 0xa8) == 0)) || (*(char *)(lVar16 + 0x11c8) != '\0'))
    {
      fVar24 = -500.0;
    }
    else {
      fVar24 = (float)FUN_0093a950(lVar16 + 0x28,param_2,0);
    }
    puVar8 = PTR_DAT_04bb43c0;
    cVar22 = '\0';
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    iVar9 = iVar19;
    iVar13 = iVar6;
    do {
      local_128 = (undefined *)CONCAT44(iVar9,iVar13);
      local_164 = CONCAT44(local_164._4_4_,iVar9);
      local_188 = puVar2;
      local_180 = puVar1;
      local_178 = iVar13;
      local_174 = iVar9;
      local_170 = puVar1;
      local_168 = iVar13;
      local_130 = puVar1;
      FUN_01a5033c(&local_108,&local_d0,0,&local_130,0);
      lVar16 = *(long *)puVar8;
      uVar10 = FUN_0277d6c4(&local_108);
      if (*(long *)puVar8 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar10 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) break;
      }
      iVar11 = FUN_01515c00(&local_188,0);
      if (iVar11 == 0) {
        cVar22 = cVar22 + '\x01';
      }
      if (iVar13 < iVar5) {
        iVar13 = iVar13 + 1;
      }
      else {
        iVar9 = iVar9 + 1;
        iVar13 = iVar6;
      }
    } while ((iVar6 != iVar13) || (iVar15 != iVar9));
    bVar7 = false;
    local_1cc = 0;
    local_1c8 = 0;
    local_1c0 = 0;
    iStack_1bc = 0;
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    puVar2 = PTR_DAT_04bbc1a0 + 0x10;
    iVar9 = iVar6;
    do {
      local_130 = puVar2;
      local_128 = puVar1;
      local_120 = iVar9;
      local_11c = iVar19;
      local_118 = puVar1;
      local_110 = iVar9;
      local_10c = iVar19;
      local_108 = puVar1;
      local_100 = iVar9;
      iStack_fc = iVar19;
      FUN_01a5033c(auStack_138,&local_d0,0,&local_108,0);
      puVar8 = PTR_DAT_04bb43c0;
      lVar16 = *(long *)PTR_DAT_04bb43c0;
      uVar12 = FUN_0277d6c4(auStack_138);
      uVar10 = local_f8;
      if (*(long *)puVar8 != 0) {
        lVar16 = *(long *)(lVar16 + 0x57e58);
        uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
        if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
          return 0;
        }
      }
      local_13c = ((float)local_11c * 5.0 + (float)local_10c * 5.0 + 5.0) * 0.5;
      local_144[0] = ((float)local_120 * 5.0 + (float)local_110 * 5.0 + 5.0) * 0.5;
      uVar14 = FUN_0245bbd8(local_144);
      if ((uVar14 & 1) == 0) goto switchD_0151f2f4_default;
      uVar12 = FUN_0245be94(local_144,0);
      FUN_0245be94(local_144,1);
      uVar10 = (int)(long)((float)(int)uVar10 * 90.0 * 11930465.0) + 0x20000000U >> 0x1e;
      local_188 = (undefined *)CONCAT44(local_188._4_4_,uVar10);
      switch(uVar10) {
      case 0:
      case 2:
        if ((uVar12 & 10) == 0) break;
LAB_0151f314:
        local_148 = (float)iStack_fc * 5.0 + 2.5;
        local_150[0] = (float)local_100 * 5.0 + 2.5;
        lVar16 = *(long *)PTR_DAT_04bb27c8;
        if (((lVar16 == 0) || (*(long *)(lVar16 + 0xa8) == 0)) ||
           (*(char *)(lVar16 + 0x11c8) != '\0')) {
          fVar25 = -500.0;
        }
        else {
          fVar25 = (float)FUN_0093a950(lVar16 + 0x28,local_150,0);
        }
        fVar25 = fVar24 - fVar25;
        fVar28 = -fVar25;
        if (0.0 <= fVar25) {
          fVar28 = fVar25;
        }
        if (0.1 < fVar28) {
          return 0;
        }
        sVar4 = *(short *)PTR_DAT_04bb6298;
        if (sVar4 == -1) {
LAB_0151f3d0:
          uVar14 = FUN_016e6244();
          if ((((uVar14 & 1) != 0) || (uVar14 = FUN_0180c600(), (uVar14 & 1) != 0)) ||
             (uVar14 = FUN_016cf9f0(), (uVar14 & 1) != 0)) goto LAB_0151f3e8;
        }
        else {
          local_188 = (undefined *)CONCAT44(local_188._4_4_,0x15);
          puVar17 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
          if (0xff < (uint)(int)sVar4) {
            puVar17 = (uint *)PTR_DAT_04bc39f8;
          }
          if ((*puVar17 >> 0x15 & 1) == 0) goto LAB_0151f3d0;
LAB_0151f3e8:
          local_15c = fVar26;
          local_154 = fVar27;
          local_158 = FUN_016e026c(0,&local_15c,0,0);
          local_170 = (undefined *)0xbf8000000000001f;
          local_168 = CONCAT13(local_168._3_1_,0x10101);
          local_164 = 0x1000000000000;
          local_174 = *(int *)PTR_DAT_04bb3238;
          local_188 = (undefined *)CONCAT44(local_158,local_15c);
          bVar18 = *param_7;
          if (7 < bVar18) {
            bVar18 = 0xff;
          }
          local_178 = CONCAT31(local_178._1_3_,bVar18);
          local_180 = (undefined *)CONCAT44(0x40400000,local_154);
          uVar14 = FUN_0251fad0(&local_188,0);
          if ((uVar14 & 1) != 0) {
            return 0;
          }
        }
        iVar13 = FUN_01515c00(&local_130,0);
        local_188 = (undefined *)CONCAT44(local_188._4_4_,iVar13);
        if (iVar13 != 0) {
          return 0;
        }
        if (cVar22 != '\x02') {
          fVar31 = *param_2;
          fVar30 = param_2[2];
          fVar25 = (float)(int)((int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0));
          fVar29 = fVar25 * 5.0;
          fVar33 = (float)(int)((int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0));
          fVar28 = fVar33 * 5.0;
          if (fVar25 * 5.0 + 2.5 < fVar31) {
            fVar29 = fVar29 + 5.0;
          }
          if (fVar33 * 5.0 + 2.5 < fVar30) {
            fVar28 = fVar28 + 5.0;
          }
          fVar33 = -10.0;
          fVar30 = -6.25;
          fVar31 = 10.0;
          fVar25 = 6.25;
          uVar10 = *param_3 + 0x20000000 >> 0x1e;
          local_188 = (undefined *)CONCAT44(local_188._4_4_,uVar10);
          if ((uVar10 | 2) != 2) {
            fVar33 = -6.25;
            fVar30 = -10.0;
            fVar31 = 6.25;
            fVar25 = 10.0;
          }
          fVar34 = (float)local_100 * 5.0 + 2.5;
          if (((fVar34 < fVar29 + fVar33) || (fVar29 + fVar31 < fVar34)) ||
             ((fVar29 = (float)iStack_fc * 5.0 + 2.5, fVar29 < fVar28 + fVar30 ||
              (fVar28 + fVar25 < fVar29)))) break;
        }
        uVar14 = FUN_015158d0(&local_130,param_6 & 1);
        if ((uVar14 & 1) == 0) {
          return 0;
        }
        if (!bVar7) goto switchD_0151f4d4_default;
        switch(local_f8) {
        case 0:
          iVar13 = local_120;
          iVar11 = iStack_1bc;
          break;
        case 1:
          iVar13 = local_11c;
          iVar11 = local_1c0;
          goto LAB_0151f60c;
        case 2:
          iVar13 = local_120;
          iVar11 = iStack_1bc;
LAB_0151f60c:
          if (iVar11 < iVar13) goto switchD_0151f2f4_default;
          goto switchD_0151f4d4_default;
        case 3:
          iVar13 = local_11c;
          iVar11 = local_1c0;
          break;
        default:
          goto switchD_0151f4d4_default;
        }
        if (iVar11 <= iVar13) {
switchD_0151f4d4_default:
          local_1c0 = local_11c;
          iStack_1bc = local_120;
          bVar7 = true;
          local_1cc = local_110;
          local_1c8 = local_10c;
        }
        break;
      case 1:
      case 3:
        if ((uVar12 & 5) != 0) goto LAB_0151f314;
      }
switchD_0151f2f4_default:
      if (iVar9 < iVar5) {
        iVar9 = iVar9 + 1;
      }
      else {
        iVar19 = iVar19 + 1;
        iVar9 = iVar6;
      }
    } while ((iVar6 != iVar9) || (iVar15 != iVar19));
    if (bVar7) {
      *param_1 = ((float)iStack_1bc * 5.0 + (float)local_1cc * 5.0 + 5.0) * 0.5;
      param_1[2] = ((float)local_1c0 * 5.0 + (float)local_1c8 * 5.0 + 5.0) * 0.5;
      return 1;
    }
  }
  return 0;
}

