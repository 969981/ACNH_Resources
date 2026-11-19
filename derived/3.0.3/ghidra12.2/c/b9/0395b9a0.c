
void FUN_0395b9a0(long param_1,ulong param_2,uint param_3,long param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar9;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  long lVar14;
  int *piVar15;
  ulong uVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  long local_118;
  undefined4 local_110;
  long local_108;
  int local_d8;
  undefined4 local_d4;
  long local_d0;
  long lStack_c8;
  undefined4 local_c0;
  undefined4 uStack_bc;
  long local_b8;
  long lStack_b0;
  
  lVar6 = DAT_05ae7600;
  uVar8 = (uint)param_2;
  iVar4 = param_3 * uVar8;
  uVar17 = iVar4 + 2;
  uVar16 = -(ulong)(uVar17 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar17 << 5;
  lVar5 = param_4;
  if (param_4 == 0) {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),param_2,0);
    plVar3 = (long *)(lVar6 + 8);
    if (lVar5 != 0) {
      plVar3 = (long *)(lVar5 + 0xa8);
    }
    lVar5 = *plVar3;
  }
  *(undefined8 *)(param_1 + 0x1108) = 0;
  *(undefined8 *)(param_1 + 0x10e0) = 0;
  *(undefined8 *)(param_1 + 0x10e8) = 0;
  *(undefined8 *)(param_1 + 0x10f0) = 0;
  *(undefined8 *)(param_1 + 0x10f8) = 0;
  *(byte *)(param_1 + 0x1100) = *(byte *)(param_1 + 0x1100) & 0xfe;
  *(undefined2 *)(param_1 + 0x1102) = 0;
  if (uVar17 == 0) {
    local_118 = 0;
    uVar12 = 0;
  }
  else {
    FUN_038f8590(DAT_05ae78d0,param_1 + 0x10d8,lVar5,uVar16,8,0);
    *(undefined2 *)(param_1 + 0x1102) = 0;
    local_118 = *(long *)(param_1 + 0x10f0);
    if (*(long *)(param_1 + 0x10f8) == 0) {
      uVar12 = 0;
      if (local_118 != 0) goto LAB_0395baec;
    }
    else {
      uVar12 = (ulong)(uint)(*(int *)(param_1 + 0x10e0) -
                            *(int *)(*(long *)(param_1 + 0x10f8) + 0x10));
      if (local_118 != 0) {
LAB_0395baec:
        local_110 = *(undefined4 *)(local_118 + 0x104);
        lVar6 = (*DAT_04c61fd0)();
        goto LAB_0395bb08;
      }
      local_118 = 0;
    }
  }
  local_110 = 0;
  lVar6 = 0;
LAB_0395bb08:
  local_108 = param_1 + 0x1308;
  lVar6 = lVar6 + uVar12;
  if (param_3 != 0) {
    if (uVar8 == 0) {
      uVar17 = 0;
      do {
        while( true ) {
          uVar17 = uVar17 + 1;
          fVar18 = ((float)uVar17 / ((float)param_3 + 1.0) + -0.5) * 3.1415927;
          if (ABS(fVar18) == INFINITY) break;
          if (param_3 == uVar17) goto LAB_0395bbec;
        }
        sinf(fVar18);
        cosf(fVar18);
      } while (param_3 != uVar17);
    }
    else {
      iVar13 = 0;
      uVar17 = 0;
      do {
        uVar17 = uVar17 + 1;
        fVar20 = ((float)uVar17 / ((float)param_3 + 1.0) + -0.5) * 3.1415927;
        fVar18 = sinf(fVar20);
        fVar18 = fVar18 * 0.5;
        fVar20 = cosf(fVar20);
        uVar10 = 0;
        do {
          fVar21 = ((float)uVar10 * 6.2831855) / (float)(param_2 & 0xffffffff);
          fVar19 = cosf(fVar21);
          fVar19 = fVar20 * 0.5 * fVar19;
          fVar21 = sinf(fVar21);
          fVar21 = fVar20 * 0.5 * fVar21;
          pfVar1 = (float *)(lVar6 + (long)(int)(iVar13 + uVar10) * 0x20);
          uVar10 = uVar10 + 1;
          *pfVar1 = fVar19;
          pfVar1[1] = fVar18;
          pfVar1[2] = fVar21;
          pfVar1[3] = fVar19 + fVar19;
          pfVar1[6] = fVar19 + 0.5;
          pfVar1[7] = fVar21 + 0.5;
          pfVar1[4] = fVar18 + fVar18;
          pfVar1[5] = fVar21 + fVar21;
        } while (uVar8 != uVar10);
        iVar13 = iVar13 + uVar8;
      } while (uVar17 != param_3);
    }
  }
LAB_0395bbec:
  puVar2 = (undefined8 *)(lVar6 + (long)iVar4 * 0x20);
  *(undefined8 *)((long)puVar2 + 0xc) = 0xbf80000000000000;
  *puVar2 = 0xbf00000000000000;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  puVar2[3] = 0x3f0000003f000000;
  puVar2 = (undefined8 *)(lVar6 + (long)(iVar4 + 1) * 0x20);
  puVar2[3] = 0x3f0000003f000000;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x3f80000000000000;
  *puVar2 = 0x3f00000000000000;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  uStack_bc = local_110;
  local_b8 = local_118;
  local_c0 = (int)uVar12;
  lStack_b0 = param_1 + 0x10d8;
  FUN_0390ebc0(local_108,&local_c0,0x20,uVar16);
  *(undefined8 *)(param_1 + 0x1340) = 0x22;
  uVar16 = 0;
  *(undefined2 *)(param_1 + 0x1348) = 1;
  *(undefined8 *)(param_1 + 0x134c) = 0xc00000022;
  *(undefined2 *)(param_1 + 0x1354) = 1;
  *(undefined8 *)(param_1 + 0x1358) = 0x1800000016;
  uVar17 = param_3 - 1;
  *(undefined2 *)(param_1 + 0x1360) = 1;
  uVar9 = extraout_x1;
  do {
    lVar6 = DAT_05ae7600;
    iVar4 = 1 << (ulong)((uint)uVar16 & 0x1f);
    if (uVar8 == 0) {
      if (param_3 != 1) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + iVar4;
        } while (uVar10 < uVar17);
      }
      uVar12 = 0;
    }
    else {
      uVar10 = 0;
      uVar12 = 0;
      do {
        uVar10 = uVar10 + iVar4;
        uVar12 = (ulong)((int)uVar12 + 6);
      } while (uVar10 < uVar8);
      if (param_3 != 1) {
        uVar10 = 0;
        do {
          uVar11 = 0;
          do {
            uVar11 = uVar11 + iVar4;
            uVar12 = (ulong)((int)uVar12 + 6);
          } while (uVar11 < uVar8);
          uVar10 = uVar10 + iVar4;
        } while (uVar10 < uVar17);
      }
    }
    lVar5 = param_4;
    if (param_4 == 0) {
      lVar5 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),uVar9,0);
      plVar3 = (long *)(lVar6 + 8);
      if (lVar5 != 0) {
        plVar3 = (long *)(lVar5 + 0xa8);
      }
      lVar5 = *plVar3;
    }
    lVar6 = param_1 + 0x1110 + uVar16 * 0xa8;
    piVar15 = (int *)(lVar6 + 8);
    piVar15[0] = 0;
    piVar15[1] = 0;
    *(undefined8 *)(lVar6 + 0x30) = 0;
    *(undefined8 *)(lVar6 + 0x20) = 0;
    *(undefined8 *)(lVar6 + 0x10) = 0;
    *(undefined8 *)(lVar6 + 0x18) = 0;
    *(undefined2 *)(lVar6 + 0x2a) = 0;
    *(byte *)(lVar6 + 0x28) = *(byte *)(lVar6 + 0x28) & 0xfe;
    if ((int)uVar12 == 0) {
      local_d0 = 0;
      lVar5 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar6,lVar5,
                   -(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1,4,0);
      local_d0 = *(long *)(lVar6 + 0x18);
      lVar5 = *(long *)(lVar6 + 0x20);
    }
    *(undefined2 *)(lVar6 + 0x2a) = 0;
    local_d8 = 0;
    if (lVar5 != 0) {
      local_d8 = *piVar15 - *(int *)(lVar5 + 0x10);
    }
    local_d4 = 0;
    if (local_d0 != 0) {
      local_d4 = *(undefined4 *)(local_d0 + 0x104);
    }
    lVar14 = param_1 + 0x1428 + uVar16 * 0x120;
    lStack_c8 = lVar6;
    FUN_039615d0(lVar14,&local_d8,param_2 & 0xffffffff,param_3,0,uVar16 & 0xffffffff);
    lVar5 = DAT_05ae7600;
    if (uVar8 == 0) {
      if (param_3 != 1) {
        uVar10 = 0;
        do {
          uVar10 = uVar10 + iVar4;
        } while (uVar10 < uVar17);
      }
      uVar12 = 0;
    }
    else {
      uVar10 = 0;
      uVar12 = 0;
      do {
        uVar10 = uVar10 + iVar4;
        uVar12 = (ulong)((int)uVar12 + 6);
      } while (uVar10 < uVar8);
      if (param_3 != 1) {
        uVar10 = 0;
        do {
          uVar11 = 0;
          do {
            uVar11 = uVar11 + iVar4;
            uVar12 = (ulong)((int)uVar12 + 4);
          } while (uVar11 < uVar8);
          uVar10 = uVar10 + iVar4;
        } while (uVar10 < uVar17);
      }
    }
    lVar7 = param_4;
    if (param_4 == 0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),extraout_x1_01,0);
      plVar3 = (long *)(lVar5 + 8);
      if (lVar7 != 0) {
        plVar3 = (long *)(lVar7 + 0xa8);
      }
      lVar7 = *plVar3;
    }
    piVar15 = (int *)(lVar6 + 0x40);
    piVar15[0] = 0;
    piVar15[1] = 0;
    *(undefined8 *)(lVar6 + 0x68) = 0;
    *(undefined8 *)(lVar6 + 0x58) = 0;
    *(undefined8 *)(lVar6 + 0x48) = 0;
    *(undefined8 *)(lVar6 + 0x50) = 0;
    *(undefined2 *)(lVar6 + 0x62) = 0;
    *(byte *)(lVar6 + 0x60) = *(byte *)(lVar6 + 0x60) & 0xfe;
    if ((int)uVar12 == 0) {
      local_d0 = 0;
      lVar5 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar6 + 0x38,lVar7,
                   -(uVar12 >> 0x1f) & 0xfffffffe00000000 | uVar12 << 1,4,0);
      local_d0 = *(long *)(lVar6 + 0x50);
      lVar5 = *(long *)(lVar6 + 0x58);
    }
    *(undefined2 *)(lVar6 + 0x62) = 0;
    local_d8 = 0;
    if (lVar5 != 0) {
      local_d8 = *piVar15 - *(int *)(lVar5 + 0x10);
    }
    local_d4 = 0;
    if (local_d0 != 0) {
      local_d4 = *(undefined4 *)(local_d0 + 0x104);
    }
    lStack_c8 = lVar6 + 0x38;
    FUN_039615d0(lVar14 + 0x60,&local_d8,param_2 & 0xffffffff,param_3,1,uVar16 & 0xffffffff);
    lVar5 = DAT_05ae7600;
    if (param_3 == 0) {
LAB_0395bfec:
      iVar13 = 0;
    }
    else {
      uVar10 = 0;
      if (uVar8 == 0) {
        do {
          uVar10 = uVar10 + iVar4;
        } while (uVar10 < param_3);
        goto LAB_0395bfec;
      }
      iVar13 = 0;
      do {
        uVar11 = 0;
        do {
          uVar11 = uVar11 + iVar4;
          iVar13 = iVar13 + 1;
        } while (uVar11 < uVar8);
        uVar10 = uVar10 + iVar4;
      } while (uVar10 < param_3);
    }
    if (uVar8 != 0) {
      uVar10 = 0;
      do {
        uVar10 = uVar10 + iVar4;
        iVar13 = iVar13 + 1;
      } while (uVar10 < uVar8);
    }
    lVar7 = param_4;
    if (param_4 == 0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),extraout_x1_02,0);
      plVar3 = (long *)(lVar5 + 8);
      if (lVar7 != 0) {
        plVar3 = (long *)(lVar7 + 0xa8);
      }
      lVar7 = *plVar3;
    }
    uVar10 = iVar13 + 2;
    piVar15 = (int *)(lVar6 + 0x78);
    piVar15[0] = 0;
    piVar15[1] = 0;
    *(undefined8 *)(lVar6 + 0xa0) = 0;
    *(undefined8 *)(lVar6 + 0x90) = 0;
    *(undefined8 *)(lVar6 + 0x80) = 0;
    *(undefined8 *)(lVar6 + 0x88) = 0;
    *(undefined2 *)(lVar6 + 0x9a) = 0;
    *(byte *)(lVar6 + 0x98) = *(byte *)(lVar6 + 0x98) & 0xfe;
    if (uVar10 == 0) {
      local_d0 = 0;
      lVar5 = 0;
    }
    else {
      FUN_038f8590(DAT_05ae78d0,lVar6 + 0x70,lVar7,
                   -(ulong)(uVar10 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar10 << 1,4,0);
      local_d0 = *(long *)(lVar6 + 0x88);
      lVar5 = *(long *)(lVar6 + 0x90);
    }
    *(undefined2 *)(lVar6 + 0x9a) = 0;
    local_d8 = 0;
    if (lVar5 != 0) {
      local_d8 = *piVar15 - *(int *)(lVar5 + 0x10);
    }
    local_d4 = 0;
    if (local_d0 != 0) {
      local_d4 = *(undefined4 *)(local_d0 + 0x104);
    }
    lStack_c8 = lVar6 + 0x70;
    FUN_039615d0(lVar14 + 0xc0,&local_d8,param_2 & 0xffffffff,param_3,2,uVar16 & 0xffffffff);
    uVar16 = uVar16 + 1;
    uVar9 = extraout_x1_00;
    if (uVar16 == 3) {
      return;
    }
  } while( true );
}

