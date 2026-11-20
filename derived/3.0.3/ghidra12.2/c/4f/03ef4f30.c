
bool FUN_03ef4f30(long param_1,long param_2,long *param_3)

{
  size_t sVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  long lVar22;
  undefined8 *puVar23;
  undefined1 auVar24 [16];
  long *plVar25;
  ulong *puVar26;
  long *plVar27;
  ulong *puVar28;
  long lVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  ulong *puVar38;
  byte *pbVar39;
  long lVar40;
  ulong uVar41;
  ulong *puVar42;
  ulong *puVar43;
  ulong *puVar44;
  int iVar45;
  ulong uVar46;
  long lVar47;
  undefined *puVar48;
  int iVar49;
  long lVar50;
  undefined *local_d0;
  char *pcStack_c8;
  undefined *local_b0;
  char *pcStack_a8;
  undefined *local_a0;
  byte *local_98;
  undefined4 local_90;
  undefined4 local_8c;
  undefined3 uStack_88;
  undefined1 local_85;
  undefined1 local_6d;
  
  if (param_2 == 0) goto LAB_03ef6f10;
  lVar40 = param_2 + (ulong)*(uint *)(param_2 + 0x14);
  uVar30 = *(uint *)(lVar40 + 0x38);
  if (uVar30 < 0x10000) {
    lVar29 = 0;
    lVar47 = 0;
  }
  else {
    lVar29 = lVar40 + 0x30 + ((ulong)uVar30 & 0xffff) * 4;
    lVar47 = 0;
    if (0x1ffff < uVar30) {
      lVar47 = lVar29 + 8;
    }
  }
  lVar22 = 0;
  if (0xffff < *(uint *)(lVar40 + 0x34)) {
    lVar22 = lVar40 + 0x30 + ((ulong)*(uint *)(lVar40 + 0x34) & 0xffff) * 4;
  }
  FUN_03956720(0,param_1 + 0x1f8,0,lVar29,0,0);
  lVar40 = *(long *)PTR_DAT_04bb2698;
  if (lVar40 == 0) {
    plVar25 = malloc(0x30);
  }
  else {
    plVar25 = param_3;
    if (param_3 == (long *)0x0) {
      lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar25 = (long *)(lVar40 + 8);
      if (lVar29 != 0) {
        plVar25 = (long *)(lVar29 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 == (long *)0x0) {
        plVar25 = (long *)0x0;
        goto LAB_03ef5038;
      }
    }
    plVar25 = (long *)(**(code **)(*plVar25 + 0x30))(plVar25,0x30,8);
  }
LAB_03ef5038:
  plVar25[4] = 0;
  plVar25[5] = 0;
  puVar48 = PTR_DAT_04bd1060;
  plVar25[2] = 0;
  plVar25[3] = 0;
  *plVar25 = (long)(puVar48 + 0x10);
  plVar25[1] = 0;
  puVar48 = PTR_DAT_04bd1140;
  local_a0 = PTR_DAT_04bb2020;
  *(long **)(param_1 + 0x268) = plVar25;
  local_a0 = local_a0 + 0x10;
  local_98 = (byte *)0x406f696;
  lVar40 = 0;
  if (*(long *)puVar48 != 0) {
    lVar40 = FUN_03954f70(*(long *)puVar48,&local_a0);
  }
  plVar25[5] = lVar40;
  (**(code **)(local_a0 + 0x18))(&local_a0);
  uVar30 = (uint)*local_98;
  if (*local_98 != 0) {
    uVar37 = 0xffffffff;
    pbVar39 = local_98;
    do {
      pbVar39 = pbVar39 + 1;
      uVar37 = crc32b(uVar37,uVar30,0x4c11db7);
      uVar30 = (uint)*pbVar39;
    } while (uVar30 != 0);
    uVar30 = ~uVar37;
  }
  *(uint *)((long)plVar25 + 0x1c) = uVar30;
  puVar23 = (undefined8 *)(param_1 + 0x30);
  if (*(long *)(param_1 + 0x38) != 0) {
    puVar23 = (undefined8 *)(*(long *)(param_1 + 0x38) + 0x20);
  }
  *puVar23 = plVar25;
  *(long **)(param_1 + 0x38) = plVar25;
  puVar48 = PTR_DAT_04bb2020;
  uVar30 = *(uint *)(param_1 + 0x240);
  uVar41 = (ulong)uVar30;
  if (0 < (int)uVar30) {
    sVar1 = uVar41 * 0x28 + 8;
    lVar40 = *(long *)PTR_DAT_04bb2698;
    if (lVar40 == 0) {
      puVar26 = malloc(sVar1);
      puVar48 = PTR_DAT_04bb2020;
joined_r0x03ef5178:
      if (puVar26 != (ulong *)0x0) {
        uVar12 = crc32b(0xffffffff,100,0x4c11db7);
        uVar12 = crc32b(uVar12,0x65,0x4c11db7);
        uVar12 = crc32b(uVar12,0x66,0x4c11db7);
        uVar12 = crc32b(uVar12,0x61,0x4c11db7);
        uVar12 = crc32b(uVar12,0x75,0x4c11db7);
        uVar46 = uVar41 * 0x28 - 0x28;
        uVar12 = crc32b(uVar12,0x6c,0x4c11db7);
        uVar37 = crc32b(uVar12,0x74,0x4c11db7);
        auVar24._8_8_ = 0;
        auVar24._0_8_ = uVar46;
        uVar37 = ~uVar37;
        puVar28 = puVar26 + 1;
        *puVar26 = uVar41;
        puVar2 = PTR_DAT_04bd1310;
        puVar43 = puVar28;
        if ((SUB164(auVar24 * ZEXT816(0xcccccccccccccccd),8) >> 5 & 1) == 0) {
          *(uint *)(puVar26 + 2) = uVar37;
          puVar3 = PTR_DAT_04bb2120;
          puVar26[1] = (ulong)(puVar2 + 0x10);
          puVar26[5] = (ulong)puVar3;
          puVar26[3] = 0;
          puVar26[4] = (ulong)(puVar48 + 0x10);
          puVar43 = puVar26 + 6;
        }
        puVar2 = PTR_DAT_04bb2120;
        if (0x27 < uVar46) {
          puVar3 = PTR_DAT_04bd1310 + 0x10;
          do {
            *(uint *)(puVar43 + 1) = uVar37;
            *puVar43 = (ulong)puVar3;
            *(uint *)(puVar43 + 6) = uVar37;
            puVar43[9] = (ulong)puVar2;
            puVar43[2] = 0;
            puVar43[3] = (ulong)(puVar48 + 0x10);
            puVar43[4] = (ulong)puVar2;
            puVar43[5] = (ulong)puVar3;
            puVar43[7] = 0;
            puVar43[8] = (ulong)(puVar48 + 0x10);
            puVar43 = puVar43 + 10;
          } while (puVar43 != puVar28 + uVar41 * 5);
        }
        *(uint *)(param_1 + 0x270) = uVar30;
        *(ulong **)(param_1 + 0x278) = puVar28;
      }
    }
    else {
      plVar25 = param_3;
      if (param_3 != (long *)0x0) {
LAB_03ef514c:
        puVar26 = (ulong *)(**(code **)(*plVar25 + 0x30))(plVar25,sVar1,8);
        goto joined_r0x03ef5178;
      }
      lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar25 = (long *)(lVar40 + 8);
      if (lVar29 != 0) {
        plVar25 = (long *)(lVar29 + 0xa8);
      }
      plVar25 = (long *)*plVar25;
      if (plVar25 != (long *)0x0) goto LAB_03ef514c;
    }
    if (0 < *(int *)(param_1 + 0x240)) {
      uVar30 = 0;
      do {
        lVar40 = *(long *)(param_1 + 0x278);
        uVar37 = uVar30;
        if (*(uint *)(param_1 + 0x270) <= uVar30) {
          uVar37 = 0;
        }
        lVar29 = lVar40 + (ulong)uVar37 * 0x28;
        FUN_03ee5ee8(&local_a0,"BoneName%d",uVar30);
        FUN_03ee5ee8(&local_d0,"BoneName%d",uVar30);
        lVar50 = *(long *)(param_1 + 0x268);
        *(undefined8 *)(lVar29 + 0x10) = 0;
        (**(code **)(local_a0 + 0x18))(&local_a0);
        uVar31 = (uint)*local_98;
        if (*local_98 != 0) {
          uVar32 = 0xffffffff;
          pbVar39 = local_98;
          do {
            pbVar39 = pbVar39 + 1;
            uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
            uVar31 = (uint)*pbVar39;
          } while (uVar31 != 0);
          uVar31 = ~uVar32;
        }
        *(uint *)(lVar29 + 8) = uVar31;
        if (lVar50 != 0) {
          plVar25 = (long *)(lVar50 + 8);
          if (*(long *)(lVar50 + 0x10) != 0) {
            plVar25 = (long *)(*(long *)(lVar50 + 0x10) + 0x10);
          }
          *plVar25 = lVar29;
          *(long *)(lVar50 + 0x10) = lVar29;
          *(int *)(lVar50 + 0x18) = *(int *)(lVar50 + 0x18) + 1;
        }
        uVar30 = uVar30 + 1;
        *(undefined8 **)(lVar40 + (ulong)uVar37 * 0x28 + 0x20) = &DAT_0407ebb1;
      } while ((int)uVar30 < *(int *)(param_1 + 0x240));
    }
  }
  FUN_03956720(0,*(undefined8 *)(param_1 + 0x268),0,lVar47,0,0);
  plVar25 = (long *)PTR_DAT_04bd1140;
  puVar48 = PTR_DAT_04bb2020;
  uVar30 = *(uint *)(param_1 + 0x260);
  if ((int)uVar30 < 1) {
LAB_03ef68d0:
    uVar30 = *(uint *)(param_1 + 0x2d8);
    puVar43 = *(ulong **)(param_1 + 0x2e0);
  }
  else {
    sVar1 = (ulong)uVar30 * 0x758 + 8;
    lVar40 = *(long *)PTR_DAT_04bb2698;
    if (lVar40 == 0) {
      puVar26 = malloc(sVar1);
    }
    else {
      plVar27 = param_3;
      if (param_3 == (long *)0x0) {
        lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        plVar27 = (long *)(lVar40 + 8);
        if (lVar29 != 0) {
          plVar27 = (long *)(lVar29 + 0xa8);
        }
        plVar27 = (long *)*plVar27;
        if (plVar27 == (long *)0x0) goto LAB_03ef68d0;
      }
      puVar26 = (ulong *)(**(code **)(*plVar27 + 0x30))(plVar27,sVar1,8);
    }
    if (puVar26 == (ulong *)0x0) goto LAB_03ef68d0;
    uVar12 = crc32b(0xffffffff,0x6d,0x4c11db7);
    puVar43 = puVar26 + 1;
    *puVar26 = (ulong)uVar30;
    puVar2 = puVar48 + 0x10;
    uVar13 = crc32b(uVar12,0x42,0x4c11db7);
    uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
    puVar3 = PTR_DAT_04bd1068 + 0x10;
    puVar4 = PTR_DAT_04bb2028 + 0x10;
    puVar5 = PTR_DAT_04bd1078 + 0x10;
    puVar6 = PTR_DAT_04bd1310 + 0x10;
    uVar13 = crc32b(uVar13,0x65,0x4c11db7);
    uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
    uVar13 = crc32b(uVar13,100,0x4c11db7);
    puVar7 = PTR_DAT_04bd10b0 + 0x10;
    puVar8 = PTR_DAT_04bd1080 + 0x10;
    uVar13 = crc32b(uVar13,0x52,0x4c11db7);
    puVar9 = PTR_DAT_04bd1088 + 0x10;
    puVar10 = PTR_DAT_04bd10a8 + 0x10;
    uVar13 = crc32b(uVar13,0x61,0x4c11db7);
    uVar13 = crc32b(uVar13,0x74,0x4c11db7);
    uVar37 = crc32b(uVar13,0x65,0x4c11db7);
    puVar11 = PTR_DAT_04bd1070 + 0x10;
    plVar25 = (long *)PTR_PTR_04bb2238;
    puVar26 = puVar43;
    do {
      puVar26[2] = 0;
      puVar26[3] = 0;
      puVar26[4] = 0;
      *puVar26 = (ulong)puVar11;
      puVar26[1] = 0;
      puVar48 = PTR_DAT_04bd1140;
      puVar26[6] = 0;
      puVar26[7] = 0;
      uVar41 = 0;
      if (*(long *)puVar48 != 0) {
        uVar41 = FUN_03954f70(*(long *)puVar48,plVar25);
      }
      lVar40 = *plVar25;
      puVar26[8] = uVar41;
      (**(code **)(lVar40 + 0x18))(plVar25);
      pbVar39 = (byte *)plVar25[1];
      uVar31 = (uint)*pbVar39;
      if (*pbVar39 == 0) {
        uVar32 = 0;
      }
      else {
        uVar32 = 0xffffffff;
        do {
          pbVar39 = pbVar39 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*pbVar39;
        } while (uVar31 != 0);
        uVar32 = ~uVar32;
      }
      *(uint *)(puVar26 + 5) = uVar32;
      puVar26[0xb] = 0;
      puVar26[0xc] = 0;
      puVar42 = puVar26 + 9;
      *puVar42 = (ulong)puVar3;
      *puVar26 = (ulong)&PTR_FUN_04ba7470;
      local_90 = 0x20;
      local_8c = 0x61666544;
      uStack_88 = 0x746c75;
      puVar26[0xd] = 0;
      puVar26[0xe] = 0;
      local_6d = 0;
      puVar26[10] = 0;
      local_85 = 0;
      pcStack_c8 = "mLookIkParameterName";
      pcStack_a8 = "mLookIkParameterName";
      local_d0 = puVar2;
      local_b0 = puVar2;
      local_a0 = puVar4;
      local_98 = (byte *)&local_8c;
      FUN_0394da90(puVar26 + 0xf,&local_a0,&local_d0,&local_b0);
      puVar26[0x19] = (ulong)puVar5;
      uVar13 = crc32b(uVar12,0x53,0x4c11db7);
      *(uint *)(puVar26 + 0x1a) = ~uVar37;
      uVar14 = crc32b(uVar13,0x69,0x4c11db7);
      uVar14 = crc32b(uVar14,0x67,0x4c11db7);
      puVar28 = puVar26 + 10;
      if (puVar26[0xb] != 0) {
        puVar28 = (ulong *)(puVar26[0xb] + 0x10);
      }
      *puVar28 = (ulong)(puVar26 + 0x19);
      uVar14 = crc32b(uVar14,0x68,0x4c11db7);
      uVar14 = crc32b(uVar14,0x74,0x4c11db7);
      puVar26[0x1d] = (ulong)puVar6;
      puVar26[0x29] = (ulong)(puVar26 + 0x2c);
      puVar26[0x24] = (ulong)(puVar26 + 0x27);
      puVar26[0x2a] = 0;
      puVar26[0x2f] = 0;
      puVar26[0x40] = 0;
      puVar26[0x45] = 0;
      puVar26[0x2e] = (ulong)(puVar26 + 0x31);
      puVar26[0x1b] = (ulong)(puVar26 + 0x1d);
      *(undefined4 *)(puVar26 + 0x2b) = 0;
      *(undefined4 *)(puVar26 + 0x30) = 0;
      *(undefined1 *)(puVar26 + 0x3c) = 0;
      uVar15 = crc32b(uVar14,0x54,0x4c11db7);
      uVar16 = crc32b(uVar14,0x52,0x4c11db7);
      uVar17 = crc32b(uVar14,0x50,0x4c11db7);
      puVar26[0x1f] = (ulong)(puVar26 + 0x22);
      uVar18 = crc32b(uVar14,0x45,0x4c11db7);
      uVar15 = crc32b(uVar15,0x72,0x4c11db7);
      uVar19 = crc32b(uVar16,0x6f,0x4c11db7);
      uVar17 = crc32b(uVar17,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x75,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x41) = 0;
      *(undefined4 *)(puVar26 + 0x46) = 0;
      uVar15 = crc32b(uVar15,0x61,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x4e) = 0;
      uVar17 = crc32b(uVar17,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      *(undefined1 *)(puVar26 + 0x52) = 0;
      puVar26[0x53] = (ulong)puVar5;
      puVar26[0x57] = (ulong)puVar5;
      *(undefined1 *)(puVar26 + 0x5e) = 0;
      uVar15 = crc32b(uVar15,0x6e,0x4c11db7);
      uVar19 = crc32b(uVar19,0x61,0x4c11db7);
      puVar26[0x6c] = 0;
      uVar17 = crc32b(uVar17,0x54,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x6d) = 0;
      puVar26[0x71] = 0;
      *(undefined4 *)(puVar26 + 0x72) = 0;
      puVar26[0x7b] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x73,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      puVar26[0x7f] = (ulong)puVar5;
      uVar17 = crc32b(uVar17,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      puVar26[0x83] = (ulong)puVar5;
      puVar26[0x87] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x52,0x4c11db7);
      uVar19 = crc32b(uVar19,0x65,0x4c11db7);
      puVar26[0x8b] = (ulong)puVar5;
      uVar17 = crc32b(uVar17,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      puVar26[0x8f] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      uVar19 = crc32b(uVar19,0x52,0x4c11db7);
      puVar26[0x93] = (ulong)puVar5;
      puVar26[0x97] = (ulong)puVar5;
      uVar17 = crc32b(uVar17,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      puVar26[0x9b] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6f,0x4c11db7);
      puVar26[0x9f] = (ulong)puVar5;
      *(undefined4 *)(puVar26 + 0xa2) = 0;
      uVar17 = crc32b(uVar17,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      puVar26[0xa3] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x74,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6f,0x4c11db7);
      puVar26[0xa7] = (ulong)puVar5;
      *(undefined4 *)(puVar26 + 0xaa) = 0;
      uVar17 = crc32b(uVar17,0x52,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      *(undefined1 *)(puVar26 + 0xae) = 0;
      uVar15 = crc32b(uVar15,0x42,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      puVar26[0xaf] = (ulong)puVar5;
      *(undefined4 *)(puVar26 + 0xb2) = 0;
      uVar17 = crc32b(uVar17,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      puVar26[0xb3] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      puVar26[0xb7] = (ulong)puVar5;
      puVar26[0xbb] = (ulong)puVar5;
      uVar17 = crc32b(uVar17,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      puVar26[0xbf] = (ulong)puVar5;
      uVar15 = crc32b(uVar15,0x6e,0x4c11db7);
      puVar26[0xc3] = (ulong)puVar5;
      puVar26[199] = (ulong)puVar5;
      uVar17 = crc32b(uVar17,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      *(undefined1 *)(puVar26 + 0xce) = 0;
      uVar15 = crc32b(uVar15,0x65,0x4c11db7);
      puVar26[0xcf] = (ulong)puVar5;
      *(undefined4 *)(puVar26 + 0xd2) = 0;
      uVar17 = crc32b(uVar17,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      *(undefined4 *)(puVar26 + 0xd6) = 0;
      uVar15 = crc32b(uVar15,0x4e,0x4c11db7);
      *(undefined4 *)(puVar26 + 0xda) = 0;
      puVar26[0xdd] = 0;
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      puVar26[0xdf] = 0;
      uVar15 = crc32b(uVar15,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6d,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar31 = crc32b(uVar15,0x65,0x4c11db7);
      uVar15 = crc32b(uVar18,0x6f,0x4c11db7);
      *(uint *)(puVar26 + 0x1e) = ~uVar31;
      uVar18 = crc32b(uVar19,0x42,0x4c11db7);
      uVar15 = crc32b(uVar15,0x74,0x4c11db7);
      uVar17 = crc32b(uVar17,0x70,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar15 = crc32b(uVar15,0x53,0x4c11db7);
      uVar17 = crc32b(uVar17,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar17 = crc32b(uVar17,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar31 = crc32b(uVar17,0x65,0x4c11db7);
      uVar17 = crc32b(uVar18,0x4e,0x4c11db7);
      *(uint *)(puVar26 + 0x28) = ~uVar31;
      uVar18 = crc32b(uVar19,0x46,0x4c11db7);
      uVar17 = crc32b(uVar17,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar17 = crc32b(uVar17,0x6d,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar31 = crc32b(uVar17,0x65,0x4c11db7);
      uVar17 = crc32b(uVar18,0x77,0x4c11db7);
      *(uint *)(puVar26 + 0x23) = ~uVar31;
      uVar15 = crc32b(uVar15,0x70,0x4c11db7);
      uVar18 = crc32b(uVar19,0x54,0x4c11db7);
      uVar17 = crc32b(uVar17,0x61,0x4c11db7);
      uVar15 = crc32b(uVar15,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar17 = crc32b(uVar17,0x72,0x4c11db7);
      uVar15 = crc32b(uVar15,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x70,0x4c11db7);
      uVar31 = crc32b(uVar15,0x65,0x4c11db7);
      uVar15 = crc32b(uVar18,0x41,0x4c11db7);
      *(uint *)(puVar26 + 0x2d) = ~uVar31;
      uVar17 = crc32b(uVar17,100,0x4c11db7);
      uVar15 = crc32b(uVar15,0x78,0x4c11db7);
      uVar17 = crc32b(uVar17,0x41,0x4c11db7);
      uVar15 = crc32b(uVar15,0x69,0x4c11db7);
      uVar17 = crc32b(uVar17,0x78,0x4c11db7);
      uVar31 = crc32b(uVar15,0x73,0x4c11db7);
      uVar15 = crc32b(uVar17,0x69,0x4c11db7);
      *(uint *)(puVar26 + 0x36) = ~uVar31;
      uVar17 = crc32b(uVar12,0x49,0x4c11db7);
      uVar31 = crc32b(uVar15,0x73,0x4c11db7);
      uVar15 = crc32b(uVar17,0x73,0x4c11db7);
      *(uint *)(puVar26 + 0x32) = ~uVar31;
      puVar26[0x33] = (ulong)(puVar26 + 0x35);
      uVar15 = crc32b(uVar15,0x45,0x4c11db7);
      puVar26[0x37] = (ulong)(puVar26 + 0x39);
      uVar17 = crc32b(uVar12,0x45,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6e,0x4c11db7);
      uVar15 = crc32b(uVar15,0x61,0x4c11db7);
      uVar15 = crc32b(uVar15,0x62,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6c,0x4c11db7);
      uVar15 = crc32b(uVar15,0x65,0x4c11db7);
      uVar18 = crc32b(uVar15,0x46,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x75,0x4c11db7);
      uVar18 = crc32b(uVar18,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x43,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar31 = crc32b(uVar18,0x6e,0x4c11db7);
      *(uint *)(puVar26 + 0x3a) = ~uVar31;
      uVar18 = crc32b(uVar17,0x79,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar19 = crc32b(uVar18,0x50,0x4c11db7);
      uVar18 = crc32b(uVar18,0x45,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x75,0x4c11db7);
      uVar19 = crc32b(uVar19,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      uVar20 = crc32b(uVar19,0x4c,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar20 = crc32b(uVar20,0x65,0x4c11db7);
      uVar19 = crc32b(uVar19,0x75,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar20 = crc32b(uVar20,0x61,0x4c11db7);
      uVar19 = crc32b(uVar19,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      uVar20 = crc32b(uVar20,0x66,0x4c11db7);
      uVar19 = crc32b(uVar19,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar20 = crc32b(uVar20,0x53,0x4c11db7);
      uVar19 = crc32b(uVar19,0x4c,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar20 = crc32b(uVar20,0x70,0x4c11db7);
      uVar19 = crc32b(uVar19,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x4c,0x4c11db7);
      uVar20 = crc32b(uVar20,0x61,0x4c11db7);
      uVar19 = crc32b(uVar19,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar20 = crc32b(uVar20,99,0x4c11db7);
      uVar19 = crc32b(uVar19,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar31 = crc32b(uVar20,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x53,0x4c11db7);
      *(uint *)(puVar26 + 0x3e) = ~uVar31;
      puVar26[0x3b] = (ulong)(puVar26 + 0x3d);
      puVar26[0x3f] = (ulong)(puVar26 + 0x42);
      uVar20 = crc32b(uVar19,0x46,0x4c11db7);
      uVar18 = crc32b(uVar18,0x70,0x4c11db7);
      uVar20 = crc32b(uVar20,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar20 = crc32b(uVar20,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar20 = crc32b(uVar20,0x77,0x4c11db7);
      uVar31 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar20,0x61,0x4c11db7);
      *(uint *)(puVar26 + 0x43) = ~uVar31;
      puVar26[0x44] = (ulong)(puVar26 + 0x47);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      puVar26[0x49] = (ulong)(puVar26 + 0x4b);
      puVar26[0x4d] = (ulong)(puVar26 + 0x4f);
      uVar20 = crc32b(uVar12,0x50,0x4c11db7);
      uVar18 = crc32b(uVar18,100,0x4c11db7);
      uVar18 = crc32b(uVar18,0x41,0x4c11db7);
      uVar18 = crc32b(uVar18,0x78,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar31 = crc32b(uVar18,0x73,0x4c11db7);
      *(uint *)(puVar26 + 0x48) = ~uVar31;
      uVar18 = crc32b(uVar19,0x54,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x70,0x4c11db7);
      uVar18 = crc32b(uVar18,0x41,0x4c11db7);
      uVar18 = crc32b(uVar18,0x78,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar31 = crc32b(uVar18,0x73,0x4c11db7);
      *(uint *)(puVar26 + 0x4c) = ~uVar31;
      uVar18 = crc32b(uVar15,0x50,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x43,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar31 = crc32b(uVar18,0x6e,0x4c11db7);
      *(uint *)(puVar26 + 0x50) = ~uVar31;
      uVar18 = crc32b(uVar20,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x43,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x54,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar19 = crc32b(uVar18,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x45,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar19 = crc32b(uVar19,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,100,0x4c11db7);
      uVar19 = crc32b(uVar19,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x41,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar19 = crc32b(uVar19,0x41,0x4c11db7);
      uVar18 = crc32b(uVar18,0x67,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      uVar19 = crc32b(uVar19,0x67,0x4c11db7);
      uVar31 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar19,0x6c,0x4c11db7);
      *(uint *)(puVar26 + 0x58) = ~uVar31;
      puVar26[0x59] = (ulong)(puVar26 + 0x5b);
      uVar31 = crc32b(uVar18,0x65,0x4c11db7);
      *(uint *)(puVar26 + 0x54) = ~uVar31;
      puVar26[0x51] = (ulong)(puVar26 + 0x53);
      puVar26[0x55] = (ulong)(puVar26 + 0x57);
      uVar18 = crc32b(uVar15,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x70,0x4c11db7);
      uVar18 = crc32b(uVar18,0x67,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x68,0x4c11db7);
      uVar13 = crc32b(uVar13,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x41,0x4c11db7);
      uVar13 = crc32b(uVar13,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x67,0x4c11db7);
      uVar13 = crc32b(uVar13,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      uVar19 = crc32b(uVar13,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar19 = crc32b(uVar19,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      uVar19 = crc32b(uVar19,0x67,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar19 = crc32b(uVar19,0x68,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x67,0x4c11db7);
      uVar19 = crc32b(uVar19,0x53,0x4c11db7);
      uVar31 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar19,0x70,0x4c11db7);
      uVar13 = crc32b(uVar13,0x52,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      *(uint *)(puVar26 + 0x5c) = ~uVar31;
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar19 = crc32b(uVar18,0x54,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar19 = crc32b(uVar19,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar19 = crc32b(uVar19,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar19 = crc32b(uVar19,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar19 = crc32b(uVar19,0x52,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar19 = crc32b(uVar19,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar19 = crc32b(uVar19,0x42,0x4c11db7);
      uVar18 = crc32b(uVar18,0x42,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x46,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar19 = crc32b(uVar19,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar19 = crc32b(uVar19,0x4e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x4e,0x4c11db7);
      uVar19 = crc32b(uVar19,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar19 = crc32b(uVar19,0x6d,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6d,0x4c11db7);
      uVar31 = crc32b(uVar19,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x53,0x4c11db7);
      uVar32 = crc32b(uVar18,0x65,0x4c11db7);
      *(uint *)(puVar26 + 0x60) = ~uVar31;
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      puVar26[0x5d] = (ulong)(puVar26 + 0x5f);
      *(uint *)(puVar26 + 0x65) = ~uVar32;
      uVar13 = crc32b(uVar13,0x67,0x4c11db7);
      puVar26[0x61] = (ulong)(puVar26 + 100);
      uVar18 = crc32b(uVar12,0x54,0x4c11db7);
      uVar13 = crc32b(uVar13,0x68,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x73,0x4c11db7);
      uVar18 = crc32b(uVar18,0x4f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x4f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x70,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x43,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,100,0x4c11db7);
      uVar18 = crc32b(uVar18,0x46,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x67,0x4c11db7);
      uVar18 = crc32b(uVar18,0x68,0x4c11db7);
      uVar31 = crc32b(uVar18,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0x6a) = ~uVar31;
      puVar26[0x66] = (ulong)(puVar26 + 0x69);
      uVar18 = crc32b(uVar17,0x75,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6c,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x52,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x4f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,0x74,0x4c11db7);
      uVar18 = crc32b(uVar18,0x4f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6e,0x4c11db7);
      uVar18 = crc32b(uVar18,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x70,0x4c11db7);
      uVar18 = crc32b(uVar18,0x65,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x66,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,99,0x4c11db7);
      uVar18 = crc32b(uVar18,0x43,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,100,0x4c11db7);
      uVar18 = crc32b(uVar18,0x46,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar18 = crc32b(uVar18,0x53,0x4c11db7);
      uVar18 = crc32b(uVar18,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,0x67,0x4c11db7);
      uVar18 = crc32b(uVar18,0x68,0x4c11db7);
      uVar31 = crc32b(uVar18,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0x6f) = ~uVar31;
      puVar26[0x6b] = (ulong)(puVar26 + 0x6e);
      uVar18 = crc32b(uVar13,0x46,0x4c11db7);
      uVar13 = crc32b(uVar13,0x54,0x4c11db7);
      uVar18 = crc32b(uVar18,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x70,0x4c11db7);
      uVar18 = crc32b(uVar18,0x77,0x4c11db7);
      uVar13 = crc32b(uVar13,0x41,0x4c11db7);
      uVar18 = crc32b(uVar18,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x78,0x4c11db7);
      uVar18 = crc32b(uVar18,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar18 = crc32b(uVar18,100,0x4c11db7);
      uVar31 = crc32b(uVar13,0x73,0x4c11db7);
      uVar13 = crc32b(uVar18,0x41,0x4c11db7);
      *(uint *)(puVar26 + 0x78) = ~uVar31;
      puVar26[0x75] = (ulong)(puVar26 + 0x77);
      uVar13 = crc32b(uVar13,0x78,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar14 = crc32b(uVar14,0x41,0x4c11db7);
      uVar31 = crc32b(uVar13,0x73,0x4c11db7);
      uVar13 = crc32b(uVar14,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x67,0x4c11db7);
      *(uint *)(puVar26 + 0x74) = ~uVar31;
      puVar26[0x70] = (ulong)(puVar26 + 0x73);
      uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar14 = crc32b(uVar13,0x52,0x4c11db7);
      uVar14 = crc32b(uVar14,0x69,0x4c11db7);
      uVar14 = crc32b(uVar14,0x67,0x4c11db7);
      uVar14 = crc32b(uVar14,0x68,0x4c11db7);
      uVar31 = crc32b(uVar14,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0x7c) = ~uVar31;
      puVar26[0x79] = (ulong)(puVar26 + 0x7b);
      uVar14 = crc32b(uVar13,0x4c,0x4c11db7);
      uVar14 = crc32b(uVar14,0x65,0x4c11db7);
      uVar14 = crc32b(uVar14,0x66,0x4c11db7);
      uVar31 = crc32b(uVar14,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0x80) = ~uVar31;
      puVar26[0x7d] = (ulong)(puVar26 + 0x7f);
      uVar14 = crc32b(uVar13,0x55,0x4c11db7);
      uVar31 = crc32b(uVar14,0x70,0x4c11db7);
      *(uint *)(puVar26 + 0x84) = ~uVar31;
      puVar26[0x81] = (ulong)(puVar26 + 0x83);
      uVar14 = crc32b(uVar13,0x44,0x4c11db7);
      uVar14 = crc32b(uVar14,0x6f,0x4c11db7);
      uVar14 = crc32b(uVar14,0x77,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4d,0x4c11db7);
      uVar31 = crc32b(uVar14,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      *(uint *)(puVar26 + 0x88) = ~uVar31;
      puVar26[0x85] = (ulong)(puVar26 + 0x87);
      uVar13 = crc32b(uVar13,0x67,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar14 = crc32b(uVar13,0x52,0x4c11db7);
      uVar14 = crc32b(uVar14,0x69,0x4c11db7);
      uVar14 = crc32b(uVar14,0x67,0x4c11db7);
      uVar14 = crc32b(uVar14,0x68,0x4c11db7);
      uVar31 = crc32b(uVar14,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0x8c) = ~uVar31;
      puVar26[0x89] = (ulong)(puVar26 + 0x8b);
      uVar14 = crc32b(uVar13,0x4c,0x4c11db7);
      uVar14 = crc32b(uVar14,0x65,0x4c11db7);
      uVar14 = crc32b(uVar14,0x66,0x4c11db7);
      uVar31 = crc32b(uVar14,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0x90) = ~uVar31;
      puVar26[0x8d] = (ulong)(puVar26 + 0x8f);
      uVar14 = crc32b(uVar13,0x55,0x4c11db7);
      uVar13 = crc32b(uVar13,0x44,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar31 = crc32b(uVar14,0x70,0x4c11db7);
      uVar13 = crc32b(uVar13,0x77,0x4c11db7);
      uVar14 = crc32b(uVar16,0x61,0x4c11db7);
      *(uint *)(puVar26 + 0x94) = ~uVar31;
      puVar26[0x91] = (ulong)(puVar26 + 0x93);
      uVar14 = crc32b(uVar14,0x6e,0x4c11db7);
      uVar31 = crc32b(uVar13,0x6e,0x4c11db7);
      puVar26[0x95] = (ulong)(puVar26 + 0x97);
      uVar13 = crc32b(uVar14,0x67,0x4c11db7);
      *(uint *)(puVar26 + 0x98) = ~uVar31;
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4d,0x4c11db7);
      uVar14 = crc32b(uVar13,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar31 = crc32b(uVar14,0x78,0x4c11db7);
      uVar14 = crc32b(uVar14,0x72,0x4c11db7);
      uVar32 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar14,0x67,0x4c11db7);
      *(uint *)(puVar26 + 0x9c) = ~uVar31;
      *(uint *)(puVar26 + 0xa0) = ~uVar32;
      puVar26[0x99] = (ulong)(puVar26 + 0x9b);
      puVar26[0xa1] = (ulong)(puVar26 + 0xa3);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      puVar26[0x9d] = (ulong)(puVar26 + 0x9f);
      puVar26[0xa5] = (ulong)(puVar26 + 0xa7);
      puVar26[0xa9] = (ulong)(puVar26 + 0xab);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4d,0x4c11db7);
      uVar14 = crc32b(uVar13,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar31 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar32 = crc32b(uVar14,0x78,0x4c11db7);
      *(uint *)(puVar26 + 0xa8) = ~uVar31;
      uVar13 = crc32b(uVar15,0x4c,0x4c11db7);
      *(uint *)(puVar26 + 0xa4) = ~uVar32;
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar14 = crc32b(uVar12,0x4f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6d,0x4c11db7);
      uVar14 = crc32b(uVar14,0x76,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x76,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar31 = crc32b(uVar13,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0xac) = ~uVar31;
      uVar13 = crc32b(uVar14,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x76,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x52,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar31 = crc32b(uVar13,0x65,0x4c11db7);
      *(uint *)(puVar26 + 0xb0) = ~uVar31;
      puVar26[0xad] = (ulong)(puVar26 + 0xaf);
      uVar13 = crc32b(uVar12,0x4d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x76,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar15 = crc32b(uVar13,0x4c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x52,0x4c11db7);
      uVar15 = crc32b(uVar15,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar15 = crc32b(uVar15,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar15 = crc32b(uVar15,0x74,0x4c11db7);
      uVar16 = crc32b(uVar15,0x52,0x4c11db7);
      uVar16 = crc32b(uVar16,0x69,0x4c11db7);
      uVar16 = crc32b(uVar16,0x67,0x4c11db7);
      uVar16 = crc32b(uVar16,0x68,0x4c11db7);
      uVar31 = crc32b(uVar16,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0xb4) = ~uVar31;
      puVar26[0xb1] = (ulong)(puVar26 + 0xb3);
      uVar16 = crc32b(uVar15,0x4c,0x4c11db7);
      uVar16 = crc32b(uVar16,0x65,0x4c11db7);
      uVar16 = crc32b(uVar16,0x66,0x4c11db7);
      uVar31 = crc32b(uVar16,0x74,0x4c11db7);
      *(uint *)(puVar26 + 0xb8) = ~uVar31;
      puVar26[0xb5] = (ulong)(puVar26 + 0xb7);
      uVar16 = crc32b(uVar15,0x55,0x4c11db7);
      uVar15 = crc32b(uVar15,0x44,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x38) = 1;
      *(undefined4 *)(puVar26 + 0x4a) = 1;
      *(undefined4 *)(puVar26 + 0x7a) = 1;
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      uVar31 = crc32b(uVar16,0x70,0x4c11db7);
      uVar15 = crc32b(uVar15,0x77,0x4c11db7);
      *(uint *)(puVar26 + 0xbc) = ~uVar31;
      puVar26[0xb9] = (ulong)(puVar26 + 0xbb);
      uVar31 = crc32b(uVar15,0x6e,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x34) = 2;
      *(undefined4 *)(puVar26 + 0x76) = 2;
      *(uint *)(puVar26 + 0xc0) = ~uVar31;
      puVar26[0xbd] = (ulong)(puVar26 + 0xbf);
      uVar15 = crc32b(uVar13,0x4e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x53,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar15 = crc32b(uVar15,0x4c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4c,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6b,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x5a) = 0x3fb2b8c2;
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar15 = crc32b(uVar15,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar15 = crc32b(uVar15,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6b,0x4c11db7);
      uVar31 = crc32b(uVar15,0x67,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar15 = crc32b(uVar17,0x6e,0x4c11db7);
      *(uint *)(puVar26 + 0xc4) = ~uVar31;
      puVar26[0xc1] = (ulong)(puVar26 + 0xc3);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      puVar26[99] = (ulong)&DAT_0407ebb1;
      puVar26[0x68] = (ulong)&DAT_0407ebb1;
      uVar15 = crc32b(uVar15,0x61,0x4c11db7);
      uVar31 = crc32b(uVar13,0x67,0x4c11db7);
      *(uint *)(puVar26 + 200) = ~uVar31;
      puVar26[0xc5] = (ulong)(puVar26 + 199);
      uVar13 = crc32b(uVar15,0x62,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x42,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      puVar26[0x39] = (ulong)puVar9;
      puVar26[0x4f] = (ulong)puVar9;
      puVar26[0x5b] = (ulong)puVar9;
      puVar26[0xab] = (ulong)puVar9;
      puVar26[0xcb] = (ulong)puVar9;
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,100,0x4c11db7);
      uVar13 = crc32b(uVar13,0x50,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x73,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x76,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x77,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar31 = crc32b(uVar13,0x65,0x4c11db7);
      *(uint *)(puVar26 + 0xcc) = ~uVar31;
      puVar26[0xc9] = (ulong)(puVar26 + 0xcb);
      uVar13 = crc32b(uVar14,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x43,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,99,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x53,0x4c11db7);
      uVar13 = crc32b(uVar13,0x77,0x4c11db7);
      puVar26[0x21] = (ulong)&DAT_0407ebb1;
      puVar26[0x22] = (ulong)puVar6;
      puVar26[0x5f] = (ulong)puVar6;
      puVar26[100] = (ulong)puVar6;
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      uVar13 = crc32b(uVar13,99,0x4c11db7);
      uVar13 = crc32b(uVar13,0x68,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar13 = crc32b(uVar13,0x67,0x4c11db7);
      uVar13 = crc32b(uVar13,0x4d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x67,0x4c11db7);
      uVar13 = crc32b(uVar13,0x69,0x4c11db7);
      uVar31 = crc32b(uVar13,0x6e,0x4c11db7);
      *(uint *)(puVar26 + 0xd0) = ~uVar31;
      puVar26[0xcd] = (ulong)(puVar26 + 0xcf);
      uVar13 = crc32b(uVar20,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar14 = crc32b(uVar13,0x61,0x4c11db7);
      uVar13 = crc32b(uVar13,0x65,0x4c11db7);
      uVar14 = crc32b(uVar14,0x6d,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6e,0x4c11db7);
      uVar14 = crc32b(uVar14,0x4f,0x4c11db7);
      uVar13 = crc32b(uVar13,0x74,0x4c11db7);
      *(undefined4 *)(puVar26 + 0x56) = 0x3e32b8c2;
      *(undefined4 *)(puVar26 + 0x8e) = 0x3e32b8c2;
      *(undefined4 *)(puVar26 + 0x92) = 0x3e32b8c2;
      *(undefined4 *)(puVar26 + 0x96) = 0x3e32b8c2;
      *(undefined4 *)(puVar26 + 0x9a) = 0x3e32b8c2;
      uVar14 = crc32b(uVar14,0x76,0x4c11db7);
      uVar13 = crc32b(uVar13,0x50,0x4c11db7);
      uVar14 = crc32b(uVar14,0x65,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar14 = crc32b(uVar14,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x72,0x4c11db7);
      uVar14 = crc32b(uVar14,0x77,0x4c11db7);
      uVar13 = crc32b(uVar13,0x61,0x4c11db7);
      uVar14 = crc32b(uVar14,0x72,0x4c11db7);
      uVar13 = crc32b(uVar13,0x6d,0x4c11db7);
      uVar14 = crc32b(uVar14,0x69,0x4c11db7);
      uVar14 = crc32b(uVar14,0x74,0x4c11db7);
      uVar14 = crc32b(uVar14,0x65,0x4c11db7);
      uVar14 = crc32b(uVar14,0x46,0x4c11db7);
      uVar14 = crc32b(uVar14,0x6c,0x4c11db7);
      uVar14 = crc32b(uVar14,0x61,0x4c11db7);
      uVar14 = crc32b(uVar14,0x67,0x4c11db7);
      uVar31 = crc32b(uVar14,0x31,0x4c11db7);
      *(uint *)(puVar26 + 0xd4) = ~uVar31;
      puVar26[0xd1] = (ulong)(puVar26 + 0xd3);
      uVar31 = crc32b(uVar14,0x32,0x4c11db7);
      *(uint *)(puVar26 + 0xd8) = ~uVar31;
      puVar26[0xd5] = (ulong)(puVar26 + 0xd7);
      puVar26[0x20] = (ulong)puVar2;
      puVar26[0x25] = (ulong)puVar2;
      *(undefined4 *)(puVar26 + 0x1c) = 0x3f800000;
      puVar26[0x62] = (ulong)puVar2;
      puVar26[0x67] = (ulong)puVar2;
      puVar26[0x2c] = (ulong)puVar7;
      puVar26[0x26] = (ulong)&DAT_0407ebb1;
      puVar26[0x27] = (ulong)puVar7;
      puVar26[0x3d] = (ulong)puVar7;
      puVar26[0x42] = (ulong)puVar7;
      puVar26[0x69] = (ulong)puVar7;
      puVar26[0x6e] = (ulong)puVar7;
      puVar26[0x31] = (ulong)puVar8;
      puVar26[0x35] = (ulong)puVar8;
      puVar26[0x47] = (ulong)puVar8;
      puVar26[0x4b] = (ulong)puVar8;
      puVar26[0x73] = (ulong)puVar8;
      puVar26[0x77] = (ulong)puVar8;
      puVar26[0xdb] = (ulong)puVar8;
      *(undefined4 *)(puVar26 + 0x7e) = 0x3fdf66f3;
      *(undefined4 *)(puVar26 + 0x82) = 0x3fdf66f3;
      *(undefined4 *)(puVar26 + 0x86) = 0x3fc90fdb;
      *(undefined4 *)(puVar26 + 0x8a) = 0x3f32b8c2;
      *(undefined4 *)(puVar26 + 0x9e) = 0x42c80000;
      *(undefined4 *)(puVar26 + 0xa6) = 0x41200000;
      *(undefined4 *)(puVar26 + 0xb6) = 0x3f860a92;
      *(undefined4 *)(puVar26 + 0xba) = 0x3f860a92;
      *(undefined4 *)(puVar26 + 0xbe) = 0x3f860a92;
      *(undefined4 *)(puVar26 + 0xc2) = 0x3eb2b8c2;
      *(undefined4 *)(puVar26 + 0xc6) = 0x3f000000;
      *(undefined4 *)(puVar26 + 0xca) = 0x3e4ccccd;
      puVar26[0xd3] = (ulong)puVar10;
      puVar26[0xd7] = (ulong)puVar10;
      uVar13 = crc32b(uVar13,0x49,0x4c11db7);
      uVar31 = crc32b(uVar13,0x44,0x4c11db7);
      *(uint *)(puVar26 + 0xdc) = ~uVar31;
      puVar26[0xd9] = (ulong)(puVar26 + 0xdb);
      puVar26[0xb] = (ulong)(puVar26 + 0xdb);
      *(int *)(puVar26 + 0xc) = (int)puVar26[0xc] + 0x2f;
      *(undefined4 *)(puVar26 + 0xde) = 0xffffffff;
      puVar48 = PTR_DAT_04bd1070;
      puVar26[0xe4] = 0;
      puVar26[0xe3] = 0;
      puVar26[0xe2] = 0;
      puVar26[0xe1] = 0;
      puVar26[0xe7] = 0;
      puVar26[0xe6] = 0;
      puVar26[0xe0] = (ulong)(puVar48 + 0x10);
      plVar25 = (long *)PTR_PTR_04bb2238;
      if (*(long *)PTR_DAT_04bd1140 == 0) {
        uVar41 = 0;
      }
      else {
        uVar41 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,PTR_PTR_04bb2238);
      }
      lVar40 = *plVar25;
      puVar26[0xe8] = uVar41;
      (**(code **)(lVar40 + 0x18))(plVar25);
      pbVar39 = *(byte **)((long)plVar25 + 8);
      uVar31 = (uint)*pbVar39;
      if (*pbVar39 != 0) {
        uVar32 = 0xffffffff;
        do {
          pbVar39 = pbVar39 + 1;
          uVar32 = crc32b(uVar32,uVar31,0x4c11db7);
          uVar31 = (uint)*pbVar39;
        } while (uVar31 != 0);
        uVar31 = ~uVar32;
      }
      *(uint *)(puVar26 + 0xe5) = uVar31;
      *(undefined4 *)(puVar26 + 0xe9) = 0;
      puVar26[0xea] = 0;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      local_98 = (byte *)0x40d1eca;
      uVar41 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar41 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
      }
      puVar26[0xe] = uVar41;
      (**(code **)(local_a0 + 0x18))(&local_a0);
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
      *(uint *)((long)puVar26 + 100) = uVar31;
      local_a0 = PTR_DAT_04bb2020 + 0x10;
      puVar28 = puVar26 + 1;
      if (puVar26[2] != 0) {
        puVar28 = (ulong *)(puVar26[2] + 0x20);
      }
      *puVar28 = (ulong)puVar42;
      puVar26[2] = (ulong)puVar42;
      local_98 = (byte *)0x40b872d;
      uVar41 = 0;
      if (*(long *)PTR_DAT_04bd1140 != 0) {
        uVar41 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a0);
      }
      puVar26[0xe8] = uVar41;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      uVar32 = (uint)*local_98;
      uVar31 = 0;
      if (*local_98 != 0) {
        uVar31 = 0xffffffff;
        pbVar39 = local_98;
        do {
          pbVar39 = pbVar39 + 1;
          uVar31 = crc32b(uVar31,uVar32,0x4c11db7);
          uVar32 = (uint)*pbVar39;
        } while (uVar32 != 0);
        uVar31 = ~uVar31;
      }
      *(uint *)(puVar26 + 0xe5) = uVar31;
      puVar28 = puVar26 + 3;
      if (puVar26[4] != 0) {
        puVar28 = (ulong *)(puVar26[4] + 0x30);
      }
      *puVar28 = (ulong)(puVar26 + 0xe0);
      puVar26[4] = (ulong)(puVar26 + 0xe0);
      puVar26[0xe7] = (ulong)puVar26;
      puVar48 = PTR_DAT_04bb2020;
      puVar26 = puVar26 + 0xeb;
    } while (puVar26 != puVar43 + (ulong)uVar30 * 0xeb);
    *(uint *)(param_1 + 0x2d8) = uVar30;
    *(ulong **)(param_1 + 0x2e0) = puVar43;
    plVar25 = (long *)PTR_DAT_04bd1140;
  }
  if (uVar30 != 0) {
    uVar12 = crc32b(0xffffffff,0x6d,0x4c11db7);
    uVar13 = crc32b(uVar12,0x50,0x4c11db7);
    uVar14 = crc32b(uVar12,0x54,0x4c11db7);
    uVar13 = crc32b(uVar13,0x61,0x4c11db7);
    uVar14 = crc32b(uVar14,0x61,0x4c11db7);
    iVar49 = 0;
    uVar37 = 0;
    uVar13 = crc32b(uVar13,0x72,0x4c11db7);
    uVar13 = crc32b(uVar13,0x61,0x4c11db7);
    uVar13 = crc32b(uVar13,0x6d,0x4c11db7);
    uVar14 = crc32b(uVar14,0x72,0x4c11db7);
    uVar13 = crc32b(uVar13,0x4f,0x4c11db7);
    uVar14 = crc32b(uVar14,0x67,0x4c11db7);
    uVar13 = crc32b(uVar13,0x76,0x4c11db7);
    uVar14 = crc32b(uVar14,0x65,0x4c11db7);
    uVar12 = crc32b(uVar12,0x4c,0x4c11db7);
    uVar13 = crc32b(uVar13,0x65,0x4c11db7);
    uVar14 = crc32b(uVar14,0x74,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6f,0x4c11db7);
    uVar13 = crc32b(uVar13,0x72,0x4c11db7);
    uVar14 = crc32b(uVar14,0x46,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6f,0x4c11db7);
    uVar13 = crc32b(uVar13,0x77,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6f,0x4c11db7);
    uVar12 = crc32b(uVar12,0x6b,0x4c11db7);
    uVar13 = crc32b(uVar13,0x72,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6c,0x4c11db7);
    uVar12 = crc32b(uVar12,0x57,0x4c11db7);
    uVar13 = crc32b(uVar13,0x69,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6c,0x4c11db7);
    uVar12 = crc32b(uVar12,0x65,0x4c11db7);
    uVar13 = crc32b(uVar13,0x74,0x4c11db7);
    uVar14 = crc32b(uVar14,0x6f,0x4c11db7);
    uVar12 = crc32b(uVar12,0x69,0x4c11db7);
    puVar2 = PTR_DAT_04bd1070 + 0x10;
    uVar13 = crc32b(uVar13,0x65,0x4c11db7);
    uVar14 = crc32b(uVar14,0x77,0x4c11db7);
    uVar12 = crc32b(uVar12,0x67,0x4c11db7);
    puVar3 = PTR_DAT_04bd1060 + 0x10;
    uVar13 = crc32b(uVar13,0x46,0x4c11db7);
    uVar14 = crc32b(uVar14,0x52,0x4c11db7);
    uVar12 = crc32b(uVar12,0x68,0x4c11db7);
    uVar13 = crc32b(uVar13,0x6c,0x4c11db7);
    uVar14 = crc32b(uVar14,0x61,0x4c11db7);
    uVar31 = crc32b(uVar12,0x74,0x4c11db7);
    puVar4 = PTR_DAT_04bd1078 + 0x10;
    uVar12 = crc32b(uVar13,0x61,0x4c11db7);
    uVar13 = crc32b(uVar14,100,0x4c11db7);
    uVar32 = crc32b(uVar31,0x56,0x4c11db7);
    puVar5 = PTR_DAT_04bd10a8 + 0x10;
    uVar21 = crc32b(uVar12,0x67,0x4c11db7);
    uVar12 = crc32b(uVar13,0x4d,0x4c11db7);
    do {
      uVar33 = *(uint *)(param_1 + 0x240);
      uVar41 = (ulong)uVar33;
      puVar26 = puVar43 + (long)(int)uVar37 * 0xeb;
      if ((int)uVar33 < 1) {
LAB_03ef6d94:
        uVar33 = (uint)puVar26[0xe9];
        puVar42 = (ulong *)puVar43[(long)(int)uVar37 * 0xeb + 0xea];
      }
      else {
        uVar46 = uVar41 * 0x140 | 8;
        lVar40 = *(long *)PTR_DAT_04bb2698;
        if (lVar40 == 0) {
          puVar28 = malloc(uVar46);
        }
        else {
          plVar27 = param_3;
          if (param_3 == (long *)0x0) {
            lVar29 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
            plVar27 = (long *)(lVar40 + 8);
            if (lVar29 != 0) {
              plVar27 = (long *)(lVar29 + 0xa8);
            }
            plVar27 = (long *)*plVar27;
            if (plVar27 == (long *)0x0) goto LAB_03ef6d94;
          }
          puVar28 = (ulong *)(**(code **)(*plVar27 + 0x30))(plVar27,uVar46,8);
        }
        if (puVar28 == (ulong *)0x0) goto LAB_03ef6d94;
        puVar42 = puVar28 + 1;
        *puVar28 = uVar41;
        puVar28 = puVar42;
        do {
          puVar28[4] = 0;
          puVar28[1] = 0;
          puVar28[2] = 0;
          puVar28[3] = 0;
          *puVar28 = (ulong)puVar2;
          lVar40 = *plVar25;
          puVar28[6] = 0;
          puVar28[7] = 0;
          puVar6 = PTR_PTR_04bb2238;
          uVar46 = 0;
          if (lVar40 != 0) {
            uVar46 = FUN_03954f70(lVar40,PTR_PTR_04bb2238);
          }
          lVar40 = *(long *)puVar6;
          puVar28[8] = uVar46;
          (**(code **)(lVar40 + 0x18))(puVar6);
          pbVar39 = *(byte **)(puVar6 + 8);
          uVar34 = (uint)*pbVar39;
          if (*pbVar39 != 0) {
            uVar35 = 0xffffffff;
            do {
              pbVar39 = pbVar39 + 1;
              uVar35 = crc32b(uVar35,uVar34,0x4c11db7);
              uVar34 = (uint)*pbVar39;
            } while (uVar34 != 0);
            uVar34 = ~uVar35;
          }
          *(uint *)(puVar28 + 5) = uVar34;
          *puVar28 = (ulong)&PTR_LAB_04ba74c8;
          puVar28[0xe] = 0;
          lVar40 = *plVar25;
          puVar28[0xc] = 0;
          puVar28[0xd] = 0;
          *(uint *)(puVar28 + 0x14) = ~uVar32;
          puVar44 = puVar28 + 9;
          *puVar44 = (ulong)puVar3;
          *(uint *)(puVar28 + 0x10) = ~uVar31;
          puVar28[0xf] = (ulong)puVar4;
          puVar28[10] = (ulong)(puVar28 + 0xf);
          *(undefined4 *)(puVar28 + 0x12) = 0x3f800000;
          puVar28[0x13] = (ulong)puVar4;
          puVar28[0x11] = (ulong)(puVar28 + 0x13);
          *(undefined4 *)(puVar28 + 0x16) = 0x3f800000;
          uVar13 = crc32b(uVar14,0x74,0x4c11db7);
          uVar34 = crc32b(uVar13,0x65,0x4c11db7);
          puVar28[0x17] = (ulong)puVar4;
          puVar28[0x15] = (ulong)(puVar28 + 0x17);
          uVar13 = crc32b(uVar12,0x61,0x4c11db7);
          uVar35 = crc32b(uVar13,0x78,0x4c11db7);
          *(uint *)(puVar28 + 0x18) = ~uVar34;
          puVar28[0x1b] = (ulong)puVar4;
          *(undefined4 *)(puVar28 + 0x1a) = 0x3dcccccd;
          *(uint *)(puVar28 + 0x1c) = ~uVar35;
          puVar28[0x1f] = (ulong)puVar4;
          puVar28[0x19] = (ulong)(puVar28 + 0x1b);
          *(undefined4 *)(puVar28 + 0x1e) = 0x3e0efa35;
          uVar13 = crc32b(uVar12,0x69,0x4c11db7);
          puVar28[0x1d] = (ulong)(puVar28 + 0x1f);
          uVar34 = crc32b(uVar13,0x6e,0x4c11db7);
          puVar28[0x25] = 0;
          *(undefined4 *)(puVar28 + 0x26) = 0;
          *(undefined4 *)(puVar28 + 0x27) = 0;
          *(uint *)(puVar28 + 0x20) = ~uVar34;
          puVar38 = puVar28 + 0x23;
          *puVar38 = (ulong)puVar5;
          *(undefined4 *)(puVar28 + 0x22) = 0x393702d3;
          puVar28[0x21] = (ulong)puVar38;
          puVar28[0xb] = (ulong)puVar38;
          *(undefined4 *)(puVar28 + 0xc) = 6;
          *(uint *)(puVar28 + 0x24) = ~uVar21;
          local_a0 = puVar48 + 0x10;
          local_98 = (byte *)0x40b873f;
          uVar46 = 0;
          if (lVar40 != 0) {
            uVar46 = FUN_03954f70(lVar40,&local_a0);
          }
          puVar28[0xe] = uVar46;
          (**(code **)(local_a0 + 0x18))(&local_a0);
          uVar35 = (uint)*local_98;
          uVar34 = 0;
          if (*local_98 != 0) {
            uVar34 = 0xffffffff;
            pbVar39 = local_98;
            do {
              pbVar39 = pbVar39 + 1;
              uVar34 = crc32b(uVar34,uVar35,0x4c11db7);
              uVar35 = (uint)*pbVar39;
            } while (uVar35 != 0);
            uVar34 = ~uVar34;
          }
          *(uint *)((long)puVar28 + 100) = uVar34;
          puVar38 = puVar28 + 1;
          if (puVar28[2] != 0) {
            puVar38 = (ulong *)(puVar28[2] + 0x20);
          }
          *puVar38 = (ulong)puVar44;
          puVar28[2] = (ulong)puVar44;
          puVar28 = puVar28 + 0x28;
        } while (puVar28 != puVar42 + uVar41 * 0x28);
        *(uint *)(puVar26 + 0xe9) = uVar33;
        puVar43[(long)(int)uVar37 * 0xeb + 0xea] = (ulong)puVar42;
      }
      if (uVar33 != 0) {
        iVar45 = 0;
        uVar34 = 0;
        do {
          iVar45 = iVar45 + 1;
          FUN_006d8678(&local_a0,"BoneUnitParam%d",iVar45);
          uVar41 = 0;
          if (*plVar25 != 0) {
            uVar41 = FUN_03954f70(*plVar25,&local_a0);
          }
          puVar28 = puVar42 + (long)(int)uVar34 * 0x28;
          puVar28[8] = uVar41;
          (**(code **)(local_a0 + 0x18))(&local_a0);
          uVar36 = (uint)*local_98;
          uVar35 = 0;
          if (*local_98 != 0) {
            uVar35 = 0xffffffff;
            pbVar39 = local_98;
            do {
              pbVar39 = pbVar39 + 1;
              uVar35 = crc32b(uVar35,uVar36,0x4c11db7);
              uVar36 = (uint)*pbVar39;
            } while (uVar36 != 0);
            uVar35 = ~uVar35;
          }
          *(uint *)(puVar28 + 5) = uVar35;
          uVar41 = puVar43[(long)(int)uVar37 * 0xeb + 0xe4];
          puVar38 = puVar43 + (long)(int)uVar37 * 0xeb + 0xe3;
          if (uVar41 != 0) {
            puVar38 = (ulong *)(uVar41 + 0x30);
          }
          *puVar38 = (ulong)puVar28;
          puVar43[(long)(int)uVar37 * 0xeb + 0xe4] = (ulong)puVar28;
          puVar28[7] = (ulong)(puVar43 + (long)(int)uVar37 * 0xeb + 0xe0);
          uVar34 = uVar34 + 1;
          plVar25 = (long *)PTR_DAT_04bd1140;
        } while (uVar33 != uVar34);
      }
      iVar49 = iVar49 + 1;
      FUN_006d8678(&local_a0,"LookIKParam%d",iVar49);
      uVar41 = 0;
      if (*plVar25 != 0) {
        uVar41 = FUN_03954f70(*plVar25,&local_a0);
      }
      puVar48 = PTR_DAT_04bb2020;
      puVar26[8] = uVar41;
      (**(code **)(local_a0 + 0x18))(&local_a0);
      uVar34 = (uint)*local_98;
      uVar33 = 0;
      if (*local_98 != 0) {
        uVar33 = 0xffffffff;
        pbVar39 = local_98;
        do {
          pbVar39 = pbVar39 + 1;
          uVar33 = crc32b(uVar33,uVar34,0x4c11db7);
          uVar34 = (uint)*pbVar39;
        } while (uVar34 != 0);
        uVar33 = ~uVar33;
      }
      *(uint *)(puVar26 + 5) = uVar33;
      puVar23 = (undefined8 *)(param_1 + 0x2a8);
      if (*(long *)(param_1 + 0x2b0) != 0) {
        puVar23 = (undefined8 *)(*(long *)(param_1 + 0x2b0) + 0x30);
      }
      *puVar23 = puVar26;
      *(ulong **)(param_1 + 0x2b0) = puVar26;
      puVar26[7] = param_1 + 0x290;
      uVar37 = uVar37 + 1;
    } while (uVar30 != uVar37);
  }
  FUN_03955fe0(0,param_1 + 0x290,0,lVar22,0);
LAB_03ef6f10:
  return param_2 != 0;
}

