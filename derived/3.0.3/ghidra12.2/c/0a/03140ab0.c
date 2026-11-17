
void FUN_03140ab0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *local_60;
  undefined1 *local_58;
  int local_50;
  undefined1 local_4c [7];
  undefined1 local_45;
  
  puVar3 = PTR_PTR_04bb2238;
  local_45 = 0;
  local_50 = 8;
  local_60 = PTR_DAT_04bb6a30 + 0x10;
  local_58 = local_4c;
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  puVar6 = *(undefined1 **)(puVar3 + 8);
  if (local_4c != puVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_03140b70;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03140b70;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03140b70;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03140b70:
    iVar2 = (int)lVar4;
    if (local_50 <= (int)lVar4) {
      iVar2 = local_50 + -1;
    }
    memcpy(local_4c,puVar6,(long)iVar2);
    local_4c[iVar2] = 0;
  }
  puVar6 = local_58;
  puVar3 = PTR_DAT_04bb3768;
  local_60 = PTR_DAT_04bb3768 + 0x10;
  puVar5 = *(undefined1 **)(param_1 + 8);
  local_58[(long)local_50 + -1] = 0;
  if (puVar5 != local_58) {
    (**(code **)(puVar3 + 0x28))(&local_60);
    lVar4 = 0;
    do {
      if (local_58[lVar4] == '\0') goto LAB_03140c1c;
      if (local_58[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03140c1c;
      }
      if (local_58[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03140c1c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03140c1c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(puVar5,puVar6,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  puVar5 = *(undefined1 **)(param_1 + 0x28);
  (**(code **)(local_60 + 0x18))(&local_60);
  puVar6 = local_58;
  if (puVar5 != local_58) {
    (**(code **)(local_60 + 0x18))(&local_60);
    lVar4 = 0;
    do {
      if (local_58[lVar4] == '\0') goto LAB_03140cbc;
      if (local_58[lVar4 + 1] == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03140cbc;
      }
      if (local_58[lVar4 + 2] == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03140cbc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03140cbc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x30) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x30) + -1;
    }
    memcpy(puVar5,puVar6,(long)iVar2);
    puVar5[iVar2] = 0;
  }
  *(undefined4 *)(param_1 + 0x40) = 0;
  return;
}

