
undefined8 FUN_0203d900(long param_1,long param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined8 uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  char *pcVar10;
  undefined1 *__src;
  long *plVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  undefined1 *puVar14;
  int iVar15;
  ulong uVar16;
  undefined *local_1c8;
  char *local_1c0;
  int local_1b8;
  char local_1b4 [7];
  undefined1 local_1ad;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_194;
  undefined8 local_18c;
  undefined8 local_184;
  undefined *local_178;
  undefined1 *local_170;
  int local_168;
  undefined1 local_164 [127];
  undefined1 local_e5;
  undefined4 local_e0;
  undefined2 local_dc;
  undefined8 local_d8;
  undefined *local_d0;
  char *local_c8;
  undefined *local_c0;
  undefined1 *local_b8;
  undefined4 local_b0;
  undefined1 local_ac [31];
  undefined1 local_8d;
  long *local_88;
  undefined4 local_80;
  undefined *local_78;
  undefined1 *puStack_70;
  
  local_198 = 0;
  local_1a8 = 0xffffffff00000000;
  local_1a0 = 0;
  local_194 = 0x3f800000;
  local_170 = local_164;
  local_168 = 0x80;
  local_e5 = 0;
  local_164[0] = 0;
  local_178 = PTR_DAT_04bb2d88 + 0x10;
  local_d8 = 0;
  local_dc = 0;
  local_18c = 0;
  local_184 = 0;
  local_e0 = 7;
  local_1b8 = 8;
  local_1c8 = PTR_DAT_04bb3768 + 0x10;
  local_1ad = 0;
  local_1b4[0] = '\0';
  local_1c0 = local_1b4;
  (**(code **)(*(long *)(param_2 + 0x30) + 0x18))((long *)(param_2 + 0x30));
  if (local_1b4 != *(char **)(param_2 + 0x38)) {
    iVar15 = 3;
    if (local_1b8 < 4) {
      iVar15 = local_1b8 + -1;
    }
    memcpy(local_1b4,*(char **)(param_2 + 0x38),(long)iVar15);
    local_1b4[iVar15] = '\0';
  }
  (**(code **)(local_1c8 + 0x18))(&local_1c8);
  pcVar5 = local_1c0;
  puVar4 = PTR_DAT_04bb2020;
  if (*(int *)(param_1 + 0xf400) == 0) {
LAB_0203dc94:
    uVar6 = FUN_02030e80(param_1,param_2);
    return uVar6;
  }
  puVar13 = *(undefined8 **)(param_1 + 0xf408);
  puVar3 = puVar13 + *(int *)(param_1 + 0xf400);
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb2028 + 0x10;
LAB_0203da78:
  puVar12 = (undefined8 *)*puVar13;
  plVar11 = puVar12 + 6;
  (**(code **)(*plVar11 + 0x18))(plVar11);
  lVar8 = 0;
  do {
    local_88 = plVar11;
    if (*(char *)(puVar12[7] + lVar8) == '\0') {
LAB_0203daf4:
      local_80 = 0;
      puStack_70 = &DAT_04079e84;
      local_78 = puVar1;
      if ((int)lVar8 == -1) goto LAB_0203da6c;
      break;
    }
    lVar9 = puVar12[7] + lVar8;
    if (*(char *)(lVar9 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_0203daf4;
    }
    if (*(char *)(lVar9 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_0203daf4;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  local_78 = puVar4 + 0x10;
  puStack_70 = &DAT_04079e84;
  local_80 = 0;
  local_b0 = 0x20;
  local_8d = 0;
  local_ac[0] = 0;
  local_c0 = puVar2;
  local_b8 = local_ac;
  FUN_0076e020(&local_88,&local_c0);
  local_d0 = puVar4 + 0x10;
  local_c8 = pcVar5;
  (**(code **)(local_c0 + 0x18))(&local_c0);
  lVar8 = 0;
  do {
    if (local_b8[lVar8] == '\0') goto LAB_0203db9c;
    if (local_b8[lVar8 + 1] == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_0203db9c;
    }
    if (local_b8[lVar8 + 2] == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_0203db9c;
    }
    lVar8 = lVar8 + 3;
  } while (lVar8 != 0x80001);
  lVar8 = 0;
LAB_0203db9c:
  (**(code **)(local_d0 + 0x18))(&local_d0);
  lVar9 = 0;
  do {
    iVar15 = (int)lVar8;
    if (local_c8[lVar9] == '\0') {
LAB_0203dbe8:
      iVar7 = (int)lVar9;
      if (iVar15 < iVar7) goto LAB_0203da6c;
LAB_0203dc00:
      if ((int)lVar9 < 1) goto LAB_0203dca0;
      uVar16 = 0;
      goto LAB_0203dc18;
    }
    if (local_c8[lVar9 + 1] == '\0') {
      lVar9 = lVar9 + 1;
      goto LAB_0203dbe8;
    }
    if (local_c8[lVar9 + 2] == '\0') {
      lVar9 = lVar9 + 2;
      iVar7 = (int)lVar9;
      if (iVar7 <= iVar15) goto LAB_0203dc00;
      goto LAB_0203da6c;
    }
    lVar9 = lVar9 + 3;
  } while (lVar9 != 0x80001);
  if (iVar15 < 0) goto LAB_0203da6c;
LAB_0203dca0:
  (**(code **)(local_d0 + 0x18))(&local_d0);
LAB_0203dcb0:
  puVar14 = local_170;
  local_1a8 = *puVar12;
  local_1a0 = puVar12[1];
  local_18c = *(undefined8 *)((long)puVar12 + 0x1c);
  local_198 = *(undefined4 *)(puVar12 + 2);
  local_194 = *(undefined8 *)((long)puVar12 + 0x14);
  local_184 = *(undefined8 *)((long)puVar12 + 0x24);
  (**(code **)(puVar12[6] + 0x18))(plVar11);
  __src = (undefined1 *)puVar12[7];
  if (puVar14 == __src) {
    return 0;
  }
  (**(code **)(puVar12[6] + 0x18))(plVar11);
  lVar8 = 0;
  goto LAB_0203dd20;
  while( true ) {
    pcVar10 = local_c8;
    lVar8 = lVar9;
    while( true ) {
      lVar8 = lVar8 + -1;
      if (puVar14[uVar16] != *pcVar10) break;
      if ((puVar14[uVar16] == '\0') || (puVar14 = puVar14 + 1, pcVar10 = pcVar10 + 1, lVar8 == 0))
      goto LAB_0203da64;
    }
    uVar16 = uVar16 + 1;
    if (uVar16 == (iVar15 - iVar7) + 1) break;
LAB_0203dc18:
    puVar14 = local_b8;
    pcVar10 = local_b8 + uVar16;
    (**(code **)(local_d0 + 0x18))(&local_d0);
    if (pcVar10 == local_c8) {
LAB_0203da64:
      if ((int)uVar16 != -1) goto LAB_0203dcb0;
      break;
    }
  }
LAB_0203da6c:
  puVar13 = puVar13 + 1;
  if (puVar13 == puVar3) goto LAB_0203dc94;
  goto LAB_0203da78;
  while( true ) {
    lVar9 = puVar12[7] + lVar8;
    if (*(char *)(lVar9 + 1) == '\0') {
      lVar8 = lVar8 + 1;
      goto LAB_0203dd5c;
    }
    if (*(char *)(lVar9 + 2) == '\0') {
      lVar8 = lVar8 + 2;
      goto LAB_0203dd5c;
    }
    lVar8 = lVar8 + 3;
    if (lVar8 == 0x80001) break;
LAB_0203dd20:
    if (*(char *)(puVar12[7] + lVar8) == '\0') goto LAB_0203dd5c;
  }
  lVar8 = 0;
LAB_0203dd5c:
  iVar15 = (int)lVar8;
  if (local_168 <= (int)lVar8) {
    iVar15 = local_168 + -1;
  }
  memcpy(puVar14,__src,(long)iVar15);
  puVar14[iVar15] = 0;
  return 0;
}

