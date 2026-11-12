
void FUN_00a84150(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  long lVar13;
  long *plVar14;
  long *plVar15;
  long lVar16;
  long *plVar17;
  int iVar18;
  long *plVar19;
  int iVar20;
  long *plVar21;
  long *plVar22;
  undefined *local_130;
  char *pcStack_128;
  undefined *local_120;
  char *local_118;
  undefined *local_110;
  undefined *puStack_108;
  undefined *local_100;
  undefined8 *puStack_f8;
  undefined4 local_f0;
  undefined *local_e8;
  char *pcStack_e0;
  undefined4 local_d8;
  char local_d4 [31];
  undefined1 local_b5;
  undefined *local_b0;
  char *local_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined8 *puStack_88;
  uint local_80;
  
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = &PTR_FUN_0492ebe8;
  puVar1 = puVar1 + 0x10;
  local_a8 = "Weather";
  pcStack_e0 = "WeatherPattern";
  local_e8 = puVar1;
  local_b0 = puVar1;
  FUN_00751ec0(param_1 + 1,&local_b0,&local_e8,0);
  plVar17 = param_1 + 6;
  local_f0 = 0;
  local_118 = "mParams";
  param_1[0x1a] = "mParams";
  param_1[0x1b] = 0;
  param_1[1] = &PTR_LAB_0492f1d8;
  param_1[0x1c] = 0;
  puStack_108 = &DAT_0409b531;
  puStack_f8 = &DAT_0407ebb1;
  *(undefined4 *)(param_1 + 0x1d) = 0;
  puVar4 = PTR_DAT_04bb60a0;
  param_1[0x1e] = 0;
  plVar15 = param_1 + 0x19;
  *plVar15 = (long)(puVar4 + 0x10);
  lVar16 = *plVar17;
  if (*plVar17 != 0) {
    do {
      lVar13 = lVar16;
      lVar16 = *(long *)(lVar13 + 0x10);
    } while (lVar16 != 0);
    plVar17 = (long *)(lVar13 + 0x10);
  }
  *plVar17 = (long)plVar15;
  param_1[0x1c] = param_1 + 1;
  param_1[0x19] = &PTR_LAB_0492f348;
  param_1[0x1814] = param_1 + 0x1993;
  param_1[0x1b12] = param_1 + 0x1c91;
  param_1[0x1a3] = param_1 + 0x322;
  param_1[0x1e10] = param_1 + 0x1f8f;
  param_1[0x210e] = param_1 + 0x228d;
  param_1[0x240c] = param_1 + 0x258b;
  param_1[0x322] = param_1 + 0x4a1;
  param_1[0x270a] = param_1 + 0x2889;
  param_1[0x2a08] = param_1 + 0x2b87;
  param_1[0x2d06] = param_1 + 0x2e85;
  param_1[0x4a1] = param_1 + 0x620;
  param_1[0x3004] = param_1 + 0x3183;
  param_1[0x3302] = param_1 + 0x3481;
  param_1[0x3600] = param_1 + 0x377f;
  param_1[0x620] = param_1 + 0x79f;
  param_1[0x38fe] = param_1 + 0x3a7d;
  param_1[0x3bfc] = param_1 + 0x3d7b;
  param_1[0x3efa] = param_1 + 0x4079;
  param_1[0x79f] = param_1 + 0x91e;
  param_1[0x41f8] = param_1 + 0x4377;
  param_1[0x44f6] = param_1 + 0x4675;
  param_1[0x47f4] = param_1 + 0x4973;
  param_1[0x91e] = param_1 + 0xa9d;
  param_1[0x4af2] = param_1 + 0x4c71;
  param_1[0x4c71] = 0;
  param_1[0xa9d] = param_1 + 0xc1c;
  param_1[0xf1a] = param_1 + 0x1099;
  param_1[0x1218] = param_1 + 0x1397;
  param_1[0x1516] = param_1 + 0x1695;
  param_1[0xc1c] = param_1 + 0xd9b;
  param_1[0xd9b] = param_1 + 0xf1a;
  param_1[0x1099] = param_1 + 0x1218;
  param_1[0x1397] = param_1 + 0x1516;
  param_1[0x1695] = param_1 + 0x1814;
  param_1[0x1993] = param_1 + 0x1b12;
  param_1[0x1c91] = param_1 + 0x1e10;
  param_1[0x1f8f] = param_1 + 0x210e;
  param_1[0x228d] = param_1 + 0x240c;
  param_1[0x258b] = param_1 + 0x270a;
  param_1[0x2889] = param_1 + 0x2a08;
  param_1[0x2b87] = param_1 + 0x2d06;
  param_1[0x2e85] = param_1 + 0x3004;
  param_1[0x3183] = param_1 + 0x3302;
  param_1[0x3481] = param_1 + 0x3600;
  param_1[0x377f] = param_1 + 0x38fe;
  param_1[0x3a7d] = param_1 + 0x3bfc;
  param_1[0x3d7b] = param_1 + 0x3efa;
  param_1[0x4079] = param_1 + 0x41f8;
  plVar17 = param_1 + 0xc9e4;
  param_1[0x4377] = param_1 + 0x44f6;
  plVar14 = param_1 + 0xc9ae;
  param_1[0x4675] = param_1 + 0x47f4;
  plVar2 = param_1 + 0xc98a;
  param_1[0x4973] = param_1 + 0x4af2;
  puVar6 = param_1 + 0x8bd7;
  puVar3 = param_1 + 0x4e24;
  param_1[0x21] = 0;
  param_1[0x22] = param_1 + 0x24;
  param_1[0x23] = param_1 + 0x24;
  param_1[0x24] = param_1 + 0x1a3;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  if (param_1 + 0x4df0 != (undefined8 *)0x0) {
    param_1[0x20] = 0x3400000000;
    param_1[0x21] = param_1 + 0x4df0;
  }
  puVar9 = PTR_DAT_04bb3050;
  puVar8 = PTR_DAT_04bb2028;
  param_1[0x19] = &PTR_LAB_0492f4c8;
  puVar4 = PTR_DAT_04bb2020 + 0x10;
  puVar5 = PTR_DAT_04bb60a0 + 0x10;
  iVar18 = 0;
  local_120 = puVar1;
  local_110 = puVar1;
  local_100 = puVar1;
  do {
    if (*(int *)(param_1 + 0x20) < *(int *)((long)param_1 + 0x104)) {
      plVar19 = (long *)param_1[0x22];
      if (plVar19 != (long *)0x0) {
        param_1[0x22] = *plVar19;
      }
      *plVar19 = (long)(puVar9 + 0x10);
      (**(code **)(local_120 + 0x18))(&local_120);
      plVar19[2] = 0;
      plVar19[3] = 0;
      plVar19[1] = (long)local_118;
      plVar19[5] = 0;
      *(undefined4 *)(plVar19 + 4) = local_f0;
      *plVar19 = (long)&PTR_LAB_0492f7a8;
      puStack_88 = &DAT_0407ebb1;
      local_80 = 0;
      local_b5 = 0;
      local_d4[0] = '\0';
      local_a8 = "mLabel";
      puStack_98 = &DAT_040dedc8;
      local_d8 = 0x20;
      local_e8 = puVar8 + 0x10;
      pcStack_e0 = local_d4;
      local_b0 = puVar4;
      local_a0 = puVar4;
      local_90 = puVar4;
      FUN_008f0e20(plVar19 + 6,&local_b0,&local_e8,plVar19);
      puStack_98 = &DAT_040bf942;
      puStack_88 = &DAT_0407ebb1;
      local_80 = 0;
      plVar19[0x16] = 0;
      *(undefined4 *)(plVar19 + 0x17) = 0;
      plVar21 = plVar19 + 0x13;
      *plVar21 = (long)puVar5;
      plVar19[0x18] = 0;
      local_a8 = "mWeatherType";
      plVar19[0x14] = (long)"mWeatherType";
      plVar19[0x15] = 0;
      local_b0 = puVar4;
      local_a0 = puVar4;
      local_90 = puVar4;
      (**(code **)(*plVar19 + 0x140))(plVar19,plVar21);
      plVar22 = plVar19 + 0x1e;
      *plVar22 = (long)(plVar19 + 0x24);
      plVar19[0xa8] = 0;
      plVar19[0x42] = (long)(plVar19 + 0x48);
      plVar19[0x48] = (long)(plVar19 + 0x4e);
      plVar19[0x4e] = (long)(plVar19 + 0x54);
      plVar19[0x54] = (long)(plVar19 + 0x5a);
      plVar19[0x1d] = (long)plVar22;
      plVar19[0x5a] = (long)(plVar19 + 0x60);
      plVar19[0x60] = (long)(plVar19 + 0x66);
      plVar19[0x66] = (long)(plVar19 + 0x6c);
      plVar19[0x6c] = (long)(plVar19 + 0x72);
      plVar19[0x72] = (long)(plVar19 + 0x78);
      plVar19[0x78] = (long)(plVar19 + 0x7e);
      plVar19[0x7e] = (long)(plVar19 + 0x84);
      plVar19[0x84] = (long)(plVar19 + 0x8a);
      plVar19[0x8a] = (long)(plVar19 + 0x90);
      plVar19[0x90] = (long)(plVar19 + 0x96);
      plVar19[0x96] = (long)(plVar19 + 0x9c);
      plVar19[0x9c] = (long)(plVar19 + 0xa2);
      plVar19[0xa2] = (long)(plVar19 + 0xa8);
      plVar19[0x3c] = (long)(plVar19 + 0x42);
      plVar19[0x19] = 0;
      plVar19[0x1a] = 0;
      plVar19[0x36] = (long)(plVar19 + 0x3c);
      plVar19[0x30] = (long)(plVar19 + 0x36);
      plVar19[0x2a] = (long)(plVar19 + 0x30);
      plVar19[0x24] = (long)(plVar19 + 0x2a);
      plVar19[0x1b] = 0;
      plVar19[0x1c] = (long)plVar22;
      *plVar21 = (long)&PTR_LAB_0492fa88;
      if (plVar19 + 0xae != (long *)0x0) {
        plVar19[0x1b] = (long)(plVar19 + 0xae);
        plVar19[0x1a] = 0x1800000000;
      }
      plVar19[0x13] = (long)&PTR_LAB_0492f908;
      iVar20 = 0x18;
      do {
        if ((int)plVar19[0x1a] < *(int *)((long)plVar19 + 0xd4)) {
          plVar22 = (long *)plVar19[0x1c];
          if (plVar22 != (long *)0x0) {
            plVar19[0x1c] = *plVar22;
          }
          *plVar22 = (long)(puVar9 + 0x10);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          plVar22[3] = 0;
          plVar22[1] = (long)local_a8;
          plVar22[2] = 0;
          plVar22[5] = 0;
          *(undefined4 *)((long)plVar22 + 0x24) = 0;
          if ((local_80 >> 7 & 1) == 0) {
            *(undefined4 *)(plVar22 + 5) = 0;
          }
          *plVar22 = (long)&PTR_LAB_0492fc08;
          *(uint *)(plVar22 + 4) = local_80 & 0xfeffffff;
          if ((int)plVar19[0x1a] < *(int *)((long)plVar19 + 0xd4)) {
            *(long **)(plVar19[0x1b] + (long)(int)plVar19[0x1a] * 8) = plVar22;
            *(int *)(plVar19 + 0x1a) = (int)plVar19[0x1a] + 1;
          }
        }
        else {
          plVar22 = (long *)0x0;
        }
        (**(code **)(*plVar22 + 0x38))(plVar22,plVar21);
        iVar20 = iVar20 + -1;
        *(uint *)(plVar22 + 4) = *(uint *)(plVar22 + 4) & 0xfffffffc;
        puVar1 = PTR_DAT_04bb2020;
      } while (iVar20 != 0);
      local_80 = 0;
      plVar19[199] = (long)"mWindType";
      plVar19[200] = 0;
      plVar19[0xc9] = 0;
      local_b0 = puVar1 + 0x10;
      local_a8 = "mWindType";
      puStack_98 = &DAT_04071840;
      puStack_88 = &DAT_0407ebb1;
      puVar1 = PTR_DAT_04bb60a0 + 0x10;
      *(undefined4 *)(plVar19 + 0xca) = 0;
      plVar19[0xcb] = 0;
      plVar19[0xc6] = (long)puVar1;
      local_a0 = local_b0;
      local_90 = local_b0;
      (**(code **)(*plVar19 + 0x140))(plVar19,plVar19 + 0xc6);
      plVar19[0xcc] = 0;
      plVar19[0xc6] = (long)&PTR_LAB_049300b0;
      plVar19[0xd1] = (long)(plVar19 + 0xd7);
      plVar19[0xcd] = 0;
      plVar19[0xd7] = (long)(plVar19 + 0xdd);
      plVar19[0xce] = 0;
      plVar19[0xdd] = (long)(plVar19 + 0xe3);
      plVar19[0xcf] = (long)(plVar19 + 0xd1);
      plVar19[0xe3] = (long)(plVar19 + 0xe9);
      plVar19[0x15b] = 0;
      plVar19[0xe9] = (long)(plVar19 + 0xef);
      plVar19[0xd0] = (long)(plVar19 + 0xd1);
      plVar19[0xef] = (long)(plVar19 + 0xf5);
      plVar19[0xf5] = (long)(plVar19 + 0xfb);
      plVar19[0xfb] = (long)(plVar19 + 0x101);
      plVar19[0x101] = (long)(plVar19 + 0x107);
      plVar19[0x107] = (long)(plVar19 + 0x10d);
      plVar19[0x10d] = (long)(plVar19 + 0x113);
      plVar19[0x113] = (long)(plVar19 + 0x119);
      plVar19[0x119] = (long)(plVar19 + 0x11f);
      plVar19[0x11f] = (long)(plVar19 + 0x125);
      plVar19[0x125] = (long)(plVar19 + 299);
      plVar19[299] = (long)(plVar19 + 0x131);
      plVar19[0x131] = (long)(plVar19 + 0x137);
      plVar19[0x137] = (long)(plVar19 + 0x13d);
      plVar19[0x13d] = (long)(plVar19 + 0x143);
      plVar19[0x143] = (long)(plVar19 + 0x149);
      plVar19[0x149] = (long)(plVar19 + 0x14f);
      plVar19[0x14f] = (long)(plVar19 + 0x155);
      plVar19[0x155] = (long)(plVar19 + 0x15b);
      if (plVar19 + 0x161 != (long *)0x0) {
        plVar19[0xce] = (long)(plVar19 + 0x161);
        plVar19[0xcd] = 0x1800000000;
      }
      plVar19[0xc6] = (long)&PTR_LAB_0492ff30;
      iVar20 = 0x18;
      do {
        if ((int)plVar19[0xcd] < *(int *)((long)plVar19 + 0x66c)) {
          plVar22 = (long *)plVar19[0xcf];
          if (plVar22 != (long *)0x0) {
            plVar19[0xcf] = *plVar22;
          }
          *plVar22 = (long)(puVar9 + 0x10);
          (**(code **)(local_b0 + 0x18))(&local_b0);
          plVar22[3] = 0;
          plVar22[1] = (long)local_a8;
          plVar22[2] = 0;
          plVar22[5] = 0;
          *(undefined4 *)((long)plVar22 + 0x24) = 0;
          if ((local_80 >> 7 & 1) == 0) {
            *(undefined4 *)(plVar22 + 5) = 0;
          }
          *plVar22 = (long)&PTR_LAB_04930230;
          *(uint *)(plVar22 + 4) = local_80 & 0xfeffffff;
          if ((int)plVar19[0xcd] < *(int *)((long)plVar19 + 0x66c)) {
            *(long **)(plVar19[0xce] + (long)(int)plVar19[0xcd] * 8) = plVar22;
            *(int *)(plVar19 + 0xcd) = (int)plVar19[0xcd] + 1;
          }
        }
        else {
          plVar22 = (long *)0x0;
        }
        (**(code **)(*plVar22 + 0x38))(plVar22,plVar19 + 0xc6);
        iVar20 = iVar20 + -1;
        *(uint *)(plVar22 + 4) = *(uint *)(plVar22 + 4) & 0xfffffffc;
      } while (iVar20 != 0);
      plVar19[0x17b] = 0;
      plVar19[0x17a] = (long)"mReport";
      plVar19[0x179] = (long)&PTR_LAB_04930548;
      plVar19[0x17c] = 0;
      plVar19[0x17d] = 0;
      plVar19[0x17e] = 0;
      (**(code **)(*plVar19 + 0x140))(plVar19,plVar19 + 0x179);
      puVar12 = (undefined4 *)(**(code **)(plVar19[0x179] + 0xf0))(plVar19 + 0x179);
      *puVar12 = 0;
      if ((*(uint *)(plVar19 + 0x17d) >> 7 & 1) == 0) {
        plVar19[0x17e] = 0;
        *(undefined4 *)(plVar19 + 0x17e) = 0;
      }
      *(uint *)(plVar19 + 0x17d) = *(uint *)(plVar19 + 0x17d) & 0xfeffffff;
      *plVar19 = (long)&PTR_LAB_0492f648;
      if (*(int *)(param_1 + 0x20) < *(int *)((long)param_1 + 0x104)) {
        *(long **)(param_1[0x21] + (long)*(int *)(param_1 + 0x20) * 8) = plVar19;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
      }
    }
    else {
      plVar19 = (long *)0x0;
    }
    (**(code **)(*plVar19 + 0x38))(plVar19,plVar15);
    iVar20 = 0x34;
    if (iVar18 < 0x34) {
      iVar20 = iVar18 + 1;
    }
    *(uint *)(plVar19 + 4) = *(uint *)(plVar19 + 4) & 0xfffffffc;
    iVar18 = iVar20;
  } while (iVar20 != 0x34);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = "Weather";
  pcStack_e0 = "WeatherRate_North";
  local_e8 = puVar1;
  local_b0 = puVar1;
  FUN_00751ec0(puVar3,&local_b0,&local_e8,0);
  *puVar3 = &PTR_LAB_0492eee8;
  local_80 = 0;
  local_a8 = "mParams";
  puStack_98 = &DAT_04071824;
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  FUN_00a981e0(param_1 + 0x4e3c,&local_b0,puVar3);
  local_a8 = "Weather";
  pcStack_e0 = "WeatherRate_South";
  local_e8 = puVar1;
  local_b0 = puVar1;
  FUN_00751ec0(puVar6,&local_b0,&local_e8,0);
  *puVar6 = &PTR_LAB_0492eee8;
  local_80 = 0;
  local_a8 = "mParams";
  puStack_98 = &DAT_040cecea;
  puStack_88 = &DAT_0407ebb1;
  local_b0 = puVar1;
  local_a0 = puVar1;
  local_90 = puVar1;
  FUN_00a981e0(param_1 + 0x8bef,&local_b0,puVar6);
  local_a8 = "Weather";
  pcStack_e0 = "RainDrawParam";
  local_e8 = puVar1;
  local_b0 = puVar1;
  FUN_00751ec0(plVar2,&local_b0,&local_e8,0);
  puVar1 = PTR_DAT_04bb3380;
  *plVar2 = (long)&PTR_LAB_0492ec08;
  *(undefined4 *)(param_1 + 0xc9a6) = 0;
  param_1[0xc9a4] = 0;
  param_1[0xc9a5] = 0;
  param_1[0xc9a7] = 0;
  param_1[0xc9a3] = "mUnitMax";
  param_1[0xc9a2] = puVar1 + 0x10;
  plVar15 = param_1 + 0xc98f;
  lVar16 = *plVar15;
  if (*plVar15 != 0) {
    do {
      lVar13 = lVar16;
      lVar16 = *(long *)(lVar13 + 0x10);
    } while (lVar16 != 0);
    plVar15 = (long *)(lVar13 + 0x10);
  }
  *plVar15 = (long)(param_1 + 0xc9a2);
  param_1[0xc9a5] = plVar2;
  puVar12 = (undefined4 *)(**(code **)(param_1[0xc9a2] + 0xf0))();
  *puVar12 = 0x80;
  if ((*(uint *)(param_1 + 0xc9a6) >> 7 & 1) == 0) {
    param_1[0xc9a7] = 0;
    *(undefined4 *)(param_1 + 0xc9a7) = 0x80;
  }
  param_1[0xc9a9] = "mRainCreateNum";
  *(uint *)(param_1 + 0xc9a6) = *(uint *)(param_1 + 0xc9a6) & 0xfeffffff;
  param_1[0xc9aa] = 0;
  param_1[0xc9ab] = 0;
  plVar15 = param_1 + 0xc9a8;
  *plVar15 = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xc9ac) = 0;
  param_1[0xc9ad] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar15);
  puVar12 = (undefined4 *)(**(code **)(*plVar15 + 0xf0))(plVar15);
  *puVar12 = 0x20;
  if ((*(uint *)(param_1 + 0xc9ac) >> 7 & 1) == 0) {
    param_1[0xc9ad] = 0;
    *(undefined4 *)(param_1 + 0xc9ad) = 0x20;
  }
  param_1[0xc9b3] = 0;
  *(uint *)(param_1 + 0xc9ac) = *(uint *)(param_1 + 0xc9ac) & 0xfeffffff;
  param_1[0xc9b0] = 0;
  param_1[0xc9b1] = 0;
  *(undefined4 *)(param_1 + 0xc9b2) = 0;
  *plVar14 = (long)(puVar1 + 0x10);
  param_1[0xc9af] = "mHardRainCreateNum";
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar14);
  puVar12 = (undefined4 *)(**(code **)(*plVar14 + 0xf0))(plVar14);
  *puVar12 = 0x80;
  if ((*(uint *)(param_1 + 0xc9b2) >> 7 & 1) == 0) {
    param_1[0xc9b3] = 0;
    *(undefined4 *)(param_1 + 0xc9b3) = 0x80;
  }
  puVar5 = PTR_DAT_04bb31d0;
  puVar4 = PTR_DAT_04bb31d0 + 0x10;
  plVar15 = param_1 + 0xc9b4;
  *plVar15 = (long)puVar4;
  *(uint *)(param_1 + 0xc9b2) = *(uint *)(param_1 + 0xc9b2) & 0xfeffffff;
  param_1[0xc9b9] = 0;
  param_1[0xc9b5] = "mRainAreaXMax";
  *(undefined4 *)(param_1 + 0xc9b8) = 0;
  param_1[0xc9b6] = 0;
  param_1[0xc9b7] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar15);
  uVar10 = 0x42a00000;
  if ((*(uint *)(param_1 + 0xc9b8) & 0x800) != 0) {
    uVar10 = 0x3fb2b8c2;
  }
  puVar12 = (undefined4 *)(**(code **)(*plVar15 + 0xf0))(plVar15);
  *puVar12 = uVar10;
  uVar11 = *(uint *)(param_1 + 0xc9b8);
  if ((uVar11 >> 7 & 1) == 0) {
    param_1[0xc9b9] = 0;
    uVar10 = 0x42a00000;
    if ((uVar11 & 0x800) != 0) {
      uVar10 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xc9b9) = uVar10;
  }
  plVar15 = param_1 + 0xc9ba;
  *plVar15 = (long)puVar4;
  *(uint *)(param_1 + 0xc9b8) = uVar11 & 0xfeffffff;
  param_1[0xc9bb] = "mRainAreaZMin";
  param_1[0xc9bf] = 0;
  param_1[0xc9bc] = 0;
  param_1[0xc9bd] = 0;
  *(undefined4 *)(param_1 + 0xc9be) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar15);
  uVar10 = 0x42a00000;
  if ((*(uint *)(param_1 + 0xc9be) & 0x800) != 0) {
    uVar10 = 0x3fb2b8c2;
  }
  puVar12 = (undefined4 *)(**(code **)(*plVar15 + 0xf0))(plVar15);
  *puVar12 = uVar10;
  uVar11 = *(uint *)(param_1 + 0xc9be);
  if ((uVar11 >> 7 & 1) == 0) {
    param_1[0xc9bf] = 0;
    uVar10 = 0x42a00000;
    if ((uVar11 & 0x800) != 0) {
      uVar10 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xc9bf) = uVar10;
  }
  plVar15 = param_1 + 0xc9c0;
  *plVar15 = (long)(puVar5 + 0x10);
  *(uint *)(param_1 + 0xc9be) = uVar11 & 0xfeffffff;
  param_1[0xc9c1] = "mRainAreaZMax";
  param_1[0xc9c2] = 0;
  param_1[0xc9c3] = 0;
  *(undefined4 *)(param_1 + 0xc9c4) = 0;
  param_1[0xc9c5] = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar15);
  uVar10 = 0x42a00000;
  if ((*(uint *)(param_1 + 0xc9c4) & 0x800) != 0) {
    uVar10 = 0x3fb2b8c2;
  }
  puVar12 = (undefined4 *)(**(code **)(*plVar15 + 0xf0))(plVar15);
  *puVar12 = uVar10;
  uVar11 = *(uint *)(param_1 + 0xc9c4);
  if ((uVar11 >> 7 & 1) == 0) {
    param_1[0xc9c5] = 0;
    uVar10 = 0x42a00000;
    if ((uVar11 & 0x800) != 0) {
      uVar10 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xc9c5) = uVar10;
  }
  plVar15 = param_1 + 0xc9c6;
  *plVar15 = (long)(puVar5 + 0x10);
  *(uint *)(param_1 + 0xc9c4) = uVar11 & 0xfeffffff;
  param_1[0xc9c7] = "mRainAreaYMax";
  param_1[0xc9cb] = 0;
  param_1[0xc9c8] = 0;
  param_1[0xc9c9] = 0;
  *(undefined4 *)(param_1 + 0xc9ca) = 0;
  (**(code **)(*plVar2 + 0x140))(plVar2,plVar15);
  uVar10 = 0x42a00000;
  if ((*(uint *)(param_1 + 0xc9ca) & 0x800) != 0) {
    uVar10 = 0x3fb2b8c2;
  }
  puVar12 = (undefined4 *)(**(code **)(*plVar15 + 0xf0))(plVar15);
  *puVar12 = uVar10;
  uVar11 = *(uint *)(param_1 + 0xc9ca);
  if ((uVar11 >> 7 & 1) == 0) {
    param_1[0xc9cb] = 0;
    uVar10 = 0x42a00000;
    if ((uVar11 & 0x800) != 0) {
      uVar10 = 0x3fb2b8c2;
    }
    *(undefined4 *)(param_1 + 0xc9cb) = uVar10;
  }
  plVar15 = param_1 + 0xc9cc;
  *(uint *)(param_1 + 0xc9ca) = uVar11 & 0xfeffffff;
  local_130 = PTR_DAT_04bb2020 + 0x10;
  local_118 = "Weather";
  pcStack_128 = "SnowDrawParam";
  local_120 = local_130;
  FUN_00751ec0(plVar15,&local_120,&local_130,0);
  param_1[0xc9e9] = 0;
  param_1[0xc9cc] = &PTR_FUN_0492ed78;
  param_1[0xc9e6] = 0;
  param_1[0xc9e7] = 0;
  *(undefined4 *)(param_1 + 0xc9e8) = 0;
  *plVar17 = (long)&PTR_LAB_04931cd8;
  param_1[0xc9e5] = "mUnitMax";
  lVar16 = param_1[0xc9d1];
  if (param_1[0xc9d1] == 0) {
    plVar14 = param_1 + 0xc9d1;
  }
  else {
    do {
      lVar13 = lVar16;
      lVar16 = *(long *)(lVar13 + 0x10);
    } while (lVar16 != 0);
    plVar14 = (long *)(lVar13 + 0x10);
  }
  *plVar14 = (long)plVar17;
  param_1[0xc9e7] = plVar15;
  puVar12 = (undefined4 *)(**(code **)(*plVar17 + 0xf0))(plVar17);
  *puVar12 = 0x80;
  if ((*(uint *)(param_1 + 0xc9e8) >> 7 & 1) == 0) {
    param_1[0xc9e9] = 0;
    *(undefined4 *)(param_1 + 0xc9e9) = 0x80;
  }
  *(uint *)(param_1 + 0xc9e8) = *(uint *)(param_1 + 0xc9e8) & 0xfeffffff;
  local_80 = 0;
  local_b0 = PTR_DAT_04bb2020 + 0x10;
  local_a8 = "mColor";
  puStack_88 = &DAT_0407ebb1;
  puStack_98 = &DAT_040a5bcf;
  local_e8 = &DAT_3f8000003f800000;
  pcStack_e0 = &DAT_3f8000003f800000;
  local_a0 = local_b0;
  local_90 = local_b0;
  FUN_00744b60(param_1 + 0xc9ea,&local_b0,&local_e8,plVar15);
  *(undefined4 *)(param_1 + 0xc9f6) = 0;
  plVar17 = param_1 + 0xc9f2;
  *plVar17 = (long)(puVar1 + 0x10);
  param_1[0xc9f3] = "mSnowCreateNum";
  param_1[0xc9f7] = 0;
  param_1[0xc9f4] = 0;
  param_1[0xc9f5] = 0;
  (**(code **)(*plVar15 + 0x140))(plVar15,plVar17);
  puVar12 = (undefined4 *)(**(code **)(*plVar17 + 0xf0))(plVar17);
  *puVar12 = 0x20;
  if ((*(uint *)(param_1 + 0xc9f6) >> 7 & 1) == 0) {
    param_1[0xc9f7] = 0;
    *(undefined4 *)(param_1 + 0xc9f7) = 0x20;
  }
  plVar17 = param_1 + 0xc9f8;
  *plVar17 = (long)(puVar1 + 0x10);
  *(uint *)(param_1 + 0xc9f6) = *(uint *)(param_1 + 0xc9f6) & 0xfeffffff;
  param_1[0xc9f9] = "mHardSnowCreateNum";
  param_1[0xc9fd] = 0;
  param_1[0xc9fa] = 0;
  param_1[0xc9fb] = 0;
  *(undefined4 *)(param_1 + 0xc9fc) = 0;
  (**(code **)(*plVar15 + 0x140))(plVar15,plVar17);
  puVar12 = (undefined4 *)(**(code **)(*plVar17 + 0xf0))(plVar17);
  *puVar12 = 0x80;
  if ((*(uint *)(param_1 + 0xc9fc) >> 7 & 1) == 0) {
    param_1[0xc9fd] = 0;
    *(undefined4 *)(param_1 + 0xc9fd) = 0x80;
  }
  *(undefined4 *)(param_1 + 0xca01) = 0x80;
  puVar1 = PTR_DAT_04bcb440;
  *(uint *)(param_1 + 0xc9fc) = *(uint *)(param_1 + 0xc9fc) & 0xfeffffff;
  puVar6 = (undefined8 *)((long)param_1 + 0x6500c);
  *(undefined1 *)((long)param_1 + 0x6508b) = 0;
  param_1[0xca00] = puVar6;
  param_1[0xc9fe] = puVar1 + 0x10;
  if (puVar6 != &DAT_0407ebb1) {
    *(undefined1 *)puVar6 = 0;
  }
  param_1[0xc9ff] = PTR_DAT_04bb2d88 + 0x10;
  uVar10 = FUN_006bd550(&DAT_0407ebb1,0);
  *(undefined4 *)(param_1 + 0xca12) = uVar10;
  param_1[0xca13] = 0;
  param_1[0xca14] = 0;
  param_1[0xca15] = 0;
  *(undefined8 *)((long)param_1 + 0x650ad) = 0;
  param_1[0xc9fe] = &PTR_LAB_04931c30;
  *(undefined4 *)(param_1 + 0xca17) = 0;
  param_1[0xca18] = 0;
  param_1[0xca19] = &PTR_LAB_04931c88;
  puVar1 = PTR_DAT_04bb4a78 + 0x10;
  param_1[0xca1d] = &PTR_LAB_04931cb0;
  *(undefined4 *)(param_1 + 0xca27) = 0x40;
  *(undefined1 *)((long)param_1 + 0x6517b) = 0;
  param_1[0xca21] = puVar1;
  puVar6 = (undefined8 *)((long)param_1 + 0x6513c);
  param_1[0xca26] = puVar6;
  if (puVar6 != &DAT_0407ebb1) {
    *(undefined1 *)puVar6 = 0;
  }
  param_1[0xca35] = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xca30) = 0xffffffff;
  param_1[0xca31] = 0;
  param_1[0xca32] = 0;
  param_1[0xca33] = 0;
  *(undefined4 *)(param_1 + 0xca34) = 0;
  *(undefined4 *)(param_1 + 0xca36) = 0xffffffff;
  *(undefined4 *)(param_1 + 0xca37) = 0;
  param_1[0xca25] = puVar1 + 0x10;
  param_1[0xca38] = 0;
  *PTR_DAT_04bb62e8 = 1;
  puVar1 = PTR_DAT_04bb62f0;
  *(undefined2 *)(param_1 + 0xca39) = 0;
  *(undefined1 *)((long)param_1 + 0x651ce) = 0;
  *(undefined2 *)(param_1 + 0xca3a) = 0;
  *(undefined1 *)((long)param_1 + 0x651d6) = 0;
  *(undefined2 *)(param_1 + 0xca3b) = 0;
  *(undefined1 *)((long)param_1 + 0x651de) = 0;
  *(undefined2 *)(param_1 + 0xca3c) = 0;
  *(undefined1 *)((long)param_1 + 0x651e6) = 0;
  *(undefined2 *)(param_1 + 0xca3d) = 0;
  *(undefined1 *)((long)param_1 + 0x651ee) = 0;
  *(undefined2 *)(param_1 + 0xca3e) = 0;
  *(undefined1 *)((long)param_1 + 0x651f6) = 0;
  *(undefined8 *)puVar1 = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 8) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x10) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x18) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x20) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x28) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x30) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x38) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x40) = 0xffffffffffffffff;
  *(undefined8 *)(puVar1 + 0x48) = 0xffffffffffffffff;
  *(undefined4 *)((long)param_1 + 0x651ca) = 0x101;
  *(undefined4 *)((long)param_1 + 0x651d2) = 0x101;
  *(undefined4 *)((long)param_1 + 0x651da) = 0x101;
  *(undefined4 *)((long)param_1 + 0x651e2) = 0x101;
  *(undefined4 *)((long)param_1 + 0x651ea) = 0x101;
  *(undefined4 *)((long)param_1 + 0x651f2) = 0x101;
  memset(param_1 + 0xca3f,0,0x13e);
  *(undefined1 *)((long)param_1 + 0x65336) = 1;
  *(undefined4 *)(param_1 + 0xca67) = 0x34;
  uVar11 = nn::os::GetSystemTick();
  *(undefined8 *)((long)param_1 + 0x6534c) = 0x3400000034;
  *(undefined8 *)((long)param_1 + 0x65354) = 0x800000008;
  *(undefined8 *)((long)param_1 + 0x6520c) = 0;
  *(undefined8 *)((long)param_1 + 0x6535c) = 0xffffffff00000008;
  uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  *(undefined8 *)((long)param_1 + 0x65364) = 0x600000002;
  *(undefined8 *)((long)param_1 + 0x65344) = 0x3400000000;
  uVar7 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
  *(undefined8 *)((long)param_1 + 0x6533c) = 0;
  *(undefined8 *)((long)param_1 + 0x6536c) = 0xffffffff00000003;
  uVar11 = uVar11 ^ uVar11 * 0x800;
  *(undefined8 *)((long)param_1 + 0x65214) = 0;
  *(undefined8 *)((long)param_1 + 0x6521c) = 0;
  *(undefined8 *)((long)param_1 + 0x65224) = 0;
  *(undefined8 *)((long)param_1 + 0x6522c) = 0;
  *(undefined8 *)((long)param_1 + 0x65234) = 0;
  *(undefined8 *)((long)param_1 + 0x6523c) = 0;
  *(undefined8 *)((long)param_1 + 0x65244) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(undefined8 *)((long)param_1 + 0x6524c) = 0;
  *(undefined8 *)((long)param_1 + 0x65254) = 0;
  *(undefined8 *)((long)param_1 + 0x6525c) = 0;
  *(undefined8 *)((long)param_1 + 0x65264) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(undefined4 *)((long)param_1 + 0x65374) = 0;
  *(undefined1 *)(param_1 + 0xca6f) = 0;
  *(undefined4 *)((long)param_1 + 0x6537c) = 0;
  *(undefined2 *)(param_1 + 0xca70) = 0;
  *(undefined8 *)((long)param_1 + 0x6539c) = 0x3400000000;
  param_1[0xca72] = 0;
  *(undefined8 *)((long)param_1 + 0x653d4) = 0;
  *(undefined8 *)((long)param_1 + 0x653a4) = 0;
  *(undefined8 *)((long)param_1 + 0x653ac) = 0;
  *(undefined8 *)((long)param_1 + 0x653b4) = 0;
  *(undefined8 *)((long)param_1 + 0x653bc) = 0;
  *(undefined2 *)((long)param_1 + 0x653dc) = 0;
  *(undefined1 *)((long)param_1 + 0x6538c) = 0;
  *(undefined8 *)((long)param_1 + 0x65384) = 0;
  *(undefined1 *)(param_1 + 0xca73) = 1;
  param_1[0xca7c] = 0xffffffff;
  *(undefined4 *)(param_1 + 0xca7d) = 0;
  *(undefined2 *)((long)param_1 + 0x653ec) = 0;
  *(undefined4 *)((long)param_1 + 0x653ee) = 0x101;
  *(undefined1 *)((long)param_1 + 0x653f2) = 0;
  *(undefined4 *)((long)param_1 + 0x6543a) = 0x101;
  *(uint *)(param_1 + 0xca41) =
       (uint)((ulong)(uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7) * 0x7fffffff >> 0x20) |
       0x80000000;
  *(undefined1 *)((long)param_1 + 0x6543e) = 0;
  *(undefined1 *)(param_1 + 0xca8a) = 0;
  *(undefined2 *)((long)param_1 + 0x65454) = 0;
  *(undefined4 *)((long)param_1 + 0x65456) = 0x101;
  *(undefined1 *)((long)param_1 + 0x6545a) = 0;
  *(undefined8 *)((long)param_1 + 0x653f4) = 0;
  *(undefined8 *)((long)param_1 + 0x653fc) = 0;
  *(undefined8 *)((long)param_1 + 0x65404) = 0;
  *(undefined8 *)((long)param_1 + 0x6540c) = 0;
  param_1[0xca88] = 0xffff000000000000;
  param_1[0xca89] = 0x101000000ff;
  *(undefined8 *)((long)param_1 + 0x653c4) = 0;
  *(undefined8 *)((long)param_1 + 0x653cc) = 0;
  *(undefined8 *)((long)param_1 + 0x65432) = 0;
  *(undefined8 *)((long)param_1 + 0x6542c) = 0;
  memset((void *)((long)param_1 + 0x6545c),0,0x13e);
  *(undefined1 *)((long)param_1 + 0x6559a) = 1;
  *(undefined4 *)((long)param_1 + 0x6559c) = 0x34;
  uVar11 = nn::os::GetSystemTick();
  uVar7 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  param_1[0xca8e] = 0;
  param_1[0xca8f] = 0;
  param_1[0xca90] = 0;
  uVar11 = uVar7 ^ uVar7 * 0x800;
  param_1[0xca91] = 0;
  param_1[0xca92] = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  param_1[0xca93] = 0;
  param_1[0xca94] = 0;
  param_1[0xca95] = 0;
  param_1[0xca96] = 0;
  param_1[0xca97] = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  param_1[0xca98] = 0;
  param_1[0xca99] = 0;
  *(undefined2 *)(param_1 + 0xcab4) = 0;
  *(undefined1 *)((long)param_1 + 0x655a6) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(undefined4 *)((long)param_1 + 0x655a2) = 0x101;
  *(uint *)((long)param_1 + 0x6546c) =
       (uint)((ulong)(uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7) * 0x7fffffff >> 0x20) |
       0x80000000;
  memset(param_1 + 0xcab5,0,0x13e);
  *(undefined4 *)(param_1 + 0xcadd) = 0x34;
  *(undefined1 *)((long)param_1 + 0x656e6) = 1;
  uVar11 = nn::os::GetSystemTick();
  uVar7 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  *(undefined8 *)((long)param_1 + 0x655bc) = 0;
  uVar11 = uVar7 ^ uVar7 * 0x800;
  *(undefined8 *)((long)param_1 + 0x655c4) = 0;
  *(undefined8 *)((long)param_1 + 0x655cc) = 0;
  *(undefined8 *)((long)param_1 + 0x655d4) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(undefined8 *)((long)param_1 + 0x655dc) = 0;
  *(undefined8 *)((long)param_1 + 0x655e4) = 0;
  *(undefined8 *)((long)param_1 + 0x655ec) = 0;
  *(undefined8 *)((long)param_1 + 0x655f4) = 0;
  *(undefined8 *)((long)param_1 + 0x655fc) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(undefined8 *)((long)param_1 + 0x65604) = 0;
  *(undefined8 *)((long)param_1 + 0x6560c) = 0;
  *(undefined8 *)((long)param_1 + 0x65614) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(undefined2 *)((long)param_1 + 0x656ec) = 0;
  *(undefined1 *)((long)param_1 + 0x656f2) = 0;
  *(undefined4 *)((long)param_1 + 0x656ee) = 0x101;
  *(uint *)(param_1 + 0xcab7) =
       (uint)((ulong)(uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7) * 0x7fffffff >> 0x20) |
       0x80000000;
  memset((void *)((long)param_1 + 0x656f4),0,0x13e);
  *(undefined4 *)((long)param_1 + 0x65834) = 0x34;
  *(undefined1 *)((long)param_1 + 0x65832) = 1;
  uVar11 = nn::os::GetSystemTick();
  param_1[0xcae1] = 0;
  uVar7 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  param_1[0xcae2] = 0;
  param_1[0xcae3] = 0;
  param_1[0xcae4] = 0;
  uVar11 = uVar7 ^ uVar7 * 0x800;
  param_1[0xcae5] = 0;
  param_1[0xcae6] = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  param_1[0xcae7] = 0;
  param_1[0xcae8] = 0;
  param_1[0xcae9] = 0;
  param_1[0xcaea] = 0;
  param_1[0xcaeb] = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  param_1[0xcaec] = 0;
  *(undefined2 *)(param_1 + 0xcb07) = 0;
  *(undefined1 *)((long)param_1 + 0x6583e) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(undefined4 *)((long)param_1 + 0x6583a) = 0x101;
  *(uint *)((long)param_1 + 0x65704) =
       (uint)((ulong)(uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7) * 0x7fffffff >> 0x20) |
       0x80000000;
  memset(param_1 + 0xcb08,0,0x13e);
  *(undefined4 *)(param_1 + 0xcb30) = 0x34;
  *(undefined1 *)((long)param_1 + 0x6597e) = 1;
  uVar11 = nn::os::GetSystemTick();
  *(undefined8 *)((long)param_1 + 0x65854) = 0;
  *(undefined8 *)((long)param_1 + 0x6585c) = 0;
  *(undefined8 *)((long)param_1 + 0x65864) = 0;
  uVar7 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  *(undefined8 *)((long)param_1 + 0x6586c) = 0;
  *(undefined8 *)((long)param_1 + 0x65874) = 0;
  uVar11 = uVar7 ^ uVar7 * 0x800;
  *(undefined8 *)((long)param_1 + 0x6587c) = 0;
  *(undefined8 *)((long)param_1 + 0x65884) = 0;
  *(undefined8 *)((long)param_1 + 0x6588c) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(undefined8 *)((long)param_1 + 0x65894) = 0;
  *(undefined8 *)((long)param_1 + 0x6589c) = 0;
  *(undefined8 *)((long)param_1 + 0x658a4) = 0;
  *(undefined8 *)((long)param_1 + 0x658ac) = 0;
  *(undefined2 *)((long)param_1 + 0x65984) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  *(undefined1 *)((long)param_1 + 0x6598a) = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(undefined4 *)((long)param_1 + 0x65986) = 0x101;
  *(uint *)(param_1 + 0xcb0a) =
       (uint)((ulong)(uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7) * 0x7fffffff >> 0x20) |
       0x80000000;
  memset((void *)((long)param_1 + 0x6598c),0,0x13e);
  *(undefined4 *)((long)param_1 + 0x65acc) = 0x34;
  *(undefined1 *)((long)param_1 + 0x65aca) = 1;
  uVar11 = nn::os::GetSystemTick();
  *(undefined1 *)((long)param_1 + 0x65ad6) = 0xff;
  uVar7 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
  param_1[0xcb34] = 0;
  param_1[0xcb35] = 0;
  *(undefined4 *)(param_1 + 0xcb5a) = 0;
  param_1[0xcb36] = 0;
  param_1[0xcb37] = 0;
  uVar11 = uVar7 ^ uVar7 * 0x800;
  param_1[0xcb38] = 0;
  param_1[0xcb39] = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 2;
  *(undefined2 *)((long)param_1 + 0x65ad4) = 0xffff;
  param_1[0xcb3a] = 0;
  param_1[0xcb3b] = 0;
  param_1[0xcb60] = 0x12c00000258;
  param_1[0xcb61] = 0x12c00000258;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 3;
  param_1[0xcb3c] = 0;
  param_1[0xcb3d] = 0;
  param_1[0xcb3e] = 0;
  param_1[0xcb3f] = 0;
  uVar7 = (uVar7 ^ uVar7 >> 0x1e) * 0x6c078965 + 4;
  *(undefined2 *)((long)param_1 + 0x653ec) = 0;
  *(undefined4 *)((long)param_1 + 0x653ee) = 0x101;
  *(undefined1 *)((long)param_1 + 0x653f2) = 0;
  param_1[0xcb5c] = 0x3840000001e;
  param_1[0xcb5d] = 0x3840000001e;
  *(undefined2 *)(param_1 + 0xcb5b) = 0;
  *(undefined4 *)((long)param_1 + 0x65ada) = 0x101;
  *(undefined1 *)((long)param_1 + 0x65ade) = 0;
  *(undefined1 *)((long)param_1 + 0x65b1c) = 0;
  param_1[0xcb62] = 0x3f0000003f800000;
  *(undefined4 *)(param_1 + 0xcb63) = 0x3f000000;
  *(uint *)((long)param_1 + 0x6599c) =
       (uint)((ulong)(uVar11 >> 8 ^ uVar7 >> 0x13 ^ uVar11 ^ uVar7) * 0x7fffffff >> 0x20) |
       0x80000000;
  *(undefined8 *)((long)param_1 + 0x65424) = 0xa0000000a;
  *(undefined8 *)((long)param_1 + 0x65414) = 0xa0000000a;
  *(undefined8 *)((long)param_1 + 0x6541c) = 0xa0000000a;
  param_1[0xcb5e] = 0x12c000000f0;
  param_1[0xcb5f] = 0x12c00000078;
  return;
}

