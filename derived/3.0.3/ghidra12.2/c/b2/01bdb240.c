
void FUN_01bdb240(uint *param_1,long *param_2,long *param_3,undefined8 param_4)

{
  short *psVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined **ppuVar4;
  ulong uVar5;
  short sVar6;
  void *pvVar7;
  bool bVar8;
  long lVar9;
  long *plVar10;
  void *pvVar11;
  long lVar12;
  ulong uVar13;
  undefined8 *puVar14;
  int iVar15;
  int iVar16;
  ushort uVar17;
  short *psVar18;
  undefined1 auStack_398 [56];
  undefined **local_360;
  long local_358 [2];
  undefined *local_348 [4];
  undefined8 local_328;
  undefined8 uStack_320;
  undefined *local_318;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined *local_2e8;
  undefined8 local_2c8;
  undefined8 uStack_2c0;
  undefined *local_2b8;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined *local_288;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined *local_258;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined *local_228;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined *local_1f8;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined *local_1c8;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  undefined *local_198;
  uint local_178;
  undefined8 local_170;
  undefined8 local_168;
  undefined8 local_160;
  char local_158;
  undefined **local_150;
  void *local_148;
  undefined4 local_140;
  undefined1 local_13c;
  undefined8 local_138;
  undefined8 local_130;
  undefined4 local_128;
  undefined *local_120;
  undefined1 *local_118;
  undefined4 local_110;
  undefined1 local_10c [63];
  undefined1 local_cd;
  undefined *local_c8;
  undefined1 *local_c0;
  undefined4 local_b8;
  undefined1 local_b4 [63];
  undefined1 local_75;
  void *local_70;
  
  *(undefined8 *)((long)param_2 + 0xc) = 0;
  memset(local_358,0,0x1e0);
  local_328 = 0;
  uStack_320 = 0;
  local_178 = 0xffffffff;
  local_2f8 = 0;
  uStack_2f0 = 0;
  local_348[0] = PTR_DAT_04bb2d80 + 0x10;
  local_170 = 0;
  local_168 = 0;
  local_160 = 0;
  local_360 = &PTR_LAB_04a3cd90;
  local_130 = 0xffffffff00000000;
  local_118 = local_10c;
  local_158 = 0;
  local_148 = (void *)0x0;
  local_140 = 0;
  local_13c = 0;
  local_138 = 0xffffffff;
  local_128 = 0xffffffff;
  local_110 = 0x40;
  local_cd = 0;
  local_2c8 = 0;
  uStack_2c0 = 0;
  local_298 = 0;
  uStack_290 = 0;
  local_268 = 0;
  uStack_260 = 0;
  local_238 = 0;
  uStack_230 = 0;
  local_208 = 0;
  uStack_200 = 0;
  local_1d8 = 0;
  uStack_1d0 = 0;
  local_1a8 = 0;
  uStack_1a0 = 0;
  local_120 = PTR_DAT_04bb2bc0 + 0x10;
  local_10c[0] = 0;
  local_c0 = local_b4;
  local_b4[0] = 0;
  local_b8 = 0x40;
  local_75 = 0;
  local_150 = (undefined **)(PTR_DAT_04bb2e00 + 0x10);
  local_70 = (void *)0x0;
  if (*param_1 < 3) {
    puVar14 = (undefined8 *)(&PTR_s_BirthDay_04a3cdf0)[*param_1];
  }
  else {
    puVar14 = &DAT_0407ebb1;
  }
  local_318 = local_348[0];
  local_2e8 = local_348[0];
  local_2b8 = local_348[0];
  local_288 = local_348[0];
  local_258 = local_348[0];
  local_228 = local_348[0];
  local_1f8 = local_348[0];
  local_1c8 = local_348[0];
  local_198 = local_348[0];
  local_c8 = local_120;
  FUN_006d8678(auStack_398,"STR_Mailcheck_%s",puVar14);
  lVar12 = DAT_05ae7600;
  pvVar7 = local_148;
  if (local_148 == (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      pvVar11 = malloc(0x1000);
      pvVar7 = local_148;
    }
    else {
      plVar10 = DAT_0533a098;
      if (DAT_0533a098 == (long *)0x0) {
        lVar9 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar10 = (long *)(lVar12 + 8);
        if (lVar9 != 0) {
          plVar10 = (long *)(lVar9 + 0xa8);
        }
        plVar10 = (long *)*plVar10;
        pvVar7 = local_148;
        if (plVar10 == (long *)0x0) goto LAB_01bdb444;
      }
      pvVar11 = (void *)(**(code **)(*plVar10 + 0x30))(plVar10,0x1000,8);
      pvVar7 = local_148;
    }
    local_148 = pvVar11;
    if (local_148 != (void *)0x0) {
      local_140 = 0x800;
      local_70 = local_148;
      (*(code *)local_150[7])(&local_150);
      pvVar7 = local_148;
    }
  }
LAB_01bdb444:
  local_148 = pvVar7;
  FUN_006f50a0(&local_150,auStack_398,param_4,0);
  (*(code *)local_360[2])(&local_360);
  local_178 = 0xffffffff;
  local_160 = local_160 & 0xffffffff00000000;
  local_170 = 0;
  local_168 = 0;
  lVar12 = (*(code *)local_150[3])(&local_150);
  lVar9 = (*(code *)local_150[3])(&local_150);
  if (((lVar9 != 0) && (uVar13 = (*(code *)local_150[4])(&local_150), lVar12 != 0)) &&
     ((int)local_178 < 9)) {
    local_178 = local_178 + 1;
    uVar5 = (ulong)local_178;
    bVar8 = 9 < local_178;
    plVar10 = local_358 + uVar5 * 6;
    if (bVar8) {
      plVar10 = local_358;
    }
    *plVar10 = lVar12;
    plVar10 = local_358 + uVar5 * 6 + 1;
    if (bVar8) {
      plVar10 = local_358 + 1;
    }
    *plVar10 = lVar9 + (uVar13 & 0xffffffff) * 2;
    ppuVar4 = local_348 + uVar5 * 6;
    if (bVar8) {
      ppuVar4 = local_348;
    }
    *ppuVar4 = (undefined *)&PTR_FUN_048fc6e0;
  }
  (*(code *)local_360[3])(&local_360);
  local_160 = local_160 & 0xffffffffffff;
  do {
    do {
      do {
        if (local_178 < 10) {
          psVar18 = (short *)local_358[(ulong)local_178 * 6];
        }
        else {
          psVar18 = (short *)0x0;
        }
        local_160._0_6_ = (uint6)(uint)local_160;
        local_158 = '\0';
        FUN_006f1490(&local_360);
        if (local_158 == '\0') {
          local_360 = &PTR_LAB_04a3cd90;
          local_150 = &PTR_FUN_048fc868;
          if (local_70 != (void *)0x0) {
            local_148 = (void *)0x0;
            local_140 = 0;
            local_130 = 0xffffffff00000000;
            local_13c = 0;
            local_138 = 0xffffffff;
            local_128 = 0xffffffff;
            *local_118 = 0;
            *local_c0 = 0;
            pvVar7 = local_70;
            if (local_70 != (void *)0x0) {
              if (DAT_05ae7600 == 0) {
                free(local_70);
              }
              else {
                plVar10 = (long *)FUN_038cb610(DAT_05ae7600,local_70);
                if (plVar10 != (long *)0x0) {
                  (**(code **)(*plVar10 + 0x38))(plVar10,pvVar7);
                }
              }
            }
          }
          return;
        }
        sVar6 = local_160._6_2_;
        uVar17 = local_160._4_2_;
        local_160 = CONCAT26(local_160._6_2_ + 1,(uint6)local_160);
        iVar15 = (int)param_3[2];
      } while (iVar15 == 0);
      if (3 < uVar17) {
        uVar17 = 4;
      }
    } while (uVar17 == 0);
    iVar16 = *(int *)((long)param_3 + 0xc);
    do {
      iVar3 = 0;
      if ((int)param_3[1] <= iVar16) {
        iVar3 = (int)param_3[1];
      }
      psVar1 = (short *)(*param_3 + (long)(iVar16 - iVar3) * 8);
      if ((*psVar1 == *psVar18) &&
         ((uVar17 == 1 ||
          ((psVar1[1] == psVar18[1] &&
           ((uVar17 == 2 ||
            ((psVar1[2] == psVar18[2] && ((uVar17 == 3 || (psVar1[3] == psVar18[3])))))))))))) {
        iVar15 = (int)param_2[2];
        iVar16 = (int)param_2[1];
        if (iVar15 < iVar16) {
          *(int *)(param_2 + 2) = iVar15 + 1;
          iVar15 = *(int *)((long)param_2 + 0xc) + iVar15;
          iVar3 = 0;
          if (iVar16 <= iVar15) {
            iVar3 = iVar16;
          }
          puVar2 = (undefined4 *)(*param_2 + (long)(iVar15 - iVar3) * 4);
          *puVar2 = 0;
          *(short *)((long)puVar2 + 2) = sVar6;
        }
        break;
      }
      iVar15 = iVar15 + -1;
      iVar16 = iVar16 + 1;
    } while (iVar15 != 0);
  } while( true );
}

