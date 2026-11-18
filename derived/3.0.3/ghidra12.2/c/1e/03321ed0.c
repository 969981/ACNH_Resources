
void FUN_03321ed0(long param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  char **ppcVar4;
  ushort uVar5;
  ulong uVar6;
  ushort uVar7;
  bool bVar8;
  char *pcVar9;
  ulong uVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  int iVar13;
  long lVar14;
  ushort *puVar15;
  long lVar16;
  undefined *local_3f8;
  char *local_3f0;
  undefined4 local_3e8;
  char acStack_3e4 [4];
  undefined *local_3e0 [3];
  undefined2 local_3c6;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined *local_3b0;
  undefined8 local_390;
  undefined8 uStack_388;
  undefined *local_380;
  undefined8 local_360;
  undefined8 uStack_358;
  undefined *local_350;
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
  uint local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined4 local_1f8;
  undefined **local_1f0;
  undefined2 local_1e8;
  undefined *local_1e0;
  char *local_1d8;
  undefined4 local_1d0;
  undefined2 local_1cc [31];
  undefined2 local_18e;
  undefined *local_188;
  char *local_180;
  undefined4 local_178;
  undefined1 local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_160;
  undefined *local_158;
  undefined1 *local_150;
  undefined4 local_148;
  undefined1 local_144 [63];
  undefined1 local_105;
  undefined *local_100;
  undefined1 *local_f8;
  undefined4 local_f0;
  undefined1 local_ec [63];
  undefined1 local_ad;
  undefined1 local_a8 [8];
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined *local_68;
  char *pcStack_60;
  undefined *local_58;
  undefined *local_50;
  undefined *puStack_48;
  
  puVar1 = (undefined *)0x0;
  if (*(long *)(param_1 + 0x338) != 0) {
    puVar1 = PTR_LAB_04bc92c8;
  }
  if (puVar1 != (undefined *)0x0) {
    lVar16 = *(long *)PTR_DAT_04bc1118;
    lVar14 = *(long *)(lVar16 + 0x20);
    if (((*(char *)(lVar14 + 0x16406) == '\0') ||
        (*(int *)(lVar14 + 0xcf4) == *(int *)(lVar14 + 0xcf8))) &&
       ((lVar14 = *(long *)(param_1 + 8), lVar14 == 0 ||
        (*(int *)(lVar14 + 0x648) <= *(int *)(lVar14 + 0x644))))) {
      FUN_032c8150(0,*(undefined8 *)(param_1 + 0x380),0,0);
      iVar13 = 0;
      puVar15 = (ushort *)(*(long *)(lVar16 + 0x20) + 0x1054);
      do {
        uVar5 = *puVar15;
        if (uVar5 == 0xe) {
          uVar7 = puVar15[3] >> 1;
          puVar15 = puVar15 + 3 + uVar7;
          iVar13 = iVar13 + (uint)uVar7 + 3;
        }
        else if (uVar5 == 0) {
          if (iVar13 < 1) {
            local_188 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x338) + 0x20) + 0x18);
            local_3f8 = PTR_DAT_04bc8e68 + 0x10;
            local_3f0 = "T_00";
            local_58 = (undefined *)FUN_0328b6d0(&local_188,&local_3f8,0);
            local_174 = 0;
            local_178 = 0x20;
            local_180 = local_a8;
            local_170 = 0xffffffff;
            local_168 = 0xffffffff00000000;
            local_150 = local_144;
            local_160 = 0xffffffff;
            local_148 = 0x40;
            local_105 = 0;
            local_144[0] = 0;
            local_158 = PTR_DAT_04bb2bc0 + 0x10;
            local_f8 = local_ec;
            local_f0 = 0x40;
            local_ad = 0;
            local_ec[0] = 0;
            local_188 = PTR_DAT_04bb4e10 + 0x10;
            local_70 = 0;
            local_78 = 0;
            local_80 = 0;
            local_88 = 0;
            local_90 = 0;
            local_98 = 0;
            ppuVar11 = &local_68;
            if (&local_68 <= local_a8 + 2) {
              ppuVar11 = (undefined **)(local_a8 + 2);
            }
            local_a0 = 0;
            local_a8 = (undefined1  [8])0x0;
            local_100 = local_158;
            memset(local_180,0,(size_t)((long)ppuVar11 + (-0xe0 - (long)&local_188)));
            local_1d0 = 0x20;
            local_1d8 = (char *)local_1cc;
            local_18e = 0;
            local_1cc[0] = 0;
            local_1e0 = PTR_DAT_04bc0840 + 0x10;
            local_3f8 = PTR_DAT_04bb2020 + 0x10;
            local_3f0 = "ETC_Swkbd";
            puStack_48 = &DAT_040c54f0;
            local_50 = local_3f8;
            FUN_006f50a0(&local_188,&local_3f8,&local_50,0);
            memset(&local_3f0,0,0x1e0);
            puVar1 = PTR_DAT_04bb2d80;
            local_3c0 = 0;
            uStack_3b8 = 0;
            local_390 = 0;
            uStack_388 = 0;
            local_3e0[0] = PTR_DAT_04bb2d80 + 0x10;
            local_360 = 0;
            uStack_358 = 0;
            local_210 = 0xffffffff;
            local_1f8 = 0;
            local_330 = 0;
            uStack_328 = 0;
            local_300 = 0;
            uStack_2f8 = 0;
            local_2d0 = 0;
            uStack_2c8 = 0;
            local_2a0 = 0;
            uStack_298 = 0;
            local_270 = 0;
            uStack_268 = 0;
            local_240 = 0;
            uStack_238 = 0;
            local_208 = 0;
            uStack_200 = 0;
            local_3f8 = PTR_DAT_04bb2d78 + 0x10;
            pcVar9 = local_1d8;
            local_3b0 = local_3e0[0];
            local_380 = local_3e0[0];
            local_350 = local_3e0[0];
            local_320 = local_3e0[0];
            local_2f0 = local_3e0[0];
            local_2c0 = local_3e0[0];
            local_290 = local_3e0[0];
            local_260 = local_3e0[0];
            local_230 = local_3e0[0];
            local_1f0 = &local_1e0;
            pcVar9[0] = '\0';
            pcVar9[1] = '\0';
            local_1e8 = 0;
            (**(code **)(local_3f8 + 0x10))(&local_3f8);
            local_210 = 0xffffffff;
            local_1f8 = 0;
            local_208 = 0;
            uStack_200 = 0;
            pcVar9 = (char *)(**(code **)(local_188 + 0x18))(&local_188);
            lVar14 = (**(code **)(local_188 + 0x18))(&local_188);
            if (((lVar14 != 0) &&
                (uVar10 = (**(code **)(local_188 + 0x20))(&local_188), pcVar9 != (char *)0x0)) &&
               ((int)local_210 < 9)) {
              local_210 = local_210 + 1;
              uVar6 = (ulong)local_210;
              bVar8 = 9 < local_210;
              ppcVar4 = &local_3f0 + uVar6 * 6;
              if (bVar8) {
                ppcVar4 = &local_3f0;
              }
              *ppcVar4 = pcVar9;
              ppuVar11 = local_3e0 + uVar6 * 6 + -1;
              if (bVar8) {
                ppuVar11 = (undefined **)&local_3e8;
              }
              *ppuVar11 = (undefined *)(lVar14 + (uVar10 & 0xffffffff) * 2);
              ppuVar11 = local_3e0 + uVar6 * 6;
              if (bVar8) {
                ppuVar11 = local_3e0;
              }
              *ppuVar11 = puVar1 + 0x10;
            }
            (**(code **)(local_3f8 + 0x18))(&local_3f8);
            FUN_006f1490(&local_3f8);
            ppuVar11 = &local_58;
            ppuVar12 = &local_1e0;
          }
          else {
            local_3c6 = 0;
            local_3e8 = 0x10;
            local_3f0 = acStack_3e4;
            acStack_3e4[0] = '\0';
            acStack_3e4[1] = '\0';
            local_3f8 = PTR_DAT_04bbd6c0 + 0x10;
            FUN_038d1340(&local_3f8,&DAT_041694b0);
            local_68 = PTR_DAT_04bc8e78 + 0x10;
            pcStack_60 = local_3f0;
            local_1e0 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x338) + 0x20) + 0x18);
            local_188 = PTR_DAT_04bc8e68 + 0x10;
            local_180 = "T_00";
            local_188 = (undefined *)FUN_0328b6d0(&local_1e0,&local_188,0);
            ppuVar11 = &local_188;
            ppuVar12 = &local_68;
          }
          FUN_032d67f0(ppuVar11,ppuVar12);
          return;
        }
        iVar2 = iVar13 + 2;
        if (uVar5 != 0xf) {
          iVar2 = iVar13;
        }
        iVar13 = iVar2 + 1;
        puVar15 = puVar15 + (ulong)(uVar5 == 0xf) * 2 + 1;
      } while( true );
    }
    local_188 = *(undefined **)(*(long *)(*(long *)(param_1 + 0x338) + 0x20) + 0x18);
    puVar1 = PTR_DAT_04bc8e68 + 0x10;
    local_3f0 = "T_00";
    local_3f8 = puVar1;
    local_58 = (undefined *)FUN_0328b6d0(&local_188,&local_3f8,0);
    plVar3 = *(long **)PTR_DAT_04bc9198;
    if (*(long **)(*(long *)PTR_DAT_04bc6338 + 0x88) != (long *)0x0) {
      plVar3 = *(long **)(*(long *)PTR_DAT_04bc6338 + 0x88);
    }
    local_1d8 = "SwkbdCommon_Enter_ConfirmCandidate";
    puStack_48 = *(undefined **)(PTR_PTR_04bb2238 + 8);
    local_1e0 = puVar1;
    local_50 = puVar1;
    (**(code **)(*plVar3 + 0x18))(&local_188,plVar3,&local_1e0,&local_50);
    local_3f8 = PTR_DAT_04bb8610 + 0x10;
    local_3f0 = local_180;
    FUN_032d67f0(&local_58,&local_3f8);
    FUN_032c8150(0x3f800000,*(undefined8 *)(param_1 + 0x380),0,0);
  }
  return;
}

