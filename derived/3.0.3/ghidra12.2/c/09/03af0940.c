
void FUN_03af0940(long param_1,long *param_2)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar8 = *(long *)PTR_DAT_04bb2698;
  if (lVar8 == 0) {
    puVar4 = malloc(0x28);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
  }
  puVar4[2] = 0;
  *puVar4 = &PTR_FUN_04b72450;
  puVar4[1] = 0;
  lVar8 = *(long *)puVar1;
  *(undefined4 *)((long)puVar4 + 0x24) = 0x80;
  if (lVar8 == 0) {
    puVar5 = malloc(0x8400);
joined_r0x03af0a38:
    if (puVar5 != (undefined8 *)0x0) {
      lVar8 = 0x180;
      puVar7 = puVar5;
      do {
        *puVar7 = 0;
        puVar7[1] = 0x3f80000000000000;
        lVar8 = lVar8 + -1;
        puVar7[10] = 0;
        *(undefined8 *)((long)puVar7 + 0x2c) = 0;
        *(undefined8 *)((long)puVar7 + 0x34) = 0;
        *(undefined8 *)((long)puVar7 + 0x3c) = 0;
        puVar7[2] = 0;
        puVar7[3] = 0x3f80000000000000;
        puVar7 = puVar7 + 0xb;
      } while (lVar8 != 0);
      puVar4[1] = 0x8000000003;
      puVar4[2] = puVar5;
    }
  }
  else {
    plVar3 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03af0a14:
      puVar5 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x8400,8);
      goto joined_r0x03af0a38;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar8 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) goto LAB_03af0a14;
  }
  *(undefined4 *)(puVar4 + 4) = 0;
  *puVar4 = &PTR_FUN_04b72430;
  puVar4[3] = 0;
  *(undefined8 **)(param_1 + 0x340) = puVar4;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar4 = malloc(0x28);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
  }
  puVar4[2] = 0;
  *puVar4 = &PTR_LAB_04b72490;
  puVar4[1] = 0;
  lVar8 = *(long *)puVar1;
  *(undefined4 *)((long)puVar4 + 0x24) = 0x40;
  if (lVar8 == 0) {
    pvVar6 = malloc(0x2100);
joined_r0x03af0b6c:
    if (pvVar6 != (void *)0x0) {
      lVar8 = -0x2100;
      do {
        lVar2 = lVar8 + 0x2c;
        *(undefined8 *)((long)pvVar6 + lVar8 + 0x2104) = 0;
        *(undefined8 *)((long)pvVar6 + lVar8 + 0x210c) = 0x3f80000000000000;
        lVar8 = lVar2;
      } while (lVar2 != 0);
      puVar4[1] = 0x4000000003;
      puVar4[2] = pvVar6;
    }
  }
  else {
    plVar3 = param_2;
    if (param_2 != (long *)0x0) {
LAB_03af0b48:
      pvVar6 = (void *)(**(code **)(*plVar3 + 0x30))(plVar3,0x2100,8);
      goto joined_r0x03af0b6c;
    }
    lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
    plVar3 = (long *)(lVar8 + 8);
    if (lVar2 != 0) {
      plVar3 = (long *)(lVar2 + 0xa8);
    }
    plVar3 = (long *)*plVar3;
    if (plVar3 != (long *)0x0) goto LAB_03af0b48;
  }
  *(undefined4 *)(puVar4 + 4) = 0;
  *puVar4 = &PTR_LAB_04b72470;
  puVar4[3] = 0;
  *(undefined8 **)(param_1 + 0x348) = puVar4;
  lVar8 = *(long *)puVar1;
  if (lVar8 == 0) {
    puVar4 = malloc(0x28);
  }
  else {
    plVar3 = param_2;
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      plVar3 = (long *)(lVar8 + 8);
      if (lVar2 != 0) {
        plVar3 = (long *)(lVar2 + 0xa8);
      }
      plVar3 = (long *)*plVar3;
    }
    puVar4 = (undefined8 *)(**(code **)(*plVar3 + 0x30))(plVar3,0x28,8);
  }
  puVar4[2] = 0;
  *puVar4 = &PTR_LAB_04b724d0;
  puVar4[1] = 0;
  lVar8 = *(long *)puVar1;
  *(undefined4 *)((long)puVar4 + 0x24) = 8;
  if (lVar8 == 0) {
    puVar5 = malloc(0xba0);
  }
  else {
    if (param_2 == (long *)0x0) {
      lVar2 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar5 = (undefined8 *)(lVar8 + 8);
      if (lVar2 != 0) {
        puVar5 = (undefined8 *)(lVar2 + 0xa8);
      }
      param_2 = (long *)*puVar5;
      if (param_2 == (long *)0x0) goto LAB_03af1438;
    }
    puVar5 = (undefined8 *)(**(code **)(*param_2 + 0x30))(param_2,0xba0,8);
  }
  if (puVar5 != (undefined8 *)0x0) {
    *(undefined4 *)(puVar5 + 0xb) = 0;
    *(undefined4 *)(puVar5 + 2) = 0x3e4ccccd;
    *(undefined1 *)(puVar5 + 0xf) = 0;
    *(undefined1 **)((long)puVar5 + 0x14) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x1c) = &DAT_3f8000003f800000;
    puVar5[0x1f] = 0;
    *(undefined8 *)((long)puVar5 + 0x104) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x10c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x114) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x11c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x124) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 300) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x134) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x13c) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x144) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x174) = 0;
    *(undefined1 **)((long)puVar5 + 0x7dc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x7e4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x7ec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x7f4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x7fc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x8d4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x8dc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x8e4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x8ec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x8f4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x9cc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x9d4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x9dc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x9e4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x9ec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0xac4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0xacc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0xad4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0xadc) = &DAT_3f8000003f800000;
    puVar5[0xe] = 8;
    *(undefined1 **)((long)puVar5 + 0x24) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x2c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x34) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x3c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x44) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x4c) = 0x3f800000;
    *(undefined4 *)((long)puVar5 + 0x84) = 0;
    *(undefined8 *)((long)puVar5 + 0x7c) = 0;
    *(undefined4 *)((long)puVar5 + 0xd4) = 0;
    *(undefined8 *)((long)puVar5 + 0xdc) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0xe4) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0xec) = 8;
    puVar5[0x19] = 0x3f800000;
    *(undefined1 *)((long)puVar5 + 0xf4) = 0;
    *(undefined4 *)(puVar5 + 0x20) = 0;
    *(undefined4 *)(puVar5 + 0x2a) = 0;
    puVar5[0x2d] = 8;
    *(undefined1 *)(puVar5 + 0x2e) = 0;
    *(undefined4 *)((long)puVar5 + 0x17c) = 0;
    *(undefined4 *)((long)puVar5 + 0x1cc) = 0;
    *(undefined4 *)((long)puVar5 + 0x1e4) = 8;
    puVar5[0x38] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x3d) = 0;
    *(undefined1 *)((long)puVar5 + 0x1ec) = 0;
    *(undefined4 *)(puVar5 + 0x3f) = 0;
    puVar5[0x3e] = 0;
    *(undefined4 *)(puVar5 + 0x49) = 0;
    puVar5[0x4a] = 0x600000005;
    puVar5[0x4b] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x4c) = 8;
    *(undefined4 *)((long)puVar5 + 0x264) = 0;
    *(undefined1 *)(puVar5 + 0x4d) = 0;
    *(undefined4 *)((long)puVar5 + 0x274) = 0;
    puVar5[0x4f] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x2c4) = 0;
    *(undefined4 *)((long)puVar5 + 0x2dc) = 8;
    puVar5[0x50] = &DAT_3f8000003f800000;
    puVar5[0x51] = &DAT_3f8000003f800000;
    puVar5[0x52] = &DAT_3f8000003f800000;
    puVar5[0x53] = &DAT_3f8000003f800000;
    puVar5[0x54] = &DAT_3f8000003f800000;
    puVar5[0x55] = &DAT_3f8000003f800000;
    puVar5[0x56] = &DAT_3f8000003f800000;
    puVar5[0x57] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x5c) = 0;
    *(undefined1 *)((long)puVar5 + 0x2e4) = 0;
    *(undefined4 *)(puVar5 + 0x5e) = 0;
    puVar5[0x5d] = 0;
    *(undefined4 *)(puVar5 + 0x68) = 0;
    puVar5[0x69] = 0x600000005;
    puVar5[0x6a] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x6b) = 8;
    *(undefined4 *)((long)puVar5 + 0x35c) = 0;
    *(undefined1 *)(puVar5 + 0x6c) = 0;
    *(undefined4 *)((long)puVar5 + 0x36c) = 0;
    puVar5[0x6e] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x3bc) = 0;
    *(undefined4 *)((long)puVar5 + 0x3d4) = 8;
    puVar5[0x6f] = &DAT_3f8000003f800000;
    puVar5[0x70] = &DAT_3f8000003f800000;
    puVar5[0x71] = &DAT_3f8000003f800000;
    puVar5[0x72] = &DAT_3f8000003f800000;
    puVar5[0x73] = &DAT_3f8000003f800000;
    puVar5[0x74] = &DAT_3f8000003f800000;
    puVar5[0x75] = &DAT_3f8000003f800000;
    puVar5[0x76] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x7b) = 0;
    *(undefined1 *)((long)puVar5 + 0x3dc) = 0;
    *(undefined4 *)(puVar5 + 0x7d) = 0;
    puVar5[0x7c] = 0;
    *(undefined4 *)(puVar5 + 0x87) = 0;
    puVar5[0x88] = 0x600000005;
    puVar5[0x89] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x8a) = 8;
    *(undefined4 *)((long)puVar5 + 0x454) = 0;
    *(undefined1 *)(puVar5 + 0x8b) = 0;
    *(undefined4 *)((long)puVar5 + 0x464) = 0;
    puVar5[0x8d] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x4b4) = 0;
    *(undefined4 *)((long)puVar5 + 0x4cc) = 8;
    puVar5[0x8e] = &DAT_3f8000003f800000;
    puVar5[0x8f] = &DAT_3f8000003f800000;
    puVar5[0x90] = &DAT_3f8000003f800000;
    puVar5[0x91] = &DAT_3f8000003f800000;
    puVar5[0x92] = &DAT_3f8000003f800000;
    puVar5[0x93] = &DAT_3f8000003f800000;
    puVar5[0x94] = &DAT_3f8000003f800000;
    puVar5[0x95] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x9a) = 0;
    *(undefined1 *)((long)puVar5 + 0x4d4) = 0;
    *(undefined4 *)(puVar5 + 0x9c) = 0;
    puVar5[0x9b] = 0;
    *(undefined4 *)(puVar5 + 0xa6) = 0;
    puVar5[0xa7] = 0x600000005;
    puVar5[0xa8] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0xa9) = 8;
    *(undefined4 *)((long)puVar5 + 0x54c) = 0;
    *(undefined1 *)(puVar5 + 0xaa) = 0;
    *(undefined4 *)((long)puVar5 + 0x55c) = 0;
    puVar5[0xac] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x5ac) = 0;
    *(undefined4 *)((long)puVar5 + 0x5c4) = 8;
    puVar5[0xad] = &DAT_3f8000003f800000;
    puVar5[0xae] = &DAT_3f8000003f800000;
    puVar5[0xaf] = &DAT_3f8000003f800000;
    puVar5[0xb0] = &DAT_3f8000003f800000;
    puVar5[0xb1] = &DAT_3f8000003f800000;
    puVar5[0xb2] = &DAT_3f8000003f800000;
    puVar5[0xb3] = &DAT_3f8000003f800000;
    puVar5[0xb4] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0xb9) = 0;
    *(undefined1 *)((long)puVar5 + 0x5cc) = 0;
    *(undefined4 *)(puVar5 + 0xbb) = 0;
    puVar5[0xba] = 0;
    *(undefined4 *)(puVar5 + 0xc5) = 0;
    puVar5[0xc6] = 0x600000005;
    puVar5[199] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 200) = 8;
    *(undefined4 *)((long)puVar5 + 0x644) = 0;
    *(undefined1 *)(puVar5 + 0xc9) = 0;
    *(undefined4 *)((long)puVar5 + 0x654) = 0;
    puVar5[0xcb] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x6a4) = 0;
    *(undefined4 *)((long)puVar5 + 0x6bc) = 8;
    puVar5[0xcc] = &DAT_3f8000003f800000;
    puVar5[0xcd] = &DAT_3f8000003f800000;
    puVar5[0xce] = &DAT_3f8000003f800000;
    puVar5[0xcf] = &DAT_3f8000003f800000;
    puVar5[0xd0] = &DAT_3f8000003f800000;
    puVar5[0xd1] = &DAT_3f8000003f800000;
    puVar5[0xd2] = &DAT_3f8000003f800000;
    puVar5[0xd3] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0xd8) = 0;
    *(undefined1 *)((long)puVar5 + 0x6c4) = 0;
    *(undefined4 *)(puVar5 + 0xda) = 0;
    puVar5[0xd9] = 0;
    *(undefined4 *)(puVar5 + 0xe4) = 0;
    puVar5[0xe5] = 0x600000005;
    puVar5[0xe6] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0xe7) = 8;
    *(undefined4 *)((long)puVar5 + 0x73c) = 0;
    *(undefined1 *)(puVar5 + 0xe8) = 0;
    *(undefined4 *)((long)puVar5 + 0x74c) = 0;
    puVar5[0xea] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x79c) = 0;
    *(undefined4 *)((long)puVar5 + 0x7b4) = 8;
    puVar5[0xeb] = &DAT_3f8000003f800000;
    puVar5[0xec] = &DAT_3f8000003f800000;
    puVar5[0xed] = &DAT_3f8000003f800000;
    puVar5[0xee] = &DAT_3f8000003f800000;
    puVar5[0xef] = &DAT_3f8000003f800000;
    puVar5[0xf0] = &DAT_3f8000003f800000;
    puVar5[0xf1] = &DAT_3f8000003f800000;
    puVar5[0xf2] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0xf7) = 0;
    *(undefined1 *)((long)puVar5 + 0x7bc) = 0;
    *(undefined4 *)(puVar5 + 0xf9) = 0;
    puVar5[0xf8] = 0;
    *(undefined4 *)(puVar5 + 0x103) = 0;
    puVar5[0x104] = 0x600000005;
    puVar5[0x105] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x106) = 8;
    *(undefined4 *)((long)puVar5 + 0x834) = 0;
    *(undefined1 *)(puVar5 + 0x107) = 0;
    *(undefined4 *)((long)puVar5 + 0x844) = 0;
    puVar5[0x109] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x894) = 0;
    *(undefined4 *)((long)puVar5 + 0x8ac) = 8;
    puVar5[0x10a] = &DAT_3f8000003f800000;
    puVar5[0x10b] = &DAT_3f8000003f800000;
    puVar5[0x10c] = &DAT_3f8000003f800000;
    puVar5[0x10d] = &DAT_3f8000003f800000;
    puVar5[0x10e] = &DAT_3f8000003f800000;
    puVar5[0x10f] = &DAT_3f8000003f800000;
    puVar5[0x110] = &DAT_3f8000003f800000;
    puVar5[0x111] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x116) = 0;
    *(undefined1 *)((long)puVar5 + 0x8b4) = 0;
    *(undefined4 *)(puVar5 + 0x118) = 0;
    puVar5[0x117] = 0;
    *(undefined4 *)(puVar5 + 0x122) = 0;
    puVar5[0x123] = 0x600000005;
    puVar5[0x124] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x125) = 8;
    *(undefined4 *)((long)puVar5 + 0x92c) = 0;
    *(undefined1 *)(puVar5 + 0x126) = 0;
    *(undefined4 *)((long)puVar5 + 0x93c) = 0;
    puVar5[0x128] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0x98c) = 0;
    *(undefined4 *)((long)puVar5 + 0x9a4) = 8;
    puVar5[0x129] = &DAT_3f8000003f800000;
    puVar5[0x12a] = &DAT_3f8000003f800000;
    puVar5[299] = &DAT_3f8000003f800000;
    puVar5[300] = &DAT_3f8000003f800000;
    puVar5[0x12d] = &DAT_3f8000003f800000;
    puVar5[0x12e] = &DAT_3f8000003f800000;
    puVar5[0x12f] = &DAT_3f8000003f800000;
    puVar5[0x130] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x135) = 0;
    *(undefined1 *)((long)puVar5 + 0x9ac) = 0;
    *(undefined4 *)(puVar5 + 0x137) = 0;
    puVar5[0x136] = 0;
    *(undefined4 *)(puVar5 + 0x141) = 0;
    puVar5[0x142] = 0x600000005;
    puVar5[0x143] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x144) = 8;
    *(undefined4 *)((long)puVar5 + 0xa24) = 0;
    *(undefined1 *)(puVar5 + 0x145) = 0;
    *(undefined4 *)((long)puVar5 + 0xa34) = 0;
    puVar5[0x147] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0xa84) = 0;
    *(undefined4 *)((long)puVar5 + 0xa9c) = 8;
    puVar5[0x148] = &DAT_3f8000003f800000;
    puVar5[0x149] = &DAT_3f8000003f800000;
    puVar5[0x14a] = &DAT_3f8000003f800000;
    puVar5[0x14b] = &DAT_3f8000003f800000;
    puVar5[0x14c] = &DAT_3f8000003f800000;
    puVar5[0x14d] = &DAT_3f8000003f800000;
    puVar5[0x14e] = &DAT_3f8000003f800000;
    puVar5[0x14f] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x154) = 0;
    *(undefined1 *)((long)puVar5 + 0xaa4) = 0;
    *(undefined4 *)(puVar5 + 0x156) = 0;
    puVar5[0x155] = 0;
    *(undefined4 *)(puVar5 + 0x160) = 0;
    puVar5[0x161] = 0x600000005;
    puVar5[0x162] = 0x3f00000000000001;
    *(undefined4 *)(puVar5 + 0x163) = 8;
    *(undefined1 **)((long)puVar5 + 0xae4) = &DAT_3f8000003f800000;
    *(undefined4 *)((long)puVar5 + 0xb1c) = 0;
    *(undefined1 *)(puVar5 + 0x164) = 0;
    *(undefined4 *)((long)puVar5 + 0xb2c) = 0;
    puVar5[0x166] = 0x3e4ccccd41200000;
    *(undefined4 *)((long)puVar5 + 0xb7c) = 0;
    *(undefined4 *)((long)puVar5 + 0xb94) = 8;
    puVar5[0x167] = &DAT_3f8000003f800000;
    puVar5[0x168] = &DAT_3f8000003f800000;
    puVar5[0x169] = &DAT_3f8000003f800000;
    puVar5[0x16a] = &DAT_3f8000003f800000;
    puVar5[0x16b] = &DAT_3f8000003f800000;
    puVar5[0x16c] = &DAT_3f8000003f800000;
    puVar5[0x16d] = &DAT_3f8000003f800000;
    puVar5[0x16e] = 0x3f800000;
    *(undefined4 *)(puVar5 + 0x173) = 0;
    *(undefined1 *)((long)puVar5 + 0xb9c) = 0;
    *(undefined8 *)((long)puVar5 + 0x1d4) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x1dc) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x1fc) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x204) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x20c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x214) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x21c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x224) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x22c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x234) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x23c) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x26c) = 0;
    *(undefined8 *)((long)puVar5 + 0x2cc) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x2d4) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x2f4) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x2fc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x304) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x30c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x314) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x31c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x324) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x32c) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x334) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x364) = 0;
    *(undefined8 *)((long)puVar5 + 0x3c4) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x3cc) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x3ec) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x3f4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x3fc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x404) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x40c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x414) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x41c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x424) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x42c) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x45c) = 0;
    *(undefined8 *)((long)puVar5 + 0x4bc) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x4c4) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x4e4) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x4ec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x4f4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x4fc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x504) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x50c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x514) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x51c) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x524) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x554) = 0;
    *(undefined8 *)((long)puVar5 + 0x5b4) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x5bc) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x5dc) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x5e4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x5ec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x5f4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x5fc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x604) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x60c) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x614) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x61c) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x64c) = 0;
    *(undefined8 *)((long)puVar5 + 0x6ac) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x6b4) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x6d4) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x6dc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x6e4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x6ec) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x6f4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x6fc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x704) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x70c) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x714) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x744) = 0;
    *(undefined8 *)((long)puVar5 + 0x7a4) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x7ac) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x7cc) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x7d4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x804) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x80c) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x83c) = 0;
    *(undefined8 *)((long)puVar5 + 0x89c) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x8a4) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x8c4) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x8cc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x8fc) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x904) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0x934) = 0;
    *(undefined8 *)((long)puVar5 + 0x994) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0x99c) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0x9bc) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0x9c4) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0x9f4) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0x9fc) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0xa2c) = 0;
    *puVar5 = 0;
    puVar5[1] = 0x4120000000000000;
    *(undefined1 *)((long)puVar5 + 0x54) = 1;
    *(undefined1 *)((long)puVar5 + 0x5c) = 1;
    *(undefined1 *)(puVar5 + 0x1a) = 1;
    *(undefined1 *)(puVar5 + 0x1b) = 1;
    *(undefined1 *)((long)puVar5 + 0x14c) = 1;
    *(undefined1 *)((long)puVar5 + 0x154) = 1;
    *(undefined1 *)(puVar5 + 0x39) = 1;
    *(undefined1 *)(puVar5 + 0x3a) = 1;
    *(undefined1 *)((long)puVar5 + 0x244) = 1;
    *(undefined1 *)((long)puVar5 + 0x24c) = 1;
    *(undefined1 *)(puVar5 + 0x58) = 1;
    *(undefined1 *)(puVar5 + 0x59) = 1;
    *(undefined1 *)((long)puVar5 + 0x33c) = 1;
    *(undefined1 *)((long)puVar5 + 0x344) = 1;
    *(undefined1 *)(puVar5 + 0x77) = 1;
    *(undefined1 *)(puVar5 + 0x78) = 1;
    *(undefined1 *)((long)puVar5 + 0x434) = 1;
    *(undefined1 *)((long)puVar5 + 0x43c) = 1;
    *(undefined1 *)(puVar5 + 0x96) = 1;
    *(undefined1 *)(puVar5 + 0x97) = 1;
    *(undefined1 *)((long)puVar5 + 0x52c) = 1;
    *(undefined1 *)((long)puVar5 + 0x534) = 1;
    *(undefined1 *)(puVar5 + 0xb5) = 1;
    *(undefined1 *)(puVar5 + 0xb6) = 1;
    *(undefined1 *)((long)puVar5 + 0x624) = 1;
    *(undefined1 *)((long)puVar5 + 0x62c) = 1;
    *(undefined1 *)(puVar5 + 0xd4) = 1;
    *(undefined1 *)(puVar5 + 0xd5) = 1;
    *(undefined1 *)((long)puVar5 + 0x71c) = 1;
    *(undefined1 *)((long)puVar5 + 0x724) = 1;
    *(undefined1 *)(puVar5 + 0xf3) = 1;
    *(undefined1 *)(puVar5 + 0xf4) = 1;
    *(undefined1 *)((long)puVar5 + 0x814) = 1;
    *(undefined1 *)((long)puVar5 + 0x81c) = 1;
    *(undefined1 *)(puVar5 + 0x112) = 1;
    *(undefined1 *)(puVar5 + 0x113) = 1;
    *(undefined1 *)((long)puVar5 + 0x90c) = 1;
    *(undefined1 *)((long)puVar5 + 0x914) = 1;
    *(undefined1 *)(puVar5 + 0x131) = 1;
    *(undefined1 *)(puVar5 + 0x132) = 1;
    *(undefined1 *)((long)puVar5 + 0xa04) = 1;
    *(undefined1 *)((long)puVar5 + 0xa0c) = 1;
    *(undefined1 *)(puVar5 + 0x150) = 1;
    *(undefined1 *)(puVar5 + 0x151) = 1;
    *(undefined1 *)((long)puVar5 + 0xafc) = 1;
    *(undefined1 *)((long)puVar5 + 0xb04) = 1;
    *(undefined1 *)(puVar5 + 0x16f) = 1;
    *(undefined1 *)(puVar5 + 0x170) = 1;
    *(undefined8 *)((long)puVar5 + 0xa8c) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0xa94) = 0x3f00000000000001;
    *(undefined8 *)((long)puVar5 + 0xab4) = 0x3e4ccccd41200000;
    *(undefined1 **)((long)puVar5 + 0xabc) = &DAT_3f8000003f800000;
    *(undefined1 **)((long)puVar5 + 0xaec) = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0xaf4) = 0x3f800000;
    *(undefined8 *)((long)puVar5 + 0xb24) = 0;
    puVar5[0xc] = 0x600000005;
    puVar5[0xd] = 0x3f00000000000001;
    puVar5[0x11] = 0x3e4ccccd41200000;
    puVar5[0x12] = &DAT_3f8000003f800000;
    puVar5[0x13] = &DAT_3f8000003f800000;
    puVar5[0x14] = &DAT_3f8000003f800000;
    puVar5[0x15] = &DAT_3f8000003f800000;
    puVar5[0x16] = &DAT_3f8000003f800000;
    puVar5[0x17] = &DAT_3f8000003f800000;
    puVar5[0x18] = &DAT_3f8000003f800000;
    puVar5[0x2b] = 0x600000005;
    puVar5[0x2c] = 0x3f00000000000001;
    puVar5[0x30] = 0x3e4ccccd41200000;
    puVar5[0x31] = &DAT_3f8000003f800000;
    puVar5[0x32] = &DAT_3f8000003f800000;
    puVar5[0x33] = &DAT_3f8000003f800000;
    puVar5[0x34] = &DAT_3f8000003f800000;
    puVar5[0x35] = &DAT_3f8000003f800000;
    puVar5[0x36] = &DAT_3f8000003f800000;
    puVar5[0x37] = &DAT_3f8000003f800000;
    *(undefined8 *)((long)puVar5 + 0xb84) = 0x600000005;
    *(undefined8 *)((long)puVar5 + 0xb8c) = 0x3f00000000000001;
    puVar4[1] = 0x800000003;
    puVar4[2] = puVar5;
  }
LAB_03af1438:
  *(undefined4 *)(puVar4 + 4) = 0;
  puVar4[3] = 0;
  *puVar4 = &PTR_LAB_04b724b0;
  *(undefined8 **)(param_1 + 0x350) = puVar4;
  return;
}

