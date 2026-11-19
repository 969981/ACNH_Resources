
bool FUN_039c41f0(long param_1,long param_2,long *param_3,undefined8 param_4,long param_5)

{
  size_t __size;
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  ulong *puVar16;
  long lVar17;
  ulong *puVar18;
  ulong *puVar19;
  ulong uVar20;
  uint uVar21;
  byte *pbVar22;
  undefined8 uVar23;
  uint uVar24;
  long *plVar25;
  long lVar26;
  long *plVar27;
  ulong *puVar28;
  uint uVar29;
  uint uVar30;
  ulong *puVar31;
  ulong *puVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  undefined *local_70;
  byte *local_68;
  
  uVar30 = *(uint *)(param_2 + 0x2c);
  if ((int)uVar30 < 1) goto LAB_039c4b30;
  __size = (ulong)uVar30 * 0x338 + 8;
  lVar26 = *(long *)PTR_DAT_04bb2698;
  if (lVar26 == 0) {
    puVar18 = malloc(__size);
joined_r0x039c429c:
    if (puVar18 != (ulong *)0x0) {
      uVar9 = crc32b(0xffffffff,0x76,0x4c11db7);
      uVar10 = crc32b(0xffffffff,0x74,0x4c11db7);
      uVar11 = crc32b(0xffffffff,100,0x4c11db7);
      uVar9 = crc32b(uVar9,0x6f,0x4c11db7);
      uVar10 = crc32b(uVar10,0x79,0x4c11db7);
      uVar11 = crc32b(uVar11,0x61,0x4c11db7);
      uVar9 = crc32b(uVar9,0x78,0x4c11db7);
      uVar11 = crc32b(uVar11,0x74,0x4c11db7);
      puVar19 = puVar18 + 1;
      *puVar18 = (ulong)uVar30;
      uVar9 = crc32b(uVar9,0x65,0x4c11db7);
      uVar11 = crc32b(uVar11,0x61,0x4c11db7);
      puVar1 = PTR_DAT_04bd1070 + 0x10;
      uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
      uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
      puVar2 = PTR_DAT_04bd1060 + 0x10;
      uVar9 = crc32b(uVar9,0x5f,0x4c11db7);
      uVar11 = crc32b(uVar11,0x62,0x4c11db7);
      puVar3 = PTR_DAT_04bb3768 + 0x10;
      puVar4 = PTR_DAT_04bd10b0 + 0x10;
      uVar12 = crc32b(0xffffffff,0x61,0x4c11db7);
      uVar9 = crc32b(uVar9,0x73,0x4c11db7);
      uVar11 = crc32b(uVar11,0x75,0x4c11db7);
      uVar10 = crc32b(uVar10,0x70,0x4c11db7);
      uVar29 = crc32b(uVar10,0x65,0x4c11db7);
      puVar5 = PTR_DAT_04bd1360 + 0x10;
      uVar9 = crc32b(uVar9,0x74,0x4c11db7);
      uVar10 = crc32b(uVar11,0x66,0x4c11db7);
      puVar6 = PTR_DAT_04bd1358 + 0x10;
      uVar29 = ~uVar29;
      uVar9 = crc32b(uVar9,0x65,0x4c11db7);
      uVar10 = crc32b(uVar10,0x66,0x4c11db7);
      uVar9 = crc32b(uVar9,0x70,0x4c11db7);
      uVar10 = crc32b(uVar10,0x65,0x4c11db7);
      uVar9 = crc32b(uVar9,0x5f,0x4c11db7);
      uVar13 = crc32b(uVar10,0x72,0x4c11db7);
      uVar9 = crc32b(uVar9,0x70,0x4c11db7);
      uVar9 = crc32b(uVar9,0x6f,0x4c11db7);
      uVar14 = crc32b(uVar9,0x73,0x4c11db7);
      uVar9 = crc32b(0xffffffff,0x69,0x4c11db7);
      uVar10 = crc32b(uVar12,0x61,0x4c11db7);
      uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
      uVar10 = crc32b(uVar10,0x62,0x4c11db7);
      uVar9 = crc32b(uVar9,100,0x4c11db7);
      uVar10 = crc32b(uVar10,0x62,0x4c11db7);
      uVar9 = crc32b(uVar9,0x65,0x4c11db7);
      uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
      uVar15 = crc32b(uVar9,0x78,0x4c11db7);
      uVar9 = crc32b(uVar10,0x6d,0x4c11db7);
      puVar7 = PTR_DAT_04bd10a8 + 0x10;
      plVar25 = (long *)PTR_PTR_04bb2238;
      plVar27 = (long *)PTR_DAT_04bd1140;
      puVar18 = puVar19;
      do {
        puVar18[4] = 0;
        puVar32 = puVar18 + 1;
        *puVar32 = 0;
        puVar18[2] = 0;
        puVar18[3] = 0;
        *puVar18 = (ulong)puVar1;
        lVar26 = *plVar27;
        puVar18[6] = 0;
        puVar18[7] = 0;
        uVar20 = 0;
        if (lVar26 != 0) {
          uVar20 = FUN_03954f70(lVar26,plVar25);
        }
        lVar26 = *plVar25;
        puVar18[8] = uVar20;
        (**(code **)(lVar26 + 0x18))(plVar25);
        pbVar22 = (byte *)plVar25[1];
        uVar24 = (uint)*pbVar22;
        if (*pbVar22 == 0) {
          uVar21 = 0;
        }
        else {
          uVar21 = 0xffffffff;
          do {
            pbVar22 = pbVar22 + 1;
            uVar21 = crc32b(uVar21,uVar24,0x4c11db7);
            uVar24 = (uint)*pbVar22;
          } while (uVar24 != 0);
          uVar21 = ~uVar21;
        }
        *(uint *)(puVar18 + 5) = uVar21;
        *puVar18 = (ulong)&PTR_FUN_04b6ac20;
        puVar18[0xc] = 0;
        puVar18[0xd] = 0;
        puVar18[0xe] = 0;
        *(undefined4 *)(puVar18 + 0x12) = 0;
        *(undefined1 *)((long)puVar18 + 0xb3) = 0;
        puVar28 = puVar18 + 9;
        *puVar28 = (ulong)puVar2;
        puVar18[0xf] = (ulong)puVar7;
        *(uint *)(puVar18 + 0x10) = ~uVar15;
        puVar18[10] = (ulong)(puVar18 + 0xf);
        *(undefined4 *)(puVar18 + 0x15) = 8;
        puVar18[0x14] = (ulong)((long)puVar18 + 0xac);
        if ((undefined *)((long)puVar18 + 0xac) != &DAT_04085431) {
          *(undefined1 *)(puVar18 + 0x16) = 0;
          *(undefined4 *)((long)puVar18 + 0xac) = 0x6c6c756e;
        }
        puVar8 = PTR_DAT_04bd10a8 + 0x10;
        puVar31 = puVar18 + 0x17;
        *puVar31 = (ulong)puVar8;
        puVar18[0x1e] = 0;
        puVar18[0x1f] = 0;
        puVar18[0x26] = (ulong)puVar4;
        puVar18[0x23] = (ulong)(puVar18 + 0x26);
        uVar10 = crc32b(uVar9,0x69,0x4c11db7);
        puVar18[0x36] = (ulong)(puVar18 + 0x3b);
        puVar18[0x3d] = (ulong)(puVar18 + 0x3f);
        puVar18[0x41] = (ulong)(puVar18 + 0x43);
        uVar10 = crc32b(uVar10,0x6e,0x4c11db7);
        puVar18[0x28] = (ulong)(puVar18 + 0x2b);
        puVar18[0x21] = (ulong)puVar4;
        puVar18[0x1c] = (ulong)(puVar18 + 0x21);
        puVar18[0x1d] = (ulong)(puVar18 + 0x2b);
        puVar18[0x3b] = (ulong)puVar8;
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        puVar18[0x3f] = (ulong)puVar8;
        puVar18[0x43] = (ulong)puVar8;
        puVar18[0x52] = (ulong)puVar8;
        puVar18[0x56] = (ulong)puVar8;
        uVar10 = crc32b(uVar10,0x70,0x4c11db7);
        puVar18[0x5a] = (ulong)puVar8;
        puVar18[0x5e] = (ulong)puVar8;
        uVar10 = crc32b(uVar10,0x6f,0x4c11db7);
        puVar18[0x24] = 0;
        puVar18[0x29] = 0;
        puVar18[0x19] = 0;
        uVar24 = crc32b(uVar10,0x73,0x4c11db7);
        *(uint *)(puVar18 + 0x18) = uVar29;
        puVar18[0x11] = (ulong)puVar31;
        puVar18[0xb] = (ulong)puVar31;
        *(undefined4 *)(puVar18 + 0x1a) = 0;
        puVar18[0x20] = 0;
        *(undefined4 *)(puVar18 + 0x25) = 0;
        *(undefined4 *)(puVar18 + 0x2a) = 0;
        puVar18[0x2b] = (ulong)puVar4;
        puVar18[0x30] = 0;
        *(undefined4 *)(puVar18 + 0x31) = 0;
        *(uint *)(puVar18 + 0x3c) = uVar29;
        *(undefined4 *)(puVar18 + 0x3e) = 0;
        *(undefined4 *)(puVar18 + 0x42) = 0;
        *(undefined4 *)(puVar18 + 0x46) = 0;
        *(undefined4 *)(puVar18 + 0x4b) = 0;
        *(undefined1 *)((long)puVar18 + 0x25c) = 0;
        *(uint *)(puVar18 + 0x53) = uVar29;
        *(undefined4 *)(puVar18 + 0x55) = 0;
        *(undefined4 *)(puVar18 + 0x59) = 0;
        *(undefined4 *)(puVar18 + 0x5d) = 0;
        puVar18[100] = 0;
        puVar18[0x65] = 0;
        *(undefined4 *)(puVar18 + 0x66) = 0;
        *(undefined1 *)((long)puVar18 + 0x334) = 0;
        *(uint *)(puVar18 + 0x22) = ~uVar24;
        uVar10 = crc32b(uVar9,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x78,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x70,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6f,0x4c11db7);
        uVar24 = crc32b(uVar10,0x73,0x4c11db7);
        *(uint *)(puVar18 + 0x27) = ~uVar24;
        uVar10 = crc32b(0xffffffff,0x6d,0x4c11db7);
        uVar10 = crc32b(uVar10,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x78,0x4c11db7);
        puVar18[0x39] = 0;
        puVar18[0x3a] = 0;
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        puVar18[0x49] = 0;
        puVar18[0x4a] = 0;
        uVar11 = crc32b(uVar10,0x69,0x4c11db7);
        uVar10 = crc32b(uVar10,0x73,0x4c11db7);
        puVar18[0x50] = 0;
        puVar18[0x51] = 0;
        uVar11 = crc32b(uVar11,0x6e,0x4c11db7);
        uVar11 = crc32b(uVar11,100,0x4c11db7);
        uVar11 = crc32b(uVar11,0x65,0x4c11db7);
        uVar11 = crc32b(uVar11,0x78,0x4c11db7);
        uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
        uVar11 = crc32b(uVar11,0x6e,0x4c11db7);
        uVar11 = crc32b(uVar11,0x75,0x4c11db7);
        uVar24 = crc32b(uVar11,0x6d,0x4c11db7);
        *(uint *)(puVar18 + 0x44) = ~uVar24;
        uVar11 = crc32b(0xffffffff,0x75,0x4c11db7);
        uVar11 = crc32b(uVar11,0x73,0x4c11db7);
        uVar11 = crc32b(uVar11,0x65,0x4c11db7);
        uVar11 = crc32b(uVar11,100,0x4c11db7);
        uVar11 = crc32b(uVar11,0x5f,0x4c11db7);
        uVar12 = crc32b(uVar11,0x69,0x4c11db7);
        uVar12 = crc32b(uVar12,0x6e,0x4c11db7);
        uVar12 = crc32b(uVar12,100,0x4c11db7);
        uVar12 = crc32b(uVar12,0x65,0x4c11db7);
        uVar12 = crc32b(uVar12,0x78,0x4c11db7);
        uVar12 = crc32b(uVar12,0x5f,0x4c11db7);
        uVar12 = crc32b(uVar12,0x6e,0x4c11db7);
        uVar12 = crc32b(uVar12,0x75,0x4c11db7);
        uVar24 = crc32b(uVar12,0x6d,0x4c11db7);
        *(uint *)(puVar18 + 0x40) = ~uVar24;
        uVar12 = crc32b(uVar15,0x5f,0x4c11db7);
        uVar12 = crc32b(uVar12,0x62,0x4c11db7);
        uVar12 = crc32b(uVar12,0x75,0x4c11db7);
        uVar12 = crc32b(uVar12,0x66,0x4c11db7);
        uVar12 = crc32b(uVar12,0x66,0x4c11db7);
        uVar12 = crc32b(uVar12,0x65,0x4c11db7);
        uVar24 = crc32b(uVar12,0x72,0x4c11db7);
        *(uint *)(puVar18 + 0x48) = ~uVar24;
        puVar18[0x45] = (ulong)(puVar18 + 0x47);
        puVar18[0x37] = (ulong)(puVar18 + 0x47);
        puVar18[0x38] = 0;
        puVar18[0x4d] = (ulong)(puVar18 + 0x52);
        puVar18[0x35] = (ulong)&PTR_FUN_04b6ab18;
        puVar18[0x4c] = (ulong)&PTR_FUN_04b6ab70;
        puVar18[0x13] = (ulong)puVar3;
        *(undefined4 *)(puVar18 + 0xc) = 2;
        uVar10 = crc32b(uVar10,0x68,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,100,0x4c11db7);
        uVar10 = crc32b(uVar10,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x74,0x4c11db7);
        uVar10 = crc32b(uVar10,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6e,0x4c11db7);
        uVar10 = crc32b(uVar10,0x75,0x4c11db7);
        uVar24 = crc32b(uVar10,0x6d,0x4c11db7);
        *(uint *)(puVar18 + 0x57) = ~uVar24;
        puVar18[0x54] = (ulong)(puVar18 + 0x56);
        puVar31 = puVar18 + 0x1b;
        *puVar31 = (ulong)&PTR_LAB_04b6abc8;
        *(uint *)(puVar18 + 0x2c) = ~uVar14;
        *(undefined4 *)(puVar18 + 0x1e) = 3;
        puVar18[0x2d] = 0;
        puVar18[0x2e] = 0x42c8000042c80000;
        *(undefined4 *)(puVar18 + 0x2f) = 0x42c80000;
        *(undefined8 *)((long)puVar18 + 0x18c) = 0x7f7fffff7f7fffff;
        *(undefined8 *)((long)puVar18 + 0x194) = 0xff7fffff7f7fffff;
        *(undefined8 *)((long)puVar18 + 0x19c) = 0xff7fffffff7fffff;
        *(undefined4 *)(puVar18 + 0x38) = 4;
        puVar18[0x47] = (ulong)puVar5;
        uVar10 = crc32b(uVar11,100,0x4c11db7);
        uVar10 = crc32b(uVar10,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x74,0x4c11db7);
        uVar10 = crc32b(uVar10,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6e,0x4c11db7);
        uVar10 = crc32b(uVar10,0x75,0x4c11db7);
        uVar24 = crc32b(uVar10,0x6d,0x4c11db7);
        *(uint *)(puVar18 + 0x5b) = ~uVar24;
        puVar18[0x58] = (ulong)(puVar18 + 0x5a);
        uVar10 = crc32b(0xffffffff,0x70,0x4c11db7);
        uVar10 = crc32b(uVar10,0x65,0x4c11db7);
        uVar10 = crc32b(uVar10,0x72,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x70,0x4c11db7);
        uVar10 = crc32b(uVar10,0x72,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x62,0x4c11db7);
        uVar10 = crc32b(uVar10,0x65,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x66,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6c,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x61,0x4c11db7);
        uVar10 = crc32b(uVar10,0x74,0x4c11db7);
        uVar10 = crc32b(uVar10,0x5f,0x4c11db7);
        uVar10 = crc32b(uVar10,0x6e,0x4c11db7);
        uVar10 = crc32b(uVar10,0x75,0x4c11db7);
        uVar24 = crc32b(uVar10,0x6d,0x4c11db7);
        *(uint *)(puVar18 + 0x5f) = ~uVar24;
        puVar18[0x5c] = (ulong)(puVar18 + 0x5e);
        *(undefined4 *)(puVar18 + 0x61) = 0x1b;
        *(uint *)(puVar18 + 99) = ~uVar13;
        puVar18[0x60] = (ulong)(puVar18 + 0x62);
        puVar18[0x4e] = (ulong)(puVar18 + 0x62);
        puVar18[0x4f] = 0;
        *(undefined4 *)(puVar18 + 0x4f) = 5;
        puVar18[0x62] = (ulong)puVar6;
        local_70 = PTR_DAT_04bb2020 + 0x10;
        local_68 = (byte *)0x405f195;
        uVar20 = 0;
        if (*(long *)PTR_DAT_04bd1140 != 0) {
          uVar20 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_70);
        }
        puVar18[0xe] = uVar20;
        (**(code **)(local_70 + 0x18))(&local_70);
        uVar24 = (uint)*local_68;
        if (*local_68 != 0) {
          uVar21 = 0xffffffff;
          do {
            local_68 = local_68 + 1;
            uVar21 = crc32b(uVar21,uVar24,0x4c11db7);
            uVar24 = (uint)*local_68;
          } while (uVar24 != 0);
          uVar24 = ~uVar21;
        }
        *(uint *)((long)puVar18 + 100) = uVar24;
        puVar16 = puVar32;
        if (puVar18[2] != 0) {
          puVar16 = (ulong *)(puVar18[2] + 0x20);
        }
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar16 = (ulong)puVar28;
        puVar18[2] = (ulong)puVar28;
        plVar27 = (long *)PTR_DAT_04bd1140;
        local_68 = &DAT_04083f79;
        uVar20 = 0;
        if (*(long *)PTR_DAT_04bd1140 != 0) {
          uVar20 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_70);
        }
        puVar18[0x20] = uVar20;
        (**(code **)(local_70 + 0x18))(&local_70);
        uVar24 = (uint)*local_68;
        if (*local_68 != 0) {
          uVar21 = 0xffffffff;
          do {
            local_68 = local_68 + 1;
            uVar21 = crc32b(uVar21,uVar24,0x4c11db7);
            uVar24 = (uint)*local_68;
          } while (uVar24 != 0);
          uVar24 = ~uVar21;
        }
        *(uint *)((long)puVar18 + 0xf4) = uVar24;
        lVar26 = *plVar27;
        puVar28 = puVar32;
        if (puVar18[2] != 0) {
          puVar28 = (ulong *)(puVar18[2] + 0x20);
        }
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar28 = (ulong)puVar31;
        puVar18[2] = (ulong)puVar31;
        local_68 = (byte *)0x40c25af;
        uVar20 = 0;
        if (lVar26 != 0) {
          uVar20 = FUN_03954f70(lVar26,&local_70);
        }
        puVar18[0x3a] = uVar20;
        (**(code **)(local_70 + 0x18))(&local_70);
        plVar25 = (long *)PTR_PTR_04bb2238;
        uVar24 = (uint)*local_68;
        if (*local_68 != 0) {
          uVar21 = 0xffffffff;
          do {
            local_68 = local_68 + 1;
            uVar21 = crc32b(uVar21,uVar24,0x4c11db7);
            uVar24 = (uint)*local_68;
          } while (uVar24 != 0);
          uVar24 = ~uVar21;
        }
        *(uint *)((long)puVar18 + 0x1c4) = uVar24;
        lVar26 = *plVar27;
        puVar28 = puVar32;
        if (puVar18[2] != 0) {
          puVar28 = (ulong *)(puVar18[2] + 0x20);
        }
        local_70 = PTR_DAT_04bb2020 + 0x10;
        *puVar28 = (ulong)(puVar18 + 0x35);
        puVar18[2] = (ulong)(puVar18 + 0x35);
        local_68 = (byte *)0x405f19f;
        uVar20 = 0;
        if (lVar26 != 0) {
          uVar20 = FUN_03954f70(lVar26,&local_70);
        }
        puVar18[0x51] = uVar20;
        (**(code **)(local_70 + 0x18))(&local_70);
        uVar21 = (uint)*local_68;
        uVar24 = 0;
        if (*local_68 != 0) {
          uVar24 = 0xffffffff;
          pbVar22 = local_68;
          do {
            pbVar22 = pbVar22 + 1;
            uVar24 = crc32b(uVar24,uVar21,0x4c11db7);
            uVar21 = (uint)*pbVar22;
          } while (uVar21 != 0);
          uVar24 = ~uVar24;
        }
        *(uint *)((long)puVar18 + 0x27c) = uVar24;
        if (puVar18[2] != 0) {
          puVar32 = (ulong *)(puVar18[2] + 0x20);
        }
        *puVar32 = (ulong)(puVar18 + 0x4c);
        puVar18[2] = (ulong)(puVar18 + 0x4c);
        puVar18 = puVar18 + 0x67;
      } while (puVar18 != puVar19 + (ulong)uVar30 * 0x67);
      *(uint *)(param_1 + 0x2c8) = uVar30;
      *(ulong **)(param_1 + 0x2d0) = puVar19;
    }
  }
  else {
    if (param_3 != (long *)0x0) {
LAB_039c4274:
      puVar18 = (ulong *)(**(code **)(*param_3 + 0x30))(param_3,__size,8);
      goto joined_r0x039c429c;
    }
    lVar17 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    param_3 = (long *)(lVar26 + 8);
    if (lVar17 != 0) {
      param_3 = (long *)(lVar17 + 0xa8);
    }
    param_3 = (long *)*param_3;
    if (param_3 != (long *)0x0) goto LAB_039c4274;
  }
  uVar30 = *(uint *)(param_2 + 0x2c);
LAB_039c4b30:
  if (uVar30 == 0) {
    uVar30 = 0;
  }
  else {
    uVar29 = 0;
    do {
      uVar30 = uVar29;
      if (*(uint *)(param_1 + 0x2c8) <= uVar29) {
        uVar30 = 0;
      }
      lVar26 = *(long *)(param_1 + 0x2d0) + (long)(int)uVar30 * 0x338;
      *(uint *)(lVar26 + 0x90) = uVar29;
      FUN_038d1270(lVar26 + 0x98,&DAT_040b2de0,uVar29);
      uVar30 = *(uint *)(param_2 + 0x2c);
      uVar29 = uVar29 + 1;
    } while (uVar29 < uVar30);
  }
  *(uint *)(param_1 + 0x2c0) = uVar30;
  fVar33 = *(float *)(param_2 + 8);
  *(float *)(param_1 + 800) = fVar33;
  fVar34 = *(float *)(param_2 + 0xc);
  *(float *)(param_1 + 0x324) = fVar34;
  fVar35 = *(float *)(param_2 + 0x10);
  *(float *)(param_1 + 0x328) = fVar35;
  fVar36 = *(float *)(param_2 + 0x14);
  *(float *)(param_1 + 0x348) = fVar36;
  fVar37 = *(float *)(param_2 + 0x18);
  *(float *)(param_1 + 0x34c) = fVar37;
  fVar38 = *(float *)(param_2 + 0x1c);
  *(float *)(param_1 + 0x350) = fVar38;
  *(undefined4 *)(param_1 + 0x370) = *(undefined4 *)(param_2 + 0x20);
  *(undefined4 *)(param_1 + 0x374) = *(undefined4 *)(param_2 + 0x24);
  *(undefined4 *)(param_1 + 0x378) = *(undefined4 *)(param_2 + 0x28);
  if (fVar35 < fVar38 && (fVar34 < fVar37 && fVar33 < fVar36)) {
    FUN_039c33f0(param_1 + 0x2d8);
  }
  if (param_5 == 0) {
    uVar23 = 0;
    *(undefined8 *)(param_1 + 0x3b0) = 0;
  }
  else {
    *(long *)(param_1 + 0x3b0) = param_5;
    uVar23 = *(undefined8 *)(param_5 + 0x250);
  }
  *(undefined8 *)(param_1 + 0x3a8) = uVar23;
  return fVar35 < fVar38 && (fVar34 < fVar37 && fVar33 < fVar36);
}

