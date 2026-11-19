
void FUN_03916fe0(long param_1,uint *param_2,long *param_3)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  ulong *puVar7;
  int iVar8;
  undefined *puVar9;
  float fVar10;
  long lVar11;
  long *plVar12;
  ulong *puVar13;
  undefined8 uVar14;
  void *pvVar15;
  ulong *puVar16;
  long *plVar17;
  byte bVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  code *pcVar23;
  ulong *puVar24;
  int iVar25;
  byte *pbVar26;
  undefined4 uVar27;
  ulong uVar28;
  ulong uVar29;
  long lVar30;
  int iVar31;
  int iVar32;
  ulong uVar33;
  uint uVar34;
  void *__src;
  long *plVar35;
  float fVar36;
  int local_188;
  undefined4 uStack_184;
  long local_180;
  undefined8 uStack_178;
  int local_170;
  undefined4 uStack_16c;
  long local_168;
  undefined8 uStack_160;
  int local_158;
  undefined4 uStack_154;
  long local_150;
  undefined8 uStack_148;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined *local_128;
  byte *local_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  char *pcStack_98;
  undefined4 local_90;
  undefined *local_88;
  undefined1 *puStack_80;
  undefined *local_78;
  undefined1 *puStack_70;
  
  if ((char)param_2[9] != '\0') {
    *(uint *)(param_1 + 0x450) = *(uint *)(param_1 + 0x450) | 0x10000;
  }
  *(uint *)(param_1 + 0x2b0) = param_2[3];
  *(uint *)(param_1 + 0x2ac) = param_2[6];
  *(uint *)(param_1 + 0x2b4) = param_2[4];
  *(uint *)(param_1 + 0x2b8) = param_2[5];
  if ((*param_2 == 0) || (param_2[1] == 0)) {
    *(undefined4 *)(param_1 + 0x2a4) = 0;
    *(undefined4 *)(param_1 + 700) = 0;
    *(undefined4 *)(param_1 + 0x27c) = 0;
    *(undefined8 *)(param_1 + 0x29c) = 0;
  }
  else {
    *(uint *)(param_1 + 0x2a0) = param_2[1];
    uVar19 = *param_2;
    *(uint *)(param_1 + 0x2a4) = uVar19;
    *(uint *)(param_1 + 700) = param_2[2];
    if (0 < (int)uVar19) {
      uVar33 = (ulong)uVar19 * 0x2a70 | 8;
      lVar30 = *(long *)PTR_DAT_04bb2698;
      if (lVar30 == 0) {
        puVar13 = malloc(uVar33);
      }
      else {
        plVar12 = param_3;
        if (param_3 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar30 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) goto LAB_039170f0;
        }
        puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,uVar33,8);
      }
      if (puVar13 != (ulong *)0x0) {
        uVar27 = crc32b(0xffffffff,0x70,0x4c11db7);
        uVar27 = crc32b(uVar27,0x6f,0x4c11db7);
        puVar16 = puVar13 + 1;
        *puVar13 = (ulong)uVar19;
        pvVar15 = (void *)((long)&local_118 + 4);
        uVar27 = crc32b(uVar27,0x73,0x4c11db7);
        uVar6 = crc32b(0xffffffff,0x66,0x4c11db7);
        uVar27 = crc32b(uVar27,0x69,0x4c11db7);
        puVar2 = PTR_DAT_04bb2f70 + 0x10;
        uVar6 = crc32b(uVar6,0x61,0x4c11db7);
        puVar5 = PTR_DAT_04bb2bc0 + 0x10;
        puVar3 = PTR_DAT_04bbd6c8 + 0x10;
        uVar27 = crc32b(uVar27,0x74,0x4c11db7);
        uVar34 = crc32b(uVar6,0x72,0x4c11db7);
        uVar27 = crc32b(uVar27,0x69,0x4c11db7);
        uVar27 = crc32b(uVar27,0x6f,0x4c11db7);
        uVar20 = crc32b(uVar27,0x6e,0x4c11db7);
        plVar12 = (long *)PTR_PTR_04bb2238;
        plVar17 = (long *)PTR_DAT_04bd1140;
        puVar13 = puVar16;
        do {
          puVar13[0xc] = 0;
          *puVar13 = (ulong)&PTR_FUN_04b65f78;
          puVar13[1] = 0;
          lVar30 = *plVar17;
          *(undefined4 *)(puVar13 + 0xd) = 0xffffffff;
          *(undefined1 *)(puVar13 + 0x17) = 0;
          puVar13[0x1a] = 0;
          *(undefined4 *)(puVar13 + 0x1b) = 0;
          puVar13[0x1e] = 0;
          *(undefined4 *)(puVar13 + 0x1f) = 0;
          puVar13[0x25] = 0;
          puVar13[0x14] = 0;
          puVar13[0x15] = (ulong)"agl::TextureData";
          *(undefined4 *)(puVar13 + 0x16) = 0x10000;
          *(undefined8 *)((long)puVar13 + 0xfc) = 0xffffffffffffffff;
          puVar13[2] = 0;
          puVar13[3] = 0;
          puVar13[4] = 0;
          puVar13[5] = 0;
          puVar13[6] = 0;
          puVar13[7] = 0;
          puVar13[8] = 0;
          puVar13[9] = 0;
          puVar13[10] = 0;
          puVar13[0xb] = 0;
          puVar13[0xe] = 0;
          puVar13[0xf] = 0;
          puVar13[0x10] = 0;
          puVar13[0x11] = 0;
          puVar13[0x12] = 0;
          puVar13[0x13] = 0;
          puVar13[0x18] = 0;
          puVar13[0x19] = 0;
          puVar13[0x1c] = 0;
          puVar13[0x1d] = 0;
          puVar13[0x21] = (ulong)&PTR_LAB_04b66628;
          puVar13[0x22] = 0;
          puVar13[0x23] = 0;
          puVar13[0x24] = 0;
          puVar13[0x27] = 0;
          puVar13[0x28] = 0;
          uVar33 = 0;
          if (lVar30 != 0) {
            uVar33 = FUN_03954f70(lVar30,plVar12);
          }
          lVar30 = *plVar12;
          puVar13[0x29] = uVar33;
          (**(code **)(lVar30 + 0x18))(plVar12);
          pbVar26 = (byte *)plVar12[1];
          uVar21 = (uint)*pbVar26;
          if (*pbVar26 != 0) {
            uVar22 = 0xffffffff;
            do {
              pbVar26 = pbVar26 + 1;
              uVar22 = crc32b(uVar22,uVar21,0x4c11db7);
              uVar21 = (uint)*pbVar26;
            } while (uVar21 != 0);
            uVar21 = ~uVar22;
          }
          *(uint *)(puVar13 + 0x26) = uVar21;
          *puVar13 = (ulong)&PTR_FUN_04b65fc0;
          puVar13[0x21] = (ulong)&PTR_LAB_04b66028;
          puVar13[0x2e] = (ulong)&PTR_LAB_04b66170;
          puVar13[0x2f] = 0;
          local_118 = CONCAT44(local_118._4_4_,0x40);
          lVar30 = *plVar12;
          puVar13[0x2a] = 0;
          puVar13[0x2b] = 0;
          puVar24 = puVar13 + 0x2e;
          local_d8[0] = local_d8[0] & 0xffffff;
          puVar13[0x2c] = 0;
          puVar13[0x2d] = 0;
          puVar13[0x30] = 0;
          puVar13[0x31] = 0;
          puVar13[0x32] = 0;
          puVar13[0x33] = 0;
          local_128 = puVar2;
          local_120 = pvVar15;
          (**(code **)(lVar30 + 0x18))(plVar12);
          __src = (void *)plVar12[1];
          if (pvVar15 != __src) {
            (**(code **)(*plVar12 + 0x18))(plVar12);
            lVar30 = 0;
            do {
              if (*(char *)(plVar12[1] + lVar30) == '\0') goto LAB_03917eb0;
              lVar11 = plVar12[1] + lVar30;
              if (*(char *)(lVar11 + 1) == '\0') {
                lVar30 = lVar30 + 1;
                goto LAB_03917eb0;
              }
              if (*(char *)(lVar11 + 2) == '\0') {
                lVar30 = lVar30 + 2;
                goto LAB_03917eb0;
              }
              lVar30 = lVar30 + 3;
            } while (lVar30 != 0x80001);
            lVar30 = 0;
LAB_03917eb0:
            iVar31 = (int)lVar30;
            if ((int)local_118 <= (int)lVar30) {
              iVar31 = (int)local_118 + -1;
            }
            memcpy(pvVar15,__src,(long)iVar31);
            *(undefined1 *)((long)pvVar15 + (long)iVar31) = 0;
          }
          puVar4 = PTR_DAT_04bb2020 + 0x10;
          puStack_70 = &DAT_040d7f5b;
          puStack_80 = &DAT_040d7f5b;
          local_128 = puVar5;
          local_88 = puVar4;
          local_78 = puVar4;
          FUN_039127a0(puVar13 + 0x34,&local_128,&local_78,&local_88,puVar24);
          puVar13[0x42] = (ulong)&PTR_LAB_04b663a8;
          fVar10 = DAT_04c4bac0;
          puVar7 = puVar13 + 0x2f;
          if (puVar13[0x30] != 0) {
            puVar7 = (ulong *)(puVar13[0x30] + 0x10);
          }
          fVar36 = DAT_04c4bac0 * 0.1;
          *(uint *)(puVar13 + 0x43) = ~uVar20;
          *puVar7 = (ulong)(puVar13 + 0x42);
          uVar27 = crc32b(0xffffffff,0x6e,0x4c11db7);
          puVar13[0x44] = (ulong)(puVar13 + 0x47);
          puVar13[0x47] = (ulong)&PTR_LAB_04b66268;
          puVar13[0x4b] = (ulong)&PTR_LAB_04b66268;
          uVar27 = crc32b(uVar27,0x65,0x4c11db7);
          puVar13[0x45] = 0;
          *(undefined4 *)(puVar13 + 0x46) = 0;
          puVar13[0x4d] = 0;
          *(uint *)(puVar13 + 0x4c) = ~uVar34;
          puVar13[0x49] = (ulong)(puVar13 + 0x4b);
          puVar13[0x30] = (ulong)(puVar13 + 0x4b);
          uVar27 = crc32b(uVar27,0x61,0x4c11db7);
          *(float *)(puVar13 + 0x4a) = fVar36;
          *(int *)(puVar13 + 0x31) = (int)puVar13[0x31] + 3;
          *(float *)(puVar13 + 0x4e) = fVar10 * 1000.0;
          uVar21 = crc32b(uVar27,0x72,0x4c11db7);
          *(uint *)(puVar13 + 0x48) = ~uVar21;
          FUN_03928640(puVar13 + 0x4f);
          uVar27 = crc32b(0xffffffff,0x72,0x4c11db7);
          uVar6 = crc32b(0xffffffff,0x67,0x4c11db7);
          uVar27 = crc32b(uVar27,0x65,0x4c11db7);
          uVar6 = crc32b(uVar6,0x61,0x4c11db7);
          uVar27 = crc32b(uVar27,0x6e,0x4c11db7);
          uVar6 = crc32b(uVar6,0x75,0x4c11db7);
          uVar27 = crc32b(uVar27,100,0x4c11db7);
          uVar6 = crc32b(uVar6,0x73,0x4c11db7);
          uVar27 = crc32b(uVar27,0x65,0x4c11db7);
          uVar6 = crc32b(uVar6,0x73,0x4c11db7);
          uVar27 = crc32b(uVar27,0x72,0x4c11db7);
          uVar6 = crc32b(uVar6,0x69,0x4c11db7);
          uVar27 = crc32b(uVar27,0x69,0x4c11db7);
          uVar6 = crc32b(uVar6,0x61,0x4c11db7);
          uVar27 = crc32b(uVar27,0x6e,0x4c11db7);
          uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
          uVar27 = crc32b(uVar27,0x67,0x4c11db7);
          uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
          puVar13[0x4b7] = (ulong)&PTR_LAB_04b66308;
          uVar27 = crc32b(uVar27,0x5f,0x4c11db7);
          uVar6 = crc32b(uVar6,0x72,0x4c11db7);
          uVar27 = crc32b(uVar27,0x72,0x4c11db7);
          uVar6 = crc32b(uVar6,0x65,0x4c11db7);
          uVar27 = crc32b(uVar27,0x65,0x4c11db7);
          uVar6 = crc32b(uVar6,0x70,0x4c11db7);
          uVar27 = crc32b(uVar27,0x70,0x4c11db7);
          uVar6 = crc32b(uVar6,0x65,0x4c11db7);
          uVar27 = crc32b(uVar27,0x65,0x4c11db7);
          uVar6 = crc32b(uVar6,0x74,0x4c11db7);
          uVar27 = crc32b(uVar27,0x74,0x4c11db7);
          uVar6 = crc32b(uVar6,0x69,0x4c11db7);
          uVar27 = crc32b(uVar27,0x69,0x4c11db7);
          uVar6 = crc32b(uVar6,0x74,0x4c11db7);
          uVar27 = crc32b(uVar27,0x74,0x4c11db7);
          uVar6 = crc32b(uVar6,0x69,0x4c11db7);
          uVar27 = crc32b(uVar27,0x69,0x4c11db7);
          uVar6 = crc32b(uVar6,0x6f,0x4c11db7);
          uVar27 = crc32b(uVar27,0x6f,0x4c11db7);
          uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
          uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
          puVar7 = puVar13 + 0x2f;
          if (puVar13[0x30] != 0) {
            puVar7 = (ulong *)(puVar13[0x30] + 0x10);
          }
          uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
          uVar6 = crc32b(uVar6,0x75,0x4c11db7);
          uVar21 = crc32b(uVar6,0x6d,0x4c11db7);
          *(uint *)(puVar13 + 0x4b8) = ~uVar21;
          uVar27 = crc32b(uVar27,0x6e,0x4c11db7);
          *puVar7 = (ulong)(puVar13 + 0x4b7);
          *(undefined4 *)(puVar13 + 0x4ba) = 0;
          *(undefined4 *)(puVar13 + 0x4bb) = 0;
          puVar13[0x4bc] = (ulong)&PTR_LAB_04b66308;
          puVar13[0x4c0] = 0;
          *(undefined4 *)(puVar13 + 0x4c2) = 0x3f800000;
          puVar13[0x4c4] = (ulong)((long)puVar13 + 0x262c);
          fVar10 = DAT_04c4bac0;
          uVar33 = puVar13[0x31];
          *(undefined1 *)((long)puVar13 + 0x272f) = 0;
          *(undefined1 *)((long)puVar13 + 0x262c) = 0;
          uVar27 = crc32b(uVar27,0x5f,0x4c11db7);
          puVar13[0x4b9] = (ulong)(puVar13 + 0x4bc);
          *(undefined4 *)(puVar13 + 0x4bf) = 1;
          uVar27 = crc32b(uVar27,0x6e,0x4c11db7);
          *(float *)((long)puVar13 + 0x25dc) = fVar10;
          puVar13[0x4c1] = 0x4180000000000001;
          uVar27 = crc32b(uVar27,0x75,0x4c11db7);
          uVar21 = crc32b(uVar27,0x6d,0x4c11db7);
          *(uint *)(puVar13 + 0x4bd) = ~uVar21;
          *(undefined4 *)(puVar13 + 0x4c5) = 0x104;
          puVar13[0x4c3] = (ulong)puVar3;
          memset(puVar13 + 0x4e6,0,0x300);
          puVar13[0x4e7] = (ulong)puVar4;
          puVar9 = PTR_DAT_04bb2120;
          puVar13[0x548] = (ulong)&PTR_LAB_04b661c8;
          uVar27 = crc32b(0xffffffff,0x65,0x4c11db7);
          puVar13[0x4ea] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x277c) = 0x3f800000;
          uVar27 = crc32b(uVar27,0x6e,0x4c11db7);
          puVar13[0x4f3] = (ulong)puVar4;
          uVar27 = crc32b(uVar27,0x61,0x4c11db7);
          puVar13[0x4e8] = (ulong)puVar9;
          puVar13[0x4eb] = (ulong)puVar9;
          puVar13[0x4f4] = (ulong)puVar9;
          uVar27 = crc32b(uVar27,0x62,0x4c11db7);
          puVar13[0x4f7] = (ulong)puVar9;
          puVar13[0x500] = (ulong)puVar9;
          puVar13[0x503] = (ulong)puVar9;
          uVar27 = crc32b(uVar27,0x6c,0x4c11db7);
          puVar13[0x50c] = (ulong)puVar9;
          puVar13[0x50f] = (ulong)puVar9;
          puVar13[0x518] = (ulong)puVar9;
          uVar21 = crc32b(uVar27,0x65,0x4c11db7);
          puVar13[0x51b] = (ulong)puVar9;
          puVar13[0x524] = (ulong)puVar9;
          puVar13[0x527] = (ulong)puVar9;
          puVar13[0x530] = (ulong)puVar9;
          puVar13[0x533] = (ulong)puVar9;
          puVar13[0x53c] = (ulong)puVar9;
          puVar13[0x53f] = (ulong)puVar9;
          puVar13[0x4be] = (ulong)(puVar13 + 0x548);
          puVar13[0x30] = (ulong)(puVar13 + 0x548);
          *(int *)(puVar13 + 0x31) = (int)uVar33 + 3;
          puVar13[0x4f6] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x27dc) = 0x3f800000;
          puVar13[0x4ff] = (ulong)puVar4;
          puVar13[0x502] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x283c) = 0x3f800000;
          puVar13[0x50b] = (ulong)puVar4;
          puVar13[0x50e] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x289c) = 0x3f800000;
          puVar13[0x517] = (ulong)puVar4;
          puVar13[0x51a] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x28fc) = 0x3f800000;
          puVar13[0x523] = (ulong)puVar4;
          puVar13[0x526] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x295c) = 0x3f800000;
          puVar13[0x52f] = (ulong)puVar4;
          puVar13[0x532] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x29bc) = 0x3f800000;
          puVar13[0x53b] = (ulong)puVar4;
          puVar13[0x53e] = (ulong)puVar4;
          *(undefined4 *)((long)puVar13 + 0x2a1c) = 0x3f800000;
          puVar13[0x546] = 0;
          puVar13[0x54a] = 0;
          *(uint *)(puVar13 + 0x549) = ~uVar21;
          *(undefined1 *)(puVar13 + 0x54b) = 0;
          *(undefined4 *)(puVar13 + 0x54c) = 0;
          puVar13[0x54d] = 0;
          *(undefined4 *)(puVar13 + 0x547) = 2;
          plVar17 = (long *)PTR_DAT_04bd1140;
          local_120 = (byte *)0x40a3281;
          uVar33 = 0;
          local_128 = puVar4;
          if (*(long *)PTR_DAT_04bd1140 != 0) {
            uVar33 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_128);
          }
          plVar12 = (long *)PTR_PTR_04bb2238;
          puVar13[0x33] = uVar33;
          (**(code **)(local_128 + 0x18))(&local_128);
          uVar22 = (uint)*local_120;
          uVar21 = 0;
          if (*local_120 != 0) {
            uVar21 = 0xffffffff;
            pbVar26 = local_120;
            do {
              pbVar26 = pbVar26 + 1;
              uVar21 = crc32b(uVar21,uVar22,0x4c11db7);
              uVar22 = (uint)*pbVar26;
            } while (uVar22 != 0);
            uVar21 = ~uVar21;
          }
          *(uint *)((long)puVar13 + 0x18c) = uVar21;
          puVar7 = puVar13 + 0x22;
          if (puVar13[0x23] != 0) {
            puVar7 = (ulong *)(puVar13[0x23] + 0x20);
          }
          *puVar7 = (ulong)puVar24;
          puVar13[0x23] = (ulong)puVar24;
          FUN_03912954(puVar13);
          puVar13 = puVar13 + 0x54e;
        } while (puVar13 != puVar16 + (ulong)uVar19 * 0x54e);
        *(uint *)(param_1 + 0x200) = uVar19;
        *(ulong **)(param_1 + 0x208) = puVar16;
      }
    }
  }
LAB_039170f0:
  iVar31 = *(int *)(param_1 + 0x2a0);
  if (iVar31 != 0) {
    local_d8[0] = 0xffffffff;
    local_a0 = 0;
    pcStack_98 = "agl::TextureData";
    local_90 = 0x10000;
    local_e8 = 0;
    uStack_e0 = 0;
    local_f8 = 0;
    uStack_f0 = 0;
    local_108 = 0;
    uStack_100 = 0;
    local_118 = 0;
    uStack_110 = 0;
    local_128 = (undefined *)0x0;
    local_120 = (byte *)0x0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    FUN_0390a734(&local_128,8,*(undefined4 *)(param_1 + 0x2b0),iVar31,iVar31,6,0xf,0,0,1);
    iVar31 = uStack_f0._4_4_;
    if (uStack_f0._4_4_ < 0x21) {
      iVar31 = 0x20;
    }
    *(int *)(param_1 + 0x27c) = iVar31 + (int)local_e8 + local_e8._4_4_;
    FUN_0390a734(&local_128,1,0x14,1,1,1,1,1,0,1);
    iVar31 = uStack_f0._4_4_;
    if (uStack_f0._4_4_ < 0x21) {
      iVar31 = 0x20;
    }
    *(int *)(param_1 + 0x29c) = iVar31 + (int)local_e8;
    FUN_038fd0e0(local_d8);
  }
  iVar31 = *(int *)(param_1 + 0x27c);
  *(undefined4 *)(param_1 + 0x2a8) = 0;
  puVar5 = PTR_DAT_04bb2cc8;
  iVar25 = *(int *)(param_1 + 0x2a4) * iVar31;
  iVar8 = *(int *)(param_1 + 0x29c);
  iVar32 = iVar8 * *(int *)(param_1 + 0x2a4);
  *(int *)(param_1 + 0x278) = iVar25;
  puVar3 = PTR_DAT_04bd0fa8;
  puVar2 = PTR_DAT_04bb2698;
  if (iVar25 == 0) {
    plVar12 = (long *)0x0;
    lVar30 = 0;
    uVar27 = 0;
    iVar25 = 0;
  }
  else {
    lVar30 = *(long *)PTR_DAT_04bb2698;
    if (lVar30 == 0) {
      plVar12 = malloc(0x38);
    }
    else {
      plVar12 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar30 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0x0;
          goto LAB_03917284;
        }
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x38,8);
    }
LAB_03917284:
    bVar18 = 0;
    plVar35 = plVar12 + 1;
    *plVar35 = 0;
    plVar12[6] = 0;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(undefined1 *)(plVar12 + 5) = 0;
    *plVar12 = (long)(puVar5 + 0x10);
    plVar17 = param_3;
    if (param_3 == (long *)0x0) {
      lVar11 = *(long *)puVar2;
      lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar11 + 8);
      if (lVar30 != 0) {
        plVar17 = (long *)(lVar30 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      bVar18 = *(byte *)(plVar12 + 5);
    }
    uVar14 = *(undefined8 *)puVar3;
    plVar12[6] = 0;
    *plVar35 = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(byte *)(plVar12 + 5) = bVar18 & 0xfe;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    FUN_038f8590(uVar14,plVar12,plVar17,iVar25,4,4);
    lVar30 = plVar12[3];
    *(undefined2 *)((long)plVar12 + 0x2a) = 4;
    iVar25 = 0;
    if (plVar12[4] != 0) {
      iVar25 = (int)*plVar35 - *(int *)(plVar12[4] + 0x10);
    }
    if (lVar30 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined4 *)(lVar30 + 0x104);
    }
  }
  *(int *)(param_1 + 0x260) = iVar25;
  *(undefined4 *)(param_1 + 0x264) = uVar27;
  *(long *)(param_1 + 0x268) = lVar30;
  *(long **)(param_1 + 0x270) = plVar12;
  *(int *)(param_1 + 0x298) = iVar32;
  puVar2 = PTR_DAT_04bb2698;
  if (iVar32 == 0) {
    plVar12 = (long *)0x0;
    lVar30 = 0;
    uVar27 = 0;
    iVar25 = 0;
  }
  else {
    lVar30 = *(long *)PTR_DAT_04bb2698;
    if (lVar30 == 0) {
      plVar12 = malloc(0x38);
    }
    else {
      plVar12 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar30 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) {
          plVar12 = (long *)0x0;
          goto LAB_039173dc;
        }
      }
      plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0x38,8);
    }
LAB_039173dc:
    bVar18 = 0;
    plVar12[6] = 0;
    plVar35 = plVar12 + 1;
    *plVar35 = 0;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(undefined1 *)(plVar12 + 5) = 0;
    *plVar12 = (long)(puVar5 + 0x10);
    plVar17 = param_3;
    if (param_3 == (long *)0x0) {
      lVar11 = *(long *)puVar2;
      lVar30 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar17 = (long *)(lVar11 + 8);
      if (lVar30 != 0) {
        plVar17 = (long *)(lVar30 + 0xa8);
      }
      plVar17 = (long *)*plVar17;
      bVar18 = *(byte *)(plVar12 + 5);
    }
    uVar14 = *(undefined8 *)puVar3;
    plVar12[6] = 0;
    *plVar35 = 0;
    plVar12[2] = 0;
    plVar12[3] = 0;
    plVar12[4] = 0;
    *(byte *)(plVar12 + 5) = bVar18 & 0xfe;
    *(undefined2 *)((long)plVar12 + 0x2a) = 0;
    FUN_038f8590(uVar14,plVar12,plVar17,iVar32,4,8);
    lVar30 = plVar12[3];
    *(undefined2 *)((long)plVar12 + 0x2a) = 8;
    iVar25 = 0;
    if (plVar12[4] != 0) {
      iVar25 = (int)*plVar35 - *(int *)(plVar12[4] + 0x10);
    }
    if (lVar30 == 0) {
      uVar27 = 0;
    }
    else {
      uVar27 = *(undefined4 *)(lVar30 + 0x104);
    }
  }
  *(long *)(param_1 + 0x288) = lVar30;
  *(int *)(param_1 + 0x280) = iVar25;
  *(undefined4 *)(param_1 + 0x284) = uVar27;
  *(long **)(param_1 + 0x290) = plVar12;
  if (*(int *)(param_1 + 0x2a0) != 0) {
    if ((*(byte *)(param_1 + 0x452) & 1) == 0) {
      uVar19 = *(uint *)(param_1 + 0x200);
      if (0 < (int)uVar19) {
        iVar32 = 0;
        iVar25 = 0;
        uVar34 = 0;
        do {
          local_168 = *(long *)(param_1 + 0x268);
          uVar20 = uVar34;
          if (uVar19 <= uVar34) {
            uVar20 = 0;
          }
          if (local_168 == 0) {
            local_170 = 0;
            uStack_16c = 0;
            uStack_160 = 0;
          }
          else {
            local_170 = iVar32 + *(int *)(param_1 + 0x260);
            uStack_16c = *(undefined4 *)(param_1 + 0x264);
            uStack_160 = *(undefined8 *)(param_1 + 0x270);
          }
          uVar27 = 0;
          if (local_168 != 0) {
            uVar27 = *(undefined4 *)(param_1 + 0x27c);
          }
          local_180 = *(long *)(param_1 + 0x288);
          if (local_180 == 0) {
            uStack_178 = 0;
            uStack_184 = 0;
            local_188 = 0;
          }
          else {
            local_188 = iVar25 + *(int *)(param_1 + 0x280);
            uStack_184 = *(undefined4 *)(param_1 + 0x284);
            uStack_178 = *(undefined8 *)(param_1 + 0x290);
          }
          plVar12 = (long *)(*(long *)(param_1 + 0x208) + (ulong)uVar20 * 0x2a70);
          uVar6 = 0;
          if (local_180 != 0) {
            uVar6 = *(undefined4 *)(param_1 + 0x29c);
          }
          (**(code **)(*plVar12 + 0x18))(plVar12,param_3,param_1,&local_170,uVar27,&local_188,uVar6)
          ;
          *(uint *)((long)plVar12 + 0xfc) = uVar34;
          *(undefined4 *)(plVar12 + 0x20) = 0;
          uVar34 = uVar34 + 1;
          iVar25 = iVar25 + iVar8;
          uVar19 = *(uint *)(param_1 + 0x200);
          iVar32 = iVar32 + iVar31;
        } while ((int)uVar34 < (int)uVar19);
        goto LAB_03917944;
      }
    }
    else {
      lVar30 = *(long *)PTR_DAT_04bb2698;
      if (lVar30 == 0) {
        pvVar15 = malloc(0x558);
      }
      else {
        plVar12 = param_3;
        if (param_3 == (long *)0x0) {
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar30 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 == (long *)0x0) {
            pvVar15 = (void *)0x0;
            goto LAB_0391760c;
          }
        }
        pvVar15 = (void *)(**(code **)(*plVar12 + 0x30))(plVar12,0x558,8);
      }
LAB_0391760c:
      FUN_0390cee0(pvVar15);
      *(undefined8 *)((long)pvVar15 + 0x200) = 0;
      *(undefined8 *)((long)pvVar15 + 0x318) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar15 + 800) = 0xffffffffffffffff;
      *(undefined8 *)((long)pvVar15 + 0x120) = 0;
      *(undefined8 *)((long)pvVar15 + 0x128) = 0;
      *(undefined4 *)((long)pvVar15 + 0x130) = 0xffffffff;
      *(undefined4 *)((long)pvVar15 + 0x178) = 0x10000;
      *(undefined4 *)((long)pvVar15 + 0x208) = 0xffffffff;
      *(undefined8 *)((long)pvVar15 + 0x210) = 0;
      *(undefined8 *)((long)pvVar15 + 0x218) = 0;
      *(undefined8 *)((long)pvVar15 + 0x220) = 0;
      *(undefined8 *)((long)pvVar15 + 0x228) = 0;
      *(undefined8 *)((long)pvVar15 + 0x230) = 0;
      *(undefined8 *)((long)pvVar15 + 0x238) = 0;
      *(undefined8 *)((long)pvVar15 + 0x240) = 0;
      *(char **)((long)pvVar15 + 0x248) = "agl::TextureData";
      *(undefined4 *)((long)pvVar15 + 0x250) = 0x10000;
      *(undefined8 *)((long)pvVar15 + 600) = 0;
      *(undefined8 *)((long)pvVar15 + 0x260) = 0;
      *(undefined8 *)((long)pvVar15 + 0x268) = 0;
      *(undefined8 *)((long)pvVar15 + 0x270) = 0;
      *(undefined8 *)((long)pvVar15 + 0x278) = 0;
      *(undefined8 *)((long)pvVar15 + 0x280) = 0;
      *(undefined8 *)((long)pvVar15 + 0x288) = 0;
      *(undefined8 *)((long)pvVar15 + 0x290) = 0;
      *(undefined8 *)((long)pvVar15 + 0x298) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2a0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2a8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2b0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2b8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2c0) = 0;
      *(undefined4 *)((long)pvVar15 + 0x2c8) = 0xffffffff;
      *(undefined8 *)((long)pvVar15 + 0x2d0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2d8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2e0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2e8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2f0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x2f8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x300) = 0;
      *(char **)((long)pvVar15 + 0x308) = "agl::TextureData";
      *(undefined4 *)((long)pvVar15 + 0x310) = 0x10000;
      *(undefined1 **)((long)pvVar15 + 0x330) = &DAT_3f8000003f800000;
      *(undefined8 *)((long)pvVar15 + 0x338) = 0;
      *(undefined8 *)((long)pvVar15 + 0x110) = 0;
      *(undefined8 *)((long)pvVar15 + 0x118) = 0;
      *(undefined8 *)((long)pvVar15 + 0x100) = 0;
      *(undefined8 *)((long)pvVar15 + 0x108) = 0;
      *(undefined8 *)((long)pvVar15 + 0xf0) = 0;
      *(undefined8 *)((long)pvVar15 + 0xf8) = 0;
      *(undefined8 *)((long)pvVar15 + 0xe0) = 0;
      *(undefined8 *)((long)pvVar15 + 0xe8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x138) = 0;
      *(undefined8 *)((long)pvVar15 + 0x140) = 0;
      *(undefined8 *)((long)pvVar15 + 0x148) = 0;
      *(undefined8 *)((long)pvVar15 + 0x150) = 0;
      *(undefined8 *)((long)pvVar15 + 0x158) = 0;
      *(undefined8 *)((long)pvVar15 + 0x160) = 0;
      *(undefined8 *)((long)pvVar15 + 0x168) = 0;
      *(char **)((long)pvVar15 + 0x170) = "agl::TextureData";
      *(undefined8 *)((long)pvVar15 + 0x180) = 0;
      *(undefined8 *)((long)pvVar15 + 0x188) = 0;
      *(undefined8 *)((long)pvVar15 + 400) = 0;
      *(undefined8 *)((long)pvVar15 + 0x198) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1a0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1a8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1b0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1b8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1c0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1c8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1d0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1d8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1e0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1e8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1f0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x1f8) = 0;
      puVar2 = PTR_DAT_04bd1178;
      *(undefined1 **)((long)pvVar15 + 0x340) = &DAT_3f8000003f800000;
      *(undefined **)((long)pvVar15 + 0x328) = puVar2 + 0x10;
      *(undefined8 *)((long)pvVar15 + 0x348) = 0;
      *(undefined8 *)((long)pvVar15 + 0x350) = 0;
      *(undefined8 *)((long)pvVar15 + 0x358) = 0;
      *(undefined8 *)((long)pvVar15 + 0x360) = 0;
      *(undefined8 *)((long)pvVar15 + 0x368) = 0;
      *(undefined8 *)((long)pvVar15 + 0x370) = 0;
      *(undefined8 *)((long)pvVar15 + 0x378) = 0;
      *(undefined8 *)((long)pvVar15 + 0x380) = 0;
      *(undefined8 *)((long)pvVar15 + 0x388) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3e0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3d8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3d0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3c8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3c0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3b8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3b0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3a8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3a0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x398) = 0;
      *(undefined4 *)((long)pvVar15 + 1000) = 0xffffffff;
      *(undefined8 *)((long)pvVar15 + 0x420) = 0;
      *(undefined8 *)((long)pvVar15 + 0x418) = 0;
      *(undefined8 *)((long)pvVar15 + 0x410) = 0;
      *(undefined8 *)((long)pvVar15 + 0x408) = 0;
      *(undefined8 *)((long)pvVar15 + 0x400) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3f8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x3f0) = 0;
      *(char **)((long)pvVar15 + 0x428) = "agl::TextureData";
      *(undefined4 *)((long)pvVar15 + 0x430) = 0x10000;
      *(undefined4 *)((long)pvVar15 + 0x448) = 0xff;
      *(undefined **)((long)pvVar15 + 0x390) = PTR_DAT_04bd1198 + 0x10;
      *(undefined4 *)((long)pvVar15 + 0x44c) = 0;
      *(undefined8 *)((long)pvVar15 + 0x450) = 0x80000000000;
      *(undefined8 *)((long)pvVar15 + 0x468) = 0;
      *(undefined8 *)((long)pvVar15 + 0x460) = 0;
      *(undefined8 *)((long)pvVar15 + 0x458) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4c0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4b8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4b0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4a8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4a0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x498) = 0;
      *(undefined8 *)((long)pvVar15 + 0x490) = 0;
      *(undefined8 *)((long)pvVar15 + 0x488) = 0;
      *(undefined8 *)((long)pvVar15 + 0x480) = 0;
      *(undefined8 *)((long)pvVar15 + 0x478) = 0;
      *(undefined4 *)((long)pvVar15 + 0x4c8) = 0xffffffff;
      *(undefined8 *)((long)pvVar15 + 0x500) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4f8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4f0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4e8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4e0) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4d8) = 0;
      *(undefined8 *)((long)pvVar15 + 0x4d0) = 0;
      *(char **)((long)pvVar15 + 0x508) = "agl::TextureData";
      *(undefined4 *)((long)pvVar15 + 0x510) = 0x10000;
      *(undefined4 *)((long)pvVar15 + 0x528) = 0xff;
      *(undefined4 *)((long)pvVar15 + 0x52c) = 0;
      *(undefined **)((long)pvVar15 + 0x470) = PTR_DAT_04bd11a0 + 0x10;
      *(undefined8 *)((long)pvVar15 + 0x530) = 0x80000000000;
      *(undefined8 *)((long)pvVar15 + 0x548) = 0;
      *(undefined8 *)((long)pvVar15 + 0x540) = 0;
      pcVar23 = *(code **)PTR_DAT_04bcf220;
      *(undefined8 *)((long)pvVar15 + 0x538) = 0;
      (*pcVar23)((long)pvVar15 + 0x518);
      *(undefined1 *)((long)pvVar15 + 0x550) = 0;
      *(char **)((long)pvVar15 + 0x170) = "agl::env::CubeMap";
      local_140 = *(undefined4 *)(param_1 + 0x260);
      uStack_13c = *(undefined4 *)(param_1 + 0x264);
      local_138 = *(undefined8 *)(param_1 + 0x268);
      uStack_130 = *(undefined8 *)(param_1 + 0x270);
      *(void **)(param_1 + 0x2f8) = pvVar15;
      FUN_0391c138(pvVar15,&local_140,*(undefined4 *)(param_1 + 0x278),
                   *(undefined4 *)(param_1 + 0x2b0),*(undefined4 *)(param_1 + 0x2a0),
                   *(undefined4 *)(param_1 + 0x2a4),*(undefined4 *)(param_1 + 700));
      uVar19 = *(uint *)(param_1 + 0x200);
      if (0 < (int)uVar19) {
        iVar31 = 0;
        uVar34 = 0;
        do {
          local_150 = *(long *)(param_1 + 0x288);
          uVar20 = uVar34;
          if (uVar19 <= uVar34) {
            uVar20 = 0;
          }
          if (local_150 == 0) {
            local_158 = 0;
            uStack_154 = 0;
            uStack_148 = 0;
          }
          else {
            local_158 = iVar31 + *(int *)(param_1 + 0x280);
            uStack_154 = *(undefined4 *)(param_1 + 0x284);
            uStack_148 = *(undefined8 *)(param_1 + 0x290);
          }
          plVar12 = (long *)(*(long *)(param_1 + 0x208) + (ulong)uVar20 * 0x2a70);
          uVar27 = 0;
          if (local_150 != 0) {
            uVar27 = *(undefined4 *)(param_1 + 0x29c);
          }
          (**(code **)(*plVar12 + 0x20))
                    (plVar12,param_3,param_1,*(undefined8 *)(param_1 + 0x2f8),&local_158,uVar27);
          *(uint *)((long)plVar12 + 0xfc) = uVar34;
          *(uint *)(plVar12 + 0x20) = uVar34;
          uVar34 = uVar34 + 1;
          iVar31 = iVar31 + iVar8;
          uVar19 = *(uint *)(param_1 + 0x200);
        } while ((int)uVar34 < (int)uVar19);
LAB_03917944:
        puVar2 = PTR_DAT_04bd1140;
        if (0 < (int)uVar19) {
          uVar34 = 0;
          do {
            uVar20 = uVar34;
            if (uVar19 <= uVar34) {
              uVar20 = 0;
            }
            lVar30 = *(long *)(param_1 + 0x208) + (ulong)uVar20 * 0x2a70;
            FUN_006d8678(&local_128,"cubemap_unit_%d",*(undefined4 *)(lVar30 + 0xfc));
            uVar14 = 0;
            if (*(long *)puVar2 != 0) {
              uVar14 = FUN_03954f70(*(long *)puVar2,&local_128);
            }
            *(undefined8 *)(lVar30 + 0x148) = uVar14;
            (**(code **)(local_128 + 0x18))(&local_128);
            uVar20 = (uint)*local_120;
            uVar19 = 0;
            if (*local_120 != 0) {
              uVar19 = 0xffffffff;
              pbVar26 = local_120;
              do {
                pbVar26 = pbVar26 + 1;
                uVar19 = crc32b(uVar19,uVar20,0x4c11db7);
                uVar20 = (uint)*pbVar26;
              } while (uVar20 != 0);
              uVar19 = ~uVar19;
            }
            *(uint *)(lVar30 + 0x130) = uVar19;
            uVar34 = uVar34 + 1;
            plVar12 = (long *)(param_1 + 0x18);
            if (*(long *)(param_1 + 0x20) != 0) {
              plVar12 = (long *)(*(long *)(param_1 + 0x20) + 0x30);
            }
            *plVar12 = lVar30 + 0x108;
            *(long *)(param_1 + 0x20) = lVar30 + 0x108;
            *(long *)(lVar30 + 0x140) = param_1;
            uVar19 = *(uint *)(param_1 + 0x200);
          } while ((int)uVar34 < (int)uVar19);
        }
      }
    }
  }
  plVar12 = (long *)PTR_DAT_04bb2698;
  if (*(int *)(param_1 + 0x2a4) != 0) {
    uVar19 = *(uint *)(param_1 + 0x2ac);
    if (0 < (int)uVar19) {
      sVar1 = (ulong)uVar19 * 0x3a8 + 8;
      lVar30 = *(long *)PTR_DAT_04bb2698;
      if (lVar30 == 0) {
        puVar13 = malloc(sVar1);
joined_r0x03917aa8:
        if (puVar13 != (ulong *)0x0) {
          lVar30 = 0;
          *puVar13 = (ulong)uVar19;
          do {
            *(undefined8 *)((long)puVar13 + lVar30 + 0x60) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x68) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x18) = 0;
            *(undefined4 *)((long)puVar13 + lVar30 + 0x70) = 0xffffffff;
            *(undefined4 *)((long)puVar13 + lVar30 + 0xb8) = 0x10000;
            *(undefined1 *)((long)puVar13 + lVar30 + 0xc0) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xd8) = 0;
            *(undefined4 *)((long)puVar13 + lVar30 + 0xe0) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xf8) = 0;
            *(undefined4 *)((long)puVar13 + lVar30 + 0x100) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x104) = 0xffffffffffffffff;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x50) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x58) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x40) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x48) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x30) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x38) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x20) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x28) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x78) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x80) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x88) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x90) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x98) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xa0) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xa8) = 0;
            *(char **)((long)puVar13 + lVar30 + 0xb0) = "agl::TextureData";
            *(undefined8 *)((long)puVar13 + lVar30 + 200) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xd0) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xe8) = 0;
            *(undefined8 *)((long)puVar13 + lVar30 + 0xf0) = 0;
            *(undefined ***)((long)puVar13 + lVar30 + 8) = &PTR_FUN_04b66128;
            *(undefined8 *)((long)puVar13 + lVar30 + 0x10) = 0;
            FUN_0390cee0((long)puVar13 + lVar30 + 0x110);
            FUN_0390cee0((long)puVar13 + lVar30 + 0x1f0);
            FUN_0390cee0((long)puVar13 + lVar30 + 0x2d0);
            lVar30 = lVar30 + 0x3a8;
          } while ((ulong)uVar19 * 0x3a8 != lVar30);
          *(uint *)(param_1 + 0x240) = uVar19;
          *(ulong **)(param_1 + 0x248) = puVar13 + 1;
          plVar12 = (long *)PTR_DAT_04bb2698;
        }
      }
      else {
        plVar17 = param_3;
        if (param_3 != (long *)0x0) {
LAB_03917a7c:
          puVar13 = (ulong *)(**(code **)(*plVar17 + 0x30))(plVar17,sVar1,8);
          goto joined_r0x03917aa8;
        }
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar17 = (long *)(lVar30 + 8);
        if (lVar11 != 0) {
          plVar17 = (long *)(lVar11 + 0xa8);
        }
        plVar17 = (long *)*plVar17;
        if (plVar17 != (long *)0x0) goto LAB_03917a7c;
      }
      uVar19 = *(uint *)(param_1 + 0x2ac);
      if (0 < (int)uVar19) {
        lVar30 = *plVar12;
        sVar1 = (ulong)uVar19 * 0x3a8 + 8;
        if (lVar30 == 0) {
          puVar13 = malloc(sVar1);
joined_r0x03918324:
          if (puVar13 != (ulong *)0x0) {
            lVar30 = 0;
            *puVar13 = (ulong)uVar19;
            do {
              *(undefined8 *)((long)puVar13 + lVar30 + 0x60) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x68) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x18) = 0;
              *(undefined4 *)((long)puVar13 + lVar30 + 0x70) = 0xffffffff;
              *(undefined4 *)((long)puVar13 + lVar30 + 0xb8) = 0x10000;
              *(undefined1 *)((long)puVar13 + lVar30 + 0xc0) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xd8) = 0;
              *(undefined4 *)((long)puVar13 + lVar30 + 0xe0) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xf8) = 0;
              *(undefined4 *)((long)puVar13 + lVar30 + 0x100) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x104) = 0xffffffffffffffff;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x50) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x58) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x40) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x48) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x30) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x38) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x20) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x28) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x78) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x80) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x88) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x90) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x98) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xa0) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xa8) = 0;
              *(char **)((long)puVar13 + lVar30 + 0xb0) = "agl::TextureData";
              *(undefined8 *)((long)puVar13 + lVar30 + 200) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xd0) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xe8) = 0;
              *(undefined8 *)((long)puVar13 + lVar30 + 0xf0) = 0;
              *(undefined ***)((long)puVar13 + lVar30 + 8) = &PTR_FUN_04b66128;
              *(undefined8 *)((long)puVar13 + lVar30 + 0x10) = 0;
              FUN_0390cee0((long)puVar13 + lVar30 + 0x110);
              FUN_0390cee0((long)puVar13 + lVar30 + 0x1f0);
              FUN_0390cee0((long)puVar13 + lVar30 + 0x2d0);
              lVar30 = lVar30 + 0x3a8;
            } while ((ulong)uVar19 * 0x3a8 != lVar30);
            *(uint *)(param_1 + 0x250) = uVar19;
            *(ulong **)(param_1 + 600) = puVar13 + 1;
          }
        }
        else {
          plVar12 = param_3;
          if (param_3 != (long *)0x0) {
LAB_03917bd0:
            puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar1,8);
            goto joined_r0x03918324;
          }
          lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar12 = (long *)(lVar30 + 8);
          if (lVar11 != 0) {
            plVar12 = (long *)(lVar11 + 0xa8);
          }
          plVar12 = (long *)*plVar12;
          if (plVar12 != (long *)0x0) goto LAB_03917bd0;
        }
        uVar19 = *(uint *)(param_1 + 0x2ac);
      }
    }
    if (uVar19 != 0) {
      uVar19 = 0;
      do {
        uVar34 = uVar19;
        if (*(uint *)(param_1 + 0x240) <= uVar19) {
          uVar34 = 0;
        }
        plVar12 = (long *)(*(long *)(param_1 + 0x248) + (long)(int)uVar34 * 0x3a8);
        (**(code **)(*plVar12 + 0x10))(plVar12,param_3,param_1);
        uVar34 = uVar19;
        if (*(uint *)(param_1 + 0x250) <= uVar19) {
          uVar34 = 0;
        }
        plVar12 = (long *)(*(long *)(param_1 + 600) + (long)(int)uVar34 * 0x3a8);
        (**(code **)(*plVar12 + 0x10))(plVar12,param_3,param_1);
        uVar19 = uVar19 + 1;
      } while (uVar19 < *(uint *)(param_1 + 0x2ac));
    }
  }
  uVar19 = param_2[8];
  uVar33 = (ulong)uVar19;
  if ((uVar19 != 0) && (0 < (int)uVar19)) {
    sVar1 = (ulong)uVar19 * 0x18 + 8;
    lVar30 = *(long *)PTR_DAT_04bb2698;
    if (lVar30 == 0) {
      puVar13 = malloc(sVar1);
    }
    else {
      plVar12 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar30 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_03918584;
      }
      puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar1,8);
    }
    if (puVar13 != (ulong *)0x0) {
      puVar16 = puVar13 + 1;
      *puVar13 = uVar33;
      puVar2 = PTR_DAT_04bb2120;
      uVar28 = uVar33 * 0x18 - 0x18;
      uVar34 = ((uint)(uVar28 / 0x18) & 0xfffffff) + 1;
      uVar29 = (ulong)uVar34 & 3;
      puVar13 = puVar16;
      if ((uVar34 & 3) != 0) {
        puVar5 = PTR_DAT_04bb2020 + 0x10;
        puVar24 = puVar16;
        do {
          puVar13 = puVar24 + 3;
          *puVar24 = (ulong)puVar5;
          puVar24[1] = (ulong)puVar2;
          uVar29 = uVar29 - 1;
          puVar24 = puVar13;
        } while (uVar29 != 0);
      }
      puVar2 = PTR_DAT_04bb2120;
      if (0x47 < uVar28) {
        puVar5 = PTR_DAT_04bb2020 + 0x10;
        do {
          *puVar13 = (ulong)puVar5;
          puVar13[1] = (ulong)puVar2;
          puVar13[3] = (ulong)puVar5;
          puVar13[4] = (ulong)puVar2;
          puVar13[6] = (ulong)puVar5;
          puVar13[7] = (ulong)puVar2;
          puVar13[9] = (ulong)puVar5;
          puVar13[10] = (ulong)puVar2;
          puVar13 = puVar13 + 0xc;
        } while (puVar13 != puVar16 + uVar33 * 3);
      }
      *(uint *)(param_1 + 0x2c8) = uVar19;
      *(ulong **)(param_1 + 0x2d0) = puVar16;
    }
  }
LAB_03918584:
  uVar19 = param_2[7];
  uVar33 = (ulong)uVar19;
  if ((uVar19 != 0) && (0 < (int)uVar19)) {
    sVar1 = (ulong)uVar19 * 0x18 + 8;
    lVar30 = *(long *)PTR_DAT_04bb2698;
    if (lVar30 == 0) {
      puVar13 = malloc(sVar1);
    }
    else {
      plVar12 = param_3;
      if (param_3 == (long *)0x0) {
        lVar11 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar12 = (long *)(lVar30 + 8);
        if (lVar11 != 0) {
          plVar12 = (long *)(lVar11 + 0xa8);
        }
        plVar12 = (long *)*plVar12;
        if (plVar12 == (long *)0x0) goto LAB_039186a4;
      }
      puVar13 = (ulong *)(**(code **)(*plVar12 + 0x30))(plVar12,sVar1,8);
    }
    if (puVar13 != (ulong *)0x0) {
      puVar16 = puVar13 + 1;
      *puVar13 = uVar33;
      puVar2 = PTR_DAT_04bb2120;
      uVar28 = uVar33 * 0x18 - 0x18;
      uVar34 = ((uint)(uVar28 / 0x18) & 0xfffffff) + 1;
      uVar29 = (ulong)uVar34 & 3;
      puVar13 = puVar16;
      if ((uVar34 & 3) != 0) {
        puVar5 = PTR_DAT_04bb2020 + 0x10;
        puVar24 = puVar16;
        do {
          puVar13 = puVar24 + 3;
          *puVar24 = (ulong)puVar5;
          puVar24[1] = (ulong)puVar2;
          uVar29 = uVar29 - 1;
          puVar24 = puVar13;
        } while (uVar29 != 0);
      }
      puVar2 = PTR_DAT_04bb2120;
      if (0x47 < uVar28) {
        puVar5 = PTR_DAT_04bb2020 + 0x10;
        do {
          *puVar13 = (ulong)puVar5;
          puVar13[1] = (ulong)puVar2;
          puVar13[3] = (ulong)puVar5;
          puVar13[4] = (ulong)puVar2;
          puVar13[6] = (ulong)puVar5;
          puVar13[7] = (ulong)puVar2;
          puVar13[9] = (ulong)puVar5;
          puVar13[10] = (ulong)puVar2;
          puVar13 = puVar13 + 0xc;
        } while (puVar13 != puVar16 + uVar33 * 3);
      }
      *(uint *)(param_1 + 0x2e0) = uVar19;
      *(ulong **)(param_1 + 0x2e8) = puVar16;
    }
  }
LAB_039186a4:
  if (*(int *)(param_1 + 0x2a4) != 0) {
    param_1 = param_1 + 0x458;
    FUN_0390e390(param_1,3,param_3);
    puVar2 = PTR_DAT_04bbd7e8;
    FUN_0390e4c0(param_1,0,*(long *)PTR_DAT_04bbd7e8 + 0x1308,0);
    FUN_0390e4c0(param_1,1,*(long *)puVar2 + 0x1308,1);
    FUN_0390e640(param_1);
  }
  return;
}

