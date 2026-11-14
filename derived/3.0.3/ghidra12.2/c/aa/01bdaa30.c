
int FUN_01bdaa30(int *param_1,long *param_2)

{
  ushort *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  undefined **ppuVar5;
  ulong uVar6;
  long lVar7;
  ushort uVar8;
  void *pvVar9;
  bool bVar10;
  long lVar11;
  void *pvVar12;
  int iVar13;
  ulong uVar14;
  long *plVar15;
  uint uVar16;
  int iVar17;
  ushort *puVar18;
  ushort uVar19;
  ushort *puVar20;
  long lVar21;
  ushort *puVar22;
  int iVar23;
  undefined *local_378;
  char *pcStack_370;
  undefined **local_368;
  long local_360 [2];
  undefined *local_350 [4];
  undefined8 local_330;
  undefined8 uStack_328;
  undefined *local_320;
  undefined8 local_300;
  undefined8 uStack_2f8;
  undefined *local_2f0;
  undefined8 local_2d0;
  undefined8 uStack_2c8;
  undefined *local_2c0;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined *local_290;
  undefined8 local_270;
  undefined8 uStack_268;
  undefined *local_260;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined *local_230;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined *local_200;
  undefined8 local_1e0;
  undefined8 uStack_1d8;
  undefined *local_1d0;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined *local_1a0;
  uint local_180;
  undefined8 local_178;
  undefined8 local_170;
  undefined8 local_168;
  char local_160;
  undefined *local_158;
  void *local_150;
  undefined4 local_148;
  undefined1 local_144;
  undefined8 local_140;
  undefined8 local_138;
  undefined4 local_130;
  undefined *local_128;
  undefined1 *local_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined *local_d0;
  undefined1 *local_c8;
  undefined4 local_c0;
  undefined1 local_bc [63];
  undefined1 local_7d;
  void *local_78;
  int local_6c;
  
  param_1[7] = 0;
  param_1[8] = 0;
  memset(local_360,0,0x1e0);
  local_368 = &PTR_LAB_04a3cd90;
  local_330 = 0;
  uStack_328 = 0;
  local_300 = 0;
  uStack_2f8 = 0;
  puVar2 = PTR_DAT_04bb2d80 + 0x10;
  local_2d0 = 0;
  uStack_2c8 = 0;
  local_1b0 = 0;
  local_1a8 = 0;
  local_180 = 0xffffffff;
  local_178 = 0;
  local_138 = 0xffffffff00000000;
  local_120 = local_114;
  local_170 = 0;
  local_168 = 0;
  local_160 = '\0';
  local_150 = (void *)0x0;
  local_148 = 0;
  local_144 = 0;
  local_140 = 0xffffffff;
  local_130 = 0xffffffff;
  local_118 = 0x40;
  local_d5 = 0;
  local_114[0] = 0;
  local_2a0 = 0;
  uStack_298 = 0;
  local_270 = 0;
  uStack_268 = 0;
  local_240 = 0;
  uStack_238 = 0;
  local_210 = 0;
  uStack_208 = 0;
  local_1e0 = 0;
  uStack_1d8 = 0;
  local_128 = PTR_DAT_04bb2bc0 + 0x10;
  local_c8 = local_bc;
  local_bc[0] = 0;
  local_c0 = 0x40;
  local_7d = 0;
  lVar7 = param_2[2];
  local_158 = PTR_DAT_04bb2e00 + 0x10;
  local_78 = (void *)0x0;
  if ((int)lVar7 == 0) {
    return 0;
  }
  iVar23 = 0;
  puVar3 = PTR_DAT_04bb2020 + 0x10;
  local_350[0] = puVar2;
  local_320 = puVar2;
  local_2f0 = puVar2;
  local_2c0 = puVar2;
  local_290 = puVar2;
  local_260 = puVar2;
  local_230 = puVar2;
  local_200 = puVar2;
  local_1d0 = puVar2;
  local_1a0 = puVar2;
  local_d0 = local_128;
LAB_01bdabbc:
  iVar13 = *(int *)((long)param_2 + 0xc) + iVar23;
  iVar17 = 0;
  if ((int)param_2[1] <= iVar13) {
    iVar17 = (int)param_2[1];
  }
  puVar1 = (ushort *)(*param_2 + (long)(iVar13 - iVar17) * 8);
  if (*param_1 == 0xd) {
    uVar16 = *puVar1 + 0x5400;
    if ((uVar16 >> 2 & 0x3fff) < 0xae9) {
      uVar16 = (uVar16 & 0xffff) / 0x24c;
      local_378 = (undefined *)CONCAT44(local_378._4_4_,uVar16);
      uVar16 = uVar16 - 2;
      if (uVar16 < 0x11) {
        local_6c = *(int *)(&DAT_0417819c + (long)(int)uVar16 * 4);
      }
      else {
        local_6c = 0;
      }
      plVar15 = *(long **)(param_1 + 2);
      iVar13 = (int)plVar15[2];
      if (0 < iVar13) {
        uVar14 = (ulong)*(int *)((long)plVar15 + 0xc);
        lVar21 = *plVar15 + uVar14 * 4;
        do {
          uVar16 = 0;
          iVar17 = 0;
          if ((int)plVar15[1] <= (int)uVar14) {
            iVar17 = (int)plVar15[1];
          }
          puVar22 = (ushort *)(lVar21 + (long)iVar17 * -4);
          if ((*puVar22 + 0x5400 >> 2 & 0x3fff) < 0xae9) {
            uVar16 = (*puVar22 + 0x5400 & 0xffff) / 0x24c;
          }
          if (uVar16 - 2 < 0x11) {
            iVar17 = *(int *)(&DAT_0417819c + (long)(int)(uVar16 - 2) * 4);
          }
          else {
            iVar17 = 0;
          }
          local_378 = (undefined *)CONCAT44(local_378._4_4_,iVar17);
          if (iVar17 == local_6c) goto LAB_01bdad30;
          iVar13 = iVar13 + -1;
          lVar21 = lVar21 + 4;
          uVar14 = (ulong)((int)uVar14 + 1);
        } while (iVar13 != 0);
      }
    }
  }
  else {
    plVar15 = *(long **)(param_1 + 2);
    iVar13 = (int)plVar15[2];
    if (0 < iVar13) {
      uVar14 = (ulong)*(int *)((long)plVar15 + 0xc);
      lVar21 = *plVar15 + uVar14 * 4;
      do {
        iVar17 = 0;
        if ((int)plVar15[1] <= (int)uVar14) {
          iVar17 = (int)plVar15[1];
        }
        puVar22 = (ushort *)(lVar21 + (long)iVar17 * -4);
        if ((uint)*puVar22 == (uint)*puVar1) goto LAB_01bdad30;
        iVar13 = iVar13 + -1;
        lVar21 = lVar21 + 4;
        uVar14 = (ulong)((int)uVar14 + 1);
      } while (iVar13 != 0);
    }
  }
  goto LAB_01bdabb0;
LAB_01bdad30:
  pcStack_370 = "STR_Mailcheck";
  uVar19 = puVar22[1];
  local_378 = puVar3;
  pvVar9 = local_150;
  if (local_150 == (void *)0x0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    if (lVar21 == 0) {
      pvVar12 = malloc(0x1000);
      pvVar9 = local_150;
    }
    else {
      plVar15 = *(long **)PTR_DAT_04bc08b8;
      if (plVar15 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar15 = (long *)(lVar21 + 8);
        if (lVar11 != 0) {
          plVar15 = (long *)(lVar11 + 0xa8);
        }
        plVar15 = (long *)*plVar15;
        pvVar9 = local_150;
        if (plVar15 == (long *)0x0) goto LAB_01bdadd0;
      }
      pvVar12 = (void *)(**(code **)(*plVar15 + 0x30))(plVar15,0x1000,8);
      pvVar9 = local_150;
    }
    local_150 = pvVar12;
    if (local_150 != (void *)0x0) {
      local_148 = 0x800;
      local_78 = local_150;
      (**(code **)(local_158 + 0x38))(&local_158);
      pvVar9 = local_150;
    }
  }
LAB_01bdadd0:
  local_150 = pvVar9;
  FUN_006f5290(&local_158,&local_378,uVar19);
  (*(code *)local_368[2])(&local_368);
  local_180 = 0xffffffff;
  local_178 = 0;
  local_170 = 0;
  local_168 = local_168 & 0xffffffff00000000;
  lVar21 = (**(code **)(local_158 + 0x18))(&local_158);
  lVar11 = (**(code **)(local_158 + 0x18))(&local_158);
  if (((lVar11 != 0) && (uVar14 = (**(code **)(local_158 + 0x20))(&local_158), lVar21 != 0)) &&
     ((int)local_180 < 9)) {
    local_180 = local_180 + 1;
    uVar6 = (ulong)local_180;
    bVar10 = 9 < local_180;
    plVar15 = local_360 + uVar6 * 6;
    if (bVar10) {
      plVar15 = local_360;
    }
    *plVar15 = lVar21;
    plVar15 = local_360 + uVar6 * 6 + 1;
    if (bVar10) {
      plVar15 = local_360 + 1;
    }
    *plVar15 = lVar11 + (uVar14 & 0xffffffff) * 2;
    ppuVar5 = local_350 + uVar6 * 6;
    if (bVar10) {
      ppuVar5 = local_350;
    }
    *ppuVar5 = puVar2;
  }
  (*(code *)local_368[3])(&local_368);
  local_168 = local_168 & 0xffffffffffff;
LAB_01bdaec0:
  do {
    if (local_180 < 10) {
      puVar20 = (ushort *)local_360[(ulong)local_180 * 6];
    }
    else {
      puVar20 = (ushort *)0x0;
    }
    local_168._0_6_ = (uint6)(uint)local_168;
    local_160 = '\0';
    FUN_006f1490(&local_368);
    if (local_160 == '\0') goto LAB_01bdabb0;
    uVar8 = local_168._6_2_;
    uVar19 = local_168._4_2_;
    local_168 = CONCAT26(local_168._6_2_ + 1,(uint6)local_168);
    iVar13 = param_1[8];
    if (0 < iVar13) {
      uVar14 = (ulong)param_1[7];
      lVar21 = *(long *)(param_1 + 4) + uVar14 * 4;
      iVar17 = iVar13;
      do {
        iVar4 = 0;
        if (param_1[6] <= (int)uVar14) {
          iVar4 = param_1[6];
        }
        puVar18 = (ushort *)(lVar21 + (long)iVar4 * -4);
        if ((*puVar18 == puVar22[1]) && (uVar8 == puVar18[1])) goto LAB_01bdaec0;
        iVar17 = iVar17 + -1;
        lVar21 = lVar21 + 4;
        uVar14 = (ulong)((int)uVar14 + 1);
      } while (iVar17 != 0);
    }
    if (3 < uVar19) {
      uVar19 = 4;
    }
  } while (((uVar19 == 0) || (*puVar1 != *puVar20)) ||
          ((uVar19 != 1 &&
           ((puVar1[1] != puVar20[1] ||
            ((uVar19 != 2 &&
             ((puVar1[2] != puVar20[2] || ((uVar19 != 3 && (puVar1[3] != puVar20[3]))))))))))));
  iVar17 = param_1[6];
  if (iVar13 < iVar17) {
    param_1[8] = iVar13 + 1;
    iVar4 = 0;
    if (iVar17 <= param_1[7] + iVar13) {
      iVar4 = iVar17;
    }
    puVar1 = (ushort *)(*(long *)(param_1 + 4) + (long)((param_1[7] + iVar13) - iVar4) * 4);
    puVar1[0] = 0;
    puVar1[1] = 0;
    uVar19 = puVar22[1];
    puVar1[1] = uVar8;
    *puVar1 = uVar19;
  }
LAB_01bdabb0:
  iVar23 = iVar23 + 1;
  if ((int)lVar7 == iVar23) {
    iVar23 = param_1[8];
    local_368 = &PTR_LAB_04a3cd90;
    local_158 = PTR_DAT_04bb2e00 + 0x10;
    if (local_78 == (void *)0x0) {
      return iVar23;
    }
    local_150 = (void *)0x0;
    local_140 = 0xffffffff;
    local_148 = 0;
    local_138 = 0xffffffff00000000;
    local_144 = 0;
    local_130 = 0xffffffff;
    *local_120 = 0;
    *local_c8 = 0;
    pvVar9 = local_78;
    if (local_78 == (void *)0x0) {
      return iVar23;
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(local_78);
      return iVar23;
    }
    plVar15 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,local_78);
    if (plVar15 == (long *)0x0) {
      return iVar23;
    }
    (**(code **)(*plVar15 + 0x38))(plVar15,pvVar9);
    return iVar23;
  }
  goto LAB_01bdabbc;
}

