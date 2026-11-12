
undefined8 FUN_00ad8430(long param_1,long param_2,long *param_3)

{
  char *pcVar1;
  undefined *puVar2;
  char *pcVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  uint uVar10;
  ulong uVar11;
  ulong uVar12;
  char *local_180;
  undefined8 local_178;
  char local_170 [128];
  char *local_f0;
  undefined8 local_e8;
  char local_e0 [128];
  
  local_e0[0] = '\0';
  local_f0 = local_e0;
  local_e8 = 0x8000000000;
  (**(code **)(*param_3 + 0x18))(param_3);
  pcVar8 = local_f0;
  pcVar3 = (char *)param_3[1];
  if (local_f0 == pcVar3) {
    uVar11 = local_e8 & 0xffffffff;
    puVar2 = PTR_PTR_04bb2238;
    iVar9 = (uint)local_e8;
  }
  else {
    lVar6 = 0;
    do {
      pcVar1 = pcVar3 + lVar6;
      lVar6 = lVar6 + 1;
    } while (*pcVar1 != '\0');
    uVar10 = (int)lVar6 - 1;
    if (local_e8._4_4_ <= (int)uVar10) {
      uVar10 = local_e8._4_4_ - 1;
    }
    uVar11 = (ulong)uVar10;
    if ((int)uVar10 < 1) {
      uVar11 = 0;
    }
    else {
      memcpy(local_f0,pcVar3,uVar11);
      pcVar8 = pcVar8 + uVar11;
    }
    *pcVar8 = '\0';
    iVar9 = (int)uVar11;
    local_e8 = CONCAT44(local_e8._4_4_,iVar9);
    puVar2 = PTR_PTR_04bb2238;
    pcVar8 = local_f0;
  }
  if (0 < iVar9) {
    uVar10 = (uint)uVar11;
    uVar12 = 0;
    do {
      if (pcVar8[uVar12] == ':') {
        uVar4 = (uint)uVar12;
        if ((int)uVar4 < 0) {
          PTR_PTR_04bb2238 = puVar2;
          return 0;
        }
        local_170[0] = '\0';
        local_180 = local_170;
        local_178 = 0x8000000000;
        PTR_PTR_04bb2238 = puVar2;
        local_f0 = pcVar8;
        if (local_170 == pcVar8) goto LAB_00ad863c;
        if (uVar4 == 0) {
          local_170[0] = '\0';
          goto LAB_00ad863c;
        }
        if (0x7e < (int)uVar4) {
          uVar4 = 0x7f;
        }
        uVar11 = (ulong)uVar4;
        memcpy(local_170,pcVar8,uVar11);
        local_170[uVar11] = '\0';
        local_178 = CONCAT44(local_178._4_4_,uVar4);
        lVar6 = (ulong)(uVar4 - 1) + 0x10;
        goto LAB_00ad8594;
      }
      uVar12 = uVar12 + 1;
    } while (uVar11 != uVar12);
  }
  PTR_PTR_04bb2238 = puVar2;
  return 0;
  while( true ) {
    uVar11 = (ulong)(uVar5 - 1);
    lVar7 = lVar6 + -0x10;
    lVar6 = lVar6 + -1;
    if (lVar7 < 1) break;
LAB_00ad8594:
    uVar5 = (uint)uVar11;
    if (local_170[lVar6 + -0x10] == '/') {
      if (-1 < (int)(uVar5 - 1)) {
        pcVar3 = *(char **)(param_1 + 8);
        pcVar1 = local_170 + uVar11;
        if (uVar4 <= uVar5) {
          pcVar1 = *(char **)(puVar2 + 8);
        }
        if (pcVar3 == pcVar1) goto LAB_00ad86c0;
        lVar6 = 0;
        goto LAB_00ad860c;
      }
      break;
    }
  }
LAB_00ad863c:
  pcVar3 = *(char **)(param_1 + 8);
  if (pcVar3 == local_170) goto LAB_00ad86c0;
  lVar6 = 0;
  do {
    if (local_170[lVar6] == '\0') goto LAB_00ad868c;
    if (local_170[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00ad868c;
    }
    if (local_170[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00ad868c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_00ad868c:
  iVar9 = (int)lVar6;
  if (*(int *)(param_1 + 0x10) <= (int)lVar6) {
    iVar9 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(pcVar3,local_170,(long)iVar9);
  pcVar3 = pcVar3 + iVar9;
  goto LAB_00ad86b4;
  while( true ) {
    if (pcVar1[lVar6 + 1] == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_00ad8758;
    }
    if (pcVar1[lVar6 + 2] == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_00ad8758;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_00ad860c:
    if (pcVar1[lVar6] == '\0') goto LAB_00ad8758;
  }
  lVar6 = 0;
LAB_00ad8758:
  iVar9 = (int)lVar6;
  if (*(int *)(param_1 + 0x10) <= (int)lVar6) {
    iVar9 = *(int *)(param_1 + 0x10) + -1;
  }
  memcpy(pcVar3,pcVar1,(long)iVar9);
  pcVar3 = pcVar3 + iVar9;
LAB_00ad86b4:
  *pcVar3 = '\0';
  pcVar8 = local_f0;
  uVar10 = (uint)local_e8;
LAB_00ad86c0:
  pcVar3 = *(char **)(param_2 + 8);
  pcVar8 = pcVar8 + uVar12 + 1;
  if (uVar10 <= (uint)(uVar12 + 1)) {
    pcVar8 = *(char **)(puVar2 + 8);
  }
  if (pcVar3 != pcVar8) {
    lVar6 = 0;
    do {
      if (pcVar8[lVar6] == '\0') goto LAB_00ad8720;
      if (pcVar8[lVar6 + 1] == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00ad8720;
      }
      if (pcVar8[lVar6 + 2] == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00ad8720;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00ad8720:
    iVar9 = (int)lVar6;
    if (*(int *)(param_2 + 0x10) <= (int)lVar6) {
      iVar9 = *(int *)(param_2 + 0x10) + -1;
    }
    memcpy(pcVar3,pcVar8,(long)iVar9);
    pcVar3[iVar9] = '\0';
  }
  return 1;
}

