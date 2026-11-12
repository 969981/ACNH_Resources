
void FUN_009c04f0(long *param_1,long *param_2,long *param_3,void *param_4,void *param_5)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  int iVar9;
  long lVar10;
  long *plVar11;
  long *plVar12;
  undefined4 uVar13;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined8 *puStack_90;
  uint local_88;
  undefined4 local_74;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar2 = PTR_DAT_04bb60a0;
  lVar10 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar10;
  lVar10 = param_2[6];
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar10;
  *param_1 = (long)(puVar2 + 0x10);
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  *param_1 = (long)&PTR_FUN_0492c9d0;
  *(undefined4 *)(param_1 + 8) = 0x40;
  pvVar1 = (void *)((long)param_1 + 0x44);
  puVar2 = PTR_DAT_04bb2f70 + 0x10;
  param_1[6] = (long)puVar2;
  param_1[7] = (long)pvVar1;
  if (pvVar1 != param_4) {
    lVar10 = 0;
    do {
      if (*(char *)((long)param_4 + lVar10) == '\0') goto LAB_009c060c;
      if (*(char *)((long)param_4 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_009c060c;
      }
      if (*(char *)((long)param_4 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_009c060c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_009c060c:
    iVar9 = (int)lVar10;
    if (0x3e < iVar9) {
      iVar9 = 0x3f;
    }
    memcpy(pvVar1,param_4,(long)iVar9);
    *(undefined1 *)((long)pvVar1 + (long)iVar9) = 0;
  }
  *(undefined4 *)(param_1 + 0x13) = 0x40;
  puVar7 = PTR_DAT_04bb2bc0;
  pvVar1 = (void *)((long)param_1 + 0x9c);
  *(undefined1 *)((long)param_1 + 0xdb) = 0;
  param_1[0x11] = (long)puVar2;
  param_1[0x12] = (long)pvVar1;
  param_1[6] = (long)(puVar7 + 0x10);
  if (pvVar1 != param_5) {
    lVar10 = 0;
    do {
      if (*(char *)((long)param_5 + lVar10) == '\0') goto LAB_009c069c;
      if (*(char *)((long)param_5 + lVar10 + 1) == '\0') {
        lVar10 = lVar10 + 1;
        goto LAB_009c069c;
      }
      if (*(char *)((long)param_5 + lVar10 + 2) == '\0') {
        lVar10 = lVar10 + 2;
        goto LAB_009c069c;
      }
      lVar10 = lVar10 + 3;
    } while (lVar10 != 0x80001);
    lVar10 = 0;
LAB_009c069c:
    iVar9 = (int)lVar10;
    if (0x3e < iVar9) {
      iVar9 = 0x3f;
    }
    memcpy(pvVar1,param_5,(long)iVar9);
    *(undefined1 *)((long)pvVar1 + (long)iVar9) = 0;
  }
  puVar2 = PTR_DAT_04bb2020;
  param_1[0x11] = (long)(puVar7 + 0x10);
  local_88 = 0;
  local_74 = 0;
  local_b8 = puVar2 + 0x10;
  local_b0 = "mOffsetFrame";
  puStack_90 = &DAT_0407ebb1;
  puStack_a0 = &DAT_040f9183;
  local_a8 = local_b8;
  local_98 = local_b8;
  FUN_009c2c80(param_1 + 0x1c,&local_b8,&local_74,param_1);
  param_1[0x61] = 0;
  param_1[0x60] = (long)"mDeepBreathingSamplingFrameNum";
  param_1[0x62] = 0;
  puVar7 = PTR_DAT_04bb3380;
  *(undefined4 *)(param_1 + 99) = 0;
  param_1[100] = 0;
  param_1[0x5f] = (long)(puVar7 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x5f);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x5f] + 0xf0))(param_1 + 0x5f);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 99) >> 7 & 1) == 0) {
    param_1[100] = 0;
    *(undefined4 *)(param_1 + 100) = 0x14;
  }
  param_1[0x67] = 0;
  *(uint *)(param_1 + 99) = *(uint *)(param_1 + 99) & 0xfeffffff;
  param_1[0x66] = (long)"mDeepBreathingRotateAccYThreshold";
  param_1[0x68] = 0;
  puVar5 = PTR_DAT_04bb31d0;
  *(undefined4 *)(param_1 + 0x69) = 0;
  param_1[0x6a] = 0;
  param_1[0x65] = (long)(puVar5 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x65);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 0x69) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x65] + 0xf0))(param_1 + 0x65);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x69);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x6a] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 0x6a) = uVar13;
  }
  param_1[0x6d] = 0;
  *(uint *)(param_1 + 0x69) = uVar6 & 0xfeffffff;
  param_1[0x6c] = (long)"mDeepBreathingRotateAccYLengthSumThreshold";
  param_1[0x6e] = 0;
  *(undefined4 *)(param_1 + 0x6f) = 0;
  param_1[0x6b] = (long)(puVar5 + 0x10);
  param_1[0x70] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x6b);
  uVar13 = 0x42700000;
  if ((*(uint *)(param_1 + 0x6f) & 0x800) != 0) {
    uVar13 = 0x3f860a92;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x6b] + 0xf0))(param_1 + 0x6b);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x6f);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x70] = 0;
    uVar13 = 0x42700000;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3f860a92;
    }
    *(undefined4 *)(param_1 + 0x70) = uVar13;
  }
  local_b8 = puVar2 + 0x10;
  local_88 = 0;
  *(uint *)(param_1 + 0x6f) = uVar6 & 0xfeffffff;
  local_b0 = "mDeepBreathingRotateAccYWavePromiseFrame";
  puStack_a0 = &DAT_040a5b1c;
  local_74 = 1;
  puStack_90 = &DAT_0407ebb1;
  local_a8 = local_b8;
  local_98 = local_b8;
  FUN_009c2eb0(param_1 + 0x71,&local_b8,&local_74,param_1);
  param_1[0x93] = 0;
  param_1[0x92] = (long)"mFirstLookFrameMin";
  param_1[0x94] = 0;
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x91] = (long)(puVar7 + 0x10);
  param_1[0x96] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x91);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x91] + 0xf0))(param_1 + 0x91);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0x95) >> 7 & 1) == 0) {
    param_1[0x96] = 0;
    *(undefined4 *)(param_1 + 0x96) = 0x14;
  }
  param_1[0x99] = 0;
  *(uint *)(param_1 + 0x95) = *(uint *)(param_1 + 0x95) & 0xfeffffff;
  param_1[0x98] = (long)"mFirstLookFrameMax";
  param_1[0x9a] = 0;
  *(undefined4 *)(param_1 + 0x9b) = 0;
  param_1[0x97] = (long)(puVar7 + 0x10);
  param_1[0x9c] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x97);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x97] + 0xf0))(param_1 + 0x97);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0x9b) >> 7 & 1) == 0) {
    param_1[0x9c] = 0;
    *(undefined4 *)(param_1 + 0x9c) = 0x14;
  }
  param_1[0x9f] = 0;
  *(uint *)(param_1 + 0x9b) = *(uint *)(param_1 + 0x9b) & 0xfeffffff;
  param_1[0x9e] = (long)"mSecondLookFrameMin";
  param_1[0xa0] = 0;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  param_1[0x9d] = (long)(puVar7 + 0x10);
  param_1[0xa2] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x9d);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x9d] + 0xf0))(param_1 + 0x9d);
  *puVar8 = 0x19;
  if ((*(uint *)(param_1 + 0xa1) >> 7 & 1) == 0) {
    param_1[0xa2] = 0;
    *(undefined4 *)(param_1 + 0xa2) = 0x19;
  }
  param_1[0xa5] = 0;
  *(uint *)(param_1 + 0xa1) = *(uint *)(param_1 + 0xa1) & 0xfeffffff;
  param_1[0xa4] = (long)"mSecondLookFrameMax";
  param_1[0xa6] = 0;
  *(undefined4 *)(param_1 + 0xa7) = 0;
  param_1[0xa3] = (long)(puVar7 + 0x10);
  param_1[0xa8] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa3);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa3] + 0xf0))(param_1 + 0xa3);
  *puVar8 = 0x19;
  if ((*(uint *)(param_1 + 0xa7) >> 7 & 1) == 0) {
    param_1[0xa8] = 0;
    *(undefined4 *)(param_1 + 0xa8) = 0x19;
  }
  param_1[0xab] = 0;
  *(uint *)(param_1 + 0xa7) = *(uint *)(param_1 + 0xa7) & 0xfeffffff;
  param_1[0xaa] = (long)"mUpperSideSamplingFrameNum";
  param_1[0xac] = 0;
  *(undefined4 *)(param_1 + 0xad) = 0;
  param_1[0xa9] = (long)(puVar7 + 0x10);
  param_1[0xae] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xa9);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xa9] + 0xf0))(param_1 + 0xa9);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0xad) >> 7 & 1) == 0) {
    param_1[0xae] = 0;
    *(undefined4 *)(param_1 + 0xae) = 0x14;
  }
  param_1[0xb1] = 0;
  *(uint *)(param_1 + 0xad) = *(uint *)(param_1 + 0xad) & 0xfeffffff;
  param_1[0xb0] = (long)"mUpperSideRotateAccYThreshold";
  param_1[0xb2] = 0;
  *(undefined4 *)(param_1 + 0xb3) = 0;
  param_1[0xaf] = (long)(puVar5 + 0x10);
  param_1[0xb4] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xaf);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 0xb3) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0xaf] + 0xf0))(param_1 + 0xaf);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0xb3);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0xb4] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 0xb4) = uVar13;
  }
  param_1[0xb7] = 0;
  *(uint *)(param_1 + 0xb3) = uVar6 & 0xfeffffff;
  param_1[0xb6] = (long)"mUpperSideRotateAccXThreshold";
  param_1[0xb8] = 0;
  *(undefined4 *)(param_1 + 0xb9) = 0;
  param_1[0xb5] = (long)(puVar5 + 0x10);
  param_1[0xba] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xb5);
  uVar13 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0xb9) & 0x800) != 0) {
    uVar13 = 0x3b64c388;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0xb5] + 0xf0))(param_1 + 0xb5);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0xb9);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0xba] = 0;
    uVar13 = 0x3e4ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0xba) = uVar13;
  }
  param_1[0xbd] = 0;
  *(uint *)(param_1 + 0xb9) = uVar6 & 0xfeffffff;
  param_1[0xbc] = (long)"mUpperSideRotateGyroXZThreshold";
  param_1[0xbe] = 0;
  *(undefined4 *)(param_1 + 0xbf) = 0;
  param_1[0xbb] = (long)(puVar5 + 0x10);
  param_1[0xc0] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0xbb);
  puVar8 = (undefined4 *)(**(code **)(param_1[0xbb] + 0xf0))(param_1 + 0xbb);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0xbf) >> 7 & 1) == 0) {
    param_1[0xc0] = 0;
    *(undefined4 *)(param_1 + 0xc0) = 0;
  }
  puVar3 = puVar2 + 0x10;
  local_88 = 0;
  *(uint *)(param_1 + 0xbf) = *(uint *)(param_1 + 0xbf) & 0xfeffffff;
  local_b0 = "mUpperSideRotateAccYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040a0603;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0xc1,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mUpperSideRotateAccXWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040aafac;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0xe1,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mUpperSideRotateGyroXZWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040c46ec;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x101,&local_b8,&local_74,param_1);
  param_1[0x123] = 0;
  param_1[0x122] = (long)"mUpperTwistSamplingFrameNum";
  param_1[0x121] = (long)(puVar7 + 0x10);
  param_1[0x124] = 0;
  *(undefined4 *)(param_1 + 0x125) = 0;
  param_1[0x126] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x121);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x121] + 0xf0))(param_1 + 0x121);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0x125) >> 7 & 1) == 0) {
    param_1[0x126] = 0;
    *(undefined4 *)(param_1 + 0x126) = 0x14;
  }
  param_1[0x129] = 0;
  *(uint *)(param_1 + 0x125) = *(uint *)(param_1 + 0x125) & 0xfeffffff;
  param_1[0x128] = (long)"mUpperTwistRotateAccYThreshold";
  param_1[0x12a] = 0;
  *(undefined4 *)(param_1 + 299) = 0;
  param_1[0x127] = (long)(puVar5 + 0x10);
  param_1[300] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x127);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 299) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x127] + 0xf0))(param_1 + 0x127);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 299);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[300] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 300) = uVar13;
  }
  param_1[0x12f] = 0;
  *(uint *)(param_1 + 299) = uVar6 & 0xfeffffff;
  param_1[0x12e] = (long)"mUpperTwistRotateAccXThreshold";
  param_1[0x130] = 0;
  *(undefined4 *)(param_1 + 0x131) = 0;
  param_1[0x12d] = (long)(puVar5 + 0x10);
  param_1[0x132] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x12d);
  uVar13 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x131) & 0x800) != 0) {
    uVar13 = 0x3b64c388;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x12d] + 0xf0))(param_1 + 0x12d);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x131);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x132] = 0;
    uVar13 = 0x3e4ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x132) = uVar13;
  }
  param_1[0x135] = 0;
  *(uint *)(param_1 + 0x131) = uVar6 & 0xfeffffff;
  param_1[0x134] = (long)"mUpperTwistGyroLengthThreshold";
  param_1[0x136] = 0;
  *(undefined4 *)(param_1 + 0x137) = 0;
  param_1[0x133] = (long)(puVar5 + 0x10);
  param_1[0x138] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x133);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x137) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x133] + 0xf0))(param_1 + 0x133);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x137);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x138] = 0;
    uVar13 = 0x3f000000;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x138) = uVar13;
  }
  param_1[0x13b] = 0;
  *(uint *)(param_1 + 0x137) = uVar6 & 0xfeffffff;
  param_1[0x13a] = (long)"mUpperTwistGyroYMinThreshold";
  param_1[0x13c] = 0;
  *(undefined4 *)(param_1 + 0x13d) = 0;
  param_1[0x139] = (long)(puVar5 + 0x10);
  param_1[0x13e] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x139);
  uVar13 = 0xbf4ccccd;
  if ((*(uint *)(param_1 + 0x13d) & 0x800) != 0) {
    uVar13 = 0xbc64c388;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x139] + 0xf0))(param_1 + 0x139);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x13d);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x13e] = 0;
    uVar13 = 0xbf4ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc64c388;
    }
    *(undefined4 *)(param_1 + 0x13e) = uVar13;
  }
  param_1[0x141] = 0;
  *(uint *)(param_1 + 0x13d) = uVar6 & 0xfeffffff;
  param_1[0x140] = (long)"mUpperTwistGyroYMaxThreshold";
  param_1[0x142] = 0;
  *(undefined4 *)(param_1 + 0x143) = 0;
  param_1[0x13f] = (long)(puVar5 + 0x10);
  param_1[0x144] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x13f);
  uVar13 = 0x3fa00000;
  if ((*(uint *)(param_1 + 0x143) & 0x800) != 0) {
    uVar13 = 0x3cb2b8c2;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x13f] + 0xf0))(param_1 + 0x13f);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x143);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x144] = 0;
    uVar13 = 0x3fa00000;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3cb2b8c2;
    }
    *(undefined4 *)(param_1 + 0x144) = uVar13;
  }
  puVar3 = puVar2 + 0x10;
  local_88 = 0;
  *(uint *)(param_1 + 0x143) = uVar6 & 0xfeffffff;
  local_b0 = "mUpperTwistRotateAccYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040d99c5;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x145,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mUpperTwistRotateAccXWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040bf886;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x165,&local_b8,&local_74,param_1);
  param_1[0x187] = 0;
  param_1[0x186] = (long)"mUpperTwistRotateGyroYWavePromiseFrame";
  local_b0 = "mUpperTwistRotateGyroYWavePromiseFrame";
  plVar12 = param_1 + 0x185;
  puStack_a0 = &DAT_040fe6a4;
  param_1[0x188] = 0;
  *(undefined4 *)(param_1 + 0x189) = 0;
  puStack_90 = &DAT_0407ebb1;
  puVar4 = PTR_DAT_04bb60a0 + 0x10;
  param_1[0x18a] = 0;
  param_1[0x185] = (long)puVar4;
  local_88 = 0;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  (**(code **)(*param_1 + 0x140))(param_1,plVar12);
  plVar11 = param_1 + 400;
  param_1[0x18d] = 0;
  param_1[0x196] = (long)(param_1 + 0x19c);
  param_1[0x19c] = (long)(param_1 + 0x1a2);
  param_1[0x18c] = 0;
  param_1[0x18b] = 0;
  param_1[0x18e] = (long)plVar11;
  param_1[400] = (long)(param_1 + 0x196);
  param_1[0x1a2] = 0;
  param_1[399] = (long)plVar11;
  if (param_1 + 0x1a8 == (long *)0x0) {
    param_1[0x185] = (long)&PTR_LAB_0492d3e0;
    plVar11 = (long *)0x0;
  }
  else {
    param_1[0x18d] = (long)(param_1 + 0x1a8);
    *(undefined4 *)((long)param_1 + 0xc64) = 4;
    param_1[0x185] = (long)&PTR_LAB_0492d3e0;
    param_1[0x18e] = (long)(param_1 + 0x196);
    param_1[400] = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    param_1[0x192] = 0;
    param_1[0x193] = 0;
    param_1[0x195] = 0;
    *(undefined4 *)((long)param_1 + 0xca4) = 1;
    param_1[0x191] = (long)local_b0;
    if ((local_88 >> 7 & 1) == 0) {
      *(undefined4 *)(param_1 + 0x195) = 1;
    }
    param_1[400] = (long)&PTR_LAB_0492d6e0;
    *(uint *)(param_1 + 0x194) = local_88 & 0xfeffffff;
    if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
      *(long **)(param_1[0x18d] + (long)(int)param_1[0x18c] * 8) = plVar11;
      *(int *)(param_1 + 0x18c) = (int)param_1[0x18c] + 1;
    }
  }
  (**(code **)(*plVar11 + 0x38))(plVar11,plVar12);
  *(uint *)(plVar11 + 4) = *(uint *)(plVar11 + 4) & 0xfffffffc;
  if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
    plVar11 = (long *)param_1[0x18e];
    if (plVar11 != (long *)0x0) {
      param_1[0x18e] = *plVar11;
    }
    *plVar11 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    plVar11[3] = 0;
    plVar11[1] = (long)local_b0;
    plVar11[2] = 0;
    plVar11[5] = 0;
    *(undefined4 *)((long)plVar11 + 0x24) = 1;
    if ((local_88 >> 7 & 1) == 0) {
      *(undefined4 *)(plVar11 + 5) = 1;
    }
    *plVar11 = (long)&PTR_LAB_0492d6e0;
    *(uint *)(plVar11 + 4) = local_88 & 0xfeffffff;
    if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
      *(long **)(param_1[0x18d] + (long)(int)param_1[0x18c] * 8) = plVar11;
      *(int *)(param_1 + 0x18c) = (int)param_1[0x18c] + 1;
    }
  }
  else {
    plVar11 = (long *)0x0;
  }
  (**(code **)(*plVar11 + 0x38))(plVar11,plVar12);
  *(uint *)(plVar11 + 4) = *(uint *)(plVar11 + 4) & 0xfffffffc;
  if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
    plVar11 = (long *)param_1[0x18e];
    if (plVar11 != (long *)0x0) {
      param_1[0x18e] = *plVar11;
    }
    *plVar11 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    plVar11[3] = 0;
    plVar11[1] = (long)local_b0;
    plVar11[2] = 0;
    plVar11[5] = 0;
    *(undefined4 *)((long)plVar11 + 0x24) = 1;
    if ((local_88 >> 7 & 1) == 0) {
      *(undefined4 *)(plVar11 + 5) = 1;
    }
    *plVar11 = (long)&PTR_LAB_0492d6e0;
    *(uint *)(plVar11 + 4) = local_88 & 0xfeffffff;
    if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
      *(long **)(param_1[0x18d] + (long)(int)param_1[0x18c] * 8) = plVar11;
      *(int *)(param_1 + 0x18c) = (int)param_1[0x18c] + 1;
    }
  }
  else {
    plVar11 = (long *)0x0;
  }
  (**(code **)(*plVar11 + 0x38))(plVar11,plVar12);
  *(uint *)(plVar11 + 4) = *(uint *)(plVar11 + 4) & 0xfffffffc;
  if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
    plVar11 = (long *)param_1[0x18e];
    if (plVar11 != (long *)0x0) {
      param_1[0x18e] = *plVar11;
    }
    *plVar11 = (long)(PTR_DAT_04bb3050 + 0x10);
    (**(code **)(local_b8 + 0x18))(&local_b8);
    plVar11[3] = 0;
    plVar11[1] = (long)local_b0;
    plVar11[2] = 0;
    plVar11[5] = 0;
    *(undefined4 *)((long)plVar11 + 0x24) = 1;
    if ((local_88 >> 7 & 1) == 0) {
      *(undefined4 *)(plVar11 + 5) = 1;
    }
    *plVar11 = (long)&PTR_LAB_0492d6e0;
    *(uint *)(plVar11 + 4) = local_88 & 0xfeffffff;
    if ((int)param_1[0x18c] < *(int *)((long)param_1 + 0xc64)) {
      *(long **)(param_1[0x18d] + (long)(int)param_1[0x18c] * 8) = plVar11;
      *(int *)(param_1 + 0x18c) = (int)param_1[0x18c] + 1;
    }
  }
  else {
    plVar11 = (long *)0x0;
  }
  (**(code **)(*plVar11 + 0x38))(plVar11,plVar12);
  *(uint *)(plVar11 + 4) = *(uint *)(plVar11 + 4) & 0xfffffffc;
  param_1[0x1ae] = 0;
  param_1[0x1af] = 0;
  *(undefined4 *)(param_1 + 0x1b0) = 0;
  param_1[0x1b1] = 0;
  param_1[0x1ad] = (long)"mArmRollFrontSamplingFrameNum";
  param_1[0x1ac] = (long)(puVar7 + 0x10);
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1ac);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x1ac] + 0xf0))(param_1 + 0x1ac);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0x1b0) >> 7 & 1) == 0) {
    param_1[0x1b1] = 0;
    *(undefined4 *)(param_1 + 0x1b1) = 0x14;
  }
  param_1[0x1b4] = 0;
  *(uint *)(param_1 + 0x1b0) = *(uint *)(param_1 + 0x1b0) & 0xfeffffff;
  param_1[0x1b3] = (long)"mArmRollFrontRotateAccYThreshold";
  param_1[0x1b5] = 0;
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  param_1[0x1b2] = (long)(puVar5 + 0x10);
  param_1[0x1b7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b2);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 0x1b6) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x1b2] + 0xf0))(param_1 + 0x1b2);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x1b6);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x1b7] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 0x1b7) = uVar13;
  }
  param_1[0x1ba] = 0;
  *(uint *)(param_1 + 0x1b6) = uVar6 & 0xfeffffff;
  param_1[0x1b9] = (long)"mArmRollFrontRotateAccXThreshold";
  param_1[0x1bb] = 0;
  *(undefined4 *)(param_1 + 0x1bc) = 0;
  param_1[0x1b8] = (long)(puVar5 + 0x10);
  param_1[0x1bd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1b8);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 0x1bc) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x1b8] + 0xf0))(param_1 + 0x1b8);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x1bc);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x1bd] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 0x1bd) = uVar13;
  }
  param_1[0x1c0] = 0;
  *(uint *)(param_1 + 0x1bc) = uVar6 & 0xfeffffff;
  param_1[0x1bf] = (long)"mArmRollFrontRotateGyroYThreshold";
  param_1[0x1c1] = 0;
  *(undefined4 *)(param_1 + 0x1c2) = 0;
  param_1[0x1be] = (long)(puVar5 + 0x10);
  param_1[0x1c3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1be);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x1be] + 0xf0))(param_1 + 0x1be);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x1c2) >> 7 & 1) == 0) {
    param_1[0x1c3] = 0;
    *(undefined4 *)(param_1 + 0x1c3) = 0;
  }
  param_1[0x1c6] = 0;
  *(uint *)(param_1 + 0x1c2) = *(uint *)(param_1 + 0x1c2) & 0xfeffffff;
  param_1[0x1c5] = (long)"mArmRollFrontRotateGyroXZThreshold";
  param_1[0x1c7] = 0;
  *(undefined4 *)(param_1 + 0x1c8) = 0;
  param_1[0x1c4] = (long)(puVar5 + 0x10);
  param_1[0x1c9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x1c4);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x1c4] + 0xf0))(param_1 + 0x1c4);
  *puVar8 = 0;
  if ((*(uint *)(param_1 + 0x1c8) >> 7 & 1) == 0) {
    param_1[0x1c9] = 0;
    *(undefined4 *)(param_1 + 0x1c9) = 0;
  }
  puVar3 = puVar2 + 0x10;
  local_88 = 0;
  *(uint *)(param_1 + 0x1c8) = *(uint *)(param_1 + 0x1c8) & 0xfeffffff;
  local_b0 = "mArmRollFrontRotateAccYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040aafff;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x1ca,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mArmRollFrontRotateAccXWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_0407be01;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x1ea,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mArmRollFrontRotateGyroYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_0405c078;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x20a,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mArmRollFrontRotateGyroXZWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040913f5;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x22a,&local_b8,&local_74,param_1);
  param_1[0x24c] = 0;
  param_1[0x24b] = (long)"mUpperRollSamplingFrameNum";
  param_1[0x24d] = 0;
  param_1[0x24a] = (long)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x24e) = 0;
  param_1[0x24f] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x24a);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x24a] + 0xf0))(param_1 + 0x24a);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0x24e) >> 7 & 1) == 0) {
    param_1[0x24f] = 0;
    *(undefined4 *)(param_1 + 0x24f) = 0x14;
  }
  param_1[0x252] = 0;
  *(uint *)(param_1 + 0x24e) = *(uint *)(param_1 + 0x24e) & 0xfeffffff;
  param_1[0x251] = (long)"mUpperRollRotateAccYThreshold";
  param_1[0x253] = 0;
  *(undefined4 *)(param_1 + 0x254) = 0;
  param_1[0x250] = (long)(puVar5 + 0x10);
  param_1[0x255] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x250);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 0x254) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x250] + 0xf0))(param_1 + 0x250);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x254);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x255] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 0x255) = uVar13;
  }
  *(uint *)(param_1 + 0x254) = uVar6 & 0xfeffffff;
  param_1[599] = (long)"mUpperRollRotateAccXThreshold";
  param_1[600] = 0;
  param_1[0x259] = 0;
  *(undefined4 *)(param_1 + 0x25a) = 0;
  param_1[0x256] = (long)(puVar5 + 0x10);
  param_1[0x25b] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x256);
  uVar13 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x25a) & 0x800) != 0) {
    uVar13 = 0x3b64c388;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x256] + 0xf0))(param_1 + 0x256);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x25a);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x25b] = 0;
    uVar13 = 0x3e4ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x25b) = uVar13;
  }
  param_1[0x25e] = 0;
  *(uint *)(param_1 + 0x25a) = uVar6 & 0xfeffffff;
  param_1[0x25d] = (long)"mUpperRollGyroLengthThreshold";
  param_1[0x25f] = 0;
  *(undefined4 *)(param_1 + 0x260) = 0;
  param_1[0x25c] = (long)(puVar5 + 0x10);
  param_1[0x261] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x25c);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x260) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x25c] + 0xf0))(param_1 + 0x25c);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x260);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x261] = 0;
    uVar13 = 0x3f000000;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x261) = uVar13;
  }
  puVar3 = puVar2 + 0x10;
  local_88 = 0;
  *(uint *)(param_1 + 0x260) = uVar6 & 0xfeffffff;
  local_b0 = "mUpperRollRotateAccYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_0409b4e1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x262,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mUpperRollRotateAccXWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040a0656;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x282,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mUpperRollGyroYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_0406c4fc;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar3;
  local_a8 = puVar3;
  local_98 = puVar3;
  FUN_009c2eb0(param_1 + 0x2a2,&local_b8,&local_74,param_1);
  param_1[0x2c4] = 0;
  param_1[0x2c3] = (long)"mChestUpSamplingFrameNum";
  param_1[0x2c5] = 0;
  param_1[0x2c2] = (long)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x2c6) = 0;
  param_1[0x2c7] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c2);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2c2] + 0xf0))(param_1 + 0x2c2);
  *puVar8 = 0x14;
  if ((*(uint *)(param_1 + 0x2c6) >> 7 & 1) == 0) {
    param_1[0x2c7] = 0;
    *(undefined4 *)(param_1 + 0x2c7) = 0x14;
  }
  param_1[0x2ca] = 0;
  *(uint *)(param_1 + 0x2c6) = *(uint *)(param_1 + 0x2c6) & 0xfeffffff;
  param_1[0x2c9] = (long)"mChestUpRotateAccYThreshold";
  param_1[0x2cb] = 0;
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  param_1[0x2c8] = (long)(puVar5 + 0x10);
  param_1[0x2cd] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2c8);
  uVar13 = 0xbf8ccccd;
  if ((*(uint *)(param_1 + 0x2cc) & 0x800) != 0) {
    uVar13 = 0xbc9d466e;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2c8] + 0xf0))(param_1 + 0x2c8);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x2cc);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2cd] = 0;
    uVar13 = 0xbf8ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0xbc9d466e;
    }
    *(undefined4 *)(param_1 + 0x2cd) = uVar13;
  }
  *(uint *)(param_1 + 0x2cc) = uVar6 & 0xfeffffff;
  param_1[0x2cf] = (long)"mChestUpRotateAccXThreshold";
  param_1[0x2d0] = 0;
  param_1[0x2d1] = 0;
  *(undefined4 *)(param_1 + 0x2d2) = 0;
  param_1[0x2ce] = (long)(puVar5 + 0x10);
  param_1[0x2d3] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2ce);
  uVar13 = 0x3e4ccccd;
  if ((*(uint *)(param_1 + 0x2d2) & 0x800) != 0) {
    uVar13 = 0x3b64c388;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2ce] + 0xf0))(param_1 + 0x2ce);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x2d2);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2d3] = 0;
    uVar13 = 0x3e4ccccd;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3b64c388;
    }
    *(undefined4 *)(param_1 + 0x2d3) = uVar13;
  }
  param_1[0x2d6] = 0;
  *(uint *)(param_1 + 0x2d2) = uVar6 & 0xfeffffff;
  param_1[0x2d5] = (long)"mChestUpGyroLengthThreshold";
  param_1[0x2d7] = 0;
  *(undefined4 *)(param_1 + 0x2d8) = 0;
  param_1[0x2d4] = (long)(puVar5 + 0x10);
  param_1[0x2d9] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x2d4);
  uVar13 = 0x3f000000;
  if ((*(uint *)(param_1 + 0x2d8) & 0x800) != 0) {
    uVar13 = 0x3c0efa35;
  }
  puVar8 = (undefined4 *)(**(code **)(param_1[0x2d4] + 0xf0))(param_1 + 0x2d4);
  *puVar8 = uVar13;
  uVar6 = *(uint *)(param_1 + 0x2d8);
  if ((uVar6 >> 7 & 1) == 0) {
    param_1[0x2d9] = 0;
    uVar13 = 0x3f000000;
    if ((uVar6 & 0x800) != 0) {
      uVar13 = 0x3c0efa35;
    }
    *(undefined4 *)(param_1 + 0x2d9) = uVar13;
  }
  puVar5 = puVar2 + 0x10;
  local_88 = 0;
  *(uint *)(param_1 + 0x2d8) = uVar6 & 0xfeffffff;
  local_b0 = "mChestUpRotateAccYWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040717c1;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  FUN_009c2eb0(param_1 + 0x2da,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mChestUpRotateAccXWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040ab049;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  FUN_009c2eb0(param_1 + 0x2fa,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mChestUpGyroLengthWavePromiseFrame";
  local_74 = 1;
  puStack_a0 = &DAT_040b5142;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  FUN_009c2eb0(param_1 + 0x31a,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mKeepAnimFinishFrame";
  puStack_a0 = &DAT_040e3f5c;
  puStack_90 = &DAT_0407ebb1;
  local_74 = 0x40a00000;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  FUN_009c2c80(param_1 + 0x33a,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mKeepAnimMaxRate";
  puStack_a0 = &DAT_040d44cf;
  puStack_90 = &DAT_0407ebb1;
  local_74 = 0x3fe66666;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  FUN_009c2c80(param_1 + 0x37d,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mPermitJudgeProgressRate";
  puStack_a0 = &DAT_04080f30;
  puStack_90 = &DAT_0407ebb1;
  local_74 = 0x3f400000;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  FUN_009c2c80(param_1 + 0x3c0,&local_b8,&local_74,param_1);
  param_1[0x404] = (long)"mOffsetFramePerActionNum";
  local_b0 = "mOffsetFramePerActionNum";
  puStack_a0 = &DAT_040961fe;
  param_1[0x405] = 0;
  param_1[0x406] = 0;
  *(undefined4 *)(param_1 + 0x407) = 0;
  puStack_90 = &DAT_0407ebb1;
  param_1[0x403] = (long)(PTR_DAT_04bb60a0 + 0x10);
  param_1[0x408] = 0;
  local_88 = 0;
  local_b8 = puVar5;
  local_a8 = puVar5;
  local_98 = puVar5;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x403);
  param_1[0x403] = (long)&PTR_LAB_0492d9b8;
  param_1[0x409] = 0;
  param_1[0x40e] = (long)(param_1 + 0x414);
  param_1[0x40a] = 0;
  param_1[0x414] = (long)(param_1 + 0x41a);
  param_1[0x40b] = 0;
  param_1[0x40c] = (long)(param_1 + 0x40e);
  param_1[0x4e0] = 0;
  param_1[0x41a] = (long)(param_1 + 0x420);
  param_1[0x40d] = (long)(param_1 + 0x40e);
  param_1[0x420] = (long)(param_1 + 0x426);
  param_1[0x426] = (long)(param_1 + 0x42c);
  param_1[0x42c] = (long)(param_1 + 0x432);
  param_1[0x432] = (long)(param_1 + 0x438);
  param_1[0x438] = (long)(param_1 + 0x43e);
  param_1[0x43e] = (long)(param_1 + 0x444);
  param_1[0x444] = (long)(param_1 + 0x44a);
  param_1[0x44a] = (long)(param_1 + 0x450);
  param_1[0x450] = (long)(param_1 + 0x456);
  param_1[0x456] = (long)(param_1 + 0x45c);
  param_1[0x45c] = (long)(param_1 + 0x462);
  param_1[0x462] = (long)(param_1 + 0x468);
  param_1[0x468] = (long)(param_1 + 0x46e);
  param_1[0x46e] = (long)(param_1 + 0x474);
  param_1[0x474] = (long)(param_1 + 0x47a);
  param_1[0x47a] = (long)(param_1 + 0x480);
  param_1[0x480] = (long)(param_1 + 0x486);
  param_1[0x486] = (long)(param_1 + 0x48c);
  param_1[0x48c] = (long)(param_1 + 0x492);
  param_1[0x492] = (long)(param_1 + 0x498);
  param_1[0x498] = (long)(param_1 + 0x49e);
  param_1[0x49e] = (long)(param_1 + 0x4a4);
  param_1[0x4a4] = (long)(param_1 + 0x4aa);
  param_1[0x4aa] = (long)(param_1 + 0x4b0);
  param_1[0x4b0] = (long)(param_1 + 0x4b6);
  param_1[0x4b6] = (long)(param_1 + 0x4bc);
  param_1[0x4bc] = (long)(param_1 + 0x4c2);
  param_1[0x4c2] = (long)(param_1 + 0x4c8);
  param_1[0x4c8] = (long)(param_1 + 0x4ce);
  param_1[0x4ce] = (long)(param_1 + 0x4d4);
  param_1[0x4d4] = (long)(param_1 + 0x4da);
  param_1[0x4da] = (long)(param_1 + 0x4e0);
  if (param_1 + 0x4e6 != (long *)0x0) {
    param_1[0x40b] = (long)(param_1 + 0x4e6);
    param_1[0x40a] = 0x2400000000;
  }
  param_1[0x403] = (long)&PTR_LAB_0492d838;
  iVar9 = 0x24;
  puVar5 = PTR_DAT_04bb3050 + 0x10;
  do {
    if ((int)param_1[0x40a] < *(int *)((long)param_1 + 0x2054)) {
      plVar12 = (long *)param_1[0x40c];
      if (plVar12 != (long *)0x0) {
        param_1[0x40c] = *plVar12;
      }
      *plVar12 = (long)puVar5;
      (**(code **)(local_b8 + 0x18))(&local_b8);
      plVar12[3] = 0;
      plVar12[1] = (long)local_b0;
      plVar12[2] = 0;
      plVar12[5] = 0;
      *(undefined4 *)((long)plVar12 + 0x24) = 0;
      if ((local_88 >> 7 & 1) == 0) {
        *(undefined4 *)(plVar12 + 5) = 0;
      }
      *plVar12 = (long)&PTR_LAB_0492db38;
      *(uint *)(plVar12 + 4) = local_88 & 0xfeffffff;
      if ((int)param_1[0x40a] < *(int *)((long)param_1 + 0x2054)) {
        *(long **)(param_1[0x40b] + (long)(int)param_1[0x40a] * 8) = plVar12;
        *(int *)(param_1 + 0x40a) = (int)param_1[0x40a] + 1;
      }
    }
    else {
      plVar12 = (long *)0x0;
    }
    (**(code **)(*plVar12 + 0x38))(plVar12,param_1 + 0x403);
    iVar9 = iVar9 + -1;
    *(uint *)(plVar12 + 4) = *(uint *)(plVar12 + 4) & 0xfffffffc;
  } while (iVar9 != 0);
  param_1[0x50c] = 0;
  local_b8 = puVar2 + 0x10;
  local_b0 = "mButtonPrevenanceCanInputFrame";
  puStack_a0 = &DAT_04067024;
  param_1[0x50b] = (long)"mButtonPrevenanceCanInputFrame";
  param_1[0x50d] = 0;
  *(undefined4 *)(param_1 + 0x50e) = 0;
  puStack_90 = &DAT_0407ebb1;
  param_1[0x50a] = (long)(PTR_DAT_04bb60a0 + 0x10);
  param_1[0x50f] = 0;
  local_88 = 0;
  local_a8 = local_b8;
  local_98 = local_b8;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x50a);
  param_1[0x512] = 0;
  param_1[0x511] = 0;
  param_1[0x510] = 0;
  param_1[0x513] = (long)(param_1 + 0x515);
  param_1[0x53f] = 0;
  param_1[0x515] = (long)(param_1 + 0x51b);
  param_1[0x514] = (long)(param_1 + 0x515);
  param_1[0x51b] = (long)(param_1 + 0x521);
  param_1[0x521] = (long)(param_1 + 0x527);
  param_1[0x527] = (long)(param_1 + 0x52d);
  param_1[0x52d] = (long)(param_1 + 0x533);
  param_1[0x533] = (long)(param_1 + 0x539);
  param_1[0x539] = (long)(param_1 + 0x53f);
  if (param_1 + 0x545 != (long *)0x0) {
    param_1[0x512] = (long)(param_1 + 0x545);
    *(undefined4 *)((long)param_1 + 0x288c) = 8;
  }
  puVar5 = PTR_DAT_04bb3050;
  iVar9 = 8;
  param_1[0x50a] = (long)&PTR_LAB_0492dc90;
  do {
    if ((int)param_1[0x511] < *(int *)((long)param_1 + 0x288c)) {
      plVar12 = (long *)param_1[0x513];
      if (plVar12 != (long *)0x0) {
        param_1[0x513] = *plVar12;
      }
      *plVar12 = (long)(puVar5 + 0x10);
      (**(code **)(local_b8 + 0x18))(&local_b8);
      plVar12[3] = 0;
      plVar12[1] = (long)local_b0;
      plVar12[2] = 0;
      plVar12[5] = 0;
      *(undefined4 *)((long)plVar12 + 0x24) = 10;
      if ((local_88 >> 7 & 1) == 0) {
        *(undefined4 *)(plVar12 + 5) = 10;
      }
      *plVar12 = (long)&PTR_LAB_0492df90;
      *(uint *)(plVar12 + 4) = local_88 & 0xfeffffff;
      if ((int)param_1[0x511] < *(int *)((long)param_1 + 0x288c)) {
        *(long **)(param_1[0x512] + (long)(int)param_1[0x511] * 8) = plVar12;
        *(int *)(param_1 + 0x511) = (int)param_1[0x511] + 1;
      }
    }
    else {
      plVar12 = (long *)0x0;
    }
    (**(code **)(*plVar12 + 0x38))(plVar12,param_1 + 0x50a);
    iVar9 = iVar9 + -1;
    *(uint *)(plVar12 + 4) = *(uint *)(plVar12 + 4) & 0xfffffffc;
  } while (iVar9 != 0);
  param_1[0x54f] = 0;
  param_1[0x54e] = (long)"mStartEmotionSmileOffsetFrameMax";
  param_1[0x550] = 0;
  param_1[0x54d] = (long)(puVar7 + 0x10);
  *(undefined4 *)(param_1 + 0x551) = 0;
  param_1[0x552] = 0;
  (**(code **)(*param_1 + 0x140))(param_1,param_1 + 0x54d);
  puVar8 = (undefined4 *)(**(code **)(param_1[0x54d] + 0xf0))(param_1 + 0x54d);
  *puVar8 = 0xf;
  if ((*(uint *)(param_1 + 0x551) >> 7 & 1) == 0) {
    param_1[0x552] = 0;
    *(undefined4 *)(param_1 + 0x552) = 0xf;
  }
  *(uint *)(param_1 + 0x551) = *(uint *)(param_1 + 0x551) & 0xfeffffff;
  local_88 = 0;
  puVar2 = puVar2 + 0x10;
  local_74 = 0;
  local_b0 = "mButtonCommandList";
  puStack_a0 = &DAT_0407180e;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar2;
  local_a8 = puVar2;
  local_98 = puVar2;
  FUN_009c3210(param_1 + 0x553,&local_b8,&local_74,param_1);
  local_88 = 0;
  local_b0 = "mButtonDelayFrameList";
  local_74 = 0;
  puStack_a0 = &DAT_0408c08a;
  puStack_90 = &DAT_0407ebb1;
  local_b8 = puVar2;
  local_a8 = puVar2;
  local_98 = puVar2;
  FUN_009c3210(param_1 + 0x9be,&local_b8,&local_74,param_1);
  return;
}

