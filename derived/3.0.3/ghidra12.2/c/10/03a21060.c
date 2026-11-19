
void FUN_03a21060(long param_1,long param_2,long *param_3)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  uint *puVar8;
  int *piVar9;
  undefined *puVar10;
  int iVar11;
  ulong uVar12;
  int *piVar13;
  uint *puVar14;
  undefined2 uVar15;
  int iVar16;
  long lVar17;
  ulong *puVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined8 extraout_x1;
  undefined8 extraout_x1_00;
  undefined8 extraout_x1_01;
  undefined8 extraout_x1_02;
  undefined8 extraout_x1_03;
  undefined8 extraout_x1_04;
  undefined8 extraout_x1_05;
  long *plVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  undefined8 uVar27;
  long lVar28;
  long lVar29;
  long *plVar30;
  undefined4 uVar31;
  byte *pbVar32;
  long *plVar33;
  long *plVar34;
  long lVar35;
  long *plVar36;
  undefined1 *__dest;
  void *pvVar37;
  ulong *puVar38;
  void *__src;
  ulong uVar39;
  ulong *puVar40;
  byte *pbVar41;
  float fVar42;
  float fVar43;
  int local_530;
  undefined4 local_52c;
  long local_528;
  long lStack_520;
  int local_518;
  undefined4 local_514;
  long local_510;
  long lStack_508;
  undefined *local_500;
  undefined *local_4f8;
  long lStack_4f0;
  int local_4e8;
  undefined4 local_4e4;
  long local_4e0;
  long lStack_4d8;
  undefined *local_490;
  byte *local_488;
  undefined8 local_480;
  undefined1 local_43d;
  
  uVar27 = *(undefined8 *)(param_2 + 8);
  pvVar37 = *(void **)(param_1 + 0x1f0);
  *(undefined4 *)(param_1 + 0x1e0) = *(undefined4 *)(param_2 + 0x10);
  *(undefined8 *)(param_1 + 0x1d8) = uVar27;
  plVar36 = (long *)(param_2 + 0x18);
  (**(code **)(*plVar36 + 0x18))(plVar36);
  __src = *(void **)(param_2 + 0x20);
  if (pvVar37 != __src) {
    (**(code **)(*(long *)(param_2 + 0x18) + 0x18))(plVar36);
    lVar28 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x20) + lVar28) == '\0') goto LAB_03a2112c;
      lVar35 = *(long *)(param_2 + 0x20) + lVar28;
      if (*(char *)(lVar35 + 1) == '\0') {
        lVar28 = lVar28 + 1;
        goto LAB_03a2112c;
      }
      if (*(char *)(lVar35 + 2) == '\0') {
        lVar28 = lVar28 + 2;
        goto LAB_03a2112c;
      }
      lVar28 = lVar28 + 3;
    } while (lVar28 != 0x80001);
    lVar28 = 0;
LAB_03a2112c:
    iVar16 = (int)lVar28;
    if (*(int *)(param_1 + 0x1f8) <= (int)lVar28) {
      iVar16 = *(int *)(param_1 + 0x1f8) + -1;
    }
    memcpy(pvVar37,__src,(long)iVar16);
    *(undefined1 *)((long)pvVar37 + (long)iVar16) = 0;
  }
  plVar36 = (long *)(param_1 + 0x300);
  memcpy(plVar36,(void *)(param_2 + 0x130),0x814);
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined8 *)(param_1 + 0x2138) = 0;
  plVar30 = (long *)(param_1 + 0x2110);
  *(undefined8 *)(param_1 + 0x2110) = 0;
  *(undefined8 *)(param_1 + 0x2118) = 0;
  *(undefined8 *)(param_1 + 0x2120) = 0;
  *(undefined8 *)(param_1 + 0x2128) = 0;
  *(undefined2 *)(param_1 + 0x2132) = 0;
  *(byte *)(param_1 + 0x2130) = *(byte *)(param_1 + 0x2130) & 0xfe;
  puVar2 = PTR_DAT_04bd0fa8;
  FUN_038f8590(*(undefined8 *)PTR_DAT_04bd0fa8,param_1 + 0x2108,plVar22,0x400,8,0);
  *(undefined2 *)(param_1 + 0x2132) = 0;
  puVar10 = PTR_DAT_04bb2cd8;
  lVar35 = (**(code **)PTR_DAT_04bb2cd8)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28) = 0xbf800000bf800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x10) = 0xbf8000003f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x20) = 0x3f800000bf800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined1 **)(lVar35 + lVar28 + 0x30) = &DAT_3f8000003f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 8) = 0x3f80000000000000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined1 **)(lVar35 + lVar28 + 0x18) = &DAT_3f8000003f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x28) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x38) = 0x3f800000;
  local_4e0 = *(long *)(param_1 + 0x2120);
  local_4e8 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    local_4e8 = *(int *)plVar30 - *(int *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  local_4e4 = 0;
  if (local_4e0 != 0) {
    local_4e4 = *(undefined4 *)(local_4e0 + 0x104);
  }
  lStack_4d8 = param_1 + 0x2108;
  FUN_0390ebc0(&DAT_00002140 + param_1,&local_4e8,0x10,0x40);
  *(undefined8 *)(param_1 + 0x2178) = 0x16;
  *(undefined8 *)(param_1 + 0x2184) = 0x800000016;
  *(undefined2 *)(param_1 + 0x2180) = 1;
  *(undefined2 *)(param_1 + 0x218c) = 1;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1,0);
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x228a) = 0;
  plVar34 = (long *)(param_1 + 0x2268);
  *(undefined8 *)(param_1 + 0x2290) = 0;
  *(undefined8 *)(param_1 + 0x2268) = 0;
  *(undefined8 *)(param_1 + 0x2270) = 0;
  *(undefined8 *)(param_1 + 0x2278) = 0;
  *(undefined8 *)(param_1 + 0x2280) = 0;
  *(byte *)(param_1 + 0x2288) = *(byte *)(param_1 + 0x2288) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x2260,plVar22,0x10,8,0);
  *(undefined2 *)(param_1 + 0x228a) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 2) = 1;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 4) = 2;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 6) = 3;
  local_488 = *(byte **)(param_1 + 0x2278);
  iVar16 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    iVar16 = *(int *)plVar34 - *(int *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  if (local_488 == (byte *)0x0) {
    uVar31 = 0;
  }
  else {
    uVar31 = *(undefined4 *)((long)local_488 + 0x104);
  }
  local_490 = (undefined *)CONCAT44(uVar31,iVar16);
  local_480 = param_1 + 0x2260;
  FUN_03901480(param_1 + 0x2298,&local_490,1,4);
  *(undefined4 *)(param_1 + 0x22a4) = 5;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_00,0)
    ;
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x2322) = 0;
  plVar33 = (long *)(param_1 + 0x2300);
  *(undefined8 *)(param_1 + 9000) = 0;
  *(undefined8 *)(param_1 + 0x2300) = 0;
  *(undefined8 *)(param_1 + 0x2308) = 0;
  *(undefined8 *)(param_1 + 0x2310) = 0;
  *(undefined8 *)(param_1 + 0x2318) = 0;
  *(byte *)(param_1 + 0x2320) = *(byte *)(param_1 + 0x2320) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x22f8,plVar22,0x400,8,0);
  *(undefined2 *)(param_1 + 0x2322) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29) = *(undefined4 *)(lVar35 + lVar28);
  ((undefined4 *)(lVar17 + lVar29))[1] = ((undefined4 *)(lVar35 + lVar28))[1];
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 8);
  fVar43 = *(float *)(lVar35 + lVar28 + 0xc);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 8) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0xc) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x10) = *(undefined4 *)(lVar35 + lVar28 + 0x10);
  *(undefined4 *)(lVar17 + lVar29 + 0x14) = *(undefined4 *)(lVar35 + lVar28 + 0x14);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x18);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x1c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x18) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x1c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x20) = *(undefined4 *)(lVar35 + lVar28 + 0x20);
  *(undefined4 *)(lVar17 + lVar29 + 0x24) = *(undefined4 *)(lVar35 + lVar28 + 0x24);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x28);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x2c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x28) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x2c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x30) = *(undefined4 *)(lVar35 + lVar28 + 0x30);
  *(undefined4 *)(lVar17 + lVar29 + 0x34) = *(undefined4 *)(lVar35 + lVar28 + 0x34);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2120));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2128) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2128) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x38);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x3c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2310));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x38) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x3c) = fVar43 + fVar43;
  local_4f8 = *(undefined **)(param_1 + 0x2310);
  iVar16 = 0;
  if (*(long *)(param_1 + 0x2318) != 0) {
    iVar16 = *(int *)plVar33 - *(int *)(*(long *)(param_1 + 0x2318) + 0x10);
  }
  uVar31 = 0;
  if (local_4f8 != (undefined *)0x0) {
    uVar31 = *(undefined4 *)(local_4f8 + 0x104);
  }
  local_500 = (undefined *)CONCAT44(uVar31,iVar16);
  lStack_4f0 = param_1 + 0x22f8;
  FUN_0390ebc0(param_1 + 0x2330,&local_500,0x10,0x40);
  *(undefined8 *)(param_1 + 0x2368) = 0x16;
  *(undefined8 *)(param_1 + 0x2374) = 0x800000016;
  *(undefined2 *)(param_1 + 0x2370) = 1;
  *(undefined2 *)(param_1 + 0x237c) = 1;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_01,0)
    ;
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x247a) = 0;
  plVar30 = (long *)(param_1 + 0x2458);
  *(undefined8 *)(param_1 + 0x2480) = 0;
  *(undefined8 *)(param_1 + 0x2458) = 0;
  *(undefined8 *)(param_1 + 0x2460) = 0;
  *(undefined8 *)(param_1 + 0x2468) = 0;
  *(undefined8 *)(param_1 + 0x2470) = 0;
  *(byte *)(param_1 + 0x2478) = *(byte *)(param_1 + 0x2478) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x2450,plVar22,0x10,8,0);
  *(undefined2 *)(param_1 + 0x247a) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2468));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2470) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2470) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 2);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2468));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2470) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2470) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 2) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 4);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2468));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2470) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2470) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 4) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2278));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2280) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2280) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 6);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2468));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2470) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2470) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 6) = uVar15;
  local_488 = *(byte **)(param_1 + 0x2468);
  iVar16 = 0;
  if (*(long *)(param_1 + 0x2470) != 0) {
    iVar16 = *(int *)plVar30 - *(int *)(*(long *)(param_1 + 0x2470) + 0x10);
  }
  if (local_488 == (byte *)0x0) {
    uVar31 = 0;
  }
  else {
    uVar31 = *(undefined4 *)((long)local_488 + 0x104);
  }
  local_490 = (undefined *)CONCAT44(uVar31,iVar16);
  local_480 = param_1 + 0x2450;
  FUN_03901480(param_1 + 0x2488,&local_490,1,4);
  *(undefined4 *)(param_1 + 0x2494) = 5;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_02,0)
    ;
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x2512) = 0;
  plVar30 = (long *)(param_1 + 0x24f0);
  *(undefined8 *)(param_1 + 0x2518) = 0;
  *(undefined8 *)(param_1 + 0x24f0) = 0;
  *(undefined8 *)(param_1 + 0x24f8) = 0;
  *(undefined8 *)(param_1 + 0x2500) = 0;
  *(undefined8 *)(param_1 + 0x2508) = 0;
  *(byte *)(param_1 + 0x2510) = *(byte *)(param_1 + 0x2510) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x24e8,plVar22,0x800,8,0);
  *(undefined2 *)(param_1 + 0x2512) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28) = 0xbf800000bed413cc;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x10) = 0xbf8000003ed413cc;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x20) = 0xbed413cc3f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x30) = 0x3ed413cc3f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x40) = 0x3f8000003ed413cc;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x50) = 0x3f800000bed413cc;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x60) = 0x3ed413ccbf800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x70) = 0xbed413ccbf800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 8) = 0x3f8000003e95f61a;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x18) = 0x3f8000003f3504f3;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x28) = 0x3f3504f33f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x38) = 0x3e95f61a3f800000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x48) = 0x3f3504f3;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x58) = 0x3e95f61a;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x68) = 0x3e95f61a00000000;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  *(undefined8 *)(lVar35 + lVar28 + 0x78) = 0x3f3504f300000000;
  local_510 = *(long *)(param_1 + 0x2500);
  local_518 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    local_518 = *(int *)plVar30 - *(int *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  local_514 = 0;
  if (local_510 != 0) {
    local_514 = *(undefined4 *)(local_510 + 0x104);
  }
  lStack_508 = param_1 + 0x24e8;
  FUN_0390ebc0(param_1 + 0x2520,&local_518,0x10,0x80);
  *(undefined8 *)(param_1 + 0x2558) = 0x16;
  *(undefined8 *)(param_1 + 0x2564) = 0x800000016;
  *(undefined2 *)(param_1 + 0x2560) = 1;
  *(undefined2 *)(param_1 + 0x256c) = 1;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_03,0)
    ;
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x266a) = 0;
  plVar34 = (long *)(param_1 + 0x2648);
  *(undefined8 *)(param_1 + 0x2670) = 0;
  *(undefined8 *)(param_1 + 0x2648) = 0;
  *(undefined8 *)(param_1 + 0x2650) = 0;
  *(undefined8 *)(param_1 + 0x2658) = 0;
  *(undefined8 *)(param_1 + 0x2660) = 0;
  *(byte *)(param_1 + 0x2668) = *(byte *)(param_1 + 0x2668) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x2640,plVar22,0x20,8,0);
  *(undefined2 *)(param_1 + 0x266a) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 2) = 1;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 4) = 7;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 6) = 2;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 8) = 6;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 10) = 3;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 0xc) = 5;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 0xe) = 4;
  local_488 = *(byte **)(param_1 + 0x2658);
  iVar16 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    iVar16 = *(int *)plVar34 - *(int *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  if (local_488 == (byte *)0x0) {
    uVar31 = 0;
  }
  else {
    uVar31 = *(undefined4 *)((long)local_488 + 0x104);
  }
  local_490 = (undefined *)CONCAT44(uVar31,iVar16);
  local_480 = param_1 + 0x2640;
  FUN_03901480(param_1 + 0x2678,&local_490,1,8);
  *(undefined4 *)(param_1 + 0x2684) = 5;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_04,0)
    ;
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x2702) = 0;
  plVar33 = (long *)(param_1 + 0x26e0);
  *(undefined8 *)(param_1 + 0x2708) = 0;
  *(undefined8 *)(param_1 + 0x26e0) = 0;
  *(undefined8 *)(param_1 + 0x26e8) = 0;
  *(undefined8 *)(param_1 + 0x26f0) = 0;
  *(undefined8 *)(param_1 + 0x26f8) = 0;
  *(byte *)(param_1 + 0x2700) = *(byte *)(param_1 + 0x2700) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x26d8,plVar22,0x800,8,0);
  *(undefined2 *)(param_1 + 0x2702) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29) = *(undefined4 *)(lVar35 + lVar28);
  ((undefined4 *)(lVar17 + lVar29))[1] = ((undefined4 *)(lVar35 + lVar28))[1];
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 8);
  fVar43 = *(float *)(lVar35 + lVar28 + 0xc);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 8) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0xc) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x10) = *(undefined4 *)(lVar35 + lVar28 + 0x10);
  *(undefined4 *)(lVar17 + lVar29 + 0x14) = *(undefined4 *)(lVar35 + lVar28 + 0x14);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x18);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x1c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x18) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x1c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x20) = *(undefined4 *)(lVar35 + lVar28 + 0x20);
  *(undefined4 *)(lVar17 + lVar29 + 0x24) = *(undefined4 *)(lVar35 + lVar28 + 0x24);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x28);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x2c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x28) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x2c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x30) = *(undefined4 *)(lVar35 + lVar28 + 0x30);
  *(undefined4 *)(lVar17 + lVar29 + 0x34) = *(undefined4 *)(lVar35 + lVar28 + 0x34);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x38);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x3c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x38) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x3c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x40) = *(undefined4 *)(lVar35 + lVar28 + 0x40);
  *(undefined4 *)(lVar17 + lVar29 + 0x44) = *(undefined4 *)(lVar35 + lVar28 + 0x44);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x48);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x4c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x48) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x4c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x50) = *(undefined4 *)(lVar35 + lVar28 + 0x50);
  *(undefined4 *)(lVar17 + lVar29 + 0x54) = *(undefined4 *)(lVar35 + lVar28 + 0x54);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x58);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x5c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x58) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x5c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x60) = *(undefined4 *)(lVar35 + lVar28 + 0x60);
  *(undefined4 *)(lVar17 + lVar29 + 100) = *(undefined4 *)(lVar35 + lVar28 + 100);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x68);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x6c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x68) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x6c) = fVar43 + fVar43;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  lVar17 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar29 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar29 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(undefined4 *)(lVar17 + lVar29 + 0x70) = *(undefined4 *)(lVar35 + lVar28 + 0x70);
  *(undefined4 *)(lVar17 + lVar29 + 0x74) = *(undefined4 *)(lVar35 + lVar28 + 0x74);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2500));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2508) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2508) + 0x10);
  }
  fVar42 = *(float *)(lVar35 + lVar28 + 0x78);
  fVar43 = *(float *)(lVar35 + lVar28 + 0x7c);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x26f0));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    lVar28 = *plVar33 - *(long *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  *(float *)(lVar35 + lVar28 + 0x78) = fVar42 + fVar42;
  *(float *)(lVar35 + lVar28 + 0x7c) = fVar43 + fVar43;
  local_528 = *(long *)(param_1 + 0x26f0);
  local_530 = 0;
  if (*(long *)(param_1 + 0x26f8) != 0) {
    local_530 = *(int *)plVar33 - *(int *)(*(long *)(param_1 + 0x26f8) + 0x10);
  }
  local_52c = 0;
  if (local_528 != 0) {
    local_52c = *(undefined4 *)(local_528 + 0x104);
  }
  lStack_520 = param_1 + 0x26d8;
  FUN_0390ebc0(param_1 + 10000,&local_530,0x10,0x80);
  *(undefined8 *)(param_1 + 0x2748) = 0x16;
  *(undefined8 *)(param_1 + 0x2754) = 0x800000016;
  *(undefined2 *)(param_1 + 0x2750) = 1;
  *(undefined2 *)(param_1 + 0x275c) = 1;
  plVar22 = param_3;
  if (param_3 == (long *)0x0) {
    lVar35 = *(long *)PTR_DAT_04bb2698;
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68),extraout_x1_05,0)
    ;
    plVar22 = (long *)(lVar35 + 8);
    if (lVar28 != 0) {
      plVar22 = (long *)(lVar28 + 0xa8);
    }
    plVar22 = (long *)*plVar22;
  }
  *(undefined2 *)(param_1 + 0x285a) = 0;
  plVar30 = (long *)(param_1 + 0x2838);
  *(undefined8 *)(param_1 + 0x2860) = 0;
  *(undefined8 *)(param_1 + 0x2838) = 0;
  *(undefined8 *)(param_1 + 0x2840) = 0;
  *(undefined8 *)(param_1 + 0x2848) = 0;
  *(undefined8 *)(param_1 + 0x2850) = 0;
  *(byte *)(param_1 + 0x2858) = *(byte *)(param_1 + 0x2858) & 0xfe;
  FUN_038f8590(*(undefined8 *)puVar2,param_1 + 0x2830,plVar22,0x20,8,0);
  *(undefined2 *)(param_1 + 0x285a) = 0;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 2);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 2) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 4);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 4) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 6);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 6) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 8);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 8) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 10);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 10) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 0xc);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 0xc) = uVar15;
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2658));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2660) != 0) {
    lVar28 = *plVar34 - *(long *)(*(long *)(param_1 + 0x2660) + 0x10);
  }
  uVar15 = *(undefined2 *)(lVar35 + lVar28 + 0xe);
  lVar35 = (**(code **)puVar10)(*(undefined8 *)(param_1 + 0x2848));
  lVar28 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    lVar28 = *plVar30 - *(long *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  *(undefined2 *)(lVar35 + lVar28 + 0xe) = uVar15;
  local_488 = *(byte **)(param_1 + 0x2848);
  iVar16 = 0;
  if (*(long *)(param_1 + 0x2850) != 0) {
    iVar16 = *(int *)plVar30 - *(int *)(*(long *)(param_1 + 0x2850) + 0x10);
  }
  if (local_488 == (byte *)0x0) {
    uVar31 = 0;
  }
  else {
    uVar31 = *(undefined4 *)((long)local_488 + 0x104);
  }
  local_490 = (undefined *)CONCAT44(uVar31,iVar16);
  local_480 = param_1 + 0x2830;
  FUN_03901480(param_1 + 0x2868,&local_490,1,8);
  __dest = *(undefined1 **)(param_1 + 0x50);
  *(undefined4 *)(param_1 + 0x2874) = 5;
  if (__dest != &DAT_040ebf6d) {
    iVar16 = 6;
    if (*(int *)(param_1 + 0x58) < 7) {
      iVar16 = *(int *)(param_1 + 0x58) + -1;
    }
    memcpy(__dest,&DAT_040ebf6d,(long)iVar16);
    __dest[iVar16] = 0;
  }
  uVar23 = *(uint *)(param_1 + 0x308);
  *(undefined4 *)(param_1 + 0xa0) = 0;
  if (0 < (int)uVar23) {
    sVar1 = (ulong)uVar23 * 0x48 + 8;
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      puVar18 = malloc(sVar1);
      plVar22 = (long *)PTR_PTR_04bb2238;
      puVar10 = PTR_DAT_04bd10b8;
    }
    else {
      plVar22 = param_3;
      if (param_3 == (long *)0x0) {
        lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar28 + 8);
        if (lVar35 != 0) {
          plVar22 = (long *)(lVar35 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_03a22e70;
      }
      puVar18 = (ulong *)(**(code **)(*plVar22 + 0x30))(plVar22,sVar1,8);
      plVar22 = (long *)PTR_PTR_04bb2238;
      puVar10 = PTR_DAT_04bd10b8;
    }
    PTR_PTR_04bb2238 = (undefined *)plVar22;
    PTR_DAT_04bd10b8 = puVar10;
    if (puVar18 != (ulong *)0x0) {
      puVar2 = PTR_DAT_04bd1070 + 0x10;
      puVar38 = puVar18 + 1;
      *puVar18 = (ulong)uVar23;
      puVar18 = puVar38;
      do {
        *puVar18 = (ulong)puVar2;
        puVar18[1] = 0;
        puVar18[4] = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        lVar28 = *(long *)PTR_DAT_04bd1140;
        puVar18[6] = 0;
        puVar18[7] = 0;
        uVar39 = 0;
        if (lVar28 != 0) {
          uVar39 = FUN_03954f70(lVar28,plVar22);
        }
        lVar28 = *plVar22;
        puVar18[8] = uVar39;
        (**(code **)(lVar28 + 0x18))(plVar22);
        pbVar32 = (byte *)plVar22[1];
        uVar25 = (uint)*pbVar32;
        uVar24 = 0;
        if (*pbVar32 != 0) {
          uVar24 = 0xffffffff;
          do {
            pbVar32 = pbVar32 + 1;
            uVar24 = crc32b(uVar24,uVar25,0x4c11db7);
            uVar25 = (uint)*pbVar32;
          } while (uVar25 != 0);
          uVar24 = ~uVar24;
        }
        *(uint *)(puVar18 + 5) = uVar24;
        puVar40 = puVar18 + 9;
        *puVar18 = (ulong)(puVar10 + 0x10);
        puVar18 = puVar40;
      } while (puVar40 != puVar38 + (ulong)uVar23 * 9);
      *(uint *)(param_1 + 0xb60) = uVar23;
      *(ulong **)(param_1 + 0xb68) = puVar38;
    }
  }
LAB_03a22e70:
  iVar16 = *(int *)(param_1 + 0x30c);
  if (0 < iVar16) {
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      pvVar37 = malloc((long)iVar16 << 3);
    }
    else {
      plVar22 = param_3;
      if (param_3 == (long *)0x0) {
        lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar28 + 8);
        if (lVar35 != 0) {
          plVar22 = (long *)(lVar35 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_03a22eec;
      }
      pvVar37 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(long)iVar16 << 3,8);
    }
    if (pvVar37 != (void *)0x0) {
      *(void **)(param_1 + 0xba0) = pvVar37;
      *(undefined4 *)(param_1 + 0xb98) = 0;
      *(int *)(param_1 + 0xb9c) = iVar16;
    }
  }
LAB_03a22eec:
  uVar23 = *(uint *)(param_1 + 0x308);
  if (0 < (int)uVar23) {
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      pvVar37 = malloc((ulong)uVar23);
    }
    else {
      plVar22 = param_3;
      if (param_3 == (long *)0x0) {
        lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar28 + 8);
        if (lVar35 != 0) {
          plVar22 = (long *)(lVar35 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_03a22f5c;
      }
      pvVar37 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(ulong)uVar23,8);
    }
    if (pvVar37 != (void *)0x0) {
      *(uint *)(param_1 + 0xb80) = uVar23;
      *(void **)(param_1 + 0xb88) = pvVar37;
    }
  }
LAB_03a22f5c:
  local_530 = *(int *)(param_2 + 8);
  iVar16 = *(int *)(param_2 + 0xc);
  local_518 = local_530;
  if (0 < iVar16) {
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      pvVar37 = malloc((long)iVar16 << 3);
    }
    else {
      plVar22 = param_3;
      if (param_3 == (long *)0x0) {
        lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar22 = (long *)(lVar28 + 8);
        if (lVar35 != 0) {
          plVar22 = (long *)(lVar35 + 0xa8);
        }
        plVar22 = (long *)*plVar22;
        if (plVar22 == (long *)0x0) goto LAB_03a22fe0;
      }
      pvVar37 = (void *)(**(code **)(*plVar22 + 0x30))(plVar22,(long)iVar16 << 3,8);
    }
    if (pvVar37 != (void *)0x0) {
      *(void **)(param_1 + 0xde0) = pvVar37;
      *(undefined4 *)(param_1 + 0xdd8) = 0;
      *(int *)(param_1 + 0xddc) = iVar16;
    }
  }
LAB_03a22fe0:
  local_490 = PTR_DAT_04bb2020 + 0x10;
  local_488 = (byte *)0x405f20e;
  uVar27 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar27 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
  }
  *(undefined8 *)(param_1 + 0xb58) = uVar27;
  (**(code **)(local_490 + 0x18))(&local_490);
  uVar23 = (uint)*local_488;
  if (*local_488 != 0) {
    uVar24 = 0xffffffff;
    pbVar32 = local_488;
    do {
      pbVar32 = pbVar32 + 1;
      uVar24 = crc32b(uVar24,uVar23,0x4c11db7);
      uVar23 = (uint)*pbVar32;
    } while (uVar23 != 0);
    uVar23 = ~uVar24;
  }
  *(uint *)(param_1 + 0xb40) = uVar23;
  plVar22 = (long *)(param_1 + 0x18);
  if (*(long *)(param_1 + 0x20) != 0) {
    plVar22 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
  }
  *plVar22 = param_1 + 0xb18;
  *(long *)(param_1 + 0x20) = param_1 + 0xb18;
  *(long *)(param_1 + 0xb50) = param_1;
  puVar10 = PTR_PTR_04bb2238;
  if (0 < *(int *)(param_1 + 0xddc)) {
    uVar31 = crc32b(0xffffffff,100,0x4c11db7);
    uVar31 = crc32b(uVar31,0x65,0x4c11db7);
    pbVar32 = (byte *)((long)&local_480 + 4);
    puVar2 = PTR_DAT_04bb21f8 + 0x10;
    iVar16 = 0;
    uVar31 = crc32b(uVar31,0x66,0x4c11db7);
    puVar3 = PTR_DAT_04bb2bc0 + 0x10;
    uVar31 = crc32b(uVar31,0x61,0x4c11db7);
    uVar31 = crc32b(uVar31,0x75,0x4c11db7);
    uVar31 = crc32b(uVar31,0x6c,0x4c11db7);
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    puVar5 = PTR_DAT_04bd1088 + 0x10;
    uVar23 = crc32b(uVar31,0x74,0x4c11db7);
    puVar6 = PTR_DAT_04bb2f70 + 0x10;
    do {
      lVar28 = *(long *)PTR_DAT_04bb2698;
      if (lVar28 == 0) {
        puVar19 = malloc(0x2d0);
      }
      else {
        plVar22 = param_3;
        if (param_3 == (long *)0x0) {
          lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar22 = (long *)(lVar28 + 8);
          if (lVar35 != 0) {
            plVar22 = (long *)(lVar35 + 0xa8);
          }
          plVar22 = (long *)*plVar22;
          if (plVar22 == (long *)0x0) {
            puVar19 = (undefined8 *)0x0;
            goto LAB_03a231cc;
          }
        }
        puVar19 = (undefined8 *)(**(code **)(*plVar22 + 0x30))(plVar22,0x2d0,8);
      }
LAB_03a231cc:
      *(int *)(puVar19 + 6) = iVar16;
      *puVar19 = &PTR_LAB_04b6d358;
      puVar7 = (undefined8 *)((long)puVar19 + 0x4c);
      *(undefined4 *)(puVar19 + 9) = 0x100;
      puVar19[8] = puVar7;
      puVar19[1] = 0;
      puVar19[4] = 0;
      puVar19[5] = 0;
      *(undefined1 *)((long)puVar19 + 0x14b) = 0;
      puVar19[2] = 0;
      puVar19[3] = 0;
      if (puVar7 != &DAT_0407ebb1) {
        *(undefined1 *)puVar7 = 0;
      }
      puVar19[7] = puVar2;
      FUN_0390cee0(puVar19 + 0x2a);
      *(undefined1 *)(puVar19 + 0x46) = 0;
      *(undefined4 *)((long)puVar19 + 0x23c) = 0xffffffff;
      local_480 = CONCAT44(local_480._4_4_,0x40);
      lVar28 = *(long *)puVar10;
      *(int *)(puVar19 + 0x47) = iVar16;
      local_43d = 0;
      local_490 = puVar6;
      local_488 = pbVar32;
      (**(code **)(lVar28 + 0x18))(puVar10);
      pbVar41 = *(byte **)(puVar10 + 8);
      if (pbVar32 != pbVar41) {
        (**(code **)(*(long *)puVar10 + 0x18))(puVar10);
        lVar28 = 0;
        do {
          if (*(char *)(*(long *)(puVar10 + 8) + lVar28) == '\0') goto LAB_03a232c0;
          lVar35 = *(long *)(puVar10 + 8) + lVar28;
          if (*(char *)(lVar35 + 1) == '\0') {
            lVar28 = lVar28 + 1;
            goto LAB_03a232c0;
          }
          if (*(char *)(lVar35 + 2) == '\0') {
            lVar28 = lVar28 + 2;
            goto LAB_03a232c0;
          }
          lVar28 = lVar28 + 3;
        } while (lVar28 != 0x80001);
        lVar28 = 0;
LAB_03a232c0:
        iVar11 = (int)lVar28;
        if ((int)local_480 <= (int)lVar28) {
          iVar11 = (int)local_480 + -1;
        }
        memcpy(pbVar32,pbVar41,(long)iVar11);
        pbVar32[iVar11] = 0;
      }
      local_490 = puVar3;
      FUN_0071b954(&local_4e8,"RefTexName%d",iVar16);
      local_4f8 = &DAT_0407e833;
      local_500 = puVar4;
      FUN_039127a0(puVar19 + 0x48,&local_490,&local_4e8,&local_500,puVar19);
      FUN_0071b954(&local_490,"IsQuarter%d",iVar16);
      *(uint *)(puVar19 + 0x57) = ~uVar23;
      puVar19[0x56] = puVar5;
      *(undefined1 *)(puVar19 + 0x59) = 0;
      puVar19[0x58] = 0;
      (**(code **)(local_490 + 0x18))(&local_490);
      uVar24 = (uint)*local_488;
      if (*local_488 != 0) {
        uVar25 = 0xffffffff;
        pbVar41 = local_488;
        do {
          pbVar41 = pbVar41 + 1;
          uVar25 = crc32b(uVar25,uVar24,0x4c11db7);
          uVar24 = (uint)*pbVar41;
        } while (uVar24 != 0);
        uVar24 = ~uVar25;
      }
      *(uint *)(puVar19 + 0x57) = uVar24;
      plVar22 = puVar19 + 1;
      if (puVar19[2] != 0) {
        plVar22 = (long *)(puVar19[2] + 0x10);
      }
      *plVar22 = (long)(puVar19 + 0x56);
      puVar19[2] = puVar19 + 0x56;
      *(undefined1 *)(puVar19 + 0x59) = 0;
      *(int *)(puVar19 + 3) = *(int *)(puVar19 + 3) + 1;
      if (*(int *)(param_1 + 0xdd8) < *(int *)(param_1 + 0xddc)) {
        *(undefined8 **)(*(long *)(param_1 + 0xde0) + (long)*(int *)(param_1 + 0xdd8) * 8) = puVar19
        ;
        *(int *)(param_1 + 0xdd8) = *(int *)(param_1 + 0xdd8) + 1;
      }
      FUN_0071b954(&local_490,"TextureInfo%d",iVar16);
      uVar27 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar27 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
      }
      puVar19[5] = uVar27;
      (**(code **)(local_490 + 0x18))(&local_490);
      uVar25 = (uint)*local_488;
      uVar24 = 0;
      if (*local_488 != 0) {
        uVar24 = 0xffffffff;
        pbVar41 = local_488;
        do {
          pbVar41 = pbVar41 + 1;
          uVar24 = crc32b(uVar24,uVar25,0x4c11db7);
          uVar25 = (uint)*pbVar41;
        } while (uVar25 != 0);
        uVar24 = ~uVar24;
      }
      *(uint *)((long)puVar19 + 0x1c) = uVar24;
      iVar16 = iVar16 + 1;
      puVar7 = (undefined8 *)(param_1 + 0xb20);
      if (*(long *)(param_1 + 0xb28) != 0) {
        puVar7 = (undefined8 *)(*(long *)(param_1 + 0xb28) + 0x20);
      }
      *puVar7 = puVar19;
      *(undefined8 **)(param_1 + 0xb28) = puVar19;
    } while (iVar16 < *(int *)(param_1 + 0xddc));
  }
  if (0 < *(int *)(param_1 + 0x308)) {
    puVar8 = (uint *)(param_1 + 0x914);
    uVar39 = 0;
    piVar9 = (int *)(param_1 + 0x314);
    puVar10 = PTR_DAT_04bb2000 + 0x10;
    puVar2 = PTR_DAT_04bb2020 + 0x10;
    do {
      piVar13 = piVar9 + uVar39;
      uVar12 = uVar39;
      if (0x7f < uVar39) {
        uVar12 = 0;
        piVar13 = piVar9;
      }
      if (0 < *(int *)(param_1 + 0x714 + uVar12 * 4)) {
        uVar23 = 0;
        do {
          lVar28 = *plVar36;
          uVar24 = piVar9[uVar12];
          if (*(uint *)(lVar28 + 0x18) <= uVar24) {
            uVar24 = 0;
          }
          if (uVar23 < *(ushort *)(*(long *)(lVar28 + 0x20) + (long)(int)uVar24 * 4 + 2)) {
            plVar22 = *(long **)(*(long *)(lVar28 + 0x30) +
                                ((ulong)*(ushort *)
                                         (*(long *)(lVar28 + 0x20) + (long)(int)uVar24 * 4) +
                                (ulong)uVar23) * 8);
          }
          else {
            plVar22 = (long *)0x0;
          }
          if (((*PTR_DAT_04bd1500 & 1) == 0) &&
             (iVar16 = __cxa_guard_acquire(PTR_DAT_04bd1500), iVar16 != 0)) {
            *(undefined **)PTR_DAT_04bd14f8 = puVar10;
            __cxa_guard_release(PTR_DAT_04bd1500);
          }
          if ((plVar22 != (long *)0x0) &&
             (uVar20 = (**(code **)(*plVar22 + 0x48))(plVar22,PTR_DAT_04bd14f8), (uVar20 & 1) != 0))
          {
            lVar28 = plVar22[7];
            uVar24 = (**(code **)(*plVar22 + 0xa0))(plVar22);
            if (*(uint *)(lVar28 + 0x460) <= uVar24) {
              uVar24 = 0;
            }
            lVar28 = *(long *)(lVar28 + 0x468) + (long)(int)uVar24 * 0x58;
            plVar30 = (long *)(lVar28 + 8);
            plVar34 = (long *)*plVar30;
            if (plVar34 != (long *)0x0) {
              if (plVar34 == plVar22) {
                plVar33 = (long *)0x0;
              }
              else {
                do {
                  plVar33 = plVar34;
                  plVar34 = (long *)plVar33[4];
                  if (plVar34 == (long *)0x0) goto LAB_03a235f0;
                } while (plVar34 != plVar22);
              }
              if (plVar33 != (long *)0x0) {
                plVar30 = plVar33 + 4;
              }
              *plVar30 = plVar22[4];
              if (plVar22[4] == 0) {
                *(long **)(lVar28 + 0x10) = plVar33;
              }
              plVar22[4] = 0;
            }
LAB_03a235f0:
            FUN_03a17810(plVar22,&local_530,uVar39 & 0xffffffff,0,param_3,param_1);
            if ((*(byte *)((long)plVar22 + 0xb2) & 1) != 0) {
              *(byte *)((long)plVar22 + 0xb2) = *(byte *)((long)plVar22 + 0xb2) & 0xfe;
              *(ushort *)(plVar22[7] + 0x8c) = *(ushort *)(plVar22[7] + 0x8c) | 1;
            }
          }
          uVar23 = uVar23 + 1;
        } while ((int)uVar23 < *(int *)(param_1 + 0x714 + uVar12 * 4));
      }
      uVar20 = uVar39;
      if (0x7f < uVar39) {
        uVar20 = 0;
      }
      puVar14 = puVar8 + uVar39;
      if (0x7f < uVar39) {
        puVar14 = puVar8;
      }
      if (0 < (int)puVar8[uVar20]) {
        lVar28 = *(long *)(param_1 + 0xb68);
        uVar20 = uVar39;
        if (*(uint *)(param_1 + 0xb60) <= uVar39) {
          uVar20 = 0;
        }
        local_488 = *(byte **)(PTR_DAT_04bd11e0 + (long)*piVar13 * 0x28);
        uVar27 = 0;
        local_490 = puVar2;
        if (*(long *)PTR_DAT_04bd1140 != 0) {
          uVar27 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
        }
        lVar28 = lVar28 + uVar20 * 0x48;
        *(undefined8 *)(lVar28 + 0x40) = uVar27;
        (**(code **)(local_490 + 0x18))(&local_490);
        uVar23 = (uint)*local_488;
        if (*local_488 == 0) {
          uVar24 = 0;
        }
        else {
          uVar24 = 0xffffffff;
          pbVar32 = local_488;
          do {
            pbVar32 = pbVar32 + 1;
            uVar24 = crc32b(uVar24,uVar23,0x4c11db7);
            uVar23 = (uint)*pbVar32;
          } while (uVar23 != 0);
          uVar24 = ~uVar24;
        }
        *(uint *)(lVar28 + 0x28) = uVar24;
        plVar22 = (long *)(param_1 + 0x18);
        if (*(long *)(param_1 + 0x20) != 0) {
          plVar22 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
        }
        *plVar22 = lVar28;
        *(long *)(param_1 + 0x20) = lVar28;
        *(long *)(lVar28 + 0x38) = param_1;
        uVar23 = *puVar14;
        if (0 < (int)uVar23) {
          uVar24 = 0;
          uVar20 = uVar39;
          if (0x7f < uVar39) {
            uVar20 = 0;
          }
          do {
            lVar28 = *plVar36;
            uVar25 = *(uint *)(param_1 + 0x514 + uVar20 * 4);
            if (*(uint *)(lVar28 + 0x18) <= uVar25) {
              uVar25 = 0;
            }
            if (uVar24 < *(ushort *)(*(long *)(lVar28 + 0x20) + (long)(int)uVar25 * 4 + 2)) {
              plVar22 = *(long **)(*(long *)(lVar28 + 0x30) +
                                  ((ulong)*(ushort *)
                                           (*(long *)(lVar28 + 0x20) + (long)(int)uVar25 * 4) +
                                  (ulong)uVar24) * 8);
            }
            else {
              plVar22 = (long *)0x0;
            }
            if (((*PTR_DAT_04bd14f0 & 1) == 0) &&
               (iVar16 = __cxa_guard_acquire(PTR_DAT_04bd14f0), iVar16 != 0)) {
              *(undefined **)PTR_DAT_04bd14e8 = PTR_DAT_04bb2000 + 0x10;
              __cxa_guard_release(PTR_DAT_04bd14f0);
            }
            if ((plVar22 != (long *)0x0) &&
               (uVar21 = (**(code **)(*plVar22 + 0x48))(plVar22,PTR_DAT_04bd14e8), (uVar21 & 1) != 0
               )) {
              lVar28 = plVar22[7];
              uVar25 = (**(code **)(*plVar22 + 0xa0))(plVar22);
              if (*(uint *)(lVar28 + 0x460) <= uVar25) {
                uVar25 = 0;
              }
              lVar28 = *(long *)(lVar28 + 0x468) + (long)(int)uVar25 * 0x58;
              plVar30 = (long *)(lVar28 + 8);
              plVar34 = (long *)*plVar30;
              if (plVar34 != (long *)0x0) {
                if (plVar34 == plVar22) {
                  plVar33 = (long *)0x0;
                }
                else {
                  do {
                    plVar33 = plVar34;
                    plVar34 = (long *)plVar33[4];
                    if (plVar34 == (long *)0x0) goto LAB_03a238a0;
                  } while (plVar34 != plVar22);
                }
                if (plVar33 != (long *)0x0) {
                  plVar30 = plVar33 + 4;
                }
                *plVar30 = plVar22[4];
                if (plVar22[4] == 0) {
                  *(long **)(lVar28 + 0x10) = plVar33;
                }
                plVar22[4] = 0;
              }
LAB_03a238a0:
              lVar28 = *plVar36;
              uVar25 = piVar9[uVar12];
              if (*(uint *)(lVar28 + 0x18) <= uVar25) {
                uVar25 = 0;
              }
              if (*(short *)(*(long *)(lVar28 + 0x20) + (long)(int)uVar25 * 4 + 2) == 0) {
                plVar30 = (long *)0x0;
              }
              else {
                plVar30 = *(long **)(*(long *)(lVar28 + 0x30) +
                                    (ulong)*(ushort *)
                                            (*(long *)(lVar28 + 0x20) + (long)(int)uVar25 * 4) * 8);
              }
              if (((*PTR_DAT_04bd1500 & 1) == 0) &&
                 (iVar16 = __cxa_guard_acquire(PTR_DAT_04bd1500), iVar16 != 0)) {
                *(undefined **)PTR_DAT_04bd14f8 = PTR_DAT_04bb2000 + 0x10;
                __cxa_guard_release(PTR_DAT_04bd1500);
              }
              if ((plVar30 != (long *)0x0) &&
                 (uVar21 = (**(code **)(*plVar30 + 0x48))(plVar30,PTR_DAT_04bd14f8),
                 (uVar21 & 1) != 0)) {
                (**(code **)(*plVar30 + 0xd8))(plVar30,plVar22,&local_518,uVar24,param_3);
                if ((*(byte *)((long)plVar22 + 0xb2) & 1) != 0) {
                  *(byte *)((long)plVar22 + 0xb2) = *(byte *)((long)plVar22 + 0xb2) & 0xfe;
                  *(ushort *)(plVar22[7] + 0x8c) = *(ushort *)(plVar22[7] + 0x8c) | 1;
                }
                lVar28 = *(long *)(param_1 + 0xb68);
                uVar21 = uVar39;
                if (*(uint *)(param_1 + 0xb60) <= uVar39) {
                  uVar21 = 0;
                }
                FUN_006d8678(&local_490,&DAT_040c7be9,uVar24);
                lVar35 = 0;
                if (*(long *)PTR_DAT_04bd1140 != 0) {
                  lVar35 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_490);
                }
                plVar22[5] = lVar35;
                (**(code **)(local_490 + 0x18))(&local_490);
                uVar26 = (uint)*local_488;
                uVar25 = 0;
                if (*local_488 != 0) {
                  uVar25 = 0xffffffff;
                  pbVar32 = local_488;
                  do {
                    pbVar32 = pbVar32 + 1;
                    uVar25 = crc32b(uVar25,uVar26,0x4c11db7);
                    uVar26 = (uint)*pbVar32;
                  } while (uVar26 != 0);
                  uVar25 = ~uVar25;
                }
                *(uint *)((long)plVar22 + 0x1c) = uVar25;
                lVar28 = lVar28 + uVar21 * 0x48;
                puVar19 = (undefined8 *)(lVar28 + 8);
                if (*(long *)(lVar28 + 0x10) != 0) {
                  puVar19 = (undefined8 *)(*(long *)(lVar28 + 0x10) + 0x20);
                }
                *puVar19 = plVar22;
                *(long **)(lVar28 + 0x10) = plVar22;
              }
            }
            uVar24 = uVar24 + 1;
          } while (uVar24 != uVar23);
        }
      }
      uVar39 = uVar39 + 1;
    } while ((long)uVar39 < (long)*(int *)(param_1 + 0x308));
  }
  uVar23 = *(uint *)(param_2 + 0x10);
  if ((int)uVar23 < 1) goto LAB_03a23d10;
  sVar1 = (ulong)uVar23 * 0x298 + 8;
  lVar28 = *(long *)PTR_DAT_04bb2698;
  if (lVar28 == 0) {
    puVar18 = malloc(sVar1);
joined_r0x03a23b04:
    if (puVar18 != (ulong *)0x0) {
      *puVar18 = (ulong)uVar23;
      puVar10 = PTR_DAT_04bb21f8 + 0x10;
      lVar28 = 0;
      do {
        FUN_0390cee0((long)puVar18 + lVar28 + 8);
        *(undefined4 *)((long)puVar18 + lVar28 + 0x138) = 0xffffffff;
        puVar19 = (undefined8 *)((long)puVar18 + lVar28 + 0x19c);
        *(undefined4 *)((long)puVar18 + lVar28 + 0x180) = 0x10000;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x128) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x130) = 0;
        *(undefined8 **)((long)puVar18 + lVar28 + 400) = puVar19;
        *(undefined4 *)((long)puVar18 + lVar28 + 0x198) = 0x100;
        *(undefined1 *)((long)puVar18 + lVar28 + 0x29b) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x118) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x120) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x108) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x110) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0xf8) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x100) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0xe8) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0xf0) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x140) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x148) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x150) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x158) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x160) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x168) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x170) = 0;
        *(char **)((long)puVar18 + lVar28 + 0x178) = "agl::TextureData";
        if (puVar19 != &DAT_0407ebb1) {
          *(undefined1 *)puVar19 = 0;
        }
        lVar35 = lVar28 + 0x298;
        *(undefined **)((long)puVar18 + lVar28 + 0x188) = puVar10;
        lVar28 = lVar35;
      } while ((ulong)uVar23 * 0x298 != lVar35);
      *(uint *)(param_1 + 0x1370) = uVar23;
      *(ulong **)(param_1 + 0x1378) = puVar18 + 1;
    }
  }
  else {
    plVar36 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03a23aa8:
      puVar18 = (ulong *)(**(code **)(*plVar36 + 0x30))(plVar36,sVar1,8);
      goto joined_r0x03a23b04;
    }
    lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar36 = (long *)(lVar28 + 8);
    if (lVar35 != 0) {
      plVar36 = (long *)(lVar35 + 0xa8);
    }
    plVar36 = (long *)*plVar36;
    if (plVar36 != (long *)0x0) goto LAB_03a23aa8;
  }
  uVar23 = *(uint *)(param_2 + 0x10);
  if (0 < (int)uVar23) {
    sVar1 = (ulong)uVar23 * 0x298 + 8;
    lVar28 = *(long *)PTR_DAT_04bb2698;
    if (lVar28 == 0) {
      puVar18 = malloc(sVar1);
    }
    else {
      if (param_3 == (long *)0x0) {
        lVar35 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar19 = (undefined8 *)(lVar28 + 8);
        if (lVar35 != 0) {
          puVar19 = (undefined8 *)(lVar35 + 0xa8);
        }
        param_3 = (long *)*puVar19;
        if (param_3 == (long *)0x0) goto LAB_03a23d10;
      }
      puVar18 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,sVar1,8);
    }
    if (puVar18 != (ulong *)0x0) {
      *puVar18 = (ulong)uVar23;
      puVar10 = PTR_DAT_04bb21f8 + 0x10;
      lVar28 = 0;
      do {
        FUN_0390cee0((long)puVar18 + lVar28 + 8);
        *(undefined4 *)((long)puVar18 + lVar28 + 0x138) = 0xffffffff;
        puVar19 = (undefined8 *)((long)puVar18 + lVar28 + 0x19c);
        *(undefined4 *)((long)puVar18 + lVar28 + 0x180) = 0x10000;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x128) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x130) = 0;
        *(undefined8 **)((long)puVar18 + lVar28 + 400) = puVar19;
        *(undefined4 *)((long)puVar18 + lVar28 + 0x198) = 0x100;
        *(undefined1 *)((long)puVar18 + lVar28 + 0x29b) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x118) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x120) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x108) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x110) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0xf8) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x100) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0xe8) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0xf0) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x140) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x148) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x150) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x158) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x160) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x168) = 0;
        *(undefined8 *)((long)puVar18 + lVar28 + 0x170) = 0;
        *(char **)((long)puVar18 + lVar28 + 0x178) = "agl::TextureData";
        if (puVar19 != &DAT_0407ebb1) {
          *(undefined1 *)puVar19 = 0;
        }
        lVar35 = lVar28 + 0x298;
        *(undefined **)((long)puVar18 + lVar28 + 0x188) = puVar10;
        lVar28 = lVar35;
      } while ((ulong)uVar23 * 0x298 != lVar35);
      *(uint *)(param_1 + 0x1010) = uVar23;
      *(ulong **)(param_1 + 0x1018) = puVar18 + 1;
    }
  }
LAB_03a23d10:
  *(undefined8 *)(param_1 + 0x20f0) = 0;
  puVar19 = *(undefined8 **)(param_1 + 0xbb0);
  *(uint *)(param_1 + 0xb90) = *(uint *)(param_1 + 0xb90) & 0xfffdffff;
  if (puVar19 != &DAT_0407ebb1) {
    iVar16 = 0;
    if (*(int *)(param_1 + 3000) < 1) {
      iVar16 = *(int *)(param_1 + 3000) + -1;
    }
    memset(puVar19,0,(long)iVar16);
    *(undefined1 *)((long)puVar19 + (long)iVar16) = 0;
  }
  puVar19 = *(undefined8 **)(param_1 + 0xcc8);
  if (puVar19 != &DAT_0407ebb1) {
    iVar16 = 0;
    if (*(int *)(param_1 + 0xcd0) < 1) {
      iVar16 = *(int *)(param_1 + 0xcd0) + -1;
    }
    memset(puVar19,0,(long)iVar16);
    *(undefined1 *)((long)puVar19 + (long)iVar16) = 0;
  }
  lVar28 = *(long *)PTR_DAT_04bd1158;
  if ((lVar28 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar28 + 8) + 0x18))((long *)(lVar28 + 8));
    FUN_006e9454(&local_490,&DAT_0406a3d7,"Icon=EFFECT",*(undefined8 *)(lVar28 + 0x10));
  }
  *(uint *)(param_1 + 0xb90) = *(uint *)(param_1 + 0xb90) | 3;
  return;
}

