
void FUN_02a77540(undefined8 *param_1,long *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined8 uVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined1 *__dest;
  char *pcVar9;
  undefined1 *puVar10;
  undefined *local_a8;
  undefined1 *local_a0;
  int local_98;
  undefined1 local_94 [63];
  undefined1 local_55;
  
  param_1[3] = 0;
  puVar1 = PTR_DAT_04bb2ea0;
  *(undefined4 *)(param_1 + 0xd) = 0x100;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[10] = 0;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[1] = puVar1 + 0x10;
  param_1[2] = 0;
  pcVar9 = (char *)((long)param_1 + 0x6c);
  param_1[0xc] = pcVar9;
  uVar5 = s_Component_040afd3c._0_8_;
  if (pcVar9 != "Component") {
    *(undefined1 *)((long)param_1 + 0x75) = 0;
    *(undefined8 *)pcVar9 = uVar5;
    *(char *)((long)param_1 + 0x74) = s_Component_040afd3c[8];
  }
  puVar2 = PTR_DAT_04bb21f8;
  param_1[0x34] = 0;
  param_1[0x35] = 0;
  puVar1 = PTR_DAT_04bb3108;
  param_1[0x2e] = 0xffffffffffffffff;
  param_1[0x36] = 0;
  param_1[0x37] = 0;
  *(undefined4 *)(param_1 + 0x2f) = 0xb;
  puVar1 = puVar1 + 0x10;
  param_1[0xb] = puVar2 + 0x10;
  param_1[0x38] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  param_1[0x44] = 0;
  param_1[0x45] = 0;
  param_1[0x46] = 0;
  param_1[0x47] = 0;
  param_1[0x48] = 0;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  param_1[0x4b] = 0;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  param_1[0x42] = 0;
  param_1[0x43] = 0;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  param_1[0x49] = 0;
  param_1[0x4a] = 0;
  *(undefined4 *)(param_1 + 0x4b) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x3d] = 0;
  param_1[0x3e] = 0;
  *(undefined4 *)(param_1 + 0x3d) = 0xffffffff;
  param_1[0x3b] = 0;
  param_1[0x3c] = 0;
  param_1[0x4d] = PTR_DAT_04bb3100 + 0x10;
  param_1[0x4e] = param_1;
  param_1[0x32] = PTR_LAB_04bb30d8;
  param_1[0x33] = 0;
  param_1[0x30] = puVar1;
  param_1[0x31] = param_1;
  puVar2 = PTR_LAB_04bb30e0;
  param_1[0x37] = puVar1;
  param_1[0x38] = param_1;
  param_1[0x39] = 0;
  param_1[0x3f] = param_1;
  param_1[0x40] = 0;
  param_1[0x39] = puVar2;
  param_1[0x3a] = 0;
  puVar2 = PTR_LAB_04bb30e8;
  param_1[0x3e] = puVar1;
  param_1[0x40] = puVar2;
  puVar2 = PTR_LAB_04bb30f0;
  param_1[0x45] = puVar1;
  param_1[0x46] = param_1;
  *(undefined4 *)(param_1 + 0x4f) = 0;
  local_98 = 0x40;
  *param_1 = &PTR_LAB_04a9c578;
  param_1[0x47] = puVar2;
  *(undefined4 *)(param_1 + 0x4c) = 0xe;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  local_55 = 0;
  local_a8 = puVar1;
  local_a0 = local_94;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar10 = (undefined1 *)param_2[1];
  if (local_94 != puVar10) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar8 = 0;
    do {
      if (*(char *)(param_2[1] + lVar8) == '\0') goto LAB_02a7776c;
      lVar3 = param_2[1] + lVar8;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_02a7776c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_02a7776c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_02a7776c:
    iVar4 = (int)lVar8;
    if (local_98 <= (int)lVar8) {
      iVar4 = local_98 + -1;
    }
    memcpy(local_94,puVar10,(long)iVar4);
    local_94[iVar4] = 0;
  }
  puVar10 = local_a0;
  param_1[0x51] = 0;
  puVar6 = PTR_DAT_04bb5b68;
  puVar7 = PTR_DAT_04bb2bc0;
  param_1[0x52] = 0;
  puVar2 = puVar7 + 0x10;
  __dest = (undefined1 *)((long)param_1 + 0x2dc);
  param_1[0x50] = puVar6 + 0x10;
  *(undefined1 *)(param_1 + 0x53) = 1;
  param_1[0x54] = PTR_DAT_04bbc1a0 + 0x10;
  puVar6 = PTR_DAT_04bb2010;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x5a] = __dest;
  *(undefined4 *)(param_1 + 0x5b) = 0x40;
  *(undefined1 *)((long)param_1 + 0x31b) = 0;
  param_1[0x59] = puVar1;
  param_1[0x55] = puVar6 + 0x10;
  param_1[0x57] = puVar6 + 0x10;
  local_a0[(long)local_98 + -1] = 0;
  local_a8 = puVar2;
  if (__dest != local_a0) {
    (**(code **)(puVar7 + 0x28))(&local_a8);
    lVar8 = 0;
    do {
      if (local_a0[lVar8] == '\0') goto LAB_02a7787c;
      if (local_a0[lVar8 + 1] == '\0') {
        lVar8 = lVar8 + 1;
        goto LAB_02a7787c;
      }
      if (local_a0[lVar8 + 2] == '\0') {
        lVar8 = lVar8 + 2;
        goto LAB_02a7787c;
      }
      lVar8 = lVar8 + 3;
    } while (lVar8 != 0x80001);
    lVar8 = 0;
LAB_02a7787c:
    iVar4 = (int)lVar8;
    if (*(int *)(param_1 + 0x5b) <= (int)lVar8) {
      iVar4 = *(int *)(param_1 + 0x5b) + -1;
    }
    memcpy(__dest,puVar10,(long)iVar4);
    __dest[iVar4] = 0;
  }
  pcVar9 = (char *)param_1[0xc];
  param_1[0x50] = &PTR_LAB_04a9c680;
  param_1[0x59] = puVar2;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)((long)param_1 + 0x324) = 0;
  if (pcVar9 != "StructureActorPbcComponent") {
    iVar4 = 0x1a;
    if (*(int *)(param_1 + 0xd) < 0x1b) {
      iVar4 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(pcVar9,"StructureActorPbcComponent",(long)iVar4);
    pcVar9[iVar4] = '\0';
  }
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0;
  return;
}

