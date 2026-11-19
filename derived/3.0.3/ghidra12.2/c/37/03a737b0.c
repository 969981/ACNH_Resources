
void FUN_03a737b0(long param_1,uint *param_2,long *param_3)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  long *plVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long lVar18;
  long *plVar19;
  ulong *puVar20;
  undefined4 *puVar21;
  long lVar22;
  void *pvVar23;
  undefined8 uVar24;
  uint uVar25;
  ulong uVar26;
  ulong uVar27;
  ulong uVar28;
  ulong uVar29;
  byte *pbVar30;
  uint uVar31;
  uint uVar32;
  ulong uVar33;
  ulong uVar34;
  ulong uVar35;
  undefined4 *puVar36;
  int iVar37;
  long lVar38;
  uint *puVar39;
  ulong uVar40;
  long lVar41;
  ulong *puVar42;
  uint *puVar43;
  uint uVar44;
  undefined *local_a0;
  byte *local_98;
  
  uVar31 = *param_2;
  if (0 < (int)uVar31) {
    uVar40 = (ulong)uVar31 * 0x6d0 | 8;
    lVar38 = *(long *)PTR_DAT_04bb2698;
    if (lVar38 == 0) {
      puVar20 = malloc(uVar40);
    }
    else {
      plVar19 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar38 + 8);
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_03a73b60;
      }
      puVar20 = (ulong *)(**(code **)(*plVar19 + 0x30))(plVar19,uVar40,8);
    }
    if (puVar20 != (ulong *)0x0) {
      puVar42 = puVar20 + 1;
      *puVar20 = (ulong)uVar31;
      uVar35 = *(ulong *)(PTR_DAT_04bbd558 + 0x20);
      uVar33 = *(ulong *)(PTR_DAT_04bbd558 + 0x28);
      uVar28 = *(ulong *)(PTR_DAT_04bbd558 + 0x30);
      uVar34 = *(ulong *)(PTR_DAT_04bbd558 + 0x38);
      uVar29 = *(ulong *)PTR_DAT_04bbd558;
      uVar40 = *(ulong *)(PTR_DAT_04bbd558 + 8);
      uVar14 = *(ulong *)(PTR_DAT_04bbd558 + 0x10);
      uVar26 = *(ulong *)(PTR_DAT_04bbd558 + 0x18);
      uVar27 = *(ulong *)(PTR_DAT_04bb2f80 + 0x10);
      uVar15 = *(ulong *)(PTR_DAT_04bb2f80 + 0x18);
      uVar12 = *(ulong *)(PTR_DAT_04bb2f80 + 0x20);
      uVar16 = *(ulong *)(PTR_DAT_04bb2f80 + 0x28);
      puVar3 = PTR_DAT_04bd1178 + 0x10;
      uVar13 = *(ulong *)PTR_DAT_04bb2f80;
      uVar17 = *(ulong *)(PTR_DAT_04bb2f80 + 8);
      puVar4 = PTR_DAT_04bd1198 + 0x10;
      puVar5 = PTR_DAT_04bd11a0 + 0x10;
      puVar20 = puVar42;
      do {
        *(undefined1 *)puVar20 = 1;
        puVar20[4] = 0;
        puVar20[5] = 0x100000001;
        *(undefined4 *)(puVar20 + 1) = 0;
        puVar20[2] = 0;
        *(undefined4 *)(puVar20 + 3) = 0;
        puVar20[0x10] = uVar27;
        puVar20[0x11] = uVar15;
        puVar20[0x12] = uVar12;
        puVar20[0x13] = uVar16;
        puVar20[10] = uVar35;
        puVar20[0xb] = uVar33;
        puVar20[0xe] = uVar13;
        puVar20[0xf] = uVar17;
        puVar20[0xc] = uVar28;
        puVar20[0xd] = uVar34;
        puVar20[6] = uVar29;
        puVar20[7] = uVar40;
        puVar20[8] = uVar14;
        puVar20[9] = uVar26;
        puVar20[0x14] = 0x461c40003f800000;
        memset(puVar20 + 0x15,0,0x11c);
        *(undefined4 *)(puVar20 + 0x40) = 0;
        *(undefined1 **)((long)puVar20 + 0x1c4) = &DAT_3f8000003f800000;
        puVar20[0x41] = 0;
        *(undefined4 *)(puVar20 + 0x42) = 0;
        puVar20[0x43] = 0;
        puVar20[0x5b] = 0;
        puVar20[0x5a] = 0;
        puVar20[0x59] = 0;
        puVar20[0x58] = 0;
        puVar20[0x57] = 0;
        puVar20[0x56] = 0;
        puVar20[0x55] = 0;
        puVar20[0x54] = 0;
        puVar20[0x53] = 0;
        puVar20[0x52] = 0;
        puVar20[0x51] = 0;
        puVar20[0x50] = 0;
        puVar20[0x4f] = 0;
        puVar20[0x4e] = 0;
        puVar20[0x4d] = 0;
        puVar20[0x4c] = 0;
        puVar20[0x4b] = 0;
        puVar20[0x4a] = 0;
        *(ulong *)((long)puVar20 + 0x1dc) = uVar27;
        *(ulong *)((long)puVar20 + 0x1e4) = uVar15;
        *(ulong *)((long)puVar20 + 0x1ec) = uVar12;
        *(ulong *)((long)puVar20 + 500) = uVar16;
        *(ulong *)((long)puVar20 + 0x1cc) = uVar13;
        *(ulong *)((long)puVar20 + 0x1d4) = uVar17;
        FUN_0390cee0(puVar20 + 0x5d);
        puVar20[0x7a] = (ulong)&DAT_3f8000003f800000;
        puVar20[0x7b] = 0;
        puVar20[0x7c] = (ulong)&DAT_3f8000003f800000;
        puVar20[0x7d] = 0;
        puVar20[0x7e] = 0;
        puVar20[0x7f] = 0;
        puVar20[0x79] = (ulong)puVar3;
        puVar20[0x80] = 0;
        puVar20[0x81] = 0;
        puVar20[0x82] = 0;
        puVar20[0x83] = 0;
        puVar20[0x84] = 0;
        puVar20[0x85] = 0;
        puVar20[0x87] = 0;
        puVar20[0x88] = 0;
        puVar20[0x89] = 0;
        puVar20[0x8a] = 0;
        puVar20[0x8b] = 0;
        puVar20[0x8c] = 0;
        puVar20[0x8d] = 0;
        puVar20[0x8e] = 0;
        puVar20[0x8f] = 0;
        puVar20[0x90] = 0;
        *(undefined4 *)(puVar20 + 0x91) = 0xffffffff;
        puVar20[0x98] = 0;
        puVar20[0x97] = 0;
        puVar20[0x96] = 0;
        puVar20[0x95] = 0;
        puVar20[0x94] = 0;
        puVar20[0x92] = 0;
        puVar20[0x93] = 0;
        puVar20[0x99] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar20 + 0x9a) = 0x10000;
        *(undefined4 *)(puVar20 + 0x9d) = 0xff;
        puVar20[0x86] = (ulong)puVar4;
        *(undefined4 *)((long)puVar20 + 0x4ec) = 0;
        puVar20[0x9e] = 0x80000000000;
        puVar20[0x9f] = 0;
        puVar20[0xa0] = 0;
        puVar20[0xa1] = 0;
        puVar20[0xac] = 0;
        puVar20[0xab] = 0;
        puVar20[0xaa] = 0;
        puVar20[0xa9] = 0;
        puVar20[0xa8] = 0;
        puVar20[0xa7] = 0;
        puVar20[0xa6] = 0;
        puVar20[0xa5] = 0;
        puVar20[0xa4] = 0;
        puVar20[0xa3] = 0;
        *(undefined4 *)(puVar20 + 0xad) = 0xffffffff;
        puVar20[0xb4] = 0;
        puVar20[0xb3] = 0;
        puVar20[0xb2] = 0;
        puVar20[0xb1] = 0;
        puVar20[0xb0] = 0;
        puVar20[0xae] = 0;
        puVar20[0xaf] = 0;
        puVar20[0xb5] = (ulong)"agl::TextureData";
        *(undefined4 *)(puVar20 + 0xb6) = 0x10000;
        *(undefined4 *)(puVar20 + 0xb9) = 0xff;
        *(undefined4 *)((long)puVar20 + 0x5cc) = 0;
        puVar20[0xa2] = (ulong)puVar5;
        puVar20[0xba] = 0x80000000000;
        puVar20[0xbb] = 0;
        puVar20[0xbc] = 0;
        puVar20[0xbd] = 0;
        (**(code **)PTR_DAT_04bcf220)(puVar20 + 0xb7);
        FUN_0390cee0(puVar20 + 0xbe);
        puVar20[0x5c] = 0;
        puVar20 = puVar20 + 0xda;
      } while (puVar20 != puVar42 + (ulong)uVar31 * 0xda);
      *(uint *)(param_1 + 0x230) = uVar31;
      *(ulong **)(param_1 + 0x238) = puVar42;
    }
  }
LAB_03a73b60:
  uVar31 = param_2[1];
  if ((int)uVar31 < 1) goto LAB_03a73e5c;
  __size = (ulong)uVar31 * 0x1b8 + 8;
  lVar38 = *(long *)PTR_DAT_04bb2698;
  if (lVar38 == 0) {
    puVar20 = malloc(__size);
    puVar4 = PTR_DAT_04bd1078;
    puVar3 = PTR_DAT_04bd1080;
    puVar5 = PTR_DAT_04bd1088;
joined_r0x03a73bf4:
    PTR_DAT_04bd1078 = puVar4;
    PTR_DAT_04bd1080 = puVar3;
    PTR_DAT_04bd1088 = puVar5;
    if (puVar20 != (ulong *)0x0) {
      uVar6 = crc32b(0xffffffff,100,0x4c11db7);
      uVar6 = crc32b(uVar6,0x65,0x4c11db7);
      puVar1 = PTR_DAT_04bd1060 + 0x10;
      puVar2 = PTR_DAT_04bd1090 + 0x10;
      uVar6 = crc32b(uVar6,0x66,0x4c11db7);
      uVar6 = crc32b(uVar6,0x61,0x4c11db7);
      uVar6 = crc32b(uVar6,0x75,0x4c11db7);
      *puVar20 = (ulong)uVar31;
      uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
      uVar44 = crc32b(uVar6,0x74,0x4c11db7);
      puVar3 = puVar3 + 0x10;
      puVar4 = puVar4 + 0x10;
      uVar44 = ~uVar44;
      lVar38 = 0;
      do {
        lVar18 = lVar38 + 0x1b8;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x48) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x28) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x30) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x40) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x38) = puVar5 + 0x10;
        *(undefined1 *)((long)puVar20 + lVar38 + 0x50) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x68) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x60) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x58) = puVar5 + 0x10;
        *(undefined1 *)((long)puVar20 + lVar38 + 0x70) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x88) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x80) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x78) = puVar3;
        *(undefined4 *)((long)puVar20 + lVar38 + 0x90) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0xa8) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0xa0) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x98) = puVar3;
        *(undefined4 *)((long)puVar20 + lVar38 + 0xb0) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 200) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0xc0) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0xb8) = puVar4;
        *(undefined4 *)((long)puVar20 + lVar38 + 0xd0) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0xe8) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0xe0) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0xd8) = puVar4;
        *(undefined4 *)((long)puVar20 + lVar38 + 0xf0) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x108) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x100) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0xf8) = puVar4;
        *(undefined4 *)((long)puVar20 + lVar38 + 0x110) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x128) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x120) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x118) = puVar3;
        *(undefined4 *)((long)puVar20 + lVar38 + 0x130) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x148) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x140) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x138) = puVar4;
        *(undefined4 *)((long)puVar20 + lVar38 + 0x150) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x168) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x160) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x158) = puVar4;
        *(undefined4 *)((long)puVar20 + lVar38 + 0x170) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x188) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x180) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x178) = puVar3;
        *(undefined4 *)((long)puVar20 + lVar38 + 400) = 0;
        *(uint *)((long)puVar20 + lVar38 + 0x1a0) = uVar44;
        *(undefined **)((long)puVar20 + lVar38 + 0x198) = puVar2;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x1b8) = 0x3f80000000000000;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x18) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x20) = 0;
        *(undefined **)((long)puVar20 + lVar38 + 8) = puVar1;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x10) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x1a8) = 0;
        *(undefined8 *)((long)puVar20 + lVar38 + 0x1b0) = 0;
        lVar38 = lVar18;
      } while ((ulong)uVar31 * 0x1b8 != lVar18);
      *(uint *)(param_1 + 0x558) = uVar31;
      *(ulong **)(param_1 + 0x560) = puVar20 + 1;
    }
  }
  else {
    plVar19 = param_3;
    if (param_3 != (long *)0x0) {
LAB_03a73bd0:
      puVar20 = (ulong *)(**(code **)(*plVar19 + 0x30))(plVar19,__size,8);
      puVar4 = PTR_DAT_04bd1078;
      puVar3 = PTR_DAT_04bd1080;
      puVar5 = PTR_DAT_04bd1088;
      goto joined_r0x03a73bf4;
    }
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar19 = (long *)(lVar38 + 8);
    if (lVar18 != 0) {
      plVar19 = (long *)(lVar18 + 0xa8);
    }
    plVar19 = (long *)*plVar19;
    if (plVar19 != (long *)0x0) goto LAB_03a73bd0;
  }
  uVar31 = param_2[1];
  if (0 < (int)uVar31) {
    lVar38 = *(long *)PTR_DAT_04bb2698;
    if (lVar38 == 0) {
      puVar21 = malloc((ulong)uVar31 * 0x2c);
    }
    else {
      plVar19 = param_3;
      if (param_3 == (long *)0x0) {
        lVar18 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar19 = (long *)(lVar38 + 8);
        if (lVar18 != 0) {
          plVar19 = (long *)(lVar18 + 0xa8);
        }
        plVar19 = (long *)*plVar19;
        if (plVar19 == (long *)0x0) goto LAB_03a73e5c;
      }
      puVar21 = (undefined4 *)(**(code **)(*plVar19 + 0x30))(plVar19,(ulong)uVar31 * 0x2c,8);
    }
    if (puVar21 != (undefined4 *)0x0) {
      puVar36 = puVar21;
      do {
        *puVar36 = 0x1000001;
        *(undefined2 *)(puVar36 + 1) = 3;
        *(undefined1 *)((long)puVar36 + 6) = 3;
        puVar36[10] = 0x3f800000;
        *(undefined1 **)(puVar36 + 2) = &DAT_3f8000003f800000;
        *(undefined8 *)(puVar36 + 4) = 0xbf80000041c80000;
        *(undefined8 *)(puVar36 + 6) = 0x3f80000040000000;
        *(undefined8 *)(puVar36 + 8) = 0x3eeb851f3f49ba5e;
        puVar36 = puVar36 + 0xb;
      } while (puVar36 != puVar21 + (ulong)uVar31 * 0xb);
      *(uint *)(param_1 + 0x220) = uVar31;
      *(undefined4 **)(param_1 + 0x228) = puVar21;
    }
  }
LAB_03a73e5c:
  uVar31 = *(uint *)(param_1 + 0x230);
  if (0 < (int)uVar31) {
    uVar44 = 0;
    do {
      uVar32 = param_2[1];
      uVar25 = uVar44;
      if (uVar31 <= uVar44) {
        uVar25 = 0;
      }
      lVar38 = *(long *)(param_1 + 0x238);
      if ((int)uVar32 < 1) {
        puVar43 = (uint *)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x18);
LAB_03a74070:
        puVar39 = (uint *)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x210);
      }
      else {
        uVar40 = (ulong)uVar32 * 0xe0;
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          puVar20 = malloc(uVar40 | 8);
LAB_03a73f28:
          if (puVar20 != (ulong *)0x0) {
            *puVar20 = (ulong)uVar32;
            puVar42 = puVar20 + 1;
            do {
              FUN_0390cee0(puVar42);
              puVar42 = puVar42 + 0x1c;
              uVar40 = uVar40 - 0xe0;
            } while (uVar40 != 0);
            *(uint *)(lVar38 + (ulong)uVar25 * 0x6d0 + 8) = uVar32;
            *(ulong **)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x10) = puVar20 + 1;
          }
        }
        else {
          plVar19 = param_3;
          if (param_3 != (long *)0x0) {
LAB_03a73efc:
            puVar20 = (ulong *)(**(code **)(*plVar19 + 0x30))(plVar19,uVar40 | 8,8);
            goto LAB_03a73f28;
          }
          lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar19 = (long *)(lVar18 + 8);
          if (lVar22 != 0) {
            plVar19 = (long *)(lVar22 + 0xa8);
          }
          plVar19 = (long *)*plVar19;
          if (plVar19 != (long *)0x0) goto LAB_03a73efc;
        }
        puVar43 = (uint *)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x18);
        uVar31 = param_2[1];
        if ((int)uVar31 < 1) goto LAB_03a74070;
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          pvVar23 = malloc((ulong)uVar31 << 3);
joined_r0x03a74214:
          if (pvVar23 != (void *)0x0) {
            *puVar43 = uVar31;
            *(void **)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x20) = pvVar23;
          }
        }
        else {
          plVar19 = param_3;
          if (param_3 != (long *)0x0) {
LAB_03a73fcc:
            pvVar23 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(ulong)uVar31 << 3,8);
            goto joined_r0x03a74214;
          }
          lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar19 = (long *)(lVar18 + 8);
          if (lVar22 != 0) {
            plVar19 = (long *)(lVar22 + 0xa8);
          }
          plVar19 = (long *)*plVar19;
          if (plVar19 != (long *)0x0) goto LAB_03a73fcc;
        }
        uVar31 = param_2[1];
        if ((int)uVar31 < 1) goto LAB_03a74070;
        uVar40 = (ulong)uVar31 * 0xe0;
        lVar18 = *(long *)PTR_DAT_04bb2698;
        if (lVar18 == 0) {
          puVar20 = malloc(uVar40 | 8);
LAB_03a74224:
          if (puVar20 != (ulong *)0x0) {
            lVar18 = lVar38 + (ulong)uVar25 * 0x6d0;
            *puVar20 = (ulong)uVar31;
            puVar42 = puVar20 + 1;
            do {
              FUN_0390cee0(puVar42);
              puVar42 = puVar42 + 0x1c;
              uVar40 = uVar40 - 0xe0;
            } while (uVar40 != 0);
            *(uint *)(lVar18 + 0x200) = uVar31;
            *(ulong **)(lVar18 + 0x208) = puVar20 + 1;
          }
        }
        else {
          plVar19 = param_3;
          if (param_3 != (long *)0x0) {
LAB_03a74054:
            puVar20 = (ulong *)(**(code **)(*plVar19 + 0x30))(plVar19,uVar40 | 8,8);
            goto LAB_03a74224;
          }
          lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar19 = (long *)(lVar18 + 8);
          if (lVar22 != 0) {
            plVar19 = (long *)(lVar22 + 0xa8);
          }
          plVar19 = (long *)*plVar19;
          if (plVar19 != (long *)0x0) goto LAB_03a74054;
        }
        puVar39 = (uint *)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x210);
        uVar31 = param_2[1];
        if (0 < (int)uVar31) {
          lVar18 = *(long *)PTR_DAT_04bb2698;
          if (lVar18 == 0) {
            pvVar23 = malloc((ulong)uVar31 << 3);
          }
          else {
            plVar19 = param_3;
            if (param_3 == (long *)0x0) {
              lVar22 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
              plVar19 = (long *)(lVar18 + 8);
              if (lVar22 != 0) {
                plVar19 = (long *)(lVar22 + 0xa8);
              }
              plVar19 = (long *)*plVar19;
              if (plVar19 == (long *)0x0) goto LAB_03a74078;
            }
            pvVar23 = (void *)(**(code **)(*plVar19 + 0x30))(plVar19,(ulong)uVar31 << 3,8);
          }
          if (pvVar23 != (void *)0x0) {
            *puVar39 = uVar31;
            *(void **)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x218) = pvVar23;
          }
        }
      }
LAB_03a74078:
      uVar31 = *puVar43;
      if (0 < (int)uVar31) {
        if (uVar31 < 8) {
          uVar40 = 0;
        }
        else {
          uVar40 = 0;
          do {
            lVar18 = uVar40 * 8;
            uVar40 = uVar40 + 8;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 8) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 0x10) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 0x18) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 0x20) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 0x28) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 0x30) = 0;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18 + 0x38) = 0;
          } while (((ulong)uVar31 & 0xfffffff8) != uVar40);
        }
        uVar27 = (ulong)uVar31 & 7;
        if ((uVar31 & 7) != 0) {
          lVar18 = uVar40 << 3;
          do {
            uVar27 = uVar27 - 1;
            *(undefined8 *)(*(long *)(puVar43 + 2) + lVar18) = 0;
            lVar18 = lVar18 + 8;
          } while (uVar27 != 0);
        }
      }
      uVar31 = *puVar39;
      if (0 < (int)uVar31) {
        plVar19 = (long *)(lVar38 + (ulong)uVar25 * 0x6d0 + 0x218);
        if (uVar31 < 8) {
          uVar40 = 0;
        }
        else {
          uVar40 = 0;
          do {
            lVar38 = uVar40 * 8;
            uVar40 = uVar40 + 8;
            *(undefined8 *)(*plVar19 + lVar38) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 8) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 0x10) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 0x18) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 0x20) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 0x28) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 0x30) = 0;
            *(undefined8 *)(*plVar19 + lVar38 + 0x38) = 0;
          } while (((ulong)uVar31 & 0xfffffff8) != uVar40);
        }
        uVar27 = (ulong)uVar31 & 7;
        if ((uVar31 & 7) != 0) {
          lVar38 = uVar40 << 3;
          do {
            uVar27 = uVar27 - 1;
            *(undefined8 *)(*plVar19 + lVar38) = 0;
            lVar38 = lVar38 + 8;
          } while (uVar27 != 0);
        }
      }
      uVar31 = *(uint *)(param_1 + 0x230);
      uVar44 = uVar44 + 1;
    } while ((int)uVar44 < (int)uVar31);
  }
  uVar6 = crc32b(0xffffffff,0x73,0x4c11db7);
  uVar7 = crc32b(0xffffffff,100,0x4c11db7);
  uVar6 = crc32b(uVar6,0x68,0x4c11db7);
  uVar7 = crc32b(uVar7,0x65,0x4c11db7);
  uVar8 = crc32b(0xffffffff,0x75,0x4c11db7);
  uVar8 = crc32b(uVar8,0x73,0x4c11db7);
  uVar9 = crc32b(0xffffffff,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar7 = crc32b(uVar7,0x70,0x4c11db7);
  uVar8 = crc32b(uVar8,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,100,0x4c11db7);
  uVar7 = crc32b(uVar7,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x68,0x4c11db7);
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x77,0x4c11db7);
  uVar10 = crc32b(uVar6,0x6d,0x4c11db7);
  uVar10 = crc32b(uVar10,0x61,0x4c11db7);
  uVar10 = crc32b(uVar10,0x70,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
  uVar7 = crc32b(uVar7,99,0x4c11db7);
  uVar6 = crc32b(uVar6,99,0x4c11db7);
  uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
  uVar10 = crc32b(uVar10,0x72,0x4c11db7);
  uVar8 = crc32b(uVar8,0x61,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar10 = crc32b(uVar10,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar7,0x76,0x4c11db7);
  uVar6 = crc32b(uVar6,0x76,0x4c11db7);
  uVar10 = crc32b(uVar10,100,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
  uVar10 = crc32b(uVar10,0x75,0x4c11db7);
  uVar9 = crc32b(uVar9,0x62,0x4c11db7);
  plVar19 = (long *)(param_1 + 0x490);
  if (*(long *)(param_1 + 0x498) != 0) {
    plVar19 = (long *)(*(long *)(param_1 + 0x498) + 0x10);
  }
  uVar8 = crc32b(uVar8,0x79,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar10 = crc32b(uVar10,99,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6d,0x4c11db7);
  uVar7 = crc32b(uVar7,0x76,0x4c11db7);
  uVar6 = crc32b(uVar6,0x76,0x4c11db7);
  uVar10 = crc32b(uVar10,0x65,0x4c11db7);
  uVar31 = crc32b(uVar9,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x4c0) = ~uVar31;
  *plVar19 = param_1 + 0x4b8;
  *(undefined1 *)(param_1 + 0x4d0) = 1;
  *(long *)(param_1 + 0x4c8) = param_1 + 0x4d8;
  *(undefined4 *)(param_1 + 0x4f0) = 2;
  *(long *)(param_1 + 0x4e8) = param_1 + 0x4f8;
  *(undefined1 *)(param_1 + 0x510) = 0;
  *(long *)(param_1 + 0x508) = param_1 + 0x518;
  *(undefined1 *)(param_1 + 0x530) = 1;
  *(undefined8 *)(param_1 + 0x548) = 0;
  *(long *)(param_1 + 0x528) = param_1 + 0x538;
  uVar7 = crc32b(uVar7,0x65,0x4c11db7);
  *(long *)(param_1 + 0x498) = param_1 + 0x538;
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar9 = crc32b(uVar10,0x5f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x61,0x4c11db7);
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6d,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6d,0x4c11db7);
  uVar9 = crc32b(uVar9,0x65,0x4c11db7);
  uVar7 = crc32b(uVar7,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar31 = crc32b(uVar7,0x78,0x4c11db7);
  *(uint *)(param_1 + 0x500) = ~uVar31;
  uVar31 = crc32b(uVar6,0x78,0x4c11db7);
  *(uint *)(param_1 + 0x520) = ~uVar31;
  uVar6 = crc32b(uVar9,0x76,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar31 = crc32b(uVar6,0x6c,0x4c11db7);
  *(uint *)(param_1 + 0x4e0) = ~uVar31;
  uVar6 = crc32b(uVar8,99,0x4c11db7);
  uVar31 = crc32b(uVar6,0x68,0x4c11db7);
  *(uint *)(param_1 + 0x540) = ~uVar31;
  *(int *)(param_1 + 0x4a0) = *(int *)(param_1 + 0x4a0) + 5;
  local_a0 = PTR_DAT_04bb2020;
  *(undefined1 *)(param_1 + 0x550) = 0;
  local_a0 = local_a0 + 0x10;
  local_98 = (byte *)0x407f903;
  uVar24 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar24 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
  }
  *(undefined8 *)(param_1 + 0x4b0) = uVar24;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  uVar31 = (uint)*local_98;
  if (*local_98 == 0) {
    uVar44 = 0;
  }
  else {
    uVar44 = 0xffffffff;
    pbVar30 = local_98;
    do {
      pbVar30 = pbVar30 + 1;
      uVar44 = crc32b(uVar44,uVar31,0x4c11db7);
      uVar31 = (uint)*pbVar30;
    } while (uVar31 != 0);
    uVar44 = ~uVar44;
  }
  *(uint *)(param_1 + 0x4a4) = uVar44;
  plVar19 = (long *)(param_1 + 0x1d8);
  if (*(long *)(param_1 + 0x1e0) != 0) {
    plVar19 = (long *)(*(long *)(param_1 + 0x1e0) + 0x20);
  }
  *plVar19 = param_1 + 0x488;
  *(long *)(param_1 + 0x1e0) = param_1 + 0x488;
  puVar3 = PTR_DAT_04bb2020;
  uVar31 = *(uint *)(param_1 + 0x558);
  if (0 < (int)uVar31) {
    uVar44 = 0;
    puVar4 = PTR_DAT_04bb2020 + 0x10;
    do {
      lVar38 = *(long *)(param_1 + 0x560);
      uVar25 = uVar44;
      if (uVar31 <= uVar44) {
        uVar25 = 0;
      }
      lVar18 = lVar38 + (ulong)uVar25 * 0x1b8;
      local_98 = (byte *)0x40f8111;
      *(undefined8 *)(lVar18 + 0x40) = 0;
      local_a0 = puVar4;
      (**(code **)(puVar3 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      plVar19 = (long *)(lVar18 + 8);
      lVar22 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar18 + 0x38) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar18 + 0x30;
      *(long *)(lVar18 + 0x10) = lVar18 + 0x30;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined1 *)(lVar22 + 0x48) = 1;
      puVar1 = PTR_DAT_04bb2020;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x40dc68f;
      *(undefined8 *)(lVar22 + 0x60) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar41 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar22 + 0x58) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar22 + 0x50;
      *(long *)(lVar18 + 0x10) = lVar22 + 0x50;
      *(undefined1 *)(lVar41 + 0x68) = 0;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      local_98 = (byte *)0x407e8bb;
      *(undefined8 *)(lVar41 + 0x80) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar22 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar41 + 0x78) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar41 + 0x70;
      *(long *)(lVar18 + 0x10) = lVar41 + 0x70;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar22 + 0x88) = 3;
      puVar1 = PTR_DAT_04bb2020;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x406f2ee;
      *(undefined8 *)(lVar22 + 0xa0) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar41 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar22 + 0x98) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar22 + 0x90;
      *(long *)(lVar18 + 0x10) = lVar22 + 0x90;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar41 + 0xa8) = 0x100;
      local_98 = (byte *)0x40e6d33;
      *(undefined8 *)(lVar41 + 0xc0) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar22 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar41 + 0xb8) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar41 + 0xb0;
      *(long *)(lVar18 + 0x10) = lVar41 + 0xb0;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar22 + 200) = 0x3f800000;
      puVar1 = PTR_DAT_04bb2020;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x4098ff9;
      *(undefined8 *)(lVar22 + 0xe0) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar41 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar22 + 0xd8) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar22 + 0xd0;
      *(long *)(lVar18 + 0x10) = lVar22 + 0xd0;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar41 + 0xe8) = 0xbf800000;
      local_98 = (byte *)0x40e6d48;
      *(undefined8 *)(lVar41 + 0x100) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar22 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar41 + 0xf8) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar41 + 0xf0;
      *(long *)(lVar18 + 0x10) = lVar41 + 0xf0;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar22 + 0x108) = 0x3f800000;
      puVar1 = PTR_DAT_04bb2020;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x40ada3a;
      *(undefined8 *)(lVar22 + 0x120) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar41 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar22 + 0x118) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar22 + 0x110;
      *(long *)(lVar18 + 0x10) = lVar22 + 0x110;
      *(undefined4 *)(lVar41 + 0x128) = 0;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      local_98 = (byte *)0x409e4fd;
      *(undefined8 *)(lVar41 + 0x140) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar22 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar41 + 0x138) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar41 + 0x130;
      *(long *)(lVar18 + 0x10) = lVar41 + 0x130;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar22 + 0x148) = 0x3f800000;
      puVar1 = PTR_DAT_04bb2020;
      puVar5 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x408ee1d;
      *(undefined8 *)(lVar22 + 0x160) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar41 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar22 + 0x158) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar22 + 0x150;
      *(long *)(lVar18 + 0x10) = lVar22 + 0x150;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar41 + 0x168) = 0x41c80000;
      local_98 = (byte *)0x4074533;
      *(undefined8 *)(lVar41 + 0x180) = 0;
      local_a0 = puVar5;
      (**(code **)(puVar1 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        do {
          local_98 = local_98 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*local_98;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      lVar22 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(uint *)(lVar41 + 0x178) = uVar31;
      plVar11 = plVar19;
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar11 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *plVar11 = lVar41 + 0x170;
      *(long *)(lVar18 + 0x10) = lVar41 + 0x170;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      *(undefined4 *)(lVar22 + 0x188) = 3;
      puVar5 = PTR_DAT_04bb2020;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x40b2f38;
      *(undefined8 *)(lVar22 + 0x1a0) = 0;
      (**(code **)(puVar5 + 0x28))(&local_a0);
      uVar31 = (uint)*local_98;
      if (*local_98 != 0) {
        uVar32 = 0xffffffff;
        pbVar30 = local_98;
        do {
          pbVar30 = pbVar30 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*pbVar30;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      if (*(long *)(lVar18 + 0x10) != 0) {
        plVar19 = (long *)(*(long *)(lVar18 + 0x10) + 0x10);
      }
      *(uint *)(lVar22 + 0x198) = uVar31;
      *plVar19 = lVar22 + 400;
      *(long *)(lVar18 + 0x10) = lVar22 + 400;
      *(int *)(lVar18 + 0x18) = *(int *)(lVar18 + 0x18) + 1;
      lVar38 = lVar38 + (ulong)uVar25 * 0x1b8;
      *(undefined8 *)(lVar38 + 0x1a8) = 0x3f49ba5e3f800000;
      *(undefined8 *)(lVar38 + 0x1b0) = 0x3f8000003eeb851f;
      FUN_006d8678(&local_a0,"unit_%d",uVar44);
      uVar24 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar24 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
      }
      *(undefined8 *)(lVar18 + 0x28) = uVar24;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      uVar25 = (uint)*local_98;
      uVar31 = 0;
      if (*local_98 != 0) {
        uVar31 = 0xffffffff;
        pbVar30 = local_98;
        do {
          pbVar30 = pbVar30 + 1;
          uVar31 = crc32b(uVar31,uVar25,0x4c11db7);
          uVar25 = (uint)*pbVar30;
        } while (uVar25 != 0);
        uVar31 = ~uVar31;
      }
      *(uint *)(lVar18 + 0x1c) = uVar31;
      uVar44 = uVar44 + 1;
      plVar19 = (long *)(param_1 + 0x1d8);
      if (*(long *)(param_1 + 0x1e0) != 0) {
        plVar19 = (long *)(*(long *)(param_1 + 0x1e0) + 0x20);
      }
      *plVar19 = lVar18;
      *(long *)(param_1 + 0x1e0) = lVar18;
      uVar31 = *(uint *)(param_1 + 0x558);
    } while ((int)uVar44 < (int)uVar31);
  }
  *(undefined4 *)(param_1 + 0x218) = *(undefined4 *)(param_1 + 0x4f0);
  *(undefined1 *)(param_1 + 0x21c) = *(undefined1 *)(param_1 + 0x510);
  *(undefined1 *)(param_1 + 0x21d) = *(undefined1 *)(param_1 + 0x530);
  *(undefined1 *)(param_1 + 0x21e) = *(undefined1 *)(param_1 + 0x550);
  if (0 < (int)uVar31) {
    iVar37 = 0;
    do {
      FUN_03a74d70(param_1,iVar37);
      iVar37 = iVar37 + 1;
    } while (iVar37 < *(int *)(param_1 + 0x558));
  }
  return;
}

