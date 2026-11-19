
void FUN_0399f4c0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  long *plVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined *local_480;
  char *pcStack_478;
  
  local_480 = PTR_DAT_04bb2020 + 0x10;
  pcStack_478 = "aglmf";
  FUN_03955370(param_1,&local_480,0);
  param_1[0x3a] = param_1 + 0x3a;
  param_1[0x3b] = param_1 + 0x3a;
  param_1[0x3d] = param_1 + 0x3d;
  param_1[0x3e] = param_1 + 0x3d;
  param_1[0x41] = param_1 + 0x40;
  param_1[0x40] = param_1 + 0x40;
  param_1[0x44] = param_1 + 0x43;
  param_1[0x43] = param_1 + 0x43;
  param_1[0x47] = param_1 + 0x46;
  param_1[0x46] = param_1 + 0x46;
  param_1[0x4a] = param_1 + 0x49;
  param_1[0x49] = param_1 + 0x49;
  param_1[0x4d] = param_1 + 0x4c;
  param_1[0x4c] = param_1 + 0x4c;
  *(undefined4 *)(param_1 + 0x3c) = 0;
  *param_1 = &PTR_FUN_04b69c30;
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0;
  *(undefined4 *)(param_1 + 0x4e) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  param_1[0x50] = param_1 + 0x4f;
  param_1[0x4f] = param_1 + 0x4f;
  puVar5 = PTR_DAT_04bd1070;
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  param_1[0x52] = puVar1;
  param_1[0x55] = 0;
  puVar7 = PTR_DAT_04bd1140;
  lVar8 = *(long *)PTR_DAT_04bd1140;
  param_1[0x56] = 0;
  param_1[0x59] = 0;
  puVar1 = PTR_PTR_04bb2238;
  param_1[0x58] = 0;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[0x5a] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  puVar6 = PTR_DAT_04bd10b8;
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  lVar8 = *(long *)puVar7;
  *(uint *)(param_1 + 0x57) = uVar10;
  param_1[0x5c] = 0;
  param_1[0x5b] = puVar5 + 0x10;
  param_1[0x5d] = 0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x61] = 0;
  param_1[0x62] = 0;
  param_1[0x52] = puVar6 + 0x10;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[99] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  lVar8 = *(long *)puVar7;
  *(uint *)(param_1 + 0x60) = uVar10;
  param_1[0x5b] = puVar6 + 0x10;
  param_1[0x65] = 0;
  param_1[100] = puVar5 + 0x10;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x6a] = 0;
  param_1[0x6b] = 0;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[0x6c] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  lVar8 = *(long *)puVar7;
  *(uint *)(param_1 + 0x69) = uVar10;
  param_1[100] = puVar6 + 0x10;
  param_1[0x6e] = 0;
  param_1[0x6d] = puVar5 + 0x10;
  param_1[0x6f] = 0;
  param_1[0x70] = 0;
  param_1[0x71] = 0;
  param_1[0x73] = 0;
  param_1[0x74] = 0;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[0x75] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  lVar8 = *(long *)puVar7;
  *(uint *)(param_1 + 0x72) = uVar10;
  param_1[0x6d] = puVar6 + 0x10;
  param_1[0x77] = 0;
  param_1[0x76] = puVar5 + 0x10;
  param_1[0x78] = 0;
  param_1[0x79] = 0;
  param_1[0x7a] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[0x7e] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  lVar8 = *(long *)puVar7;
  *(uint *)(param_1 + 0x7b) = uVar10;
  param_1[0x76] = puVar6 + 0x10;
  param_1[0x80] = 0;
  param_1[0x7f] = puVar5 + 0x10;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  param_1[0x83] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[0x87] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  lVar8 = *(long *)puVar7;
  *(uint *)(param_1 + 0x84) = uVar10;
  param_1[0x7f] = puVar6 + 0x10;
  param_1[0x89] = 0;
  param_1[0x88] = puVar5 + 0x10;
  param_1[0x8a] = 0;
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  param_1[0x8e] = 0;
  param_1[0x8f] = 0;
  uVar9 = 0;
  if (lVar8 != 0) {
    uVar9 = FUN_03954f70(lVar8,PTR_PTR_04bb2238);
  }
  lVar8 = *(long *)puVar1;
  param_1[0x90] = uVar9;
  (**(code **)(lVar8 + 0x18))(puVar1);
  pbVar12 = *(byte **)(puVar1 + 8);
  uVar10 = (uint)*pbVar12;
  if (*pbVar12 != 0) {
    uVar11 = 0xffffffff;
    do {
      pbVar12 = pbVar12 + 1;
      uVar11 = crc32b(uVar11,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar12;
    } while (uVar10 != 0);
    uVar10 = ~uVar11;
  }
  *(uint *)(param_1 + 0x8d) = uVar10;
  param_1[0x88] = puVar6 + 0x10;
  FUN_0390cee0(param_1 + 0xb0);
  param_1[0xce] = 0;
  uVar2 = crc32b(0xffffffff,0x72,0x4c11db7);
  param_1[0xd0] = 0;
  param_1[0xd1] = 0;
  param_1[0xd2] = 0;
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  param_1[0xd3] = 0;
  param_1[0xd4] = 0;
  param_1[0xd5] = 0;
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  param_1[0xd6] = 0;
  param_1[0xd7] = 0;
  param_1[0xd8] = 0;
  uVar2 = crc32b(uVar2,0x75,0x4c11db7);
  param_1[0xda] = 0;
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  param_1[0xdb] = 0;
  param_1[0xdc] = 0;
  puVar1 = PTR_DAT_04bd1178;
  uVar2 = crc32b(uVar2,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  param_1[0xdd] = 0;
  param_1[0xde] = 0;
  param_1[0xdf] = 0;
  param_1[0xe0] = 0;
  param_1[0xe1] = 0;
  param_1[0xe2] = 0;
  param_1[0xe3] = 0;
  *(undefined4 *)(param_1 + 0xe4) = 0xffffffff;
  param_1[0xeb] = 0;
  param_1[0xea] = 0;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  param_1[0xe9] = 0;
  param_1[0xe8] = 0;
  param_1[0xe7] = 0;
  param_1[0xe6] = 0;
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  param_1[0xe5] = 0;
  uVar2 = crc32b(uVar2,0x70,0x4c11db7);
  param_1[0xcd] = &DAT_3f8000003f800000;
  param_1[0xcf] = &DAT_3f8000003f800000;
  puVar5 = PTR_DAT_04bd1198;
  *(undefined4 *)(param_1 + 0xed) = 0x10000;
  param_1[0xec] = "agl::TextureData";
  param_1[0xcc] = puVar1 + 0x10;
  puVar7 = PTR_DAT_04bd12e8;
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  *(undefined4 *)(param_1 + 0xf0) = 0xff;
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  param_1[0xd9] = puVar5 + 0x10;
  param_1[0xf1] = 0x80000000000;
  puVar1 = PTR_DAT_04bd1060;
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  param_1[0xf6] = puVar7 + 0x10;
  puVar5 = PTR_DAT_04bd1088;
  *(undefined4 *)((long)param_1 + 0x784) = 0;
  param_1[0xf2] = 0;
  param_1[0xf3] = 0;
  param_1[0xf4] = 0;
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  *(undefined1 *)(param_1 + 0xf7) = 0;
  param_1[0xfb] = 0;
  *(undefined4 *)(param_1 + 0xfa) = 0;
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  param_1[0x101] = puVar1 + 0x10;
  param_1[0x107] = puVar5 + 0x10;
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  param_1[0xf9] = 0;
  param_1[0xf8] = 0;
  *(undefined4 *)((long)param_1 + 0x7f4) = 0;
  uVar2 = crc32b(uVar2,0x6e,0x4c11db7);
  *(undefined2 *)(param_1 + 0xff) = 1;
  *(undefined1 *)((long)param_1 + 0x7fa) = 0;
  param_1[0x100] = 0;
  uVar2 = crc32b(uVar2,0x65,0x4c11db7);
  param_1[0x104] = 0;
  param_1[0x105] = 0;
  param_1[0x106] = 0;
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  param_1[0x109] = 0;
  param_1[0x102] = param_1 + 0x107;
  param_1[0x103] = param_1 + 0x107;
  uVar10 = crc32b(uVar2,0x72,0x4c11db7);
  *(undefined4 *)(param_1 + 0x104) = 1;
  *(undefined1 *)(param_1 + 0x10a) = 1;
  *(uint *)(param_1 + 0x108) = ~uVar10;
  FUN_039a2490(param_1 + 0x10b,6,0xffffffff);
  puVar1 = PTR_DAT_04bd10d8;
  uVar2 = crc32b(0xffffffff,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x72,0x4c11db7);
  uVar2 = crc32b(uVar2,0x69,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6d,0x4c11db7);
  uVar2 = crc32b(uVar2,0x5f,0x4c11db7);
  uVar3 = crc32b(uVar2,99,0x4c11db7);
  uVar2 = crc32b(uVar2,0x73,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar2 = crc32b(uVar2,99,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6e,0x4c11db7);
  uVar2 = crc32b(uVar2,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x74,0x4c11db7);
  uVar2 = crc32b(uVar2,0x6c,0x4c11db7);
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  uVar10 = crc32b(uVar2,0x65,0x4c11db7);
  param_1[0x10b] = PTR_DAT_04bd12f0 + 0x10;
  uVar11 = crc32b(uVar3,0x72,0x4c11db7);
  param_1[0x12d] = puVar1 + 0x10;
  *(uint *)(param_1 + 0x12e) = ~uVar11;
  plVar4 = param_1 + 0x119;
  if (param_1[0x11a] != 0) {
    plVar4 = (long *)(param_1[0x11a] + 0x10);
  }
  *plVar4 = (long)(param_1 + 0x12d);
  *(uint *)(param_1 + 0x132) = ~uVar10;
  param_1[0x130] = 0;
  param_1[0x131] = puVar1 + 0x10;
  param_1[0x133] = 0;
  param_1[0x12f] = param_1 + 0x131;
  param_1[0x11a] = param_1 + 0x131;
  param_1[0x134] = 0x3f0000003f000000;
  *(int *)(param_1 + 0x11b) = *(int *)(param_1 + 0x11b) + 2;
  lVar8 = *(long *)PTR_DAT_04bd1158;
  if ((lVar8 != 0) && (*(long *)(*(long *)PTR_DAT_04bb4e50 + 0x58) != 0)) {
    (**(code **)(*(long *)(lVar8 + 8) + 0x18))((long *)(lVar8 + 8));
    FUN_006e9454(&local_480,&DAT_0406a3d7,"Icon=LIGHT",*(undefined8 *)(lVar8 + 0x10));
  }
  param_1[0xae] = 0;
  *(undefined4 *)(param_1 + 0xf5) = 1;
  *(undefined1 *)((long)param_1 + 0x7ac) = 0;
  param_1[0xad] = 0;
  *(undefined8 *)((long)param_1 + 0x7e4) = 0;
  *(undefined8 *)((long)param_1 + 0x7ec) = 0;
  param_1[0xd0] = param_1 + 0xd9;
  *(undefined4 *)(param_1 + 0xaf) = 0x1d;
  *(undefined4 *)(param_1 + 0xfc) = 0x1d;
  return;
}

