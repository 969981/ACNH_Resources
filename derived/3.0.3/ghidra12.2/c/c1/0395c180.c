
void FUN_0395c180(long param_1,ulong param_2,ulong param_3,long param_4)

{
  float *pfVar1;
  undefined8 *puVar2;
  long *plVar3;
  int iVar4;
  short sVar5;
  bool bVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 uVar10;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  int iVar11;
  int iVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  long lVar16;
  int *piVar17;
  ulong uVar18;
  uint uVar19;
  uint uVar20;
  ulong uVar21;
  long lVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  undefined4 local_11c;
  long local_118;
  uint local_d8;
  undefined4 local_d4;
  long local_d0;
  long lStack_c8;
  uint local_c0;
  undefined4 uStack_bc;
  long local_b8;
  long lStack_b0;
  
  lVar16 = DAT_05ae7600;
  uVar25 = (uint)(param_3 >> 1) & 0x7fffffff;
  uVar9 = (uint)param_2;
  iVar4 = uVar9 + uVar9 * uVar25;
  uVar19 = iVar4 + 1;
  lVar7 = param_4;
  if (param_4 == 0) {
    lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),param_2,0);
    plVar3 = (long *)(lVar16 + 8);
    if (lVar7 != 0) {
      plVar3 = (long *)(lVar7 + 0xa8);
    }
    lVar7 = *plVar3;
  }
  *(undefined8 *)(param_1 + 0x17b8) = 0;
  *(undefined8 *)(param_1 + 0x1790) = 0;
  *(undefined8 *)(param_1 + 0x1798) = 0;
  *(undefined8 *)(param_1 + 0x17a0) = 0;
  *(undefined8 *)(param_1 + 0x17a8) = 0;
  *(byte *)(param_1 + 0x17b0) = *(byte *)(param_1 + 0x17b0) & 0xfe;
  *(undefined2 *)(param_1 + 0x17b2) = 0;
  if (uVar19 == 0) {
    uVar19 = 0;
    lVar16 = 0;
  }
  else {
    FUN_038f8590(DAT_05ae78d0,param_1 + 0x1788,lVar7,
                 -(ulong)(uVar19 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar19 << 5,8,0);
    *(undefined2 *)(param_1 + 0x17b2) = 0;
    lVar16 = *(long *)(param_1 + 0x17a0);
    if (*(long *)(param_1 + 0x17a8) == 0) {
      uVar19 = 0;
    }
    else {
      uVar19 = *(int *)(param_1 + 0x1790) - *(int *)(*(long *)(param_1 + 0x17a8) + 0x10);
    }
    if (lVar16 != 0) {
      local_11c = *(undefined4 *)(lVar16 + 0x104);
      lVar7 = (*DAT_04c61fd0)(lVar16);
      goto LAB_0395c2e8;
    }
  }
  lVar7 = 0;
  local_11c = 0;
LAB_0395c2e8:
  local_118 = param_1 + 0x19b8;
  uVar23 = (uint)param_3;
  fVar30 = -3.1415927 / ((float)(param_3 & 0xffffffff) + 1.0);
  if (uVar9 == 0) {
    uVar24 = 0xffffffff;
    do {
      fVar26 = (float)(uVar24 + 2) * fVar30 + 1.5707964;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      if (fVar26 == INFINITY) {
        sinf(INFINITY);
        cosf(INFINITY);
      }
      uVar24 = uVar24 + 1;
    } while (uVar25 != uVar24);
  }
  else {
    iVar14 = 0;
    uVar24 = 0;
    do {
      fVar26 = (float)(uVar24 + 1) * fVar30 + 1.5707964;
      if (fVar26 <= 0.0) {
        fVar26 = 0.0;
      }
      fVar27 = sinf(fVar26);
      fVar27 = fVar27 * 0.5;
      fVar26 = cosf(fVar26);
      uVar20 = 0;
      do {
        fVar29 = ((float)uVar20 * 6.2831855) / (float)(param_2 & 0xffffffff);
        fVar28 = cosf(fVar29);
        fVar28 = fVar26 * 0.5 * fVar28;
        fVar29 = sinf(fVar29);
        fVar29 = fVar26 * 0.5 * fVar29;
        pfVar1 = (float *)(lVar7 + (ulong)uVar19 + (long)(int)(iVar14 + uVar20) * 0x20);
        uVar20 = uVar20 + 1;
        *pfVar1 = fVar28;
        pfVar1[1] = fVar27;
        pfVar1[2] = fVar29;
        pfVar1[3] = fVar28 + fVar28;
        pfVar1[6] = fVar28 + 0.5;
        pfVar1[7] = fVar29 + 0.5;
        pfVar1[4] = fVar27 + fVar27;
        pfVar1[5] = fVar29 + fVar29;
      } while (uVar9 != uVar20);
      iVar14 = iVar14 + uVar9;
      bVar6 = uVar24 != uVar25;
      uVar24 = uVar24 + 1;
    } while (bVar6);
  }
  puVar2 = (undefined8 *)(lVar7 + (ulong)uVar19 + (long)iVar4 * 0x20);
  *puVar2 = 0x3f00000000000000;
  *(undefined4 *)(puVar2 + 1) = 0;
  *(undefined4 *)((long)puVar2 + 0x14) = 0;
  puVar2[3] = 0x3f0000003f000000;
  *(undefined8 *)((long)puVar2 + 0xc) = 0x3f80000000000000;
  uStack_bc = local_11c;
  local_c0 = uVar19;
  local_b8 = lVar16;
  lStack_b0 = param_1 + 0x1788;
  FUN_0390ebc0(local_118,&local_c0,0x20,(long)(iVar4 * 0x20 + 0x20));
  uVar18 = 0;
  *(undefined8 *)(param_1 + 0x19f0) = 0x22;
  *(undefined2 *)(param_1 + 0x19f8) = 1;
  *(undefined2 *)(param_1 + 0x1a04) = 1;
  *(undefined2 *)(param_1 + 0x1a10) = 1;
  *(undefined8 *)(param_1 + 0x19fc) = 0xc00000022;
  *(undefined8 *)(param_1 + 0x1a08) = 0x1800000016;
  uVar10 = extraout_x1;
  do {
    lVar16 = DAT_05ae7600;
    iVar14 = 1 << (ulong)((uint)uVar18 & 0x1f);
    if (uVar9 == 0) {
      if (1 < uVar23) {
        uVar19 = 0;
        do {
          uVar19 = uVar19 + iVar14;
        } while (uVar19 < uVar25);
      }
      uVar21 = 0;
    }
    else {
      uVar19 = 0;
      uVar21 = 0;
      do {
        uVar19 = uVar19 + iVar14;
        uVar21 = (ulong)((int)uVar21 + 3);
      } while (uVar19 < uVar9);
      if (1 < uVar23) {
        uVar19 = 0;
        do {
          uVar24 = 0;
          do {
            uVar24 = uVar24 + iVar14;
            uVar21 = (ulong)((int)uVar21 + 6);
          } while (uVar24 < uVar9);
          uVar19 = uVar19 + iVar14;
        } while (uVar19 < uVar25);
      }
    }
    lVar7 = param_4;
    if (param_4 == 0) {
      lVar7 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),uVar10,0);
      plVar3 = (long *)(lVar16 + 8);
      if (lVar7 != 0) {
        plVar3 = (long *)(lVar7 + 0xa8);
      }
      lVar7 = *plVar3;
    }
    lVar16 = param_1 + 0x17c0 + uVar18 * 0xa8;
    piVar17 = (int *)(lVar16 + 8);
    piVar17[0] = 0;
    piVar17[1] = 0;
    *(undefined8 *)(lVar16 + 0x30) = 0;
    *(undefined8 *)(lVar16 + 0x20) = 0;
    *(undefined8 *)(lVar16 + 0x10) = 0;
    *(undefined8 *)(lVar16 + 0x18) = 0;
    *(undefined2 *)(lVar16 + 0x2a) = 0;
    *(byte *)(lVar16 + 0x28) = *(byte *)(lVar16 + 0x28) & 0xfe;
    if ((int)uVar21 == 0) {
      local_d0 = 0;
      lVar7 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar16,lVar7,
                   -(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1,4,0);
      local_d0 = *(long *)(lVar16 + 0x18);
      lVar7 = *(long *)(lVar16 + 0x20);
    }
    *(undefined2 *)(lVar16 + 0x2a) = 0;
    local_d8 = 0;
    if (lVar7 != 0) {
      local_d8 = *piVar17 - *(int *)(lVar7 + 0x10);
    }
    local_d4 = 0;
    if (local_d0 != 0) {
      local_d4 = *(undefined4 *)(local_d0 + 0x104);
    }
    lVar22 = param_1 + 0x1ad8 + uVar18 * 0x120;
    lStack_c8 = lVar16;
    FUN_03961a40(lVar22,&local_d8,param_2 & 0xffffffff,uVar23,0,uVar18 & 0xffffffff);
    lVar7 = DAT_05ae7600;
    if (uVar9 == 0) {
      if (1 < uVar23) {
        uVar19 = 0;
        do {
          uVar19 = uVar19 + iVar14;
        } while (uVar19 < uVar25);
      }
      uVar21 = 0;
    }
    else {
      uVar19 = 0;
      uVar21 = 0;
      do {
        uVar19 = uVar19 + iVar14;
        uVar21 = (ulong)((int)uVar21 + 4);
      } while (uVar19 < uVar9);
      if (1 < uVar23) {
        uVar19 = 0;
        do {
          uVar24 = 0;
          do {
            uVar24 = uVar24 + iVar14;
            uVar21 = (ulong)((int)uVar21 + 4);
          } while (uVar24 < uVar9);
          uVar19 = uVar19 + iVar14;
        } while (uVar19 < uVar25);
      }
    }
    lVar8 = param_4;
    if (param_4 == 0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),extraout_x1_01,0);
      plVar3 = (long *)(lVar7 + 8);
      if (lVar8 != 0) {
        plVar3 = (long *)(lVar8 + 0xa8);
      }
      lVar8 = *plVar3;
    }
    piVar17 = (int *)(lVar16 + 0x40);
    piVar17[0] = 0;
    piVar17[1] = 0;
    *(undefined8 *)(lVar16 + 0x68) = 0;
    *(undefined8 *)(lVar16 + 0x58) = 0;
    *(undefined8 *)(lVar16 + 0x48) = 0;
    *(undefined8 *)(lVar16 + 0x50) = 0;
    *(undefined2 *)(lVar16 + 0x62) = 0;
    *(byte *)(lVar16 + 0x60) = *(byte *)(lVar16 + 0x60) & 0xfe;
    if ((int)uVar21 == 0) {
      local_d0 = 0;
      lVar7 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar16 + 0x38,lVar8,
                   -(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1,4,0);
      local_d0 = *(long *)(lVar16 + 0x50);
      lVar7 = *(long *)(lVar16 + 0x58);
    }
    *(undefined2 *)(lVar16 + 0x62) = 0;
    local_d8 = 0;
    if (lVar7 != 0) {
      local_d8 = *piVar17 - *(int *)(lVar7 + 0x10);
    }
    local_d4 = 0;
    if (local_d0 != 0) {
      local_d4 = *(undefined4 *)(local_d0 + 0x104);
    }
    lStack_c8 = lVar16 + 0x38;
    FUN_03961a40(lVar22 + 0x60,&local_d8,param_2 & 0xffffffff,uVar23,1,uVar18 & 0xffffffff);
    lVar7 = DAT_05ae7600;
    if (uVar9 == 0) {
      uVar19 = 0;
      do {
        uVar19 = uVar19 + iVar14;
      } while (uVar19 <= uVar25);
      uVar21 = 1;
    }
    else {
      uVar19 = 0;
      iVar11 = 0;
      do {
        uVar24 = 0;
        do {
          iVar12 = iVar11;
          uVar24 = uVar24 + iVar14;
          iVar11 = iVar12 + 1;
        } while (uVar24 < uVar9);
        uVar19 = uVar19 + iVar14;
      } while (uVar19 <= uVar25);
      uVar21 = (ulong)(iVar12 + 2);
    }
    lVar8 = param_4;
    if (param_4 == 0) {
      lVar8 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68),extraout_x1_02,0);
      plVar3 = (long *)(lVar7 + 8);
      if (lVar8 != 0) {
        plVar3 = (long *)(lVar8 + 0xa8);
      }
      lVar8 = *plVar3;
    }
    lVar7 = lVar16 + 0x70;
    piVar17 = (int *)(lVar16 + 0x78);
    piVar17[0] = 0;
    piVar17[1] = 0;
    *(undefined8 *)(lVar16 + 0xa0) = 0;
    *(undefined8 *)(lVar16 + 0x90) = 0;
    *(undefined8 *)(lVar16 + 0x80) = 0;
    *(undefined8 *)(lVar16 + 0x88) = 0;
    *(undefined2 *)(lVar16 + 0x9a) = 0;
    *(byte *)(lVar16 + 0x98) = *(byte *)(lVar16 + 0x98) & 0xfe;
    if ((int)uVar21 == 0) {
      lVar8 = 0;
      lVar13 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar7,lVar8,
                   -(uVar21 >> 0x1f) & 0xfffffffe00000000 | uVar21 << 1,4,0);
      lVar8 = *(long *)(lVar16 + 0x88);
      lVar13 = *(long *)(lVar16 + 0x90);
    }
    *(undefined2 *)(lVar16 + 0x9a) = 0;
    local_d0 = lVar8;
    lStack_c8 = lVar7;
    if (lVar13 == 0) {
      uVar21 = 0;
      local_d8 = 0;
      if (lVar8 != 0) goto LAB_0395c8c8;
LAB_0395c8f0:
      uVar15 = 0;
      lVar16 = 0;
    }
    else {
      local_d8 = *piVar17 - *(int *)(lVar13 + 0x10);
      uVar21 = (ulong)local_d8;
      if (lVar8 == 0) goto LAB_0395c8f0;
LAB_0395c8c8:
      uVar15 = *(undefined4 *)(lVar8 + 0x104);
      lVar16 = (**(code **)PTR_DAT_04bb2cd8)(lVar8);
    }
    if (uVar9 == 0) {
      uVar19 = 0;
      do {
        uVar19 = uVar19 + iVar14;
      } while (uVar19 <= uVar25);
      lVar13 = 0;
    }
    else {
      iVar11 = 0;
      uVar19 = 0;
      lVar13 = 0;
      do {
        uVar24 = 0;
        lVar13 = (long)(int)lVar13;
        do {
          sVar5 = (short)uVar24;
          uVar24 = uVar24 + iVar14;
          *(short *)(lVar16 + uVar21 + lVar13 * 2) = (short)iVar11 + sVar5;
          lVar13 = lVar13 + 1;
        } while (uVar24 < uVar9);
        uVar19 = uVar19 + iVar14;
        iVar11 = iVar11 + uVar9 * iVar14;
      } while (uVar19 <= uVar25);
    }
    *(short *)(lVar16 + uVar21 + (long)(int)lVar13 * 2) = (short)iVar4;
    local_c0 = (uint)uVar21;
    local_d4 = uVar15;
    uStack_bc = uVar15;
    local_b8 = lVar8;
    lStack_b0 = lVar7;
    FUN_03901480(lVar22 + 0xc0,&local_c0,1,(int)lVar13 + 1);
    uVar18 = uVar18 + 1;
    *(undefined4 *)(lVar22 + 0xcc) = 0;
    uVar10 = extraout_x1_00;
    if (uVar18 == 3) {
      return;
    }
  } while( true );
}

