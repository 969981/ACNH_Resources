
/* WARNING: Removing unreachable block (ram,0x021fb964) */
/* WARNING: Removing unreachable block (ram,0x021fb73c) */
/* WARNING: Removing unreachable block (ram,0x021faf44) */
/* WARNING: Removing unreachable block (ram,0x021faba8) */
/* WARNING: Removing unreachable block (ram,0x021fad74) */
/* WARNING: Removing unreachable block (ram,0x021fb114) */
/* WARNING: Removing unreachable block (ram,0x021fb840) */
/* WARNING: Removing unreachable block (ram,0x021fba98) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xfffffffffffffc28 : 0x021fb844 */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_021fa700(float param_1,float *param_2,float *param_3,float *param_4,long param_5,
                 int param_6)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *puVar7;
  long *******ppppppplVar8;
  long *******ppppppplVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  long lVar13;
  long *plVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_400;
  float fStack_3fc;
  float local_3f8;
  undefined8 local_3f0;
  undefined8 local_3e8;
  long *******local_3e0;
  undefined8 local_3d8;
  long *******local_3d0;
  int local_3c8;
  int local_3c4;
  long ******local_3c0;
  int local_3b8;
  int local_3b4;
  long *****local_3b0 [2];
  long *******local_3a0;
  long *******ppppppplStack_398;
  long *******ppppppplStack_390;
  int local_388;
  undefined4 uStack_384;
  long *******local_380;
  long *******local_378;
  long *******local_370;
  long *******local_368;
  undefined4 local_360;
  undefined4 local_35c;
  long ******local_358 [2];
  long *****local_348 [2];
  long *******local_338;
  long *******ppppppplStack_330;
  long *******ppppppplStack_328;
  int local_320;
  undefined4 uStack_31c;
  long *******local_318;
  long *******local_310;
  long *******local_308;
  long *******local_300;
  undefined4 local_2f8;
  undefined4 local_2f4;
  long ******local_2f0 [2];
  long *****local_2e0 [2];
  long *******local_2d0;
  long *******ppppppplStack_2c8;
  long *******ppppppplStack_2c0;
  int local_2b8;
  undefined4 uStack_2b4;
  long *******local_2b0;
  long *******local_2a8;
  long *******local_2a0;
  long *******local_298;
  undefined4 local_290;
  undefined4 local_28c;
  long ******local_288 [2];
  long *****local_278 [2];
  long *******local_268;
  long *******ppppppplStack_260;
  long *******ppppppplStack_258;
  undefined8 local_250;
  long *local_248;
  undefined8 ***local_240;
  undefined8 ***local_238;
  undefined8 **local_230 [2];
  undefined8 *local_220 [2];
  undefined8 local_210 [2];
  long local_200 [3];
  undefined8 local_1e8;
  long *local_1e0;
  undefined8 ***local_1d8;
  undefined8 ***local_1d0;
  undefined8 **local_1c8 [2];
  undefined8 *local_1b8 [2];
  undefined8 local_1a8 [2];
  long local_198 [3];
  undefined8 local_180;
  long *local_178;
  undefined8 ***local_170;
  undefined8 ***local_168;
  undefined8 **local_160 [2];
  undefined8 *local_150 [2];
  undefined8 local_140 [2];
  long local_130 [3];
  undefined8 local_118;
  undefined1 *local_110;
  undefined8 ***local_108;
  undefined8 ***local_100;
  undefined8 **local_f8 [2];
  undefined8 *local_e8 [2];
  undefined8 local_d8 [2];
  undefined1 local_c8 [28];
  uint local_ac;
  undefined *local_a8;
  undefined4 local_a0;
  undefined4 uStack_9c;
  long local_98;
  float local_8c [2];
  float local_84;
  int local_80;
  uint local_7c;
  
  puVar7 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  local_80 = param_6;
  uVar10 = FUN_0277d6c4(param_5 + 0x58);
  if (*(long *)puVar7 == 0) {
    return;
  }
  lVar13 = *(long *)(lVar13 + 0x57e58);
  uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
  if (*(uint *)(lVar13 + 0x1d8) <= uVar10) {
    return;
  }
  if (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) == 0) {
    return;
  }
  local_84 = ((float)*(int *)(param_5 + 0x34) * 5.0 + (float)*(int *)(param_5 + 0x44) * 5.0 + 5.0) *
             0.5;
  local_8c[0] = ((float)*(int *)(param_5 + 0x30) * 5.0 + (float)*(int *)(param_5 + 0x40) * 5.0 + 5.0
                ) * 0.5;
  if (param_3 != (float *)0x0) {
    *param_3 = local_8c[0];
    param_3[2] = local_84;
  }
  if (param_2 == (float *)0x0) {
    return;
  }
  lVar13 = *(long *)puVar7;
  local_98 = 0;
  local_a8 = PTR_DAT_04bc0510 + 0x10;
  local_a0 = *(undefined4 *)(param_5 + 0x58);
  uStack_9c = *(undefined4 *)(param_5 + 0x5c);
  uVar10 = FUN_0277d6c4(&local_a0);
  if (*(long *)puVar7 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8) != 0)) {
      lVar13 = *(long *)PTR_DAT_04bc0428;
      uVar10 = FUN_0277d6c4(param_5 + 0x58);
      uVar10 = (uVar10 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
      if ((uVar10 < *(uint *)(lVar13 + 0x1d8)) &&
         (lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar10 * 8), lVar13 != 0)) {
        local_98 = lVar13;
      }
    }
  }
  local_ac = FUN_01ae98d0(&local_a8);
  iVar11 = *(int *)(param_5 + 0x40);
  iVar4 = *(int *)(param_5 + 0x30);
  if (2 < (iVar11 - iVar4) + 1) {
LAB_021fa8dc:
    local_110 = (undefined1 *)0x0;
    local_f8[0] = local_e8;
    local_108 = local_f8;
    local_118 = 0;
    local_d8[0] = 0;
    local_e8[0] = local_d8;
    if (local_c8 != (undefined1 *)0x0) {
      local_118 = 0x300000000;
      local_110 = local_c8;
    }
    local_178 = (long *)0x0;
    local_160[0] = local_150;
    local_170 = local_160;
    local_180 = 0;
    local_140[0] = 0;
    local_150[0] = local_140;
    if (local_130 != (long *)0x0) {
      local_180 = 0x300000000;
      local_178 = local_130;
    }
    local_1e0 = (long *)0x0;
    local_1e8 = 0;
    local_1a8[0] = 0;
    local_1c8[0] = local_1b8;
    local_1d8 = local_1c8;
    local_1b8[0] = local_1a8;
    if (local_198 != (long *)0x0) {
      local_1e8 = 0x300000000;
      local_1e0 = local_198;
    }
    local_250 = 0;
    local_248 = (long *)0x0;
    local_240 = local_230;
    local_230[0] = local_220;
    local_220[0] = local_210;
    local_210[0] = 0;
    if (local_200 != (long *)0x0) {
      local_250 = 0x300000000;
      local_248 = local_200;
    }
    local_238 = local_240;
    local_1d0 = local_1d8;
    local_168 = local_170;
    local_100 = local_108;
    FUN_021fbb40(param_1,&local_118,&local_180,&local_1e8,&local_250,param_5 + 0x20);
    local_3f0._0_4_ = 0;
    local_3f0._4_4_ = 0;
    local_3e8 = (long *******)0x0;
    local_3d8 = (long *******)&local_3d0;
    local_3d0 = &local_3c0;
    local_3c0 = local_3b0;
    local_3b0[0] = (long *****)0x0;
    local_3e0 = (long *******)&local_3d0;
    if (&local_3a0 != (long ********)0x0) {
      local_3e8 = (long *******)&local_3a0;
      local_3f0._0_4_ = 0;
      local_3f0._4_4_ = 3;
      if (0 < (int)(float)local_118) {
        iVar11 = (int)(float)local_118;
        if (2 < (int)(float)local_118) {
          iVar11 = 3;
        }
        if (&local_3d0 != (long ********)0x0) {
          local_3e0 = &local_3c0;
        }
        ppppppplVar8 = local_3e0;
        local_3d0 = (long *******)(PTR_DAT_04bb2010 + 0x10);
        local_3a0 = (long *******)&local_3d0;
        local_3f0._0_4_ = 1;
        local_3f0._4_4_ = 3;
        local_3f0._4_4_ = 3;
        local_3f0._0_4_ = 1;
        if (iVar11 != 1) {
          lVar13 = *(long *)(local_110 + 8);
          if (local_3e0 != (long *******)0x0) {
            local_3e0 = (long *******)*local_3e0;
          }
          ppppppplVar9 = local_3e0;
          *ppppppplVar8 = (long ******)&PTR_FUN_048fc9b0;
          *(undefined4 *)(ppppppplVar8 + 1) = *(undefined4 *)(lVar13 + 8);
          *(undefined4 *)((long)ppppppplVar8 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
          *ppppppplVar8 = (long ******)&DAT_048f9750;
          ppppppplStack_398 = ppppppplVar8;
          local_3f0._0_4_ = 2;
          local_3f0._4_4_ = 3;
          local_3f0._0_4_ = 2;
          local_3f0._4_4_ = 3;
          if (iVar11 != 2) {
            lVar13 = *(long *)(local_110 + 0x10);
            if (local_3e0 != (long *******)0x0) {
              local_3e0 = (long *******)*local_3e0;
            }
            *ppppppplVar9 = (long ******)&PTR_FUN_048fc9b0;
            *(undefined4 *)(ppppppplVar9 + 1) = *(undefined4 *)(lVar13 + 8);
            *(undefined4 *)((long)ppppppplVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
            *ppppppplVar9 = (long ******)(PTR_DAT_04bb2010 + 0x10);
            ppppppplStack_390 = ppppppplVar9;
            local_3f0._0_4_ = 3;
            local_3f0._4_4_ = 3;
          }
        }
      }
    }
    local_388 = 0;
    uStack_384 = 0;
    local_358[0] = local_348;
    local_380 = (long *******)0x0;
    local_378 = (long *******)&local_368;
    local_348[0] = (long *****)0x0;
    local_370 = (long *******)&local_368;
    local_368 = local_358;
    if (&local_338 != (long ********)0x0) {
      local_380 = (long *******)&local_338;
      local_388 = 0;
      uStack_384 = 3;
      if (0 < (int)local_180) {
        iVar11 = (int)local_180;
        if (2 < (int)local_180) {
          iVar11 = 3;
        }
        if (&local_368 != (long ********)0x0) {
          local_378 = local_358;
        }
        ppppppplVar8 = local_378;
        local_360 = *(undefined4 *)(*local_178 + 8);
        local_35c = *(undefined4 *)(*local_178 + 0xc);
        local_368 = (long *******)(PTR_DAT_04bb2010 + 0x10);
        local_338 = (long *******)&local_368;
        local_388 = 1;
        uStack_384 = 3;
        uStack_384 = 3;
        local_388 = 1;
        if (iVar11 != 1) {
          lVar13 = local_178[1];
          if (local_378 != (long *******)0x0) {
            local_378 = (long *******)*local_378;
          }
          ppppppplVar9 = local_378;
          *ppppppplVar8 = (long ******)&PTR_FUN_048fc9b0;
          *(undefined4 *)(ppppppplVar8 + 1) = *(undefined4 *)(lVar13 + 8);
          *(undefined4 *)((long)ppppppplVar8 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
          *ppppppplVar8 = (long ******)&DAT_048f9750;
          ppppppplStack_330 = ppppppplVar8;
          local_388 = 2;
          uStack_384 = 3;
          local_388 = 2;
          uStack_384 = 3;
          if (iVar11 != 2) {
            lVar13 = local_178[2];
            if (local_378 != (long *******)0x0) {
              local_378 = (long *******)*local_378;
            }
            *ppppppplVar9 = (long ******)&PTR_FUN_048fc9b0;
            *(undefined4 *)(ppppppplVar9 + 1) = *(undefined4 *)(lVar13 + 8);
            *(undefined4 *)((long)ppppppplVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
            *ppppppplVar9 = (long ******)(PTR_DAT_04bb2010 + 0x10);
            ppppppplStack_328 = ppppppplVar9;
            local_388 = 3;
            uStack_384 = 3;
          }
        }
      }
    }
    local_320 = 0;
    uStack_31c = 0;
    local_318 = (long *******)0x0;
    local_308 = (long *******)&local_300;
    local_300 = local_2f0;
    local_2f0[0] = local_2e0;
    local_2e0[0] = (long *****)0x0;
    local_310 = (long *******)&local_300;
    if (&local_2d0 != (long ********)0x0) {
      local_318 = (long *******)&local_2d0;
      local_320 = 0;
      uStack_31c = 3;
      if (0 < (int)local_1e8) {
        iVar11 = (int)local_1e8;
        if (2 < (int)local_1e8) {
          iVar11 = 3;
        }
        if (&local_300 != (long ********)0x0) {
          local_310 = local_2f0;
        }
        ppppppplVar8 = local_310;
        local_2f8 = *(undefined4 *)(*local_1e0 + 8);
        local_2f4 = *(undefined4 *)(*local_1e0 + 0xc);
        local_300 = (long *******)(PTR_DAT_04bb2010 + 0x10);
        local_2d0 = (long *******)&local_300;
        local_320 = 1;
        uStack_31c = 3;
        uStack_31c = 3;
        local_320 = 1;
        if (iVar11 != 1) {
          lVar13 = local_1e0[1];
          if (local_310 != (long *******)0x0) {
            local_310 = (long *******)*local_310;
          }
          ppppppplVar9 = local_310;
          *ppppppplVar8 = (long ******)&PTR_FUN_048fc9b0;
          *(undefined4 *)(ppppppplVar8 + 1) = *(undefined4 *)(lVar13 + 8);
          *(undefined4 *)((long)ppppppplVar8 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
          *ppppppplVar8 = (long ******)&DAT_048f9750;
          ppppppplStack_2c8 = ppppppplVar8;
          local_320 = 2;
          uStack_31c = 3;
          local_320 = 2;
          uStack_31c = 3;
          if (iVar11 != 2) {
            lVar13 = local_1e0[2];
            if (local_310 != (long *******)0x0) {
              local_310 = (long *******)*local_310;
            }
            *ppppppplVar9 = (long ******)&PTR_FUN_048fc9b0;
            *(undefined4 *)(ppppppplVar9 + 1) = *(undefined4 *)(lVar13 + 8);
            *(undefined4 *)((long)ppppppplVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
            *ppppppplVar9 = (long ******)(PTR_DAT_04bb2010 + 0x10);
            ppppppplStack_2c0 = ppppppplVar9;
            local_320 = 3;
            uStack_31c = 3;
          }
        }
      }
    }
    local_278[0] = (long *****)0x0;
    local_2a0 = (long *******)&local_298;
    local_298 = local_288;
    local_288[0] = local_278;
    local_2a8 = (long *******)&local_298;
    local_2b8 = 0;
    uStack_2b4 = 0;
    local_2b0 = (long *******)0x0;
    if (&local_268 != (long ********)0x0) {
      local_2b0 = (long *******)&local_268;
      local_2b8 = 0;
      uStack_2b4 = 3;
      if (0 < (int)local_250) {
        iVar11 = (int)local_250;
        if (2 < (int)local_250) {
          iVar11 = 3;
        }
        if (&local_298 != (long ********)0x0) {
          local_2a8 = local_288;
        }
        ppppppplVar8 = local_2a8;
        local_290 = *(undefined4 *)(*local_248 + 8);
        local_28c = *(undefined4 *)(*local_248 + 0xc);
        local_298 = (long *******)(PTR_DAT_04bb2010 + 0x10);
        local_268 = (long *******)&local_298;
        local_2b8 = 1;
        uStack_2b4 = 3;
        uStack_2b4 = 3;
        local_2b8 = 1;
        if (iVar11 != 1) {
          lVar13 = local_248[1];
          if (local_2a8 != (long *******)0x0) {
            local_2a8 = (long *******)*local_2a8;
          }
          ppppppplVar9 = local_2a8;
          *ppppppplVar8 = (long ******)&PTR_FUN_048fc9b0;
          *(undefined4 *)(ppppppplVar8 + 1) = *(undefined4 *)(lVar13 + 8);
          *(undefined4 *)((long)ppppppplVar8 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
          *ppppppplVar8 = (long ******)&DAT_048f9750;
          ppppppplStack_260 = ppppppplVar8;
          local_2b8 = 2;
          uStack_2b4 = 3;
          local_2b8 = 2;
          uStack_2b4 = 3;
          if (iVar11 != 2) {
            lVar13 = local_248[2];
            if (local_2a8 != (long *******)0x0) {
              local_2a8 = (long *******)*local_2a8;
            }
            *ppppppplVar9 = (long ******)&PTR_FUN_048fc9b0;
            *(undefined4 *)(ppppppplVar9 + 1) = *(undefined4 *)(lVar13 + 8);
            *(undefined4 *)((long)ppppppplVar9 + 0xc) = *(undefined4 *)(lVar13 + 0xc);
            *ppppppplVar9 = (long ******)(PTR_DAT_04bb2010 + 0x10);
            ppppppplStack_258 = ppppppplVar9;
            local_2b8 = 3;
            uStack_2b4 = 3;
          }
        }
      }
    }
    local_3f8 = 0.0;
    fVar18 = 3.4028235e+38;
    local_400 = 0.0;
    fStack_3fc = 0.0;
    uVar10 = 0;
    do {
      local_7c = uVar10;
      switch(local_80) {
      case 1:
      case 5:
      case 6:
        if (local_ac == uVar10) break;
        goto LAB_021fb254;
      case 2:
        if (((uint)(long)((float)(int)uVar10 * 90.0 * 11930465.0) ^ 0x80000000) !=
            (uint)(long)((float)(int)local_ac * 90.0 * 11930465.0)) goto LAB_021fb254;
        break;
      case 7:
        if (((uint)(long)((float)(int)uVar10 * 90.0 * 11930465.0) ^ 0x80000000) ==
            (uint)(long)((float)(int)local_ac * 90.0 * 11930465.0)) goto LAB_021fb254;
      }
      if ((*(byte *)(param_5 + 0x54) >> (ulong)(uVar10 & 0x1f) & 1) != 0) {
        piVar3 = (int *)((long)&local_3f0 + (ulong)uVar10 * 0x1a * 4);
        if (3 < uVar10) {
          piVar3 = (int *)&local_3f0;
        }
        if (*piVar3 != 0) {
          plVar14 = *(long **)(piVar3 + 2);
          lVar13 = (long)*piVar3 << 3;
          do {
            local_3f8 = (float)*(int *)(*plVar14 + 0xc) * 5.0;
            local_400 = (float)*(int *)(*plVar14 + 8) * 5.0;
            switch(local_80) {
            case 3:
            case 5:
              switch(local_ac) {
              case 0:
code_r0x021fb4a4:
                if (local_8c[0] < local_400) break;
                goto LAB_021fb384;
              case 1:
switchD_021fb408_caseD_3:
                if (local_84 <= local_3f8) goto LAB_021fb384;
                break;
              case 2:
switchD_021fb408_caseD_0:
                if (local_8c[0] <= local_400) goto LAB_021fb384;
                break;
              case 3:
code_r0x021fb494:
                if (local_3f8 <= local_84) goto LAB_021fb384;
              }
              break;
            case 4:
            case 6:
              switch(local_ac) {
              case 0:
                goto switchD_021fb408_caseD_0;
              case 1:
                goto code_r0x021fb494;
              case 2:
                goto code_r0x021fb4a4;
              case 3:
                goto switchD_021fb408_caseD_3;
              }
              break;
            case 8:
              switch(local_ac) {
              case 0:
              case 2:
                fVar17 = local_400 - local_8c[0];
                break;
              case 1:
              case 3:
                fVar17 = local_3f8 - local_84;
                break;
              default:
                goto switchD_021fb3cc_caseD_7;
              }
              fVar16 = -fVar17;
              if (0.0 <= fVar17) {
                fVar16 = fVar17;
              }
              if (fVar16 <= 0.1) goto LAB_021fb384;
            }
switchD_021fb3cc_caseD_7:
            iVar11 = FUN_01318f40(local_8c,&local_400);
            if ((iVar11 == 0) &&
               (fVar17 = (param_4[2] - local_3f8) * (param_4[2] - local_3f8) +
                         (*param_4 - local_400) * (*param_4 - local_400), fVar17 < fVar18)) {
              param_2[2] = local_3f8;
              *param_2 = local_400;
              param_2[1] = fStack_3fc;
              fVar18 = fVar17;
            }
LAB_021fb384:
            plVar14 = plVar14 + 1;
            lVar13 = lVar13 + -8;
          } while (lVar13 != 0);
        }
      }
LAB_021fb254:
      uVar15 = 4;
      if ((int)uVar10 < 4) {
        uVar15 = uVar10 + 1;
      }
      uVar10 = uVar15;
      if (uVar15 == 4) {
        if (0 < local_2b8) {
          lVar13 = 0;
          do {
            (*(code *)**local_2b0[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < local_2b8);
        }
        if (0 < local_320) {
          lVar13 = 0;
          do {
            (*(code *)**local_318[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < local_320);
        }
        if (0 < local_388) {
          lVar13 = 0;
          do {
            (*(code *)**local_380[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < local_388);
        }
        if (0 < (int)local_3f0) {
          lVar13 = 0;
          do {
            (*(code *)**local_3e8[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)local_3f0);
        }
        if (0 < (int)local_250) {
          lVar13 = 0;
          do {
            (*(code *)**(undefined8 **)local_248[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)local_250);
        }
        if (0 < (int)local_1e8) {
          lVar13 = 0;
          do {
            (*(code *)**(undefined8 **)local_1e0[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)local_1e8);
        }
        if (0 < (int)local_180) {
          lVar13 = 0;
          do {
            (*(code *)**(undefined8 **)local_178[lVar13])();
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)local_180);
        }
        if (0 < (int)(float)local_118) {
          lVar13 = 0;
          do {
            (**(code **)**(undefined8 **)(local_110 + lVar13 * 8))();
            lVar13 = lVar13 + 1;
          } while (lVar13 < (int)(float)local_118);
        }
        return;
      }
    } while( true );
  }
  iVar12 = *(int *)(param_5 + 0x44);
  iVar5 = *(int *)(param_5 + 0x34);
  if (2 < (iVar12 - iVar5) + 1) goto LAB_021fa8dc;
  iVar1 = iVar11 + iVar4;
  if (iVar1 < 0 != SCARRY4(iVar11,iVar4)) {
    iVar1 = iVar1 + 1;
  }
  iVar2 = iVar12 + iVar5;
  if (iVar2 < 0 != SCARRY4(iVar12,iVar5)) {
    iVar2 = iVar2 + 1;
  }
  local_3c8 = (iVar1 >> 1) + 1;
  local_3b4 = (iVar2 >> 1) + 1;
  iVar12 = (int)((float)(iVar12 + 2) + param_1);
  uVar6 = (ulong)local_110 >> 0x20;
  local_110 = (undefined1 *)((ulong)local_110 & 0xffffffff00000000);
  local_118._0_4_ = 0.0;
  local_118._4_4_ = 0.0;
  local_1e8 = local_1e8 & 0xffffffff00000000;
  local_180 = local_180 & 0xffffffff00000000;
  local_3f0 = &DAT_048f9750;
  local_3e0 = (long *******)&DAT_048f9750;
  local_3d0 = (long *******)&DAT_048f9750;
  local_3c0 = (long ******)&DAT_048f9750;
  local_3e8 = (long *******)CONCAT44(iVar12,local_3c8);
  local_3d8 = (long *******)CONCAT44(local_3b4,(int)((float)(iVar11 + 2) + param_1));
  local_3c4 = (int)((float)(iVar5 + -1) - param_1);
  local_3b8 = (int)((float)(iVar4 + -1) - param_1);
  if (local_80 == 1) {
    if (local_ac == 0) goto LAB_021fb710;
LAB_021fb764:
    fVar18 = 3.4028235e+38;
  }
  else {
    if (local_80 == 2) {
      if ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) == -0x80000000) goto LAB_021fb710;
      goto LAB_021fb764;
    }
    if ((local_80 == 7) && ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) == -0x80000000))
    goto LAB_021fb764;
LAB_021fb710:
    if ((*(byte *)(param_5 + 0x54) & 1) == 0) goto LAB_021fb764;
    local_118._0_4_ = (float)local_3c8 * 5.0;
    local_110 = (undefined1 *)CONCAT44((int)uVar6,(float)iVar12 * 5.0);
    local_118._4_4_ = 0.0;
    iVar11 = FUN_01318f40(local_8c,&local_118);
    if (iVar11 != 0) goto LAB_021fb764;
    fVar17 = (param_4[2] - local_110._0_4_) * (param_4[2] - local_110._0_4_) +
             (*param_4 - (float)local_118) * (*param_4 - (float)local_118);
    fVar18 = 3.4028235e+38;
    if (fVar17 < 3.4028235e+38) {
      param_2[2] = local_110._0_4_;
      *param_2 = (float)local_118;
      param_2[1] = local_118._4_4_;
      fVar18 = fVar17;
    }
  }
  local_1e8._0_4_ = 1;
  local_180._0_4_ = 1;
  if (local_80 == 1) {
    if (local_ac == 1) goto LAB_021fb814;
  }
  else if (local_80 == 7) {
    if ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) != -0x40000000) goto LAB_021fb814;
  }
  else if ((local_80 != 2) || ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) == -0x40000000)
          ) {
LAB_021fb814:
    if ((*(byte *)(param_5 + 0x54) >> 1 & 1) != 0) {
      local_118._0_4_ = (float)(int)local_3d8 * 5.0;
      local_110 = (undefined1 *)CONCAT44(local_110._4_4_,(float)local_3d8._4_4_ * 5.0);
      iVar11 = FUN_01318f40(local_8c,&local_118);
      if (iVar11 == 0) {
        fVar17 = (param_4[2] - local_110._0_4_) * (param_4[2] - local_110._0_4_) +
                 (*param_4 - (float)local_118) * (*param_4 - (float)local_118);
        if (fVar17 < fVar18) {
          param_2[2] = local_110._0_4_;
          *param_2 = (float)local_118;
          param_2[1] = local_118._4_4_;
          fVar18 = fVar17;
        }
      }
    }
  }
  local_1e8._0_4_ = 2;
  local_180._0_4_ = 2;
  if (local_80 == 1) {
    if (local_ac != 2) goto LAB_021fb9c4;
  }
  else if (local_80 == 7) {
    if ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) == 0) goto LAB_021fb9c4;
  }
  else if ((local_80 == 2) && ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) != 0))
  goto LAB_021fb9c4;
  if ((*(byte *)(param_5 + 0x54) >> 2 & 1) != 0) {
    local_118._0_4_ = (float)local_3c8 * 5.0;
    local_110 = (undefined1 *)CONCAT44(local_110._4_4_,(float)local_3c4 * 5.0);
    iVar11 = FUN_01318f40(local_8c,&local_118);
    if (iVar11 == 0) {
      fVar17 = (param_4[2] - local_110._0_4_) * (param_4[2] - local_110._0_4_) +
               (*param_4 - (float)local_118) * (*param_4 - (float)local_118);
      if (fVar17 < fVar18) {
        param_2[2] = local_110._0_4_;
        *param_2 = (float)local_118;
        param_2[1] = local_118._4_4_;
        fVar18 = fVar17;
      }
    }
  }
LAB_021fb9c4:
  local_1e8 = CONCAT44(local_1e8._4_4_,3);
  local_180 = CONCAT44(local_180._4_4_,3);
  if (local_80 == 1) {
    if (local_ac != 3) {
      return;
    }
  }
  else if (local_80 == 7) {
    if ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) == 0x40000000) {
      return;
    }
  }
  else if ((local_80 == 2) && ((int)(long)((float)(int)local_ac * 90.0 * 11930465.0) != 0x40000000))
  {
    return;
  }
  if ((*(byte *)(param_5 + 0x54) >> 3 & 1) == 0) {
    return;
  }
  local_118._0_4_ = (float)local_3b8 * 5.0;
  local_110 = (undefined1 *)CONCAT44(local_110._4_4_,(float)local_3b4 * 5.0);
  iVar11 = FUN_01318f40(local_8c,&local_118);
  if (iVar11 != 0) {
    return;
  }
  if (fVar18 <= (param_4[2] - local_110._0_4_) * (param_4[2] - local_110._0_4_) +
                (*param_4 - (float)local_118) * (*param_4 - (float)local_118)) {
    return;
  }
  param_2[2] = local_110._0_4_;
  *param_2 = (float)local_118;
  param_2[1] = local_118._4_4_;
  return;
}

