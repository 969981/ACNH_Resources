
void FUN_03a543c0(long param_1,long param_2,long param_3,long *param_4)

{
  long *plVar1;
  undefined *puVar2;
  ulong *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  uint uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined *puVar24;
  long lVar25;
  long *plVar26;
  undefined8 *puVar27;
  ulong *puVar28;
  void *pvVar29;
  undefined8 uVar30;
  ulong uVar31;
  ulong *puVar32;
  ulong *puVar33;
  long *plVar34;
  long lVar35;
  ulong uVar36;
  uint uVar37;
  undefined1 *puVar38;
  
  *(undefined4 *)(param_2 + 0x484) = 0;
  *(undefined4 *)(param_2 + 0x49c) = 0;
  *(undefined8 *)(param_2 + 0x418) = 0;
  puVar24 = PTR_DAT_04bb2698;
  lVar35 = *(long *)PTR_DAT_04bb2698;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar30 = *(undefined8 *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[7] = 0;
  puVar27[3] = uVar30;
  puVar27[4] = puVar27 + 4;
  uVar6 = crc32b(0xffffffff,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x67,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar7 = crc32b(uVar6,0x62,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar7,0x6d,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x12;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar7 = crc32b(0xffffffff,0x62,0x4c11db7);
  uVar9 = crc32b(uVar7,0x61,0x4c11db7);
  uVar9 = crc32b(uVar9,0x67,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar10 = crc32b(uVar9,0x62,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6e378;
  puVar27[1] = param_1;
  uVar10 = crc32b(uVar10,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar10,0x6d,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar35 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 2) = 1;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar35 + (ulong)(1 < uVar8) * 0x10;
  puVar27[4] = puVar27 + 4;
  uVar10 = crc32b(uVar6,100,0x4c11db7);
  uVar10 = crc32b(uVar10,0x6f,0x4c11db7);
  uVar8 = crc32b(uVar10,0x66,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x13;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar10 = crc32b(uVar9,100,0x4c11db7);
  uVar10 = crc32b(uVar10,0x6f,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6ed70;
  puVar27[1] = param_1;
  uVar8 = crc32b(uVar10,0x66,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  lVar35 = 0x1f0;
  if (uVar8 < 0x20) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 2) = 0x1f;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar10 = crc32b(0xffffffff,0x66,0x4c11db7);
  uVar11 = crc32b(uVar10,0x74,0x4c11db7);
  uVar8 = crc32b(uVar11,0x78,0x4c11db7);
  uVar8 = ~uVar8;
  *(undefined4 *)(puVar27 + 8) = 0x14;
  *(uint *)((long)puVar27 + 0x44) = uVar8;
  uVar11 = crc32b(0xffffffff,0x67,0x4c11db7);
  uVar12 = crc32b(uVar11,0x65,0x4c11db7);
  uVar12 = crc32b(uVar12,0x6e,0x4c11db7);
  uVar12 = crc32b(uVar12,0x76,0x4c11db7);
  uVar12 = crc32b(uVar12,0x72,0x4c11db7);
  uVar12 = crc32b(uVar12,0x65,0x4c11db7);
  uVar37 = crc32b(uVar12,0x73,0x4c11db7);
  uVar37 = ~uVar37;
  *(uint *)(puVar27 + 9) = uVar37;
  *puVar27 = &PTR_LAB_04b6ee38;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar35 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 2) = 2;
  puVar27[3] = lVar35 + (ulong)(2 < uVar20) * 0x20;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar12 = crc32b(uVar6,99,0x4c11db7);
  uVar13 = crc32b(uVar12,99,0x4c11db7);
  uVar20 = crc32b(uVar13,0x72,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x15;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar13 = crc32b(uVar9,99,0x4c11db7);
  uVar14 = crc32b(uVar13,99,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6eef8;
  puVar27[1] = param_1;
  uVar20 = crc32b(uVar14,0x72,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  lVar35 = 0x30;
  if (uVar20 < 4) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 2) = 3;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar14 = crc32b(uVar6,0x65,0x4c11db7);
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar14 = crc32b(uVar14,0x6e,0x4c11db7);
  uVar20 = crc32b(uVar14,0x76,0x4c11db7);
  uVar22 = ~uVar20;
  uVar14 = crc32b(uVar9,0x65,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  uVar14 = crc32b(uVar14,0x6e,0x4c11db7);
  uVar15 = crc32b(uVar14,0x76,0x4c11db7);
  uVar23 = ~uVar15;
  *(uint *)(puVar27 + 9) = uVar23;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar35 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 4;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar35 + (ulong)(4 < uVar21) * 0x40;
  puVar27[4] = puVar27 + 4;
  *(undefined4 *)(puVar27 + 8) = 1;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 5;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x50;
  if (uVar21 < 6) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 2;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 6;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x60;
  if (uVar21 < 7) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 3;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 7;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x70;
  if (uVar21 < 8) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 4;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar35 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 8;
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 8) = 5;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar35 + (ulong)(8 < uVar21) * 0x80;
  puVar27[4] = puVar27 + 4;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 9;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x90;
  if (uVar21 < 10) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 6;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 10;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  lVar35 = 0xa0;
  if (uVar21 < 0xb) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  *(undefined4 *)(puVar27 + 8) = 7;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0xb;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0xb0;
  if (uVar21 < 0xc) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 8;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0xc;
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 8) = 9;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  lVar35 = 0xc0;
  if (uVar21 < 0xd) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0xd;
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 8) = 10;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  lVar35 = 0xd0;
  if (uVar21 < 0xe) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0xe;
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 8) = 0xb;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  lVar35 = 0xe0;
  if (uVar21 < 0xf) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0xf;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0xf0;
  if (uVar21 < 0x10) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 0xc;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar35 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x10;
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 8) = 0xd;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *(uint *)(puVar27 + 9) = uVar23;
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar35 + (ulong)(0x10 < uVar21) * 0x100;
  puVar27[4] = puVar27 + 4;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x11;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x110;
  if (uVar21 < 0x12) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 0xe;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x12;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[7] = 0;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x120;
  if (uVar21 < 0x13) {
    lVar35 = 0;
  }
  *puVar27 = &PTR_LAB_04b6efc0;
  puVar27[1] = param_1;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  *(undefined4 *)(puVar27 + 8) = 0xf;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar21 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x13;
  puVar27[7] = 0;
  lVar35 = 0x130;
  if (uVar21 < 0x14) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar14 = crc32b(uVar20,0x73,0x4c11db7);
  uVar14 = crc32b(uVar14,0x65,0x4c11db7);
  uVar20 = crc32b(uVar14,0x74,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x10;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar14 = crc32b(uVar15,0x73,0x4c11db7);
  uVar14 = crc32b(uVar14,0x65,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f088;
  puVar27[1] = param_1;
  uVar20 = crc32b(uVar14,0x74,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x14;
  puVar27[7] = 0;
  lVar35 = 0x140;
  if (uVar20 < 0x15) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar14 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar14 = crc32b(uVar14,0x6d,0x4c11db7);
  uVar14 = crc32b(uVar14,0x61,0x4c11db7);
  uVar20 = crc32b(uVar14,0x70,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x16;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar14 = crc32b(uVar9,0x6c,0x4c11db7);
  uVar14 = crc32b(uVar14,0x6d,0x4c11db7);
  uVar14 = crc32b(uVar14,0x61,0x4c11db7);
  uVar20 = crc32b(uVar14,0x70,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f150;
  puVar27[1] = param_1;
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x15;
  puVar27[7] = 0;
  lVar35 = 0x150;
  if (uVar20 < 0x16) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar14 = crc32b(uVar11,0x73,0x4c11db7);
  uVar14 = crc32b(uVar14,100,0x4c11db7);
  uVar20 = crc32b(uVar14,0x77,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x17;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar14 = crc32b(uVar7,0x67,0x4c11db7);
  uVar16 = crc32b(uVar14,0x73,0x4c11db7);
  uVar16 = crc32b(uVar16,100,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f218;
  puVar27[1] = param_1;
  uVar20 = crc32b(uVar16,0x77,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x16;
  puVar27[7] = 0;
  lVar35 = 0x160;
  if (uVar20 < 0x17) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar16 = crc32b(uVar6,0x73,0x4c11db7);
  uVar17 = crc32b(uVar16,0x68,0x4c11db7);
  uVar17 = crc32b(uVar17,0x70,0x4c11db7);
  uVar20 = crc32b(uVar17,0x70,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x18;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  *puVar27 = &PTR_LAB_04b6f2e0;
  puVar27[1] = param_1;
  uVar17 = crc32b(uVar9,0x73,0x4c11db7);
  uVar18 = crc32b(uVar17,0x68,0x4c11db7);
  uVar18 = crc32b(uVar18,0x70,0x4c11db7);
  uVar20 = crc32b(uVar18,0x70,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x17;
  puVar27[7] = 0;
  lVar35 = 0x170;
  if (uVar20 < 0x18) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar11 = crc32b(uVar11,0x6c,0x4c11db7);
  uVar14 = crc32b(uVar14,0x6c,0x4c11db7);
  uVar18 = crc32b(uVar11,0x67,0x4c11db7);
  uVar18 = crc32b(uVar18,0x68,0x4c11db7);
  uVar20 = crc32b(uVar18,0x74,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x19;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar18 = crc32b(uVar14,0x67,0x4c11db7);
  uVar18 = crc32b(uVar18,0x68,0x4c11db7);
  uVar20 = crc32b(uVar18,0x74,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f3a8;
  puVar27[1] = param_1;
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  lVar35 = 0x180;
  if (uVar20 < 0x19) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 2) = 0x18;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar18 = crc32b(0xffffffff,0x70,0x4c11db7);
  uVar18 = crc32b(uVar18,0x72,0x4c11db7);
  uVar18 = crc32b(uVar18,0x65,0x4c11db7);
  uVar20 = crc32b(uVar18,0x66,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x1a;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar18 = crc32b(uVar7,0x70,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f470;
  puVar27[1] = param_1;
  uVar18 = crc32b(uVar18,0x72,0x4c11db7);
  uVar18 = crc32b(uVar18,0x65,0x4c11db7);
  uVar20 = crc32b(uVar18,0x66,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  lVar35 = 0x1b0;
  if (uVar20 < 0x1c) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 2) = 0x1b;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar18 = crc32b(uVar12,0x75,0x4c11db7);
  uVar18 = crc32b(uVar18,0x62,0x4c11db7);
  uVar20 = crc32b(uVar18,0x65,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x21;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  uVar18 = crc32b(uVar13,0x75,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f538;
  puVar27[1] = param_1;
  uVar18 = crc32b(uVar18,0x62,0x4c11db7);
  uVar20 = crc32b(uVar18,0x65,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar20;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x1c;
  puVar27[7] = 0;
  lVar35 = 0x1c0;
  if (uVar20 < 0x1d) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 0x22;
  *(uint *)((long)puVar27 + 0x44) = uVar8;
  *(uint *)(puVar27 + 9) = uVar37;
  *puVar27 = &PTR_LAB_04b6f5f8;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x1d;
  puVar27[7] = 0;
  lVar35 = 0x1d0;
  if (uVar20 < 0x1e) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 0x23;
  *(uint *)((long)puVar27 + 0x44) = uVar8;
  *(uint *)(puVar27 + 9) = uVar37;
  *puVar27 = &PTR_LAB_04b70020;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x1e;
  puVar27[7] = 0;
  lVar35 = 0x1e0;
  if (uVar20 < 0x1f) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 0x24;
  *(uint *)((long)puVar27 + 0x44) = uVar8;
  *(uint *)(puVar27 + 9) = uVar37;
  *puVar27 = &PTR_LAB_04b700e0;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar35 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 2) = 0x20;
  puVar27[3] = lVar35 + (ulong)(0x20 < uVar20) * 0x200;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar10 = crc32b(uVar10,0x6d,0x4c11db7);
  uVar20 = crc32b(uVar10,100,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x11;
  *(uint *)((long)puVar27 + 0x44) = ~uVar20;
  *(uint *)(puVar27 + 9) = uVar37;
  *puVar27 = &PTR_LAB_04b6f6b8;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x21;
  puVar27[7] = 0;
  *(undefined4 *)(puVar27 + 8) = 0x25;
  *(uint *)((long)puVar27 + 0x44) = uVar22;
  *(uint *)(puVar27 + 9) = uVar23;
  lVar35 = 0x210;
  if (uVar20 < 0x22) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *puVar27 = &PTR_LAB_04b6f778;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar20 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x22;
  puVar27[7] = 0;
  lVar35 = 0x220;
  if (uVar20 < 0x23) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 8) = 0x26;
  *(uint *)((long)puVar27 + 0x44) = uVar8;
  *(uint *)(puVar27 + 9) = uVar37;
  *puVar27 = &PTR_LAB_04b6f840;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x23;
  puVar27[7] = 0;
  lVar35 = 0x230;
  if (uVar8 < 0x24) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar10 = crc32b(0xffffffff,0x6f,0x4c11db7);
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar10 = crc32b(uVar10,0x66,0x4c11db7);
  uVar8 = crc32b(uVar10,0x78,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x1d;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x66,0x4c11db7);
  uVar8 = crc32b(uVar7,0x78,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6f900;
  puVar27[1] = param_1;
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x24;
  puVar27[7] = 0;
  *puVar27 = &PTR_LAB_04b6f9c0;
  puVar27[1] = param_1;
  lVar35 = 0x240;
  if (uVar8 < 0x25) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar7 = crc32b(uVar16,0x6b,0x4c11db7);
  uVar8 = crc32b(uVar7,0x79,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x1e;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar7 = crc32b(uVar17,0x6b,0x4c11db7);
  uVar8 = crc32b(uVar7,0x79,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x25;
  puVar27[7] = 0;
  *puVar27 = &PTR_LAB_04b6f9c0;
  puVar27[1] = param_1;
  lVar35 = 0x250;
  if (uVar8 < 0x26) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar7 = crc32b(uVar12,0x6c,0x4c11db7);
  uVar7 = crc32b(uVar7,0x77,0x4c11db7);
  uVar8 = crc32b(uVar7,100,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x1f;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar7 = crc32b(uVar13,0x6c,0x4c11db7);
  uVar7 = crc32b(uVar7,0x77,0x4c11db7);
  uVar8 = crc32b(uVar7,100,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x26;
  puVar27[7] = 0;
  lVar35 = 0x260;
  if (uVar8 < 0x27) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar7 = crc32b(uVar6,0x76,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar7,0x6d,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x20;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar7 = crc32b(uVar9,0x76,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6fa88;
  puVar27[1] = param_1;
  uVar7 = crc32b(uVar7,0x6f,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar7,0x6d,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x19;
  puVar27[7] = 0;
  lVar35 = 400;
  if (uVar8 < 0x1a) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar7 = crc32b(uVar6,0x66,0x4c11db7);
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  uVar7 = crc32b(uVar7,0x69,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar7,0x61,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x1b;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar7 = crc32b(uVar9,0x66,0x4c11db7);
  uVar7 = crc32b(uVar7,0x69,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6fb50;
  puVar27[1] = param_1;
  uVar7 = crc32b(uVar7,0x6c,0x4c11db7);
  uVar8 = crc32b(uVar7,0x61,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x1a;
  puVar27[7] = 0;
  lVar35 = 0x1a0;
  if (uVar8 < 0x1b) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar8 = crc32b(uVar6,0x78,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x1c;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar6 = crc32b(uVar9,0x61,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6fc18;
  puVar27[1] = param_1;
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar8 = crc32b(uVar6,0x78,0x4c11db7);
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[7] = 0;
  lVar35 = 0x270;
  if (uVar8 < 0x28) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 2) = 0x27;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar6 = crc32b(uVar11,0x70,0x4c11db7);
  uVar7 = crc32b(uVar14,0x70,0x4c11db7);
  uVar6 = crc32b(uVar6,0x62,0x4c11db7);
  uVar7 = crc32b(uVar7,0x62,0x4c11db7);
  uVar8 = crc32b(uVar6,0x6d,0x4c11db7);
  uVar37 = crc32b(uVar7,0x6d,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x27;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  *(uint *)(puVar27 + 9) = ~uVar37;
  *puVar27 = &PTR_LAB_04b6fce0;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x50);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x50,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  puVar27[7] = 0;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  lVar35 = 0x280;
  if (uVar8 < 0x29) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 2) = 0x28;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  uVar8 = crc32b(uVar6,100,0x4c11db7);
  *(undefined4 *)(puVar27 + 8) = 0x28;
  *(uint *)((long)puVar27 + 0x44) = ~uVar8;
  uVar8 = crc32b(uVar7,100,0x4c11db7);
  *puVar27 = &PTR_LAB_04b6fda8;
  puVar27[1] = param_1;
  *(uint *)(puVar27 + 9) = ~uVar8;
  if (*(int *)(param_2 + 0x98) < *(int *)(param_2 + 0x9c)) {
    *(undefined8 **)(*(long *)(param_2 + 0xa0) + (long)*(int *)(param_2 + 0x98) * 8) = puVar27;
    *(int *)(param_2 + 0x98) = *(int *)(param_2 + 0x98) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x1b8);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x1b8,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x2d;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  *(undefined4 *)(puVar27 + 10) = 0x40;
  puVar5 = PTR_DAT_04bb2bc0;
  lVar35 = 0x2d0;
  if (uVar8 < 0x2e) {
    lVar35 = 0;
  }
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[7] = 0;
  puVar27[8] = puVar5 + 0x10;
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  *(undefined4 *)(puVar27 + 0x15) = 0x100;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  *(undefined1 *)((long)puVar27 + 0x1ab) = 0;
  puVar4 = PTR_DAT_04bb21f8;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
  *(undefined4 *)(puVar27 + 0x36) = 8;
  *puVar27 = &PTR_LAB_04b6fe70;
  puVar27[1] = param_1;
  puVar27[0x13] = puVar2;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  uVar6 = crc32b(0xffffffff,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x78,0x4c11db7);
  uVar8 = crc32b(uVar6,0x74,0x4c11db7);
  uVar8 = ~uVar8;
  *(uint *)((long)puVar27 + 0x1b4) = uVar8;
  if (*(int *)(param_2 + 0x230) < *(int *)(param_2 + 0x234)) {
    *(undefined8 **)(*(long *)(param_2 + 0x238) + (long)*(int *)(param_2 + 0x230) * 8) = puVar27;
    *(int *)(param_2 + 0x230) = *(int *)(param_2 + 0x230) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x1b8);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x1b8,8);
  }
  uVar37 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x2e;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  lVar35 = 0x2e0;
  if (uVar37 < 0x2f) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined1 *)((long)puVar27 + 0x1ab) = 0;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  *(uint *)((long)puVar27 + 0x1b4) = uVar8;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[7] = 0;
  puVar27[8] = puVar5 + 0x10;
  *(undefined4 *)(puVar27 + 0x15) = 0x100;
  puVar27[0x13] = puVar4 + 0x10;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined4 *)(puVar27 + 0x36) = 8;
  *puVar27 = &PTR_LAB_04b6fe70;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x230) < *(int *)(param_2 + 0x234)) {
    *(undefined8 **)(*(long *)(param_2 + 0x238) + (long)*(int *)(param_2 + 0x230) * 8) = puVar27;
    *(int *)(param_2 + 0x230) = *(int *)(param_2 + 0x230) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x1b8);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x1b8,8);
  }
  uVar37 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x2f;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  lVar35 = 0x2f0;
  if (uVar37 < 0x30) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined1 *)((long)puVar27 + 0x1ab) = 0;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  *(uint *)((long)puVar27 + 0x1b4) = uVar8;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar27[7] = 0;
  puVar27[8] = puVar5 + 0x10;
  *(undefined4 *)(puVar27 + 0x15) = 0x100;
  puVar27[0x13] = puVar4 + 0x10;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined4 *)(puVar27 + 0x36) = 8;
  *puVar27 = &PTR_LAB_04b6fe70;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x230) < *(int *)(param_2 + 0x234)) {
    *(undefined8 **)(*(long *)(param_2 + 0x238) + (long)*(int *)(param_2 + 0x230) * 8) = puVar27;
    *(int *)(param_2 + 0x230) = *(int *)(param_2 + 0x230) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x1b8);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x1b8,8);
  }
  uVar37 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x30;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  lVar35 = 0x300;
  if (uVar37 < 0x31) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  *(undefined1 *)((long)puVar27 + 0x1ab) = 0;
  *(uint *)((long)puVar27 + 0x1b4) = uVar8;
  puVar27[7] = 0;
  puVar27[8] = puVar5 + 0x10;
  *(undefined4 *)(puVar27 + 0x15) = 0x100;
  puVar27[0x13] = puVar4 + 0x10;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined4 *)(puVar27 + 0x36) = 8;
  *puVar27 = &PTR_LAB_04b6fe70;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x230) < *(int *)(param_2 + 0x234)) {
    *(undefined8 **)(*(long *)(param_2 + 0x238) + (long)*(int *)(param_2 + 0x230) * 8) = puVar27;
    *(int *)(param_2 + 0x230) = *(int *)(param_2 + 0x230) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x160);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x160,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x29;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  lVar35 = 0x290;
  if (uVar8 < 0x2a) {
    lVar35 = 0;
  }
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar2 = puVar5 + 0x10;
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  puVar27[0x13] = puVar2;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined4 *)(puVar27 + 0x15) = 0x40;
  *(undefined1 *)((long)puVar27 + 0xeb) = 0;
  *(undefined4 *)(puVar27 + 0x1e) = 0xffffffff;
  *(undefined4 *)(puVar27 + 0x21) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x14b) = 0;
  *(undefined1 *)((long)puVar27 + 0x10c) = 0;
  puVar27[0x2a] = 0x8ffffffff;
  *(undefined1 *)(puVar27 + 0x2b) = 0;
  puVar27[7] = 0;
  puVar27[8] = puVar2;
  puVar27[0x1f] = puVar2;
  puVar27[0x20] = (long)puVar27 + 0x10c;
  *puVar27 = &PTR_LAB_04b6ff30;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x260) < *(int *)(param_2 + 0x264)) {
    *(undefined8 **)(*(long *)(param_2 + 0x268) + (long)*(int *)(param_2 + 0x260) * 8) = puVar27;
    *(int *)(param_2 + 0x260) = *(int *)(param_2 + 0x260) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x160);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x160,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x2a;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  lVar35 = 0x2a0;
  if (uVar8 < 0x2b) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined4 *)(puVar27 + 0x15) = 0x40;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  *(undefined1 *)((long)puVar27 + 0xeb) = 0;
  *(undefined4 *)(puVar27 + 0x1e) = 0xffffffff;
  *(undefined4 *)(puVar27 + 0x21) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x14b) = 0;
  puVar27[0x2a] = 0x8ffffffff;
  *(undefined1 *)(puVar27 + 0x2b) = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar2 = puVar5 + 0x10;
  puVar27[0x13] = puVar2;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined1 *)((long)puVar27 + 0x10c) = 0;
  puVar27[7] = 0;
  puVar27[8] = puVar2;
  puVar27[0x1f] = puVar2;
  puVar27[0x20] = (long)puVar27 + 0x10c;
  *puVar27 = &PTR_LAB_04b6ff30;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x260) < *(int *)(param_2 + 0x264)) {
    *(undefined8 **)(*(long *)(param_2 + 0x268) + (long)*(int *)(param_2 + 0x260) * 8) = puVar27;
    *(int *)(param_2 + 0x260) = *(int *)(param_2 + 0x260) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x160);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x160,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x2b;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  lVar35 = 0x2b0;
  if (uVar8 < 0x2c) {
    lVar35 = 0;
  }
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined4 *)(puVar27 + 0x15) = 0x40;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  *(undefined1 *)((long)puVar27 + 0xeb) = 0;
  *(undefined4 *)(puVar27 + 0x1e) = 0xffffffff;
  *(undefined4 *)(puVar27 + 0x21) = 0x40;
  *(undefined1 *)((long)puVar27 + 0x14b) = 0;
  puVar27[0x2a] = 0x8ffffffff;
  *(undefined1 *)(puVar27 + 0x2b) = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar2 = puVar5 + 0x10;
  puVar27[0x13] = puVar2;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined1 *)((long)puVar27 + 0x10c) = 0;
  puVar27[7] = 0;
  puVar27[8] = puVar2;
  puVar27[0x1f] = puVar2;
  puVar27[0x20] = (long)puVar27 + 0x10c;
  *puVar27 = &PTR_LAB_04b6ff30;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x260) < *(int *)(param_2 + 0x264)) {
    *(undefined8 **)(*(long *)(param_2 + 0x268) + (long)*(int *)(param_2 + 0x260) * 8) = puVar27;
    *(int *)(param_2 + 0x260) = *(int *)(param_2 + 0x260) + 1;
  }
  lVar35 = *(long *)puVar24;
  if (lVar35 == 0) {
    puVar27 = malloc(0x160);
  }
  else {
    plVar26 = param_4;
    if (param_4 == (long *)0x0) {
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
    }
    puVar27 = (undefined8 *)(**(code **)(*plVar26 + 0x30))(plVar26,0x160,8);
  }
  uVar8 = *(uint *)(param_1 + 0x7d8);
  lVar25 = *(long *)(param_1 + 0x7e0);
  *(undefined4 *)(puVar27 + 2) = 0x2c;
  *(undefined1 *)((long)puVar27 + 0x54) = 0;
  puVar27[9] = (undefined1 *)((long)puVar27 + 0x54);
  *(undefined1 *)((long)puVar27 + 0x93) = 0;
  *(undefined1 *)((long)puVar27 + 0xeb) = 0;
  lVar35 = 0x2c0;
  if (uVar8 < 0x2d) {
    lVar35 = 0;
  }
  puVar27[5] = puVar27 + 4;
  puVar27[6] = 0;
  *(undefined4 *)(puVar27 + 0x1e) = 0xffffffff;
  *(undefined1 *)((long)puVar27 + 0x14b) = 0;
  *(undefined4 *)(puVar27 + 10) = 0x40;
  *(undefined4 *)(puVar27 + 0x15) = 0x40;
  *(undefined4 *)(puVar27 + 0x21) = 0x40;
  puVar27[0x2a] = 0x8ffffffff;
  *(undefined1 *)(puVar27 + 0x2b) = 0;
  puVar27[3] = lVar25 + lVar35;
  puVar27[4] = puVar27 + 4;
  puVar2 = puVar5 + 0x10;
  puVar27[7] = 0;
  puVar27[8] = puVar2;
  *(undefined1 *)((long)puVar27 + 0xac) = 0;
  puVar27[0x13] = puVar2;
  puVar27[0x14] = (undefined1 *)((long)puVar27 + 0xac);
  *(undefined1 *)((long)puVar27 + 0x10c) = 0;
  puVar27[0x1f] = puVar2;
  puVar27[0x20] = (long)puVar27 + 0x10c;
  *puVar27 = &PTR_LAB_04b6ff30;
  puVar27[1] = param_1;
  if (*(int *)(param_2 + 0x260) < *(int *)(param_2 + 0x264)) {
    *(undefined8 **)(*(long *)(param_2 + 0x268) + (long)*(int *)(param_2 + 0x260) * 8) = puVar27;
    *(int *)(param_2 + 0x260) = *(int *)(param_2 + 0x260) + 1;
  }
  pvVar29 = (void *)(param_2 + 0x290);
  memset(pvVar29,0,0x188);
  uVar31 = (ulong)*(int *)(param_2 + 0x98);
  if (*(int *)(param_2 + 0x98) != 0) {
    plVar34 = *(long **)(param_2 + 0xa0);
    plVar26 = plVar34;
    for (uVar36 = uVar31 & 3; uVar36 != 0; uVar36 = uVar36 - 1) {
      *(long *)((long)pvVar29 + (long)*(int *)(*plVar26 + 0x10) * 8) = *plVar26;
      plVar26 = plVar26 + 1;
    }
    if (2 < (uVar31 - 1 & 0x1fffffffffffffff)) {
      do {
        *(long *)((long)pvVar29 + (long)*(int *)(*plVar26 + 0x10) * 8) = *plVar26;
        *(long *)((long)pvVar29 + (long)*(int *)(plVar26[1] + 0x10) * 8) = plVar26[1];
        *(long *)((long)pvVar29 + (long)*(int *)(plVar26[2] + 0x10) * 8) = plVar26[2];
        plVar1 = plVar26 + 3;
        plVar26 = plVar26 + 4;
        *(long *)((long)pvVar29 + (long)*(int *)(*plVar1 + 0x10) * 8) = *plVar1;
      } while (plVar26 != plVar34 + uVar31);
    }
  }
  uVar8 = *(uint *)(param_3 + 8);
  uVar31 = (ulong)uVar8;
  if (0 < (int)uVar8) {
    lVar35 = *(long *)puVar24;
    uVar36 = uVar31 * 0x1f0 | 8;
    if (lVar35 == 0) {
      puVar28 = malloc(uVar36);
joined_r0x03a57084:
      if (puVar28 != (ulong *)0x0) {
        uVar36 = uVar31 * 0x1f0 - 0x1f0;
        puVar33 = puVar28 + 1;
        *puVar28 = uVar31;
        puVar32 = puVar33;
        if ((uVar36 / 0x1f0 & 1) == 0) {
          *(undefined1 *)((long)puVar28 + 0x24) = 0;
          *(undefined4 *)(puVar28 + 4) = 0x40;
          puVar32 = puVar28 + 0x3f;
          puVar28[3] = (ulong)((long)puVar28 + 0x24);
          *(undefined1 *)((long)puVar28 + 99) = 0;
          puVar28[2] = (ulong)(puVar5 + 0x10);
        }
        if (0x1ef < uVar36) {
          do {
            *(undefined1 *)((long)puVar32 + 0x1c) = 0;
            puVar32[2] = (ulong)((long)puVar32 + 0x1c);
            puVar28 = puVar32 + 0x3f;
            uVar36 = (long)puVar32 + 0x20c;
            *(undefined4 *)(puVar32 + 3) = 0x40;
            puVar3 = puVar32 + 0x40;
            *(undefined1 *)((long)puVar32 + 0x5b) = 0;
            puVar32[1] = (ulong)(puVar5 + 0x10);
            *(undefined4 *)(puVar32 + 0x41) = 0x40;
            *(undefined1 *)((long)puVar32 + 0x24b) = 0;
            *(undefined1 *)((long)puVar32 + 0x20c) = 0;
            puVar32 = puVar32 + 0x7c;
            *puVar3 = uVar36;
            *puVar28 = (ulong)(puVar5 + 0x10);
          } while (puVar32 != puVar33 + uVar31 * 0x3e);
        }
        *(uint *)(param_2 + 0x448) = uVar8;
        *(ulong **)(param_2 + 0x450) = puVar33;
      }
    }
    else {
      plVar26 = param_4;
      if (param_4 != (long *)0x0) {
LAB_03a57060:
        puVar28 = (ulong *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar36,8);
        goto joined_r0x03a57084;
      }
      lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar26 = (long *)(lVar35 + 8);
      if (lVar25 != 0) {
        plVar26 = (long *)(lVar25 + 0xa8);
      }
      plVar26 = (long *)*plVar26;
      if (plVar26 != (long *)0x0) goto LAB_03a57060;
    }
    uVar8 = *(uint *)(param_3 + 8);
    if (0 < (int)uVar8) {
      lVar35 = *(long *)puVar24;
      if (lVar35 == 0) {
        pvVar29 = malloc((ulong)uVar8 << 3);
      }
      else {
        plVar26 = param_4;
        if (param_4 == (long *)0x0) {
          lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
          plVar26 = (long *)(lVar35 + 8);
          if (lVar25 != 0) {
            plVar26 = (long *)(lVar25 + 0xa8);
          }
          plVar26 = (long *)*plVar26;
          if (plVar26 == (long *)0x0) goto LAB_03a571a4;
        }
        pvVar29 = (void *)(**(code **)(*plVar26 + 0x30))(plVar26,(ulong)uVar8 << 3,8);
      }
      if (pvVar29 != (void *)0x0) {
        *(uint *)(param_2 + 0x458) = uVar8;
        *(void **)(param_2 + 0x460) = pvVar29;
      }
    }
  }
LAB_03a571a4:
  *(undefined4 *)(param_2 + 0x468) = 0;
  uVar8 = *(uint *)(param_3 + 0xc);
  uVar31 = (ulong)uVar8;
  if ((int)uVar8 < 1) goto LAB_03a5734c;
  lVar35 = *(long *)puVar24;
  uVar36 = uVar31 << 4 | 8;
  if (lVar35 == 0) {
    puVar28 = malloc(uVar36);
joined_r0x03a5721c:
    if (puVar28 != (ulong *)0x0) {
      uVar36 = uVar31 & 3;
      puVar32 = puVar28 + 1;
      *puVar28 = uVar31;
      puVar2 = PTR_DAT_04bb2120;
      puVar5 = PTR_DAT_04bb2020;
      puVar28 = puVar32;
      if ((uVar8 & 3) != 0) {
        puVar4 = PTR_DAT_04bb2020 + 0x10;
        puVar33 = puVar32;
        do {
          puVar28 = puVar33 + 2;
          *puVar33 = (ulong)puVar4;
          puVar33[1] = (ulong)puVar2;
          uVar36 = uVar36 - 1;
          puVar33 = puVar28;
        } while (uVar36 != 0);
      }
      if (2 < (uVar31 - 1 & 0xfffffffffffffff)) {
        puVar5 = puVar5 + 0x10;
        do {
          *puVar28 = (ulong)puVar5;
          puVar28[1] = (ulong)puVar2;
          puVar28[2] = (ulong)puVar5;
          puVar28[3] = (ulong)puVar2;
          puVar28[4] = (ulong)puVar5;
          puVar28[5] = (ulong)puVar2;
          puVar28[6] = (ulong)puVar5;
          puVar28[7] = (ulong)puVar2;
          puVar28 = puVar28 + 8;
        } while (puVar28 != puVar32 + uVar31 * 2);
      }
      *(uint *)(param_2 + 0x420) = uVar8;
      *(ulong **)(param_2 + 0x428) = puVar32;
    }
  }
  else {
    plVar26 = param_4;
    if (param_4 != (long *)0x0) {
LAB_03a571f8:
      puVar28 = (ulong *)(**(code **)(*plVar26 + 0x30))(plVar26,uVar36,8);
      goto joined_r0x03a5721c;
    }
    lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    plVar26 = (long *)(lVar35 + 8);
    if (lVar25 != 0) {
      plVar26 = (long *)(lVar25 + 0xa8);
    }
    plVar26 = (long *)*plVar26;
    if (plVar26 != (long *)0x0) goto LAB_03a571f8;
  }
  uVar8 = *(uint *)(param_3 + 0xc);
  if (0 < (int)uVar8) {
    lVar35 = *(long *)puVar24;
    uVar31 = (ulong)uVar8 * 0xe0;
    if (lVar35 == 0) {
      puVar28 = malloc(uVar31 | 8);
    }
    else {
      if (param_4 == (long *)0x0) {
        lVar25 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
        puVar27 = (undefined8 *)(lVar35 + 8);
        if (lVar25 != 0) {
          puVar27 = (undefined8 *)(lVar25 + 0xa8);
        }
        param_4 = (long *)*puVar27;
        if (param_4 == (long *)0x0) goto LAB_03a5734c;
      }
      puVar28 = (ulong *)(**(code **)(*param_4 + 0x30))(param_4,uVar31 | 8,8);
    }
    if (puVar28 != (ulong *)0x0) {
      *puVar28 = (ulong)uVar8;
      puVar32 = puVar28 + 1;
      do {
        FUN_0390cee0(puVar32);
        puVar32 = puVar32 + 0x1c;
        uVar31 = uVar31 - 0xe0;
      } while (uVar31 != 0);
      *(uint *)(param_2 + 0x430) = uVar8;
      *(ulong **)(param_2 + 0x438) = puVar28 + 1;
    }
  }
LAB_03a5734c:
  uVar8 = *(uint *)(param_2 + 0x448);
  *(undefined4 *)(param_2 + 0x440) = 0;
  *(undefined4 *)(param_2 + 0x4a0) = 0xffffffff;
  if (uVar8 != 0) {
    lVar35 = *(long *)(param_2 + 0x450);
    uVar37 = 0;
    do {
      lVar25 = (long)(int)uVar37;
      puVar38 = (undefined1 *)(lVar35 + (long)(int)uVar37 * 0x1f0);
      *puVar38 = 0;
      *(undefined4 *)(puVar38 + 0x60) = 0xffffffff;
      **(undefined1 **)(puVar38 + 0x10) = 0;
      memset(puVar38 + 0x68,0,0x188);
      uVar20 = uVar37 + 1;
      if (*(uint *)(param_2 + 0x458) <= uVar37) {
        lVar25 = 0;
      }
      *(undefined1 **)(*(long *)(param_2 + 0x460) + lVar25 * 8) = puVar38;
      uVar37 = uVar20;
    } while (uVar8 != uVar20);
  }
  puVar27 = *(undefined8 **)(param_2 + 0x4c0);
  *(undefined8 *)(param_2 + 0x4a8) = 0;
  *(undefined8 *)(param_2 + 0x4b0) = 0xffffffff00000000;
  if (puVar27 != &DAT_0407ebb1) {
    iVar19 = 0;
    if (*(int *)(param_2 + 0x4c8) < 1) {
      iVar19 = *(int *)(param_2 + 0x4c8) + -1;
    }
    memset(puVar27,0,(long)iVar19);
    *(undefined1 *)((long)puVar27 + (long)iVar19) = 0;
  }
  *(undefined8 **)(param_2 + 0x5d8) = &DAT_0407ebb1;
  *(undefined8 **)(param_2 + 0x5e8) = &DAT_0407ebb1;
  *(undefined8 **)(param_2 + 0x5f8) = &DAT_0407ebb1;
  return;
}

