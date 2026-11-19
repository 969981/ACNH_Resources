
void FUN_03960120(float param_1,float param_2,long param_3,ulong param_4,uint param_5,long param_6,
                 int param_7,int param_8)

{
  float *pfVar1;
  uint uVar2;
  long *plVar3;
  undefined4 uVar4;
  short sVar5;
  short sVar6;
  short sVar7;
  short sVar8;
  short sVar9;
  undefined *puVar10;
  bool bVar11;
  long lVar12;
  long lVar13;
  uint uVar14;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 uVar15;
  undefined8 extraout_x1_04;
  int iVar16;
  ulong uVar17;
  int iVar18;
  float *pfVar19;
  ulong uVar20;
  short *psVar21;
  uint uVar22;
  ulong uVar23;
  undefined4 uVar24;
  long lVar25;
  long lVar26;
  int iVar27;
  uint uVar28;
  undefined8 *puVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  undefined4 local_13c;
  long local_138;
  uint local_114;
  undefined8 local_c0;
  long local_b8;
  long local_b0;
  
  uVar14 = (uint)param_4;
  uVar28 = (param_5 + 1) * uVar14;
  uVar23 = param_4 & 0xffffffff;
  uVar17 = -(ulong)(uVar28 >> 0x1f) & 0xffffffe000000000 | (ulong)uVar28 << 5;
  lVar12 = param_6;
  if (param_6 == 0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),param_4,0);
    plVar3 = (long *)(lVar26 + 8);
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + 0xa8);
    }
    lVar12 = *plVar3;
  }
  *(undefined8 *)(param_3 + 0x2d20) = 0;
  *(undefined8 *)(param_3 + 0x2cf8) = 0;
  *(undefined8 *)(param_3 + 0x2d00) = 0;
  *(undefined8 *)(param_3 + 0x2d08) = 0;
  *(undefined8 *)(param_3 + 0x2d10) = 0;
  *(byte *)(param_3 + 0x2d18) = *(byte *)(param_3 + 0x2d18) & 0xfe;
  puVar10 = PTR_DAT_04bd0fa8;
  *(undefined2 *)(param_3 + 0x2d1a) = 0;
  if (uVar28 == 0) {
    local_114 = 0;
    lVar12 = 0;
LAB_0396026c:
    lVar26 = 0;
    local_13c = 0;
  }
  else {
    FUN_038f8590(*(undefined8 *)puVar10,param_3 + 0x2cf0,lVar12,uVar17,8,0);
    *(undefined2 *)(param_3 + 0x2d1a) = 0;
    lVar12 = *(long *)(param_3 + 0x2d08);
    if (*(long *)(param_3 + 0x2d10) == 0) {
      local_114 = 0;
    }
    else {
      local_114 = *(int *)(param_3 + 0x2cf8) - *(int *)(*(long *)(param_3 + 0x2d10) + 0x10);
    }
    if (lVar12 == 0) goto LAB_0396026c;
    local_13c = *(undefined4 *)(lVar12 + 0x104);
    lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar12);
  }
  local_138 = param_3 + 0x2e78;
  fVar32 = (float)param_7;
  fVar41 = -param_1;
  fVar36 = (float)param_8;
  fVar40 = 1.0 / (float)param_5;
  fVar34 = param_1;
  fVar39 = fVar41;
  fVar37 = fVar41;
  fVar38 = param_1;
  fVar43 = param_1;
  if (param_5 != 0) {
    uVar28 = 0;
    do {
      fVar42 = fVar40 * (float)uVar28 * fVar32 * 6.2831855;
      fVar30 = sinf(fVar42);
      fVar42 = cosf(fVar42);
      fVar44 = fVar40 * (float)uVar28 * fVar36 * 6.2831855;
      fVar31 = sinf(fVar44);
      fVar44 = cosf(fVar44);
      uVar28 = uVar28 + 1;
      fVar33 = fVar42 * 0.5 + 1.0;
      fVar42 = (fVar44 * fVar33 + -1.0) * param_1 * 0.6666667;
      fVar31 = fVar33 * fVar31 * param_1 * 0.6666667;
      fVar30 = fVar30 * 0.5 * param_1 * 0.6666667;
      if (fVar41 <= fVar42) {
        fVar41 = fVar42;
      }
      if (fVar39 <= fVar31) {
        fVar39 = fVar31;
      }
      if (fVar37 <= fVar30) {
        fVar37 = fVar30;
      }
      if (fVar42 <= fVar38) {
        fVar38 = fVar42;
      }
      if (fVar31 <= fVar43) {
        fVar43 = fVar31;
      }
      if (fVar30 <= fVar34) {
        fVar34 = fVar30;
      }
    } while (param_5 != uVar28);
  }
  fVar42 = (1.0 - fVar40) * fVar32 * 6.2831855;
  fVar30 = sinf(fVar42);
  fVar42 = cosf(fVar42);
  fVar44 = (1.0 - fVar40) * fVar36 * 6.2831855;
  fVar31 = sinf(fVar44);
  fVar44 = cosf(fVar44);
  puVar10 = PTR_DAT_04bb2d00;
  if (param_5 + 1 != 0) {
    iVar27 = 0;
    uVar28 = 0;
    fVar33 = (fVar38 + fVar41) * 0.5;
    fVar46 = (fVar43 + fVar39) * 0.5;
    fVar37 = (fVar34 + fVar37) * 0.5;
    fVar30 = fVar30 * 0.5 * param_1 * 0.6666667 - fVar37;
    fVar34 = fVar42 * 0.5 + 1.0;
    fVar38 = fVar34 * fVar31 * param_1 * 0.6666667 - fVar46;
    fVar43 = (fVar44 * fVar34 + -1.0) * param_1 * 0.6666667 - fVar33;
    fVar34 = fVar43;
    fVar41 = fVar38;
    fVar39 = fVar30;
    do {
      fVar42 = SQRT(fVar38 * fVar38 + fVar43 * fVar43 + fVar30 * fVar30);
      if (0.0 < fVar42) {
        fVar42 = 1.0 / fVar42;
        fVar43 = fVar43 * fVar42;
        fVar38 = fVar38 * fVar42;
        fVar30 = fVar30 * fVar42;
      }
      fVar31 = fVar40 * (float)uVar28 * fVar32 * 6.2831855;
      fVar42 = sinf(fVar31);
      fVar31 = cosf(fVar31);
      fVar45 = fVar40 * (float)uVar28 * fVar36 * 6.2831855;
      fVar44 = sinf(fVar45);
      fVar45 = cosf(fVar45);
      fVar35 = fVar31 * 0.5 + 1.0;
      fVar31 = (fVar45 * fVar35 + -1.0) * param_1 * 0.6666667 - fVar33;
      fVar44 = fVar35 * fVar44 * param_1 * 0.6666667 - fVar46;
      fVar42 = fVar42 * 0.5 * param_1 * 0.6666667 - fVar37;
      fVar41 = fVar44 - fVar41;
      fVar34 = fVar31 - fVar34;
      fVar39 = fVar42 - fVar39;
      fVar45 = SQRT(fVar41 * fVar41 + fVar34 * fVar34 + fVar39 * fVar39);
      if (0.0 < fVar45) {
        fVar45 = 1.0 / fVar45;
        fVar34 = fVar34 * fVar45;
        fVar41 = fVar41 * fVar45;
        fVar39 = fVar39 * fVar45;
      }
      fVar45 = fVar30 * fVar41 - fVar39 * fVar38;
      fVar35 = fVar43 * fVar39 - fVar34 * fVar30;
      fVar47 = fVar38 * fVar34 - fVar41 * fVar43;
      fVar38 = SQRT(fVar35 * fVar35 + fVar45 * fVar45 + fVar47 * fVar47);
      if (0.0 < fVar38) {
        fVar38 = 1.0 / fVar38;
        fVar45 = fVar45 * fVar38;
        fVar35 = fVar35 * fVar38;
        fVar47 = fVar47 * fVar38;
      }
      fVar43 = -(fVar41 * fVar47) - fVar35 * -fVar39;
      fVar38 = -(fVar39 * fVar45) - fVar47 * -fVar34;
      fVar30 = -(fVar34 * fVar35) - fVar45 * -fVar41;
      if (uVar14 != 0) {
        uVar22 = 0;
        pfVar19 = (float *)((ulong)local_114 + lVar26 + 0x10 + (long)iVar27 * 0x20);
        do {
          uVar20 = (ulong)uVar22;
          uVar22 = uVar22 + 1;
          uVar20 = (ulong)((((float)uVar20 * 6.2831855) / (float)uVar23) * 6.8356525e+08);
          pfVar1 = (float *)(puVar10 + (uVar20 >> 0x18 & 0xff) * 0x10);
          fVar48 = (float)((uint)uVar20 & 0xffffff) * 5.9604645e-08;
          fVar49 = *pfVar1 + fVar48 * pfVar1[1];
          fVar48 = pfVar1[2] + fVar48 * pfVar1[3];
          fVar52 = fVar49 * param_2;
          fVar51 = fVar48 * param_2;
          pfVar19[-1] = fVar49 * fVar43 + fVar48 * fVar45 + fVar34 * 0.0;
          *pfVar19 = fVar49 * fVar38 + fVar48 * fVar35 + fVar41 * 0.0;
          fVar50 = fVar31 + fVar52 * fVar43 + fVar51 * fVar45 + fVar34 * 0.0;
          fVar53 = fVar44 + fVar52 * fVar38 + fVar51 * fVar35 + fVar41 * 0.0;
          pfVar19[-4] = fVar50;
          pfVar19[-3] = fVar53;
          pfVar19[-2] = fVar42 + fVar52 * fVar30 + fVar51 * fVar47 + fVar39 * 0.0;
          pfVar19[1] = fVar49 * fVar30 + fVar48 * fVar47 + fVar39 * 0.0;
          pfVar19[2] = fVar50 + 0.5;
          pfVar19[3] = fVar53 + 0.5;
          pfVar19 = pfVar19 + 8;
        } while (uVar14 != uVar22);
        iVar27 = iVar27 + uVar22;
      }
      bVar11 = uVar28 != param_5;
      uVar28 = uVar28 + 1;
      fVar34 = fVar31;
      fVar41 = fVar44;
      fVar39 = fVar42;
    } while (bVar11);
  }
  local_c0 = CONCAT44(local_13c,local_114);
  local_b8 = lVar12;
  local_b0 = param_3 + 0x2cf0;
  FUN_0390ebc0(local_138,&local_c0,0x20,uVar17);
  *(undefined8 *)(param_3 + 0x2eb0) = 0x22;
  *(undefined2 *)(param_3 + 0x2eb8) = 1;
  *(undefined2 *)(param_3 + 0x2ec4) = 1;
  *(undefined2 *)(param_3 + 0x2ed0) = 1;
  *(undefined8 *)(param_3 + 0x2ebc) = 0xc00000022;
  lVar12 = param_3 + 0x2d28;
  *(undefined8 *)(param_3 + 0x2ec8) = 0x1800000016;
  lVar26 = param_3 + 0x2f98;
  sVar8 = (short)param_4;
  if (param_5 == 0) {
    if (param_6 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_3 + 0x2d58) = 0;
    *(undefined8 *)(param_3 + 0x2d30) = 0;
    *(undefined8 *)(param_3 + 0x2d38) = 0;
    *(undefined8 *)(param_3 + 0x2d40) = 0;
    *(undefined8 *)(param_3 + 0x2d48) = 0;
    *(undefined2 *)(param_3 + 0x2d52) = 0;
    *(byte *)(param_3 + 0x2d50) = *(byte *)(param_3 + 0x2d50) & 0xfe;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = lVar12;
    FUN_03901480(lVar26,&local_c0,1,0);
    *(undefined4 *)(param_3 + 0x2fa4) = 4;
    if (param_6 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_3 + 0x2d90) = 0;
    *(undefined8 *)(param_3 + 0x2d68) = 0;
    *(undefined8 *)(param_3 + 0x2d70) = 0;
    *(undefined8 *)(param_3 + 0x2d78) = 0;
    *(undefined8 *)(param_3 + 0x2d80) = 0;
    *(undefined2 *)(param_3 + 0x2d8a) = 0;
    *(byte *)(param_3 + 0x2d88) = *(byte *)(param_3 + 0x2d88) & 0xfe;
    local_c0 = 0;
    local_b8 = 0;
    local_b0 = param_3 + 0x2d60;
    FUN_03901480(param_3 + 0x2ff8,&local_c0,1,0);
    *(undefined4 *)(param_3 + 0x3004) = 4;
    puVar29 = (undefined8 *)PTR_DAT_04bd0fa8;
    if (param_6 == 0) {
      nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    }
    *(undefined8 *)(param_3 + 0x2dc8) = 0;
    *(undefined8 *)(param_3 + 0x2da0) = 0;
    *(undefined8 *)(param_3 + 0x2da8) = 0;
    *(undefined8 *)(param_3 + 0x2db0) = 0;
    *(undefined8 *)(param_3 + 0x2db8) = 0;
    *(undefined2 *)(param_3 + 0x2dc2) = 0;
    *(byte *)(param_3 + 0x2dc0) = *(byte *)(param_3 + 0x2dc0) & 0xfe;
LAB_03960b54:
    local_b0 = param_3 + 0x2d98;
    local_b8 = 0;
    local_c0 = 0;
    FUN_03901480(param_3 + 0x3058,&local_c0,1,0);
    uVar15 = extraout_x1_00;
  }
  else {
    if (uVar14 == 0) {
      if (param_6 == 0) {
        nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      }
      *(undefined8 *)(param_3 + 0x2d58) = 0;
      *(undefined8 *)(param_3 + 0x2d30) = 0;
      *(undefined8 *)(param_3 + 0x2d38) = 0;
      *(undefined8 *)(param_3 + 0x2d40) = 0;
      *(undefined8 *)(param_3 + 0x2d48) = 0;
      *(undefined2 *)(param_3 + 0x2d52) = 0;
      *(byte *)(param_3 + 0x2d50) = *(byte *)(param_3 + 0x2d50) & 0xfe;
      local_c0 = 0;
      local_b8 = 0;
      local_b0 = lVar12;
      FUN_03901480(lVar26,&local_c0,1,0);
      *(undefined4 *)(param_3 + 0x2fa4) = 4;
      if (param_6 == 0) {
        nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      }
      *(undefined8 *)(param_3 + 0x2d90) = 0;
      *(undefined8 *)(param_3 + 0x2d68) = 0;
      uVar28 = 0;
      local_b0 = param_3 + 0x2d60;
      *(undefined8 *)(param_3 + 0x2d70) = 0;
      *(undefined8 *)(param_3 + 0x2d78) = 0;
      *(undefined8 *)(param_3 + 0x2d80) = 0;
      *(undefined2 *)(param_3 + 0x2d8a) = 0;
      *(byte *)(param_3 + 0x2d88) = *(byte *)(param_3 + 0x2d88) & 0xfe;
      puVar29 = (undefined8 *)PTR_DAT_04bd0fa8;
      do {
        uVar28 = uVar28 + 2;
      } while (uVar28 < param_5);
      local_c0 = 0;
      local_b8 = 0;
      FUN_03901480(param_3 + 0x2ff8,&local_c0,1,0);
      *(undefined4 *)(param_3 + 0x3004) = 4;
      if (param_6 == 0) {
        nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      }
      uVar28 = 0;
      *(undefined8 *)(param_3 + 0x2dc8) = 0;
      *(undefined8 *)(param_3 + 0x2da0) = 0;
      *(undefined8 *)(param_3 + 0x2da8) = 0;
      *(undefined8 *)(param_3 + 0x2db0) = 0;
      *(undefined8 *)(param_3 + 0x2db8) = 0;
      *(undefined2 *)(param_3 + 0x2dc2) = 0;
      *(byte *)(param_3 + 0x2dc0) = *(byte *)(param_3 + 0x2dc0) & 0xfe;
      do {
        uVar28 = uVar28 + 4;
      } while (uVar28 < param_5);
      goto LAB_03960b54;
    }
    uVar28 = uVar14 * param_5 * 6;
    lVar13 = param_6;
    if (param_6 == 0) {
      lVar25 = *(long *)PTR_DAT_04bb2698;
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
      plVar3 = (long *)(lVar25 + 8);
      if (lVar13 != 0) {
        plVar3 = (long *)(lVar13 + 0xa8);
      }
      lVar13 = *plVar3;
    }
    *(undefined8 *)(param_3 + 0x2d58) = 0;
    *(undefined8 *)(param_3 + 0x2d30) = 0;
    *(undefined8 *)(param_3 + 0x2d38) = 0;
    *(undefined8 *)(param_3 + 0x2d40) = 0;
    *(undefined8 *)(param_3 + 0x2d48) = 0;
    *(undefined2 *)(param_3 + 0x2d52) = 0;
    *(byte *)(param_3 + 0x2d50) = *(byte *)(param_3 + 0x2d50) & 0xfe;
    if (uVar28 == 0) {
      lVar13 = 0;
      uVar17 = 0;
LAB_03960b6c:
      uVar24 = 0;
      lVar25 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,lVar12,lVar13,
                   -(ulong)((uVar14 * param_5 * 3 & 0x7fffffff) >> 0x1e) & 0xfffffffe00000000 |
                   (ulong)uVar28 << 1,4,0);
      *(undefined2 *)(param_3 + 0x2d52) = 0;
      lVar13 = *(long *)(param_3 + 0x2d40);
      if (*(long *)(param_3 + 0x2d48) == 0) {
        uVar17 = 0;
        if (lVar13 == 0) {
          lVar25 = 0;
          uVar24 = 0;
          goto LAB_03960b98;
        }
      }
      else {
        uVar17 = (ulong)(uint)(*(int *)(param_3 + 0x2d30) -
                              *(int *)(*(long *)(param_3 + 0x2d48) + 0x10));
        if (lVar13 == 0) goto LAB_03960b6c;
      }
      uVar24 = *(undefined4 *)(lVar13 + 0x104);
      lVar25 = (**(code **)PTR_DAT_04bb2cd8)(lVar13);
    }
LAB_03960b98:
    iVar18 = 0;
    uVar28 = 0;
    iVar27 = 0;
    do {
      sVar9 = (short)uVar28;
      uVar28 = uVar28 + 1;
      uVar22 = 0;
      psVar21 = (short *)(lVar25 + uVar17 + 6 + (long)iVar27 * 2);
      do {
        sVar5 = sVar8 + (short)iVar18 + (short)uVar22;
        psVar21[-2] = (short)iVar18 + (short)uVar22;
        uVar22 = uVar22 + 1;
        sVar7 = 0;
        if (uVar14 != 0) {
          sVar7 = (short)(uVar22 / uVar14);
        }
        psVar21[-1] = sVar5;
        psVar21[1] = sVar5;
        iVar27 = iVar27 + 6;
        sVar7 = (short)uVar22 - sVar7 * sVar8;
        sVar5 = sVar7 + sVar9 * sVar8;
        psVar21[-3] = sVar5;
        *psVar21 = sVar5;
        psVar21[2] = sVar7 + (short)uVar28 * sVar8;
        psVar21 = psVar21 + 6;
      } while (uVar14 != uVar22);
      iVar18 = iVar18 + uVar14;
    } while (uVar28 != param_5);
    local_c0 = CONCAT44(uVar24,(int)uVar17);
    local_b8 = lVar13;
    local_b0 = lVar12;
    FUN_03901480(lVar26,&local_c0,1);
    iVar27 = (uVar14 >> 1) * (param_5 >> 1);
    *(undefined4 *)(param_3 + 0x2fa4) = 4;
    uVar28 = iVar27 * 6;
    lVar12 = param_6;
    if (param_6 == 0) {
      lVar26 = *(long *)PTR_DAT_04bb2698;
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_01,
                                   0);
      plVar3 = (long *)(lVar26 + 8);
      if (lVar12 != 0) {
        plVar3 = (long *)(lVar12 + 0xa8);
      }
      lVar12 = *plVar3;
    }
    *(undefined8 *)(param_3 + 0x2d90) = 0;
    *(undefined8 *)(param_3 + 0x2d68) = 0;
    *(undefined8 *)(param_3 + 0x2d70) = 0;
    *(undefined8 *)(param_3 + 0x2d78) = 0;
    *(undefined8 *)(param_3 + 0x2d80) = 0;
    *(undefined2 *)(param_3 + 0x2d8a) = 0;
    *(byte *)(param_3 + 0x2d88) = *(byte *)(param_3 + 0x2d88) & 0xfe;
    puVar29 = (undefined8 *)PTR_DAT_04bd0fa8;
    if (uVar28 == 0) {
      lVar12 = 0;
      uVar17 = 0;
LAB_03960d14:
      uVar24 = 0;
      lVar26 = 0;
    }
    else {
      FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_3 + 0x2d60,lVar12,
                   -(ulong)((iVar27 * 3 & 0x7fffffffU) >> 0x1e) & 0xfffffffe00000000 |
                   (ulong)uVar28 << 1,4,0);
      *(undefined2 *)(param_3 + 0x2d8a) = 0;
      lVar12 = *(long *)(param_3 + 0x2d78);
      if (*(long *)(param_3 + 0x2d80) == 0) {
        uVar17 = 0;
        if (lVar12 == 0) {
          lVar26 = 0;
          uVar24 = 0;
          goto LAB_03960d44;
        }
      }
      else {
        uVar17 = (ulong)(uint)(*(int *)(param_3 + 0x2d68) -
                              *(int *)(*(long *)(param_3 + 0x2d80) + 0x10));
        if (lVar12 == 0) goto LAB_03960d14;
      }
      uVar24 = *(undefined4 *)(lVar12 + 0x104);
      lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar12);
    }
LAB_03960d44:
    iVar18 = 0;
    uVar28 = 0;
    iVar27 = 0;
    do {
      sVar9 = (short)uVar28;
      uVar28 = uVar28 + 2;
      uVar22 = 0;
      psVar21 = (short *)(lVar26 + uVar17 + 6 + (long)iVar27 * 2);
      do {
        sVar5 = (short)(uVar14 * 2) + (short)iVar18 + (short)uVar22;
        psVar21[-2] = (short)iVar18 + (short)uVar22;
        uVar22 = uVar22 + 2;
        sVar7 = 0;
        if (uVar14 != 0) {
          sVar7 = (short)(uVar22 / uVar14);
        }
        psVar21[-1] = sVar5;
        psVar21[1] = sVar5;
        iVar27 = iVar27 + 6;
        sVar7 = (short)uVar22 - sVar7 * sVar8;
        sVar5 = sVar7 + sVar9 * sVar8;
        psVar21[-3] = sVar5;
        *psVar21 = sVar5;
        psVar21[2] = sVar7 + (short)uVar28 * sVar8;
        psVar21 = psVar21 + 6;
      } while (uVar22 < uVar14);
      iVar18 = iVar18 + uVar14 * 2;
    } while (uVar28 < param_5);
    local_c0 = CONCAT44(uVar24,(int)uVar17);
    local_b8 = lVar12;
    local_b0 = param_3 + 0x2d60;
    FUN_03901480(param_3 + 0x2ff8,&local_c0,1);
    iVar27 = (uVar14 >> 2) * (param_5 >> 2);
    *(undefined4 *)(param_3 + 0x3004) = 4;
    uVar28 = iVar27 * 6;
    lVar12 = param_6;
    if (param_6 == 0) {
      lVar26 = *(long *)PTR_DAT_04bb2698;
      lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_02,
                                   0);
      plVar3 = (long *)(lVar26 + 8);
      if (lVar12 != 0) {
        plVar3 = (long *)(lVar12 + 0xa8);
      }
      lVar12 = *plVar3;
    }
    *(undefined8 *)(param_3 + 0x2dc8) = 0;
    *(undefined8 *)(param_3 + 0x2da0) = 0;
    *(undefined8 *)(param_3 + 0x2da8) = 0;
    *(undefined8 *)(param_3 + 0x2db0) = 0;
    *(undefined8 *)(param_3 + 0x2db8) = 0;
    *(undefined2 *)(param_3 + 0x2dc2) = 0;
    *(byte *)(param_3 + 0x2dc0) = *(byte *)(param_3 + 0x2dc0) & 0xfe;
    if (uVar28 == 0) {
      lVar12 = 0;
      uVar17 = 0;
LAB_03960eb8:
      uVar24 = 0;
      lVar26 = 0;
    }
    else {
      FUN_038f8590(*puVar29,param_3 + 0x2d98,lVar12,
                   -(ulong)((iVar27 * 3 & 0x7fffffffU) >> 0x1e) & 0xfffffffe00000000 |
                   (ulong)uVar28 << 1,4,0);
      *(undefined2 *)(param_3 + 0x2dc2) = 0;
      lVar12 = *(long *)(param_3 + 0x2db0);
      if (*(long *)(param_3 + 0x2db8) == 0) {
        uVar17 = 0;
        if (lVar12 == 0) {
          lVar26 = 0;
          uVar24 = 0;
          goto LAB_03960ee8;
        }
      }
      else {
        uVar17 = (ulong)(uint)(*(int *)(param_3 + 0x2da0) -
                              *(int *)(*(long *)(param_3 + 0x2db8) + 0x10));
        if (lVar12 == 0) goto LAB_03960eb8;
      }
      uVar24 = *(undefined4 *)(lVar12 + 0x104);
      lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar12);
    }
LAB_03960ee8:
    iVar18 = 0;
    uVar28 = 0;
    iVar27 = 0;
    do {
      sVar9 = (short)uVar28;
      uVar28 = uVar28 + 4;
      uVar22 = 0;
      psVar21 = (short *)(lVar26 + uVar17 + 6 + (long)iVar27 * 2);
      do {
        sVar5 = (short)(uVar14 * 4) + (short)iVar18 + (short)uVar22;
        psVar21[-2] = (short)iVar18 + (short)uVar22;
        uVar22 = uVar22 + 4;
        sVar7 = 0;
        if (uVar14 != 0) {
          sVar7 = (short)(uVar22 / uVar14);
        }
        psVar21[-1] = sVar5;
        psVar21[1] = sVar5;
        iVar27 = iVar27 + 6;
        sVar7 = (short)uVar22 - sVar7 * sVar8;
        sVar5 = sVar7 + sVar9 * sVar8;
        psVar21[-3] = sVar5;
        *psVar21 = sVar5;
        psVar21[2] = sVar7 + (short)uVar28 * sVar8;
        psVar21 = psVar21 + 6;
      } while (uVar22 < uVar14);
      iVar18 = iVar18 + uVar14 * 4;
    } while (uVar28 < param_5);
    local_c0 = CONCAT44(uVar24,(int)uVar17);
    local_b8 = lVar12;
    local_b0 = param_3 + 0x2d98;
    FUN_03901480(param_3 + 0x3058,&local_c0,1);
    uVar15 = extraout_x1_03;
  }
  *(undefined4 *)(param_3 + 0x3064) = 4;
  uVar28 = param_5 * uVar14 * 4;
  lVar12 = param_6;
  if (param_6 == 0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),uVar15,0);
    plVar3 = (long *)(lVar26 + 8);
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + 0xa8);
    }
    lVar12 = *plVar3;
  }
  *(undefined8 *)(param_3 + 0x2e00) = 0;
  *(undefined8 *)(param_3 + 0x2dd8) = 0;
  *(undefined8 *)(param_3 + 0x2de0) = 0;
  *(undefined8 *)(param_3 + 0x2de8) = 0;
  *(undefined8 *)(param_3 + 0x2df0) = 0;
  *(undefined2 *)(param_3 + 0x2dfa) = 0;
  *(byte *)(param_3 + 0x2df8) = *(byte *)(param_3 + 0x2df8) & 0xfe;
  if (uVar28 == 0) {
    lVar12 = 0;
    uVar17 = 0;
LAB_03961064:
    uVar24 = (undefined4)uVar17;
joined_r0x03961070:
    uVar4 = 0;
    lVar26 = 0;
    local_b8 = lVar12;
  }
  else {
    FUN_038f8590(*puVar29,param_3 + 0x2dd0,lVar12,
                 -(ulong)((param_5 * uVar14 & 0x3fffffff) >> 0x1d) & 0xfffffffe00000000 |
                 (ulong)uVar28 << 1,4,0);
    *(undefined2 *)(param_3 + 0x2dfa) = 0;
    lVar12 = *(long *)(param_3 + 0x2de8);
    if (*(long *)(param_3 + 0x2df0) == 0) {
      uVar17 = 0;
      uVar24 = 0;
      if (lVar12 == 0) goto joined_r0x03961070;
    }
    else {
      uVar17 = (ulong)(uint)(*(int *)(param_3 + 0x2dd8) -
                            *(int *)(*(long *)(param_3 + 0x2df0) + 0x10));
      if (lVar12 == 0) goto LAB_03961064;
    }
    uVar24 = (undefined4)uVar17;
    uVar4 = *(undefined4 *)(lVar12 + 0x104);
    lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar12);
    local_b8 = lVar12;
  }
  lVar12 = 0;
  if (uVar14 != 0) {
    lVar12 = 0;
    uVar24 = (undefined4)uVar17;
    if (param_5 != 0) {
      iVar27 = 0;
      uVar28 = 0;
      lVar12 = 0;
      do {
        sVar9 = (short)uVar28 * sVar8;
        lVar12 = (long)(int)lVar12;
        if (uVar14 == 1) {
          uVar22 = 0;
        }
        else {
          psVar21 = (short *)(uVar17 + lVar26 + 8 + lVar12 * 2);
          uVar22 = 0;
          do {
            iVar18 = uVar22 - uVar14;
            sVar6 = (short)uVar22;
            sVar7 = (short)iVar27 + sVar6;
            psVar21[-4] = sVar7;
            psVar21[-2] = sVar7;
            sVar5 = 0;
            if (iVar18 != -1) {
              sVar5 = sVar6 + 1;
            }
            *psVar21 = sVar7 + 1;
            sVar6 = (short)uVar23 + sVar6;
            uVar22 = uVar22 + 2;
            psVar21[-1] = sVar6;
            psVar21[-3] = sVar5 + sVar9;
            uVar2 = 0;
            if (iVar18 != -2) {
              uVar2 = uVar22;
            }
            psVar21[2] = sVar7 + 1;
            psVar21[1] = (short)uVar2 + sVar9;
            lVar12 = lVar12 + 8;
            psVar21[3] = sVar6 + 1;
            psVar21 = psVar21 + 8;
          } while ((uVar14 & 0xfffffffe) != uVar22);
        }
        uVar28 = uVar28 + 1;
        if ((param_4 & 1) != 0) {
          sVar7 = (short)uVar22;
          psVar21 = (short *)(lVar26 + uVar17 + lVar12 * 2);
          lVar12 = lVar12 + 4;
          sVar5 = 0;
          if (uVar22 + 1 != uVar14) {
            sVar5 = sVar7 + 1;
          }
          *psVar21 = sVar7 + sVar9;
          psVar21[2] = sVar7 + sVar9;
          psVar21[1] = sVar5 + sVar9;
          psVar21[3] = sVar7 + (short)uVar28 * sVar8;
        }
        iVar27 = iVar27 + uVar14;
        uVar23 = (ulong)((int)uVar23 + uVar14);
      } while (uVar28 != param_5);
    }
  }
  local_c0 = CONCAT44(uVar4,uVar24);
  local_b0 = param_3 + 0x2dd0;
  FUN_03901480(param_3 + 0x30b8,&local_c0,1,lVar12);
  *(undefined4 *)(param_3 + 0x30c4) = 1;
  uVar28 = (param_5 & 0x7ffffffe) * 2 * (uVar14 >> 1);
  lVar12 = param_6;
  if (param_6 == 0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04,0)
    ;
    plVar3 = (long *)(lVar26 + 8);
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + 0xa8);
    }
    lVar12 = *plVar3;
  }
  *(undefined8 *)(param_3 + 0x2e38) = 0;
  *(undefined8 *)(param_3 + 0x2e10) = 0;
  *(undefined8 *)(param_3 + 0x2e18) = 0;
  *(undefined8 *)(param_3 + 0x2e20) = 0;
  *(undefined8 *)(param_3 + 0x2e28) = 0;
  *(undefined2 *)(param_3 + 0x2e32) = 0;
  *(byte *)(param_3 + 0x2e30) = *(byte *)(param_3 + 0x2e30) & 0xfe;
  if (uVar28 == 0) {
    lVar12 = 0;
    uVar17 = 0;
LAB_039612a8:
    uVar24 = 0;
    lVar26 = 0;
  }
  else {
    FUN_038f8590(*puVar29,param_3 + 0x2e08,lVar12,
                 -(ulong)(uVar28 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar28 << 1,4,0);
    *(undefined2 *)(param_3 + 0x2e32) = 0;
    lVar12 = *(long *)(param_3 + 0x2e20);
    if (*(long *)(param_3 + 0x2e28) == 0) {
      uVar17 = 0;
      if (lVar12 == 0) {
        lVar26 = 0;
        uVar24 = 0;
        goto LAB_039612d8;
      }
    }
    else {
      uVar17 = (ulong)(uint)(*(int *)(param_3 + 0x2e10) -
                            *(int *)(*(long *)(param_3 + 0x2e28) + 0x10));
      if (lVar12 == 0) goto LAB_039612a8;
    }
    uVar24 = *(undefined4 *)(lVar12 + 0x104);
    lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar12);
  }
LAB_039612d8:
  if (param_5 == 0) {
LAB_0396137c:
    lVar13 = 0;
  }
  else {
    if (uVar14 == 0) {
      uVar28 = 0;
      do {
        uVar28 = uVar28 + 2;
      } while (uVar28 < param_5);
      goto LAB_0396137c;
    }
    iVar27 = 0;
    uVar28 = 0;
    lVar13 = 0;
    do {
      sVar9 = (short)uVar28;
      uVar22 = 0;
      uVar28 = uVar28 + 2;
      psVar21 = (short *)(uVar17 + lVar26 + 4 + (long)(int)lVar13 * 2);
      lVar13 = (long)(int)lVar13;
      do {
        sVar6 = (short)uVar22;
        sVar5 = (short)iVar27 + sVar6;
        psVar21[-2] = sVar5;
        uVar22 = uVar22 + 2;
        sVar7 = 0;
        if (uVar14 != 0) {
          sVar7 = (short)(uVar22 / uVar14);
        }
        *psVar21 = sVar5;
        lVar13 = lVar13 + 4;
        psVar21[1] = (short)(uVar14 * 2) + (short)iVar27 + sVar6;
        psVar21[-1] = ((short)uVar22 - sVar7 * sVar8) + sVar9 * sVar8;
        psVar21 = psVar21 + 4;
      } while (uVar22 < uVar14);
      iVar27 = iVar27 + uVar14 * 2;
    } while (uVar28 < param_5);
  }
  local_c0 = CONCAT44(uVar24,(int)uVar17);
  local_b8 = lVar12;
  local_b0 = param_3 + 0x2e08;
  FUN_03901480(param_3 + 0x3118,&local_c0,1,lVar13);
  *(undefined4 *)(param_3 + 0x3124) = 1;
  uVar28 = (param_5 & 0xfffffffc) * (uVar14 >> 2);
  if (param_6 == 0) {
    lVar26 = *(long *)PTR_DAT_04bb2698;
    lVar12 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar3 = (long *)(lVar26 + 8);
    if (lVar12 != 0) {
      plVar3 = (long *)(lVar12 + 0xa8);
    }
    param_6 = *plVar3;
  }
  *(undefined8 *)(param_3 + 0x2e70) = 0;
  *(undefined8 *)(param_3 + 0x2e48) = 0;
  *(undefined8 *)(param_3 + 0x2e50) = 0;
  *(undefined8 *)(param_3 + 0x2e58) = 0;
  *(undefined8 *)(param_3 + 0x2e60) = 0;
  *(undefined2 *)(param_3 + 0x2e6a) = 0;
  *(byte *)(param_3 + 0x2e68) = *(byte *)(param_3 + 0x2e68) & 0xfe;
  if (uVar28 == 0) {
    lVar12 = 0;
    uVar17 = 0;
LAB_0396145c:
    uVar24 = (undefined4)uVar17;
joined_r0x03961464:
    uVar4 = 0;
    lVar26 = 0;
    local_b8 = lVar12;
  }
  else {
    FUN_038f8590(*puVar29,param_3 + 0x2e40,param_6,
                 -(ulong)(uVar28 >> 0x1f) & 0xfffffffe00000000 | (ulong)uVar28 << 1,4,0);
    *(undefined2 *)(param_3 + 0x2e6a) = 0;
    lVar12 = *(long *)(param_3 + 0x2e58);
    if (*(long *)(param_3 + 0x2e60) == 0) {
      uVar17 = 0;
      uVar24 = 0;
      if (lVar12 == 0) goto joined_r0x03961464;
    }
    else {
      uVar17 = (ulong)(uint)(*(int *)(param_3 + 0x2e48) -
                            *(int *)(*(long *)(param_3 + 0x2e60) + 0x10));
      if (lVar12 == 0) goto LAB_0396145c;
    }
    uVar24 = (undefined4)uVar17;
    uVar4 = *(undefined4 *)(lVar12 + 0x104);
    lVar26 = (**(code **)PTR_DAT_04bb2cd8)(lVar12);
    local_b8 = lVar12;
  }
  if (param_5 != 0) {
    uVar24 = (undefined4)uVar17;
    if (uVar14 != 0) {
      iVar27 = 0;
      uVar28 = 0;
      iVar18 = 0;
      do {
        iVar16 = iVar18;
        sVar9 = (short)uVar28;
        psVar21 = (short *)(uVar17 + lVar26 + 4 + (long)iVar16 * 2);
        uVar28 = uVar28 + 4;
        uVar22 = 0;
        do {
          uVar2 = uVar22 + 4;
          sVar5 = 0;
          if (uVar14 != 0) {
            sVar5 = (short)(uVar2 / uVar14);
          }
          sVar7 = (short)iVar27 + (short)uVar22;
          psVar21[-2] = sVar7;
          *psVar21 = sVar7;
          psVar21[1] = (short)(uVar14 * 4) + (short)iVar27 + (short)uVar22;
          psVar21[-1] = ((short)uVar2 - sVar5 * sVar8) + sVar9 * sVar8;
          psVar21 = psVar21 + 4;
          uVar22 = uVar2;
        } while (uVar2 < uVar14);
        iVar27 = iVar27 + uVar14 * 4;
        iVar18 = iVar16 + uVar2;
      } while (uVar28 < param_5);
      iVar16 = iVar16 + uVar2;
      goto LAB_03961534;
    }
    uVar28 = 0;
    do {
      uVar28 = uVar28 + 4;
    } while (uVar28 < param_5);
  }
  iVar16 = 0;
LAB_03961534:
  local_c0 = CONCAT44(uVar4,uVar24);
  local_b0 = param_3 + 0x2e40;
  FUN_03901480(param_3 + 0x3178,&local_c0,1,iVar16);
  *(undefined4 *)(param_3 + 0x3184) = 1;
  return;
}

