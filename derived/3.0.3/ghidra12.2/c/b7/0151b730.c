
undefined8 FUN_0151b730(undefined8 *param_1,float *param_2)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  float *pfVar4;
  bool bVar5;
  uint uVar6;
  ushort uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  undefined4 uVar18;
  ulong uVar19;
  long lVar20;
  uint *puVar21;
  int *piVar22;
  uint *puVar23;
  char cVar24;
  undefined8 *puVar25;
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
  float local_14c;
  float fStack_148;
  float local_144;
  undefined **local_140;
  undefined **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined *local_118;
  undefined4 local_110;
  undefined4 uStack_10c;
  uint *local_108;
  undefined *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  undefined *puStack_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  byte local_d8;
  undefined *local_d0;
  undefined *local_c8;
  int local_c0;
  uint uStack_bc;
  undefined *local_b8;
  int local_b0;
  int local_ac;
  
  puVar12 = PTR_DAT_04bb2010;
  local_e0 = 0;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  local_d0 = PTR_DAT_04bbc1a0 + 0x10;
  local_c0 = (int)((float)(int)(*param_2 + -2.5) / 5.0) - (uint)(*param_2 + -2.5 < 0.0);
  uStack_bc = (int)((float)(int)(param_2[2] + -2.5) / 5.0) - (uint)(param_2[2] + -2.5 < 0.0);
  local_b0 = local_c0 + 1;
  local_ac = uStack_bc + 1;
  lVar20 = *(long *)PTR_DAT_04bb2720;
  local_c8 = puVar2;
  local_b8 = puVar2;
  if (lVar20 == 0) {
    puVar25 = &DAT_055c04a0;
  }
  else {
    puVar25 = &DAT_055c04a0;
    if (*(long *)(lVar20 + 0x330) != 0) {
      puVar25 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
      iVar15 = FUN_006bd550(*puVar25,0);
      puVar25 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar15 != 0x758f7eaf) {
        puVar25 = &DAT_055c04a0;
      }
    }
  }
  local_dc = *(undefined4 *)(puVar25 + 7);
  local_d8 = FUN_017baf44();
  local_d8 = local_d8 & 1;
  puStack_e8 = PTR_DAT_04bb3140 + 0x10;
  local_f0 = 0xfffe;
  FUN_0277d4ac(&local_f0);
  iVar15 = local_c0;
  puVar14 = PTR_DAT_04bc0048;
  puVar13 = PTR_DAT_04bb43c0;
  local_f8 = 0;
  uVar17 = local_ac + 1;
  local_128 = (undefined *)CONCAT44(uStack_bc,local_c0);
  if (uVar17 != uStack_bc) {
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    local_140 = &local_c8;
    local_138 = &local_b8;
    local_130 = puVar2;
    local_100 = puVar2;
    do {
      puVar25 = (undefined8 *)FUN_01a5190c(&puStack_e8,0,&local_130,&local_100);
      local_f0 = *puVar25;
      lVar20 = *(long *)puVar13;
      uVar16 = FUN_0277d6c4(&local_f0);
      if (*(long *)puVar13 != 0) {
        lVar20 = *(long *)(lVar20 + 0x57e58);
        uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
        if (((uVar16 < *(uint *)(lVar20 + 0x1d8)) &&
            (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) &&
           (uVar19 = FUN_0277e294(&local_f0), (uVar19 & 1) != 0)) {
          lVar20 = *(long *)puVar13;
          local_108 = (uint *)0x0;
          local_110 = (undefined4)local_f0;
          uStack_10c = local_f0._4_4_;
          local_118 = puVar3;
          uVar16 = FUN_0277d6c4(&local_110);
          fVar28 = 0.0;
          if (*(long *)puVar13 == 0) goto LAB_0151ba7c;
          lVar20 = *(long *)(lVar20 + 0x57e58);
          uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
          if ((uVar16 < *(uint *)(lVar20 + 0x1d8)) &&
             (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar16 * 8) != 0)) {
            lVar20 = *(long *)PTR_DAT_04bc0428;
            uVar16 = FUN_0277d6c4(&local_f0);
            uVar16 = (uVar16 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
            if ((*(uint *)(lVar20 + 0x1d8) <= uVar16) ||
               (puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar16 * 8),
               puVar21 == (uint *)0x0)) goto LAB_0151ba78;
            uVar16 = *puVar21;
            fVar28 = 0.0;
            if ((uVar16 != 0) && (puVar21 != (uint *)(ulong)uVar16)) {
              puVar23 = (uint *)((long)puVar21 - (long)(ulong)uVar16);
              fVar28 = 0.0;
              if (*puVar23 != 0) {
                uVar16 = puVar23[1];
                if ((uVar16 != 0) && ((ulong)(ushort)puVar23[2] != 0)) {
                  lVar20 = 0xc;
                  if (*(char *)((long)puVar23 + 10) != '\0') {
                    lVar20 = 0x1c;
                  }
                  lVar20 = (long)puVar23 + lVar20 + (ulong)(ushort)puVar23[2] * 8;
                  if (lVar20 != 0) {
                    uVar6 = 0;
                    if ((ulong)uVar16 != 0) {
                      uVar6 = (uint)((ulong)((long)puVar21 - lVar20) / (ulong)uVar16);
                    }
                    if (*puVar23 <= uVar6) {
                      uVar6 = 0xffffffff;
                    }
                    if ((uVar6 < *(uint *)puVar14) &&
                       (uVar7 = *(ushort *)(*(long *)(puVar14 + 8) + (long)(int)uVar6 * 2),
                       fVar28 = (float)(uint)uVar7, uVar7 < 0x52)) goto LAB_0151ba7c;
                  }
                }
                goto LAB_0151ba78;
              }
            }
          }
          else {
LAB_0151ba78:
            fVar28 = 0.0;
          }
LAB_0151ba7c:
          local_14c = fVar28;
          if (((uint)local_14c & 0xfffffffe) == 10) {
            lVar20 = *(long *)puVar13;
            local_108 = (uint *)0x0;
            local_110 = (undefined4)local_f0;
            uStack_10c = local_f0._4_4_;
            local_118 = PTR_DAT_04bc0510 + 0x10;
            uVar17 = FUN_0277d6c4(&local_110);
            if (*(long *)puVar13 != 0) {
              lVar20 = *(long *)(lVar20 + 0x57e58);
              uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
              if ((uVar17 < *(uint *)(lVar20 + 0x1d8)) &&
                 (*(long *)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8) != 0)) {
                lVar20 = *(long *)PTR_DAT_04bc0428;
                uVar17 = FUN_0277d6c4(&local_f0);
                uVar17 = (uVar17 & 0xffff) - (uint)*(ushort *)(lVar20 + 0x1f8);
                if ((uVar17 < *(uint *)(lVar20 + 0x1d8)) &&
                   (puVar21 = *(uint **)(*(long *)(lVar20 + 0x1e0) + (long)(int)uVar17 * 8),
                   puVar21 != (uint *)0x0)) {
                  local_108 = puVar21;
                }
              }
            }
            local_138 = (undefined **)(puVar12 + 0x10);
            local_130 = (undefined *)0x0;
            local_120 = 0;
            local_140 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
            local_128 = (undefined *)local_138;
            FUN_01afb480(&local_118,&local_140);
            local_130._0_4_ = (int)local_130 + (int)local_f8;
            local_120._0_4_ = (int)local_120 + (int)local_f8;
            local_130._4_4_ = local_130._4_4_ + local_f8._4_4_;
            local_120._4_4_ = local_120._4_4_ + local_f8._4_4_;
            fVar35 = ((float)(int)local_130 * 5.0 + (float)(int)local_120 * 5.0 + 5.0) * 0.5;
            fVar36 = ((float)local_130._4_4_ * 5.0 + (float)local_120._4_4_ * 5.0 + 5.0) * 0.5;
            fVar26 = (float)((local_120._4_4_ - local_130._4_4_) + 1) * 5.0;
            fVar28 = (float)(((int)local_120 - (int)local_130) + 1) * 5.0;
            if (fVar28 <= fVar26) {
              fVar28 = fVar26;
            }
            if (fVar28 * 0.5 <
                SQRT((param_2[2] - fVar36) * (param_2[2] - fVar36) +
                     (*param_2 - fVar35) * (*param_2 - fVar35))) {
              return 0;
            }
            iVar15 = FUN_01ae98d0(&local_118);
            fVar28 = (float)FUN_01aee3b4(&local_118);
            puVar2 = PTR_DAT_04bbcc10;
            bVar11 = true;
            uVar19 = (ulong)((float)((int)(long)((float)iVar15 * 90.0 * 11930465.0) + 0x60000000U >>
                                    0x1e) * 90.0 * 11930465.0);
            uVar17 = (uint)uVar19;
            pfVar4 = (float *)(PTR_DAT_04bb2d00 + (uVar19 >> 0x19 & 0x7f) * 0x10);
            fVar26 = (float)(uVar17 >> 1 & 0xffffff) * 5.9604645e-08;
            local_14c = fVar28;
            goto LAB_0151bd40;
          }
        }
      }
      if ((int)local_128 < *(int *)(local_138 + 1)) {
        iVar1 = (int)local_128 + 1;
        uVar16 = local_128._4_4_;
      }
      else {
        uVar16 = local_128._4_4_ + 1;
        iVar1 = *(int *)(local_140 + 1);
        local_128 = (undefined *)((ulong)uVar16 << 0x20);
      }
      local_128 = (undefined *)CONCAT44(local_128._4_4_,iVar1);
    } while ((iVar15 != iVar1) || (uVar17 != uVar16));
  }
  return 0;
LAB_0151bd40:
  fVar27 = 0.0;
  fVar31 = 0.0;
  if (fVar28 != 1.4013e-45) {
    uVar18 = FUN_01ae98d0(&local_118);
    fVar27 = 0.0;
    switch(uVar18) {
    case 0:
    case 2:
      fVar29 = -0.0;
      fVar31 = 5.0;
      if (fVar36 < param_2[2]) {
LAB_0151bdac:
        fVar31 = -fVar31;
        fVar27 = fVar29;
      }
      break;
    case 1:
    case 3:
      fVar31 = 0.0;
      fVar29 = -5.0;
      fVar27 = 5.0;
      if (fVar35 < *param_2) goto LAB_0151bdac;
      break;
    default:
      fVar31 = 0.0;
    }
    if (bVar11) {
      fVar27 = -fVar27;
      fVar31 = -fVar31;
    }
  }
  fVar30 = fVar35 + fVar27 + -2.5;
  fVar32 = fVar36 + fVar31 + -2.5;
  fVar27 = fVar35 + fVar27 + 2.5;
  fVar29 = fVar36 + fVar31 + 2.5;
  fVar31 = *pfVar4 + fVar26 * pfVar4[1];
  iVar1 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
  iVar8 = (int)((float)(int)fVar32 / 5.0) - (uint)(fVar32 < 0.0);
  fVar30 = fVar31 * 0.0;
  iVar9 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  fVar27 = pfVar4[2] + fVar26 * pfVar4[3];
  iVar10 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
  iVar15 = iVar1;
  if (iVar9 <= iVar1) {
    iVar15 = iVar9;
  }
  if (iVar1 <= iVar9) {
    iVar1 = iVar9;
  }
  iVar9 = iVar8;
  if (iVar8 <= iVar10) {
    iVar9 = iVar10;
  }
  fVar29 = fVar31 * (fVar31 + fVar31);
  if (iVar10 <= iVar8) {
    iVar8 = iVar10;
  }
  fVar32 = (fVar31 + fVar31) * fVar30;
  fVar27 = fVar27 + fVar27;
  fVar34 = fVar30 * (fVar30 + fVar30);
  fVar33 = fVar31 * (fVar30 + fVar30);
  fVar30 = fVar30 * fVar27;
  fVar31 = fVar31 * fVar27;
  local_14c = ((float)iVar15 * 5.0 + (float)iVar1 * 5.0 + 5.0) * 0.5 + 0.0 +
              (fVar33 - fVar30) * 0.0 + ((1.0 - fVar29) - fVar34) * 0.0 + (fVar34 + fVar31) * 2.1875
  ;
  local_144 = ((float)iVar8 * 5.0 + (float)iVar9 * 5.0 + 5.0) * 0.5 + 0.0 +
              (fVar32 + fVar30) * 0.0 + (fVar34 - fVar31) * 0.0 + ((1.0 - fVar34) - fVar29) * 2.1875
  ;
  fStack_148 = ((1.0 - fVar34) - fVar34) * 0.0 + (fVar33 + fVar30) * 0.0 +
               (fVar32 - fVar30) * 2.1875 + 0.0;
  uVar19 = FUN_01262040(0,puVar2,&local_14c);
  if ((uVar19 & 1) == 0) {
    lVar20 = *(long *)PTR_DAT_04bb27c8;
    if (((lVar20 == 0) || (*(long *)(lVar20 + 0xa8) == 0)) || (*(char *)(lVar20 + 0x11c8) != '\0'))
    {
      fVar28 = -500.0;
    }
    else {
      fVar28 = (float)FUN_0093a950(lVar20 + 0x28,&local_14c,0);
    }
    puVar21 = local_108;
    *(uint *)(param_1 + 2) = uVar17;
    fVar26 = 0.0;
    *param_1 = CONCAT44(fStack_148,local_14c);
    *(float *)(param_1 + 1) = local_144;
    puVar12 = PTR_DAT_04bbfe90;
    puVar2 = PTR_DAT_04bbfe88;
    if ((local_108 == (uint *)0x0) || (uVar17 = *local_108, uVar17 == 0)) goto LAB_0151c0d8;
    cVar24 = *PTR_DAT_04bbfe88;
    goto LAB_0151c02c;
  }
  bVar5 = (bool)(fVar28 != 1.4013e-45 & bVar11);
  bVar11 = false;
  if (!bVar5) {
    return 0;
  }
  goto LAB_0151bd40;
LAB_0151c02c:
  if (cVar24 == '\0') {
    cVar24 = '\x01';
    *puVar2 = 1;
    memset(puVar12,0xff,0x1ac);
    uVar17 = *puVar21;
  }
  else {
    uVar16 = *(uint *)(puVar12 + 0xf0);
    if (-1 < (int)uVar16) {
      if ((float *)((ulong)uVar16 + (long)puVar21) != (float *)0x0) {
        fVar26 = *(float *)((ulong)uVar16 + (long)puVar21);
      }
LAB_0151c0d8:
      *(float *)((long)param_1 + 0xc) = fVar28 + fVar26;
      return 1;
    }
    if (uVar16 != 0xffffffff) goto LAB_0151c0d8;
  }
  puVar23 = (uint *)(ulong)uVar17;
  if ((puVar23 == (uint *)0x0) || (puVar21 == puVar23)) goto LAB_0151c0d8;
  lVar20 = 0xc;
  if (*(char *)((long)puVar21 + (10 - (long)puVar23)) != '\0') {
    lVar20 = 0x1c;
  }
  lVar20 = (long)puVar21 + (lVar20 - (long)puVar23);
  if (lVar20 == 0) goto LAB_0151c0d8;
  uVar19 = (ulong)*(ushort *)((long)puVar21 + (8 - (long)puVar23));
  *(undefined4 *)(puVar12 + 0xf0) = 0xfffffffe;
  if (uVar19 == 0) goto LAB_0151c0d8;
  piVar22 = (int *)(lVar20 + 4);
  while (piVar22[-1] != -0x499d99d4) {
    piVar22 = piVar22 + 2;
    uVar19 = uVar19 - 1;
    if (uVar19 == 0) goto LAB_0151c0d8;
  }
  iVar15 = 0;
  if (*piVar22 != -1) {
    iVar15 = *piVar22;
  }
  *(int *)(puVar12 + 0xf0) = iVar15;
  uVar17 = *puVar21;
  if (uVar17 == 0) goto LAB_0151c0d8;
  goto LAB_0151c02c;
}

