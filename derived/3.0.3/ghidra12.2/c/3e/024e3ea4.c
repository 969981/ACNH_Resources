
undefined8 FUN_024e3ea4(long param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  bool bVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 uVar10;
  short sVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  int iVar15;
  uint uVar16;
  int *piVar17;
  ulong uVar18;
  void *pvVar19;
  int iVar20;
  int iVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined8 *puVar24;
  int iVar25;
  char cVar26;
  bool bVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  int local_31c;
  undefined8 local_318;
  char *local_300;
  undefined8 local_2f8;
  undefined8 local_2f0;
  undefined *local_2e8;
  undefined8 local_2e0;
  undefined *local_2d8;
  undefined *puStack_2d0;
  int local_2c8;
  int iStack_2c4;
  undefined *local_2c0;
  int local_2b8;
  int iStack_2b4;
  undefined8 local_2b0;
  char *local_2a8;
  undefined8 local_2a0;
  undefined8 local_298;
  undefined8 local_290;
  undefined8 uStack_288;
  char local_280 [8];
  char *local_278;
  undefined *puStack_270;
  undefined4 local_264;
  undefined *local_260;
  undefined4 local_254;
  char *local_248;
  undefined *puStack_240;
  undefined4 local_234;
  undefined *local_230;
  undefined4 local_224;
  char *local_218;
  undefined *puStack_210;
  undefined4 local_204;
  undefined *local_200;
  undefined4 local_1f4;
  char *local_1e8;
  undefined *puStack_1e0;
  undefined4 local_1d4;
  undefined *local_1d0;
  undefined4 local_1c4;
  char *local_1b8;
  undefined *puStack_1b0;
  undefined4 local_1a4;
  undefined *local_1a0;
  undefined4 local_194;
  char *local_188;
  undefined *puStack_180;
  undefined4 local_174;
  undefined *local_170;
  undefined4 local_164;
  char *local_158;
  undefined *puStack_150;
  undefined4 local_144;
  undefined *local_140;
  undefined4 local_134;
  char *local_128;
  undefined *puStack_120;
  undefined8 local_118;
  undefined *puStack_110;
  undefined8 local_108;
  int local_100;
  int local_fc;
  undefined *local_f8;
  char *pcStack_f0;
  undefined8 local_e8;
  char *pcStack_e0;
  undefined8 local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  
  *(undefined8 *)(param_1 + 0xd18) = 0;
  *(undefined8 *)(param_1 + 0xd28) = 0;
  *(undefined8 *)(param_1 + 0xd40) = 0;
  *(undefined8 *)(param_1 + 0xcf0) = 0;
  *(undefined8 *)(param_1 + 0xcf8) = 0;
  *(undefined4 *)(param_1 + 0xd00) = 0;
  *(undefined8 *)(param_1 + 0xd50) = 0;
  *(undefined8 *)(param_1 + 0xd58) = 0;
  *(undefined8 *)(param_1 + 0xd60) = 0x6622bd46;
  *(undefined8 *)(param_1 + 0xd70) = 0;
  *(undefined8 *)(param_1 + 0xd88) = 0;
  *(undefined8 *)(param_1 + 0xd98) = 0;
  *(undefined8 *)(param_1 + 0xda0) = 0;
  if ((*(uint *)(param_1 + 0x1810) & 0xfffffff7) != 1) {
    return 0;
  }
  sVar11 = *(short *)PTR_DAT_04bb6298;
  if (sVar11 != -1) {
    uVar18 = (ulong)local_2b0 >> 0x20;
    local_2b0 = (undefined *)((ulong)local_2b0 & 0xffffffff00000000);
    puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar11 * 8);
    if (0xff < (uint)(int)sVar11) {
      puVar5 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar5 & 1) != 0) {
      local_2b0 = (undefined *)CONCAT44((int)uVar18,4);
      lVar22 = *(long *)PTR_DAT_04bb46b0;
      if (lVar22 != 0) {
        puVar23 = *(undefined8 **)(lVar22 + 0x10);
        if ((*(byte *)(lVar22 + 0x453) & 1) == 0) {
          lVar22 = (**(code **)(*(long *)*puVar23 + 0x38))();
          if (lVar22 == 0) goto switchD_024e3ff0_default;
          lVar22 = lVar22 + 0x70;
        }
        else if (((puVar23 == (undefined8 *)0x0) || ((long *)puVar23[0x26] == (long *)0x0)) ||
                (lVar22 = (**(code **)(*(long *)puVar23[0x26] + 0x38))(), lVar22 == 0))
        goto switchD_024e3ff0_default;
        switch((ulong)local_2b0 & 0xffffffff) {
        case 0:
          lVar22 = lVar22 + 0xe6c48;
          break;
        case 1:
          lVar22 = lVar22 + 0xe6cf0;
          break;
        case 2:
          lVar22 = lVar22 + 0xe6d60;
          break;
        case 3:
          lVar22 = lVar22 + 0xe6dd0;
          break;
        case 4:
          lVar22 = lVar22 + 0xe6e40;
          break;
        case 5:
          lVar22 = lVar22 + 0xe6eb0;
          break;
        case 6:
          lVar22 = lVar22 + 0xe6f20;
          break;
        default:
          goto switchD_024e3ff0_default;
        }
        if ((*(long **)(lVar22 + 0x28) == (long *)0x0) ||
           (puVar23 = (undefined8 *)**(long **)(lVar22 + 0x28), puVar23 == (undefined8 *)0x0)) {
          cVar26 = *(char *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x2c);
        }
        else {
          uVar18 = (**(code **)*puVar23)();
          cVar26 = *(char *)(*(long *)(lVar22 + 0x10) + *(long *)(lVar22 + 8) + 0x2c);
          if ((((uVar18 & 1) != 0) && (*(long *)(lVar22 + 0x28) != 0)) &&
             (puVar23 = *(undefined8 **)(*(long *)(lVar22 + 0x28) + 8), puVar23 != (undefined8 *)0x0
             )) {
            (**(code **)*puVar23)();
          }
        }
        local_d0 = (undefined *)CONCAT44(local_d0._4_4_,(int)cVar26);
        if (cVar26 != -1) {
          local_2b0 = PTR_DAT_04bb2020 + 0x10;
          local_2a8 = "VisitQuestFurnitureTrade";
          sVar11 = FUN_02196ed0(&local_d0,&local_2b0);
          if (sVar11 != 0) {
            return 0;
          }
        }
      }
    }
  }
switchD_024e3ff0_default:
  puVar2 = PTR_DAT_04bbc1a0;
  puVar8 = PTR_DAT_04bb2720;
  local_f8 = PTR_DAT_04bbc1a0 + 0x10;
  pcVar1 = PTR_DAT_04bb2010 + 0x10;
  local_e8 = 0;
  local_c8 = (undefined *)((ulong)local_c8._4_4_ << 0x20);
  local_d0 = PTR_DAT_04bbfe68 + 0x10;
  local_d8 = 0;
  lVar22 = *(long *)PTR_DAT_04bb2720;
  pcStack_f0 = pcVar1;
  pcStack_e0 = pcVar1;
  if (lVar22 == 0) {
    puVar23 = &DAT_055c04a0;
  }
  else {
    puVar23 = &DAT_055c04a0;
    if (*(long *)(lVar22 + 0x330) != 0) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      iVar12 = FUN_006bd550(*puVar23,0);
      puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar23 = &DAT_055c04a0;
      }
    }
  }
  local_c8 = (undefined *)CONCAT44(*(undefined4 *)(puVar23 + 7),(undefined4)local_c8);
  uVar10 = FUN_017baf44();
  local_c0 = CONCAT71(local_c0._1_7_,uVar10) & 0xffffffffffffff01;
  FUN_024e4d04(&local_2b0,0xc1100000,param_1);
  puVar3 = PTR_DAT_04bb5d40;
  local_2f8._0_4_ = *(int *)(PTR_DAT_04bb5d40 + 8);
  local_2f8._4_4_ = *(int *)(PTR_DAT_04bb5d40 + 0xc);
  local_300 = pcVar1;
  piVar17 = (int *)FUN_01a5190c(&local_d0,0,&local_2a8,&local_300);
  local_100 = *piVar17;
  local_fc = piVar17[1];
  if (((((short)*piVar17 == -2) || (iVar12 = FUN_0277d6c4(&local_100), iVar12 != 0x35ff)) ||
      (uVar18 = FUN_0277e294(&local_100), (uVar18 & 1) == 0)) ||
     (((int)local_2f8 != (int)local_2a0 || (local_2f8._4_4_ != local_2a0._4_4_)))) {
    FUN_024e4d04(&local_2b0,0,param_1);
    local_2f8._0_4_ = *(int *)(puVar3 + 8);
    local_2f8._4_4_ = *(int *)(puVar3 + 0xc);
    pcVar1 = PTR_DAT_04bb2010 + 0x10;
    local_300 = pcVar1;
    piVar17 = (int *)FUN_01a5190c(&local_d0,0,&local_2a8,&local_300);
    local_100 = *piVar17;
    local_fc = piVar17[1];
    if (((((short)*piVar17 == -2) ||
         ((iVar12 = FUN_0277d6c4(&local_100), iVar12 != 0x35ff ||
          (uVar18 = FUN_0277e294(&local_100), (uVar18 & 1) == 0)))) ||
        ((int)local_2f8 != (int)local_2a0)) || (local_2f8._4_4_ != local_2a0._4_4_)) {
      FUN_024e4d04(&local_2b0,0x41100000,param_1);
      local_2f8._0_4_ = *(int *)(puVar3 + 8);
      local_2f8._4_4_ = *(int *)(puVar3 + 0xc);
      local_300 = pcVar1;
      piVar17 = (int *)FUN_01a5190c(&local_d0,0,&local_2a8,&local_300);
      local_100 = *piVar17;
      local_fc = piVar17[1];
      if ((short)*piVar17 == -2) {
        return 0;
      }
      iVar12 = FUN_0277d6c4(&local_100);
      if (iVar12 != 0x35ff) {
        return 0;
      }
      uVar18 = FUN_0277e294(&local_100);
      if ((uVar18 & 1) == 0) {
        return 0;
      }
      if ((int)local_2f8 != (int)local_2a0) {
        return 0;
      }
      if (local_2f8._4_4_ != local_2a0._4_4_) {
        return 0;
      }
    }
  }
  iVar20 = local_2f8._4_4_;
  iVar12 = (int)local_2f8;
  iVar15 = (int)local_290;
  iVar21 = local_290._4_4_;
  puVar23 = &DAT_055c04a0;
  lVar22 = *(long *)puVar8;
  local_d8._0_4_ = (int)local_290;
  local_d8._4_4_ = local_290._4_4_;
  local_e8._0_4_ = (int)local_2f8;
  local_e8._4_4_ = local_2f8._4_4_;
  if ((lVar22 != 0) && (*(long *)(lVar22 + 0x330) != 0)) {
    puVar23 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
    iVar13 = FUN_006bd550(*puVar23,0);
    puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
    if (iVar13 != 0x758f7eaf) {
      puVar23 = &DAT_055c04a0;
    }
  }
  uVar18 = FUN_024e4f80(&local_f8,*(undefined4 *)(puVar23 + 7));
  if ((uVar18 & 1) == 0) {
    return 0;
  }
  local_2b0 = (undefined *)((ulong)local_2b0 & 0xffffffffffffff00);
  pcVar1 = puVar2 + 0x10;
  local_298 = 0;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  uStack_288 = 0;
  local_2a8 = pcVar1;
  local_2a0 = puVar2;
  local_290 = puVar2;
  pvVar19 = memset(local_280,0,0x158);
  local_264 = 0;
  local_254 = 0;
  local_234 = 0;
  local_224 = 0;
  local_204 = 0;
  local_1f4 = 0;
  local_1d4 = 0;
  local_1c4 = 0;
  local_1a4 = 0;
  local_194 = 0;
  local_174 = 0;
  local_164 = 0;
  local_144 = 0;
  local_134 = 0;
  local_108 = 0;
  local_118 = 0;
  local_278 = pcVar1;
  puStack_270 = puVar2;
  local_260 = puVar2;
  local_248 = pcVar1;
  puStack_240 = puVar2;
  local_230 = puVar2;
  local_218 = pcVar1;
  puStack_210 = puVar2;
  local_200 = puVar2;
  local_1e8 = pcVar1;
  puStack_1e0 = puVar2;
  local_1d0 = puVar2;
  local_1b8 = pcVar1;
  puStack_1b0 = puVar2;
  local_1a0 = puVar2;
  local_188 = pcVar1;
  puStack_180 = puVar2;
  local_170 = puVar2;
  local_158 = pcVar1;
  puStack_150 = puVar2;
  local_140 = puVar2;
  local_128 = pcVar1;
  puStack_120 = puVar2;
  puStack_110 = puVar2;
  if (*(long *)PTR_DAT_04bb5ce0 != 0) {
    lVar22 = *(long *)puVar8;
    if ((lVar22 != 0) && (*(long *)(lVar22 + 0x330) != 0)) {
      puVar23 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar22 + 0x338));
      pvVar19 = (void *)FUN_006bd550(*puVar23,0);
      if ((int)pvVar19 == 0x758f7eaf) {
        if (*(long *)puVar8 != 0) {
          lVar22 = *(long *)(*(long *)puVar8 + 0x330);
          if ((lVar22 != 0) && (*(int *)(lVar22 + 0x244) != 0)) {
            FUN_016e6b40();
            uVar14 = FUN_013837d0();
            puVar3 = PTR_DAT_04bbc1a0 + 0x10;
            puStack_2d0 = PTR_DAT_04bb2010 + 0x10;
            local_2c8 = (int)local_e8;
            iStack_2c4 = local_e8._4_4_;
            local_2b8 = (int)local_d8;
            iStack_2b4 = local_d8._4_4_;
            local_2d8 = puVar3;
            local_2c0 = puStack_2d0;
            pvVar19 = (void *)FUN_0149f110(&local_2b0,uVar14,2,&local_2d8);
            local_2d8 = puVar3;
            if ((char)local_2b0 != '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
  puVar9 = PTR_DAT_04bbc1a0;
  puVar3 = PTR_DAT_04bb2640;
  local_318 = 0;
  local_31c = 0;
  local_2e0 = 0;
  local_2f0 = 0;
  bVar27 = true;
  fVar32 = ((float)iVar12 * 5.0 + (float)iVar15 * 5.0 + 5.0) * 0.5;
  fVar33 = ((float)iVar20 * 5.0 + (float)iVar21 * 5.0 + 5.0) * 0.5;
  local_300 = pcVar1;
  local_2f8 = puVar2;
  local_2e8 = puVar2;
  iVar20 = 0;
  iVar12 = 0;
  do {
    lVar22 = *(long *)(param_1 + 0x68);
    local_100 = iVar20;
    iVar15 = FUN_006f0400(*(float *)(lVar22 + 0x278) - fVar32,*(float *)(lVar22 + 0x280) - fVar33,
                          pvVar19);
    uVar7 = iVar15 + 0x10000000U >> 0x1d;
    uVar16 = uVar7;
    if (!bVar27) {
      uVar16 = FUN_006f0400(*(float *)(lVar22 + 0x278) - fVar32,*(float *)(lVar22 + 0x280) - fVar33)
      ;
      if (uVar16 < (uint)(long)((float)uVar7 * 45.0 * 11930465.0)) {
        uVar16 = 7;
        if (uVar7 != 0) {
          uVar16 = uVar7 - 1;
        }
      }
      else {
        uVar16 = 0;
        if (uVar7 != 7) {
          uVar16 = uVar7 + 1;
        }
      }
    }
    local_d0 = (undefined *)CONCAT44(local_d0._4_4_,uVar16);
    iVar21 = (int)local_e8;
    iVar15 = local_e8._4_4_;
    iVar13 = (int)local_d8;
    iVar25 = local_d8._4_4_;
    switch(uVar16) {
    case 0:
      goto LAB_024e47b4;
    case 1:
      iVar21 = (int)local_e8 + 2;
      iVar13 = (int)local_d8 + 2;
      goto LAB_024e47b4;
    case 2:
      iVar21 = (int)local_e8 + 2;
      iVar13 = (int)local_d8 + 2;
      break;
    case 3:
      iVar21 = (int)local_e8 + 2;
      iVar15 = local_e8._4_4_ + -2;
      iVar13 = (int)local_d8 + 2;
      iVar25 = local_d8._4_4_ + -2;
      break;
    case 4:
      iVar15 = local_e8._4_4_ + -2;
      iVar25 = local_d8._4_4_ + -2;
      break;
    case 5:
      iVar21 = (int)local_e8 + -2;
      iVar15 = local_e8._4_4_ + -2;
      iVar13 = (int)local_d8 + -2;
      iVar25 = local_d8._4_4_ + -2;
      break;
    case 6:
      iVar21 = (int)local_e8 + -2;
      iVar13 = (int)local_d8 + -2;
      break;
    case 7:
      iVar21 = (int)local_e8 + -2;
      iVar13 = (int)local_d8 + -2;
LAB_024e47b4:
      iVar15 = local_e8._4_4_ + 2;
      iVar25 = local_d8._4_4_ + 2;
    }
    puVar23 = &DAT_055c04a0;
    local_2f0 = CONCAT44(iVar15,iVar21);
    local_2e0 = CONCAT44(iVar25,iVar13);
    if (local_100 == 0) {
      local_318 = CONCAT44(iVar21,iVar13);
      lVar22 = *(long *)puVar8;
      local_31c = iVar25;
      iVar12 = iVar15;
      if (lVar22 != 0) goto LAB_024e47e4;
LAB_024e4828:
      puVar24 = &DAT_055c04a0;
      iVar15 = iVar12;
    }
    else {
      lVar22 = *(long *)puVar8;
      iVar15 = iVar12;
      if (lVar22 == 0) goto LAB_024e4828;
LAB_024e47e4:
      iVar12 = iVar15;
      if (*(long *)(lVar22 + 0x330) == 0) goto LAB_024e4828;
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)puVar3 + 0x18))
                          (*(long **)puVar3,*(undefined4 *)(lVar22 + 0x338));
      iVar12 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
    uVar18 = FUN_024e5350(&local_300,&local_f8,*(undefined4 *)(puVar24 + 7));
    if ((uVar18 & 1) == 0) {
      return 0;
    }
    lVar22 = *(long *)puVar8;
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x330) == 0)) {
      puVar24 = &DAT_055c04a0;
    }
    else {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)puVar3 + 0x18))
                          (*(long **)puVar3,*(undefined4 *)(lVar22 + 0x338));
      iVar12 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
    uVar14 = *(undefined4 *)(puVar24 + 7);
    uVar18 = FUN_017baf44(uVar14);
    if ((uVar18 & 1) != 0) {
      local_d0 = puVar9 + 0x10;
      local_c0 = 0;
      local_c8 = PTR_DAT_04bb2010 + 0x10;
      local_b0 = 0;
      local_b8 = local_c8;
      FUN_017ba710(uVar14,&local_d0);
      if ((int)local_2f0 < (int)local_c0) {
        return 0;
      }
      if ((int)local_b0 < (int)local_2e0) {
        return 0;
      }
      if (local_2f0._4_4_ < local_c0._4_4_) {
        return 0;
      }
      if (local_b0._4_4_ < local_2e0._4_4_) {
        return 0;
      }
    }
    if (local_100 == 0) goto LAB_024e4bb0;
    fVar28 = (float)FUN_016e026c(0,*(long *)(param_1 + 0x68) + 0x278,0,0);
    lVar22 = *(long *)puVar8;
    if ((lVar22 == 0) || (*(long *)(lVar22 + 0x330) == 0)) {
      puVar24 = &DAT_055c04a0;
    }
    else {
      puVar24 = (undefined8 *)
                (**(code **)(**(long **)puVar3 + 0x18))
                          (*(long **)puVar3,*(undefined4 *)(lVar22 + 0x338));
      iVar12 = FUN_006bd550(*puVar24,0);
      puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar12 != 0x758f7eaf) {
        puVar24 = &DAT_055c04a0;
      }
    }
    fVar29 = (float)FUN_024e5c00(&local_300,*(undefined4 *)(puVar24 + 7));
    fVar28 = fVar28 - fVar29;
    fVar29 = -fVar28;
    if (0.0 <= fVar28) {
      fVar29 = fVar28;
    }
    if (fVar29 <= 3.0) {
      local_d0 = puVar9 + 0x10;
      local_c8 = PTR_DAT_04bb2010 + 0x10;
      fVar28 = (((float)local_318._4_4_ * 5.0 + (float)(int)local_318 * 5.0 + 5.0) * 0.5 +
               ((float)(int)local_2f0 * 5.0 + (float)(int)local_2e0 * 5.0 + 5.0) * 0.5) * 0.5;
      fVar30 = fVar28 + -4.0;
      fVar28 = fVar28 + 4.0;
      fVar29 = (((float)iVar15 * 5.0 + (float)local_31c * 5.0 + 5.0) * 0.5 +
               ((float)local_2f0._4_4_ * 5.0 + (float)local_2e0._4_4_ * 5.0 + 5.0) * 0.5) * 0.5;
      fVar31 = fVar29 + -4.0;
      fVar29 = fVar29 + 4.0;
      iVar21 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
      iVar13 = (int)((float)(int)fVar31 / 5.0) - (uint)(fVar31 < 0.0);
      iVar25 = (int)((float)(int)fVar28 / 5.0) - (uint)(fVar28 < 0.0);
      iVar6 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
      iVar12 = iVar21;
      if (iVar25 <= iVar21) {
        iVar12 = iVar25;
      }
      if (iVar21 <= iVar25) {
        iVar21 = iVar25;
      }
      iVar25 = iVar13;
      if (iVar6 <= iVar13) {
        iVar25 = iVar6;
      }
      if (iVar13 <= iVar6) {
        iVar13 = iVar6;
      }
      local_b0 = CONCAT44(iVar13,iVar21);
      lVar22 = *(long *)puVar8;
      local_c0 = CONCAT44(iVar25,iVar12);
      local_b8 = local_c8;
      if ((lVar22 == 0) || (*(long *)(lVar22 + 0x330) == 0)) {
        puVar24 = &DAT_055c04a0;
      }
      else {
        puVar24 = (undefined8 *)
                  (**(code **)(**(long **)puVar3 + 0x18))
                            (*(long **)puVar3,*(undefined4 *)(lVar22 + 0x338));
        iVar12 = FUN_006bd550(*puVar24,0);
        puVar24 = (undefined8 *)PTR_DAT_04bc3a80;
        if (iVar12 != 0x758f7eaf) {
          puVar24 = &DAT_055c04a0;
        }
      }
      iVar12 = *(int *)(puVar24 + 7);
      if (iVar12 == -0x24a26848) {
LAB_024e4b6c:
        if (*(long *)PTR_DAT_04bb27c8 != 0) {
          lVar22 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0x90);
joined_r0x024e4b9c:
          if ((lVar22 != 0) && (uVar18 = FUN_009721a0(lVar22,&local_d0,0), (uVar18 & 1) != 0)) {
            return 0;
          }
        }
      }
      else if (iVar12 == -0x17df00c3) {
        if (*(long *)PTR_DAT_04bb27c8 != 0) {
          lVar22 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
          goto joined_r0x024e4b9c;
        }
      }
      else if (iVar12 == 0x6622bd46) goto LAB_024e4b6c;
LAB_024e4bb0:
      lVar22 = *(long *)puVar8;
      if (*(long *)PTR_DAT_04bb5ce0 == 0) {
LAB_024e4c3c:
        if (lVar22 != 0) {
LAB_024e4c40:
          if (*(long *)(lVar22 + 0x330) != 0) {
            puVar23 = (undefined8 *)
                      (**(code **)(**(long **)puVar3 + 0x18))
                                (*(long **)puVar3,*(undefined4 *)(lVar22 + 0x338));
            iVar12 = FUN_006bd550(*puVar23,0);
            puVar23 = (undefined8 *)PTR_DAT_04bc3a80;
            if (iVar12 != 0x758f7eaf) {
              puVar23 = &DAT_055c04a0;
            }
          }
        }
      }
      else if (lVar22 != 0) {
        if (*(long *)(lVar22 + 0x330) != 0) {
          puVar24 = (undefined8 *)
                    (**(code **)(**(long **)puVar3 + 0x18))
                              (*(long **)puVar3,*(undefined4 *)(lVar22 + 0x338));
          iVar12 = FUN_006bd550(*puVar24,0);
          lVar22 = *(long *)puVar8;
          if (iVar12 != 0x758f7eaf) goto LAB_024e4c3c;
          if (lVar22 == 0) goto LAB_024e4648;
          if ((*(long *)(lVar22 + 0x330) != 0) && (*(int *)(*(long *)(lVar22 + 0x330) + 0x244) != 0)
             ) {
            pcVar1 = local_280 + (ulong)uVar16 * 0x30;
            if (7 < uVar16) {
              pcVar1 = local_280;
            }
            if (*pcVar1 != '\0') goto LAB_024e4660;
          }
        }
        goto LAB_024e4c40;
      }
LAB_024e4648:
      uVar18 = FUN_024e5df0(&local_300,&local_f8,*(undefined4 *)(puVar23 + 7),0);
      if ((uVar18 & 1) != 0) {
        *(int *)(param_1 + 0xd18) = (int)local_e8;
        *(int *)(param_1 + 0xd1c) = local_e8._4_4_;
        *(int *)(param_1 + 0xd50) = (int)local_2e0;
        *(int *)(param_1 + 0xd54) = local_2e0._4_4_;
        *(int *)(param_1 + 0xd28) = (int)local_d8;
        *(int *)(param_1 + 0xd2c) = local_d8._4_4_;
        *(int *)(param_1 + 0xd40) = (int)local_2f0;
        *(int *)(param_1 + 0xd44) = local_2f0._4_4_;
        uVar14 = FUN_006f0400(fVar32 - ((float)(int)local_2f0 * 5.0 +
                                       (float)(int)local_2e0 * 5.0 + 5.0) * 0.5,
                              fVar33 - ((float)local_2f0._4_4_ * 5.0 +
                                       (float)local_2e0._4_4_ * 5.0 + 5.0) * 0.5);
        *(undefined4 *)(param_1 + 0xd58) = uVar14;
        return 1;
      }
    }
LAB_024e4660:
    bVar27 = false;
    pvVar19 = (void *)0x0;
    bVar4 = iVar20 != 0;
    iVar20 = 1;
    iVar12 = iVar15;
    if (bVar4) {
      return 0;
    }
  } while( true );
}

