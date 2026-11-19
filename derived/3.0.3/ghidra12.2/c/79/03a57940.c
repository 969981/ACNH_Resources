
void FUN_03a57940(long param_1,long *param_2,long *param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  char *pcVar3;
  undefined1 *puVar4;
  long lVar5;
  int iVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined1 *puVar12;
  uint uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 *puVar16;
  ulong uVar17;
  undefined *local_1b8;
  undefined1 *local_1b0;
  int local_1a8;
  undefined1 local_1a4 [259];
  undefined1 local_a1;
  undefined *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  char *local_88;
  int local_80;
  undefined *local_78;
  long local_70;
  
  puVar1 = PTR_DAT_04bb2020;
  if (*(char *)param_2[1] == '\0') {
    return;
  }
  if (*(char *)param_3[1] == '\0') {
    return;
  }
  local_a1 = 0;
  local_1a4[0] = 0;
  local_1b0 = local_1a4;
  local_1a8 = 0x104;
  local_1b8 = PTR_DAT_04bbd6c8 + 0x10;
  local_90 = PTR_DAT_04bb2020 + 0x10;
  local_88 = ".";
  (**(code **)(*param_3 + 0x18))(param_3);
  uVar14 = 0;
  do {
    if (*(char *)(param_3[1] + uVar14) == '\0') {
LAB_03a57a24:
      iVar6 = (int)uVar14;
joined_r0x03a57a28:
      if (0 < iVar6) {
        uVar15 = (ulong)((int)uVar14 - 1);
        uVar17 = 0xffffffff;
        goto LAB_03a57a34;
      }
      uVar17 = 0xffffffff;
      goto LAB_03a57a90;
    }
    lVar7 = param_3[1] + uVar14;
    if (*(char *)(lVar7 + 1) == '\0') {
      uVar14 = uVar14 + 1;
      goto LAB_03a57a24;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      uVar14 = uVar14 + 2;
      iVar6 = (int)uVar14;
      goto joined_r0x03a57a28;
    }
    uVar14 = uVar14 + 3;
  } while (uVar14 != 0x80001);
  uVar17 = 0xffffffff;
  goto LAB_03a57a90;
  while( true ) {
    uVar15 = uVar15 - 1;
    uVar14 = (ulong)(iVar6 - 1U);
    if (iVar6 - 1U == 0 || iVar6 < 1) break;
LAB_03a57a34:
    lVar7 = param_3[1];
    (**(code **)(local_90 + 0x18))(&local_90);
    iVar6 = (int)uVar14;
    if (((char *)(lVar7 + uVar15) == local_88) || (*(char *)(lVar7 + uVar15) == *local_88)) {
      uVar17 = (ulong)(iVar6 - 1);
      break;
    }
  }
LAB_03a57a90:
  iVar6 = (int)uVar17;
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar5 = param_3[1];
  lVar7 = 0;
  do {
    if (*(char *)(lVar5 + lVar7) == '\0') goto LAB_03a57aec;
    if (*(char *)(lVar5 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a57aec;
    }
    if (*(char *)(lVar5 + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03a57aec;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03a57aec:
  local_70 = *(long *)(PTR_PTR_04bb2238 + 8);
  if (iVar6 < (int)lVar7 && -2 < iVar6) {
    local_70 = lVar5 + (ulong)(iVar6 + 1);
  }
  local_78 = puVar1 + 0x10;
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  iVar10 = local_1a8;
  puVar12 = local_1b0;
  if (local_1a8 < 1) {
    iVar8 = 0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    local_1b0[local_1a8 - 1] = 0;
    puVar4 = local_1b0;
    iVar8 = local_1a8;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar16 = (undefined1 *)param_2[1];
  if (puVar4 == puVar16) {
    iVar9 = 0;
  }
  else {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar7 = 0;
    do {
      if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_03a57bc4;
      lVar5 = param_2[1] + lVar7;
      if (*(char *)(lVar5 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03a57bc4;
      }
      if (*(char *)(lVar5 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03a57bc4;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03a57bc4:
    iVar9 = (int)lVar7;
    if (iVar8 <= (int)lVar7) {
      iVar9 = iVar8 + -1;
    }
    memcpy(puVar4,puVar16,(long)iVar9);
    puVar4[iVar9] = 0;
  }
  puVar2 = PTR_DAT_04bb2030;
  local_88 = puVar12 + iVar9;
  local_80 = iVar10 - iVar9;
  local_90 = PTR_DAT_04bb2030 + 0x10;
  if (local_80 == 0 || iVar10 < iVar9) {
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
  }
  else {
    local_88[local_80 - 1] = 0;
  }
  pcVar3 = local_88;
  local_a0 = puVar1 + 0x10;
  local_98 = &DAT_04079e84;
  (**(code **)(puVar2 + 0x28))(&local_90);
  lVar7 = 0;
  do {
    if (local_88[lVar7] == '\0') goto LAB_03a57c8c;
    if (local_88[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a57c8c;
    }
    if (local_88[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03a57c8c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03a57c8c:
  uVar11 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  (**(code **)(local_a0 + 0x18))(&local_a0);
  lVar7 = 0;
  do {
    if (local_98[lVar7] == '\0') goto LAB_03a57cec;
    if (local_98[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a57cec;
    }
    if (local_98[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03a57cec;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03a57cec:
  uVar13 = (uint)lVar7;
  if ((int)(local_80 - uVar11) <= (int)(uint)lVar7) {
    uVar13 = local_80 + ~uVar11;
  }
  if ((int)uVar13 < 1) {
    uVar13 = 0;
  }
  else {
    (**(code **)(local_a0 + 0x18))(&local_a0);
    memcpy(pcVar3 + uVar11,local_98,(ulong)uVar13);
    pcVar3[(int)(uVar13 + uVar11)] = 0;
  }
  lVar7 = (long)iVar9 + (long)(int)uVar13;
  iVar9 = (int)lVar7;
  iVar8 = iVar10 - iVar9;
  if (iVar8 < 1) {
    iVar8 = 0;
    puVar4 = (undefined1 *)0x0;
  }
  else {
    puVar4 = puVar12 + lVar7;
    puVar4[iVar8 - 1] = 0;
  }
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar16 = (undefined1 *)param_3[1];
  if (puVar4 == puVar16) {
    iVar6 = 0;
  }
  else {
    if (iVar6 < 0) {
      (**(code **)(*param_3 + 0x18))(param_3);
      uVar17 = 0;
      do {
        if (*(char *)(param_3[1] + uVar17) == '\0') goto LAB_03a57d84;
        lVar7 = param_3[1] + uVar17;
        if (*(char *)(lVar7 + 1) == '\0') {
          uVar17 = uVar17 + 1;
          goto LAB_03a57d84;
        }
        if (*(char *)(lVar7 + 2) == '\0') {
          uVar17 = uVar17 + 2;
          goto LAB_03a57d84;
        }
        uVar17 = uVar17 + 3;
      } while (uVar17 != 0x80001);
      uVar17 = 0;
    }
LAB_03a57d84:
    iVar6 = (int)uVar17;
    if (iVar8 <= (int)uVar17) {
      iVar6 = iVar8 + -1;
    }
    memcpy(puVar4,puVar16,(long)iVar6);
    puVar4[iVar6] = 0;
  }
  puVar1 = PTR_DAT_04bb2030;
  iVar6 = iVar6 + iVar9;
  local_88 = puVar12 + iVar6;
  local_80 = iVar10 - iVar6;
  local_90 = PTR_DAT_04bb2030 + 0x10;
  if (local_80 == 0 || iVar10 < iVar6) {
    local_88 = (undefined1 *)0x0;
    local_80 = 0;
  }
  else {
    local_88[local_80 - 1] = 0;
  }
  pcVar3 = local_88;
  (**(code **)(puVar1 + 0x28))(&local_90);
  lVar7 = 0;
  do {
    if (local_88[lVar7] == '\0') goto LAB_03a57e4c;
    if (local_88[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a57e4c;
    }
    if (local_88[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_03a57e4c;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_03a57e4c:
  uVar13 = (uint)lVar7 & ((int)(uint)lVar7 >> 0x1f ^ 0xffffffffU);
  uVar11 = local_80 + ~uVar13;
  if (1 < (int)(local_80 - uVar13)) {
    uVar11 = 1;
  }
  if ((int)uVar11 < 1) {
    uVar11 = 0;
  }
  else {
    memcpy(pcVar3 + uVar13,&DAT_0407ec0b,(ulong)uVar11);
    pcVar3[(ulong)uVar11 + (ulong)uVar13] = 0;
  }
  iVar10 = iVar10 - (uVar11 + iVar6);
  if (iVar10 < 1) {
    iVar10 = 0;
    puVar12 = (undefined1 *)0x0;
  }
  else {
    puVar12 = puVar12 + (int)(uVar11 + iVar6);
    puVar12[iVar10 - 1] = 0;
  }
  (**(code **)(local_78 + 0x18))(&local_78);
  lVar7 = 0;
  do {
    if (*(char *)(local_70 + lVar7) == '\0') {
LAB_03a57f00:
      iVar6 = (int)lVar7;
joined_r0x03a57f04:
      if (0 < iVar6) {
        puVar4 = (undefined1 *)(local_70 + 1);
        goto joined_r0x03a57f10;
      }
      break;
    }
    if (*(char *)(local_70 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_03a57f00;
    }
    if (*(char *)(local_70 + lVar7 + 2) == '\0') {
      iVar6 = (int)lVar7 + 2;
      goto joined_r0x03a57f04;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  puVar4 = *(undefined1 **)(PTR_PTR_04bb2238 + 8);
joined_r0x03a57f10:
  if (puVar12 != puVar4) {
    lVar7 = 0;
    do {
      if (puVar4[lVar7] == '\0') goto LAB_03a57fcc;
      if (puVar4[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03a57fcc;
      }
      if (puVar4[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03a57fcc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03a57fcc:
    iVar6 = (int)lVar7;
    if (iVar10 <= (int)lVar7) {
      iVar6 = iVar10 + -1;
    }
    memcpy(puVar12,puVar4,(long)iVar6);
    puVar12[iVar6] = 0;
  }
  puVar4 = *(undefined1 **)(param_1 + 0xb8);
  (**(code **)(local_1b8 + 0x18))(&local_1b8);
  puVar12 = local_1b0;
  if (puVar4 != local_1b0) {
    (**(code **)(local_1b8 + 0x18))(&local_1b8);
    lVar7 = 0;
    do {
      if (local_1b0[lVar7] == '\0') goto LAB_03a58060;
      if (local_1b0[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_03a58060;
      }
      if (local_1b0[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_03a58060;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_03a58060:
    iVar6 = (int)lVar7;
    if (*(int *)(param_1 + 0xc0) <= (int)lVar7) {
      iVar6 = *(int *)(param_1 + 0xc0) + -1;
    }
    memcpy(puVar4,puVar12,(long)iVar6);
    puVar4[iVar6] = 0;
  }
  return;
}

