
void FUN_03a7bbb0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  long *plVar8;
  undefined *puVar9;
  uint uVar10;
  long lVar11;
  short *psVar12;
  uint uVar13;
  void *pvVar14;
  void *pvVar15;
  undefined1 *puVar16;
  undefined *local_b8;
  undefined *local_b0;
  undefined *local_a8;
  char *local_a0;
  undefined *local_98;
  byte *local_90;
  int local_88;
  undefined1 auStack_84 [31];
  undefined1 local_65;
  
  *param_1 = (long)(PTR_DAT_04bd18d8 + 0x10);
  param_1[1] = 0;
  FUN_03941294(param_1 + 2);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_90 = (byte *)0x40e6d2d;
  local_98 = puVar1;
  FUN_03955370(param_1 + 0x49,&local_98,0);
  param_1[0x83] = 0;
  uVar5 = crc32b(0xffffffff,100,0x4c11db7);
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  param_1[0x88] = 0;
  param_1[0x89] = 0;
  param_1[0x8a] = 0;
  uVar5 = crc32b(uVar5,0x66,0x4c11db7);
  param_1[0x8b] = 0;
  param_1[0x8c] = 0;
  plVar2 = param_1 + 0x90;
  param_1[0x8d] = 0;
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  param_1[0x8e] = 0;
  puVar9 = PTR_DAT_04bd1068;
  param_1[0x8f] = 0;
  uVar5 = crc32b(uVar5,0x75,0x4c11db7);
  param_1[0x95] = 0;
  param_1[0x94] = 0;
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x91] = 0;
  uVar10 = crc32b(uVar5,0x74,0x4c11db7);
  param_1[0x98] = 0;
  puVar3 = PTR_DAT_04bd1078;
  *param_1 = (long)&PTR_FUN_04b707c8;
  *(undefined4 *)(param_1 + 0x87) = 0x400002;
  puVar3 = puVar3 + 0x10;
  uVar10 = ~uVar10;
  param_1[0x49] = (long)&PTR_LAB_04b70820;
  param_1[0x90] = (long)(puVar9 + 0x10);
  param_1[0x96] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9c] = 0;
  param_1[0x9a] = (long)puVar3;
  *(undefined4 *)(param_1 + 0x9d) = 0;
  param_1[0xa0] = 0;
  param_1[0x9e] = (long)puVar3;
  *(uint *)(param_1 + 0x97) = uVar10;
  *(uint *)(param_1 + 0x9b) = uVar10;
  *(uint *)(param_1 + 0x9f) = uVar10;
  puVar3 = PTR_PTR_04bb2238;
  local_88 = 0x20;
  local_98 = PTR_DAT_04bb2a08 + 0x10;
  lVar11 = *(long *)PTR_PTR_04bb2238;
  *(undefined4 *)(param_1 + 0xa1) = 0;
  local_65 = 0;
  local_90 = auStack_84;
  (**(code **)(lVar11 + 0x18))(puVar3);
  puVar16 = *(undefined1 **)(puVar3 + 8);
  if (auStack_84 != puVar16) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_03a7bdac;
      lVar4 = *(long *)(puVar3 + 8) + lVar11;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03a7bdac;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03a7bdac;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03a7bdac:
    iVar7 = (int)lVar11;
    if (local_88 <= (int)lVar11) {
      iVar7 = local_88 + -1;
    }
    memcpy(auStack_84,puVar16,(long)iVar7);
    auStack_84[iVar7] = 0;
  }
  puVar9 = PTR_DAT_04bb2028;
  local_b0 = &DAT_041010c2;
  local_98 = PTR_DAT_04bb2028 + 0x10;
  local_a0 = "mii_hair_light_name";
  local_b8 = puVar1;
  local_a8 = puVar1;
  FUN_0394da90(param_1 + 0xa2,&local_98,&local_a8,&local_b8,plVar2);
  puVar1 = PTR_DAT_04bd12f8;
  param_1[0xad] = 0;
  param_1[0xae] = 0;
  pvVar14 = (void *)param_1[0xa6];
  param_1[0xaf] = 0;
  param_1[0xb0] = 0;
  param_1[0xa2] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0xac) = 0xffffffff;
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  pvVar15 = *(void **)(puVar3 + 8);
  if (pvVar14 != pvVar15) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_03a7bebc;
      lVar4 = *(long *)(puVar3 + 8) + lVar11;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03a7bebc;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03a7bebc;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03a7bebc:
    iVar7 = (int)lVar11;
    if ((int)param_1[0xa7] <= (int)lVar11) {
      iVar7 = (int)param_1[0xa7] + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar7);
    *(undefined1 *)((long)pvVar14 + (long)iVar7) = 0;
  }
  puVar1 = PTR_DAT_04bd11f0;
  *(undefined4 *)(param_1 + 0xb1) = 0;
  local_65 = 0;
  param_1[0xa2] = (long)(puVar1 + 0x10);
  local_88 = 0x20;
  local_98 = PTR_DAT_04bb2a08 + 0x10;
  local_90 = auStack_84;
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  puVar16 = *(undefined1 **)(puVar3 + 8);
  if (auStack_84 != puVar16) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_03a7bf8c;
      lVar4 = *(long *)(puVar3 + 8) + lVar11;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03a7bf8c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03a7bf8c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03a7bf8c:
    iVar7 = (int)lVar11;
    if (local_88 <= (int)lVar11) {
      iVar7 = local_88 + -1;
    }
    memcpy(auStack_84,puVar16,(long)iVar7);
    auStack_84[iVar7] = 0;
  }
  local_98 = puVar9 + 0x10;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_a0 = "mii_hair_light_ss_name";
  local_b0 = &DAT_040dc69e;
  local_b8 = puVar1;
  local_a8 = puVar1;
  FUN_0394da90(param_1 + 0xb2,&local_98,&local_a8,&local_b8,plVar2);
  puVar9 = PTR_DAT_04bd12f8;
  param_1[0xbd] = 0;
  param_1[0xbe] = 0;
  pvVar14 = (void *)param_1[0xb6];
  param_1[0xbf] = 0;
  param_1[0xc0] = 0;
  *(undefined4 *)(param_1 + 0xbc) = 0xffffffff;
  param_1[0xb2] = (long)(puVar9 + 0x10);
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  pvVar15 = *(void **)(puVar3 + 8);
  if (pvVar14 != pvVar15) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar11 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar11) == '\0') goto LAB_03a7c09c;
      lVar4 = *(long *)(puVar3 + 8) + lVar11;
      if (*(char *)(lVar4 + 1) == '\0') {
        lVar11 = lVar11 + 1;
        goto LAB_03a7c09c;
      }
      if (*(char *)(lVar4 + 2) == '\0') {
        lVar11 = lVar11 + 2;
        goto LAB_03a7c09c;
      }
      lVar11 = lVar11 + 3;
    } while (lVar11 != 0x80001);
    lVar11 = 0;
LAB_03a7c09c:
    iVar7 = (int)lVar11;
    if ((int)param_1[0xb7] <= (int)lVar11) {
      iVar7 = (int)param_1[0xb7] + -1;
    }
    memcpy(pvVar14,pvVar15,(long)iVar7);
    *(undefined1 *)((long)pvVar14 + (long)iVar7) = 0;
  }
  puVar3 = PTR_DAT_04bd11f0;
  uVar5 = crc32b(0xffffffff,0x6c,0x4c11db7);
  uVar5 = crc32b(uVar5,0x69,0x4c11db7);
  uVar5 = crc32b(uVar5,0x67,0x4c11db7);
  uVar5 = crc32b(uVar5,0x68,0x4c11db7);
  uVar5 = crc32b(uVar5,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x70,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x70,0x4c11db7);
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar5,100,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar5 = crc32b(uVar5,0x70,0x4c11db7);
  uVar6 = crc32b(uVar6,0x66,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,0x66,0x4c11db7);
  uVar5 = crc32b(uVar5,99,0x4c11db7);
  uVar6 = crc32b(uVar6,0x75,0x4c11db7);
  uVar5 = crc32b(uVar5,0x75,0x4c11db7);
  uVar6 = crc32b(uVar6,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6c,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x61,0x4c11db7);
  uVar6 = crc32b(uVar6,0x5f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar5 = crc32b(uVar5,0x69,0x4c11db7);
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6e,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar6 = crc32b(uVar6,0x73,0x4c11db7);
  uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
  uVar6 = crc32b(uVar6,0x69,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  *(undefined4 *)(param_1 + 0xc1) = 0;
  uVar6 = crc32b(uVar6,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x69,0x4c11db7);
  param_1[0xb2] = (long)(puVar3 + 0x10);
  puVar3 = PTR_DAT_04bd1078;
  uVar10 = crc32b(uVar6,0x79,0x4c11db7);
  uVar5 = crc32b(uVar5,0x74,0x4c11db7);
  plVar8 = param_1 + 0x91;
  if (param_1[0x92] != 0) {
    plVar8 = (long *)(param_1[0x92] + 0x10);
  }
  uVar13 = crc32b(uVar5,0x79,0x4c11db7);
  *(uint *)(param_1 + 0xc3) = ~uVar10;
  param_1[0xc2] = (long)(puVar3 + 0x10);
  *plVar8 = (long)(param_1 + 0xc2);
  *(undefined4 *)(param_1 + 0xc5) = 0x3f800000;
  puVar9 = PTR_DAT_04bbdc40;
  param_1[0xc6] = (long)(puVar3 + 0x10);
  param_1[200] = 0;
  param_1[0xc4] = (long)(param_1 + 0xc6);
  param_1[0x92] = (long)(param_1 + 0xc6);
  *(undefined4 *)(param_1 + 0xc9) = 0x3f800000;
  *(uint *)(param_1 + 199) = ~uVar13;
  *(int *)(param_1 + 0x93) = (int)param_1[0x93] + 2;
  *(undefined4 *)(param_1 + 0xca) = 0;
  *(undefined4 *)((long)param_1 + 0x654) = 0;
  param_1[0xcb] = 0;
  *(undefined4 *)(param_1 + 0xcc) = 0;
  param_1[0xcf] = 0;
  param_1[0xd0] = (long)&PTR_LAB_04b70898;
  psVar12 = *(short **)puVar9;
  *(undefined8 *)((long)param_1 + 0x664) = 0;
  *(undefined8 *)((long)param_1 + 0x66c) = 0;
  *(int *)(param_1 + 0xb1) = (int)*psVar12;
  *(int *)(param_1 + 0xc1) = (int)*psVar12;
  local_90 = (byte *)0x40a88be;
  lVar11 = 0;
  local_98 = puVar1;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    lVar11 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_98);
  }
  param_1[0x95] = lVar11;
  (**(code **)(local_98 + 0x18))(&local_98);
  uVar10 = (uint)*local_90;
  if (*local_90 != 0) {
    uVar13 = 0xffffffff;
    do {
      local_90 = local_90 + 1;
      uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
      uVar10 = (uint)*local_90;
    } while (uVar10 != 0);
    uVar10 = ~uVar13;
  }
  *(uint *)((long)param_1 + 0x49c) = uVar10;
  plVar8 = param_1 + 0x4a;
  if (param_1[0x4b] != 0) {
    plVar8 = (long *)(param_1[0x4b] + 0x20);
  }
  *plVar8 = (long)plVar2;
  param_1[0x4b] = (long)plVar2;
  return;
}

