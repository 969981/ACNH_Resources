
void FUN_0395eef0(long param_1,ulong param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  short sVar3;
  undefined *puVar4;
  long lVar5;
  uint uVar6;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  undefined8 extraout_x1_06;
  undefined8 uVar7;
  long lVar8;
  undefined4 uVar9;
  long lVar10;
  ulong uVar11;
  short *psVar12;
  int iVar13;
  ulong uVar14;
  float *pfVar15;
  uint uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  uint uVar20;
  int iVar21;
  ulong uVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  undefined4 local_134;
  long local_130;
  uint local_f0;
  undefined4 local_ec;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  
  uVar6 = (uint)param_2;
  uVar18 = (param_3 + 2) * uVar6 + 1;
  uVar22 = -(ulong)(uVar18 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar18 << 5;
  lVar5 = param_4;
  if (param_4 == 0) {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),param_2,0);
    plVar2 = (long *)(lVar19 + 8);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xa8);
    }
    lVar5 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x2838) = 0;
  *(undefined8 *)(param_1 + 0x2810) = 0;
  *(undefined8 *)(param_1 + 0x2818) = 0;
  *(undefined8 *)(param_1 + 0x2820) = 0;
  *(undefined8 *)(param_1 + 0x2828) = 0;
  *(byte *)(param_1 + 0x2830) = *(byte *)(param_1 + 0x2830) & 0xfe;
  puVar4 = PTR_DAT_04bd0fa8;
  *(undefined2 *)(param_1 + 0x2832) = 0;
  if (uVar18 == 0) {
    uVar18 = 0;
    lVar5 = 0;
LAB_0395f020:
    lVar19 = 0;
    local_134 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar4,param_1 + 0x2808,lVar5,uVar22,8,0);
    *(undefined2 *)(param_1 + 0x2832) = 0;
    lVar5 = *(long *)(param_1 + 0x2820);
    if (*(long *)(param_1 + 0x2828) == 0) {
      uVar18 = 0;
    }
    else {
      uVar18 = *(int *)(param_1 + 0x2810) - *(int *)(*(long *)(param_1 + 0x2828) + 0x10);
    }
    if (lVar5 == 0) goto LAB_0395f020;
    local_134 = *(undefined4 *)(lVar5 + 0x104);
    lVar19 = (**(code **)PTR_DAT_04bb2cd8)(lVar5);
  }
  local_130 = param_1 + 0x2990;
  fVar26 = (float)(param_2 & 0xffffffff);
  uVar11 = (ulong)uVar18;
  if (uVar6 == 0) {
    uVar20 = 0;
    do {
      uVar20 = uVar20 + 1;
    } while (uVar20 <= param_3);
    iVar21 = 0;
  }
  else {
    lVar10 = 0;
    uVar20 = 0;
    lVar8 = uVar11 + lVar19 + 0x10;
    do {
      lVar10 = (long)(int)lVar10;
      fVar27 = 0.5 - (float)uVar20 / (float)param_3;
      fVar28 = (0.5 - fVar27) * 0.5;
      if (uVar20 == 0) {
        pfVar15 = (float *)(lVar8 + lVar10 * 0x20);
        uVar14 = 0;
        do {
          fVar25 = (((float)(uVar14 & 0xffffffff) + 0.5) * 6.2831855) / fVar26;
          fVar23 = cosf(fVar25);
          fVar23 = fVar28 * fVar23;
          fVar25 = sinf(fVar25);
          fVar25 = fVar28 * fVar25;
          pfVar15[-4] = fVar23;
          pfVar15[-3] = fVar27;
          *pfVar15 = 0.5;
          pfVar15[-2] = fVar25;
          pfVar15[-1] = fVar23;
          pfVar15[1] = fVar25;
          pfVar15[2] = fVar23 + 0.5;
          pfVar15[3] = fVar25 + 0.5;
          fVar24 = SQRT(fVar23 * fVar23 + 0.25 + fVar25 * fVar25);
          if (0.0 < fVar24) {
            fVar24 = 1.0 / fVar24;
            pfVar15[-1] = fVar23 * fVar24;
            *pfVar15 = fVar24 * 0.5;
            pfVar15[1] = fVar25 * fVar24;
          }
          uVar14 = uVar14 + 1;
          pfVar15 = pfVar15 + 8;
        } while (uVar6 != (uint)uVar14);
      }
      else {
        pfVar15 = (float *)(lVar8 + lVar10 * 0x20);
        uVar14 = 0;
        do {
          fVar25 = ((float)(uVar14 & 0xffffffff) * 6.2831855) / fVar26;
          fVar23 = cosf(fVar25);
          fVar23 = fVar28 * fVar23;
          fVar25 = sinf(fVar25);
          fVar25 = fVar28 * fVar25;
          pfVar15[-4] = fVar23;
          pfVar15[-3] = fVar27;
          *pfVar15 = 0.5;
          pfVar15[-2] = fVar25;
          pfVar15[-1] = fVar23;
          pfVar15[1] = fVar25;
          pfVar15[2] = fVar23 + 0.5;
          pfVar15[3] = fVar25 + 0.5;
          fVar24 = SQRT(fVar23 * fVar23 + 0.25 + fVar25 * fVar25);
          if (0.0 < fVar24) {
            fVar24 = 1.0 / fVar24;
            pfVar15[-1] = fVar23 * fVar24;
            *pfVar15 = fVar24 * 0.5;
            pfVar15[1] = fVar25 * fVar24;
          }
          uVar14 = uVar14 + 1;
          pfVar15 = pfVar15 + 8;
        } while (uVar6 != (uint)uVar14);
      }
      lVar10 = lVar10 + uVar14;
      uVar20 = uVar20 + 1;
    } while (uVar20 <= param_3);
    iVar21 = (int)lVar10;
  }
  if (uVar6 != 0) {
    uVar20 = 0;
    lVar8 = uVar11 + (long)iVar21 * 0x20 + lVar19 + 0x10;
    do {
      fVar28 = ((float)uVar20 * 6.2831855) / fVar26;
      fVar27 = cosf(fVar28);
      fVar28 = sinf(fVar28);
      uVar20 = uVar20 + 1;
      *(float *)(lVar8 + -0x10) = fVar27 * 0.5;
      *(undefined4 *)(lVar8 + -0xc) = 0xbf000000;
      *(undefined8 *)(lVar8 + -4) = 0xbf80000000000000;
      *(undefined4 *)(lVar8 + 4) = 0;
      *(float *)(lVar8 + 8) = fVar27 * 0.5 + 0.5;
      *(float *)(lVar8 + -8) = fVar28 * 0.5;
      *(float *)(lVar8 + 0xc) = fVar28 * 0.5 + 0.5;
      lVar8 = lVar8 + 0x20;
    } while (uVar6 != uVar20);
    iVar21 = iVar21 + uVar20;
  }
  puVar1 = (undefined8 *)(lVar19 + uVar11 + (long)iVar21 * 0x20);
  *puVar1 = 0xbf00000000000000;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0xbf80000000000000;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  puVar1[3] = 0x3f0000003f000000;
  local_c0 = CONCAT44(local_134,uVar18);
  local_b8 = lVar5;
  local_b0 = param_1 + 0x2808;
  FUN_0390ebc0(local_130,&local_c0,0x20,uVar22);
  *(undefined8 *)(param_1 + 0x29c8) = 0x22;
  *(undefined8 *)(param_1 + 0x29d4) = 0xc00000022;
  *(undefined8 *)(param_1 + 0x29e0) = 0x1800000016;
  lVar5 = param_1 + 0x2840;
  lVar19 = param_1 + 0x2ab0;
  *(undefined2 *)(param_1 + 0x29d0) = 1;
  *(undefined2 *)(param_1 + 0x29dc) = 1;
  *(undefined2 *)(param_1 + 0x29e8) = 1;
  if (uVar6 == 0) {
    if (param_4 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x2870) = 0;
    *(undefined8 *)(param_1 + 0x2848) = 0;
    *(undefined8 *)(param_1 + 0x2850) = 0;
    *(undefined8 *)(param_1 + 0x2858) = 0;
    *(undefined8 *)(param_1 + 0x2860) = 0;
    *(undefined2 *)(param_1 + 0x286a) = 0;
    *(byte *)(param_1 + 0x2868) = *(byte *)(param_1 + 0x2868) & 0xfe;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = lVar5;
    FUN_03901480(lVar19,&local_c0,1,0);
    *(undefined4 *)(param_1 + 0x2abc) = 4;
    if (param_3 < 2) {
      if (param_4 == 0) {
        nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      }
      *(undefined8 *)(param_1 + 0x28a8) = 0;
      *(undefined8 *)(param_1 + 0x2880) = 0;
      *(undefined8 *)(param_1 + 0x2888) = 0;
      *(undefined8 *)(param_1 + 0x2890) = 0;
      *(undefined8 *)(param_1 + 0x2898) = 0;
      *(undefined2 *)(param_1 + 0x28a2) = 0;
      local_d8 = 0;
      *(byte *)(param_1 + 0x28a0) = *(byte *)(param_1 + 0x28a0) & 0xfe;
      local_d0 = 0;
      local_c0 = 0;
      local_b8 = 0;
      lStack_c8 = param_1 + 0x2878;
      local_b0 = param_1 + 0x2878;
      FUN_03901480(param_1 + 0x2b10,&local_c0,1,0);
      *(undefined4 *)(param_1 + 0x2b1c) = 4;
    }
    else {
      uVar18 = 1;
      do {
        uVar18 = uVar18 + 2;
      } while (uVar18 < param_3);
      if (param_4 == 0) {
        nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      }
      *(undefined8 *)(param_1 + 0x28a8) = 0;
      *(undefined8 *)(param_1 + 0x2880) = 0;
      *(undefined8 *)(param_1 + 0x2888) = 0;
      *(undefined8 *)(param_1 + 0x2890) = 0;
      *(undefined8 *)(param_1 + 0x2898) = 0;
      *(undefined2 *)(param_1 + 0x28a2) = 0;
      local_d8 = 0;
      *(byte *)(param_1 + 0x28a0) = *(byte *)(param_1 + 0x28a0) & 0xfe;
      uVar18 = 1;
      local_d0 = 0;
      do {
        uVar18 = uVar18 + 2;
      } while (uVar18 < param_3);
      local_c0 = 0;
      local_b8 = 0;
      uVar18 = 1;
      lStack_c8 = param_1 + 0x2878;
      local_b0 = param_1 + 0x2878;
      FUN_03901480(param_1 + 0x2b10,&local_c0,1,0);
      *(undefined4 *)(param_1 + 0x2b1c) = 4;
      do {
        uVar18 = uVar18 + 4;
      } while (uVar18 < param_3);
    }
    if (param_4 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    uVar22 = 0;
    *(undefined8 *)(param_1 + 0x28e0) = 0;
    *(undefined8 *)(param_1 + 0x28b8) = 0;
    *(undefined8 *)(param_1 + 0x28c0) = 0;
    *(undefined8 *)(param_1 + 0x28c8) = 0;
    *(undefined8 *)(param_1 + 0x28d0) = 0;
    *(byte *)(param_1 + 0x28d8) = *(byte *)(param_1 + 0x28d8) & 0xfe;
  }
  else {
    lVar8 = param_4;
    lStack_c8 = lVar5;
    if (param_3 < 2) {
      lVar10 = param_4;
      if (param_4 == 0) {
        lVar17 = *(long *)PTR_DAT_04bb2698;
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0
                                    );
        plVar2 = (long *)(lVar17 + 8);
        if (lVar10 != 0) {
          plVar2 = (long *)(lVar10 + 0xa8);
        }
        lVar10 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x2870) = 0;
      *(undefined8 *)(param_1 + 0x2848) = 0;
      *(undefined8 *)(param_1 + 0x2850) = 0;
      *(undefined8 *)(param_1 + 0x2858) = 0;
      *(undefined8 *)(param_1 + 0x2860) = 0;
      *(undefined2 *)(param_1 + 0x286a) = 0;
      *(byte *)(param_1 + 0x2868) = *(byte *)(param_1 + 0x2868) & 0xfe;
      if (uVar6 * 0xc == 0) {
        local_d0 = 0;
        lVar5 = 0;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar5,lVar10,uVar6 * 0xc,4,0);
        lVar5 = *(long *)(param_1 + 0x2860);
        local_d0 = *(long *)(param_1 + 0x2858);
      }
      *(undefined2 *)(param_1 + 0x286a) = 0;
      iVar21 = 0;
      if (lVar5 != 0) {
        iVar21 = *(int *)(param_1 + 0x2848) - *(int *)(lVar5 + 0x10);
      }
      uVar9 = 0;
      if (local_d0 != 0) {
        uVar9 = *(undefined4 *)(local_d0 + 0x104);
      }
      local_d8 = CONCAT44(uVar9,iVar21);
      FUN_03962720(lVar19,&local_d8,param_2 & 0xffffffff,param_3,0,0);
      iVar21 = 0;
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 2;
        iVar21 = iVar21 + 6;
      } while (uVar18 < uVar6);
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 2;
        iVar21 = iVar21 + 6;
      } while (uVar18 < uVar6);
      lVar5 = param_4;
      if (param_4 == 0) {
        lVar19 = *(long *)PTR_DAT_04bb2698;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_02
                                    ,0);
        plVar2 = (long *)(lVar19 + 8);
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 0xa8);
        }
        lVar5 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x28a8) = 0;
      *(undefined8 *)(param_1 + 0x2880) = 0;
      *(undefined8 *)(param_1 + 0x2888) = 0;
      *(undefined8 *)(param_1 + 0x2890) = 0;
      *(undefined8 *)(param_1 + 0x2898) = 0;
      *(undefined2 *)(param_1 + 0x28a2) = 0;
      *(byte *)(param_1 + 0x28a0) = *(byte *)(param_1 + 0x28a0) & 0xfe;
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2878,lVar5,iVar21,4,0);
      *(undefined2 *)(param_1 + 0x28a2) = 0;
      local_d0 = *(long *)(param_1 + 0x2890);
      iVar21 = 0;
      if (*(long *)(param_1 + 0x2898) != 0) {
        iVar21 = *(int *)(param_1 + 0x2880) - *(int *)(*(long *)(param_1 + 0x2898) + 0x10);
      }
      uVar9 = 0;
      if (local_d0 != 0) {
        uVar9 = *(undefined4 *)(local_d0 + 0x104);
      }
      local_d8 = CONCAT44(uVar9,iVar21);
      lStack_c8 = param_1 + 0x2878;
      FUN_03962720(param_1 + 0x2b10,&local_d8,param_2 & 0xffffffff,param_3,0,1);
      uVar22 = 0;
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 4;
        uVar22 = (ulong)((int)uVar22 + 6);
      } while (uVar18 < uVar6);
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 4;
        uVar22 = (ulong)((int)uVar22 + 6);
      } while (uVar18 < uVar6);
      if (param_4 == 0) {
        lVar19 = *(long *)PTR_DAT_04bb2698;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_03
                                    ,0);
        plVar2 = (long *)(lVar19 + 8);
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 0xa8);
        }
        lVar8 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x28e0) = 0;
      *(undefined2 *)(param_1 + 0x28da) = 0;
      *(undefined8 *)(param_1 + 0x28b8) = 0;
      *(undefined8 *)(param_1 + 0x28c0) = 0;
      *(undefined8 *)(param_1 + 0x28c8) = 0;
      *(undefined8 *)(param_1 + 0x28d0) = 0;
      *(byte *)(param_1 + 0x28d8) = *(byte *)(param_1 + 0x28d8) & 0xfe;
LAB_0395fb18:
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x28b0,lVar8,uVar22,4,0);
    }
    else {
      uVar18 = uVar6 * param_3 * 6;
      lVar10 = param_4;
      if (param_4 == 0) {
        lVar17 = *(long *)PTR_DAT_04bb2698;
        lVar10 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0
                                    );
        plVar2 = (long *)(lVar17 + 8);
        if (lVar10 != 0) {
          plVar2 = (long *)(lVar10 + 0xa8);
        }
        lVar10 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x2870) = 0;
      *(undefined8 *)(param_1 + 0x2848) = 0;
      *(undefined8 *)(param_1 + 0x2850) = 0;
      *(undefined8 *)(param_1 + 0x2858) = 0;
      *(undefined8 *)(param_1 + 0x2860) = 0;
      *(undefined2 *)(param_1 + 0x286a) = 0;
      *(byte *)(param_1 + 0x2868) = *(byte *)(param_1 + 0x2868) & 0xfe;
      if (uVar18 == 0) {
        local_d0 = 0;
        lVar5 = 0;
      }
      else {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar5,lVar10,
                     -(ulong)((uVar6 * param_3 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                     (ulong)uVar18 << 1,4,0);
        lVar5 = *(long *)(param_1 + 0x2860);
        local_d0 = *(long *)(param_1 + 0x2858);
      }
      *(undefined2 *)(param_1 + 0x286a) = 0;
      iVar21 = 0;
      if (lVar5 != 0) {
        iVar21 = *(int *)(param_1 + 0x2848) - *(int *)(lVar5 + 0x10);
      }
      uVar9 = 0;
      if (local_d0 != 0) {
        uVar9 = *(undefined4 *)(local_d0 + 0x104);
      }
      local_d8 = CONCAT44(uVar9,iVar21);
      FUN_03962720(lVar19,&local_d8,param_2 & 0xffffffff,param_3,0,0);
      uVar18 = 0;
      iVar21 = 0;
      do {
        uVar18 = uVar18 + 2;
        iVar21 = iVar21 + 3;
      } while (uVar18 < uVar6);
      uVar18 = 1;
      do {
        uVar20 = 0;
        do {
          uVar20 = uVar20 + 2;
          iVar21 = iVar21 + 6;
        } while (uVar20 < uVar6);
        uVar18 = uVar18 + 2;
      } while (uVar18 < param_3);
      iVar13 = 0;
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 2;
        iVar13 = iVar13 + -3;
      } while (uVar18 < uVar6);
      lVar5 = param_4;
      if (param_4 == 0) {
        lVar19 = *(long *)PTR_DAT_04bb2698;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_00
                                    ,0);
        plVar2 = (long *)(lVar19 + 8);
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 0xa8);
        }
        lVar5 = *plVar2;
      }
      lVar19 = 0;
      lVar10 = 0;
      *(undefined8 *)(param_1 + 0x28a8) = 0;
      *(undefined8 *)(param_1 + 0x2880) = 0;
      *(undefined8 *)(param_1 + 0x2888) = 0;
      *(undefined8 *)(param_1 + 0x2890) = 0;
      *(undefined8 *)(param_1 + 0x2898) = 0;
      *(undefined2 *)(param_1 + 0x28a2) = 0;
      *(byte *)(param_1 + 0x28a0) = *(byte *)(param_1 + 0x28a0) & 0xfe;
      if (iVar21 != iVar13) {
        FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2878,lVar5,
                     -(ulong)((uint)(iVar21 - iVar13) >> 0x1f) & 0xfffffffe00000000 |
                     (ulong)(uint)(iVar21 - iVar13) << 1,4,0);
        lVar10 = *(long *)(param_1 + 0x2898);
        lVar19 = *(long *)(param_1 + 0x2890);
      }
      *(undefined2 *)(param_1 + 0x28a2) = 0;
      iVar21 = 0;
      if (lVar10 != 0) {
        iVar21 = *(int *)(param_1 + 0x2880) - *(int *)(lVar10 + 0x10);
      }
      uVar9 = 0;
      if (lVar19 != 0) {
        uVar9 = *(undefined4 *)(lVar19 + 0x104);
      }
      local_d8 = CONCAT44(uVar9,iVar21);
      local_d0 = lVar19;
      lStack_c8 = param_1 + 0x2878;
      FUN_03962720(param_1 + 0x2b10,&local_d8,param_2 & 0xffffffff,param_3,0,1);
      uVar18 = 0;
      iVar21 = 0;
      do {
        uVar18 = uVar18 + 4;
        iVar21 = iVar21 + 3;
      } while (uVar18 < uVar6);
      uVar18 = 1;
      do {
        uVar20 = 0;
        do {
          uVar20 = uVar20 + 4;
          iVar21 = iVar21 + 6;
        } while (uVar20 < uVar6);
        uVar18 = uVar18 + 4;
      } while (uVar18 < param_3);
      iVar13 = 0;
      uVar18 = 0;
      do {
        uVar18 = uVar18 + 4;
        iVar13 = iVar13 + -3;
      } while (uVar18 < uVar6);
      if (param_4 == 0) {
        lVar19 = *(long *)PTR_DAT_04bb2698;
        lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_01
                                    ,0);
        plVar2 = (long *)(lVar19 + 8);
        if (lVar5 != 0) {
          plVar2 = (long *)(lVar5 + 0xa8);
        }
        lVar8 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x28e0) = 0;
      *(undefined2 *)(param_1 + 0x28da) = 0;
      *(undefined8 *)(param_1 + 0x28b8) = 0;
      *(undefined8 *)(param_1 + 0x28c0) = 0;
      *(undefined8 *)(param_1 + 0x28c8) = 0;
      *(undefined8 *)(param_1 + 0x28d0) = 0;
      *(byte *)(param_1 + 0x28d8) = *(byte *)(param_1 + 0x28d8) & 0xfe;
      if (iVar21 != iVar13) {
        uVar22 = -(ulong)((uint)(iVar21 - iVar13) >> 0x1f) & 0xfffffffe00000000 |
                 (ulong)(uint)(iVar21 - iVar13) << 1;
        goto LAB_0395fb18;
      }
    }
    uVar22 = param_2 & 0xffffffff;
  }
  lStack_c8 = param_1 + 0x28b0;
  *(undefined2 *)(param_1 + 0x28da) = 0;
  local_d0 = *(long *)(param_1 + 0x28c8);
  iVar21 = 0;
  if (*(long *)(param_1 + 0x28d0) != 0) {
    iVar21 = *(int *)(param_1 + 0x28b8) - *(int *)(*(long *)(param_1 + 0x28d0) + 0x10);
  }
  uVar9 = 0;
  if (local_d0 != 0) {
    uVar9 = *(undefined4 *)(local_d0 + 0x104);
  }
  local_d8 = CONCAT44(uVar9,iVar21);
  FUN_03962720(param_1 + 0x2b70,&local_d8,uVar22,param_3,0,2);
  lVar5 = param_1 + 0x28e8;
  lStack_e0 = lVar5;
  if (param_3 == 0) {
    uVar22 = (ulong)(uVar6 << 2);
    lVar19 = param_4;
    if (param_4 == 0) {
      lVar8 = *(long *)PTR_DAT_04bb2698;
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04,
                                   0);
      plVar2 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar2 = (long *)(lVar19 + 0xa8);
      }
      lVar19 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x2918) = 0;
    *(undefined8 *)(param_1 + 0x28f0) = 0;
    *(undefined8 *)(param_1 + 0x28f8) = 0;
    *(undefined8 *)(param_1 + 0x2900) = 0;
    *(undefined8 *)(param_1 + 0x2908) = 0;
    *(undefined2 *)(param_1 + 0x2912) = 0;
    *(byte *)(param_1 + 0x2910) = *(byte *)(param_1 + 0x2910) & 0xfe;
    if (uVar6 << 2 == 0) {
      lVar8 = 0;
      lVar19 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar5,lVar19,
                   -(ulong)((uVar6 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 | uVar22 << 1,4,0);
      lVar19 = *(long *)(param_1 + 0x2908);
      lVar8 = *(long *)(param_1 + 0x2900);
    }
    *(undefined2 *)(param_1 + 0x2912) = 0;
    local_e8 = lVar8;
    if (lVar19 == 0) {
      local_f0 = 0;
      if (lVar8 != 0) goto LAB_0395fdc8;
LAB_0395fe34:
      lVar19 = 0;
      local_ec = 0;
      uVar18 = local_f0;
      if (uVar6 != 0) goto LAB_0395fde8;
LAB_0395fe44:
      uVar22 = 0;
    }
    else {
      local_f0 = *(int *)(param_1 + 0x28f0) - *(int *)(lVar19 + 0x10);
      if (lVar8 == 0) goto LAB_0395fe34;
LAB_0395fdc8:
      uVar18 = local_f0;
      uVar9 = *(undefined4 *)(lVar8 + 0x104);
      lVar19 = (**(code **)PTR_DAT_04bb2cd8)(lVar8);
      local_ec = uVar9;
      if (uVar6 == 0) goto LAB_0395fe44;
LAB_0395fde8:
      uVar20 = 0;
      psVar12 = (short *)((ulong)uVar18 + lVar19 + 4);
      do {
        sVar3 = (short)uVar20;
        psVar12[-2] = sVar3;
        psVar12[-1] = sVar3;
        uVar20 = uVar20 + 1;
        *psVar12 = (short)param_2 + sVar3;
        psVar12[1] = (short)(uVar6 << 1);
        psVar12 = psVar12 + 4;
      } while (uVar6 != uVar20);
    }
    local_c0 = CONCAT44(local_ec,uVar18);
    local_b8 = lVar8;
    local_b0 = lVar5;
    FUN_03901480(param_1 + 0x2bd0,&local_c0,1,uVar22);
    uVar22 = 0;
    *(undefined4 *)(param_1 + 0x2bdc) = 1;
    uVar7 = extraout_x1_06;
  }
  else {
    if (uVar6 == 0) {
      uVar18 = 1;
      do {
        uVar18 = uVar18 + 1;
      } while (uVar18 <= param_3);
      iVar21 = 0;
    }
    else {
      iVar21 = 0;
      uVar18 = 1;
      do {
        uVar18 = uVar18 + 1;
        iVar21 = iVar21 + uVar6 * 2;
      } while (uVar18 <= param_3);
    }
    uVar18 = iVar21 + uVar6 * 4;
    lVar19 = param_4;
    if (param_4 == 0) {
      lVar8 = *(long *)PTR_DAT_04bb2698;
      lVar19 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04,
                                   0);
      plVar2 = (long *)(lVar8 + 8);
      if (lVar19 != 0) {
        plVar2 = (long *)(lVar19 + 0xa8);
      }
      lVar19 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x2918) = 0;
    *(undefined8 *)(param_1 + 0x28f0) = 0;
    *(undefined8 *)(param_1 + 0x28f8) = 0;
    *(undefined8 *)(param_1 + 0x2900) = 0;
    *(undefined8 *)(param_1 + 0x2908) = 0;
    *(undefined2 *)(param_1 + 0x2912) = 0;
    *(byte *)(param_1 + 0x2910) = *(byte *)(param_1 + 0x2910) & 0xfe;
    if (uVar18 == 0) {
      local_e8 = 0;
      lVar5 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar5,lVar19,
                   -(ulong)(uVar18 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar18 << 1,4,0);
      lVar5 = *(long *)(param_1 + 0x2908);
      local_e8 = *(long *)(param_1 + 0x2900);
    }
    *(undefined2 *)(param_1 + 0x2912) = 0;
    local_f0 = 0;
    if (lVar5 != 0) {
      local_f0 = *(int *)(param_1 + 0x28f0) - *(int *)(lVar5 + 0x10);
    }
    local_ec = 0;
    if (local_e8 != 0) {
      local_ec = *(undefined4 *)(local_e8 + 0x104);
    }
    FUN_03962720(param_1 + 0x2bd0,&local_f0,param_2 & 0xffffffff,param_3,1,0);
    uVar7 = extraout_x1_05;
    if (uVar6 == 0) {
      uVar18 = 1;
      do {
        uVar18 = uVar18 + 2;
      } while (uVar18 <= param_3);
      uVar22 = 0;
    }
    else {
      uVar22 = 0;
      uVar18 = 1;
      do {
        uVar20 = 0;
        do {
          uVar20 = uVar20 + 2;
        } while (uVar20 < uVar6);
        uVar18 = uVar18 + 2;
        uVar22 = (ulong)((int)uVar22 + uVar20);
      } while (uVar18 <= param_3);
    }
  }
  if (uVar6 != 0) {
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 2;
      uVar22 = (ulong)((int)uVar22 + 4);
    } while (uVar18 < uVar6);
  }
  lVar5 = param_4;
  if (param_4 == 0) {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar7,0);
    plVar2 = (long *)(lVar19 + 8);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xa8);
    }
    lVar5 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x2950) = 0;
  *(undefined8 *)(param_1 + 0x2928) = 0;
  *(undefined8 *)(param_1 + 0x2930) = 0;
  *(undefined8 *)(param_1 + 0x2938) = 0;
  *(undefined8 *)(param_1 + 0x2940) = 0;
  *(undefined2 *)(param_1 + 0x294a) = 0;
  *(byte *)(param_1 + 0x2948) = *(byte *)(param_1 + 0x2948) & 0xfe;
  if ((int)uVar22 == 0) {
    local_e8 = 0;
    lVar5 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2920,lVar5,
                 -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
    lVar5 = *(long *)(param_1 + 0x2940);
    local_e8 = *(long *)(param_1 + 0x2938);
  }
  *(undefined2 *)(param_1 + 0x294a) = 0;
  local_f0 = 0;
  if (lVar5 != 0) {
    local_f0 = *(int *)(param_1 + 0x2928) - *(int *)(lVar5 + 0x10);
  }
  local_ec = 0;
  if (local_e8 != 0) {
    local_ec = *(undefined4 *)(local_e8 + 0x104);
  }
  lStack_e0 = param_1 + 0x2920;
  FUN_03962720(param_1 + 0x2c30,&local_f0,param_2 & 0xffffffff,param_3,1,1);
  if (param_3 != 0) {
    if (uVar6 != 0) {
      uVar22 = 0;
      uVar18 = 1;
      do {
        uVar20 = 0;
        do {
          uVar20 = uVar20 + 4;
          uVar16 = (int)uVar22 + 2;
          uVar22 = (ulong)uVar16;
        } while (uVar20 < uVar6);
        uVar18 = uVar18 + 4;
      } while (uVar18 <= param_3);
      goto joined_r0x03960024;
    }
    uVar18 = 1;
    do {
      uVar18 = uVar18 + 4;
    } while (uVar18 <= param_3);
  }
  uVar22 = 0;
  uVar16 = 0;
joined_r0x03960024:
  if (uVar6 != 0) {
    uVar18 = 0;
    do {
      uVar18 = uVar18 + 4;
    } while (uVar18 < uVar6);
    uVar22 = (ulong)(uVar16 + uVar18);
  }
  if (param_4 == 0) {
    lVar19 = *(long *)PTR_DAT_04bb2698;
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar2 = (long *)(lVar19 + 8);
    if (lVar5 != 0) {
      plVar2 = (long *)(lVar5 + 0xa8);
    }
    param_4 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x2988) = 0;
  *(undefined8 *)(param_1 + 0x2960) = 0;
  *(undefined8 *)(param_1 + 0x2968) = 0;
  *(undefined8 *)(param_1 + 0x2970) = 0;
  *(undefined8 *)(param_1 + 0x2978) = 0;
  *(undefined2 *)(param_1 + 0x2982) = 0;
  *(byte *)(param_1 + 0x2980) = *(byte *)(param_1 + 0x2980) & 0xfe;
  if ((int)uVar22 == 0) {
    local_e8 = 0;
    lVar5 = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2958,param_4,
                 -(uVar22 >> 0x1f) & 0xfffffffe00000000 | uVar22 << 1,4,0);
    lVar5 = *(long *)(param_1 + 0x2978);
    local_e8 = *(long *)(param_1 + 0x2970);
  }
  *(undefined2 *)(param_1 + 0x2982) = 0;
  local_f0 = 0;
  if (lVar5 != 0) {
    local_f0 = *(int *)(param_1 + 0x2960) - *(int *)(lVar5 + 0x10);
  }
  local_ec = 0;
  if (local_e8 != 0) {
    local_ec = *(undefined4 *)(local_e8 + 0x104);
  }
  lStack_e0 = param_1 + 0x2958;
  FUN_03962720(param_1 + 0x2c90,&local_f0,param_2 & 0xffffffff,param_3,1,2);
  return;
}

