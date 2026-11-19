
void FUN_03a9d9c0(long param_1,undefined8 param_2,byte param_3,long *param_4)

{
  bool bVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined4 uVar4;
  uint uVar5;
  long lVar6;
  long *plVar7;
  ulong *puVar8;
  void *pvVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  ulong __size;
  long lVar13;
  ulong *puVar14;
  
  bVar1 = (int)param_2 < 2;
  FUN_0393d8a0(param_1,param_2,bVar1 | param_3 & 1);
  lVar13 = DAT_05ae7600;
  uVar10 = *(uint *)(param_1 + 0xc);
  if ((int)uVar10 < 1) {
LAB_03a9df68:
    uVar10 = *(uint *)(param_1 + 0x180);
    puVar14 = *(ulong **)(param_1 + 0x188);
  }
  else {
    uVar12 = (ulong)uVar10 * 0xd70 | 8;
    if (DAT_05ae7600 == 0) {
      puVar8 = malloc(uVar12);
    }
    else {
      plVar7 = param_4;
      if (param_4 == (long *)0x0) {
        lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
        plVar7 = (long *)(lVar13 + 8);
        if (lVar6 != 0) {
          plVar7 = (long *)(lVar6 + 0xa8);
        }
        plVar7 = (long *)*plVar7;
        if (plVar7 == (long *)0x0) goto LAB_03a9df68;
      }
      puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,uVar12,8);
    }
    if (puVar8 == (ulong *)0x0) goto LAB_03a9df68;
    puVar14 = puVar8 + 1;
    *puVar8 = (ulong)uVar10;
    puVar2 = PTR_DAT_04bd1178 + 0x10;
    puVar8 = puVar14;
    do {
      FUN_0390cee0(puVar8);
      FUN_0390cee0(puVar8 + 0x1c);
      FUN_0390cee0(puVar8 + 0x39);
      puVar8[0x5f] = 0;
      puVar8[0x5e] = 0;
      puVar8[0x5d] = 0;
      puVar8[0x5c] = 0;
      puVar8[0x5b] = 0;
      puVar8[0x5a] = 0;
      puVar8[0x59] = 0;
      puVar8[0x58] = 0;
      puVar8[0x57] = 0;
      puVar8[0x56] = 0;
      *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
      puVar8[0x61] = 0;
      puVar8[0x62] = 0;
      puVar8[99] = 0;
      puVar8[100] = 0;
      puVar8[0x65] = 0;
      puVar8[0x66] = 0;
      puVar8[0x67] = 0;
      puVar8[0x68] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0x69) = 0x10000;
      *(undefined4 *)(puVar8 + 0x6c) = 0xff;
      *(undefined4 *)((long)puVar8 + 0x364) = 0;
      puVar8[0x55] = (ulong)&PTR_LAB_04b65dc0;
      puVar8[0x6d] = 0x80000000000;
      puVar8[0x70] = 0;
      puVar8[0x6f] = 0;
      puVar8[0x6e] = 0;
      puVar8[0x72] = (ulong)&DAT_3f8000003f800000;
      *(undefined4 *)(puVar8 + 0x73) = 0;
      *(undefined8 *)((long)puVar8 + 0x39c) = 0x3f80000000000000;
      *(undefined4 *)((long)puVar8 + 0x3a4) = 0x3f800000;
      puVar8[0x71] = (ulong)puVar2;
      puVar8[0x87] = 0;
      puVar8[0x86] = 0;
      puVar8[0x85] = 0;
      puVar8[0x84] = 0;
      puVar8[0x83] = 0;
      puVar8[0x82] = 0;
      puVar8[0x81] = 0;
      puVar8[0x80] = 0;
      puVar8[0x7f] = 0;
      puVar8[0x7e] = 0;
      puVar8[0x7d] = 0;
      puVar8[0x7c] = 0;
      puVar8[0x7b] = 0;
      puVar8[0x7a] = 0;
      puVar8[0x79] = 0;
      puVar8[0x78] = 0;
      puVar8[0x77] = 0;
      puVar8[0x76] = 0;
      puVar8[0x75] = 0;
      *(undefined4 *)(puVar8 + 0x88) = 0xffffffff;
      puVar8[0x89] = 0;
      puVar8[0x8a] = 0;
      puVar8[0x8b] = 0;
      puVar8[0x8c] = 0;
      puVar8[0x8d] = 0;
      puVar8[0x8e] = 0;
      puVar8[0x8f] = 0;
      puVar8[0x90] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0x91) = 0x10000;
      puVar8[0x92] = 0;
      puVar8[0x93] = 0;
      puVar8[0x94] = 0;
      FUN_0390cee0(puVar8 + 0x96);
      puVar8[0xbc] = 0;
      puVar8[0xbb] = 0;
      puVar8[0xba] = 0;
      puVar8[0xb9] = 0;
      puVar8[0xb8] = 0;
      puVar8[0xb7] = 0;
      puVar8[0xb6] = 0;
      puVar8[0xb5] = 0;
      puVar8[0xb4] = 0;
      puVar8[0xb3] = 0;
      *(undefined4 *)(puVar8 + 0xbd) = 0xffffffff;
      puVar8[0xbe] = 0;
      puVar8[0xbf] = 0;
      puVar8[0xc0] = 0;
      puVar8[0xc1] = 0;
      puVar8[0xc2] = 0;
      puVar8[0xc3] = 0;
      puVar8[0xc4] = 0;
      puVar8[0xc5] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0xc6) = 0x10000;
      *(undefined4 *)(puVar8 + 0xc9) = 0xff;
      *(undefined4 *)((long)puVar8 + 0x64c) = 0;
      puVar8[0xb2] = (ulong)&PTR_LAB_04b65dc0;
      puVar8[0xca] = 0x80000000000;
      puVar8[0xcd] = 0;
      puVar8[0xcc] = 0;
      puVar8[0xcb] = 0;
      puVar8[0xcf] = (ulong)&DAT_3f8000003f800000;
      *(undefined4 *)(puVar8 + 0xd0) = 0;
      *(undefined8 *)((long)puVar8 + 0x684) = 0x3f80000000000000;
      *(undefined4 *)((long)puVar8 + 0x68c) = 0x3f800000;
      puVar8[0xce] = (ulong)puVar2;
      puVar8[0xe4] = 0;
      puVar8[0xe3] = 0;
      puVar8[0xe2] = 0;
      puVar8[0xe1] = 0;
      puVar8[0xe0] = 0;
      puVar8[0xdf] = 0;
      puVar8[0xde] = 0;
      puVar8[0xdd] = 0;
      puVar8[0xdc] = 0;
      puVar8[0xdb] = 0;
      puVar8[0xda] = 0;
      puVar8[0xd9] = 0;
      puVar8[0xd8] = 0;
      puVar8[0xd7] = 0;
      puVar8[0xd6] = 0;
      puVar8[0xd5] = 0;
      puVar8[0xd4] = 0;
      puVar8[0xd3] = 0;
      puVar8[0xd2] = 0;
      *(undefined4 *)(puVar8 + 0xe5) = 0xffffffff;
      puVar8[0xe6] = 0;
      puVar8[0xe7] = 0;
      puVar8[0xe8] = 0;
      puVar8[0xe9] = 0;
      puVar8[0xea] = 0;
      puVar8[0xeb] = 0;
      puVar8[0xec] = 0;
      puVar8[0xed] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0xee) = 0x10000;
      puVar8[0xef] = 0;
      puVar8[0xf0] = 0;
      puVar8[0xf1] = 0;
      FUN_0390cee0(puVar8 + 0xf3);
      puVar8[0x119] = 0;
      puVar8[0x118] = 0;
      puVar8[0x117] = 0;
      puVar8[0x116] = 0;
      puVar8[0x115] = 0;
      puVar8[0x114] = 0;
      puVar8[0x113] = 0;
      puVar8[0x112] = 0;
      puVar8[0x111] = 0;
      puVar8[0x110] = 0;
      *(undefined4 *)(puVar8 + 0x11a) = 0xffffffff;
      puVar8[0x11b] = 0;
      puVar8[0x11c] = 0;
      puVar8[0x11d] = 0;
      puVar8[0x11e] = 0;
      puVar8[0x11f] = 0;
      puVar8[0x120] = 0;
      puVar8[0x121] = 0;
      puVar8[0x122] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0x123) = 0x10000;
      *(undefined4 *)(puVar8 + 0x126) = 0xff;
      *(undefined4 *)((long)puVar8 + 0x934) = 0;
      puVar8[0x10f] = (ulong)&PTR_LAB_04b65dc0;
      puVar8[0x127] = 0x80000000000;
      puVar8[0x12a] = 0;
      puVar8[0x129] = 0;
      puVar8[0x128] = 0;
      puVar8[300] = (ulong)&DAT_3f8000003f800000;
      *(undefined4 *)(puVar8 + 0x12d) = 0;
      *(undefined8 *)((long)puVar8 + 0x96c) = 0x3f80000000000000;
      *(undefined4 *)((long)puVar8 + 0x974) = 0x3f800000;
      puVar8[299] = (ulong)puVar2;
      puVar8[0x141] = 0;
      puVar8[0x140] = 0;
      puVar8[0x13f] = 0;
      puVar8[0x13e] = 0;
      puVar8[0x13d] = 0;
      puVar8[0x13c] = 0;
      puVar8[0x13b] = 0;
      puVar8[0x13a] = 0;
      puVar8[0x139] = 0;
      puVar8[0x138] = 0;
      puVar8[0x137] = 0;
      puVar8[0x136] = 0;
      puVar8[0x135] = 0;
      puVar8[0x134] = 0;
      puVar8[0x133] = 0;
      puVar8[0x132] = 0;
      puVar8[0x131] = 0;
      puVar8[0x130] = 0;
      puVar8[0x12f] = 0;
      *(undefined4 *)(puVar8 + 0x142) = 0xffffffff;
      puVar8[0x143] = 0;
      puVar8[0x144] = 0;
      puVar8[0x145] = 0;
      puVar8[0x146] = 0;
      puVar8[0x147] = 0;
      puVar8[0x148] = 0;
      puVar8[0x149] = 0;
      puVar8[0x14a] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0x14b) = 0x10000;
      puVar8[0x14c] = 0;
      puVar8[0x14d] = 0;
      puVar8[0x14e] = 0;
      FUN_0390cee0(puVar8 + 0x150);
      puVar8[0x176] = 0;
      puVar8[0x175] = 0;
      puVar8[0x174] = 0;
      puVar8[0x173] = 0;
      puVar8[0x172] = 0;
      puVar8[0x171] = 0;
      puVar8[0x170] = 0;
      puVar8[0x16f] = 0;
      puVar8[0x16e] = 0;
      puVar8[0x16d] = 0;
      *(undefined4 *)(puVar8 + 0x177) = 0xffffffff;
      puVar8[0x178] = 0;
      puVar8[0x179] = 0;
      puVar8[0x17a] = 0;
      puVar8[0x17b] = 0;
      puVar8[0x17c] = 0;
      puVar8[0x17d] = 0;
      puVar8[0x17e] = 0;
      puVar8[0x17f] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0x180) = 0x10000;
      *(undefined4 *)(puVar8 + 0x183) = 0xff;
      puVar3 = (undefined8 *)((long)puVar8 + 0xc54);
      *(undefined4 *)((long)puVar8 + 0xc1c) = 0;
      puVar8[0x16c] = (ulong)&PTR_LAB_04b65dc0;
      puVar8[0x184] = 0x80000000000;
      puVar8[0x187] = 0;
      puVar8[0x186] = 0;
      puVar8[0x185] = 0;
      puVar8[0x189] = (ulong)&DAT_3f8000003f800000;
      *(undefined4 *)(puVar8 + 0x18a) = 0;
      *(undefined4 *)((long)puVar8 + 0xc5c) = 0x3f800000;
      puVar8[0x188] = (ulong)puVar2;
      puVar8[0x19e] = 0;
      puVar8[0x19d] = 0;
      puVar8[0x19c] = 0;
      puVar8[0x19b] = 0;
      puVar8[0x19a] = 0;
      puVar8[0x199] = 0;
      puVar8[0x198] = 0;
      puVar8[0x197] = 0;
      puVar8[0x196] = 0;
      puVar8[0x195] = 0;
      puVar8[0x194] = 0;
      puVar8[0x193] = 0;
      puVar8[0x192] = 0;
      puVar8[0x191] = 0;
      puVar8[400] = 0;
      puVar8[399] = 0;
      puVar8[0x18e] = 0;
      puVar8[0x18d] = 0;
      puVar8[0x18c] = 0;
      *(undefined4 *)(puVar8 + 0x19f) = 0xffffffff;
      puVar8[0x1a0] = 0;
      puVar8[0x1a1] = 0;
      puVar8[0x1a2] = 0;
      puVar8[0x1a3] = 0;
      puVar8[0x1a4] = 0;
      puVar8[0x1a5] = 0;
      puVar8[0x1a6] = 0;
      puVar8[0x1a7] = (ulong)"agl::TextureData";
      *(undefined4 *)(puVar8 + 0x1a8) = 0x10000;
      puVar8[0x1a9] = 0;
      puVar8[0x1aa] = 0;
      puVar8[0x1ab] = 0;
      puVar8 = puVar8 + 0x1ae;
      *puVar3 = 0x3f80000000000000;
    } while (puVar8 != puVar14 + (ulong)uVar10 * 0x1ae);
    *(uint *)(param_1 + 0x180) = uVar10;
    *(ulong **)(param_1 + 0x188) = puVar14;
  }
  if (uVar10 != 0) {
    uVar11 = 0;
    do {
      FUN_03a9c340(puVar14 + (long)(int)uVar11 * 0x1ae + 0x38,param_4,1,1);
      FUN_03a9c340(puVar14 + (long)(int)uVar11 * 0x1ae + 0x95,param_4,1,1);
      FUN_03a9c340(puVar14 + (long)(int)uVar11 * 0x1ae + 0xf2,param_4,0x80,1);
      FUN_03a9c340(puVar14 + (long)(int)uVar11 * 0x1ae + 0x14f,param_4,0x80,0x80);
      uVar5 = uVar11 + 1;
      puVar14[(long)(int)uVar11 * 0x1ae + 0x1ac] = 0x100000000;
      *(undefined1 *)(puVar14 + (long)(int)uVar11 * 0x1ae + 0x1ad) = 0;
      uVar11 = uVar5;
    } while (uVar10 != uVar5);
  }
  lVar13 = DAT_05ae7600;
  if (!bVar1 && (param_3 & 1) == 0) {
    uVar10 = *(int *)(param_1 + 0x10) - 1;
    uVar12 = (ulong)uVar10;
    if (uVar10 != 0 && 0 < *(int *)(param_1 + 0x10)) {
      __size = uVar12 * 0x150 | 8;
      if (DAT_05ae7600 == 0) {
        puVar8 = malloc(__size);
      }
      else {
        plVar7 = param_4;
        if (param_4 == (long *)0x0) {
          lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
          plVar7 = (long *)(lVar13 + 8);
          if (lVar6 != 0) {
            plVar7 = (long *)(lVar6 + 0xa8);
          }
          plVar7 = (long *)*plVar7;
          if (plVar7 == (long *)0x0) goto LAB_03a9e19c;
        }
        puVar8 = (ulong *)(**(code **)(*plVar7 + 0x30))(plVar7,__size,8);
      }
      if (puVar8 != (ulong *)0x0) {
        uVar4 = crc32b(0xffffffff,100,0x4c11db7);
        uVar4 = crc32b(uVar4,0x65,0x4c11db7);
        uVar4 = crc32b(uVar4,0x66,0x4c11db7);
        uVar4 = crc32b(uVar4,0x61,0x4c11db7);
        uVar4 = crc32b(uVar4,0x75,0x4c11db7);
        uVar4 = crc32b(uVar4,0x6c,0x4c11db7);
        *puVar8 = uVar12;
        uVar11 = crc32b(uVar4,0x74,0x4c11db7);
        puVar2 = PTR_DAT_04bd1088 + 0x10;
        uVar11 = ~uVar11;
        lVar13 = 0;
        do {
          lVar6 = lVar13 + 0x150;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x18) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x10) = uVar11;
          *(undefined **)((long)puVar8 + lVar13 + 8) = puVar2;
          *(undefined1 *)((long)puVar8 + lVar13 + 0x20) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x38) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x30) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0x28) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x40) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x58) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x50) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0x48) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x60) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x78) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x70) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0x68) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x80) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x98) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x90) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0x88) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0xa0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xb8) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0xb0) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0xa8) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0xc0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xd8) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0xd0) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 200) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0xe0) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0xf8) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0xf0) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0xe8) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x100) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x118) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x110) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0x108) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x120) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x138) = 0;
          *(uint *)((long)puVar8 + lVar13 + 0x130) = uVar11;
          *(undefined ***)((long)puVar8 + lVar13 + 0x128) = &PTR_LAB_04b66268;
          *(undefined4 *)((long)puVar8 + lVar13 + 0x140) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x148) = 0;
          *(undefined8 *)((long)puVar8 + lVar13 + 0x150) = 0;
          lVar13 = lVar6;
        } while (uVar12 * 0x150 != lVar6);
        *(uint *)(param_1 + 0x1a0) = uVar10;
        *(ulong **)(param_1 + 0x1a8) = puVar8 + 1;
      }
    }
  }
LAB_03a9e19c:
  uVar10 = *(uint *)(param_1 + 0x10);
  if ((int)uVar10 < 1) {
    return;
  }
  lVar13 = *(long *)PTR_DAT_04bb2698;
  if (lVar13 == 0) {
    pvVar9 = malloc((ulong)uVar10 << 3);
  }
  else {
    if (param_4 == (long *)0x0) {
      lVar6 = nn::os::GetTlsValue(*(undefined4 *)(DAT_05ae7790 + 0x68));
      puVar3 = (undefined8 *)(lVar13 + 8);
      if (lVar6 != 0) {
        puVar3 = (undefined8 *)(lVar6 + 0xa8);
      }
      param_4 = (long *)*puVar3;
      if (param_4 == (long *)0x0) goto LAB_03a9e210;
    }
    pvVar9 = (void *)(**(code **)(*param_4 + 0x30))(param_4,(ulong)uVar10 << 3,8);
  }
  if (pvVar9 != (void *)0x0) {
    *(uint *)(param_1 + 400) = uVar10;
    *(void **)(param_1 + 0x198) = pvVar9;
  }
LAB_03a9e210:
  if (0 < *(int *)(param_1 + 0x10)) {
    **(long **)(param_1 + 0x198) = param_1 + 0x30;
    FUN_03a9c678(**(undefined8 **)(param_1 + 0x198),*(undefined8 *)(param_1 + 0x28));
    if (1 < *(int *)(param_1 + 0x10)) {
      uVar10 = 1;
      do {
        uVar11 = uVar10 - 1;
        if (*(uint *)(param_1 + 0x1a0) <= uVar11) {
          uVar11 = 0;
        }
        uVar5 = uVar10;
        if (*(uint *)(param_1 + 400) <= uVar10) {
          uVar5 = 0;
        }
        *(long *)(*(long *)(param_1 + 0x198) + (ulong)uVar5 * 8) =
             *(long *)(param_1 + 0x1a8) + (long)(int)uVar11 * 0x150;
        uVar11 = uVar10;
        if (*(uint *)(param_1 + 0x20) <= uVar10) {
          uVar11 = 0;
        }
        uVar5 = uVar10;
        if (*(uint *)(param_1 + 400) <= uVar10) {
          uVar5 = 0;
        }
        FUN_03a9c678(*(undefined8 *)(*(long *)(param_1 + 0x198) + (ulong)uVar5 * 8),
                     *(long *)(param_1 + 0x28) + (ulong)uVar11 * 0x30);
        uVar10 = uVar10 + 1;
      } while ((int)uVar10 < *(int *)(param_1 + 0x10));
    }
  }
  return;
}

