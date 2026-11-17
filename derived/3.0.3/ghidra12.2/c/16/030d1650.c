
void FUN_030d1650(long param_1,long param_2,long param_3)

{
  int iVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  char *pcVar5;
  int iVar6;
  long lVar7;
  char *pcVar8;
  int iVar9;
  long lVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined *local_b8;
  char *local_b0;
  undefined *local_a8;
  char *local_a0;
  int local_98;
  char local_94 [63];
  undefined1 local_55;
  long local_38;
  
  plVar4 = *(long **)(param_1 + 0x58);
  local_38 = 0;
  if (plVar4 == (long *)0x0) {
    return;
  }
  (**(code **)(*plVar4 + 0x28))(plVar4,&local_38);
  if (local_38 == 0) {
    return;
  }
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (*(long *)(local_38 + 0xb8) == 0) {
    return;
  }
  pcVar5 = (char *)FUN_00364d70((long *)(local_38 + 0xb8),param_2);
  if (pcVar5 == (char *)0x0) {
    return;
  }
  local_55 = 0;
  local_98 = 0x40;
  local_a8 = PTR_DAT_04bb2f70 + 0x10;
  local_a0 = local_94;
  if (local_94 != pcVar5) {
    lVar7 = 0;
    do {
      if (pcVar5[lVar7] == '\0') {
LAB_030d1730:
        iVar6 = (int)lVar7;
        if (0x3f < iVar6) {
          iVar6 = 0x3f;
        }
        goto LAB_030d173c;
      }
      if (pcVar5[lVar7 + 1] == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_030d1730;
      }
      if (pcVar5[lVar7 + 2] == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_030d1730;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    iVar6 = 0;
LAB_030d173c:
    memcpy(local_94,pcVar5,(long)iVar6);
    local_94[iVar6] = '\0';
    pcVar5 = local_a0;
  }
  puVar3 = PTR_DAT_04bb2020;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  if (*pcVar5 == '\0') {
    return;
  }
  uVar12 = 0;
  local_b8 = PTR_DAT_04bb2020 + 0x10;
  local_b0 = "_";
  pcVar5[(long)local_98 + -1] = '\0';
  do {
    if (local_a0[uVar12] == '\0') goto LAB_030d17dc;
    if (local_a0[uVar12 + 1] == '\0') {
      uVar12 = uVar12 + 1;
      goto LAB_030d17dc;
    }
    if (local_a0[uVar12 + 2] == '\0') {
      uVar12 = uVar12 + 2;
      goto LAB_030d17dc;
    }
    uVar12 = uVar12 + 3;
  } while (uVar12 != 0x80001);
  uVar12 = 0;
LAB_030d17dc:
  (**(code **)(puVar3 + 0x28))(&local_b8);
  lVar7 = 0;
  do {
    if (local_b0[lVar7] == '\0') {
LAB_030d1830:
      uVar2 = (int)uVar12 - (int)lVar7;
      uVar12 = (ulong)uVar2;
      if ((int)uVar2 < 0) goto LAB_030d1990;
      if ((int)lVar7 < 1) goto LAB_030d18ac;
      goto LAB_030d1844;
    }
    if (local_b0[lVar7 + 1] == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_030d1830;
    }
    if (local_b0[lVar7 + 2] == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_030d1830;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  if (-1 < (int)uVar12) {
LAB_030d18ac:
    (**(code **)(local_b8 + 0x18))(&local_b8);
LAB_030d18bc:
    if (0 < (int)uVar12) {
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar7 = 0;
      do {
        if (local_a0[lVar7] == '\0') goto LAB_030d191c;
        if (local_a0[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_030d191c;
        }
        if (local_a0[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_030d191c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_030d191c:
      iVar6 = (int)lVar7 - (int)uVar12;
      (**(code **)(local_a8 + 0x18))(&local_a8);
      lVar7 = 0;
      do {
        if (local_a0[lVar7] == '\0') goto LAB_030d197c;
        if (local_a0[lVar7 + 1] == '\0') {
          lVar7 = lVar7 + 1;
          goto LAB_030d197c;
        }
        if (local_a0[lVar7 + 2] == '\0') {
          lVar7 = lVar7 + 2;
          goto LAB_030d197c;
        }
        lVar7 = lVar7 + 3;
      } while (lVar7 != 0x80001);
      lVar7 = 0;
LAB_030d197c:
      if (-1 < iVar6) {
        iVar9 = (int)lVar7;
        iVar1 = iVar9;
        if (iVar6 <= iVar9) {
          iVar1 = iVar6;
        }
        local_a0[iVar9 - iVar1] = '\0';
      }
    }
  }
LAB_030d1990:
  (**(code **)(*(long *)(param_1 + 0x18) + 0x18))((long *)(param_1 + 0x18));
  uVar11 = *(undefined8 *)(param_1 + 0x20);
  (**(code **)(local_a8 + 0x18))(&local_a8);
  FUN_038d1270(param_3,"%s/%s",uVar11,local_a0);
  return;
  while( true ) {
    pcVar8 = local_b0;
    lVar10 = lVar7;
    while( true ) {
      lVar10 = lVar10 + -1;
      if (pcVar5[uVar12] != *pcVar8) break;
      if ((pcVar5[uVar12] == '\0') || (pcVar5 = pcVar5 + 1, pcVar8 = pcVar8 + 1, lVar10 == 0))
      goto LAB_030d18bc;
    }
    iVar6 = (int)uVar12;
    uVar12 = uVar12 - 1;
    if (iVar6 < 1) break;
LAB_030d1844:
    pcVar5 = local_a0;
    pcVar8 = local_a0 + uVar12;
    (**(code **)(local_b8 + 0x18))(&local_b8);
    if (pcVar8 == local_b0) goto LAB_030d18bc;
  }
  goto LAB_030d1990;
}

