
/* WARNING: Removing unreachable block (ram,0x02200c78) */
/* WARNING: Removing unreachable block (ram,0x022008cc) */
/* WARNING: Removing unreachable block (ram,0x02200aa0) */
/* WARNING: Removing unreachable block (ram,0x02200e50) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

ulong FUN_02200640(byte *param_1,ushort *param_2,undefined8 param_3,long param_4,undefined4 *param_5
                  ,undefined4 *param_6,uint param_7)

{
  int *piVar1;
  uint uVar2;
  ushort uVar3;
  ushort uVar4;
  uint uVar5;
  float fVar6;
  long ****pppplVar7;
  long ****pppplVar8;
  int iVar9;
  ulong uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  long *plVar14;
  long lVar15;
  float fVar16;
  float local_3d0 [2];
  float local_3c8;
  float local_3c4 [2];
  float local_3bc;
  int local_3b8 [2];
  long ****local_3b0 [4];
  undefined4 local_390;
  undefined4 local_38c;
  long ***local_388 [2];
  long **local_378 [2];
  long ****local_368;
  long ****pppplStack_360;
  long ****pppplStack_358;
  int local_350;
  undefined4 uStack_34c;
  long ****local_348;
  long ****local_340;
  long ****local_338;
  long ****local_330;
  undefined4 local_328;
  undefined4 local_324;
  long ***local_320 [2];
  long **local_310 [2];
  long ****local_300;
  long ****pppplStack_2f8;
  long ****pppplStack_2f0;
  int local_2e8;
  undefined4 uStack_2e4;
  long ****local_2e0;
  long ****local_2d8;
  long ****local_2d0;
  long ****local_2c8;
  undefined4 local_2c0;
  undefined4 local_2bc;
  long ***local_2b8 [2];
  long **local_2a8 [2];
  long ****local_298;
  long ****pppplStack_290;
  long ****pppplStack_288;
  int local_280;
  undefined4 uStack_27c;
  long ****local_278;
  long ****local_270;
  long ****local_268;
  long ****local_260;
  undefined4 local_258;
  undefined4 local_254;
  long ***local_250 [2];
  long **local_240 [2];
  long ****local_230;
  long ****pppplStack_228;
  long ****pppplStack_220;
  undefined8 local_218;
  long *local_210;
  undefined8 ***local_208;
  undefined8 ***local_200;
  undefined8 **local_1f8 [2];
  undefined8 *local_1e8 [2];
  undefined8 local_1d8 [2];
  long local_1c8 [3];
  undefined8 local_1b0;
  long *local_1a8;
  undefined8 ***local_1a0;
  undefined8 ***local_198;
  undefined8 **local_190 [2];
  undefined8 *local_180 [2];
  undefined8 local_170 [2];
  long local_160 [3];
  undefined8 local_148;
  long *local_140;
  undefined8 ***local_138;
  undefined8 ***local_130;
  undefined8 **local_128 [2];
  undefined8 *local_118 [2];
  undefined8 local_108 [2];
  long local_f8 [3];
  undefined8 local_e0;
  long *local_d8;
  undefined8 ***local_d0;
  undefined8 ***local_c8;
  undefined8 **local_c0 [2];
  undefined8 *local_b0 [2];
  undefined8 local_a0 [2];
  long local_90 [4];
  
  if (((*(int *)(param_4 + 0x20) - *(int *)(param_4 + 0x10)) + 1 < 3) &&
     ((*(int *)(param_4 + 0x24) - *(int *)(param_4 + 0x14)) + 1 < 3)) {
    uVar10 = FUN_021fffa0(param_1,param_2,param_3,param_4,param_7 & 1);
    return uVar10;
  }
  local_d8 = (long *)0x0;
  local_c0[0] = local_b0;
  local_d0 = local_c0;
  local_e0 = 0;
  local_b0[0] = local_a0;
  local_a0[0] = 0;
  if (local_90 != (long *)0x0) {
    local_e0 = 0x300000000;
    local_d8 = local_90;
  }
  local_140 = (long *)0x0;
  local_128[0] = local_118;
  local_138 = local_128;
  local_148 = 0;
  local_108[0] = 0;
  local_118[0] = local_108;
  if (local_f8 != (long *)0x0) {
    local_148 = 0x300000000;
    local_140 = local_f8;
  }
  local_1a8 = (long *)0x0;
  local_190[0] = local_180;
  local_1a0 = local_190;
  local_1b0 = 0;
  local_170[0] = 0;
  local_180[0] = local_170;
  if (local_160 != (long *)0x0) {
    local_1b0 = 0x300000000;
    local_1a8 = local_160;
  }
  local_218 = 0;
  local_210 = (long *)0x0;
  local_208 = local_1f8;
  local_1f8[0] = local_1e8;
  local_1e8[0] = local_1d8;
  local_1d8[0] = 0;
  if (local_1c8 != (long *)0x0) {
    local_218 = 0x300000000;
    local_210 = local_1c8;
  }
  local_200 = local_208;
  local_198 = local_1a0;
  local_130 = local_138;
  local_c8 = local_d0;
  FUN_021fbb40(0,&local_e0,&local_148,&local_1b0,&local_218,param_4);
  local_3b8[0] = 0;
  local_3b8[1] = 0;
  local_3b0[0] = (long ****)0x0;
  local_3b0[2] = (long ****)(local_3b0 + 3);
  local_388[0] = local_378;
  local_3b0[3] = local_388;
  local_378[0] = (long **)0x0;
  local_3b0[1] = local_3b0[2];
  if (&local_368 != (long *****)0x0) {
    local_3b0[0] = (long ****)&local_368;
    local_3b8[0] = 0;
    local_3b8[1] = 3;
    if (0 < (int)local_e0) {
      iVar9 = (int)local_e0;
      if (2 < (int)local_e0) {
        iVar9 = 3;
      }
      if (local_3b0[2] != (long ****)0x0) {
        local_3b0[1] = local_388;
      }
      pppplVar7 = local_3b0[1];
      local_390 = *(undefined4 *)(*local_d8 + 8);
      local_38c = *(undefined4 *)(*local_d8 + 0xc);
      local_3b0[3] = (long ****)(PTR_DAT_04bb2010 + 0x10);
      local_368 = local_3b0[2];
      local_3b8[0] = 1;
      local_3b8[1] = 3;
      local_3b8[1] = 3;
      local_3b8[0] = 1;
      if (iVar9 != 1) {
        local_378[0] = (long **)0x0;
        lVar15 = local_d8[1];
        if (local_3b0[1] != (long ****)0x0) {
          local_3b0[1] = (long ****)*local_3b0[1];
        }
        pppplVar8 = local_3b0[1];
        *pppplVar7 = (long ***)&PTR_FUN_048fc9b0;
        *(undefined4 *)(pppplVar7 + 1) = *(undefined4 *)(lVar15 + 8);
        *(undefined4 *)((long)pppplVar7 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
        *pppplVar7 = (long ***)&DAT_048f9750;
        pppplStack_360 = pppplVar7;
        local_3b8[0] = 2;
        local_3b8[1] = 3;
        local_3b8[0] = 2;
        local_3b8[1] = 3;
        local_3b0[0] = (long ****)&local_368;
        if (iVar9 != 2) {
          lVar15 = local_d8[2];
          if (local_3b0[1] != (long ****)0x0) {
            local_3b0[1] = (long ****)*local_3b0[1];
          }
          *pppplVar8 = (long ***)&PTR_FUN_048fc9b0;
          *(undefined4 *)(pppplVar8 + 1) = *(undefined4 *)(lVar15 + 8);
          *(undefined4 *)((long)pppplVar8 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
          *pppplVar8 = (long ***)(PTR_DAT_04bb2010 + 0x10);
          pppplStack_358 = pppplVar8;
          local_3b8[0] = 3;
          local_3b8[1] = 3;
        }
      }
    }
  }
  local_338 = (long ****)&local_330;
  local_310[0] = (long **)0x0;
  local_330 = local_320;
  local_320[0] = local_310;
  local_340 = local_338;
  local_350 = 0;
  uStack_34c = 0;
  local_348 = (long ****)0x0;
  if (&local_300 != (long *****)0x0) {
    local_348 = (long ****)&local_300;
    local_350 = 0;
    uStack_34c = 3;
    if (0 < (int)local_148) {
      iVar9 = (int)local_148;
      if (2 < (int)local_148) {
        iVar9 = 3;
      }
      if (local_338 != (long ****)0x0) {
        local_340 = local_320;
      }
      pppplVar7 = local_340;
      local_328 = *(undefined4 *)(*local_140 + 8);
      local_324 = *(undefined4 *)(*local_140 + 0xc);
      local_330 = (long ****)(PTR_DAT_04bb2010 + 0x10);
      local_300 = local_338;
      local_350 = 1;
      uStack_34c = 3;
      uStack_34c = 3;
      local_350 = 1;
      if (iVar9 != 1) {
        local_310[0] = (long **)0x0;
        lVar15 = local_140[1];
        if (local_340 != (long ****)0x0) {
          local_340 = (long ****)*local_340;
        }
        pppplVar8 = local_340;
        *pppplVar7 = (long ***)&PTR_FUN_048fc9b0;
        *(undefined4 *)(pppplVar7 + 1) = *(undefined4 *)(lVar15 + 8);
        *(undefined4 *)((long)pppplVar7 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
        *pppplVar7 = (long ***)&DAT_048f9750;
        pppplStack_2f8 = pppplVar7;
        local_350 = 2;
        uStack_34c = 3;
        local_350 = 2;
        uStack_34c = 3;
        local_348 = (long ****)&local_300;
        if (iVar9 != 2) {
          lVar15 = local_140[2];
          if (local_340 != (long ****)0x0) {
            local_340 = (long ****)*local_340;
          }
          *pppplVar8 = (long ***)&PTR_FUN_048fc9b0;
          *(undefined4 *)(pppplVar8 + 1) = *(undefined4 *)(lVar15 + 8);
          *(undefined4 *)((long)pppplVar8 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
          *pppplVar8 = (long ***)(PTR_DAT_04bb2010 + 0x10);
          pppplStack_2f0 = pppplVar8;
          local_350 = 3;
          uStack_34c = 3;
        }
      }
    }
  }
  local_2e8 = 0;
  uStack_2e4 = 0;
  local_2e0 = (long ****)0x0;
  local_2d0 = (long ****)&local_2c8;
  local_2b8[0] = local_2a8;
  local_2c8 = local_2b8;
  local_2a8[0] = (long **)0x0;
  local_2d8 = local_2d0;
  if (&local_298 != (long *****)0x0) {
    local_2e0 = (long ****)&local_298;
    local_2e8 = 0;
    uStack_2e4 = 3;
    if (0 < (int)local_1b0) {
      iVar9 = (int)local_1b0;
      if (2 < (int)local_1b0) {
        iVar9 = 3;
      }
      if (local_2d0 != (long ****)0x0) {
        local_2d8 = local_2b8;
      }
      pppplVar7 = local_2d8;
      local_2c0 = *(undefined4 *)(*local_1a8 + 8);
      local_2bc = *(undefined4 *)(*local_1a8 + 0xc);
      local_2c8 = (long ****)(PTR_DAT_04bb2010 + 0x10);
      local_298 = local_2d0;
      local_2e8 = 1;
      uStack_2e4 = 3;
      uStack_2e4 = 3;
      local_2e8 = 1;
      if (iVar9 != 1) {
        local_2a8[0] = (long **)0x0;
        lVar15 = local_1a8[1];
        if (local_2d8 != (long ****)0x0) {
          local_2d8 = (long ****)*local_2d8;
        }
        pppplVar8 = local_2d8;
        *pppplVar7 = (long ***)&PTR_FUN_048fc9b0;
        *(undefined4 *)(pppplVar7 + 1) = *(undefined4 *)(lVar15 + 8);
        *(undefined4 *)((long)pppplVar7 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
        *pppplVar7 = (long ***)&DAT_048f9750;
        pppplStack_290 = pppplVar7;
        local_2e8 = 2;
        uStack_2e4 = 3;
        local_2e8 = 2;
        uStack_2e4 = 3;
        local_2e0 = (long ****)&local_298;
        if (iVar9 != 2) {
          lVar15 = local_1a8[2];
          if (local_2d8 != (long ****)0x0) {
            local_2d8 = (long ****)*local_2d8;
          }
          *pppplVar8 = (long ***)&PTR_FUN_048fc9b0;
          *(undefined4 *)(pppplVar8 + 1) = *(undefined4 *)(lVar15 + 8);
          *(undefined4 *)((long)pppplVar8 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
          *pppplVar8 = (long ***)(PTR_DAT_04bb2010 + 0x10);
          pppplStack_288 = pppplVar8;
          local_2e8 = 3;
          uStack_2e4 = 3;
        }
      }
    }
  }
  local_268 = (long ****)&local_260;
  local_240[0] = (long **)0x0;
  local_260 = local_250;
  local_250[0] = local_240;
  local_270 = local_268;
  local_280 = 0;
  uStack_27c = 0;
  local_278 = (long ****)0x0;
  if (&local_230 != (long *****)0x0) {
    local_278 = (long ****)&local_230;
    local_280 = 0;
    uStack_27c = 3;
    if (0 < (int)local_218) {
      iVar9 = (int)local_218;
      if (2 < (int)local_218) {
        iVar9 = 3;
      }
      if (local_268 != (long ****)0x0) {
        local_270 = local_250;
      }
      pppplVar7 = local_270;
      local_258 = *(undefined4 *)(*local_210 + 8);
      local_254 = *(undefined4 *)(*local_210 + 0xc);
      local_260 = (long ****)(PTR_DAT_04bb2010 + 0x10);
      local_230 = local_268;
      local_280 = 1;
      uStack_27c = 3;
      uStack_27c = 3;
      local_280 = 1;
      if (iVar9 != 1) {
        local_240[0] = (long **)0x0;
        lVar15 = local_210[1];
        if (local_270 != (long ****)0x0) {
          local_270 = (long ****)*local_270;
        }
        pppplVar8 = local_270;
        *pppplVar7 = (long ***)&PTR_FUN_048fc9b0;
        *(undefined4 *)(pppplVar7 + 1) = *(undefined4 *)(lVar15 + 8);
        *(undefined4 *)((long)pppplVar7 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
        *pppplVar7 = (long ***)&DAT_048f9750;
        pppplStack_228 = pppplVar7;
        local_280 = 2;
        uStack_27c = 3;
        local_280 = 2;
        uStack_27c = 3;
        local_278 = (long ****)&local_230;
        if (iVar9 != 2) {
          lVar15 = local_210[2];
          if (local_270 != (long ****)0x0) {
            local_270 = (long ****)*local_270;
          }
          *pppplVar8 = (long ***)&PTR_FUN_048fc9b0;
          *(undefined4 *)(pppplVar8 + 1) = *(undefined4 *)(lVar15 + 8);
          *(undefined4 *)((long)pppplVar8 + 0xc) = *(undefined4 *)(lVar15 + 0xc);
          *pppplVar8 = (long ***)(PTR_DAT_04bb2010 + 0x10);
          pppplStack_220 = pppplVar8;
          local_280 = 3;
          uStack_27c = 3;
        }
      }
    }
  }
  local_3bc = ((float)*(int *)(param_4 + 0x14) * 5.0 + (float)*(int *)(param_4 + 0x24) * 5.0 + 5.0)
              * 0.5;
  local_3c4[0] = ((float)*(int *)(param_4 + 0x10) * 5.0 +
                 (float)*(int *)(param_4 + 0x20) * 5.0 + 5.0) * 0.5;
  uVar13 = 0;
  do {
    piVar1 = local_3b8 + (ulong)uVar13 * 0x1a;
    if (3 < uVar13) {
      piVar1 = local_3b8;
    }
    if (*piVar1 != 0) {
      plVar14 = *(long **)(piVar1 + 2);
      lVar15 = (long)*piVar1 << 3;
      do {
        lVar12 = *plVar14;
        uVar11 = *(uint *)(lVar12 + 0xc);
        local_3c8 = (float)(int)uVar11 * 5.0 + 2.5;
        local_3d0[0] = (float)*(int *)(lVar12 + 8) * 5.0 + 2.5;
        switch(*param_6) {
        case 3:
        case 5:
          switch(*param_5) {
          case 0:
code_r0x02201134:
            if (local_3c4[0] < local_3d0[0]) break;
            goto LAB_02201050;
          case 1:
switchD_022010d8_caseD_3:
            if (local_3bc <= local_3c8) goto LAB_02201050;
            break;
          case 2:
switchD_022010d8_caseD_0:
            if (local_3c4[0] <= local_3d0[0]) goto LAB_02201050;
            break;
          case 3:
code_r0x02201124:
            if (local_3c8 <= local_3bc) goto LAB_02201050;
          }
          break;
        case 4:
        case 6:
          switch(*param_5) {
          case 0:
            goto switchD_022010d8_caseD_0;
          case 1:
            goto code_r0x02201124;
          case 2:
            goto code_r0x02201134;
          case 3:
            goto switchD_022010d8_caseD_3;
          }
          break;
        case 8:
          switch(*param_5) {
          case 0:
          case 2:
            fVar16 = local_3d0[0] - local_3c4[0];
            break;
          case 1:
          case 3:
            fVar16 = local_3c8 - local_3bc;
            break;
          default:
            goto switchD_0220109c_caseD_7;
          }
          fVar6 = -fVar16;
          if (0.0 <= fVar16) {
            fVar6 = fVar16;
          }
          if (fVar6 <= 0.1) goto LAB_02201050;
        }
switchD_0220109c_caseD_7:
        uVar2 = *(uint *)(lVar12 + 8);
        uVar3 = *param_2;
        if (((((((uint)uVar3 <= (uVar2 & 0xffff)) &&
               ((uVar2 & 0xffff) <= (((uint)uVar3 + (uint)param_2[6]) - 1 & 0xffff))) &&
              (uVar4 = param_2[1], (uint)uVar4 <= (uVar11 & 0xffff))) &&
             (((uVar11 & 0xffff) <= (((uint)uVar4 + (uint)param_2[8]) - 1 & 0xffff) &&
              (uVar5 = (uVar2 - uVar3) +
                       *(int *)(*(long *)(param_2 + 0x20) + 0x1c) * (uVar11 - uVar4),
              (*(uint *)(*(long *)(*(long *)(param_2 + 0x20) + 0x10) + (long)((int)uVar5 >> 5) * 4)
               >> (ulong)(uVar5 & 0x1f) & 1) != 0)))) &&
            (((((param_7 & 1) == 0 ||
               (((int)uVar2 < *(int *)(DAT_053e0208 + 0x2e18) ||
                (*(int *)(DAT_053e0208 + 0x2e28) < (int)uVar2)))) ||
              ((int)uVar11 < *(int *)(DAT_053e0208 + 0x2e1c))) ||
             (*(int *)(DAT_053e0208 + 0x2e2c) < (int)uVar11)))) &&
           (iVar9 = FUN_01318f40(local_3c4,local_3d0), iVar9 == 0)) {
          *param_1 = *param_1 | (byte)(1 << (ulong)(uVar13 & 0x1f));
          break;
        }
LAB_02201050:
        plVar14 = plVar14 + 1;
        lVar15 = lVar15 + -8;
      } while (lVar15 != 0);
    }
    uVar11 = 4;
    if ((int)uVar13 < 4) {
      uVar11 = uVar13 + 1;
    }
    uVar13 = uVar11;
    if (uVar11 == 4) {
      uVar13 = (uint)*param_1 - (*param_1 >> 1 & 0x55555555);
      if (0 < local_280) {
        lVar15 = 0;
        do {
          (*(code *)**local_278[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_280);
      }
      if (0 < local_2e8) {
        lVar15 = 0;
        do {
          (*(code *)**local_2e0[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_2e8);
      }
      uVar13 = (uVar13 >> 2 & 0x33333333) + (uVar13 & 0x33333333);
      if (0 < local_350) {
        lVar15 = 0;
        do {
          (*(code *)**local_348[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_350);
      }
      if (0 < local_3b8[0]) {
        lVar15 = 0;
        do {
          (*(code *)**local_3b0[0][lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < local_3b8[0]);
      }
      uVar13 = uVar13 + (uVar13 >> 4) & 0xf0f0f0f;
      if (0 < (int)local_218) {
        lVar15 = 0;
        do {
          (*(code *)**(undefined8 **)local_210[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)local_218);
      }
      uVar13 = uVar13 + (uVar13 >> 8);
      if (0 < (int)local_1b0) {
        lVar15 = 0;
        do {
          (*(code *)**(undefined8 **)local_1a8[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)local_1b0);
      }
      if (0 < (int)local_148) {
        lVar15 = 0;
        do {
          (*(code *)**(undefined8 **)local_140[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)local_148);
      }
      if (0 < (int)local_e0) {
        lVar15 = 0;
        do {
          (*(code *)**(undefined8 **)local_d8[lVar15])();
          lVar15 = lVar15 + 1;
        } while (lVar15 < (int)local_e0);
      }
      return (ulong)((uVar13 + (uVar13 >> 0x10) & 0x3f) != 0);
    }
  } while( true );
}

