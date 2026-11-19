
void FUN_03c5e590(undefined8 *param_1,long *param_2,undefined4 param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  char cVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  long lVar9;
  long *plVar10;
  ulong *puVar11;
  int iVar12;
  long lVar13;
  ulong *puVar14;
  char *pcVar15;
  ulong uVar16;
  ulong *puVar17;
  long *plVar18;
  ulong uVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined1 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  ulong uVar26;
  undefined *local_1b8;
  char *local_1b0;
  undefined *local_1a8;
  undefined1 *local_1a0;
  int local_198;
  undefined1 local_194 [15];
  undefined1 local_185;
  undefined1 local_95;
  long *local_90;
  uint local_88;
  undefined *local_80;
  undefined1 *local_78;
  undefined4 local_6c [3];
  
  puVar2 = PTR_DAT_04bb2120;
  puVar1 = PTR_DAT_04bb2020;
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0x26) = 0;
  param_1[3] = puVar2;
  param_1[2] = puVar1 + 0x10;
  FUN_03c5a110(param_1 + 2,param_2,0xffffffff,param_3);
  param_1[5] = &PTR_FUN_04b81c10;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 7) = 0;
  param_1[8] = 0;
  local_88 = 0;
  local_78 = &DAT_04079e84;
  local_90 = param_2;
  local_80 = puVar1 + 0x10;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar13 = 0;
  do {
    if (*(char *)(param_2[1] + lVar13) == '\0') {
LAB_03c5e678:
      uVar23 = (int)lVar13 + 1;
      if ((int)lVar13 == -1) {
        return;
      }
      goto LAB_03c5e690;
    }
    lVar9 = param_2[1] + lVar13;
    if (*(char *)(lVar9 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c5e678;
    }
    if (*(char *)(lVar9 + 2) == '\0') {
      uVar23 = (int)lVar13 + 3;
      if ((int)lVar13 == -3) {
        return;
      }
      goto LAB_03c5e690;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  uVar23 = 1;
LAB_03c5e690:
  uVar26 = 0;
  puVar1 = PTR_DAT_04bb2ab0 + 0x10;
  do {
    local_198 = 0x10;
    local_185 = 0;
    local_194[0] = 0;
    local_1a8 = puVar1;
    local_1a0 = local_194;
    iVar8 = FUN_008c8970(&local_90,&local_1a8);
    uVar24 = local_88;
    plVar10 = local_90;
    uVar25 = (uint)uVar26;
    if (0 < iVar8) {
      uVar25 = uVar25 + 1;
    }
    uVar26 = (ulong)uVar25;
    uVar19 = (ulong)local_88;
    (**(code **)(*local_90 + 0x18))(local_90);
    lVar13 = 0;
    do {
      if (*(char *)(plVar10[1] + lVar13) == '\0') {
LAB_03c5e734:
        iVar8 = (int)lVar13;
        goto joined_r0x03c5e758;
      }
      lVar9 = plVar10[1] + lVar13;
      if (*(char *)(lVar9 + 1) == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_03c5e734;
      }
      if (*(char *)(lVar9 + 2) == '\0') {
        iVar8 = (int)lVar13 + 2;
        goto joined_r0x03c5e758;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    iVar8 = 0;
joined_r0x03c5e758:
    if ((-1 < (int)uVar24) && ((int)uVar24 <= iVar8)) {
      for (; lVar13 = local_90[1], *(char *)(lVar13 + uVar19) != '\0'; uVar19 = uVar19 + 1) {
        (**(code **)(local_80 + 0x18))(&local_80);
        uVar16 = 0;
        bVar7 = true;
        cVar5 = *(char *)(lVar13 + uVar19);
        do {
          if (local_78[uVar16] == '\0') break;
          if (local_78[uVar16] == cVar5) {
            if (bVar7) goto LAB_03c5e7f4;
            break;
          }
          if (local_78[uVar16 + 1] == '\0') break;
          if (local_78[uVar16 + 1] == cVar5) goto LAB_03c5e7f4;
          if (local_78[uVar16 + 2] == '\0') break;
          if (local_78[uVar16 + 2] == cVar5) goto LAB_03c5e7f4;
          bVar7 = uVar16 < 0x7fffe;
          uVar16 = uVar16 + 3;
        } while (uVar16 != 0x80001);
      }
LAB_03c5e7f4:
      local_88 = (int)uVar19 + 1;
    }
  } while ((local_90 != param_2) || (local_88 != uVar23));
  if (uVar25 == 0) {
    return;
  }
  if (0 < (int)uVar25) {
    uVar19 = uVar26 << 5 | 8;
    lVar13 = *(long *)PTR_DAT_04bb2698;
    if (lVar13 == 0) {
      puVar11 = malloc(uVar19);
    }
    else {
      lVar9 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar10 = (long *)(lVar13 + 8);
      if (lVar9 != 0) {
        plVar10 = (long *)(lVar9 + 0xa8);
      }
      plVar10 = (long *)*plVar10;
      if (plVar10 == (long *)0x0) goto LAB_03c5e8fc;
      puVar11 = (ulong *)(**(code **)(*plVar10 + 0x30))(plVar10,uVar19,8);
    }
    if (puVar11 != (ulong *)0x0) {
      puVar14 = puVar11 + 1;
      *puVar11 = uVar26;
      puVar1 = PTR_DAT_04bd3910;
      puVar17 = puVar14;
      if ((uVar25 & 1) != 0) {
        puVar2 = PTR_DAT_04bd3910 + 0x10;
        puVar17 = puVar11 + 5;
        puVar11[3] = (ulong)(puVar11 + 2);
        puVar11[4] = 0;
        puVar11[1] = (ulong)puVar2;
        puVar11[2] = (ulong)(puVar11 + 2);
      }
      if ((uVar26 - 1 & 0x7ffffffffffffff) != 0) {
        do {
          puVar17[2] = (ulong)(puVar17 + 1);
          puVar17[3] = 0;
          *puVar17 = (ulong)(puVar1 + 0x10);
          puVar17[1] = (ulong)(puVar17 + 1);
          puVar17[6] = (ulong)(puVar17 + 5);
          puVar17[7] = 0;
          puVar17[4] = (ulong)(puVar1 + 0x10);
          puVar17[5] = (ulong)(puVar17 + 5);
          puVar17 = puVar17 + 8;
        } while (puVar17 != puVar14 + uVar26 * 4);
      }
      *(uint *)(param_1 + 7) = uVar25;
      param_1[8] = puVar14;
    }
  }
LAB_03c5e8fc:
  local_88 = 0;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = &DAT_04079e84;
  local_90 = param_2;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar13 = 0;
  do {
    if (*(char *)(param_2[1] + lVar13) == '\0') {
LAB_03c5e980:
      uVar23 = (int)lVar13 + 1;
      goto LAB_03c5e984;
    }
    lVar9 = param_2[1] + lVar13;
    if (*(char *)(lVar9 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c5e980;
    }
    if (*(char *)(lVar9 + 2) == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03c5e980;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  uVar23 = 1;
LAB_03c5e984:
  if ((local_90 == param_2) && (local_88 == uVar23)) {
    return;
  }
  uVar24 = 0;
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  puVar2 = PTR_DAT_04bb21f8 + 0x10;
LAB_03c5ea00:
  local_95 = 0;
  local_198 = 0x100;
  local_194[0] = 0;
  local_1a8 = puVar2;
  local_1a0 = local_194;
  iVar8 = FUN_008c8970(&local_90,&local_1a8);
  if (0 < iVar8) {
    local_1b0 = "#";
    local_1b8 = puVar1;
    (**(code **)(local_1a8 + 0x18))(&local_1a8);
    lVar13 = 0;
    do {
      if (local_1a0[lVar13] == '\0') goto LAB_03c5ea90;
      if (local_1a0[lVar13 + 1] == '\0') {
        lVar13 = lVar13 + 1;
        goto LAB_03c5ea90;
      }
      if (local_1a0[lVar13 + 2] == '\0') {
        lVar13 = lVar13 + 2;
        goto LAB_03c5ea90;
      }
      lVar13 = lVar13 + 3;
    } while (lVar13 != 0x80001);
    lVar13 = 0;
LAB_03c5ea90:
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    lVar9 = 0;
    do {
      iVar8 = (int)lVar13;
      if (local_1b0[lVar9] == '\0') {
LAB_03c5eae4:
        iVar12 = (int)lVar9;
        if (iVar8 < iVar12) goto LAB_03c5ebf0;
LAB_03c5eafc:
        if ((int)lVar9 < 1) goto LAB_03c5eb84;
        uVar26 = 0;
        goto LAB_03c5eb10;
      }
      if (local_1b0[lVar9 + 1] == '\0') {
        lVar9 = lVar9 + 1;
        goto LAB_03c5eae4;
      }
      if (local_1b0[lVar9 + 2] == '\0') {
        lVar9 = lVar9 + 2;
        iVar12 = (int)lVar9;
        if (iVar12 <= iVar8) goto LAB_03c5eafc;
        goto LAB_03c5ebf0;
      }
      lVar9 = lVar9 + 3;
    } while (lVar9 != 0x80001);
    if (-1 < iVar8) {
LAB_03c5eb84:
      (**(code **)(local_1b8 + 0x18))(&local_1b8);
    }
    goto LAB_03c5ebf0;
  }
  goto LAB_03c5ec9c;
  while( true ) {
    pcVar15 = local_1b0;
    lVar13 = lVar9;
    while( true ) {
      lVar13 = lVar13 + -1;
      if (puVar22[uVar26] != *pcVar15) break;
      if (puVar22[uVar26] == '\0') goto LAB_03c5eb98;
      puVar22 = puVar22 + 1;
      pcVar15 = pcVar15 + 1;
      if (lVar13 == 0) goto LAB_03c5eb98;
    }
    uVar26 = uVar26 + 1;
    if (uVar26 == (iVar8 - iVar12) + 1) break;
LAB_03c5eb10:
    puVar22 = local_1a0;
    pcVar15 = local_1a0 + uVar26;
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    if (pcVar15 == local_1b0) {
LAB_03c5eb98:
      uVar20 = (uint)uVar26;
      if (0 < (int)uVar20) {
        (**(code **)(local_1a8 + 0x18))(&local_1a8);
        lVar13 = 0;
        goto LAB_03c5ebc0;
      }
      break;
    }
  }
LAB_03c5ebf0:
  bVar7 = false;
  uVar21 = 0xffffffff;
LAB_03c5ebf8:
  uVar20 = uVar24 + 1;
  iVar8 = 0;
  if (uVar20 < *(uint *)(param_1 + 7)) {
    iVar8 = uVar24 + 1;
  }
  puVar4 = (undefined8 *)(param_1[8] + (long)iVar8 * 0x20);
  if (uVar25 <= uVar20) {
    puVar4 = param_1 + 5;
  }
  if (*(uint *)(param_1 + 7) <= uVar24) {
    uVar24 = 0;
  }
  plVar10 = (long *)(param_1[8] + (long)(int)uVar24 * 0x20);
  if (bVar7) {
    lVar13 = (**(code **)(*plVar10 + 0x50))(plVar10,&local_1a8,0);
    *(undefined4 *)(lVar13 + 0x28) = uVar21;
  }
  else {
    lVar13 = (**(code **)(*plVar10 + 0x50))(plVar10,&local_1a8,0,puVar4);
  }
  plVar18 = plVar10 + 1;
  lVar9 = *plVar18;
  plVar3 = (long *)(*(int *)((long)plVar10 + 0x1c) + lVar13);
  *plVar18 = (long)plVar3;
  *plVar3 = lVar9;
  plVar3[1] = (long)plVar18;
  if (lVar9 != 0) {
    *(long **)(lVar9 + 8) = plVar3;
  }
  *(int *)(plVar10 + 3) = (int)plVar10[3] + 1;
  uVar24 = uVar20;
LAB_03c5ec9c:
  uVar20 = local_88;
  plVar10 = local_90;
  uVar26 = (ulong)local_88;
  (**(code **)(*local_90 + 0x18))(local_90);
  lVar13 = 0;
  do {
    if (*(char *)(plVar10[1] + lVar13) == '\0') {
LAB_03c5ed04:
      iVar8 = (int)lVar13;
      goto joined_r0x03c5ed28;
    }
    lVar9 = plVar10[1] + lVar13;
    if (*(char *)(lVar9 + 1) == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c5ed04;
    }
    if (*(char *)(lVar9 + 2) == '\0') {
      iVar8 = (int)lVar13 + 2;
      goto joined_r0x03c5ed28;
    }
    lVar13 = lVar13 + 3;
  } while (lVar13 != 0x80001);
  iVar8 = 0;
joined_r0x03c5ed28:
  if ((-1 < (int)uVar20) && ((int)uVar20 <= iVar8)) {
    for (; lVar13 = local_90[1], *(char *)(lVar13 + uVar26) != '\0'; uVar26 = uVar26 + 1) {
      (**(code **)(local_80 + 0x18))(&local_80);
      uVar19 = 0;
      bVar7 = true;
      cVar5 = *(char *)(lVar13 + uVar26);
      do {
        if (local_78[uVar19] == '\0') break;
        if (local_78[uVar19] == cVar5) {
          if (bVar7) goto LAB_03c5edc4;
          break;
        }
        if (local_78[uVar19 + 1] == '\0') break;
        if (local_78[uVar19 + 1] == cVar5) goto LAB_03c5edc4;
        if (local_78[uVar19 + 2] == '\0') break;
        if (local_78[uVar19 + 2] == cVar5) goto LAB_03c5edc4;
        bVar7 = uVar19 < 0x7fffe;
        uVar19 = uVar19 + 3;
      } while (uVar19 != 0x80001);
    }
LAB_03c5edc4:
    local_88 = (int)uVar26 + 1;
  }
  if ((local_90 == param_2) && (local_88 == uVar23)) {
    return;
  }
  goto LAB_03c5ea00;
  while( true ) {
    if (local_1a0[lVar13 + 1] == '\0') {
      lVar13 = lVar13 + 1;
      goto LAB_03c5edf4;
    }
    if (local_1a0[lVar13 + 2] == '\0') {
      lVar13 = lVar13 + 2;
      goto LAB_03c5edf4;
    }
    lVar13 = lVar13 + 3;
    if (lVar13 == 0x80001) break;
LAB_03c5ebc0:
    if (local_1a0[lVar13] == '\0') goto LAB_03c5edf4;
  }
  lVar13 = 0;
LAB_03c5edf4:
  uVar19 = 0;
  local_1b0 = local_1a0 + (uVar26 + 1 & 0xffffffff);
  if ((int)lVar13 <= (int)uVar20) {
    local_1b0 = *(char **)(PTR_PTR_04bb2238 + 8);
  }
  local_1b8 = PTR_DAT_04bb2020 + 0x10;
  do {
    if (local_1b0[uVar19] == '\0') {
LAB_03c5ee50:
      iVar8 = (int)uVar19;
joined_r0x03c5ee54:
      if (0 < iVar8) {
        do {
          (**(code **)(local_1b8 + 0x18))(&local_1b8);
          uVar6 = (int)uVar19 - 1;
          uVar19 = (ulong)uVar6;
        } while (uVar6 != 0);
      }
      break;
    }
    if (local_1b0[uVar19 + 1] == '\0') {
      uVar19 = uVar19 + 1;
      goto LAB_03c5ee50;
    }
    if (local_1b0[uVar19 + 2] == '\0') {
      uVar19 = uVar19 + 2;
      iVar8 = (int)uVar19;
      goto joined_r0x03c5ee54;
    }
    uVar19 = uVar19 + 3;
  } while (uVar19 != 0x80001);
  local_6c[0] = 0;
  FUN_038d30c0(local_6c,&local_1b8,0xffffffff);
  uVar21 = local_6c[0];
  if ((int)uVar20 < local_198) {
    local_1a0[uVar20 & ((int)uVar20 >> 0x1f ^ 0xffffffffU)] = 0;
  }
  else {
    (**(code **)(local_1a8 + 0x18))(&local_1a8);
  }
  bVar7 = true;
  goto LAB_03c5ebf8;
}

