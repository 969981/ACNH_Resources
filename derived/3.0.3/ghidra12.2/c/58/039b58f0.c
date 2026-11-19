
void FUN_039b58f0(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  long *plVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  uint uVar10;
  uint uVar11;
  long lVar12;
  uint uVar13;
  byte *pbVar14;
  undefined *local_a8;
  byte *local_a0;
  int local_98;
  undefined auStack_94 [63];
  undefined1 local_55;
  
  *param_1 = &PTR_LAB_04b6a6a0;
  FUN_03955370(param_1 + 1,&PTR_PTR_04c4bb78,0);
  puVar2 = PTR_DAT_04bd1068;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  puVar1 = param_1 + 0x3b;
  param_1[0x3b] = puVar2 + 0x10;
  param_1[0x3c] = 0;
  local_a8 = PTR_DAT_04bb2f70;
  local_98 = 0x40;
  param_1[0x3f] = 0;
  param_1[0x40] = 0;
  local_55 = 0;
  local_a8 = local_a8 + 0x10;
  local_a0 = auStack_94;
  (**(code **)(PTR_PTR_04c4bb98 + 0x18))(&PTR_PTR_04c4bb98);
  puVar2 = PTR_s_package_name_04c4bba0;
  if (auStack_94 != PTR_s_package_name_04c4bba0) {
    (**(code **)(PTR_PTR_04c4bb98 + 0x18))(&PTR_PTR_04c4bb98);
    lVar12 = 0;
    do {
      if (PTR_s_package_name_04c4bba0[lVar12] == '\0') goto LAB_039b59ec;
      if (PTR_s_package_name_04c4bba0[lVar12 + 1] == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_039b59ec;
      }
      if (PTR_s_package_name_04c4bba0[lVar12 + 2] == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_039b59ec;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_039b59ec:
    iVar4 = (int)lVar12;
    if (local_98 <= (int)lVar12) {
      iVar4 = local_98 + -1;
    }
    memcpy(auStack_94,puVar2,(long)iVar4);
    auStack_94[iVar4] = 0;
  }
  plVar6 = param_1 + 0x3c;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  FUN_039127a0(param_1 + 0x41,&local_a8,&PTR_PTR_04c4bb98,&PTR_PTR_04c4bb98,puVar1);
  puVar7 = PTR_DAT_04bd1080;
  uVar3 = crc32b(0xffffffff,100,0x4c11db7);
  *(undefined4 *)(param_1 + 0x52) = 0;
  param_1[0x51] = 0;
  uVar3 = crc32b(uVar3,0x65,0x4c11db7);
  puVar2 = puVar7 + 0x10;
  param_1[0x4f] = puVar2;
  puVar8 = PTR_PTR_04c4bbb8;
  uVar3 = crc32b(uVar3,0x66,0x4c11db7);
  uVar3 = crc32b(uVar3,0x61,0x4c11db7);
  uVar3 = crc32b(uVar3,0x75,0x4c11db7);
  uVar3 = crc32b(uVar3,0x6c,0x4c11db7);
  uVar11 = crc32b(uVar3,0x74,0x4c11db7);
  uVar11 = ~uVar11;
  *(uint *)(param_1 + 0x50) = uVar11;
  (**(code **)(puVar8 + 0x18))(&PTR_PTR_04c4bbb8);
  uVar10 = (uint)(byte)*PTR_s_shader_num_04c4bbc0;
  if (*PTR_s_shader_num_04c4bbc0 != 0) {
    uVar13 = 0xffffffff;
    pbVar14 = PTR_s_shader_num_04c4bbc0;
    do {
      pbVar14 = pbVar14 + 1;
      uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar14;
    } while (uVar10 != 0);
    uVar10 = ~uVar13;
  }
  *(uint *)(param_1 + 0x50) = uVar10;
  plVar5 = plVar6;
  if (param_1[0x3d] != 0) {
    plVar5 = (long *)(param_1[0x3d] + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x4f);
  param_1[0x3d] = param_1 + 0x4f;
  *(undefined4 *)(param_1 + 0x52) = 0;
  *(uint *)(param_1 + 0x54) = uVar11;
  param_1[0x53] = puVar2;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x55] = 0;
  *(int *)(param_1 + 0x3e) = *(int *)(param_1 + 0x3e) + 1;
  (**(code **)(PTR_PTR_04c4bbf8 + 0x18))(&PTR_PTR_04c4bbf8);
  uVar10 = (uint)(byte)*PTR_s_bfres_num_04c4bc00;
  if (*PTR_s_bfres_num_04c4bc00 != 0) {
    uVar13 = 0xffffffff;
    pbVar14 = PTR_s_bfres_num_04c4bc00;
    do {
      pbVar14 = pbVar14 + 1;
      uVar13 = crc32b(uVar13,uVar10,0x4c11db7);
      uVar10 = (uint)*pbVar14;
    } while (uVar10 != 0);
    uVar10 = ~uVar13;
  }
  *(uint *)(param_1 + 0x54) = uVar10;
  plVar5 = plVar6;
  if (param_1[0x3d] != 0) {
    plVar5 = (long *)(param_1[0x3d] + 0x10);
  }
  *plVar5 = (long)(param_1 + 0x53);
  param_1[0x3d] = param_1 + 0x53;
  *(undefined4 *)(param_1 + 0x56) = 0;
  *(uint *)(param_1 + 0x58) = uVar11;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x59] = 0;
  *(int *)(param_1 + 0x3e) = *(int *)(param_1 + 0x3e) + 1;
  param_1[0x57] = puVar7 + 0x10;
  (**(code **)(PTR_PTR_04c4bc28 + 0x18))(&PTR_PTR_04c4bc28);
  uVar11 = (uint)(byte)*PTR_s_agl_sharc_num_04c4bc30;
  if (*PTR_s_agl_sharc_num_04c4bc30 != 0) {
    uVar10 = 0xffffffff;
    pbVar14 = PTR_s_agl_sharc_num_04c4bc30;
    do {
      pbVar14 = pbVar14 + 1;
      uVar10 = crc32b(uVar10,uVar11,0x4c11db7);
      uVar11 = (uint)*pbVar14;
    } while (uVar11 != 0);
    uVar11 = ~uVar10;
  }
  *(uint *)(param_1 + 0x58) = uVar11;
  if (param_1[0x3d] != 0) {
    plVar6 = (long *)(param_1[0x3d] + 0x10);
  }
  *plVar6 = (long)(param_1 + 0x57);
  param_1[0x3d] = param_1 + 0x57;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  *(int *)(param_1 + 0x3e) = *(int *)(param_1 + 0x3e) + 1;
  FUN_03955370(param_1 + 0x5b,&PTR_PTR_04c4bb88,0);
  *(undefined4 *)(param_1 + 0x95) = 0;
  param_1[0x96] = 0;
  *(undefined4 *)(param_1 + 0x97) = 0;
  param_1[0x98] = 0;
  local_a8 = PTR_DAT_04bb2020 + 0x10;
  *(undefined4 *)(param_1 + 0x99) = 0;
  param_1[0x9a] = 0;
  local_a0 = (byte *)0x40897f3;
  uVar9 = 0;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar9 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_a8);
  }
  param_1[0x40] = uVar9;
  (**(code **)(local_a8 + 0x18))(&local_a8);
  uVar11 = (uint)*local_a0;
  if (*local_a0 != 0) {
    uVar10 = 0xffffffff;
    do {
      local_a0 = local_a0 + 1;
      uVar10 = crc32b(uVar10,uVar11,0x4c11db7);
      uVar11 = (uint)*local_a0;
    } while (uVar11 != 0);
    uVar11 = ~uVar10;
  }
  *(uint *)((long)param_1 + 500) = uVar11;
  plVar6 = param_1 + 2;
  if (param_1[3] != 0) {
    plVar6 = (long *)(param_1[3] + 0x20);
  }
  *plVar6 = (long)puVar1;
  param_1[3] = puVar1;
  return;
}

