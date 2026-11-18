
void FUN_03335660(long *param_1)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  size_t __n;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  char **ppcVar10;
  ushort uVar11;
  undefined *puVar12;
  bool bVar13;
  undefined4 uVar14;
  char *pcVar15;
  ulong uVar16;
  undefined8 uVar17;
  int iVar18;
  undefined **ppuVar19;
  ulong uVar20;
  uint uVar21;
  ushort *puVar22;
  long lVar23;
  uint uVar24;
  long lVar25;
  long lVar26;
  long lVar27;
  long lVar28;
  undefined8 local_440;
  char *local_438;
  undefined4 local_430;
  char acStack_42c [4];
  undefined *local_428 [4];
  undefined8 local_408;
  undefined8 uStack_400;
  undefined *local_3f8;
  undefined2 local_3ee;
  undefined8 local_3d8;
  undefined8 uStack_3d0;
  undefined *local_3c8;
  undefined8 local_3a8;
  undefined8 uStack_3a0;
  undefined *local_398;
  undefined8 local_378;
  undefined8 uStack_370;
  undefined *local_368;
  undefined8 local_348;
  undefined8 uStack_340;
  undefined *local_338;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined *local_308;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined *local_2d8;
  undefined8 local_2b8;
  undefined8 local_2b0;
  undefined *local_2a8;
  undefined8 local_288;
  undefined8 local_280;
  undefined *local_278;
  uint local_258;
  undefined8 local_250;
  undefined8 local_248;
  undefined4 local_240;
  undefined **local_238;
  undefined2 local_230;
  undefined *local_228;
  char *local_220;
  undefined4 local_218;
  undefined2 local_214 [31];
  undefined2 local_1d6;
  undefined8 local_1d0;
  undefined **local_1c8;
  undefined4 local_1c0;
  undefined1 local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined4 local_1a8;
  undefined *local_1a0;
  undefined1 *local_198;
  undefined4 local_190;
  undefined1 local_18c [63];
  undefined1 local_14d;
  undefined *local_148;
  undefined1 *local_140;
  undefined4 local_138;
  undefined1 local_134 [63];
  undefined1 local_f5;
  undefined1 local_f0 [8];
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined8 local_70 [2];
  
  if (*(uint *)(param_1 + 0x61) < 0x1a &&
      (1 << (ulong)(*(uint *)(param_1 + 0x61) & 0x1f) & 0x3802000U) != 0) {
    uVar14 = FUN_03337a08();
    *(undefined4 *)(param_1 + 0x367) = uVar14;
    iVar18 = 4;
    switch((int)param_1[0x61]) {
    case 0xd:
      break;
    default:
      iVar18 = 2;
      break;
    case 0x17:
    case 0x19:
      iVar18 = 3;
      break;
    case 0x18:
      iVar18 = 5;
    }
    if (*(int *)((long)param_1 + 0x1b2c) != iVar18) goto switchD_0333571c_caseD_1;
LAB_03335818:
    lVar25 = param_1[0x6b];
    FUN_0328a0b0(lVar25,6,1,0);
    if (((*(ushort *)(lVar25 + 0x578) >> 5 & 1) == 0) ||
       ((*(ushort *)(lVar25 + 0x578) >> 4 & 1) == 0)) {
      uVar11 = *(ushort *)(lVar25 + 0x250) | 0x200;
    }
    else {
      uVar11 = *(ushort *)(lVar25 + 0x250) & 0xfdff;
    }
    local_440 = (undefined *)CONCAT44(local_440._4_4_,9);
    *(ushort *)(lVar25 + 0x250) = uVar11;
    FUN_0328a2b0(lVar25,0);
    if (param_1[0x6b] != 0) {
      FUN_032e4828(param_1[0x6b],0,1);
    }
    uVar24 = 2;
LAB_033358c4:
    local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,uVar24);
    local_440 = (undefined *)CONCAT44(local_440._4_4_,(int)param_1[0x367]);
LAB_033358d0:
    ppuVar19 = (undefined **)(&PTR_PTR_04b1c3f0)[(int)local_440];
    iVar18 = (int)local_1d0;
  }
  else {
    uVar14 = FUN_03337a08();
    *(undefined4 *)(param_1 + 0x367) = uVar14;
    if ((int)param_1[0x365] == 0) {
      if (*(char *)((long)param_1 + 0x1b34) != '\0') goto LAB_03335818;
switchD_0333571c_caseD_1:
      lVar25 = param_1[0x6b];
      if (lVar25 == 0) {
        iVar18 = 0;
      }
      else {
        iVar18 = *(int *)(lVar25 + 0x5e8);
      }
      uVar24 = (uint)(iVar18 - 1U < 2);
      local_440._0_4_ = iVar18;
      FUN_0328a0b0(lVar25,6,1,1);
      local_440 = (undefined *)CONCAT44(local_440._4_4_,9);
      *(ushort *)(lVar25 + 0x250) = *(ushort *)(lVar25 + 0x250) & 0xfdff;
      FUN_0328a2b0(lVar25,1);
      goto LAB_033358c4;
    }
    local_440 = (undefined *)CONCAT44(local_440._4_4_,*(undefined4 *)((long)param_1 + 0x1b2c));
    switch(*(undefined4 *)((long)param_1 + 0x1b2c)) {
    case 1:
      goto switchD_0333571c_caseD_1;
    case 2:
      lVar25 = param_1[0x6b];
      FUN_0328a0b0(lVar25,6,1,0);
      if (((*(ushort *)(lVar25 + 0x578) >> 5 & 1) == 0) ||
         ((*(ushort *)(lVar25 + 0x578) >> 4 & 1) == 0)) {
        uVar11 = *(ushort *)(lVar25 + 0x250) | 0x200;
      }
      else {
        uVar11 = *(ushort *)(lVar25 + 0x250) & 0xfdff;
      }
      local_440 = (undefined *)CONCAT44(local_440._4_4_,9);
      *(ushort *)(lVar25 + 0x250) = uVar11;
      FUN_0328a2b0(lVar25,0);
      if (param_1[0x6b] != 0) {
        FUN_032e4828(param_1[0x6b],0,1);
      }
      local_440 = (undefined *)CONCAT44(local_440._4_4_,(int)param_1[0x367]);
      local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,2);
      goto LAB_033358d0;
    case 3:
      lVar25 = param_1[0x6b];
      FUN_0328a0b0(lVar25,6,1,1);
      local_440._0_4_ = 9;
      *(ushort *)(lVar25 + 0x250) = *(ushort *)(lVar25 + 0x250) & 0xfdff;
      FUN_0328a2b0(lVar25,1);
      iVar18 = 0;
      if (param_1[0x6b] != 0) {
        iVar18 = *(int *)(param_1[0x6b] + 0x5e8);
      }
      local_440 = (undefined *)CONCAT44(local_440._4_4_,iVar18);
      if (iVar18 - 1U < 2) {
        uVar14 = 1;
        goto LAB_03336fdc;
      }
      if (iVar18 != 0) goto switchD_0333571c_default;
      local_440 = (undefined *)((ulong)local_440._4_4_ << 0x20);
      break;
    case 4:
      lVar25 = param_1[0x6b];
      FUN_0328a0b0(lVar25,6,1,1);
      local_440._0_4_ = 9;
      *(ushort *)(lVar25 + 0x250) = *(ushort *)(lVar25 + 0x250) & 0xfdff;
      FUN_0328a2b0(lVar25,1);
      iVar18 = 0;
      if (param_1[0x6b] != 0) {
        iVar18 = *(int *)(param_1[0x6b] + 0x5e8);
      }
      local_440 = (undefined *)CONCAT44(local_440._4_4_,iVar18);
      if (iVar18 - 1U < 2) {
        uVar14 = 3;
      }
      else {
        if (iVar18 != 0) goto switchD_0333571c_default;
        uVar14 = 2;
      }
LAB_03336fdc:
      local_440 = (undefined *)CONCAT44(local_440._4_4_,uVar14);
      break;
    default:
      goto switchD_0333571c_default;
    }
    ppuVar19 = &PTR_DAT_04b1c3d0;
    iVar18 = (int)local_440;
  }
  param_1[0x368] = (long)ppuVar19[iVar18];
switchD_0333571c_default:
  (**(code **)(*param_1 + 0x188))(param_1);
  FUN_03322410(param_1);
  puVar5 = PTR_DAT_04bc8e68;
  lVar25 = *(long *)PTR_DAT_04bc1118;
  local_438 = PTR_DAT_04bb2120;
  if (*(char **)(PTR_PTR_04bb2238 + 8) != (char *)0x0) {
    local_438 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  if (*local_438 != '\0') {
    local_440 = PTR_DAT_04bc8e68 + 0x10;
    FUN_032cb8e0(&local_1d0,&local_440,*(undefined8 *)(param_1[0x5e] + 0xf0));
  }
  lVar27 = 0;
  puVar2 = PTR_DAT_04bc8e78 + 0x10;
  puVar3 = PTR_DAT_04bc0840 + 0x10;
  do {
    uVar11 = *(ushort *)(param_1[0x368] + lVar27 * 2);
    if (uVar11 == 0) {
      local_1c8 = &local_80;
      local_80 = (undefined *)((ulong)local_80 & 0xffffffffffff0000);
      local_228 = *(undefined **)(*(long *)(param_1[lVar27 + 0x32a] + 0x20) + 0x18);
      local_438 = "T_00";
      local_440 = puVar5 + 0x10;
      local_1d0 = puVar2;
      local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
      FUN_032d67f0(&local_440,&local_1d0);
      lVar26 = param_1[lVar27 + 0x32a];
      if (lVar26 != 0) {
        FUN_0328a0b0(lVar26,6,1,0);
        if (((*(ushort *)(lVar26 + 0x578) >> 5 & 1) == 0) ||
           ((*(ushort *)(lVar26 + 0x578) >> 4 & 1) == 0)) {
          uVar11 = *(ushort *)(lVar26 + 0x250) | 0x200;
        }
        else {
          uVar11 = *(ushort *)(lVar26 + 0x250) & 0xfdff;
        }
        local_440 = (undefined *)CONCAT44(local_440._4_4_,9);
        uVar17 = 0;
        *(ushort *)(lVar26 + 0x250) = uVar11;
        goto LAB_033359b4;
      }
    }
    else {
      local_90._0_4_ = (uint)uVar11;
      local_430 = 0x20;
      local_3ee = 0;
      acStack_42c[0] = '\0';
      acStack_42c[1] = '\0';
      local_440 = puVar3;
      local_438 = acStack_42c;
      FUN_038d1340(&local_440,&DAT_04169b80,&local_90);
      local_220 = local_438;
      local_80 = *(undefined **)(*(long *)(param_1[lVar27 + 0x32a] + 0x20) + 0x18);
      local_228 = PTR_DAT_04bc8e78 + 0x10;
      local_1c8 = (undefined **)&DAT_040c1e5f;
      local_1d0 = PTR_DAT_04bc8e68 + 0x10;
      local_1d0 = (undefined *)FUN_0328b6d0(&local_80,&local_1d0,0);
      FUN_032d67f0(&local_1d0,&local_228);
      lVar28 = *(long *)(lVar25 + 0x20);
      lVar26 = param_1[lVar27 + 0x32a];
      uVar24 = (uint)uVar11;
      if ((*(uint *)(lVar28 + 0x106c) >> 8 & 1) == 0) {
LAB_03335aa8:
        if (((*(uint *)(lVar28 + 0x106c) >> 7 & 1) != 0) &&
           ((0x29 < uVar24 - 0x30 || ((1L << ((ulong)(uVar24 - 0x30) & 0x3f) & 0x3ff7dfe03ffU) == 0)
            ))) goto LAB_03335af4;
        (**(code **)(*(long *)(lVar28 + 0x1570) + 0x18))(lVar28 + 0x1570);
        uVar21 = (uint)**(ushort **)(lVar28 + 0x1578);
        if (uVar21 != 0) {
          if (uVar21 == uVar24) goto LAB_03335af4;
          puVar22 = *(ushort **)(lVar28 + 0x1578) + 2;
          uVar16 = 0;
          do {
            uVar20 = uVar16;
            if (puVar22[-1] == 0) {
              puVar22 = (ushort *)0x0;
              goto LAB_03335d14;
            }
            if (puVar22[-1] == uVar24) {
              puVar22 = (ushort *)0x1;
              goto LAB_03335d14;
            }
            if (*puVar22 == 0) {
              puVar22 = (ushort *)0x0;
              uVar20 = uVar20 + 1;
              goto LAB_03335d14;
            }
            if (*puVar22 == uVar24) {
              uVar20 = uVar20 + 1;
              puVar22 = (ushort *)0x1;
              goto LAB_03335d14;
            }
            if (uVar20 == 0x7fffe) {
              uVar20 = uVar20 + 2;
              goto LAB_03335d14;
            }
            puVar1 = puVar22 + 1;
            if (*puVar1 == 0) {
              puVar22 = (ushort *)0x0;
              uVar20 = uVar20 + 2;
              goto LAB_03335d14;
            }
            puVar22 = puVar22 + 3;
            uVar16 = uVar20 + 3;
          } while (*puVar1 != uVar24);
          puVar22 = (ushort *)0x1;
          uVar20 = uVar20 + 2;
LAB_03335d14:
          uVar24 = (uint)(uVar20 < 0x80000) & (uint)puVar22;
          FUN_0328a0b0(lVar26,6,1,uVar24 ^ 1);
          if (uVar24 == 0) goto LAB_03335d38;
          goto LAB_03335b08;
        }
        FUN_0328a0b0(lVar26,6,1,1);
LAB_03335d38:
        uVar17 = 1;
LAB_033359a4:
        uVar11 = *(ushort *)(lVar26 + 0x250) & 0xfdff;
      }
      else {
        bVar13 = false;
        lVar23 = 0;
        do {
          lVar4 = lVar23 + 4;
          if (*(ushort *)((long)&DAT_0418d22a + lVar23) == uVar24 ||
              *(ushort *)((long)&DAT_0418d22c + lVar23) == uVar24) {
            bVar13 = true;
          }
          lVar23 = lVar4;
        } while (lVar4 != 0x52c);
        if (bVar13) goto LAB_03335aa8;
LAB_03335af4:
        FUN_0328a0b0(lVar26,6,1,0);
LAB_03335b08:
        if (((*(ushort *)(lVar26 + 0x578) >> 5 & 1) != 0) &&
           ((*(ushort *)(lVar26 + 0x578) >> 4 & 1) != 0)) {
          uVar17 = 0;
          goto LAB_033359a4;
        }
        uVar17 = 0;
        uVar11 = *(ushort *)(lVar26 + 0x250) | 0x200;
      }
      local_1d0 = (undefined *)CONCAT44(local_1d0._4_4_,9);
      *(ushort *)(lVar26 + 0x250) = uVar11;
LAB_033359b4:
      FUN_0328a2b0(lVar26,uVar17);
    }
    lVar27 = lVar27 + 1;
  } while (lVar27 != 0x2c);
  ppuVar19 = &local_b0;
  if (&local_b0 <= local_f0 + 2) {
    ppuVar19 = (undefined **)(local_f0 + 2);
  }
  local_1d0 = *(undefined **)(*(long *)(param_1[0x357] + 0x20) + 0x18);
  __n = (long)ppuVar19 + (-0xe0 - (long)&local_1d0);
  puVar5 = PTR_DAT_04bc8e68 + 0x10;
  local_438 = "T_00";
  local_440 = puVar5;
  local_90 = (undefined *)FUN_0328b6d0(&local_1d0,&local_440,0);
  local_1bc = 0;
  local_1c0 = 0x20;
  local_1b8 = 0xffffffff;
  local_1b0 = 0xffffffff00000000;
  local_1a8 = 0xffffffff;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_138 = 0x40;
  local_f5 = 0;
  local_134[0] = 0;
  puVar3 = PTR_DAT_04bb4e10 + 0x10;
  local_b8 = 0;
  local_c0 = 0;
  local_c8 = 0;
  local_d0 = 0;
  local_d8 = 0;
  local_e0 = 0;
  local_e8 = 0;
  local_f0 = (undefined1  [8])0x0;
  local_1d0 = puVar3;
  local_1c8 = (undefined **)local_f0;
  local_1a0 = puVar2;
  local_198 = local_18c;
  local_148 = puVar2;
  local_140 = local_134;
  memset(local_f0,0,__n);
  local_218 = 0x20;
  local_1d6 = 0;
  local_214[0] = 0;
  puVar6 = PTR_DAT_04bb2020 + 0x10;
  puVar7 = PTR_DAT_04bc0840 + 0x10;
  local_438 = "ETC_Swkbd";
  puStack_78 = &DAT_040b541b;
  local_440 = puVar6;
  local_228 = puVar7;
  local_220 = (char *)local_214;
  local_80 = puVar6;
  FUN_006f50a0(&local_1d0,&local_440,&local_80,0);
  memset(&local_438,0,0x1e0);
  puVar12 = PTR_DAT_04bb2d78;
  local_408 = 0;
  uStack_400 = 0;
  puVar8 = PTR_DAT_04bb2d80 + 0x10;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_258 = 0xffffffff;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  puVar9 = PTR_DAT_04bb2d78 + 0x10;
  pcVar15 = local_220;
  local_440 = puVar9;
  local_428[0] = puVar8;
  local_3f8 = puVar8;
  local_3c8 = puVar8;
  local_398 = puVar8;
  local_368 = puVar8;
  local_338 = puVar8;
  local_308 = puVar8;
  local_2d8 = puVar8;
  local_2a8 = puVar8;
  local_278 = puVar8;
  local_238 = &local_228;
  pcVar15[0] = '\0';
  pcVar15[1] = '\0';
  local_230 = 0;
  (**(code **)(local_440 + 0x10))(&local_440);
  local_258 = 0xffffffff;
  local_250 = 0;
  local_248 = 0;
  local_240 = 0;
  pcVar15 = (char *)(**(code **)(local_1d0 + 0x18))(&local_1d0);
  lVar25 = (**(code **)(local_1d0 + 0x18))(&local_1d0);
  if (((lVar25 != 0) &&
      (uVar16 = (**(code **)(local_1d0 + 0x20))(&local_1d0), pcVar15 != (char *)0x0)) &&
     ((int)local_258 < 9)) {
    uVar24 = local_258 + 1;
    bVar13 = 9 < uVar24;
    uVar20 = (ulong)uVar24;
    ppcVar10 = &local_438 + uVar20 * 6;
    if (bVar13) {
      ppcVar10 = &local_438;
    }
    *ppcVar10 = pcVar15;
    ppuVar19 = local_428 + uVar20 * 6 + -1;
    if (bVar13) {
      ppuVar19 = (undefined **)&local_430;
    }
    local_258 = uVar24;
    *ppuVar19 = (undefined *)(lVar25 + (uVar16 & 0xffffffff) * 2);
    ppuVar19 = local_428 + uVar20 * 6;
    if (bVar13) {
      ppuVar19 = local_428;
    }
    *ppuVar19 = PTR_DAT_04bb2d80 + 0x10;
  }
  (**(code **)(local_440 + 0x18))(&local_440);
  FUN_006f1490(&local_440);
  FUN_032d67f0(&local_90,&local_228);
  local_1d0 = *(undefined **)(*(long *)(param_1[0x358] + 0x20) + 0x18);
  local_438 = "T_00";
  local_440 = puVar5;
  local_90 = (undefined *)FUN_0328b6d0(&local_1d0,&local_440,0);
  local_1b0 = 0xffffffff00000000;
  local_1c0 = 0x20;
  local_1bc = 0;
  local_1b8 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  local_138 = 0x40;
  local_f5 = 0;
  local_134[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = (undefined1  [8])0x0;
  local_e8 = 0;
  local_1d0 = puVar3;
  local_1c8 = (undefined **)local_f0;
  local_1a0 = puVar2;
  local_198 = local_18c;
  local_148 = puVar2;
  local_140 = local_134;
  memset(local_f0,0,__n);
  local_218 = 0x20;
  local_1d6 = 0;
  local_214[0] = 0;
  local_438 = "ETC_Swkbd";
  puStack_78 = &DAT_040b541b;
  local_440 = puVar6;
  local_228 = puVar7;
  local_220 = (char *)local_214;
  local_80 = puVar6;
  FUN_006f50a0(&local_1d0,&local_440,&local_80,0);
  memset(&local_438,0,0x1e0);
  local_238 = &local_228;
  local_258 = 0xffffffff;
  local_240 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_250 = 0;
  local_248 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_220[0] = '\0';
  local_220[1] = '\0';
  local_230 = 0;
  local_440 = puVar9;
  local_428[0] = puVar8;
  local_3f8 = puVar8;
  local_3c8 = puVar8;
  local_398 = puVar8;
  local_368 = puVar8;
  local_338 = puVar8;
  local_308 = puVar8;
  local_2d8 = puVar8;
  local_2a8 = puVar8;
  local_278 = puVar8;
  (**(code **)(puVar12 + 0x20))(&local_440);
  local_258 = 0xffffffff;
  local_240 = 0;
  local_250 = 0;
  local_248 = 0;
  pcVar15 = (char *)(**(code **)(local_1d0 + 0x18))(&local_1d0);
  lVar25 = (**(code **)(local_1d0 + 0x18))(&local_1d0);
  if (((lVar25 != 0) &&
      (uVar16 = (**(code **)(local_1d0 + 0x20))(&local_1d0), pcVar15 != (char *)0x0)) &&
     ((int)local_258 < 9)) {
    uVar24 = local_258 + 1;
    bVar13 = 9 < uVar24;
    uVar20 = (ulong)uVar24;
    ppcVar10 = &local_438 + uVar20 * 6;
    if (bVar13) {
      ppcVar10 = &local_438;
    }
    *ppcVar10 = pcVar15;
    ppuVar19 = local_428 + uVar20 * 6 + -1;
    if (bVar13) {
      ppuVar19 = (undefined **)&local_430;
    }
    local_258 = uVar24;
    *ppuVar19 = (undefined *)(lVar25 + (uVar16 & 0xffffffff) * 2);
    ppuVar19 = local_428 + uVar20 * 6;
    if (bVar13) {
      ppuVar19 = local_428;
    }
    *ppuVar19 = PTR_DAT_04bb2d80 + 0x10;
  }
  (**(code **)(local_440 + 0x18))(&local_440);
  FUN_006f1490(&local_440);
  FUN_032d67f0(&local_90,&local_228);
  local_1d0 = *(undefined **)(*(long *)(param_1[0x359] + 0x20) + 0x18);
  puVar5 = PTR_DAT_04bc8e68 + 0x10;
  local_438 = "T_00";
  local_440 = puVar5;
  local_90 = (undefined *)FUN_0328b6d0(&local_1d0,&local_440,0);
  local_1c0 = 0x20;
  local_1bc = 0;
  local_1b8 = 0xffffffff;
  local_1b0 = 0xffffffff00000000;
  local_1a8 = 0xffffffff;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  puVar2 = PTR_DAT_04bb2bc0 + 0x10;
  local_138 = 0x40;
  local_f5 = 0;
  local_134[0] = 0;
  puVar3 = PTR_DAT_04bb4e10 + 0x10;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = (undefined1  [8])0x0;
  local_e8 = 0;
  local_1d0 = puVar3;
  local_1c8 = (undefined **)local_f0;
  local_1a0 = puVar2;
  local_198 = local_18c;
  local_148 = puVar2;
  local_140 = local_134;
  memset(local_f0,0,__n);
  local_218 = 0x20;
  local_1d6 = 0;
  local_214[0] = 0;
  puVar6 = PTR_DAT_04bc0840 + 0x10;
  puVar7 = PTR_DAT_04bb2020 + 0x10;
  local_438 = "ETC_Swkbd";
  puStack_78 = &DAT_040b541b;
  local_440 = puVar7;
  local_228 = puVar6;
  local_220 = (char *)local_214;
  local_80 = puVar7;
  FUN_006f50a0(&local_1d0,&local_440,&local_80,0);
  memset(&local_438,0,0x1e0);
  puVar12 = PTR_DAT_04bb2d78;
  local_258 = 0xffffffff;
  local_250 = 0;
  local_248 = 0;
  puVar8 = PTR_DAT_04bb2d80 + 0x10;
  local_240 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  puVar9 = PTR_DAT_04bb2d78 + 0x10;
  local_220[0] = '\0';
  local_220[1] = '\0';
  local_230 = 0;
  local_440 = puVar9;
  local_428[0] = puVar8;
  local_3f8 = puVar8;
  local_3c8 = puVar8;
  local_398 = puVar8;
  local_368 = puVar8;
  local_338 = puVar8;
  local_308 = puVar8;
  local_2d8 = puVar8;
  local_2a8 = puVar8;
  local_278 = puVar8;
  local_238 = &local_228;
  (**(code **)(PTR_DAT_04bb2d78 + 0x20))(&local_440);
  local_258 = 0xffffffff;
  local_240 = 0;
  local_250 = 0;
  local_248 = 0;
  pcVar15 = (char *)(**(code **)(local_1d0 + 0x18))(&local_1d0);
  lVar25 = (**(code **)(local_1d0 + 0x18))(&local_1d0);
  if (((lVar25 != 0) &&
      (uVar16 = (**(code **)(local_1d0 + 0x20))(&local_1d0), pcVar15 != (char *)0x0)) &&
     ((int)local_258 < 9)) {
    uVar24 = local_258 + 1;
    bVar13 = 9 < uVar24;
    uVar20 = (ulong)uVar24;
    ppcVar10 = &local_438 + uVar20 * 6;
    if (bVar13) {
      ppcVar10 = &local_438;
    }
    *ppcVar10 = pcVar15;
    ppuVar19 = local_428 + uVar20 * 6 + -1;
    if (bVar13) {
      ppuVar19 = (undefined **)&local_430;
    }
    local_258 = uVar24;
    *ppuVar19 = (undefined *)(lVar25 + (uVar16 & 0xffffffff) * 2);
    ppuVar19 = local_428 + uVar20 * 6;
    if (bVar13) {
      ppuVar19 = local_428;
    }
    *ppuVar19 = PTR_DAT_04bb2d80 + 0x10;
  }
  (**(code **)(local_440 + 0x18))(&local_440);
  FUN_006f1490(&local_440);
  FUN_032d67f0(&local_90,&local_228);
  local_1d0 = *(undefined **)(*(long *)(param_1[0x35a] + 0x20) + 0x18);
  local_438 = "T_00";
  local_440 = puVar5;
  local_90 = (undefined *)FUN_0328b6d0(&local_1d0,&local_440,0);
  local_1b0 = 0xffffffff00000000;
  local_1c0 = 0x20;
  local_1bc = 0;
  local_1b8 = 0xffffffff;
  local_1a8 = 0xffffffff;
  local_190 = 0x40;
  local_14d = 0;
  local_18c[0] = 0;
  local_138 = 0x40;
  local_f5 = 0;
  local_134[0] = 0;
  local_c0 = 0;
  local_b8 = 0;
  local_d0 = 0;
  local_c8 = 0;
  local_e0 = 0;
  local_d8 = 0;
  local_f0 = (undefined1  [8])0x0;
  local_e8 = 0;
  local_1d0 = puVar3;
  local_1c8 = (undefined **)local_f0;
  local_1a0 = puVar2;
  local_198 = local_18c;
  local_148 = puVar2;
  local_140 = local_134;
  memset(local_f0,0,__n);
  local_218 = 0x20;
  local_1d6 = 0;
  local_214[0] = 0;
  local_438 = "ETC_Swkbd";
  puStack_78 = &DAT_040b541b;
  local_440 = puVar7;
  local_228 = puVar6;
  local_220 = (char *)local_214;
  local_80 = puVar7;
  FUN_006f50a0(&local_1d0,&local_440,&local_80,0);
  memset(&local_438,0,0x1e0);
  local_238 = &local_228;
  local_258 = 0xffffffff;
  local_240 = 0;
  local_408 = 0;
  uStack_400 = 0;
  local_250 = 0;
  local_248 = 0;
  local_3d8 = 0;
  uStack_3d0 = 0;
  local_3a8 = 0;
  uStack_3a0 = 0;
  local_378 = 0;
  uStack_370 = 0;
  local_348 = 0;
  uStack_340 = 0;
  local_318 = 0;
  uStack_310 = 0;
  local_2e8 = 0;
  uStack_2e0 = 0;
  local_2b8 = 0;
  local_2b0 = 0;
  local_288 = 0;
  local_280 = 0;
  local_220[0] = '\0';
  local_220[1] = '\0';
  local_230 = 0;
  local_440 = puVar9;
  local_428[0] = puVar8;
  local_3f8 = puVar8;
  local_3c8 = puVar8;
  local_398 = puVar8;
  local_368 = puVar8;
  local_338 = puVar8;
  local_308 = puVar8;
  local_2d8 = puVar8;
  local_2a8 = puVar8;
  local_278 = puVar8;
  (**(code **)(puVar12 + 0x20))(&local_440);
  local_258 = 0xffffffff;
  local_240 = 0;
  local_250 = 0;
  local_248 = 0;
  pcVar15 = (char *)(**(code **)(local_1d0 + 0x18))(&local_1d0);
  lVar25 = (**(code **)(local_1d0 + 0x18))(&local_1d0);
  if (((lVar25 != 0) &&
      (uVar16 = (**(code **)(local_1d0 + 0x20))(&local_1d0), pcVar15 != (char *)0x0)) &&
     ((int)local_258 < 9)) {
    uVar24 = local_258 + 1;
    bVar13 = 9 < uVar24;
    uVar20 = (ulong)uVar24;
    ppcVar10 = &local_438 + uVar20 * 6;
    if (bVar13) {
      ppcVar10 = &local_438;
    }
    *ppcVar10 = pcVar15;
    ppuVar19 = local_428 + uVar20 * 6 + -1;
    if (bVar13) {
      ppuVar19 = (undefined **)&local_430;
    }
    local_258 = uVar24;
    *ppuVar19 = (undefined *)(lVar25 + (uVar16 & 0xffffffff) * 2);
    ppuVar19 = local_428 + uVar20 * 6;
    if (bVar13) {
      ppuVar19 = local_428;
    }
    *ppuVar19 = PTR_DAT_04bb2d80 + 0x10;
  }
  (**(code **)(local_440 + 0x18))(&local_440);
  FUN_006f1490(&local_440);
  FUN_032d67f0(&local_90,&local_228);
  FUN_033227f8(param_1);
  puVar2 = PTR_DAT_04bc8e78;
  puVar5 = PTR_DAT_04bc8e68;
  switch((int)param_1[0x61]) {
  case 0xb:
    local_1c8 = (undefined **)&DAT_0416971a;
    local_228 = *(undefined **)(*(long *)(param_1[0x35e] + 0x20) + 0x18);
    local_1d0 = PTR_DAT_04bc8e78 + 0x10;
    local_440 = PTR_DAT_04bc8e68 + 0x10;
    local_438 = "T_00";
    local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
    ppuVar19 = (undefined **)&local_1d0;
    goto LAB_03336e28;
  default:
    local_228 = *(undefined **)(*(long *)(param_1[0x35b] + 0x20) + 0x18);
    puVar3 = PTR_DAT_04bc8e78 + 0x10;
    local_1c8 = (undefined **)&DAT_041692f6;
    puVar6 = PTR_DAT_04bc8e68 + 0x10;
    local_438 = "T_00";
    local_440 = puVar6;
    local_1d0 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
    FUN_032d67f0(&local_440,&local_1d0);
    local_220 = "#";
    local_438 = "T_00";
    local_80 = *(undefined **)(*(long *)(param_1[0x35c] + 0x20) + 0x18);
    local_440 = puVar6;
    local_228 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_80,&local_440,0);
    FUN_032d67f0(&local_440,&local_228);
    puStack_78 = &DAT_041691b4;
    local_438 = "T_00";
    local_90 = *(undefined **)(*(long *)(param_1[0x35d] + 0x20) + 0x18);
    local_440 = puVar6;
    local_80 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_90,&local_440,0);
    FUN_032d67f0(&local_440,&local_80);
    lVar25 = param_1[0x35e];
    puStack_88 = &DAT_04169560;
    break;
  case 0xd:
    local_228 = *(undefined **)(*(long *)(param_1[0x35b] + 0x20) + 0x18);
    puVar3 = PTR_DAT_04bc8e78 + 0x10;
    local_1c8 = (undefined **)&DAT_041693ac;
    puVar6 = PTR_DAT_04bc8e68 + 0x10;
    local_438 = "T_00";
    local_440 = puVar6;
    local_1d0 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
    FUN_032d67f0(&local_440,&local_1d0);
    local_220 = &DAT_04169bc4;
    local_438 = "T_00";
    local_80 = *(undefined **)(*(long *)(param_1[0x35c] + 0x20) + 0x18);
    local_440 = puVar6;
    local_228 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_80,&local_440,0);
    FUN_032d67f0(&local_440,&local_228);
    puStack_78 = &DAT_04169134;
    local_438 = "T_00";
    local_90 = *(undefined **)(*(long *)(param_1[0x35d] + 0x20) + 0x18);
    local_440 = puVar6;
    local_80 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_90,&local_440,0);
    FUN_032d67f0(&local_440,&local_80);
    lVar25 = param_1[0x35e];
    puStack_88 = &DAT_0416971a;
    break;
  case 0x17:
    local_228 = *(undefined **)(*(long *)(param_1[0x35b] + 0x20) + 0x18);
    puVar3 = PTR_DAT_04bc8e78 + 0x10;
    local_1c8 = (undefined **)&DAT_04169b62;
    puVar6 = PTR_DAT_04bc8e68 + 0x10;
    local_438 = "T_00";
    local_440 = puVar6;
    local_1d0 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
    FUN_032d67f0(&local_440,&local_1d0);
    local_220 = &DAT_04169a02;
    local_438 = "T_00";
    local_80 = *(undefined **)(*(long *)(param_1[0x35c] + 0x20) + 0x18);
    local_440 = puVar6;
    local_228 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_80,&local_440,0);
    FUN_032d67f0(&local_440,&local_228);
    lVar25 = param_1[0x35d];
    puStack_78 = &DAT_041691a2;
    goto LAB_03336df8;
  case 0x18:
    local_228 = *(undefined **)(*(long *)(param_1[0x35b] + 0x20) + 0x18);
    puVar2 = PTR_DAT_04bc8e78 + 0x10;
    local_1c8 = (undefined **)&DAT_04169a02;
    puVar3 = PTR_DAT_04bc8e68 + 0x10;
    local_438 = "T_00";
    local_440 = puVar3;
    local_1d0 = puVar2;
    local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
    FUN_032d67f0(&local_440,&local_1d0);
    local_220 = &DAT_04169ad8;
    local_438 = "T_00";
    local_80 = *(undefined **)(*(long *)(param_1[0x35c] + 0x20) + 0x18);
    local_440 = puVar3;
    local_228 = puVar2;
    local_440 = (undefined *)FUN_0328b6d0(&local_80,&local_440,0);
    FUN_032d67f0(&local_440,&local_228);
    puStack_78 = &DAT_041691a8;
    local_438 = "T_00";
    local_90 = *(undefined **)(*(long *)(param_1[0x35d] + 0x20) + 0x18);
    local_440 = puVar3;
    local_80 = puVar2;
    local_440 = (undefined *)FUN_0328b6d0(&local_90,&local_440,0);
    FUN_032d67f0(&local_440,&local_80);
    puStack_88 = &DAT_0416937a;
    local_438 = "T_00";
    local_a0 = *(undefined **)(*(long *)(param_1[0x35e] + 0x20) + 0x18);
    local_440 = puVar3;
    local_90 = puVar2;
    local_440 = (undefined *)FUN_0328b6d0(&local_a0,&local_440,0);
    FUN_032d67f0(&local_440,&local_90);
    puStack_98 = &DAT_04169b68;
    local_438 = "T_00";
    local_b0 = *(undefined **)(*(long *)(param_1[0x35f] + 0x20) + 0x18);
    local_440 = puVar3;
    local_a0 = puVar2;
    local_440 = (undefined *)FUN_0328b6d0(&local_b0,&local_440,0);
    ppuVar19 = &local_a0;
    goto LAB_03336e28;
  case 0x19:
    local_228 = *(undefined **)(*(long *)(param_1[0x35b] + 0x20) + 0x18);
    puVar3 = PTR_DAT_04bc8e78 + 0x10;
    local_1c8 = (undefined **)&DAT_041691ae;
    puVar6 = PTR_DAT_04bc8e68 + 0x10;
    local_438 = "T_00";
    local_440 = puVar6;
    local_1d0 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_228,&local_440,0);
    FUN_032d67f0(&local_440,&local_1d0);
    local_220 = &DAT_04169038;
    local_438 = "T_00";
    local_80 = *(undefined **)(*(long *)(param_1[0x35c] + 0x20) + 0x18);
    local_440 = puVar6;
    local_228 = puVar3;
    local_440 = (undefined *)FUN_0328b6d0(&local_80,&local_440,0);
    FUN_032d67f0(&local_440,&local_228);
    lVar25 = param_1[0x35d];
    puStack_78 = &DAT_041695de;
LAB_03336df8:
    local_440 = puVar5 + 0x10;
    local_80 = puVar2 + 0x10;
    local_438 = "T_00";
    local_90 = *(undefined **)(*(long *)(lVar25 + 0x20) + 0x18);
    local_440 = (undefined *)FUN_0328b6d0(&local_90,&local_440,0);
    ppuVar19 = &local_80;
    goto LAB_03336e28;
  }
  local_90 = puVar2 + 0x10;
  local_440 = puVar5 + 0x10;
  local_438 = "T_00";
  local_a0 = *(undefined **)(*(long *)(lVar25 + 0x20) + 0x18);
  local_440 = (undefined *)FUN_0328b6d0(&local_a0,&local_440,0);
  ppuVar19 = &local_90;
LAB_03336e28:
  FUN_032d67f0(&local_440,ppuVar19);
  if ((int)param_1[0x365] == 0) {
    if (*(char *)((long)param_1 + 0x1b34) == '\0') {
      puStack_a8 = &DAT_04169712;
      lVar25 = *(long *)(param_1[0x356] + 0x20);
    }
    else if ((int)param_1[0x61] == 0xb) {
      lVar25 = *(long *)(param_1[0x356] + 0x20);
      puStack_a8 = &DAT_0416989e;
    }
    else {
      lVar25 = *(long *)(param_1[0x356] + 0x20);
      puStack_a8 = &DAT_041692f6;
    }
    local_b0 = PTR_DAT_04bc8e78 + 0x10;
    local_70[0] = *(undefined8 *)(lVar25 + 0x18);
    local_440 = puVar5 + 0x10;
    local_438 = "T_00";
    local_440 = (undefined *)FUN_0328b6d0(local_70,&local_440,0);
    FUN_032d67f0(&local_440,&local_b0);
  }
  return;
}

