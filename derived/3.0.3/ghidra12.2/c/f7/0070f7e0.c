
void FUN_0070f7e0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined **local_d8;
  undefined1 *local_d0;
  int local_c8;
  undefined1 local_c4 [31];
  undefined1 local_a5;
  undefined1 local_45;
  
  local_c8 = 0x80;
  local_45 = 0;
  local_d8 = &PTR_LAB_048fcff0;
  local_d0 = local_c4;
  (**(code **)(*param_2 + 0x18))(param_2);
  puVar5 = (undefined1 *)param_2[1];
  if (local_c4 != puVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0070f8ac;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0070f8ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0070f8ac;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0070f8ac:
    iVar2 = (int)lVar3;
    if (local_c8 <= (int)lVar3) {
      iVar2 = local_c8 + -1;
    }
    memcpy(local_c4,puVar5,(long)iVar2);
    local_c4[iVar2] = 0;
  }
  puVar5 = local_d0;
  puVar4 = *(undefined1 **)(param_1 + 0xdf98);
  local_d8 = (undefined **)&DAT_048fc708;
  local_d0[(long)local_c8 + -1] = 0;
  if (puVar4 != local_d0) {
    (*(code *)PTR_FUN_048fc720)(&local_d8);
    lVar3 = 0;
    do {
      if (local_d0[lVar3] == '\0') goto LAB_0070f95c;
      if (local_d0[lVar3 + 1] == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0070f95c;
      }
      if (local_d0[lVar3 + 2] == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0070f95c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0070f95c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xdfa0) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xdfa0) + -1;
    }
    memcpy(puVar4,puVar5,(long)iVar2);
    puVar4[iVar2] = 0;
  }
  local_c8 = 0x20;
  local_a5 = 0;
  local_d8 = &PTR_LAB_048fa8f8;
  local_d0 = local_c4;
  (**(code **)(*param_3 + 0x18))(param_3);
  puVar5 = (undefined1 *)param_3[1];
  if (local_c4 != puVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_0070fa1c;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0070fa1c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0070fa1c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0070fa1c:
    iVar2 = (int)lVar3;
    if (local_c8 <= (int)lVar3) {
      iVar2 = local_c8 + -1;
    }
    memcpy(local_c4,puVar5,(long)iVar2);
    local_c4[iVar2] = 0;
  }
  puVar5 = local_d0;
  puVar4 = *(undefined1 **)(param_1 + 0xe030);
  local_d8 = &PTR_LAB_048f9700;
  local_d0[(long)local_c8 + -1] = 0;
  if (puVar4 != local_d0) {
    (*(code *)PTR_FUN_048f9718)(&local_d8);
    lVar3 = 0;
    do {
      if (local_d0[lVar3] == '\0') goto LAB_0070facc;
      if (local_d0[lVar3 + 1] == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0070facc;
      }
      if (local_d0[lVar3 + 2] == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0070facc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0070facc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xe038) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xe038) + -1;
    }
    memcpy(puVar4,puVar5,(long)iVar2);
    puVar4[iVar2] = 0;
  }
  return;
}

