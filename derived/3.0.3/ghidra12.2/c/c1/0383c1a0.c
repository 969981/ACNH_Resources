
void FUN_0383c1a0(byte *param_1,long param_2)

{
  long lVar1;
  byte *pbVar2;
  int iVar3;
  char cVar4;
  long lVar5;
  byte bVar6;
  byte bVar7;
  char *pcVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  long *plVar11;
  undefined1 local_1b4 [127];
  undefined1 local_135;
  undefined *local_130;
  undefined1 *local_128;
  int local_120;
  undefined1 local_11c [127];
  undefined1 local_9d;
  undefined *local_98;
  undefined1 *local_90;
  int local_88;
  undefined1 local_84 [31];
  undefined1 local_65;
  
  local_135 = 0;
  local_1b4[0] = 0;
  local_9d = 0;
  local_128 = local_11c;
  local_120 = 0x80;
  local_130 = PTR_DAT_04bb2d88 + 0x10;
  local_11c[0] = 0;
  local_88 = 0x20;
  local_84[0] = 0;
  cVar4 = *(char *)(param_2 + 1);
  local_98 = PTR_DAT_04bb2028 + 0x10;
  local_65 = 0;
  local_90 = local_84;
  (**(code **)(*(long *)(param_2 + 0x140) + 0x18))(param_2 + 0x140);
  puVar9 = *(undefined1 **)(param_2 + 0x148);
  if (local_84 != puVar9) {
    (**(code **)(*(long *)(param_2 + 0x140) + 0x18))(param_2 + 0x140);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x148) + lVar5) == '\0') goto LAB_0383c2bc;
      lVar1 = *(long *)(param_2 + 0x148) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383c2bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383c2bc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383c2bc:
    iVar3 = (int)lVar5;
    if (local_88 <= (int)lVar5) {
      iVar3 = local_88 + -1;
    }
    memcpy(local_84,puVar9,(long)iVar3);
    local_84[iVar3] = 0;
  }
  puVar9 = local_128;
  plVar11 = (long *)(param_2 + 0xa8);
  (**(code **)(*plVar11 + 0x18))(plVar11);
  puVar10 = *(undefined1 **)(param_2 + 0xb0);
  if (puVar9 != puVar10) {
    (**(code **)(*(long *)(param_2 + 0xa8) + 0x18))(plVar11);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0xb0) + lVar5) == '\0') goto LAB_0383c35c;
      lVar1 = *(long *)(param_2 + 0xb0) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383c35c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383c35c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383c35c:
    iVar3 = (int)lVar5;
    if (local_120 <= (int)lVar5) {
      iVar3 = local_120 + -1;
    }
    memcpy(puVar9,puVar10,(long)iVar3);
    puVar9[iVar3] = 0;
  }
  plVar11 = (long *)(param_2 + 0x10);
  (**(code **)(*plVar11 + 0x18))(plVar11);
  puVar9 = *(undefined1 **)(param_2 + 0x18);
  if (local_1b4 != puVar9) {
    (**(code **)(*(long *)(param_2 + 0x10) + 0x18))(plVar11);
    lVar5 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x18) + lVar5) == '\0') goto LAB_0383c400;
      lVar1 = *(long *)(param_2 + 0x18) + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383c400;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383c400;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383c400:
    iVar3 = (int)lVar5;
    if (0x7f < (int)lVar5) {
      iVar3 = 0x7f;
    }
    memcpy(local_1b4,puVar9,(long)iVar3);
    local_1b4[iVar3] = 0;
  }
  if ((param_1[8] & 1) != 0) {
    param_1[8] = param_1[8] & 0xfe;
  }
  pbVar2 = param_1 + 0x1490;
  puVar10 = *(undefined1 **)(param_1 + 0x1458);
  (**(code **)(local_98 + 0x18))(&local_98);
  puVar9 = local_90;
  if (puVar10 != local_90) {
    (**(code **)(local_98 + 0x18))(&local_98);
    lVar5 = 0;
    do {
      if (local_90[lVar5] == '\0') goto LAB_0383c4b0;
      if (local_90[lVar5 + 1] == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_0383c4b0;
      }
      if (local_90[lVar5 + 2] == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_0383c4b0;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_0383c4b0:
    iVar3 = (int)lVar5;
    if (*(int *)(param_1 + 0x1460) <= (int)lVar5) {
      iVar3 = *(int *)(param_1 + 0x1460) + -1;
    }
    memcpy(puVar10,puVar9,(long)iVar3);
    puVar10[iVar3] = 0;
  }
  if (cVar4 != '\0') {
    param_1[8] = param_1[8] | 4;
  }
  cVar4 = *(char *)(param_2 + 1);
  pcVar8 = *(char **)(param_2 + 0x18);
  bVar6 = *pbVar2;
  if ((bVar6 & 1) != 0) {
    bVar6 = bVar6 & 0xfe;
    *pbVar2 = bVar6;
  }
  bVar6 = bVar6 & 0xdf | (*pcVar8 != '\0') << 5;
  if (cVar4 != '\0') {
    bVar6 = bVar6 | 4;
  }
  bVar7 = param_1[0x1538];
  *pbVar2 = bVar6;
  cVar4 = *(char *)(param_2 + 1);
  pcVar8 = *(char **)(param_2 + 0xb0);
  if ((bVar7 & 1) != 0) {
    bVar7 = bVar7 & 0xfe;
    param_1[0x1538] = bVar7;
  }
  bVar6 = bVar7 & 0xdf | (*pcVar8 != '\0') << 5;
  if (cVar4 != '\0') {
    bVar6 = bVar6 | 4;
  }
  param_1[0x1538] = bVar6;
  if (*(char *)(param_2 + 1) != '\0') {
    *param_1 = *param_1 | 4;
  }
  return;
}

