
/* WARNING: Removing unreachable block (ram,0x01831888) */
/* WARNING: Removing unreachable block (ram,0x01831528) */
/* WARNING: Removing unreachable block (ram,0x01831538) */
/* WARNING: Removing unreachable block (ram,0x01831544) */
/* WARNING: Removing unreachable block (ram,0x01830f40) */
/* WARNING: Removing unreachable block (ram,0x01830f50) */
/* WARNING: Removing unreachable block (ram,0x01830f5c) */
/* WARNING: Removing unreachable block (ram,0x01830964) */
/* WARNING: Removing unreachable block (ram,0x01830974) */
/* WARNING: Removing unreachable block (ram,0x01830980) */
/* WARNING: Removing unreachable block (ram,0x01830334) */
/* WARNING: Removing unreachable block (ram,0x01830344) */
/* WARNING: Removing unreachable block (ram,0x01830350) */
/* WARNING: Removing unreachable block (ram,0x01830048) */
/* WARNING: Removing unreachable block (ram,0x0182fbe8) */
/* WARNING: Removing unreachable block (ram,0x0182fbf8) */
/* WARNING: Removing unreachable block (ram,0x01830058) */
/* WARNING: Removing unreachable block (ram,0x01830064) */
/* WARNING: Removing unreachable block (ram,0x01830628) */
/* WARNING: Removing unreachable block (ram,0x01830638) */
/* WARNING: Removing unreachable block (ram,0x01830644) */
/* WARNING: Removing unreachable block (ram,0x01830c50) */
/* WARNING: Removing unreachable block (ram,0x01830c60) */
/* WARNING: Removing unreachable block (ram,0x01830c6c) */
/* WARNING: Removing unreachable block (ram,0x01831238) */
/* WARNING: Removing unreachable block (ram,0x01831248) */
/* WARNING: Removing unreachable block (ram,0x01831254) */
/* WARNING: Removing unreachable block (ram,0x01831898) */
/* WARNING: Removing unreachable block (ram,0x018318a4) */

undefined8 FUN_0182fa40(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  float *pfVar3;
  uint *puVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  int iVar13;
  int iVar14;
  ulong uVar15;
  undefined **ppuVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  long lVar21;
  long lVar22;
  undefined8 *puVar23;
  float fVar24;
  float fVar25;
  undefined4 uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  undefined *local_100;
  undefined8 local_f8;
  uint local_f0;
  int iStack_ec;
  undefined *local_e8;
  int local_e0;
  int iStack_dc;
  undefined *local_d8;
  undefined *puStack_d0;
  int local_c8;
  int iStack_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined *local_b0;
  int local_a8;
  int local_a4;
  byte local_a0;
  byte local_88 [4];
  undefined4 local_84;
  
  if ((*(long *)PTR_DAT_04bb4008 != 0) &&
     (uVar15 = FUN_01a12390(*(long *)PTR_DAT_04bb4008,1,*(undefined4 *)(param_1 + 0x3a8)),
     (uVar15 & 1) != 0)) {
    return 0;
  }
  puVar11 = PTR_DAT_04bbfe68;
  puVar10 = PTR_DAT_04bbc1a0;
  puVar9 = PTR_DAT_04bb27a8;
  puVar2 = PTR_DAT_04bb2010;
  uVar17 = (int)((float)(int)*(float *)(param_1 + 0x334) / 5.0) -
           (uint)(*(float *)(param_1 + 0x334) < 0.0);
  uVar6 = (int)((float)(int)*(float *)(param_1 + 0x33c) / 5.0) -
          (uint)(*(float *)(param_1 + 0x33c) < 0.0);
  if (uVar17 == *(uint *)(param_1 + 0x5b8) && uVar6 == *(uint *)(param_1 + 0x5bc)) {
    return 0;
  }
  local_c8 = uVar17 - ((uVar17 & 0x80000001) == 1);
  local_d8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_d0 = PTR_DAT_04bb2010 + 0x10;
  iStack_c4 = uVar6 - ((uVar6 & 0x80000001) == 1);
  local_b8 = local_c8 + 1;
  iStack_b4 = iStack_c4 + 1;
  sVar5 = *(short *)PTR_DAT_04bb6298;
  if (sVar5 == -1) {
LAB_0182fbb4:
    uVar17 = 0;
  }
  else {
    puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
    if (0xff < (uint)(int)sVar5) {
      puVar4 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar4 >> 0x1a & 1) == 0) goto LAB_0182fbb4;
    uVar17 = *puVar4 >> 1 & 1;
  }
  uVar6 = 0;
  if (*(char *)(param_1 + 0x494) == '\0') {
    uVar6 = uVar17;
  }
  uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
  lVar21 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  local_c0 = puStack_d0;
  if ((((lVar21 == 0) || (local_c8 < *(int *)(lVar21 + 0x20) || *(int *)(lVar21 + 0x30) < local_c8))
      || (iStack_c4 < *(int *)(lVar21 + 0x24))) || (*(int *)(lVar21 + 0x34) < iStack_c4))
  goto LAB_0182fe88;
  if (uVar6 != 0) {
    uVar17 = (uint)sVar5;
    if (uVar17 == 0xffffffff) {
LAB_0182fccc:
      lVar21 = 0;
    }
    else {
      puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)uVar17 * 8);
      if (0xff < uVar17) {
        puVar4 = (uint *)PTR_DAT_04bc39f8;
      }
      if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_0182fccc;
      lVar21 = 0;
      if (*(long *)PTR_DAT_04bb59d8 != 0) {
        lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
      }
    }
    if (((local_c8 < *(int *)(lVar21 + 0x10) || *(int *)(lVar21 + 0x20) < local_c8) ||
        (iStack_c4 < *(int *)(lVar21 + 0x14))) || (*(int *)(lVar21 + 0x24) < iStack_c4))
    goto LAB_0182fe88;
  }
  local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
  ppuVar16 = &puStack_d0;
  local_100 = PTR_DAT_04bbfe68 + 0x10;
  lVar21 = *(long *)PTR_DAT_04bb2720;
  if (lVar21 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar21 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
      iVar13 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar13 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_f8 = (undefined *)CONCAT44(*(undefined4 *)(puVar23 + 7),(undefined4)local_f8);
  uVar12 = FUN_017baf44();
  local_f0 = CONCAT31(local_f0._1_3_,uVar12) & 0xffffff01;
  uVar15 = FUN_01a1cde0(uVar26,&local_100,ppuVar16);
  if ((uVar15 & 1) != 0) {
    fVar24 = (float)local_c8 * 0.5;
    uVar17 = 0;
    if (fVar24 != (float)(int)fVar24) {
      uVar17 = (uint)(fVar24 < 0.0);
    }
    iVar13 = (int)fVar24 - uVar17;
    fVar24 = (float)iStack_c4 * 0.5;
    uVar17 = 0;
    if (fVar24 != (float)(int)fVar24) {
      uVar17 = (uint)(fVar24 < 0.0);
    }
    iVar14 = (int)fVar24 - uVar17;
    if ((iVar13 == *(int *)(param_1 + 0x5f8)) && (iVar14 == *(int *)(param_1 + 0x5fc))) {
LAB_01831b28:
      FUN_018349dc(param_1,ppuVar16);
      *(undefined1 *)(param_1 + 0x3b4) = 0;
      FUN_0182f83c(param_1,param_1 + 0x328);
      FUN_01815e0c(param_1,*(undefined4 *)(param_1 + 0x280),param_1 + 0x328);
      return 1;
    }
    if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
        (((uVar17 = iVar13 - *(int *)(PTR_DAT_04bbec38 + 0x10),
          *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar13 &&
          (iVar13 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
         (uVar20 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x14),
         *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar14)))) &&
       (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x24))) {
      lVar21 = (long)(int)(uVar17 + *(uint *)PTR_DAT_04bbec68 * uVar20);
      if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar20 || *(uint *)PTR_DAT_04bbec68 <= uVar17) {
        lVar21 = 0;
      }
      if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
    }
  }
LAB_0182fe88:
  uVar17 = *(uint *)(param_1 + 800);
  puVar23 = &DAT_055c04a0;
  local_f8 = (undefined *)((ulong)local_f8 & 0xffffffff00000000);
  pfVar3 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar17 >> 0x14) & 0xff0));
  fVar24 = *pfVar3;
  fVar27 = pfVar3[1];
  fVar28 = pfVar3[2];
  fVar29 = pfVar3[3];
  local_100 = puVar11 + 0x10;
  lVar21 = *(long *)PTR_DAT_04bb2720;
  if ((lVar21 != 0) && (*(long *)(lVar21 + 0x330) != 0)) {
    puVar23 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
    iVar13 = FUN_006bd550(*puVar23,0);
    puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar13 != 0x758f7eaf) {
      puVar23 = &DAT_055c04a0;
    }
  }
  local_f8 = (undefined *)CONCAT44(*(undefined4 *)(puVar23 + 7),(undefined4)local_f8);
  fVar25 = (float)(uVar17 & 0xffffff) * 5.9604645e-08;
  uVar12 = FUN_017baf44();
  puVar1 = puVar2 + 0x10;
  local_f0 = CONCAT31(local_f0._1_3_,uVar12) & 0xffffff01;
  local_88[0] = *(byte *)(param_1 + 0x494) ^ 1;
  local_84 = 0;
  fVar24 = (fVar24 + fVar25 * fVar27) * 5.0 + *(float *)(param_1 + 0x334);
  fVar27 = (fVar28 + fVar25 * fVar29) * 5.0 + *(float *)(param_1 + 0x33c);
  local_a8 = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0);
  local_a4 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
  local_b0 = puVar1;
  uVar15 = FUN_0184d984(*(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c),param_1,&local_100,
                        &local_b0,local_88,1);
  if ((uVar15 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x648) = *(undefined4 *)(param_1 + 0x64c);
    return 0;
  }
  ppuVar16 = (undefined **)&local_f8;
  iVar13 = -2;
  lVar21 = *(long *)puVar9;
  do {
    local_f0 = iVar13 + local_c8;
    iStack_ec = iStack_c4 + -2;
    local_e0 = iVar13 + local_b8;
    iStack_dc = iStack_b4 + -2;
    uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
    lVar21 = *(long *)(lVar21 + 0x1f8);
    if (((lVar21 != 0) &&
        (*(int *)(lVar21 + 0x20) <= (int)local_f0 && (int)local_f0 <= *(int *)(lVar21 + 0x30))) &&
       ((*(int *)(lVar21 + 0x24) <= iStack_ec && (iStack_ec <= *(int *)(lVar21 + 0x34))))) {
      if (uVar6 != 0) {
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 == -1) {
LAB_01830144:
          lVar21 = 0;
        }
        else {
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01830144;
          lVar21 = 0;
          if (*(long *)PTR_DAT_04bb59d8 != 0) {
            lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
          }
        }
        if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) || (*(int *)(lVar21 + 0x20) < (int)local_f0)
             ) || (iStack_ec < *(int *)(lVar21 + 0x14))) || (*(int *)(lVar21 + 0x24) < iStack_ec))
        goto LAB_018302f0;
      }
      local_b0 = puVar11 + 0x10;
      local_a8 = 0;
      lVar21 = *(long *)PTR_DAT_04bb2720;
      local_100 = puVar10 + 0x10;
      local_f8 = puVar1;
      local_e8 = puVar1;
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
        puVar23 = &DAT_055c04a0;
      }
      else {
        puVar23 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar14 = FUN_006bd550(*puVar23,0);
        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar23 = &DAT_055c04a0;
        }
      }
      local_a4 = *(int *)(puVar23 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
      if ((uVar15 & 1) != 0) {
        fVar24 = (float)(int)local_f0 * 0.5;
        uVar17 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar17 = (uint)(fVar24 < 0.0);
        }
        iVar14 = (int)fVar24 - uVar17;
        fVar24 = (float)iStack_ec * 0.5;
        uVar17 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar17 = (uint)(fVar24 < 0.0);
        }
        iVar7 = (int)fVar24 - uVar17;
        if (iVar14 == *(int *)(param_1 + 0x5f8) && iVar7 == *(int *)(param_1 + 0x5fc))
        goto LAB_01831b28;
        if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
            (uVar17 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
            *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
            iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
           (uVar20 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
           *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7 && iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))
           ) {
          lVar21 = (long)(int)(uVar17 + *(uint *)PTR_DAT_04bbec68 * uVar20);
          if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar20 || *(uint *)PTR_DAT_04bbec68 <= uVar17) {
            lVar21 = 0;
          }
          if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
        }
      }
    }
LAB_018302f0:
    lVar22 = *(long *)(param_1 + 0x300);
    lVar21 = *(long *)puVar9;
    if (iVar13 != 0) {
      local_100 = puVar10 + 0x10;
      local_f8 = puVar2 + 0x10;
      uVar26 = *(undefined4 *)(lVar22 + 0x27c);
      local_f0 = iVar13 + local_c8;
      local_e0 = iVar13 + local_b8;
      iStack_ec = iStack_c4;
      iStack_dc = iStack_b4;
      lVar21 = *(long *)(lVar21 + 0x1f8);
      if ((((lVar21 != 0) && (*(int *)(lVar21 + 0x20) <= (int)local_f0)) &&
          ((int)local_f0 <= *(int *)(lVar21 + 0x30))) &&
         ((*(int *)(lVar21 + 0x24) <= iStack_c4 && (iStack_c4 <= *(int *)(lVar21 + 0x34))))) {
        if (uVar6 != 0) {
          sVar5 = *(short *)PTR_DAT_04bb6298;
          if (sVar5 == -1) {
LAB_0183042c:
            lVar21 = 0;
          }
          else {
            puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
            if (0xff < (uint)(int)sVar5) {
              puVar4 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_0183042c;
            lVar21 = 0;
            if (*(long *)PTR_DAT_04bb59d8 != 0) {
              lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
            }
          }
          if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) ||
               (*(int *)(lVar21 + 0x20) < (int)local_f0)) || (iStack_c4 < *(int *)(lVar21 + 0x14)))
             || (*(int *)(lVar21 + 0x24) < iStack_c4)) goto LAB_018305e0;
        }
        local_b0 = puVar11 + 0x10;
        local_a8 = 0;
        lVar21 = *(long *)PTR_DAT_04bb2720;
        local_e8 = local_f8;
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
          puVar23 = &DAT_055c04a0;
        }
        else {
          puVar23 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar14 = FUN_006bd550(*puVar23,0);
          puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
        }
        local_a4 = *(int *)(puVar23 + 7);
        local_a0 = FUN_017baf44();
        local_a0 = local_a0 & 1;
        uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
        if ((uVar15 & 1) != 0) {
          fVar24 = (float)(int)local_f0 * 0.5;
          uVar17 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar17 = (uint)(fVar24 < 0.0);
          }
          iVar14 = (int)fVar24 - uVar17;
          fVar24 = (float)iStack_ec * 0.5;
          uVar17 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar17 = (uint)(fVar24 < 0.0);
          }
          iVar7 = (int)fVar24 - uVar17;
          if ((iVar14 == *(int *)(param_1 + 0x5f8)) && (iVar7 == *(int *)(param_1 + 0x5fc)))
          goto LAB_01831b28;
          if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
              (((uVar17 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
                *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
                (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
               (uVar20 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
               *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7)))) &&
             (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))) {
            lVar21 = (long)(int)(uVar17 + *(uint *)PTR_DAT_04bbec68 * uVar20);
            if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar20 || *(uint *)PTR_DAT_04bbec68 <= uVar17) {
              lVar21 = 0;
            }
            if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
          }
        }
      }
LAB_018305e0:
      lVar22 = *(long *)(param_1 + 0x300);
      lVar21 = *(long *)puVar9;
    }
    local_100 = puVar10 + 0x10;
    local_f8 = puVar2 + 0x10;
    uVar26 = *(undefined4 *)(lVar22 + 0x27c);
    local_f0 = local_c8 + iVar13;
    iStack_ec = iStack_c4 + 2;
    local_e0 = local_b8 + iVar13;
    iStack_dc = iStack_b4 + 2;
    lVar22 = *(long *)(lVar21 + 0x1f8);
    if (((lVar22 != 0) && (*(int *)(lVar22 + 0x20) <= (int)local_f0)) &&
       (((int)local_f0 <= *(int *)(lVar22 + 0x30) &&
        ((*(int *)(lVar22 + 0x24) <= iStack_ec && (iStack_ec <= *(int *)(lVar22 + 0x34))))))) {
      if (uVar6 != 0) {
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 == -1) {
LAB_01830728:
          lVar22 = 0;
        }
        else {
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01830728;
          lVar22 = 0;
          if (*(long *)PTR_DAT_04bb59d8 != 0) {
            lVar22 = *(long *)PTR_DAT_04bb59d8 + 0x18;
          }
        }
        if (((((int)local_f0 < *(int *)(lVar22 + 0x10)) || (*(int *)(lVar22 + 0x20) < (int)local_f0)
             ) || (iStack_ec < *(int *)(lVar22 + 0x14))) || (*(int *)(lVar22 + 0x24) < iStack_ec))
        goto LAB_01830000;
      }
      local_a8 = 0;
      lVar21 = *(long *)PTR_DAT_04bb2720;
      local_e8 = local_f8;
      local_b0 = puVar11 + 0x10;
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
        puVar23 = &DAT_055c04a0;
      }
      else {
        puVar23 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar14 = FUN_006bd550(*puVar23,0);
        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar23 = &DAT_055c04a0;
        }
      }
      local_a4 = *(int *)(puVar23 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
      lVar21 = *(long *)puVar9;
      if ((uVar15 & 1) != 0) {
        fVar24 = (float)(int)local_f0 * 0.5;
        uVar17 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar17 = (uint)(fVar24 < 0.0);
        }
        iVar14 = (int)fVar24 - uVar17;
        fVar24 = (float)iStack_ec * 0.5;
        uVar17 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar17 = (uint)(fVar24 < 0.0);
        }
        iVar7 = (int)fVar24 - uVar17;
        if ((iVar14 == *(int *)(param_1 + 0x5f8)) && (iVar7 == *(int *)(param_1 + 0x5fc)))
        goto LAB_01831b28;
        if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
            (((uVar17 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
              *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
              (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
             (uVar20 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
             *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7)))) &&
           (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))) {
          lVar22 = (long)(int)(uVar17 + *(uint *)PTR_DAT_04bbec68 * uVar20);
          if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar20 || *(uint *)PTR_DAT_04bbec68 <= uVar17) {
            lVar22 = 0;
          }
          if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar22) == '\0') goto LAB_01831b28;
        }
      }
    }
LAB_01830000:
    iVar13 = iVar13 + 2;
  } while (iVar13 != 4);
  uVar17 = 0xfffffffe;
  iVar13 = -4;
  puVar1 = puVar2 + 0x10;
  do {
    uVar20 = -uVar17;
    if (-1 < (int)uVar17) {
      uVar20 = uVar17;
    }
    local_f0 = iVar13 + local_c8;
    iStack_ec = iStack_c4 + -4;
    local_e0 = iVar13 + local_b8;
    iStack_dc = iStack_b4 + -4;
    uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
    lVar21 = *(long *)(lVar21 + 0x1f8);
    if (((lVar21 != 0) &&
        (*(int *)(lVar21 + 0x20) <= (int)local_f0 && (int)local_f0 <= *(int *)(lVar21 + 0x30))) &&
       ((*(int *)(lVar21 + 0x24) <= iStack_ec && (iStack_ec <= *(int *)(lVar21 + 0x34))))) {
      if (uVar6 != 0) {
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 == -1) {
LAB_01830a58:
          lVar21 = 0;
        }
        else {
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01830a58;
          lVar21 = 0;
          if (*(long *)PTR_DAT_04bb59d8 != 0) {
            lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
          }
        }
        if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) || (*(int *)(lVar21 + 0x20) < (int)local_f0)
             ) || (iStack_ec < *(int *)(lVar21 + 0x14))) || (*(int *)(lVar21 + 0x24) < iStack_ec))
        goto LAB_01830c00;
      }
      local_b0 = puVar11 + 0x10;
      local_a8 = 0;
      lVar21 = *(long *)PTR_DAT_04bb2720;
      local_100 = puVar10 + 0x10;
      local_f8 = puVar1;
      local_e8 = puVar1;
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
        puVar23 = &DAT_055c04a0;
      }
      else {
        puVar23 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar14 = FUN_006bd550(*puVar23,0);
        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar23 = &DAT_055c04a0;
        }
      }
      local_a4 = *(int *)(puVar23 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
      if ((uVar15 & 1) != 0) {
        fVar24 = (float)(int)local_f0 * 0.5;
        uVar18 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar18 = (uint)(fVar24 < 0.0);
        }
        iVar14 = (int)fVar24 - uVar18;
        fVar24 = (float)iStack_ec * 0.5;
        uVar18 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar18 = (uint)(fVar24 < 0.0);
        }
        iVar7 = (int)fVar24 - uVar18;
        if (iVar14 == *(int *)(param_1 + 0x5f8) && iVar7 == *(int *)(param_1 + 0x5fc))
        goto LAB_01831b28;
        if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
            (uVar18 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
            *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
            iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
           (uVar19 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
           *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7 && iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))
           ) {
          lVar21 = (long)(int)(uVar18 + *(uint *)PTR_DAT_04bbec68 * uVar19);
          if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar19 || *(uint *)PTR_DAT_04bbec68 <= uVar18) {
            lVar21 = 0;
          }
          if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
        }
      }
    }
LAB_01830c00:
    lVar22 = *(long *)(param_1 + 0x300);
    lVar21 = *(long *)puVar9;
    if (1 < uVar20) {
      local_100 = puVar10 + 0x10;
      local_f8 = puVar2 + 0x10;
      uVar26 = *(undefined4 *)(lVar22 + 0x27c);
      local_f0 = iVar13 + local_c8;
      iStack_ec = iStack_c4 + -2;
      local_e0 = iVar13 + local_b8;
      iStack_dc = iStack_b4 + -2;
      lVar21 = *(long *)(lVar21 + 0x1f8);
      if ((((lVar21 != 0) && (*(int *)(lVar21 + 0x20) <= (int)local_f0)) &&
          ((int)local_f0 <= *(int *)(lVar21 + 0x30))) &&
         ((*(int *)(lVar21 + 0x24) <= iStack_ec && (iStack_ec <= *(int *)(lVar21 + 0x34))))) {
        if (uVar6 != 0) {
          sVar5 = *(short *)PTR_DAT_04bb6298;
          if (sVar5 == -1) {
LAB_01830d48:
            lVar21 = 0;
          }
          else {
            puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
            if (0xff < (uint)(int)sVar5) {
              puVar4 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01830d48;
            lVar21 = 0;
            if (*(long *)PTR_DAT_04bb59d8 != 0) {
              lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
            }
          }
          if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) ||
               (*(int *)(lVar21 + 0x20) < (int)local_f0)) || (iStack_ec < *(int *)(lVar21 + 0x14)))
             || (*(int *)(lVar21 + 0x24) < iStack_ec)) goto LAB_01830f00;
        }
        local_b0 = puVar11 + 0x10;
        local_a8 = 0;
        lVar21 = *(long *)PTR_DAT_04bb2720;
        local_e8 = local_f8;
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
          puVar23 = &DAT_055c04a0;
        }
        else {
          puVar23 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar14 = FUN_006bd550(*puVar23,0);
          puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
        }
        local_a4 = *(int *)(puVar23 + 7);
        local_a0 = FUN_017baf44();
        local_a0 = local_a0 & 1;
        uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
        if ((uVar15 & 1) != 0) {
          fVar24 = (float)(int)local_f0 * 0.5;
          uVar20 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar20 = (uint)(fVar24 < 0.0);
          }
          iVar14 = (int)fVar24 - uVar20;
          fVar24 = (float)iStack_ec * 0.5;
          uVar20 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar20 = (uint)(fVar24 < 0.0);
          }
          iVar7 = (int)fVar24 - uVar20;
          if ((iVar14 == *(int *)(param_1 + 0x5f8)) && (iVar7 == *(int *)(param_1 + 0x5fc)))
          goto LAB_01831b28;
          if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
              (((uVar20 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
                *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
                (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
               (uVar18 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
               *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7)))) &&
             (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))) {
            lVar21 = (long)(int)(uVar20 + *(uint *)PTR_DAT_04bbec68 * uVar18);
            if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar18 || *(uint *)PTR_DAT_04bbec68 <= uVar20) {
              lVar21 = 0;
            }
            if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
          }
        }
      }
LAB_01830f00:
      local_100 = puVar10 + 0x10;
      local_f8 = puVar2 + 0x10;
      local_f0 = iVar13 + local_c8;
      local_e0 = iVar13 + local_b8;
      iStack_ec = iStack_c4;
      uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
      iStack_dc = iStack_b4;
      lVar21 = *(long *)(*(long *)puVar9 + 0x1f8);
      if (((lVar21 != 0) && (*(int *)(lVar21 + 0x20) <= (int)local_f0)) &&
         (((int)local_f0 <= *(int *)(lVar21 + 0x30) &&
          ((*(int *)(lVar21 + 0x24) <= iStack_c4 && (iStack_c4 <= *(int *)(lVar21 + 0x34))))))) {
        if (uVar6 != 0) {
          sVar5 = *(short *)PTR_DAT_04bb6298;
          if (sVar5 == -1) {
LAB_01831038:
            lVar21 = 0;
          }
          else {
            puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
            if (0xff < (uint)(int)sVar5) {
              puVar4 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01831038;
            lVar21 = 0;
            if (*(long *)PTR_DAT_04bb59d8 != 0) {
              lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
            }
          }
          if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) ||
               (*(int *)(lVar21 + 0x20) < (int)local_f0)) || (iStack_c4 < *(int *)(lVar21 + 0x14)))
             || (*(int *)(lVar21 + 0x24) < iStack_c4)) goto LAB_018311f0;
        }
        local_b0 = puVar11 + 0x10;
        local_a8 = 0;
        lVar21 = *(long *)PTR_DAT_04bb2720;
        local_e8 = local_f8;
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
          puVar23 = &DAT_055c04a0;
        }
        else {
          puVar23 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar14 = FUN_006bd550(*puVar23,0);
          puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
        }
        local_a4 = *(int *)(puVar23 + 7);
        local_a0 = FUN_017baf44();
        local_a0 = local_a0 & 1;
        uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
        if ((uVar15 & 1) != 0) {
          fVar24 = (float)(int)local_f0 * 0.5;
          uVar20 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar20 = (uint)(fVar24 < 0.0);
          }
          iVar14 = (int)fVar24 - uVar20;
          fVar24 = (float)iStack_ec * 0.5;
          uVar20 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar20 = (uint)(fVar24 < 0.0);
          }
          iVar7 = (int)fVar24 - uVar20;
          if ((iVar14 == *(int *)(param_1 + 0x5f8)) && (iVar7 == *(int *)(param_1 + 0x5fc)))
          goto LAB_01831b28;
          if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
              (((uVar20 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
                *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
                (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
               (uVar18 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
               *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7)))) &&
             (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))) {
            lVar21 = (long)(int)(uVar20 + *(uint *)PTR_DAT_04bbec68 * uVar18);
            if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar18 || *(uint *)PTR_DAT_04bbec68 <= uVar20) {
              lVar21 = 0;
            }
            if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
          }
        }
      }
LAB_018311f0:
      local_100 = puVar10 + 0x10;
      local_f8 = puVar2 + 0x10;
      iStack_ec = iStack_c4 + 2;
      local_e0 = iVar13 + local_b8;
      local_f0 = iVar13 + local_c8;
      iStack_dc = iStack_b4 + 2;
      uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
      lVar21 = *(long *)(*(long *)puVar9 + 0x1f8);
      if (((lVar21 != 0) && (*(int *)(lVar21 + 0x20) <= (int)local_f0)) &&
         (((int)local_f0 <= *(int *)(lVar21 + 0x30) &&
          ((*(int *)(lVar21 + 0x24) <= iStack_ec && (iStack_ec <= *(int *)(lVar21 + 0x34))))))) {
        if (uVar6 != 0) {
          sVar5 = *(short *)PTR_DAT_04bb6298;
          if (sVar5 == -1) {
LAB_01831330:
            lVar21 = 0;
          }
          else {
            puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
            if (0xff < (uint)(int)sVar5) {
              puVar4 = (uint *)PTR_DAT_04bc39f8;
            }
            if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01831330;
            lVar21 = 0;
            if (*(long *)PTR_DAT_04bb59d8 != 0) {
              lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
            }
          }
          if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) ||
               (*(int *)(lVar21 + 0x20) < (int)local_f0)) || (iStack_ec < *(int *)(lVar21 + 0x14)))
             || (*(int *)(lVar21 + 0x24) < iStack_ec)) goto LAB_018314e0;
        }
        local_b0 = puVar11 + 0x10;
        local_a8 = 0;
        lVar21 = *(long *)PTR_DAT_04bb2720;
        local_e8 = local_f8;
        if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
          puVar23 = &DAT_055c04a0;
        }
        else {
          puVar23 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
          iVar14 = FUN_006bd550(*puVar23,0);
          puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
          if (iVar14 != 0x758f7eaf) {
            puVar23 = &DAT_055c04a0;
          }
        }
        local_a4 = *(int *)(puVar23 + 7);
        local_a0 = FUN_017baf44();
        local_a0 = local_a0 & 1;
        uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
        if ((uVar15 & 1) != 0) {
          fVar24 = (float)(int)local_f0 * 0.5;
          uVar20 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar20 = (uint)(fVar24 < 0.0);
          }
          iVar14 = (int)fVar24 - uVar20;
          fVar24 = (float)iStack_ec * 0.5;
          uVar20 = 0;
          if (fVar24 != (float)(int)fVar24) {
            uVar20 = (uint)(fVar24 < 0.0);
          }
          iVar7 = (int)fVar24 - uVar20;
          if ((iVar14 == *(int *)(param_1 + 0x5f8)) && (iVar7 == *(int *)(param_1 + 0x5fc)))
          goto LAB_01831b28;
          if ((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
             ((((uVar20 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
                *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
                (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
               (uVar18 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
               *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7)) &&
              (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))))) {
            lVar21 = (long)(int)(uVar20 + *(uint *)PTR_DAT_04bbec68 * uVar18);
            if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar18 || *(uint *)PTR_DAT_04bbec68 <= uVar20) {
              lVar21 = 0;
            }
            if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0') goto LAB_01831b28;
          }
        }
      }
LAB_018314e0:
      lVar22 = *(long *)(param_1 + 0x300);
      lVar21 = *(long *)puVar9;
    }
    local_100 = puVar10 + 0x10;
    local_f8 = puVar2 + 0x10;
    uVar26 = *(undefined4 *)(lVar22 + 0x27c);
    local_f0 = local_c8 + iVar13;
    iStack_ec = iStack_c4 + 4;
    local_e0 = local_b8 + iVar13;
    iStack_dc = iStack_b4 + 4;
    lVar22 = *(long *)(lVar21 + 0x1f8);
    if (((lVar22 != 0) && (*(int *)(lVar22 + 0x20) <= (int)local_f0)) &&
       (((int)local_f0 <= *(int *)(lVar22 + 0x30) &&
        ((*(int *)(lVar22 + 0x24) <= iStack_ec && (iStack_ec <= *(int *)(lVar22 + 0x34))))))) {
      if (uVar6 != 0) {
        sVar5 = *(short *)PTR_DAT_04bb6298;
        if (sVar5 == -1) {
LAB_01831628:
          lVar22 = 0;
        }
        else {
          puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
          if (0xff < (uint)(int)sVar5) {
            puVar4 = (uint *)PTR_DAT_04bc39f8;
          }
          if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_01831628;
          lVar22 = 0;
          if (*(long *)PTR_DAT_04bb59d8 != 0) {
            lVar22 = *(long *)PTR_DAT_04bb59d8 + 0x18;
          }
        }
        if (((((int)local_f0 < *(int *)(lVar22 + 0x10)) || (*(int *)(lVar22 + 0x20) < (int)local_f0)
             ) || (iStack_ec < *(int *)(lVar22 + 0x14))) || (*(int *)(lVar22 + 0x24) < iStack_ec))
        goto LAB_01830910;
      }
      local_a8 = 0;
      lVar21 = *(long *)PTR_DAT_04bb2720;
      local_e8 = local_f8;
      local_b0 = puVar11 + 0x10;
      if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
        puVar23 = &DAT_055c04a0;
      }
      else {
        puVar23 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
        iVar14 = FUN_006bd550(*puVar23,0);
        puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar23 = &DAT_055c04a0;
        }
      }
      local_a4 = *(int *)(puVar23 + 7);
      local_a0 = FUN_017baf44();
      local_a0 = local_a0 & 1;
      uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
      lVar21 = *(long *)puVar9;
      if ((uVar15 & 1) != 0) {
        fVar24 = (float)(int)local_f0 * 0.5;
        uVar20 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar20 = (uint)(fVar24 < 0.0);
        }
        iVar14 = (int)fVar24 - uVar20;
        fVar24 = (float)iStack_ec * 0.5;
        uVar20 = 0;
        if (fVar24 != (float)(int)fVar24) {
          uVar20 = (uint)(fVar24 < 0.0);
        }
        iVar7 = (int)fVar24 - uVar20;
        if ((iVar14 == *(int *)(param_1 + 0x5f8)) && (iVar7 == *(int *)(param_1 + 0x5fc)))
        goto LAB_01831b28;
        if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
            (((uVar20 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
              *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
              (iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
             (uVar18 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
             *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7)))) &&
           (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))) {
          lVar22 = (long)(int)(uVar20 + *(uint *)PTR_DAT_04bbec68 * uVar18);
          if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar18 || *(uint *)PTR_DAT_04bbec68 <= uVar20) {
            lVar22 = 0;
          }
          if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar22) == '\0') goto LAB_01831b28;
        }
      }
    }
LAB_01830910:
    iVar13 = iVar13 + 2;
    uVar17 = uVar17 + 1;
    if (iVar13 == 6) {
      uVar17 = 0xfffffffd;
      puVar2 = puVar2 + 0x10;
      do {
        uVar20 = 0xfffffffd;
        uVar18 = -uVar17;
        if (-1 < (int)uVar17) {
          uVar18 = uVar17;
        }
        iVar13 = -6;
        do {
          uVar19 = -uVar20;
          if (-1 < (int)uVar20) {
            uVar19 = uVar20;
          }
          if ((2 < uVar18) || (2 < uVar19)) {
            local_f0 = local_c8 + uVar17 * 2;
            iStack_ec = iVar13 + iStack_c4;
            uVar26 = *(undefined4 *)(*(long *)(param_1 + 0x300) + 0x27c);
            local_e0 = local_b8 + uVar17 * 2;
            iStack_dc = iVar13 + iStack_b4;
            lVar21 = *(long *)(*(long *)puVar9 + 0x1f8);
            if (((lVar21 != 0) &&
                ((*(int *)(lVar21 + 0x20) <= (int)local_f0 &&
                  (int)local_f0 <= *(int *)(lVar21 + 0x30) && (*(int *)(lVar21 + 0x24) <= iStack_ec)
                 ))) && (iStack_ec <= *(int *)(lVar21 + 0x34))) {
              if (uVar6 != 0) {
                sVar5 = *(short *)PTR_DAT_04bb6298;
                if (sVar5 == -1) {
LAB_0183197c:
                  lVar21 = 0;
                }
                else {
                  puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar5 * 8);
                  if (0xff < (uint)(int)sVar5) {
                    puVar4 = (uint *)PTR_DAT_04bc39f8;
                  }
                  if (((*puVar4 >> 0x1a & 1) == 0) || ((*puVar4 >> 1 & 1) == 0)) goto LAB_0183197c;
                  lVar21 = 0;
                  if (*(long *)PTR_DAT_04bb59d8 != 0) {
                    lVar21 = *(long *)PTR_DAT_04bb59d8 + 0x18;
                  }
                }
                if (((((int)local_f0 < *(int *)(lVar21 + 0x10)) ||
                     (*(int *)(lVar21 + 0x20) < (int)local_f0)) ||
                    (iStack_ec < *(int *)(lVar21 + 0x14))) || (*(int *)(lVar21 + 0x24) < iStack_ec))
                goto LAB_01831820;
              }
              local_a8 = 0;
              lVar21 = *(long *)PTR_DAT_04bb2720;
              local_100 = puVar10 + 0x10;
              local_f8 = puVar2;
              local_e8 = puVar2;
              local_b0 = puVar11 + 0x10;
              if ((lVar21 == 0) || (*(long *)(lVar21 + 0x330) == 0)) {
                puVar23 = &DAT_055c04a0;
              }
              else {
                puVar23 = (undefined8 *)
                          (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                                    (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar21 + 0x338));
                iVar14 = FUN_006bd550(*puVar23,0);
                puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
                if (iVar14 != 0x758f7eaf) {
                  puVar23 = &DAT_055c04a0;
                }
              }
              local_a4 = *(int *)(puVar23 + 7);
              local_a0 = FUN_017baf44();
              local_a0 = local_a0 & 1;
              uVar15 = FUN_01a1cde0(uVar26,&local_b0,ppuVar16);
              if ((uVar15 & 1) != 0) {
                fVar24 = (float)(int)local_f0 * 0.5;
                uVar19 = 0;
                if (fVar24 != (float)(int)fVar24) {
                  uVar19 = (uint)(fVar24 < 0.0);
                }
                iVar14 = (int)fVar24 - uVar19;
                fVar24 = (float)iStack_ec * 0.5;
                uVar19 = 0;
                if (fVar24 != (float)(int)fVar24) {
                  uVar19 = (uint)(fVar24 < 0.0);
                }
                iVar7 = (int)fVar24 - uVar19;
                if (iVar14 == *(int *)(param_1 + 0x5f8) && iVar7 == *(int *)(param_1 + 0x5fc))
                goto LAB_01831b28;
                if (((*(long *)(PTR_DAT_04bbec68 + 8) != 0) &&
                    (uVar19 = iVar14 - *(int *)(PTR_DAT_04bbec38 + 0x10),
                    *(int *)(PTR_DAT_04bbec38 + 0x10) <= iVar14 &&
                    iVar14 <= *(int *)(PTR_DAT_04bbec38 + 0x20))) &&
                   ((uVar8 = iVar7 - *(int *)(PTR_DAT_04bbec38 + 0x14),
                    *(int *)(PTR_DAT_04bbec38 + 0x14) <= iVar7 &&
                    (iVar7 <= *(int *)(PTR_DAT_04bbec38 + 0x24))))) {
                  lVar21 = (long)(int)(uVar19 + *(uint *)PTR_DAT_04bbec68 * uVar8);
                  if (*(uint *)(PTR_DAT_04bbec68 + 4) <= uVar8 ||
                      *(uint *)PTR_DAT_04bbec68 <= uVar19) {
                    lVar21 = 0;
                  }
                  if (*(char *)(*(long *)(PTR_DAT_04bbec68 + 8) + lVar21) == '\0')
                  goto LAB_01831b28;
                }
              }
            }
          }
LAB_01831820:
          uVar20 = uVar20 + 1;
          iVar13 = iVar13 + 2;
        } while (uVar20 != 4);
        uVar17 = uVar17 + 1;
        if (uVar17 == 4) {
          return 0;
        }
      } while( true );
    }
  } while( true );
}

