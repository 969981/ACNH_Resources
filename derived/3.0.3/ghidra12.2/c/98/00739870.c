
void FUN_00739870(undefined8 *param_1,byte param_2,byte param_3,byte param_4)

{
  char *pcVar1;
  undefined *puVar2;
  undefined8 uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  void *pvVar11;
  void *pvVar12;
  undefined *local_f8;
  undefined1 *local_f0;
  int local_e8;
  undefined1 local_e4 [127];
  undefined1 local_65;
  
  param_1[3] = 0;
  param_1[4] = 0;
  puVar8 = PTR_DAT_04bb2ea0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  param_1[1] = puVar8 + 0x10;
  param_1[2] = 0;
  pcVar1 = (char *)((long)param_1 + 0x6c);
  param_1[0xc] = pcVar1;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  uVar3 = s_Component_040afd3c._0_8_;
  if (pcVar1 != "Component") {
    *(undefined1 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)pcVar1 = uVar3;
    *(char *)((long)param_1 + 0x74) = s_Component_040afd3c[8];
  }
  puVar2 = PTR_DAT_04bb21f8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  puVar8 = PTR_DAT_04bb3108;
  param_1[0x2e] = 0xffffffffffffffff;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  param_1[0xb] = puVar2 + 0x10;
  param_1[0x38] = 0;
  puVar8 = puVar8 + 0x10;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  puVar2 = PTR_DAT_04bb3100;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x4d] = puVar2 + 0x10;
  param_1[0x4e] = param_1;
  param_1[0x32] = PTR_LAB_04bb30d8;
  param_1[0x33] = 0;
  param_1[0x30] = puVar8;
  param_1[0x31] = param_1;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  puVar2 = PTR_LAB_04bb30e0;
  param_1[0x37] = puVar8;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = puVar2;
  param_1[0x3a] = 0;
  puVar2 = PTR_LAB_04bb30e8;
  param_1[0x3e] = puVar8;
  param_1[0x46] = param_1;
  param_1[0x40] = puVar2;
  puVar2 = PTR_LAB_04bb30f0;
  param_1[0x45] = puVar8;
  param_1[0x47] = puVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0xe;
  puVar8 = PTR_DAT_04bb2e90 + 0x10;
  *param_1 = &PTR_LAB_04903708;
  pvVar11 = (void *)((long)param_1 + 0x28c);
  param_1[0x4f] = puVar8;
  param_1[0x50] = pvVar11;
  plVar7 = (long *)PTR_PTR_04bb2238;
  lVar5 = *(long *)PTR_PTR_04bb2238;
  *(undefined4 *)(param_1 + 0x51) = 0x80;
  *(undefined1 *)((long)param_1 + 0x30b) = 0;
  (**(code **)(lVar5 + 0x18))(plVar7);
  pvVar12 = *(void **)((long)plVar7 + 8);
  if (pvVar11 != pvVar12) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)((long)plVar7 + 8) + lVar5) == '\0') {
LAB_00739ad8:
        iVar4 = (int)lVar5;
        goto LAB_00739adc;
      }
      lVar6 = *(long *)((long)plVar7 + 8) + lVar5;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_00739ad8;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_00739ad8;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    iVar4 = 0;
LAB_00739adc:
    if (*(int *)(param_1 + 0x51) <= iVar4) {
      iVar4 = *(int *)(param_1 + 0x51) + -1;
    }
    memcpy(pvVar11,pvVar12,(long)iVar4);
    *(undefined1 *)((long)pvVar11 + (long)iVar4) = 0;
    plVar7 = (long *)PTR_PTR_04bb2238;
  }
  *(undefined4 *)(param_1 + 100) = 0x80;
  *(undefined1 *)((long)param_1 + 0x3a3) = 0;
  *(undefined1 *)((long)param_1 + 0x324) = 0;
  *(undefined1 *)((long)param_1 + 0x3bc) = 0;
  param_1[99] = (undefined1 *)((long)param_1 + 0x324);
  puVar2 = PTR_DAT_04bb2d88;
  param_1[0x76] = (undefined1 *)((long)param_1 + 0x3bc);
  puVar2 = puVar2 + 0x10;
  *(undefined1 *)((long)param_1 + 0x101b) = 0;
  *(undefined4 *)(param_1 + 0x77) = 0x80;
  param_1[0x4f] = puVar2;
  param_1[0x62] = puVar2;
  *(undefined1 *)((long)param_1 + 0x43b) = 0;
  param_1[0x75] = puVar2;
  *(undefined4 *)(param_1 + 0x8a) = 0x80;
  *(undefined1 *)((long)param_1 + 0x4d3) = 0;
  param_1[0x88] = puVar2;
  *(undefined4 *)(param_1 + 0x9d) = 0x80;
  *(undefined1 *)((long)param_1 + 0x56b) = 0;
  param_1[0x9b] = puVar2;
  *(undefined4 *)(param_1 + 0xb0) = 0x80;
  *(undefined1 *)((long)param_1 + 0x603) = 0;
  param_1[0xae] = puVar2;
  *(undefined4 *)(param_1 + 0xc3) = 0x80;
  *(undefined1 *)((long)param_1 + 0x69b) = 0;
  param_1[0xc1] = puVar2;
  *(undefined1 *)((long)param_1 + 0x454) = 0;
  param_1[0x89] = (undefined1 *)((long)param_1 + 0x454);
  *(undefined1 *)((long)param_1 + 0x4ec) = 0;
  *(undefined4 *)(param_1 + 0xd6) = 0x80;
  *(undefined1 *)((long)param_1 + 0x584) = 0;
  param_1[0xaf] = (undefined1 *)((long)param_1 + 0x584);
  param_1[0x9c] = (long)param_1 + 0x4ec;
  *(undefined1 *)((long)param_1 + 0x61c) = 0;
  param_1[0xc2] = (undefined1 *)((long)param_1 + 0x61c);
  *(undefined1 *)((long)param_1 + 0x733) = 0;
  *(undefined1 *)((long)param_1 + 0x6b4) = 0;
  param_1[0xd5] = (undefined1 *)((long)param_1 + 0x6b4);
  *(undefined1 *)((long)param_1 + 0x74c) = 0;
  param_1[0xd4] = puVar2;
  *(undefined1 *)((long)param_1 + 0x87c) = 0;
  param_1[0x10e] = (undefined1 *)((long)param_1 + 0x87c);
  param_1[0xe8] = (long)param_1 + 0x74c;
  *(undefined4 *)(param_1 + 0xe9) = 0x80;
  *(undefined1 *)((long)param_1 + 0x7cb) = 0;
  *(undefined1 *)((long)param_1 + 0x914) = 0;
  *(undefined1 *)((long)param_1 + 0x7e4) = 0;
  param_1[0x121] = (undefined1 *)((long)param_1 + 0x914);
  param_1[0xfb] = (undefined1 *)((long)param_1 + 0x7e4);
  *(undefined1 *)((long)param_1 + 0x9ac) = 0;
  param_1[0x134] = (long)param_1 + 0x9ac;
  *(undefined1 *)((long)param_1 + 0xa44) = 0;
  param_1[0x147] = (long)param_1 + 0xa44;
  *(undefined1 *)((long)param_1 + 0xadc) = 0;
  param_1[0x15a] = (long)param_1 + 0xadc;
  *(undefined1 *)((long)param_1 + 0xb74) = 0;
  param_1[0x16d] = (long)param_1 + 0xb74;
  *(undefined1 *)((long)param_1 + 0xc0c) = 0;
  param_1[0x180] = (long)param_1 + 0xc0c;
  *(undefined1 *)((long)param_1 + 0xca4) = 0;
  param_1[0x193] = (long)param_1 + 0xca4;
  *(undefined1 *)((long)param_1 + 0xd3c) = 0;
  param_1[0x1a6] = (long)param_1 + 0xd3c;
  param_1[0x1b9] = (long)param_1 + 0xdd4;
  *(undefined1 *)((long)param_1 + 0xdd4) = 0;
  *(undefined1 *)((long)param_1 + 0xe6c) = 0;
  param_1[0x1cc] = (long)param_1 + 0xe6c;
  *(undefined1 *)((long)param_1 + 0xf04) = 0;
  pvVar11 = (void *)((long)param_1 + 0xf9c);
  lVar5 = *plVar7;
  param_1[0xe7] = puVar2;
  *(undefined4 *)(param_1 + 0xfc) = 0x80;
  *(undefined1 *)((long)param_1 + 0x863) = 0;
  param_1[0xfa] = puVar2;
  *(undefined4 *)(param_1 + 0x10f) = 0x80;
  *(undefined1 *)((long)param_1 + 0x8fb) = 0;
  param_1[0x10d] = puVar2;
  *(undefined4 *)(param_1 + 0x122) = 0x80;
  *(undefined1 *)((long)param_1 + 0x993) = 0;
  param_1[0x120] = puVar2;
  *(undefined4 *)(param_1 + 0x135) = 0x80;
  *(undefined1 *)((long)param_1 + 0xa2b) = 0;
  param_1[0x133] = puVar2;
  *(undefined4 *)(param_1 + 0x148) = 0x80;
  *(undefined1 *)((long)param_1 + 0xac3) = 0;
  param_1[0x146] = puVar2;
  *(undefined4 *)(param_1 + 0x15b) = 0x80;
  *(undefined1 *)((long)param_1 + 0xb5b) = 0;
  param_1[0x159] = puVar2;
  *(undefined4 *)(param_1 + 0x16e) = 0x80;
  *(undefined1 *)((long)param_1 + 0xbf3) = 0;
  param_1[0x16c] = puVar2;
  *(undefined4 *)(param_1 + 0x181) = 0x80;
  *(undefined1 *)((long)param_1 + 0xc8b) = 0;
  param_1[0x17f] = puVar2;
  *(undefined4 *)(param_1 + 0x194) = 0x80;
  *(undefined1 *)((long)param_1 + 0xd23) = 0;
  param_1[0x192] = puVar2;
  *(undefined4 *)(param_1 + 0x1a7) = 0x80;
  *(undefined1 *)((long)param_1 + 0xdbb) = 0;
  param_1[0x1a5] = puVar2;
  *(undefined4 *)(param_1 + 0x1ba) = 0x80;
  *(undefined1 *)((long)param_1 + 0xe53) = 0;
  param_1[0x1b8] = puVar2;
  *(undefined4 *)(param_1 + 0x1cd) = 0x80;
  *(undefined1 *)((long)param_1 + 0xeeb) = 0;
  param_1[0x1cb] = puVar2;
  param_1[0x1df] = (long)param_1 + 0xf04;
  *(undefined4 *)(param_1 + 0x1e0) = 0x80;
  *(undefined1 *)((long)param_1 + 0xf83) = 0;
  param_1[0x1de] = puVar2;
  param_1[0x1f2] = pvVar11;
  *(undefined4 *)(param_1 + 499) = 0x80;
  param_1[0x1f1] = puVar8;
  (**(code **)(lVar5 + 0x18))(plVar7);
  pvVar12 = (void *)plVar7[1];
  if (pvVar11 != pvVar12) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(plVar7[1] + lVar5) == '\0') goto LAB_00739df0;
      lVar6 = plVar7[1] + lVar5;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_00739df0;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_00739df0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00739df0:
    iVar4 = (int)lVar5;
    if (*(int *)(param_1 + 499) <= (int)lVar5) {
      iVar4 = *(int *)(param_1 + 499) + -1;
    }
    memcpy(pvVar11,pvVar12,(long)iVar4);
    *(undefined1 *)((long)pvVar11 + (long)iVar4) = 0;
  }
  pcVar1 = (char *)((long)param_1 + 0x1034);
  param_1[0x1f1] = puVar2;
  *(undefined1 *)((long)param_1 + 0x10b3) = 0;
  param_1[0x205] = pcVar1;
  *(undefined4 *)(param_1 + 0x206) = 0x80;
  uVar3 = s_ParkDefault_040bf540._0_8_;
  if (pcVar1 != "ParkDefault") {
    *(undefined4 *)((long)param_1 + 0x103b) = 0x746c7561;
    *(undefined1 *)((long)param_1 + 0x103f) = 0;
    *(undefined8 *)pcVar1 = uVar3;
  }
  puVar8 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x217) = 0;
  param_1[0x22c] = 0;
  *(undefined4 *)(param_1 + 0x22d) = 0;
  param_1[0x22e] = 0;
  *(undefined4 *)(param_1 + 0x22f) = 0;
  param_1[0x230] = 0;
  *(undefined4 *)(param_1 + 0x231) = 0;
  param_1[0x232] = 0;
  param_1[0x218] = 0;
  param_1[0x219] = 0;
  param_1[0x21a] = 0;
  *(undefined4 *)(param_1 + 0x21b) = 0;
  param_1[0x226] = 0;
  param_1[0x227] = 0;
  param_1[0x204] = puVar8 + 0x10;
  *(undefined2 *)(param_1 + 0x228) = 0;
  param_1[0x229] = 0;
  param_1[0x22a] = 0;
  *(undefined4 *)(param_1 + 0x22b) = 0;
  FUN_016100c4(param_1 + 0x22c,0);
  param_1[0x237] = 0;
  *(undefined4 *)(param_1 + 0x234) = 0x1105;
  *(undefined4 *)((long)param_1 + 0x11bf) = 0;
  puVar8 = (undefined *)param_1[0xc];
  *(undefined8 *)((long)param_1 + 0x11c4) = 0x7f7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x11cc) = 0xff7fffff7f7fffff;
  *(undefined8 *)((long)param_1 + 0x11d4) = 0xff7fffffff7fffff;
  param_1[0x233] = 0;
  param_1[0x235] = 0;
  param_1[0x236] = 0;
  *(byte *)((long)param_1 + 0x11dd) = param_3 & 1;
  param_1[0x23c] = 0;
  *(undefined4 *)(param_1 + 0x23d) = 0;
  *(byte *)((long)param_1 + 0x11dc) = param_2 & 1;
  *(byte *)((long)param_1 + 0x11de) = param_4 & 1;
  *(undefined1 *)((long)param_1 + 0x11ec) = 0xff;
  if (puVar8 != &DAT_040fe376) {
    iVar4 = 4;
    if (*(int *)(param_1 + 0xd) < 5) {
      iVar4 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(puVar8,&DAT_040fe376,(long)iVar4);
    puVar8[iVar4] = 0;
  }
  local_65 = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 1;
  *(uint *)(param_1 + 0x2f) = *(uint *)(param_1 + 0x2f) | 4;
  puVar8 = PTR_DAT_04bb2e90;
  local_e8 = 0x80;
  local_f8 = PTR_DAT_04bb2e90 + 0x10;
  local_f0 = local_e4;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  puVar10 = (undefined1 *)plVar7[1];
  if (local_e4 != puVar10) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(plVar7[1] + lVar5) == '\0') goto LAB_0073a020;
      lVar6 = plVar7[1] + lVar5;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0073a020;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0073a020;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0073a020:
    iVar4 = (int)lVar5;
    if (local_e8 <= (int)lVar5) {
      iVar4 = local_e8 + -1;
    }
    memcpy(local_e4,puVar10,(long)iVar4);
    local_e4[iVar4] = 0;
  }
  lVar5 = 0;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  do {
    puVar9 = (undefined1 *)param_1[lVar5 * 0x13 + 99];
    (**(code **)(local_f8 + 0x18))(&local_f8);
    puVar10 = local_f0;
    if (puVar9 != local_f0) {
      (**(code **)(local_f8 + 0x18))(&local_f8);
      lVar6 = 0;
      do {
        if (local_f0[lVar6] == '\0') goto LAB_0073a068;
        if (local_f0[lVar6 + 1] == '\0') {
          lVar6 = lVar6 + 1;
          goto LAB_0073a068;
        }
        if (local_f0[lVar6 + 2] == '\0') {
          lVar6 = lVar6 + 2;
          goto LAB_0073a068;
        }
        lVar6 = lVar6 + 3;
      } while (lVar6 != 0x80001);
      lVar6 = 0;
LAB_0073a068:
      iVar4 = (int)lVar6;
      if (*(int *)(param_1 + lVar5 * 0x13 + 100) <= (int)lVar6) {
        iVar4 = *(int *)(param_1 + lVar5 * 0x13 + 100) + -1;
      }
      memcpy(puVar9,puVar10,(long)iVar4);
      puVar9[iVar4] = 0;
    }
    lVar5 = lVar5 + 1;
  } while (lVar5 != 0x12);
  lVar5 = *plVar7;
  local_65 = 0;
  *(undefined8 *)((long)param_1 + 0x10dc) = 0;
  *(undefined8 *)((long)param_1 + 0x1114) = 0;
  *(undefined8 *)((long)param_1 + 0x111c) = 0;
  *(undefined8 *)((long)param_1 + 0x1104) = 0;
  *(undefined8 *)((long)param_1 + 0x110c) = 0;
  *(undefined8 *)((long)param_1 + 0x10f4) = 0;
  *(undefined8 *)((long)param_1 + 0x10fc) = 0;
  *(undefined8 *)((long)param_1 + 0x10e4) = 0;
  *(undefined8 *)((long)param_1 + 0x10ec) = 0;
  local_e8 = 0x80;
  local_f8 = puVar8 + 0x10;
  local_f0 = local_e4;
  (**(code **)(lVar5 + 0x18))(plVar7);
  puVar10 = (undefined1 *)plVar7[1];
  if (local_e4 != puVar10) {
    (**(code **)(*plVar7 + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(plVar7[1] + lVar5) == '\0') goto LAB_0073a1c0;
      lVar6 = plVar7[1] + lVar5;
      if (*(char *)(lVar6 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0073a1c0;
      }
      if (*(char *)(lVar6 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0073a1c0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0073a1c0:
    iVar4 = (int)lVar5;
    if (local_e8 <= (int)lVar5) {
      iVar4 = local_e8 + -1;
    }
    memcpy(local_e4,puVar10,(long)iVar4);
    local_e4[iVar4] = 0;
  }
  puVar10 = local_f0;
  puVar8 = PTR_DAT_04bb2d88;
  local_f8 = PTR_DAT_04bb2d88 + 0x10;
  puVar9 = (undefined1 *)param_1[0x1b9];
  local_f0[(long)local_e8 + -1] = 0;
  if (puVar9 != local_f0) {
    (**(code **)(puVar8 + 0x28))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == '\0') goto LAB_0073a26c;
      if (local_f0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0073a26c;
      }
      if (local_f0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0073a26c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0073a26c:
    iVar4 = (int)lVar5;
    if (*(int *)(param_1 + 0x1ba) <= (int)lVar5) {
      iVar4 = *(int *)(param_1 + 0x1ba) + -1;
    }
    memcpy(puVar9,puVar10,(long)iVar4);
    puVar9[iVar4] = 0;
  }
  puVar9 = (undefined1 *)param_1[0x1cc];
  (**(code **)(local_f8 + 0x18))(&local_f8);
  puVar10 = local_f0;
  if (puVar9 != local_f0) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == '\0') goto LAB_0073a30c;
      if (local_f0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0073a30c;
      }
      if (local_f0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0073a30c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0073a30c:
    iVar4 = (int)lVar5;
    if (*(int *)(param_1 + 0x1cd) <= (int)lVar5) {
      iVar4 = *(int *)(param_1 + 0x1cd) + -1;
    }
    memcpy(puVar9,puVar10,(long)iVar4);
    puVar9[iVar4] = 0;
  }
  puVar9 = (undefined1 *)param_1[0x1df];
  (**(code **)(local_f8 + 0x18))(&local_f8);
  puVar10 = local_f0;
  if (puVar9 != local_f0) {
    (**(code **)(local_f8 + 0x18))(&local_f8);
    lVar5 = 0;
    do {
      if (local_f0[lVar5] == '\0') goto LAB_0073a3ac;
      if (local_f0[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0073a3ac;
      }
      if (local_f0[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0073a3ac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0073a3ac:
    iVar4 = (int)lVar5;
    if (*(int *)(param_1 + 0x1e0) <= (int)lVar5) {
      iVar4 = *(int *)(param_1 + 0x1e0) + -1;
    }
    memcpy(puVar9,puVar10,(long)iVar4);
    puVar9[iVar4] = 0;
  }
  *(undefined4 *)((long)param_1 + 0x112c) = 0;
  *(undefined8 *)((long)param_1 + 0x1124) = 0;
  return;
}

