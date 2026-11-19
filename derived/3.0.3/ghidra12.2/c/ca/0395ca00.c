
void FUN_0395ca00(long param_1,ulong param_2,uint param_3,long param_4)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 uVar4;
  uint uVar5;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  int iVar6;
  uint uVar7;
  uint uVar8;
  ulong uVar9;
  float *pfVar10;
  long lVar11;
  undefined4 uVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  ulong uVar17;
  undefined4 *puVar18;
  undefined8 *puVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_12c;
  undefined8 local_f0;
  long local_e8;
  long lStack_e0;
  undefined8 local_d8;
  long local_d0;
  long lStack_c8;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  
  uVar5 = (uint)param_2;
  uVar14 = (param_3 + 3) * uVar5 + 2;
  uVar17 = -(ulong)(uVar14 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar14 << 5;
  lVar3 = param_4;
  if (param_4 == 0) {
    lVar15 = *(long *)PTR_DAT_04bb2698;
    lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),param_2,0);
    plVar2 = (long *)(lVar15 + 8);
    if (lVar3 != 0) {
      plVar2 = (long *)(lVar3 + 0xa8);
    }
    lVar3 = *plVar2;
  }
  *(undefined8 *)(param_1 + 0x1e68) = 0;
  *(undefined8 *)(param_1 + 0x1e40) = 0;
  *(undefined8 *)(param_1 + 0x1e48) = 0;
  *(undefined8 *)(param_1 + 0x1e50) = 0;
  *(undefined8 *)(param_1 + 0x1e58) = 0;
  *(byte *)(param_1 + 0x1e60) = *(byte *)(param_1 + 0x1e60) & 0xfe;
  puVar19 = (undefined8 *)PTR_DAT_04bd0fa8;
  *(undefined2 *)(param_1 + 0x1e62) = 0;
  if (uVar14 == 0) {
    uVar14 = 0;
    lVar3 = 0;
    local_12c = 0;
  }
  else {
    FUN_038f8590(*puVar19,param_1 + 0x1e38,lVar3,uVar17,8,0);
    *(undefined2 *)(param_1 + 0x1e62) = 0;
    lVar3 = *(long *)(param_1 + 0x1e50);
    if (*(long *)(param_1 + 0x1e58) == 0) {
      uVar14 = 0;
      if (lVar3 != 0) goto LAB_0395cb2c;
      local_12c = 0;
    }
    else {
      uVar14 = *(int *)(param_1 + 0x1e40) - *(int *)(*(long *)(param_1 + 0x1e58) + 0x10);
      if (lVar3 == 0) {
        local_12c = 0;
      }
      else {
LAB_0395cb2c:
        local_12c = *(undefined4 *)(lVar3 + 0x104);
      }
    }
  }
  lVar15 = (**(code **)PTR_DAT_04bb2cd8)(lVar3);
  fVar23 = (float)(param_2 & 0xffffffff);
  uVar9 = (ulong)uVar14;
  puVar1 = (undefined8 *)(lVar15 + uVar9);
  *puVar1 = 0x3f00000000000000;
  *(undefined4 *)(puVar1 + 1) = 0;
  puVar1[3] = 0x3f0000003f000000;
  *(undefined8 *)((long)puVar1 + 0xc) = 0x3f80000000000000;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  if (uVar5 == 0) {
    uVar7 = 0;
    do {
      uVar7 = uVar7 + 1;
    } while (uVar7 <= param_3);
    iVar6 = 1;
  }
  else {
    pfVar10 = (float *)(uVar9 + lVar15 + 0x3c);
    uVar13 = 0;
    do {
      uVar16 = uVar13;
      fVar21 = ((float)(uVar16 & 0xffffffff) * 6.2831855) / fVar23;
      fVar20 = cosf(fVar21);
      fVar21 = sinf(fVar21);
      pfVar10[-7] = fVar20 * 0.5;
      pfVar10[-6] = 0.5;
      pfVar10[-4] = 0.0;
      pfVar10[-3] = 1.0;
      pfVar10[-2] = 0.0;
      pfVar10[-5] = fVar21 * 0.5;
      pfVar10[-1] = fVar20 * 0.5 + 0.5;
      *pfVar10 = fVar21 * 0.5 + 0.5;
      pfVar10 = pfVar10 + 8;
      uVar13 = uVar16 + 1;
    } while (uVar5 != (uint)(uVar16 + 1));
    uVar7 = 0;
    lVar11 = uVar16 + 2;
    do {
      iVar6 = (int)lVar11;
      puVar18 = (undefined4 *)(uVar9 + lVar15 + 0x10 + (long)iVar6 * 0x20);
      uVar13 = 0;
      fVar20 = 0.5 - (float)uVar7 / (float)param_3;
      do {
        fVar22 = ((float)(uVar13 & 0xffffffff) * 6.2831855) / fVar23;
        fVar21 = cosf(fVar22);
        fVar21 = fVar21 * 0.5;
        fVar22 = sinf(fVar22);
        fVar22 = fVar22 * 0.5;
        uVar13 = uVar13 + 1;
        puVar18[-4] = fVar21;
        puVar18[-3] = fVar20;
        *puVar18 = 0;
        puVar18[2] = fVar21 + 0.5;
        puVar18[3] = fVar20 + 0.5;
        puVar18[-2] = fVar22;
        puVar18[-1] = fVar21 + fVar21;
        puVar18[1] = fVar22 + fVar22;
        puVar18 = puVar18 + 8;
      } while (uVar5 != (uint)uVar13);
      uVar7 = uVar7 + 1;
      lVar11 = (long)iVar6 + uVar13;
    } while (uVar7 <= param_3);
    iVar6 = iVar6 + (uint)uVar13;
    puVar19 = (undefined8 *)PTR_DAT_04bd0fa8;
  }
  if (uVar5 != 0) {
    uVar7 = 0;
    lVar15 = uVar9 + (long)iVar6 * 0x20 + lVar15 + 0x10;
    do {
      fVar21 = ((float)uVar7 * 6.2831855) / fVar23;
      fVar20 = cosf(fVar21);
      fVar21 = sinf(fVar21);
      uVar7 = uVar7 + 1;
      *(float *)(lVar15 + -0x10) = fVar20 * 0.5;
      *(undefined4 *)(lVar15 + -0xc) = 0xbf000000;
      *(undefined8 *)(lVar15 + -4) = 0xbf80000000000000;
      *(undefined4 *)(lVar15 + 4) = 0;
      *(float *)(lVar15 + 8) = fVar20 * 0.5 + 0.5;
      *(float *)(lVar15 + -8) = fVar21 * 0.5;
      *(float *)(lVar15 + 0xc) = fVar21 * 0.5 + 0.5;
      lVar15 = lVar15 + 0x20;
    } while (uVar5 != uVar7);
    iVar6 = iVar6 + uVar7;
  }
  puVar1 = puVar1 + (long)iVar6 * 4;
  *puVar1 = 0xbf00000000000000;
  *(undefined4 *)(puVar1 + 1) = 0;
  *(undefined8 *)((long)puVar1 + 0xc) = 0xbf80000000000000;
  *(undefined4 *)((long)puVar1 + 0x14) = 0;
  puVar1[3] = 0x3f0000003f000000;
  local_c0 = CONCAT44(local_12c,uVar14);
  local_b8 = lVar3;
  local_b0 = param_1 + 0x1e38;
  FUN_0390ebc0(param_1 + 0x1fc0,&local_c0,0x20,uVar17);
  *(undefined8 *)(param_1 + 0x1ff8) = 0x22;
  *(undefined8 *)(param_1 + 0x2004) = 0xc00000022;
  *(undefined8 *)(param_1 + 0x2010) = 0x1800000016;
  lVar3 = param_1 + 0x1e70;
  *(undefined2 *)(param_1 + 0x2000) = 1;
  *(undefined2 *)(param_1 + 0x200c) = 1;
  *(undefined2 *)(param_1 + 0x2018) = 1;
  lStack_c8 = lVar3;
  if (uVar5 == 0) {
    if (param_4 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x1ea0) = 0;
    *(undefined8 *)(param_1 + 0x1e78) = 0;
    *(undefined8 *)(param_1 + 0x1e80) = 0;
    *(undefined8 *)(param_1 + 0x1e88) = 0;
    *(undefined8 *)(param_1 + 0x1e90) = 0;
    *(undefined2 *)(param_1 + 0x1e9a) = 0;
    local_d8 = 0;
    *(byte *)(param_1 + 0x1e98) = *(byte *)(param_1 + 0x1e98) & 0xfe;
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = lVar3;
    FUN_03901480(param_1 + 0x20e0,&local_c0,1,0);
    *(undefined4 *)(param_1 + 0x20ec) = 4;
    if (param_4 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x1ed8) = 0;
    *(undefined8 *)(param_1 + 0x1eb0) = 0;
    *(undefined8 *)(param_1 + 0x1eb8) = 0;
    *(undefined8 *)(param_1 + 0x1ec0) = 0;
    *(undefined8 *)(param_1 + 0x1ec8) = 0;
    *(undefined2 *)(param_1 + 0x1ed2) = 0;
    *(byte *)(param_1 + 0x1ed0) = *(byte *)(param_1 + 0x1ed0) & 0xfe;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = param_1 + 0x1ea8;
    FUN_03901480(&DAT_00002140 + param_1,&local_c0,1,0);
    *(undefined4 *)(param_1 + 0x214c) = 4;
    if (param_4 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_1 + 0x1f10) = 0;
    *(undefined8 *)(param_1 + 0x1ee8) = 0;
    *(undefined8 *)(param_1 + 0x1ef0) = 0;
    *(undefined8 *)(param_1 + 0x1ef8) = 0;
    *(undefined8 *)(param_1 + 0x1f00) = 0;
    *(undefined2 *)(param_1 + 0x1f0a) = 0;
    local_d8 = 0;
    *(byte *)(param_1 + 0x1f08) = *(byte *)(param_1 + 0x1f08) & 0xfe;
    local_d0 = 0;
    local_c0 = 0;
    local_b8 = 0;
    lStack_c8 = param_1 + 0x1ee0;
    local_b0 = param_1 + 0x1ee0;
    FUN_03901480(param_1 + 0x21a0,&local_c0,1,0);
    *(undefined4 *)(param_1 + 0x21ac) = 4;
    if (param_3 != 0xffffffff) {
      uVar14 = 1;
      do {
        uVar14 = uVar14 + 1;
      } while (uVar14 <= param_3 + 1);
      iVar6 = 0;
      uVar4 = extraout_x1_00;
      goto LAB_0395d3d0;
    }
    uVar17 = 0;
    uVar4 = extraout_x1_00;
LAB_0395d300:
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar4,0);
      plVar2 = (long *)(lVar15 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      lVar3 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1f48) = 0;
    *(undefined8 *)(param_1 + 0x1f20) = 0;
    *(undefined8 *)(param_1 + 0x1f28) = 0;
    *(undefined8 *)(param_1 + 0x1f30) = 0;
    *(undefined8 *)(param_1 + 0x1f38) = 0;
    *(undefined2 *)(param_1 + 0x1f42) = 0;
    *(byte *)(param_1 + 8000) = *(byte *)(param_1 + 8000) & 0xfe;
    if (uVar17 == 0) {
      local_e8 = 0;
      lVar3 = 0;
    }
    else {
      FUN_038f8590(*puVar19,param_1 + 0x1f18,lVar3,uVar17,4,0);
      lVar3 = *(long *)(param_1 + 0x1f38);
      local_e8 = *(long *)(param_1 + 0x1f30);
    }
    *(undefined2 *)(param_1 + 0x1f42) = 0;
    iVar6 = 0;
    if (lVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0x1f20) - *(int *)(lVar3 + 0x10);
    }
    uVar12 = 0;
    if (local_e8 != 0) {
      uVar12 = *(undefined4 *)(local_e8 + 0x104);
    }
    local_f0 = CONCAT44(uVar12,iVar6);
    lStack_e0 = param_1 + 0x1f18;
    FUN_03961de0(param_1 + 0x2200,&local_f0,param_2 & 0xffffffff,param_3,1,0);
    if (uVar5 == 0) {
      if (param_4 == 0) {
        nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      }
      *(undefined8 *)(param_1 + 0x1f80) = 0;
      *(undefined8 *)(param_1 + 0x1f58) = 0;
      *(undefined8 *)(param_1 + 0x1f60) = 0;
      *(undefined8 *)(param_1 + 0x1f68) = 0;
      *(undefined8 *)(param_1 + 0x1f70) = 0;
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      local_e8 = 0;
      local_f0 = 0;
      *(byte *)(param_1 + 0x1f78) = *(byte *)(param_1 + 0x1f78) & 0xfe;
      local_c0 = 0;
      local_b8 = 0;
      lStack_e0 = param_1 + 0x1f50;
      local_b0 = param_1 + 0x1f50;
      FUN_03901480(param_1 + 0x2260,&local_c0,1,0);
      uVar17 = 0;
      *(undefined4 *)(param_1 + 0x226c) = 1;
    }
    else {
      iVar6 = 0;
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 2;
        iVar6 = iVar6 + 0xc;
      } while (uVar14 < uVar5);
      lVar3 = param_4;
      if (param_4 == 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04
                                    ,0);
        plVar2 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0xa8);
        }
        lVar3 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x1f80) = 0;
      *(undefined8 *)(param_1 + 0x1f58) = 0;
      *(undefined8 *)(param_1 + 0x1f60) = 0;
      *(undefined8 *)(param_1 + 0x1f68) = 0;
      *(undefined8 *)(param_1 + 0x1f70) = 0;
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      *(byte *)(param_1 + 0x1f78) = *(byte *)(param_1 + 0x1f78) & 0xfe;
      FUN_038f8590(*puVar19,param_1 + 0x1f50,lVar3,iVar6,4,0);
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      local_e8 = *(long *)(param_1 + 0x1f68);
      iVar6 = 0;
      if (*(long *)(param_1 + 0x1f70) != 0) {
        iVar6 = *(int *)(param_1 + 0x1f58) - *(int *)(*(long *)(param_1 + 0x1f70) + 0x10);
      }
      uVar12 = 0;
      if (local_e8 != 0) {
        uVar12 = *(undefined4 *)(local_e8 + 0x104);
      }
      local_f0 = CONCAT44(uVar12,iVar6);
      lStack_e0 = param_1 + 0x1f50;
      FUN_03961de0(param_1 + 0x2260,&local_f0,param_2 & 0xffffffff,param_3,1,1);
      uVar17 = 0;
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 4;
        uVar17 = (ulong)((int)uVar17 + 0xc);
      } while (uVar14 < uVar5);
    }
    if (param_4 == 0) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar15 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      param_4 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1fb8) = 0;
    *(undefined8 *)(param_1 + 0x1f90) = 0;
    *(undefined8 *)(param_1 + 0x1f98) = 0;
    *(undefined8 *)(param_1 + 0x1fa0) = 0;
    *(undefined8 *)(param_1 + 0x1fa8) = 0;
    *(undefined2 *)(param_1 + 0x1fb2) = 0;
    *(byte *)(param_1 + 0x1fb0) = *(byte *)(param_1 + 0x1fb0) & 0xfe;
    if (uVar17 == 0) goto LAB_0395dabc;
    uVar4 = *puVar19;
  }
  else {
    lVar15 = param_4;
    if (param_4 == 0) {
      lVar11 = *(long *)PTR_DAT_04bb2698;
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
      plVar2 = (long *)(lVar11 + 8);
      if (lVar15 != 0) {
        plVar2 = (long *)(lVar15 + 0xa8);
      }
      lVar15 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1ea0) = 0;
    *(undefined8 *)(param_1 + 0x1e78) = 0;
    *(undefined8 *)(param_1 + 0x1e80) = 0;
    *(undefined8 *)(param_1 + 0x1e88) = 0;
    *(undefined8 *)(param_1 + 0x1e90) = 0;
    *(undefined2 *)(param_1 + 0x1e9a) = 0;
    *(byte *)(param_1 + 0x1e98) = *(byte *)(param_1 + 0x1e98) & 0xfe;
    if (uVar5 * 0x18 == 0) {
      local_d0 = 0;
      lVar3 = 0;
    }
    else {
      FUN_038f8590(*puVar19,lVar3,lVar15,uVar5 * 0x18,4,0);
      lVar3 = *(long *)(param_1 + 0x1e90);
      local_d0 = *(long *)(param_1 + 0x1e88);
    }
    *(undefined2 *)(param_1 + 0x1e9a) = 0;
    iVar6 = 0;
    if (lVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0x1e78) - *(int *)(lVar3 + 0x10);
    }
    uVar12 = 0;
    if (local_d0 != 0) {
      uVar12 = *(undefined4 *)(local_d0 + 0x104);
    }
    local_d8 = CONCAT44(uVar12,iVar6);
    FUN_03961de0(param_1 + 0x20e0,&local_d8,param_2 & 0xffffffff,param_3,0,0);
    iVar6 = 0;
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 2;
      iVar6 = iVar6 + 6;
    } while (uVar14 < uVar5);
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 2;
      iVar6 = iVar6 + 0xc;
    } while (uVar14 < uVar5);
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 2;
      iVar6 = iVar6 + 6;
    } while (uVar14 < uVar5);
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_01,0
                                 );
      plVar2 = (long *)(lVar15 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      lVar3 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1ed8) = 0;
    *(undefined8 *)(param_1 + 0x1eb0) = 0;
    *(undefined8 *)(param_1 + 0x1eb8) = 0;
    *(undefined8 *)(param_1 + 0x1ec0) = 0;
    *(undefined8 *)(param_1 + 0x1ec8) = 0;
    *(undefined2 *)(param_1 + 0x1ed2) = 0;
    *(byte *)(param_1 + 0x1ed0) = *(byte *)(param_1 + 0x1ed0) & 0xfe;
    FUN_038f8590(*puVar19,param_1 + 0x1ea8,lVar3,iVar6,4,0);
    *(undefined2 *)(param_1 + 0x1ed2) = 0;
    local_d0 = *(long *)(param_1 + 0x1ec0);
    iVar6 = 0;
    if (*(long *)(param_1 + 0x1ec8) != 0) {
      iVar6 = *(int *)(param_1 + 0x1eb0) - *(int *)(*(long *)(param_1 + 0x1ec8) + 0x10);
    }
    uVar12 = 0;
    if (local_d0 != 0) {
      uVar12 = *(undefined4 *)(local_d0 + 0x104);
    }
    local_d8 = CONCAT44(uVar12,iVar6);
    lStack_c8 = param_1 + 0x1ea8;
    FUN_03961de0(&DAT_00002140 + param_1,&local_d8,param_2 & 0xffffffff,param_3,0,1);
    iVar6 = 0;
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 4;
      iVar6 = iVar6 + 6;
    } while (uVar14 < uVar5);
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 4;
      iVar6 = iVar6 + 0xc;
    } while (uVar14 < uVar5);
    uVar14 = 0;
    do {
      uVar14 = uVar14 + 4;
      iVar6 = iVar6 + 6;
    } while (uVar14 < uVar5);
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_02,0
                                 );
      plVar2 = (long *)(lVar15 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      lVar3 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1f10) = 0;
    *(undefined8 *)(param_1 + 0x1ee8) = 0;
    *(undefined8 *)(param_1 + 0x1ef0) = 0;
    *(undefined8 *)(param_1 + 0x1ef8) = 0;
    *(undefined8 *)(param_1 + 0x1f00) = 0;
    *(undefined2 *)(param_1 + 0x1f0a) = 0;
    *(byte *)(param_1 + 0x1f08) = *(byte *)(param_1 + 0x1f08) & 0xfe;
    FUN_038f8590(*puVar19,param_1 + 0x1ee0,lVar3,iVar6,4,0);
    *(undefined2 *)(param_1 + 0x1f0a) = 0;
    local_d0 = *(long *)(param_1 + 0x1ef8);
    iVar6 = 0;
    if (*(long *)(param_1 + 0x1f00) != 0) {
      iVar6 = *(int *)(param_1 + 0x1ee8) - *(int *)(*(long *)(param_1 + 0x1f00) + 0x10);
    }
    uVar12 = 0;
    if (local_d0 != 0) {
      uVar12 = *(undefined4 *)(local_d0 + 0x104);
    }
    local_d8 = CONCAT44(uVar12,iVar6);
    lStack_c8 = param_1 + 0x1ee0;
    FUN_03961de0(param_1 + 0x21a0,&local_d8,param_2 & 0xffffffff,param_3,0,2);
    if (param_3 == 0xffffffff) {
      uVar17 = -(ulong)((uVar5 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
               (ulong)(uVar5 * 6) << 1;
      uVar4 = extraout_x1_03;
      goto LAB_0395d300;
    }
    iVar6 = 0;
    uVar14 = 1;
    do {
      uVar14 = uVar14 + 1;
      iVar6 = iVar6 + uVar5 * 2;
      uVar4 = extraout_x1_03;
    } while (uVar14 <= param_3 + 1);
LAB_0395d3d0:
    uVar7 = param_3 + 1;
    uVar14 = iVar6 + uVar5 * 6;
    lVar3 = param_4;
    if (param_4 == 0) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar4,0);
      plVar2 = (long *)(lVar15 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      lVar3 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1f48) = 0;
    *(undefined8 *)(param_1 + 0x1f20) = 0;
    *(undefined8 *)(param_1 + 0x1f28) = 0;
    *(undefined8 *)(param_1 + 0x1f30) = 0;
    *(undefined8 *)(param_1 + 0x1f38) = 0;
    *(undefined2 *)(param_1 + 0x1f42) = 0;
    *(byte *)(param_1 + 8000) = *(byte *)(param_1 + 8000) & 0xfe;
    if (uVar14 == 0) {
      local_e8 = 0;
      lVar3 = 0;
    }
    else {
      FUN_038f8590(*puVar19,param_1 + 0x1f18,lVar3,
                   -(ulong)(uVar14 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar14 << 1,4,0);
      lVar3 = *(long *)(param_1 + 0x1f38);
      local_e8 = *(long *)(param_1 + 0x1f30);
    }
    *(undefined2 *)(param_1 + 0x1f42) = 0;
    iVar6 = 0;
    if (lVar3 != 0) {
      iVar6 = *(int *)(param_1 + 0x1f20) - *(int *)(lVar3 + 0x10);
    }
    uVar12 = 0;
    if (local_e8 != 0) {
      uVar12 = *(undefined4 *)(local_e8 + 0x104);
    }
    local_f0 = CONCAT44(uVar12,iVar6);
    lStack_e0 = param_1 + 0x1f18;
    FUN_03961de0(param_1 + 0x2200,&local_f0,param_2 & 0xffffffff,param_3,1,0);
    if (uVar5 == 0) {
      uVar14 = 1;
      do {
        uVar14 = uVar14 + 2;
      } while (uVar14 <= uVar7);
      uVar17 = 0;
LAB_0395d834:
      lVar3 = param_4;
      if (param_4 == 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_05
                                    ,0);
        plVar2 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0xa8);
        }
        lVar3 = *plVar2;
      }
      lVar15 = param_1 + 0x1f50;
      *(undefined8 *)(param_1 + 0x1f80) = 0;
      *(undefined8 *)(param_1 + 0x1f58) = 0;
      *(undefined8 *)(param_1 + 0x1f60) = 0;
      *(undefined8 *)(param_1 + 0x1f68) = 0;
      *(undefined8 *)(param_1 + 0x1f70) = 0;
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      *(byte *)(param_1 + 0x1f78) = *(byte *)(param_1 + 0x1f78) & 0xfe;
      if ((int)uVar17 == 0) {
        lVar11 = 0;
        lVar3 = 0;
      }
      else {
        FUN_038f8590(*puVar19,lVar15,lVar3,-(uVar17 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1,4,0)
        ;
        lVar3 = *(long *)(param_1 + 0x1f70);
        lVar11 = *(long *)(param_1 + 0x1f68);
      }
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      if (lVar3 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = *(int *)(param_1 + 0x1f58) - *(int *)(lVar3 + 0x10);
      }
      local_f0 = CONCAT44(local_f0._4_4_,iVar6);
      local_e8 = lVar11;
      lStack_e0 = lVar15;
      if (lVar11 == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = *(undefined4 *)(lVar11 + 0x104);
        (**(code **)PTR_DAT_04bb2cd8)(lVar11);
      }
      local_f0 = CONCAT44(uVar12,(undefined4)local_f0);
      if (param_3 != 0xffffffff) {
        uVar14 = 1;
        do {
          uVar14 = uVar14 + 2;
        } while (uVar14 <= param_3 + 1);
      }
      local_c0 = CONCAT44(uVar12,iVar6);
      uVar14 = 1;
      local_b8 = lVar11;
      local_b0 = lVar15;
      FUN_03901480(param_1 + 0x2260,&local_c0,1,0);
      *(undefined4 *)(param_1 + 0x226c) = 1;
      do {
        uVar14 = uVar14 + 4;
      } while (uVar14 <= uVar7);
      uVar17 = 0;
    }
    else {
      uVar17 = 0;
      uVar14 = 1;
      do {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 2;
        } while (uVar8 < uVar5);
        uVar14 = uVar14 + 2;
        uVar17 = (ulong)((int)uVar17 + uVar8);
      } while (uVar14 <= uVar7);
      if (uVar5 == 0) goto LAB_0395d834;
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 2;
        uVar8 = (int)uVar17 + 6;
        uVar17 = (ulong)uVar8;
      } while (uVar14 < uVar5);
      lVar3 = param_4;
      if (param_4 == 0) {
        lVar15 = *(long *)PTR_DAT_04bb2698;
        lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_05
                                    ,0);
        plVar2 = (long *)(lVar15 + 8);
        if (lVar3 != 0) {
          plVar2 = (long *)(lVar3 + 0xa8);
        }
        lVar3 = *plVar2;
      }
      *(undefined8 *)(param_1 + 0x1f80) = 0;
      *(undefined8 *)(param_1 + 0x1f58) = 0;
      *(undefined8 *)(param_1 + 0x1f60) = 0;
      *(undefined8 *)(param_1 + 0x1f68) = 0;
      *(undefined8 *)(param_1 + 0x1f70) = 0;
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      *(byte *)(param_1 + 0x1f78) = *(byte *)(param_1 + 0x1f78) & 0xfe;
      if (uVar8 == 0) {
        local_e8 = 0;
        lVar3 = 0;
      }
      else {
        FUN_038f8590(*puVar19,param_1 + 0x1f50,lVar3,
                     -(ulong)(uVar8 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1,4,0);
        lVar3 = *(long *)(param_1 + 0x1f70);
        local_e8 = *(long *)(param_1 + 0x1f68);
      }
      *(undefined2 *)(param_1 + 0x1f7a) = 0;
      iVar6 = 0;
      if (lVar3 != 0) {
        iVar6 = *(int *)(param_1 + 0x1f58) - *(int *)(lVar3 + 0x10);
      }
      uVar12 = 0;
      if (local_e8 != 0) {
        uVar12 = *(undefined4 *)(local_e8 + 0x104);
      }
      local_f0 = CONCAT44(uVar12,iVar6);
      uVar14 = 1;
      lStack_e0 = param_1 + 0x1f50;
      FUN_03961de0(param_1 + 0x2260,&local_f0,param_2 & 0xffffffff,param_3,1,1);
      uVar17 = 0;
      do {
        uVar8 = 0;
        do {
          uVar8 = uVar8 + 4;
          uVar17 = (ulong)((int)uVar17 + 2);
        } while (uVar8 < uVar5);
        uVar14 = uVar14 + 4;
      } while (uVar14 <= uVar7);
    }
    if (uVar5 != 0) {
      uVar14 = 0;
      do {
        uVar14 = uVar14 + 4;
        uVar17 = (ulong)((int)uVar17 + 6);
      } while (uVar14 < uVar5);
    }
    if (param_4 == 0) {
      lVar15 = *(long *)PTR_DAT_04bb2698;
      lVar3 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar2 = (long *)(lVar15 + 8);
      if (lVar3 != 0) {
        plVar2 = (long *)(lVar3 + 0xa8);
      }
      param_4 = *plVar2;
    }
    *(undefined8 *)(param_1 + 0x1fb8) = 0;
    *(undefined8 *)(param_1 + 0x1f90) = 0;
    *(undefined8 *)(param_1 + 0x1f98) = 0;
    *(undefined8 *)(param_1 + 0x1fa0) = 0;
    *(undefined8 *)(param_1 + 0x1fa8) = 0;
    *(undefined2 *)(param_1 + 0x1fb2) = 0;
    *(byte *)(param_1 + 0x1fb0) = *(byte *)(param_1 + 0x1fb0) & 0xfe;
    if ((int)uVar17 == 0) goto LAB_0395dabc;
    uVar4 = *puVar19;
    uVar17 = -(uVar17 >> 0x1f) & 0xfffffffe00000000 | uVar17 << 1;
  }
  FUN_038f8590(uVar4,param_1 + 0x1f88,param_4,uVar17,4,0);
LAB_0395dabc:
  lStack_e0 = param_1 + 0x1f88;
  *(undefined2 *)(param_1 + 0x1fb2) = 0;
  local_e8 = *(long *)(param_1 + 0x1fa0);
  iVar6 = 0;
  if (*(long *)(param_1 + 0x1fa8) != 0) {
    iVar6 = *(int *)(param_1 + 0x1f90) - *(int *)(*(long *)(param_1 + 0x1fa8) + 0x10);
  }
  uVar12 = 0;
  if (local_e8 != 0) {
    uVar12 = *(undefined4 *)(local_e8 + 0x104);
  }
  local_f0 = CONCAT44(uVar12,iVar6);
  FUN_03961de0(param_1 + 0x22c0,&local_f0,param_2 & 0xffffffff,param_3,1,2);
  return;
}

