
/* WARNING: Removing unreachable block (ram,0x01e942f4) */
/* WARNING: Removing unreachable block (ram,0x01e94a80) */
/* WARNING: Removing unreachable block (ram,0x01e94a9c) */
/* WARNING: Removing unreachable block (ram,0x01e94ab0) */
/* WARNING: Removing unreachable block (ram,0x01e94b40) */
/* WARNING: Removing unreachable block (ram,0x01e94b48) */
/* WARNING: Removing unreachable block (ram,0x01e94bcc) */
/* WARNING: Removing unreachable block (ram,0x01e94b54) */
/* WARNING: Removing unreachable block (ram,0x01e94b70) */
/* WARNING: Removing unreachable block (ram,0x01e94b84) */
/* WARNING: Removing unreachable block (ram,0x01e94bf0) */
/* WARNING: Removing unreachable block (ram,0x01e94ad8) */
/* WARNING: Removing unreachable block (ram,0x01e94bf8) */
/* WARNING: Removing unreachable block (ram,0x01e94c38) */
/* WARNING: Removing unreachable block (ram,0x01e94c60) */
/* WARNING: Removing unreachable block (ram,0x01e93e78) */
/* WARNING: Removing unreachable block (ram,0x01e93e80) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01e93be0(long param_1)

{
  long lVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  long ****pppplVar8;
  bool bVar9;
  bool bVar10;
  ulong uVar11;
  int *piVar12;
  int iVar13;
  long lVar14;
  long ****pppplVar15;
  long ****pppplVar16;
  long ***ppplVar17;
  long ****pppplVar18;
  undefined *puVar19;
  long ***ppplVar20;
  undefined8 uVar21;
  long ***ppplVar22;
  int iVar23;
  long lVar24;
  long ****pppplVar25;
  uint uVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  long ***appplStack_370 [6];
  int local_340;
  int local_33c;
  long ****local_338;
  long ****local_330;
  int local_328;
  long ****local_320;
  undefined4 *local_318;
  undefined8 local_310;
  undefined8 local_308;
  undefined8 local_300;
  undefined8 local_2f8;
  undefined4 local_2f0;
  undefined4 uStack_2ec;
  undefined4 uStack_2e8;
  undefined4 local_2e4;
  undefined4 local_2e0;
  undefined4 local_2dc;
  undefined4 uStack_2d8;
  undefined4 uStack_2d4;
  long ****local_2d0;
  long ****local_2c8;
  undefined8 local_2c0;
  undefined *local_2b8;
  undefined4 local_2b0;
  undefined4 uStack_2ac;
  undefined8 local_2a8;
  undefined4 local_2a0;
  undefined4 uStack_29c;
  undefined4 local_298;
  undefined8 local_294;
  undefined4 local_28c;
  undefined8 local_288;
  long ****local_280;
  undefined8 ****local_278 [5];
  int local_24c;
  undefined8 ****local_230 [2];
  undefined *local_220;
  int local_218;
  undefined8 ***local_1e8 [9];
  undefined8 **local_1a0 [9];
  undefined8 *local_158 [9];
  undefined8 local_110 [9];
  ulong local_c8 [2];
  undefined8 local_b8;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined4 local_80;
  undefined8 local_78;
  undefined4 local_70;
  
  puVar19 = PTR_DAT_04bb3968;
  local_33c = 0;
  lVar24 = *(long *)(param_1 + 8);
  iVar23 = *(int *)(param_1 + 0xb01c);
  local_340 = iVar23;
  if ((iVar23 == 0) && (*(int *)(param_1 + 0x13400) != 7)) {
    uVar11 = FUN_01e94c70(param_1);
    if ((uVar11 & 1) == 0) goto LAB_01e93c58;
    local_33c = 8;
  }
  else {
LAB_01e93c58:
    puVar7 = PTR_DAT_04bb3380;
    local_278[0] = local_230;
    local_230[0] = local_1e8;
    local_2c0 = (long ****)local_278;
    local_1a0[0] = local_158;
    lVar14 = *(long *)puVar19;
    local_1e8[0] = local_1a0;
    local_158[0] = local_110;
    local_110[0] = 0;
    local_310 = CONCAT44(local_310._4_4_,8);
    lVar1 = lVar14 + 0x2ad8;
    if (iVar23 != 0) {
      lVar1 = lVar14 + 0x2bf8;
    }
    local_320 = (long ****)&local_2c0;
    local_318 = (undefined4 *)&local_308;
    local_308._4_4_ = (undefined4)((ulong)&local_2c0 >> 0x20);
    local_308 = (long ***)CONCAT44(local_308._4_4_,5);
    local_2e0 = *(undefined4 *)(lVar1 + 0x20);
    local_2f0 = (undefined4)*(undefined8 *)(lVar1 + 0x10);
    uStack_2ec = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x10) >> 0x20);
    uStack_2e8 = (undefined4)*(undefined8 *)(lVar1 + 0x18);
    local_2e4 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
    local_300 = PTR_DAT_04bb3380 + 0x10;
    local_2f8 = *(undefined8 *)(lVar1 + 8);
    uStack_2d4 = *(undefined4 *)(lVar1 + 0x2c);
    local_2dc = (undefined4)*(undefined8 *)(lVar1 + 0x24);
    uStack_2d8 = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x24) >> 0x20);
    local_2d0 = (long ****)&local_338;
    local_2c8 = (long ****)&local_338;
    local_338 = (long ****)&local_2d0;
    local_330 = (long ****)&local_2d0;
    local_328 = 1;
    lVar1 = lVar14 + 0x2b08;
    if (iVar23 != 0) {
      lVar1 = lVar14 + 0x2c28;
    }
    if ((long ****)&local_2c0 != (long ****)0x0) {
      local_320 = (long ****)local_278;
    }
    pppplVar25 = local_320;
    local_2c0 = (long ****)CONCAT44((int)((ulong)local_278 >> 0x20),6);
    local_298 = *(undefined4 *)(lVar1 + 0x20);
    local_2a8 = *(undefined8 *)(lVar1 + 0x10);
    local_2a0 = (undefined4)*(undefined8 *)(lVar1 + 0x18);
    uStack_29c = (undefined4)((ulong)*(undefined8 *)(lVar1 + 0x18) >> 0x20);
    local_2b8 = PTR_DAT_04bb3380 + 0x10;
    local_2b0 = (undefined4)*(undefined8 *)(lVar1 + 8);
    uStack_2ac = (undefined4)((ulong)*(undefined8 *)(lVar1 + 8) >> 0x20);
    local_338 = (long ****)&local_288;
    local_294 = *(undefined8 *)(lVar1 + 0x24);
    local_28c = *(undefined4 *)(lVar1 + 0x2c);
    local_280 = (long ****)&local_338;
    if (&local_2d0 != (long *****)0x0) {
      local_2c8 = (long ****)&local_288;
    }
    local_328 = 2;
    local_288 = (long ****)&local_2d0;
    if ((iVar23 == 0) || (local_328 = 2, (*(byte *)(param_1 + 0xad54) >> 2 & 1) == 0)) {
      lVar1 = lVar14 + 0x2aa8;
      if (iVar23 != 0) {
        lVar1 = lVar14 + 0x2bc8;
      }
      if (local_320 != (long ****)0x0) {
        local_320 = (long ****)*local_320;
      }
      pppplVar15 = local_320;
      *(int *)pppplVar25 = 4;
      pppplVar25[1] = (long ***)(PTR_DAT_04bb3050 + 0x10);
      ppplVar22 = *(long ****)(lVar1 + 0x18);
      ppplVar17 = *(long ****)(lVar1 + 8);
      ppplVar20 = *(long ****)(lVar1 + 0x10);
      *(int *)(pppplVar25 + 5) = *(int *)(lVar1 + 0x20);
      pppplVar25[3] = ppplVar20;
      pppplVar25[4] = ppplVar22;
      pppplVar25[1] = (long ***)(PTR_DAT_04bb3380 + 0x10);
      pppplVar25[2] = ppplVar17;
      uVar21 = *(undefined8 *)(lVar1 + 0x24);
      iVar3 = *(int *)(lVar1 + 0x2c);
      pppplVar16 = pppplVar25 + 7;
      *pppplVar16 = (long ***)0x0;
      local_338 = pppplVar16;
      *(undefined8 *)((long)pppplVar25 + 0x2c) = uVar21;
      *(int *)((long)pppplVar25 + 0x34) = iVar3;
      *pppplVar16 = (long ***)&local_288;
      pppplVar25[8] = (long ***)0x0;
      pppplVar25[8] = (long ***)&local_338;
      if ((long ****)&local_288 != (long ****)0x0) {
        local_280 = pppplVar16;
      }
      local_328 = 3;
      local_328 = 3;
      if (iVar23 != 0) goto LAB_01e93e88;
      if (local_320 != (long ****)0x0) {
        local_320 = (long ****)*local_320;
      }
      pppplVar8 = local_320;
      *(int *)pppplVar15 = 2;
      pppplVar15[1] = (long ***)(PTR_DAT_04bb3050 + 0x10);
      ppplVar17 = *(long ****)(lVar14 + 0x2a50);
      ppplVar20 = *(long ****)(lVar14 + 0x2a58);
      ppplVar22 = *(long ****)(lVar14 + 0x2a60);
      *(int *)(pppplVar15 + 5) = *(int *)(lVar14 + 0x2a68);
      pppplVar15[3] = ppplVar20;
      pppplVar15[4] = ppplVar22;
      pppplVar15[1] = (long ***)(PTR_DAT_04bb3380 + 0x10);
      pppplVar15[2] = ppplVar17;
      uVar21 = *(undefined8 *)(lVar14 + 0x2a6c);
      iVar23 = *(int *)(lVar14 + 0x2a74);
      pppplVar18 = pppplVar15 + 7;
      *pppplVar18 = (long ***)0x0;
      local_338 = pppplVar18;
      *pppplVar18 = (long ***)pppplVar16;
      pppplVar15[8] = (long ***)0x0;
      *(undefined8 *)((long)pppplVar15 + 0x2c) = uVar21;
      *(int *)((long)pppplVar15 + 0x34) = iVar23;
      pppplVar15[8] = (long ***)&local_338;
      if (pppplVar16 != (long ****)0x0) {
        pppplVar25[8] = (long ***)pppplVar18;
      }
      local_328 = 4;
      if (local_320 != (long ****)0x0) {
        local_320 = (long ****)*local_320;
      }
      pppplVar25 = local_320;
      *(int *)pppplVar8 = 3;
      pppplVar8[1] = (long ***)(PTR_DAT_04bb3050 + 0x10);
      ppplVar17 = *(long ****)(lVar14 + 0x2a80);
      ppplVar20 = *(long ****)(lVar14 + 0x2a88);
      ppplVar22 = *(long ****)(lVar14 + 0x2a90);
      *(int *)(pppplVar8 + 5) = *(int *)(lVar14 + 0x2a98);
      pppplVar8[3] = ppplVar20;
      pppplVar8[4] = ppplVar22;
      pppplVar8[1] = (long ***)(PTR_DAT_04bb3380 + 0x10);
      pppplVar8[2] = ppplVar17;
      uVar21 = *(undefined8 *)(lVar14 + 0x2a9c);
      iVar23 = *(int *)(lVar14 + 0x2aa4);
      pppplVar16 = pppplVar8 + 7;
      *pppplVar16 = (long ***)0x0;
      local_338 = pppplVar16;
      *pppplVar16 = (long ***)pppplVar18;
      pppplVar8[8] = (long ***)0x0;
      *(undefined8 *)((long)pppplVar8 + 0x2c) = uVar21;
      *(int *)((long)pppplVar8 + 0x34) = iVar23;
      pppplVar8[8] = (long ***)&local_338;
      if (pppplVar18 != (long ****)0x0) {
        pppplVar15[8] = (long ***)pppplVar16;
      }
      local_328 = 5;
      if (local_320 != (long ****)0x0) {
        local_320 = (long ****)*local_320;
      }
      *(int *)pppplVar25 = 7;
      pppplVar25[1] = (long ***)(PTR_DAT_04bb3050 + 0x10);
      ppplVar17 = *(long ****)(lVar14 + 0x2b40);
      ppplVar20 = *(long ****)(lVar14 + 0x2b48);
      ppplVar22 = *(long ****)(lVar14 + 0x2b50);
      *(int *)(pppplVar25 + 5) = *(int *)(lVar14 + 0x2b58);
      pppplVar25[3] = ppplVar20;
      pppplVar25[4] = ppplVar22;
      pppplVar25[1] = (long ***)(PTR_DAT_04bb3380 + 0x10);
      pppplVar25[2] = ppplVar17;
      iVar23 = *(int *)(lVar14 + 0x2b64);
      uVar21 = *(undefined8 *)(lVar14 + 0x2b5c);
      local_338 = pppplVar25 + 7;
      *local_338 = (long ***)0x0;
      *(undefined8 *)((long)pppplVar25 + 0x2c) = uVar21;
      *(int *)((long)pppplVar25 + 0x34) = iVar23;
      *local_338 = (long ***)pppplVar16;
      pppplVar25[8] = (long ***)0x0;
      pppplVar25[8] = (long ***)&local_338;
      if (pppplVar16 != (long ****)0x0) {
        pppplVar8[8] = (long ***)local_338;
      }
      local_328 = 6;
      iVar23 = *(int *)(param_1 + 0x13400);
    }
    else {
LAB_01e93e88:
      iVar23 = *(int *)(param_1 + 0x13400);
    }
    if (iVar23 != 0) {
      pppplVar25 = (long ****)&local_330;
      if (iVar23 == 7) {
        do {
          pppplVar15 = (long ****)*pppplVar25;
          if ((long *****)pppplVar15 == &local_338) goto LAB_01e940ec;
          pppplVar16 = pppplVar15 + -7;
        } while ((*(int *)pppplVar16 != 8) &&
                (pppplVar25 = pppplVar15 + 1, *(int *)pppplVar16 != *(int *)(param_1 + 0x13400)));
      }
      else {
        do {
          pppplVar15 = (long ****)*pppplVar25;
          if ((long *****)pppplVar15 == &local_338) goto LAB_01e940ec;
          pppplVar16 = pppplVar15 + -7;
          pppplVar25 = pppplVar15 + 1;
        } while (*(int *)pppplVar16 != *(int *)(param_1 + 0x13400));
      }
      if ((pppplVar16 != (long ****)0x0) && (pppplVar15 != (long ****)0x0)) {
        if (*pppplVar15 != (long ***)0x0) {
          (*pppplVar15)[1] = (long **)pppplVar15[1];
        }
        if (pppplVar15[1] != (long ***)0x0) {
          *pppplVar15[1] = (long **)*pppplVar15;
        }
        *pppplVar15 = (long ***)0x0;
        pppplVar15[1] = (long ***)0x0;
        pppplVar16[6] = (long ***)0x0;
        local_328 = local_328 + -1;
        pppplVar16[1] = (long ***)(puVar7 + 0x10);
        *pppplVar16 = (long ***)local_320;
        local_320 = pppplVar16;
      }
    }
LAB_01e940ec:
    if (&local_2d0 == &local_338) {
      uVar26 = 0;
      pppplVar25 = appplStack_370;
    }
    else {
      uVar26 = 0;
      pppplVar15 = (long ****)&local_308;
      pppplVar25 = local_330;
      do {
        piVar12 = (int *)(*(code *)pppplVar15[1][0x1e])();
        pppplVar25 = (long ****)pppplVar25[1];
        pppplVar15 = pppplVar25 + -7;
        uVar26 = *piVar12 + uVar26;
      } while (pppplVar15 != appplStack_370);
      pppplVar25 = local_330 + -7;
    }
    uVar4 = *(uint *)(lVar24 + 0x288);
    *(undefined4 *)(lVar24 + 0x288) = *(undefined4 *)(lVar24 + 0x28c);
    uVar4 = uVar4 ^ uVar4 << 0xb;
    *(undefined4 *)(lVar24 + 0x28c) = *(undefined4 *)(lVar24 + 0x290);
    uVar5 = *(uint *)(lVar24 + 0x294);
    *(uint *)(lVar24 + 0x290) = uVar5;
    uVar4 = uVar4 >> 8 ^ uVar5 >> 0x13 ^ uVar4 ^ uVar5;
    *(uint *)(lVar24 + 0x294) = uVar4;
    if (pppplVar25 != appplStack_370) {
      iVar23 = 0;
      pppplVar15 = local_330;
      do {
        piVar12 = (int *)(*(code *)pppplVar25[1][0x1e])();
        iVar23 = *piVar12 + iVar23;
        if ((int)((ulong)uVar26 * (ulong)uVar4 >> 0x20) < iVar23) {
          local_33c = *(int *)pppplVar25;
          break;
        }
        pppplVar15 = (long ****)pppplVar15[1];
        pppplVar25 = pppplVar15 + -7;
      } while (pppplVar25 != appplStack_370);
    }
    if ((long *****)local_330 != &local_338) {
      pppplVar25 = local_330;
      do {
        pppplVar25[-6] = (long ***)(puVar7 + 0x10);
        pppplVar25[-1] = (long ***)0x0;
        pppplVar25 = (long ****)pppplVar25[1];
      } while ((long *****)pppplVar25 != &local_338);
    }
  }
  iVar23 = local_33c;
  if (7 < local_33c - 1U) goto LAB_01e9480c;
  switch(local_33c) {
  case 1:
    FUN_01e950d0(param_1,local_340 == 0);
    break;
  case 2:
    FUN_01e95d94(param_1,1);
    break;
  case 3:
    FUN_01e95554(param_1);
    break;
  case 4:
    local_90 = 0xfffe;
    FUN_0277d4ac(&local_90);
    local_a8 = 0;
    local_b8 = PTR_DAT_04bbc1a0 + 0x10;
    local_98 = 0;
    local_b0 = PTR_DAT_04bb2010 + 0x10;
    local_a0 = local_b0;
    uVar11 = FUN_021e7360(&local_90,&local_b8);
    if ((uVar11 & 1) != 0) {
      *(undefined4 *)(param_1 + 0x133a8) = 0;
      local_338._0_4_ = 1;
      *(undefined4 *)(param_1 + 0x13330) = 1;
                    /* WARNING: Could not recover jumptable at 0x01e942f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)((ulong)DAT_0417903c * 4 + 0x1e942f4))();
      return;
    }
    FUN_01e95d94(param_1,local_340 == 0);
    break;
  case 5:
    iVar3 = *(int *)(param_1 + 0xb01c);
    FUN_01e63f1c(&local_338);
    uVar11 = (ulong)local_b0 >> 0x20;
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    local_b8 = (undefined *)0x0;
    local_338 = (long ****)CONCAT44(local_338._4_4_,1);
    if (iVar3 == 0) {
      fVar27 = 0.0;
      fVar28 = 10.0;
      if (*(long *)(param_1 + 8) == 0) {
        fVar29 = 0.0;
      }
      else {
        uVar26 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        fVar29 = 0.0;
        if (uVar26 != 0xffffffff) {
          puVar19 = &DAT_053fe348 + (ulong)uVar26 * 0xba0;
          if (9 < uVar26) {
            puVar19 = &DAT_053fe348;
          }
          fVar29 = *(float *)(puVar19 + 0x7d8) + 0.0;
          fVar27 = *(float *)(puVar19 + 0x7dc) + 0.0;
          fVar28 = *(float *)(puVar19 + 0x7e0) + 10.0;
        }
      }
      local_b8 = (undefined *)CONCAT44(fVar27,fVar29);
      local_b0 = (undefined *)CONCAT44((int)uVar11,fVar28);
    }
    else {
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_c8[0] = local_c8[0] & 0xffffffff00000000;
      FUN_021fd6f0(&local_88,local_c8,param_1 + 0xb010,param_1 + 0xafd8,0);
      FUN_02080828(param_1 + 0x132e0,&local_88,param_1 + 0xb010);
      FUN_021f9ff0(&local_78,&local_b8,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
                   param_1 + 0xafb8);
      local_2e0 = CONCAT31(local_2e0._1_3_,1);
      local_2f0 = CONCAT31(local_2f0._1_3_,1);
      local_310 = local_78;
      uStack_2ec = (undefined4)local_88;
      uStack_2e8 = (undefined4)((ulong)local_88 >> 0x20);
      local_308 = (long ***)CONCAT44(local_308._4_4_,local_70);
      local_2e4 = local_80;
      fVar27 = local_b8._4_4_;
      fVar29 = (float)local_b8;
      fVar28 = local_b0._0_4_;
    }
    local_300 = (undefined *)CONCAT44(fVar27,fVar29);
    local_2f8 = CONCAT44(local_2f8._4_4_,fVar28);
    uStack_2d8 = 1;
    lVar24 = *(long *)PTR_DAT_04bb3968;
    piVar12 = (int *)(**(code **)(*(long *)(lVar24 + 0x2958) + 0xf0))(lVar24 + 0x2958);
    iVar3 = *piVar12;
    piVar12 = (int *)(**(code **)(*(long *)(lVar24 + 0x2988) + 0xf0))(lVar24 + 0x2988);
    lVar24 = *(long *)(param_1 + 8);
    local_318 = (undefined4 *)(param_1 + 0x12650);
    iVar13 = *piVar12;
    local_330 = (long ****)(param_1 + 0x125f0);
    uVar26 = *(uint *)(lVar24 + 0x288);
    uVar4 = *(uint *)(lVar24 + 0x294);
    *(undefined4 *)(lVar24 + 0x288) = *(undefined4 *)(lVar24 + 0x28c);
    uVar6 = *(undefined4 *)(lVar24 + 0x290);
    uVar26 = uVar26 ^ uVar26 << 0xb;
    *(uint *)(lVar24 + 0x290) = uVar4;
    *(undefined4 *)(lVar24 + 0x28c) = uVar6;
    puVar7 = PTR_LAB_04bc1628;
    puVar19 = PTR_s_EmotEnd_04bb4608;
    uVar26 = uVar26 >> 8 ^ uVar4 >> 0x13 ^ uVar26 ^ uVar4;
    *(uint *)(lVar24 + 0x294) = uVar26;
    *(long *)(param_1 + 0x125f8) = param_1;
    *(long *)(param_1 + 0x12658) = param_1;
    *(undefined8 *)(param_1 + 0x12608) = 0;
    *(undefined8 *)(param_1 + 0x12668) = 0;
    *(undefined1 **)(param_1 + 0x12600) = &LAB_01e94f34;
    puVar19 = puVar19 + 0x2f;
    puVar2 = &LAB_01e939ac;
    if (local_340 != 0) {
      puVar2 = puVar7;
    }
    local_24c = iVar3 + (int)((ulong)uVar26 * (ulong)((iVar13 - iVar3) + 1) >> 0x20);
    *(undefined1 **)(param_1 + 0x12660) = puVar2;
    if (local_220 != puVar19) {
      bVar9 = SBORROW4(local_218,10);
      iVar3 = local_218 + -10;
      bVar10 = local_218 == 10;
      iVar13 = 10;
LAB_01e947d8:
      local_318 = (undefined4 *)(param_1 + 0x12650);
      local_330 = (long ****)(param_1 + 0x125f0);
      if (bVar10 || iVar3 < 0 != bVar9) {
        iVar13 = local_218 + -1;
      }
      memcpy(local_220,puVar19,(long)iVar13);
      local_220[iVar13] = 0;
    }
    goto LAB_01e947f0;
  case 6:
    iVar3 = *(int *)(param_1 + 0xb01c);
    FUN_01e63f1c(&local_338);
    uVar11 = (ulong)local_b0 >> 0x20;
    local_b0 = (undefined *)((ulong)local_b0 & 0xffffffff00000000);
    local_b8 = (undefined *)0x0;
    local_338 = (long ****)CONCAT44(local_338._4_4_,1);
    if (iVar3 == 0) {
      fVar27 = 0.0;
      fVar28 = 10.0;
      if (*(long *)(param_1 + 8) == 0) {
        fVar29 = 0.0;
      }
      else {
        uVar26 = *(uint *)(*(long *)(param_1 + 8) + 0x508);
        fVar29 = 0.0;
        if (uVar26 != 0xffffffff) {
          puVar19 = &DAT_053fe348 + (ulong)uVar26 * 0xba0;
          if (9 < uVar26) {
            puVar19 = &DAT_053fe348;
          }
          fVar29 = *(float *)(puVar19 + 0x7d8) + 0.0;
          fVar27 = *(float *)(puVar19 + 0x7dc) + 0.0;
          fVar28 = *(float *)(puVar19 + 0x7e0) + 10.0;
        }
      }
      local_b8 = (undefined *)CONCAT44(fVar27,fVar29);
      local_b0 = (undefined *)CONCAT44((int)uVar11,fVar28);
    }
    else {
      local_70 = 0;
      local_78 = 0;
      local_80 = 0;
      local_88 = 0;
      local_c8[0] = local_c8[0] & 0xffffffff00000000;
      FUN_021fd6f0(&local_88,local_c8,param_1 + 0xb010,param_1 + 0xafd8,0);
      FUN_02080828(param_1 + 0x132e0,&local_88,param_1 + 0xb010);
      FUN_021f9ff0(&local_78,&local_b8,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,
                   param_1 + 0xafb8);
      local_2e0 = CONCAT31(local_2e0._1_3_,1);
      local_2f0 = CONCAT31(local_2f0._1_3_,1);
      local_310 = local_78;
      uStack_2ec = (undefined4)local_88;
      uStack_2e8 = (undefined4)((ulong)local_88 >> 0x20);
      local_308 = (long ***)CONCAT44(local_308._4_4_,local_70);
      local_2e4 = local_80;
      fVar27 = local_b8._4_4_;
      fVar29 = (float)local_b8;
      fVar28 = local_b0._0_4_;
    }
    local_300 = (undefined *)CONCAT44(fVar27,fVar29);
    local_2f8 = CONCAT44(local_2f8._4_4_,fVar28);
    uStack_2d8 = 1;
    lVar24 = *(long *)PTR_DAT_04bb3968;
    piVar12 = (int *)(**(code **)(*(long *)(lVar24 + 0x29b8) + 0xf0))(lVar24 + 0x29b8);
    iVar3 = *piVar12;
    piVar12 = (int *)(**(code **)(*(long *)(lVar24 + 0x29e8) + 0xf0))(lVar24 + 0x29e8);
    lVar24 = *(long *)(param_1 + 8);
    local_318 = (undefined4 *)(param_1 + 0x12650);
    iVar13 = *piVar12;
    local_330 = (long ****)(param_1 + 0x125f0);
    uVar26 = *(uint *)(lVar24 + 0x288);
    uVar4 = *(uint *)(lVar24 + 0x294);
    *(undefined4 *)(lVar24 + 0x288) = *(undefined4 *)(lVar24 + 0x28c);
    uVar6 = *(undefined4 *)(lVar24 + 0x290);
    uVar26 = uVar26 ^ uVar26 << 0xb;
    *(uint *)(lVar24 + 0x290) = uVar4;
    *(undefined4 *)(lVar24 + 0x28c) = uVar6;
    puVar7 = PTR_LAB_04bc1628;
    puVar19 = PTR_s_EmotEnd_04bb4608;
    uVar26 = uVar26 >> 8 ^ uVar4 >> 0x13 ^ uVar26 ^ uVar4;
    *(uint *)(lVar24 + 0x294) = uVar26;
    *(long *)(param_1 + 0x125f8) = param_1;
    *(long *)(param_1 + 0x12658) = param_1;
    *(undefined8 *)(param_1 + 0x12608) = 0;
    *(undefined8 *)(param_1 + 0x12668) = 0;
    *(undefined1 **)(param_1 + 0x12600) = &LAB_01e94f34;
    puVar19 = puVar19 + 0x195;
    puVar2 = &LAB_01e939ac;
    if (local_340 != 0) {
      puVar2 = puVar7;
    }
    local_24c = iVar3 + (int)((ulong)uVar26 * (ulong)((iVar13 - iVar3) + 1) >> 0x20);
    *(undefined1 **)(param_1 + 0x12660) = puVar2;
    if (local_220 != puVar19) {
      bVar9 = SBORROW4(local_218,0x10);
      iVar3 = local_218 + -0x10;
      bVar10 = local_218 == 0x10;
      iVar13 = 0x10;
      goto LAB_01e947d8;
    }
LAB_01e947f0:
    if (*(int *)(param_1 + 0xef10) < *(int *)(param_1 + 0xef14)) {
      uStack_2d4 = 1;
      FUN_021920b0((int *)(param_1 + 0xef10),&local_338);
    }
    break;
  default:
    FUN_01e953f4(param_1);
  }
LAB_01e9480c:
  *(int *)(param_1 + 0x13400) = iVar23;
  return;
}

