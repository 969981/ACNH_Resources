
undefined8 FUN_0216b148(float param_1,uint *param_2,long param_3)

{
  uint uVar1;
  float *pfVar2;
  uint *puVar3;
  byte bVar4;
  ushort uVar5;
  short sVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  float *pfVar15;
  long lVar16;
  ulong uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  undefined4 uVar20;
  int iVar21;
  int iVar22;
  byte *pbVar23;
  long lVar24;
  undefined4 uVar25;
  long lVar26;
  int *piVar27;
  undefined8 *puVar28;
  undefined8 uVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined *local_180;
  undefined4 local_178;
  undefined4 local_174;
  byte local_170;
  undefined *local_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined *local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined1 local_105;
  undefined8 local_fc;
  float local_f4;
  undefined4 local_f0;
  float local_ec;
  undefined8 local_e8;
  undefined *puStack_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  byte local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *puStack_b8;
  int local_b0;
  int iStack_ac;
  float local_a4;
  float fStack_a0;
  float local_9c;
  int local_88;
  byte local_84 [4];
  
  lVar26 = *(long *)PTR_DAT_04bb39b0;
  pbVar23 = PTR_DAT_04bb32e0;
  if (lVar26 == 0) {
LAB_0216b1e0:
    if (*pbVar23 < 8) goto LAB_0216b258;
LAB_0216b1ec:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_0216b250:
      pbVar23 = PTR_DAT_04bb5038;
      goto LAB_0216b258;
    }
    lVar26 = **(long **)PTR_DAT_04bb27d0;
    bVar4 = *(byte *)(lVar26 + 0x473);
    pbVar23 = PTR_DAT_04bb5038;
    if ((long)(char)bVar4 != 0xffffffffffffffff) {
      puVar3 = (uint *)(lVar26 + 0x48) + ((long)(char)bVar4 & 0xffffffffU) * 0x20;
      if (7 < bVar4) {
        puVar3 = (uint *)(lVar26 + 0x48);
      }
      if ((*puVar3 & 8) != 0) {
        pbVar23 = (byte *)(lVar26 + 0x471);
      }
    }
    local_84[0] = *pbVar23;
    if (7 < local_84[0]) goto LAB_0216b250;
  }
  else {
    if (*(int *)(lVar26 + 0x15c) != 0) {
      pbVar23 = (byte *)(lVar26 + 0x158);
    }
    if (7 < *pbVar23) {
      if ((*(int *)(lVar26 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar23 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_0216b1e0;
      }
      goto LAB_0216b1ec;
    }
LAB_0216b258:
    local_84[0] = *pbVar23;
    if (7 < local_84[0]) {
      local_84[0] = 0xff;
    }
  }
  pfVar15 = (float *)FUN_0251b3b0(local_84,0);
  if (pfVar15 == (float *)0x0) {
    return 0;
  }
  lVar26 = FUN_0251bdc4(local_84,0);
  puVar8 = PTR_DAT_04bb2720;
  puVar7 = PTR_DAT_04bb2010;
  uVar13 = *(uint *)(lVar26 + 4);
  if ((uVar13 + 0x40000000 < 0x80000001) && (*param_2 == 4)) {
    return 0;
  }
  fVar30 = *pfVar15;
  if (*param_2 == 8) {
    fVar31 = *(float *)(*(long *)(param_3 + 8) + 0x6a8);
    iVar14 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
    fVar31 = (float)iVar14 * 5.0 + 5.0;
    bVar10 = false;
    if (((float)(iVar14 + -1) * 5.0 <= fVar30) && (bVar10 = false, !NAN(fVar30) && !NAN(fVar31))) {
      bVar10 = fVar30 < fVar31;
    }
    if (bVar10) {
      fVar31 = *(float *)(*(long *)(param_3 + 8) + 0x6b0);
      fVar33 = pfVar15[2];
      iVar14 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
      fVar31 = (float)(iVar14 + 3) * 5.0 + 5.0;
      bVar10 = false;
      if (((float)iVar14 * 5.0 <= fVar33) && (bVar10 = false, !NAN(fVar33) && !NAN(fVar31))) {
        bVar10 = fVar33 < fVar31;
      }
      if (bVar10) {
        return 0;
      }
    }
  }
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(uVar13 >> 0x14) & 0xff0));
  fVar31 = (float)(uVar13 & 0xffffff) * 5.9604645e-08;
  fVar33 = *pfVar2 + fVar31 * pfVar2[1];
  fVar31 = pfVar2[2] + fVar31 * pfVar2[3];
  fVar34 = fVar33 * 0.0;
  fVar30 = fVar30 + fVar34 * 0.0 + fVar31 * 0.0 + param_1 * (fVar33 + 0.0);
  fVar32 = pfVar15[1];
  fVar35 = pfVar15[2] + (fVar31 * 0.0 * 0.0 - fVar33 * 0.0) + param_1 * fVar31;
  local_c8 = PTR_DAT_04bb2010 + 0x10;
  local_c0 = 0;
  local_d8 = 0;
  fVar33 = (float)(int)fVar35 / 5.0;
  iVar14 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
  iStack_ac = (int)fVar33 - (uint)(fVar35 < 0.0);
  fVar31 = fVar32 + (fVar34 * 0.0 + 1.0) * 0.0 + fVar31 * 0.0 * 0.0 + param_1 * fVar34;
  lVar24 = *(long *)PTR_DAT_04bb2720;
  puStack_b8 = local_c8;
  local_b0 = iVar14;
  local_a4 = fVar30;
  fStack_a0 = fVar31;
  local_9c = fVar35;
  if (lVar24 == 0) {
    puVar28 = &DAT_055c04a0;
  }
  else {
    puVar28 = &DAT_055c04a0;
    if (*(long *)(lVar24 + 0x330) != 0) {
      puVar28 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar24 + 0x338));
      iVar12 = FUN_006bd550(*puVar28,0);
      puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar28 = &DAT_055c04a0;
      }
    }
  }
  local_d4 = *(undefined4 *)(puVar28 + 7);
  local_d0 = FUN_017baf44();
  local_d0 = local_d0 & 1;
  puStack_e0 = PTR_DAT_04bb6268 + 0x10;
  local_e8 = 0xfffe;
  FUN_0277d4ac(&local_e8);
  puVar9 = PTR_DAT_04bb46b0;
  if (*param_2 < 2) {
    lVar24 = *(long *)PTR_DAT_04bb46b0;
    if (lVar24 == 0) {
LAB_0216b538:
      lVar24 = 0;
    }
    else {
      puVar28 = *(undefined8 **)(lVar24 + 0x10);
      if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar28 + 0x38))();
        lVar24 = 0;
        if (lVar16 != 0) {
          lVar24 = lVar16 + 0x70;
        }
      }
      else {
        if (puVar28 == (undefined8 *)0x0) goto LAB_0216b538;
        lVar24 = 0;
        if ((long *)puVar28[0x26] != (long *)0x0) {
          lVar24 = (**(code **)(*(long *)puVar28[0x26] + 0x38))();
        }
      }
    }
    if (*(long **)(lVar24 + 0x1a0b70) == (long *)0x0) {
      uVar17 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar24 + 0x1a0b70);
      uVar17 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar17 = (**(code **)*puVar28)();
      }
    }
    iVar12 = *(int *)(*(long *)(lVar24 + 0x1a0b58) + *(long *)(lVar24 + 0x1a0b50));
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x1a0b70) != 0)) &&
       (puVar28 = *(undefined8 **)(*(long *)(lVar24 + 0x1a0b70) + 8), puVar28 != (undefined8 *)0x0))
    {
      (**(code **)*puVar28)();
    }
    if (iVar12 != 3) goto LAB_0216b5cc;
    lVar24 = *(long *)puVar9;
    if (lVar24 == 0) {
LAB_0216ba9c:
      lVar24 = 0;
    }
    else {
      puVar28 = *(undefined8 **)(lVar24 + 0x10);
      if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar28 + 0x38))();
        lVar24 = 0;
        if (lVar16 != 0) {
          lVar24 = lVar16 + 0x70;
        }
      }
      else {
        if (puVar28 == (undefined8 *)0x0) goto LAB_0216ba9c;
        lVar24 = 0;
        if ((long *)puVar28[0x26] != (long *)0x0) {
          lVar24 = (**(code **)(*(long *)puVar28[0x26] + 0x38))();
        }
      }
    }
    if ((*(long **)(lVar24 + 0x1a3d88) == (long *)0x0) ||
       (puVar28 = (undefined8 *)**(long **)(lVar24 + 0x1a3d88), puVar28 == (undefined8 *)0x0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)*puVar28)();
      uVar17 = uVar17 & 0xffffffff;
    }
    FUN_028b47f0(&local_138,*(long *)(lVar24 + 0x1a3d70) + *(long *)(lVar24 + 0x1a3d68),0,
                 &puStack_b8,&local_c8,&local_a4);
    local_e8 = local_138;
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x1a3d88) != 0)) &&
       (puVar28 = *(undefined8 **)(*(long *)(lVar24 + 0x1a3d88) + 8), puVar28 != (undefined8 *)0x0))
    {
      (**(code **)*puVar28)();
    }
  }
  else {
LAB_0216b5cc:
    FUN_01a50448(&local_138,&puStack_e0,0,&puStack_b8,&local_c8,&local_a4);
    local_e8 = local_138;
  }
  puVar9 = PTR_DAT_04bb43c0;
  uVar13 = *param_2;
  if (uVar13 == 5) {
    lVar24 = *(long *)PTR_DAT_04bb43c0;
    uVar13 = FUN_0277d6c4(&local_e8);
    if (*(long *)puVar9 == 0) {
LAB_0216b648:
      local_9c = fVar35 + -5.0;
      fVar33 = (float)(int)local_9c / 5.0;
      iStack_ac = (int)fVar33 - (uint)(local_9c < 0.0);
      local_b0 = iVar14;
      local_a4 = fVar30;
      fStack_a0 = fVar31;
      FUN_01a50448(&local_138,&puStack_e0,0,&puStack_b8,&local_c8,&local_a4);
      local_e8 = local_138;
    }
    else {
      lVar24 = *(long *)(lVar24 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar24 + 0x1f8);
      if ((*(uint *)(lVar24 + 0x1d8) <= uVar13) ||
         (*(long *)(*(long *)(lVar24 + 0x1e0) + (long)(int)uVar13 * 8) == 0)) goto LAB_0216b648;
    }
    uVar13 = *param_2;
  }
  local_88 = -1;
  if (uVar13 == 8) {
    lVar24 = *(long *)PTR_DAT_04bb46b0;
    if (lVar24 == 0) {
LAB_0216b708:
      lVar24 = 0;
    }
    else {
      puVar28 = *(undefined8 **)(lVar24 + 0x10);
      if ((*(byte *)(lVar24 + 0x453) & 1) == 0) {
        lVar16 = (**(code **)(*(long *)*puVar28 + 0x38))();
        lVar24 = 0;
        if (lVar16 != 0) {
          lVar24 = lVar16 + 0x70;
        }
      }
      else {
        if (puVar28 == (undefined8 *)0x0) goto LAB_0216b708;
        lVar24 = 0;
        if ((long *)puVar28[0x26] != (long *)0x0) {
          lVar24 = (**(code **)(*(long *)puVar28[0x26] + 0x38))();
        }
      }
    }
    if ((*(long **)(lVar24 + 0x1be7a8) == (long *)0x0) ||
       (puVar28 = (undefined8 *)**(long **)(lVar24 + 0x1be7a8), puVar28 == (undefined8 *)0x0)) {
      uVar17 = 0;
    }
    else {
      uVar17 = (**(code **)*puVar28)();
      uVar17 = uVar17 & 0xffffffff;
    }
    FUN_02885980(&local_138,*(long *)(lVar24 + 0x1be790) + *(long *)(lVar24 + 0x1be788),0,
                 &puStack_b8,&local_c8,&local_a4,&local_88);
    local_e8 = local_138;
    if ((local_88 != -1) &&
       (uVar18 = FUN_02884964(*(long *)(lVar24 + 0x1be790) + *(long *)(lVar24 + 0x1be788)),
       (uVar18 & 1) != 0)) {
      local_88 = -1;
    }
    if ((((uVar17 & 1) != 0) && (*(long *)(lVar24 + 0x1be7a8) != 0)) &&
       (puVar28 = *(undefined8 **)(*(long *)(lVar24 + 0x1be7a8) + 8), puVar28 != (undefined8 *)0x0))
    {
      (**(code **)*puVar28)();
    }
  }
  local_150._0_4_ = (uint)local_150 & 0xffffff00;
  if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) == 0) {
    fStack_a0 = -500.0;
  }
  else {
    sVar6 = *(short *)PTR_DAT_04bb6298;
    if (sVar6 == -1) {
      uVar20 = 7;
    }
    else {
      local_138 = (undefined *)CONCAT44(local_138._4_4_,1);
      puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
      if (0xff < (uint)(int)sVar6) {
        puVar3 = (uint *)PTR_DAT_04bc39f8;
      }
      uVar20 = 7;
      if ((*puVar3 & 2) != 0) {
        uVar20 = 5;
      }
    }
    local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar20);
    fStack_a0 = (float)FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),&local_a4,&local_138
                                    ,1,&local_150);
  }
  iVar14 = FUN_0277d6c4(&local_e8);
  if ((((iVar14 == 0xa3e) || (iVar14 = FUN_0277d6c4(&local_e8), iVar14 == 0xa3f)) ||
      ((iVar14 = FUN_0277d6c4(&local_e8), iVar14 == 0x219d ||
       ((iVar14 = FUN_0277d6c4(&local_e8), iVar14 == 0x219e ||
        (iVar14 = FUN_0277d6c4(&local_e8), iVar14 == 0x3157)))))) ||
     (iVar14 = FUN_0277d6c4(&local_e8), iVar14 == 0x3158)) {
    uVar20 = 1;
    FUN_01a5033c(&local_138,&puStack_e0,1,&local_c8,0);
    uVar13 = (uint)local_138;
    uVar25 = local_138._4_4_;
LAB_0216b8e0:
    local_e8 = CONCAT44(uVar25,uVar13);
  }
  else {
    uVar17 = FUN_0277d9a8(&local_e8);
    if ((uVar17 & 1) != 0) {
      FUN_01ad5d04(&local_138,&local_e8);
      uVar17 = FUN_01b014e8(&local_138);
      if ((uVar17 & 1) == 0) goto LAB_0216bbf8;
      FUN_01ad5d04(&local_138,&local_e8);
      FUN_01b01948(&local_150,&local_138);
LAB_0216bc40:
      uVar20 = 0;
      uVar13 = (uint)local_150;
      uVar25 = local_150._4_4_;
      goto LAB_0216b8e0;
    }
LAB_0216bbf8:
    uVar17 = FUN_0277d9a8(&local_e8);
    if ((uVar17 & 1) != 0) {
      FUN_01ad5d04(&local_138,&local_e8);
      iVar14 = FUN_0277d6c4(&local_130);
      if (iVar14 == 0x342f) {
        FUN_01ad5d04(&local_138,&local_e8);
        FUN_01b01dfc(&local_150,&local_138);
        goto LAB_0216bc40;
      }
    }
    uVar20 = 0;
  }
  if (*param_2 == 6) {
    if (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 7) {
      return 0;
    }
    lVar24 = *(long *)(param_3 + 8);
    lVar16 = *(long *)(lVar24 + 0x3b0);
    if (((lVar16 != 0) && (*(uint *)(lVar16 + 0x360) < 0x1a)) &&
       ((1 << (ulong)(*(uint *)(lVar16 + 0x360) & 0x1f) & 0x3300000U) != 0)) {
      if (*(int *)(lVar16 + 0x4b8) == 0) {
        return 0;
      }
      if (*(int *)(lVar16 + 0x378) != 0x23) {
        return 0;
      }
    }
    if (*(int *)(lVar24 + 0x750) == 3) {
      return 0;
    }
    if (*(long *)PTR_DAT_04bb4e28 != 0) {
      local_138 = (undefined *)CONCAT44(local_138._4_4_,*(undefined4 *)(lVar24 + 0x230));
      uVar17 = FUN_0372fd00(*(long *)PTR_DAT_04bb4e28,&local_138);
      if ((uVar17 & 1) != 0) {
        return 0;
      }
    }
    uVar17 = FUN_021671b0();
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    fVar30 = pfVar15[2];
    uVar29 = *(undefined8 *)pfVar15;
    uVar20 = *(undefined4 *)(lVar26 + 4);
    local_138 = (undefined *)0xfffe;
    FUN_0277d4ac(&local_138);
    local_130 = puVar7 + 0x10;
    local_120 = 0;
    local_128 = 0;
    local_fc = uVar29;
    local_f4 = fVar30;
    local_f0 = uVar20;
    local_ec = param_1;
    uVar17 = FUN_021672a0(&local_fc,&local_138);
    uVar20 = local_120;
    if ((uVar17 & 1) == 0) {
      return 0;
    }
    local_e8 = local_138;
    local_c0 = local_128;
    local_a4 = (float)FUN_01a50ed0(&puStack_e0,&local_e8,&local_c8,local_120);
    fStack_a0 = fVar33;
    local_9c = fVar32;
  }
  lVar26 = *(long *)puVar9;
  uVar13 = FUN_0277d6c4(&local_e8);
  if (*(long *)puVar9 == 0) {
    return 0;
  }
  lVar26 = *(long *)(lVar26 + 0x57e58);
  uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
  if (*(uint *)(lVar26 + 0x1d8) <= uVar13) {
    return 0;
  }
  if (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) == 0) {
    return 0;
  }
  local_105 = 0;
  local_130 = (undefined *)((long)&local_128 + 4);
  local_128 = CONCAT35(local_128._5_3_,0x20);
  local_138 = PTR_DAT_04bb2028 + 0x10;
  if (*param_2 < 9) {
    puVar28 = (undefined8 *)(&PTR_DAT_04a75728)[*param_2];
  }
  else {
    puVar28 = &DAT_0407ebb1;
  }
  FUN_038d1270(&local_138,"Check_%s",puVar28);
  switch(*param_2) {
  case 1:
    if (1 < *(uint *)(*(long *)PTR_DAT_04bb27d0 + 0x80)) {
      return 0;
    }
  case 0:
    lVar26 = FUN_0264d580();
    uStack_148 = lVar26 + 0x1a3d60;
    local_140 = CONCAT71(local_140._1_7_,1);
    if (*(long **)(lVar26 + 0x1a3d88) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar26 + 0x1a3d88);
      uVar11 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar28)();
      }
    }
    local_140 = CONCAT62(local_140._2_6_,CONCAT11(uVar11,(undefined1)local_140)) &
                0xffffffffffff01ff;
    local_150 = PTR_DAT_04bb64c0 + 0x10;
    iVar14 = FUN_028b2870(*(long *)(lVar26 + 0x1a3d70) + *(long *)(lVar26 + 0x1a3d68),&local_e8);
    break;
  default:
    goto switchD_0216bb5c_caseD_2;
  case 3:
    lVar26 = FUN_0264d580();
    uStack_148 = lVar26 + 0x1a0d78;
    local_140 = CONCAT71(local_140._1_7_,1);
    if (*(long **)(lVar26 + 0x1a0da0) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar26 + 0x1a0da0);
      uVar11 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar28)();
      }
    }
    local_140 = CONCAT62(local_140._2_6_,CONCAT11(uVar11,(undefined1)local_140)) &
                0xffffffffffff01ff;
    local_150 = PTR_DAT_04bb6eb0 + 0x10;
    iVar14 = FUN_0289b450(*(long *)(lVar26 + 0x1a0d88) + *(long *)(lVar26 + 0x1a0d80),&local_e8);
    break;
  case 4:
    lVar26 = FUN_0264d580();
    uStack_148 = lVar26 + 0x1b9000;
    local_140 = CONCAT71(local_140._1_7_,1);
    if (*(long **)(lVar26 + 0x1b9028) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar26 + 0x1b9028);
      uVar11 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar28)();
      }
    }
    local_140 = CONCAT62(local_140._2_6_,CONCAT11(uVar11,(undefined1)local_140)) &
                0xffffffffffff01ff;
    local_150 = PTR_DAT_04bb6b50 + 0x10;
    iVar14 = FUN_02871140(*(long *)(lVar26 + 0x1b9010) + *(long *)(lVar26 + 0x1b9008),&local_e8);
    break;
  case 5:
    lVar26 = FUN_037755f0();
    if (lVar26 == 0) {
      return 0;
    }
    uStack_148 = lVar26 + 0x1730;
    local_140 = CONCAT71(local_140._1_7_,1);
    if (*(long **)(lVar26 + 0x1758) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar26 + 0x1758);
      uVar11 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar28)();
      }
    }
    local_140 = CONCAT62(local_140._2_6_,CONCAT11(uVar11,(undefined1)local_140)) &
                0xffffffffffff01ff;
    local_150 = PTR_DAT_04bb7388 + 0x10;
    iVar14 = FUN_028fdef0(*(long *)(lVar26 + 0x1740) + *(long *)(lVar26 + 0x1738),&local_e8);
    break;
  case 6:
    lVar26 = FUN_037755f0();
    if (lVar26 == 0) {
      return 0;
    }
    uStack_148 = lVar26 + 0x8c0;
    local_140 = CONCAT71(local_140._1_7_,1);
    if (*(long **)(lVar26 + 0x8e8) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar26 + 0x8e8);
      uVar11 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar28)();
      }
    }
    local_140 = CONCAT62(local_140._2_6_,CONCAT11(uVar11,(undefined1)local_140)) &
                0xffffffffffff01ff;
    local_150 = PTR_DAT_04bb73a0 + 0x10;
    iVar14 = FUN_02901cc0(*(long *)(lVar26 + 0x8d0) + *(long *)(lVar26 + 0x8c8),&local_e8);
    break;
  case 7:
    lVar26 = FUN_0264d580();
    uStack_148 = lVar26 + 0x1bd6e0;
    local_140 = CONCAT71(local_140._1_7_,1);
    if (*(long **)(lVar26 + 0x1bd708) == (long *)0x0) {
      uVar11 = 0;
    }
    else {
      puVar28 = (undefined8 *)**(long **)(lVar26 + 0x1bd708);
      uVar11 = 0;
      if (puVar28 != (undefined8 *)0x0) {
        uVar11 = (**(code **)*puVar28)();
      }
    }
    local_140 = CONCAT62(local_140._2_6_,CONCAT11(uVar11,(undefined1)local_140)) &
                0xffffffffffff01ff;
    local_150 = PTR_DAT_04bb7190 + 0x10;
    iVar14 = FUN_02874994(*(long *)(lVar26 + 0x1bd6f0) + *(long *)(FUN_001bd6e8 + lVar26),&local_e8)
    ;
    break;
  case 8:
    iVar14 = local_88;
    goto LAB_0216bec4;
  }
  FUN_02640184(&local_150);
LAB_0216bec4:
  if (-1 < iVar14) {
    local_150._0_4_ = 0;
    local_140 = 0xfffe;
    FUN_0277d4ac(&local_140);
    local_150._4_4_ = 0.0;
    uStack_148._0_4_ = 0.0;
    local_150._0_4_ = *(uint *)PTR_DAT_04bb3238;
    local_140 = *(ulong *)PTR_DAT_04bb37e0;
    uStack_148._4_4_ = 0.0;
    uVar13 = FUN_006bd550("CheckItemIndex",0);
    piVar27 = (int *)(param_3 + 0x20);
    iVar12 = *piVar27;
    if (iVar12 != 0) {
      if (iVar12 < 2) {
        iVar21 = 0;
      }
      else {
        iVar21 = 0;
        iVar12 = iVar12 + -1;
        do {
          uVar1 = iVar12 + iVar21;
          if ((int)uVar1 < 0 != SCARRY4(iVar12,iVar21)) {
            uVar1 = uVar1 + 1;
          }
          iVar22 = (int)uVar1 >> 1;
          uVar1 = *(uint *)(*(long *)(param_3 + 0x28) +
                            ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
          if (uVar1 == uVar13) goto LAB_0216bfc4;
          if (uVar1 < uVar13) {
            iVar21 = iVar22 + 1;
          }
          else {
            iVar12 = iVar22 + -1;
          }
        } while (iVar21 < iVar12);
      }
      iVar22 = iVar21;
      if (*(uint *)(*(long *)(param_3 + 0x28) + (long)iVar21 * 0x20 + 0x18) == uVar13) {
LAB_0216bfc4:
        if (-1 < iVar22) {
          FUN_0204c990(piVar27,"CheckItemIndex",iVar14);
        }
      }
    }
    local_150._4_4_ = local_a4;
    uStack_148._0_4_ = fStack_a0;
    uStack_148._4_4_ = local_9c;
    FUN_01ea5c80(param_3,PTR_PTR_04bb2238,&local_138,0,1,local_84);
    uVar5 = *(ushort *)(*(long *)(param_3 + 8) + 0x284);
    if (uVar5 < 1000) {
      if ((*(int *)PTR_DAT_04bb6260 < (int)(short)uVar5) ||
         (*(int *)(PTR_DAT_04bb6258 + ((long)(short)uVar5 & 0xffffffffU) * 0x10) == 0)) {
        uVar29 = 0xffffffffffffffff;
      }
      else {
        uVar29 = *(undefined8 *)(PTR_DAT_04bb6258 + (long)(short)uVar5 * 0x10 + 8);
      }
      FUN_00a77550(local_84,uVar29,0,0);
    }
    lVar26 = *(long *)puVar9;
    local_158 = 0;
    local_168 = PTR_DAT_04bc0510 + 0x10;
    local_160 = (undefined4)local_e8;
    uStack_15c = local_e8._4_4_;
    uVar13 = FUN_0277d6c4(&local_160);
    if (*(long *)puVar9 != 0) {
      lVar26 = *(long *)(lVar26 + 0x57e58);
      uVar13 = (uVar13 & 0xffff) - (uint)*(ushort *)(lVar26 + 0x1f8);
      if ((uVar13 < *(uint *)(lVar26 + 0x1d8)) &&
         (*(long *)(*(long *)(lVar26 + 0x1e0) + (long)(int)uVar13 * 8) != 0)) {
        FUN_0277d6c4(&local_e8);
      }
    }
    lVar26 = *(long *)puVar8;
    local_178 = 0;
    if (lVar26 == 0) {
      puVar28 = &DAT_055c04a0;
    }
    else {
      puVar28 = &DAT_055c04a0;
      if (*(long *)(lVar26 + 0x330) != 0) {
        puVar28 = (undefined8 *)
                  (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                            (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar26 + 0x338));
        iVar14 = FUN_006bd550(*puVar28,0);
        puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar14 != 0x758f7eaf) {
          puVar28 = &DAT_055c04a0;
        }
      }
    }
    local_174 = *(undefined4 *)(puVar28 + 7);
    local_170 = FUN_017baf44();
    local_170 = local_170 & 1;
    local_180 = PTR_DAT_04bb5438 + 0x10;
    puVar19 = (undefined4 *)FUN_014fbd50(&local_180,uVar20,&local_c8);
    local_150._0_4_ = *puVar19;
    if (*param_2 == 7) {
      *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xcec) = (uint)local_150;
    }
    local_140 = local_e8;
    uVar13 = FUN_006bd550("CancelShopCamera",0);
    iVar14 = *piVar27;
    if (iVar14 != 0) {
      if (iVar14 < 2) {
        iVar12 = 0;
      }
      else {
        iVar12 = 0;
        iVar14 = iVar14 + -1;
        do {
          uVar1 = iVar14 + iVar12;
          if ((int)uVar1 < 0 != SCARRY4(iVar14,iVar12)) {
            uVar1 = uVar1 + 1;
          }
          iVar21 = (int)uVar1 >> 1;
          uVar1 = *(uint *)(*(long *)(param_3 + 0x28) +
                            ((long)((ulong)uVar1 << 0x20) >> 0x21) * 0x20 + 0x18);
          if (uVar1 == uVar13) goto LAB_0216c220;
          if (uVar1 < uVar13) {
            iVar12 = iVar21 + 1;
          }
          else {
            iVar14 = iVar21 + -1;
          }
        } while (iVar12 < iVar14);
      }
      iVar21 = iVar12;
      if (*(uint *)(*(long *)(param_3 + 0x28) + (long)iVar12 * 0x20 + 0x18) == uVar13) {
LAB_0216c220:
        if ((-1 < iVar21) && (iVar14 = FUN_0204ca50(piVar27,"CancelShopCamera"), iVar14 != 0)) {
          return 1;
        }
      }
    }
    if (*param_2 == 6) {
      lVar26 = FUN_02168c40(param_3);
      if (lVar26 == 0) {
        return 1;
      }
      puVar19 = (undefined4 *)(lVar26 + 0x122bc);
      *puVar19 = (uint)local_150;
      *(float *)(lVar26 + 0x122c0) = local_150._4_4_;
      *(float *)(lVar26 + 0x122c4) = (float)uStack_148;
    }
    else {
      puVar19 = (undefined4 *)(param_3 + 0xb0d8);
      *puVar19 = (uint)local_150;
      *(ulong *)(param_3 + 0xb0dc) = CONCAT44((float)uStack_148,local_150._4_4_);
    }
    puVar19[3] = uStack_148._4_4_;
    *(undefined2 *)(puVar19 + 4) = (undefined2)local_140;
    *(undefined1 *)((long)puVar19 + 0x12) = local_140._2_1_;
    *(undefined1 *)((long)puVar19 + 0x13) = local_140._3_1_;
    puVar19[5] = local_140._4_4_;
    return 1;
  }
switchD_0216bb5c_caseD_2:
  return 0;
}

