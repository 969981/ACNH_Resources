
void FUN_0395db40(long param_1,ulong param_2,uint param_3,uint param_4,long param_5)

{
  undefined8 *puVar1;
  long *plVar2;
  int iVar3;
  bool bVar4;
  undefined *puVar5;
  long lVar6;
  uint uVar7;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar8;
  uint uVar9;
  long lVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  float *pfVar17;
  ulong uVar18;
  undefined4 uVar19;
  ulong uVar20;
  long lVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 local_13c;
  undefined8 local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  int local_c0;
  undefined4 uStack_bc;
  long local_b8;
  long lStack_b0;
  
  uVar11 = param_4 * 2;
  uVar7 = (uint)param_2;
  uVar9 = (param_3 + uVar11 + -1) * uVar7 + 2;
  uVar18 = param_2 & 0xffffffff;
  uVar22 = -(ulong)(uVar9 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar9 << 5;
  lVar6 = param_5;
  if (param_5 == 0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),param_2,0);
    plVar2 = (long *)(lVar21 + 8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xa8);
    }
    lVar6 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x2350) = 0;
  *(undefined8 *)(param_1 + 9000) = 0;
  *(undefined8 *)(param_1 + 0x2330) = 0;
  *(undefined8 *)(param_1 + 0x2338) = 0;
  *(undefined8 *)(param_1 + 0x2340) = 0;
  *(byte *)(param_1 + 0x2348) = *(byte *)(param_1 + 0x2348) & 0xfe;
  puVar5 = PTR_DAT_04bd0fa8;
  *(undefined2 *)(param_1 + 0x234a) = 0;
  if (uVar9 == 0) {
    lVar6 = 0;
    local_13c = 0;
    uVar15 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar5,param_1 + 0x2320,lVar6,uVar22,8,0);
    *(undefined2 *)(param_1 + 0x234a) = 0;
    lVar6 = *(long *)(param_1 + 0x2338);
    if (*(long *)(param_1 + 0x2340) == 0) {
      uVar15 = 0;
      if (lVar6 != 0) goto LAB_0395dc80;
      local_13c = 0;
    }
    else {
      uVar15 = (ulong)(uint)(*(int *)(param_1 + 9000) - *(int *)(*(long *)(param_1 + 0x2340) + 0x10)
                            );
      if (lVar6 == 0) {
        local_13c = 0;
      }
      else {
LAB_0395dc80:
        local_13c = *(undefined4 *)(lVar6 + 0x104);
      }
    }
  }
  lVar21 = (**(code **)PTR_DAT_04bb2cd8)(lVar6);
  fVar27 = (float)param_4;
  puVar1 = (undefined8 *)(lVar21 + uVar15);
  *puVar1 = 0x3f80000000000000;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0x3f0000003f000000;
  *(undefined8 *)((long)puVar1 + 0xc) = 0x3f80000000000000;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  if (param_4 < 2) {
    iVar12 = 1;
  }
  else if (uVar7 == 0) {
    uVar9 = 1;
    do {
      fVar23 = ((float)uVar9 / (fVar27 + fVar27) + -0.5) * 3.1415927;
      if (ABS(fVar23) == INFINITY) {
        sinf(fVar23);
        cosf(fVar23);
      }
      uVar9 = uVar9 + 1;
    } while (param_4 != uVar9);
    iVar12 = 1;
  }
  else {
    lVar10 = 1;
    uVar9 = 1;
    do {
      fVar25 = ((float)uVar9 / (fVar27 + fVar27) + -0.5) * 3.1415927;
      fVar23 = sinf(fVar25);
      fVar23 = fVar23 * -0.5;
      fVar25 = cosf(fVar25);
      iVar12 = (int)lVar10;
      uVar20 = 0;
      pfVar17 = (float *)(uVar15 + lVar21 + 0x10 + (long)iVar12 * 0x20);
      do {
        fVar26 = ((float)(uVar20 & 0xffffffff) * 6.2831855) / (float)uVar18;
        fVar24 = cosf(fVar26);
        fVar24 = fVar25 * 0.5 * fVar24;
        fVar26 = sinf(fVar26);
        fVar26 = fVar25 * 0.5 * fVar26;
        uVar20 = uVar20 + 1;
        pfVar17[-4] = fVar24;
        pfVar17[-3] = fVar23 + 0.5;
        pfVar17[-2] = fVar26;
        pfVar17[-1] = fVar24 + fVar24;
        pfVar17[2] = fVar24 + 0.5;
        pfVar17[3] = fVar26 + 0.5;
        *pfVar17 = fVar23 + fVar23;
        pfVar17[1] = fVar26 + fVar26;
        pfVar17 = pfVar17 + 8;
      } while (uVar7 != (uint)uVar20);
      uVar9 = uVar9 + 1;
      lVar10 = (long)iVar12 + uVar20;
    } while (uVar9 != param_4);
    iVar12 = iVar12 + (uint)uVar20;
  }
  if (uVar7 == 0) {
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 1;
    } while (uVar9 <= param_3);
  }
  else {
    uVar9 = 0;
    do {
      puVar16 = (undefined4 *)(uVar15 + lVar21 + 0x10 + (long)iVar12 * 0x20);
      uVar14 = 0;
      fVar23 = 0.5 - (float)uVar9 / (float)param_3;
      do {
        fVar24 = ((float)uVar14 * 6.2831855) / (float)uVar18;
        fVar25 = cosf(fVar24);
        fVar25 = fVar25 * 0.5;
        fVar24 = sinf(fVar24);
        fVar24 = fVar24 * 0.5;
        uVar14 = uVar14 + 1;
        puVar16[-4] = fVar25;
        puVar16[-3] = fVar23;
        *puVar16 = 0;
        puVar16[2] = fVar25 + 0.5;
        puVar16[3] = fVar23 + 0.5;
        puVar16[-2] = fVar24;
        puVar16[-1] = fVar25 + fVar25;
        puVar16[1] = fVar24 + fVar24;
        puVar16 = puVar16 + 8;
      } while (uVar7 != uVar14);
      uVar9 = uVar9 + 1;
      iVar12 = iVar12 + uVar14;
    } while (uVar9 <= param_3);
  }
  uVar9 = param_4 + 1;
  if (uVar9 < uVar11) {
    if (uVar7 == 0) {
      uVar11 = 1;
      do {
        fVar23 = ((float)(param_4 + uVar11) / (fVar27 + fVar27) + -0.5) * 3.1415927;
        if (ABS(fVar23) == INFINITY) {
          sinf(fVar23);
          cosf(fVar23);
        }
        uVar11 = uVar11 + 1;
      } while (param_4 != uVar11);
    }
    else {
      do {
        fVar25 = ((float)uVar9 / (fVar27 + fVar27) + -0.5) * 3.1415927;
        fVar23 = sinf(fVar25);
        fVar23 = fVar23 * -0.5;
        fVar25 = cosf(fVar25);
        uVar14 = 0;
        pfVar17 = (float *)(uVar15 + lVar21 + 0x10 + (long)iVar12 * 0x20);
        do {
          fVar26 = ((float)uVar14 * 6.2831855) / (float)uVar18;
          fVar24 = cosf(fVar26);
          fVar24 = fVar25 * 0.5 * fVar24;
          fVar26 = sinf(fVar26);
          fVar26 = fVar25 * 0.5 * fVar26;
          uVar14 = uVar14 + 1;
          pfVar17[-4] = fVar24;
          pfVar17[-3] = fVar23 + -0.5;
          pfVar17[-2] = fVar26;
          pfVar17[-1] = fVar24 + fVar24;
          pfVar17[2] = fVar24 + 0.5;
          pfVar17[3] = fVar26 + 0.5;
          *pfVar17 = fVar23 + fVar23;
          pfVar17[1] = fVar26 + fVar26;
          pfVar17 = pfVar17 + 8;
        } while (uVar7 != uVar14);
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + uVar14;
      } while (uVar9 != uVar11);
    }
  }
  puVar1 = puVar1 + (long)iVar12 * 4;
  *puVar1 = 0xbf80000000000000;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0x3f0000003f000000;
  *(undefined8 *)((long)puVar1 + 0xc) = 0xbf80000000000000;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  local_c0 = (int)uVar15;
  uStack_bc = local_13c;
  local_b8 = lVar6;
  lStack_b0 = param_1 + 0x2320;
  FUN_0390ebc0(param_1 + 0x24a8,&local_c0,0x20,uVar22);
  *(undefined8 *)(param_1 + 0x24e0) = 0x22;
  *(undefined8 *)(param_1 + 0x24ec) = 0xc00000022;
  *(undefined8 *)(param_1 + 0x24f8) = 0x1800000016;
  *(undefined2 *)(param_1 + 0x24e8) = 1;
  *(undefined2 *)(param_1 + 0x24f4) = 1;
  lVar6 = param_1 + 0x2358;
  *(undefined2 *)(param_1 + 0x2500) = 1;
  lStack_c8 = lVar6;
  if (uVar7 == 0) {
    if (param_5 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x2388) = 0;
    *(undefined8 *)(param_1 + 0x2360) = 0;
    *(undefined8 *)(param_1 + 0x2368) = 0;
    *(undefined8 *)(param_1 + 0x2370) = 0;
    *(undefined8 *)(param_1 + 0x2378) = 0;
    *(undefined2 *)(param_1 + 0x2382) = 0;
    *(byte *)(param_1 + 0x2380) = *(byte *)(param_1 + 0x2380) & 0xfe;
    local_d8 = 0;
    local_d0 = 0;
    FUN_039620c0(param_1 + 0x25c8,&local_d8,0,param_3,param_4,0,0);
    uVar22 = 0;
    uVar8 = extraout_x1_00;
    if (2 < param_4) {
      uVar11 = 2;
      do {
        uVar11 = uVar11 + 2;
      } while (uVar11 < param_4);
      uVar22 = 0;
      goto LAB_0395e3f0;
    }
  }
  else {
    iVar12 = param_4 * 6 + -3;
    if (param_4 < 2) {
      iVar12 = 3;
    }
    iVar12 = iVar12 * uVar7;
    if (uVar7 != 1) {
      uVar11 = 0;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 1;
          iVar12 = iVar12 + 6;
        } while (uVar9 <= param_3);
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 1;
          iVar12 = iVar12 + 6;
        } while (uVar9 <= param_3);
        uVar11 = uVar11 + 2;
      } while (uVar11 != (uVar7 & 0xfffffffe));
    }
    if ((param_2 & 1) != 0) {
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 1;
        iVar12 = iVar12 + 6;
      } while (uVar11 <= param_3);
    }
    iVar3 = (param_4 * 6 + -0xc) * uVar7;
    if (0xfffffffd < param_4 - 3) {
      iVar3 = 0;
    }
    uVar11 = iVar12 + uVar7 * 3 + iVar3;
    lVar21 = param_5;
    if (param_5 == 0) {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
      plVar2 = (long *)(lVar10 + 8);
      if (lVar21 != 0) {
        plVar2 = (long *)(lVar21 + 0xa8);
      }
      lVar21 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x2388) = 0;
    *(undefined8 *)(param_1 + 0x2360) = 0;
    *(undefined8 *)(param_1 + 0x2368) = 0;
    *(undefined8 *)(param_1 + 0x2370) = 0;
    *(undefined8 *)(param_1 + 0x2378) = 0;
    *(undefined2 *)(param_1 + 0x2382) = 0;
    *(byte *)(param_1 + 0x2380) = *(byte *)(param_1 + 0x2380) & 0xfe;
    if (uVar11 == 0) {
      local_d0 = 0;
      lVar6 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar6,lVar21,
                   -(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1,4,0);
      lVar6 = *(long *)(param_1 + 0x2378);
      local_d0 = *(long *)(param_1 + 0x2370);
    }
    *(undefined2 *)(param_1 + 0x2382) = 0;
    iVar12 = 0;
    if (lVar6 != 0) {
      iVar12 = *(int *)(param_1 + 0x2360) - *(int *)(lVar6 + 0x10);
    }
    uVar19 = 0;
    if (local_d0 != 0) {
      uVar19 = *(undefined4 *)(local_d0 + 0x104);
    }
    local_d8 = CONCAT44(uVar19,iVar12);
    FUN_039620c0(param_1 + 0x25c8,&local_d8,uVar18,param_3,param_4,0,0);
    uVar11 = 0;
    uVar22 = 0;
    do {
      uVar11 = uVar11 + 2;
      uVar22 = (ulong)((int)uVar22 + 3);
    } while (uVar11 < uVar7);
    uVar8 = extraout_x1_01;
    if (2 < param_4) {
      uVar11 = 2;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 2;
          uVar22 = (ulong)((int)uVar22 + 6);
        } while (uVar9 < uVar7);
        uVar11 = uVar11 + 2;
      } while (uVar11 < param_4);
LAB_0395e3f0:
      if (uVar7 == 0) goto LAB_0395e420;
    }
    uVar11 = 0;
    do {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 2;
        uVar22 = (ulong)((int)uVar22 + 6);
      } while (uVar9 <= param_3);
      uVar11 = uVar11 + 2;
    } while (uVar11 < uVar7);
  }
LAB_0395e420:
  uVar11 = param_4 - 2;
  if (2 < uVar11) {
    uVar9 = 2;
    if (uVar7 == 0) {
      do {
        uVar9 = uVar9 + 2;
      } while (uVar9 < uVar11);
    }
    else {
      do {
        uVar14 = 0;
        do {
          uVar14 = uVar14 + 2;
          uVar22 = (ulong)((int)uVar22 + 6);
        } while (uVar14 < uVar7);
        uVar9 = uVar9 + 2;
      } while (uVar9 < uVar11);
    }
  }
  if (uVar7 == 0) {
    lVar6 = param_5;
    if (param_5 == 0) {
      lVar21 = *(long *)PTR_DAT_04bb2698;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar8,0);
      plVar2 = (long *)(lVar21 + 8);
      if (lVar6 != 0) {
        plVar2 = (long *)(lVar6 + 0xa8);
      }
      lVar6 = *plVar2;
    }
    lVar21 = param_1 + 0x2390;
    *(undefined8 *)(param_1 + 0x23c0) = 0;
    *(undefined8 *)(param_1 + 0x2398) = 0;
    *(undefined8 *)(param_1 + 0x23a0) = 0;
    *(undefined8 *)(param_1 + 0x23a8) = 0;
    *(undefined8 *)(param_1 + 0x23b0) = 0;
    *(undefined2 *)(param_1 + 0x23ba) = 0;
    *(byte *)(param_1 + 0x23b8) = *(byte *)(param_1 + 0x23b8) & 0xfe;
    if ((int)uVar22 == 0) {
      lVar10 = 0;
      lVar6 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar21,lVar6,
                   -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
      lVar6 = *(long *)(param_1 + 0x23b0);
      lVar10 = *(long *)(param_1 + 0x23a8);
    }
    *(undefined2 *)(param_1 + 0x23ba) = 0;
    local_d0 = lVar10;
    lStack_c8 = lVar21;
    if (lVar6 == 0) {
      iVar12 = 0;
      local_d8 = (ulong)local_d8._4_4_ << 0x20;
      if (lVar10 == 0) goto LAB_0395e6f0;
LAB_0395e6c8:
      uVar19 = *(undefined4 *)(lVar10 + 0x104);
      (**(code **)PTR_DAT_04bb2cd8)(lVar10);
    }
    else {
      iVar12 = *(int *)(param_1 + 0x2398) - *(int *)(lVar6 + 0x10);
      local_d8 = CONCAT44(local_d8._4_4_,iVar12);
      if (lVar10 != 0) goto LAB_0395e6c8;
LAB_0395e6f0:
      uVar19 = 0;
    }
    local_d8 = CONCAT44(uVar19,(undefined4)local_d8);
    if (2 < param_4) {
      uVar9 = 2;
      do {
        uVar9 = uVar9 + 2;
      } while (uVar9 < param_4);
    }
    uVar9 = 0;
    do {
      uVar9 = uVar9 + 2;
    } while (uVar9 <= param_3);
    if (2 < uVar11) {
      uVar9 = 2;
      do {
        uVar9 = uVar9 + 2;
      } while (uVar9 < uVar11);
    }
    local_c0 = iVar12;
    uStack_bc = uVar19;
    local_b8 = lVar10;
    lStack_b0 = lVar21;
    FUN_03901480(param_1 + 0x2628,&local_c0,1,0);
    uVar22 = 0;
    uVar11 = 4;
    *(undefined4 *)(param_1 + 0x2634) = 4;
    uVar8 = extraout_x1_03;
    if (param_4 < 5) goto LAB_0395e7a4;
    do {
      uVar11 = uVar11 + 4;
    } while (uVar11 < param_4);
    uVar22 = 0;
LAB_0395e794:
    if (4 < param_4 - 4) goto LAB_0395e7e4;
  }
  else {
    uVar11 = 0;
    do {
      uVar11 = uVar11 + 2;
      uVar9 = (int)uVar22 + 3;
      uVar22 = (ulong)uVar9;
    } while (uVar11 < uVar7);
    lVar6 = param_5;
    if (param_5 == 0) {
      lVar21 = *(long *)PTR_DAT_04bb2698;
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar8,0);
      plVar2 = (long *)(lVar21 + 8);
      if (lVar6 != 0) {
        plVar2 = (long *)(lVar6 + 0xa8);
      }
      lVar6 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x23c0) = 0;
    *(undefined8 *)(param_1 + 0x2398) = 0;
    *(undefined8 *)(param_1 + 0x23a0) = 0;
    *(undefined8 *)(param_1 + 0x23a8) = 0;
    *(undefined8 *)(param_1 + 0x23b0) = 0;
    *(undefined2 *)(param_1 + 0x23ba) = 0;
    *(byte *)(param_1 + 0x23b8) = *(byte *)(param_1 + 0x23b8) & 0xfe;
    if (uVar9 == 0) {
      local_d0 = 0;
      lVar6 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2390,lVar6,
                   -(ulong)(uVar9 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
      lVar6 = *(long *)(param_1 + 0x23b0);
      local_d0 = *(long *)(param_1 + 0x23a8);
    }
    *(undefined2 *)(param_1 + 0x23ba) = 0;
    iVar12 = 0;
    if (lVar6 != 0) {
      iVar12 = *(int *)(param_1 + 0x2398) - *(int *)(lVar6 + 0x10);
    }
    uVar19 = 0;
    if (local_d0 != 0) {
      uVar19 = *(undefined4 *)(local_d0 + 0x104);
    }
    local_d8 = CONCAT44(uVar19,iVar12);
    lStack_c8 = param_1 + 0x2390;
    FUN_039620c0(param_1 + 0x2628,&local_d8,uVar18,param_3,param_4,0,1);
    uVar11 = 0;
    uVar22 = 0;
    do {
      uVar11 = uVar11 + 4;
      uVar22 = (ulong)((int)uVar22 + 3);
    } while (uVar11 < uVar7);
    uVar8 = extraout_x1_02;
    if (4 < param_4) {
      uVar11 = 4;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 4;
          uVar22 = (ulong)((int)uVar22 + 6);
        } while (uVar9 < uVar7);
        uVar11 = uVar11 + 4;
      } while (uVar11 < param_4);
      if (uVar7 == 0) goto LAB_0395e794;
    }
    uVar11 = 0;
    do {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 4;
        uVar22 = (ulong)((int)uVar22 + 6);
      } while (uVar9 <= param_3);
      uVar11 = uVar11 + 4;
    } while (uVar11 < uVar7);
LAB_0395e7a4:
    if (4 < param_4 - 4) {
      if (uVar7 == 0) {
LAB_0395e7e4:
        uVar11 = 4;
        do {
          uVar11 = uVar11 + 4;
        } while (uVar11 < param_4 - 4);
      }
      else {
        uVar11 = 4;
        do {
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 4;
            uVar22 = (ulong)((int)uVar22 + 6);
          } while (uVar9 < uVar7);
          uVar11 = uVar11 + 4;
        } while (uVar11 < param_4 - 4);
      }
    }
    if (uVar7 != 0) {
      uVar11 = 0;
      do {
        uVar11 = uVar11 + 4;
        uVar22 = (ulong)((int)uVar22 + 3);
      } while (uVar11 < uVar7);
    }
  }
  lVar6 = param_5;
  if (param_5 == 0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar8,0);
    plVar2 = (long *)(lVar21 + 8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xa8);
    }
    lVar6 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x23f8) = 0;
  *(undefined8 *)(param_1 + 0x23d0) = 0;
  *(undefined8 *)(param_1 + 0x23d8) = 0;
  *(undefined8 *)(param_1 + 0x23e0) = 0;
  *(undefined8 *)(param_1 + 0x23e8) = 0;
  *(undefined2 *)(param_1 + 0x23f2) = 0;
  *(byte *)(param_1 + 0x23f0) = *(byte *)(param_1 + 0x23f0) & 0xfe;
  if ((int)uVar22 == 0) {
    local_d0 = 0;
    lVar6 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x23c8,lVar6,
                 -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
    lVar6 = *(long *)(param_1 + 0x23e8);
    local_d0 = *(long *)(param_1 + 0x23e0);
  }
  *(undefined2 *)(param_1 + 0x23f2) = 0;
  iVar12 = 0;
  if (lVar6 != 0) {
    iVar12 = *(int *)(param_1 + 0x23d0) - *(int *)(lVar6 + 0x10);
  }
  uVar19 = 0;
  if (local_d0 != 0) {
    uVar19 = *(undefined4 *)(local_d0 + 0x104);
  }
  local_d8 = CONCAT44(uVar19,iVar12);
  lStack_c8 = param_1 + 0x23c8;
  FUN_039620c0(param_1 + 0x2688,&local_d8,uVar18,param_3,param_4,0,2);
  lVar6 = param_1 + 0x2400;
  lStack_e0 = lVar6;
  if (uVar7 == 0) {
    if (param_5 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x2430) = 0;
    *(undefined8 *)(param_1 + 0x2408) = 0;
    *(undefined8 *)(param_1 + 0x2410) = 0;
    *(undefined8 *)(param_1 + 0x2418) = 0;
    *(undefined8 *)(param_1 + 0x2420) = 0;
    *(undefined2 *)(param_1 + 0x242a) = 0;
    *(byte *)(param_1 + 0x2428) = *(byte *)(param_1 + 0x2428) & 0xfe;
    local_f0 = 0;
    local_e8 = 0;
    FUN_039620c0(param_1 + 0x26e8,&local_f0,0,param_3,param_4,1,0);
    uVar22 = 0;
    uVar8 = extraout_x1_05;
    if (2 < param_4) {
      uVar11 = 2;
      do {
        uVar11 = uVar11 + 2;
      } while (uVar11 < param_4);
      uVar22 = 0;
      goto LAB_0395eb30;
    }
  }
  else {
    uVar9 = 0;
    uVar11 = uVar7 << 1;
    if (1 < param_4) {
      uVar11 = (param_4 * 4 + -2) * uVar7;
    }
    uVar14 = param_4;
    if (param_4 < 3) {
      uVar14 = 2;
    }
    do {
      uVar13 = 0;
      do {
        uVar13 = uVar13 + 1;
        uVar11 = uVar11 + 4;
      } while (uVar13 <= param_3);
      uVar9 = uVar9 + 1;
    } while (uVar9 != uVar7);
    if (1 < param_4) {
      uVar11 = (uVar14 * 4 + -4) * uVar7 + uVar11;
    }
    lVar21 = param_5;
    if (param_5 == 0) {
      lVar10 = *(long *)PTR_DAT_04bb2698;
      lVar21 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04,
                                   0);
      plVar2 = (long *)(lVar10 + 8);
      if (lVar21 != 0) {
        plVar2 = (long *)(lVar21 + 0xa8);
      }
      lVar21 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x2430) = 0;
    *(undefined8 *)(param_1 + 0x2408) = 0;
    *(undefined8 *)(param_1 + 0x2410) = 0;
    *(undefined8 *)(param_1 + 0x2418) = 0;
    *(undefined8 *)(param_1 + 0x2420) = 0;
    *(undefined2 *)(param_1 + 0x242a) = 0;
    *(byte *)(param_1 + 0x2428) = *(byte *)(param_1 + 0x2428) & 0xfe;
    if (uVar11 == 0) {
      local_e8 = 0;
      lVar6 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar6,lVar21,
                   -(ulong)(uVar11 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar11 << 1,4,0);
      lVar6 = *(long *)(param_1 + 0x2420);
      local_e8 = *(long *)(param_1 + 0x2418);
    }
    *(undefined2 *)(param_1 + 0x242a) = 0;
    iVar12 = 0;
    if (lVar6 != 0) {
      iVar12 = *(int *)(param_1 + 0x2408) - *(int *)(lVar6 + 0x10);
    }
    uVar19 = 0;
    if (local_e8 != 0) {
      uVar19 = *(undefined4 *)(local_e8 + 0x104);
    }
    local_f0 = CONCAT44(uVar19,iVar12);
    FUN_039620c0(param_1 + 0x26e8,&local_f0,uVar18,param_3,param_4,1,0);
    uVar11 = uVar7;
    if (uVar7 < 3) {
      uVar11 = 2;
    }
    uVar22 = (ulong)((uVar11 - 1 & 0xfffffffe) + 2);
    uVar8 = extraout_x1_06;
    if (param_4 < 3) {
      bVar4 = false;
LAB_0395eb40:
      uVar11 = 0;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 2;
          uVar22 = (ulong)((int)uVar22 + 4);
        } while (uVar9 <= param_3);
        uVar11 = uVar11 + 2;
      } while (uVar11 < uVar7);
      if (bVar4) {
        if (uVar7 == 0) goto LAB_0395eba4;
        uVar11 = 2;
        do {
          uVar9 = 0;
          do {
            uVar9 = uVar9 + 2;
            uVar22 = (ulong)((int)uVar22 + 4);
          } while (uVar9 < uVar7);
          uVar11 = uVar11 + 2;
        } while (uVar11 < param_4);
      }
    }
    else {
      uVar11 = 2;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 2;
          uVar22 = (ulong)((int)uVar22 + 4);
        } while (uVar9 < uVar7);
        uVar11 = uVar11 + 2;
      } while (uVar11 < param_4);
LAB_0395eb30:
      if (uVar7 != 0) {
        bVar4 = true;
        goto LAB_0395eb40;
      }
LAB_0395eba4:
      uVar11 = 2;
      do {
        uVar11 = uVar11 + 2;
      } while (uVar11 < param_4);
    }
  }
  lVar6 = param_5;
  if (param_5 == 0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar8,0);
    plVar2 = (long *)(lVar21 + 8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xa8);
    }
    lVar6 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x2468) = 0;
  *(undefined8 *)(param_1 + 0x2440) = 0;
  *(undefined8 *)(param_1 + 0x2448) = 0;
  *(undefined8 *)(param_1 + 0x2450) = 0;
  *(undefined8 *)(param_1 + 0x2458) = 0;
  *(undefined2 *)(param_1 + 0x2462) = 0;
  *(byte *)(param_1 + 0x2460) = *(byte *)(param_1 + 0x2460) & 0xfe;
  if ((int)uVar22 == 0) {
    local_e8 = 0;
    lVar6 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2438,lVar6,
                 -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
    lVar6 = *(long *)(param_1 + 0x2458);
    local_e8 = *(long *)(param_1 + 0x2450);
  }
  *(undefined2 *)(param_1 + 0x2462) = 0;
  iVar12 = 0;
  if (lVar6 != 0) {
    iVar12 = *(int *)(param_1 + 0x2440) - *(int *)(lVar6 + 0x10);
  }
  uVar19 = 0;
  if (local_e8 != 0) {
    uVar19 = *(undefined4 *)(local_e8 + 0x104);
  }
  local_f0 = CONCAT44(uVar19,iVar12);
  lStack_e0 = param_1 + 0x2438;
  FUN_039620c0(param_1 + 0x2748,&local_f0,uVar18,param_3,param_4,1,1);
  if (uVar7 == 0) {
    if (param_4 < 5) {
      uVar22 = 0;
      goto joined_r0x0395eed8;
    }
    uVar11 = 4;
    do {
      uVar11 = uVar11 + 4;
    } while (uVar11 < param_4);
    uVar22 = 0;
  }
  else {
    uVar11 = 0;
    uVar22 = 0;
    do {
      uVar11 = uVar11 + 4;
      uVar22 = (ulong)((int)uVar22 + 2);
    } while (uVar11 < uVar7);
    if (param_4 < 5) {
      bVar4 = false;
    }
    else {
      uVar11 = 4;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 < uVar7);
        uVar11 = uVar11 + 4;
        uVar22 = (ulong)((int)uVar22 + uVar9);
      } while (uVar11 < param_4);
      if (uVar7 == 0) goto LAB_0395ed94;
      bVar4 = true;
    }
    uVar11 = 0;
    do {
      uVar9 = 0;
      do {
        uVar9 = uVar9 + 4;
      } while (uVar9 <= param_3);
      uVar11 = uVar11 + 4;
      uVar22 = (ulong)((int)uVar22 + uVar9);
    } while (uVar11 < uVar7);
    if (!bVar4) goto joined_r0x0395eed8;
    if (uVar7 != 0) {
      uVar11 = 4;
      do {
        uVar9 = 0;
        do {
          uVar9 = uVar9 + 4;
        } while (uVar9 < uVar7);
        uVar11 = uVar11 + 4;
        uVar22 = (ulong)((int)uVar22 + uVar9);
      } while (uVar11 < param_4);
      goto joined_r0x0395eed8;
    }
  }
LAB_0395ed94:
  uVar11 = 4;
  do {
    uVar11 = uVar11 + 4;
  } while (uVar11 < param_4);
joined_r0x0395eed8:
  if (param_5 == 0) {
    lVar21 = *(long *)PTR_DAT_04bb2698;
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar21 + 8);
    if (lVar6 != 0) {
      plVar2 = (long *)(lVar6 + 0xa8);
    }
    param_5 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x24a0) = 0;
  *(undefined8 *)(param_1 + 0x2478) = 0;
  *(undefined8 *)(param_1 + 0x2480) = 0;
  *(undefined8 *)(param_1 + 0x2488) = 0;
  *(undefined8 *)(param_1 + 0x2490) = 0;
  *(undefined2 *)(param_1 + 0x249a) = 0;
  *(byte *)(param_1 + 0x2498) = *(byte *)(param_1 + 0x2498) & 0xfe;
  if ((int)uVar22 == 0) {
    local_e8 = 0;
    lVar6 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2470,param_5,
                 -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
    lVar6 = *(long *)(param_1 + 0x2490);
    local_e8 = *(long *)(param_1 + 0x2488);
  }
  *(undefined2 *)(param_1 + 0x249a) = 0;
  iVar12 = 0;
  if (lVar6 != 0) {
    iVar12 = *(int *)(param_1 + 0x2478) - *(int *)(lVar6 + 0x10);
  }
  uVar19 = 0;
  if (local_e8 != 0) {
    uVar19 = *(undefined4 *)(local_e8 + 0x104);
  }
  local_f0 = CONCAT44(uVar19,iVar12);
  lStack_e0 = param_1 + 0x2470;
  FUN_039620c0(param_1 + 0x27a8,&local_f0,uVar18,param_3,param_4,1,2);
  return;
}

