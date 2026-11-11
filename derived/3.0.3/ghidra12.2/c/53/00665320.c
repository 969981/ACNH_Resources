
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00665320(undefined8 param_1,undefined8 param_2,uint *param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  size_t __n;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  void *pvVar19;
  int iVar20;
  uint uVar21;
  undefined8 local_190;
  undefined1 auStack_188 [64];
  int local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  uint local_13c;
  undefined4 uStack_138;
  undefined8 local_130;
  uint local_128;
  uint local_124;
  uint uStack_120;
  undefined4 local_11c;
  uint local_118;
  uint local_114;
  undefined4 local_e4;
  undefined8 local_e0;
  undefined4 local_d8;
  int iStack_d4;
  int local_d0;
  int iStack_cc;
  int local_c8;
  undefined4 local_c4;
  uint uStack_c0;
  uint local_ac;
  void *local_a8;
  void *pvStack_a0;
  
  FUN_00446050(&local_a8);
  FUN_00446090(&local_a8,param_2);
  uVar12 = *param_3;
  uVar4 = param_3[1];
  uVar2 = param_3[5];
  uVar5 = param_3[6];
  uVar3 = param_3[2];
  uStack_120 = param_3[3];
  uVar6 = param_3[4];
  if (uStack_120 < 2) {
    uStack_120 = 1;
  }
  uVar21 = uVar6;
  if (uVar6 < 2) {
    uVar21 = 1;
  }
  uVar16 = uVar2;
  if (uVar2 < 2) {
    uVar16 = 1;
  }
  local_ac = uVar4;
  FUN_0043a4d0(&local_130,0,0x80);
  FUN_0043a4d0(&local_148,0,0x14);
  local_130 = 0x7c20534444;
  local_124 = uVar21;
  if (1 < uVar12) {
    uVar21 = 0x21007;
    local_114 = uVar12;
    if (uVar2 < 2) goto LAB_00665448;
LAB_006653e0:
    if (uVar3 < 2) {
      uVar21 = uVar21 | 0x800000;
      local_118 = uVar16;
      uVar15 = FUN_0065b1d0(param_3[6]);
      goto joined_r0x00665554;
    }
    uVar18 = 0x80040200;
    if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
    FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
    lVar14 = FUN_004446b0(auStack_188,
                          "The image is both an array and volume texture. This is not supported.",
                          &DAT_0413df78);
    uVar17 = 0x1e6;
    goto LAB_00665a44;
  }
  uVar21 = 0x1007;
  if (1 < uVar2) goto LAB_006653e0;
LAB_00665448:
  uVar15 = FUN_0065b1d0(param_3[6]);
joined_r0x00665554:
  if ((uVar15 & 1) == 0) {
    uVar16 = param_3[3];
    if (uVar16 < 2) {
      uVar16 = 1;
    }
    uVar21 = uVar21 | 8;
    local_11c = FUN_0065b1f0(param_3[6],uVar16);
    if (uVar4 < 2) goto LAB_00665468;
LAB_0066557c:
    if (local_ac == 6) {
      if (1 < uVar2) {
        uVar18 = 0x80040200;
        if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
        FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
        lVar14 = FUN_004446b0(auStack_188,
                              "The image is both a cubemap and volume texture. This is not supported."
                              ,&DAT_0413df78);
        uVar17 = 0x206;
        goto LAB_00665a44;
      }
      uVar11 = 0x1008;
      uVar16 = 0xfe00;
      goto LAB_00665470;
    }
    uVar18 = 0x80040200;
    if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
    FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
    lVar14 = FUN_004446b0(auStack_188,
                          "The image is a cubemap, but has {} faces instead of the expected 6.",
                          &DAT_04861308,&local_ac);
    uVar17 = 0x200;
  }
  else {
    uVar21 = uVar21 | 0x80000;
    local_11c = 0;
    if (1 < uVar4) goto LAB_0066557c;
LAB_00665468:
    uVar16 = 0;
    uVar11 = 0x1000;
LAB_00665470:
    bVar1 = 1 < uVar3;
    uStack_c0 = uVar16 | 0x200000;
    if (uVar2 < 2) {
      uStack_c0 = uVar16;
    }
    local_e4 = 0x20;
    if (1 < (uVar2 | uVar3)) {
      uVar11 = 0x1008;
    }
    local_c4 = 0x401008;
    if (uVar12 < 2) {
      local_c4 = uVar11;
    }
    local_128 = uVar21;
    iVar7 = FUN_0065b170(uVar5,0);
    iVar8 = FUN_0065b170(uVar5,1);
    iVar9 = FUN_0065b170(uVar5,2);
    iVar10 = FUN_0065b170(uVar5,3);
    uVar11 = FUN_0065b070(uVar5);
    switch(uVar5) {
    case 10:
      iVar20 = 0x74;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0xb:
    case 0xc:
    case 0xd:
    case 0xe:
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
    case 0x13:
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x18:
    case 0x19:
    case 0x1a:
    case 0x1b:
    case 0x1c:
    case 0x1d:
    case 0x1f:
    case 0x20:
    case 0x21:
    case 0x22:
    case 0x23:
    case 0x24:
    case 0x25:
    case 0x26:
    case 0x27:
    case 0x29:
    case 0x2a:
    case 0x2b:
    case 0x2c:
    case 0x2d:
    case 0x2e:
    case 0x2f:
    case 0x30:
    case 0x31:
    case 0x33:
    case 0x34:
    case 0x36:
    case 0x37:
    case 0x38:
    case 0x39:
    case 0x3a:
    case 0x3b:
    case 0x3d:
    case 0x3e:
    case 0x3f:
    case 0x40:
    case 0x41:
    case 0x42:
    case 0x43:
    case 0x44:
    case 0x45:
switchD_00665528_caseD_b:
      iVar20 = 0;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0x1e:
      iVar20 = 0x73;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0x28:
      iVar20 = 0x72;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0x32:
      iVar20 = 0x71;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0x35:
      iVar20 = 0x24;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0x3c:
      iVar20 = 0x70;
      iVar13 = FUN_0065b420(uVar5);
      break;
    case 0x46:
      iVar20 = 0x6f;
      iVar13 = FUN_0065b420(uVar5);
      if (!bVar1 && (param_4 & 1) == 0) goto LAB_00665624;
      goto LAB_00665824;
    default:
      iVar20 = 0x31545844;
      switch(uVar5) {
      default:
        goto switchD_00665528_caseD_b;
      case 0x82:
        iVar20 = 0x33545844;
      case 0x78:
        iVar13 = FUN_0065b420(uVar5);
        break;
      case 0x8c:
        iVar20 = 0x35545844;
        iVar13 = FUN_0065b420(uVar5);
        break;
      case 0x96:
        iVar20 = 0x31495441;
        iVar13 = FUN_0065b420(uVar5);
        break;
      case 0xa0:
        iVar20 = 0x32495441;
        iVar13 = FUN_0065b420(uVar5);
        if (!bVar1 && (param_4 & 1) == 0) goto LAB_00665624;
        goto LAB_00665824;
      }
    }
    if (bVar1 || (param_4 & 1) != 0) {
LAB_00665824:
      if (iVar13 != 0) {
        local_e0 = 0x3031584400000004;
        uVar11 = 2;
        if (1 < uVar6) {
          uVar11 = 3;
        }
        uStack_144 = 4;
        if (uVar2 < 2) {
          uStack_144 = uVar11;
        }
        if (1 < uVar4) {
          local_140 = 4;
        }
        bVar1 = true;
        uStack_138 = 0;
        pvVar19 = (void *)((long)local_a8 + 0x80);
        local_148 = iVar13;
        local_13c = uVar3;
        if (pvStack_a0 < pvVar19) goto LAB_00665878;
        goto LAB_00665708;
      }
      uVar18 = 0x80040200;
      if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
      FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
      local_190 = FUN_0065afc0(uVar5);
      lVar14 = FUN_004446b0(auStack_188,
                            "The image needs to be written as a DXT10 file, but no matching DXGI format was found for \'{}\'."
                            ,&DAT_048534d0,&local_190);
      uVar17 = 0x253;
    }
    else {
LAB_00665624:
      if ((((iVar8 == 0 && iVar7 == 0) && iVar9 == 0) && iVar10 == 0) ||
         (uVar12 = FUN_0065b2c0(iVar7,iVar8,iVar9,iVar10,uVar11), uVar5 != uVar12)) {
        if (iVar20 == 0) goto LAB_00665824;
        bVar1 = false;
        local_e0 = CONCAT44(iVar20,4);
        pvVar19 = (void *)((long)local_a8 + 0x80);
        if (pvStack_a0 < pvVar19) goto LAB_00665878;
LAB_00665708:
        memcpy(local_a8,&local_130,0x80);
        local_a8 = pvVar19;
        if (bVar1) {
LAB_00665894:
          pvVar19 = (void *)((long)local_a8 + 0x14);
          if (pvStack_a0 < pvVar19) {
            lVar14 = FUN_004462a0(&local_a8,&local_148);
            if (lVar14 != 0x14) {
              uVar18 = 0x80040200;
              if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
              FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
              lVar14 = FUN_004446b0(auStack_188,"Failed to write image DX10 header.",&DAT_0413df78);
              uVar17 = 0x27f;
              goto LAB_00665a44;
            }
          }
          else {
            memcpy(local_a8,&local_148,0x14);
            local_a8 = pvVar19;
          }
        }
      }
      else {
        bVar1 = false;
        local_e0 = CONCAT44(local_e0._4_4_,0x41);
        pvVar19 = (void *)((long)local_a8 + 0x80);
        local_d8 = uVar11;
        iStack_d4 = iVar7;
        local_d0 = iVar8;
        iStack_cc = iVar9;
        local_c8 = iVar10;
        if (pvVar19 <= pvStack_a0) goto LAB_00665708;
LAB_00665878:
        lVar14 = FUN_004462a0(&local_a8,&local_130,0x80);
        if (lVar14 != 0x80) {
          uVar18 = 0x80040200;
          if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
          FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
          lVar14 = FUN_004446b0(auStack_188,"Failed to write image header.",&DAT_0413df78);
          uVar17 = 0x277;
          goto LAB_00665a44;
        }
        if (bVar1) goto LAB_00665894;
      }
      __n = *(size_t *)(param_3 + 0x4e);
      pvVar19 = (void *)(__n + (long)local_a8);
      if (pvStack_a0 < pvVar19) {
        lVar14 = FUN_004462a0(&local_a8,*(void **)(param_3 + 0x4c),__n);
        if (lVar14 == *(long *)(param_3 + 0x4e)) {
LAB_00665a94:
          uVar18 = 0;
          goto LAB_00665a50;
        }
      }
      else {
        memcpy(local_a8,*(void **)(param_3 + 0x4c),__n);
        local_a8 = pvVar19;
        if (__n == *(size_t *)(param_3 + 0x4e)) goto LAB_00665a94;
      }
      uVar18 = 0x80040200;
      if (DAT_04c7e7e8 == '\0') goto LAB_00665a50;
      FUN_00444bc0(auStack_188,&DAT_04c7e798,1);
      lVar14 = FUN_004446b0(auStack_188,"Failed to write image data.",&DAT_0413df78);
      uVar17 = 0x286;
    }
  }
LAB_00665a44:
  uVar18 = 0x80040200;
  *(char **)(lVar14 + 0x28) =
       "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/ImageUtilities/FileFormats/hkDdsFileFormat.cpp"
  ;
  *(undefined8 *)(lVar14 + 0x30) = uVar17;
  FUN_00444c00(auStack_188);
LAB_00665a50:
  FUN_00446180(&local_a8);
  return uVar18;
}

