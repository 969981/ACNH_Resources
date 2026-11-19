
void FUN_038b6870(long *param_1,long *param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  void *pvVar4;
  void *__dest;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined *local_50;
  char *local_48;
  
  if ((int)param_1[2] < 1) {
    (**(code **)(*param_1 + 0x18))(param_1);
  }
  else {
    *(undefined1 *)param_1[1] = 0;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  local_48 = "://";
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar6 = 0;
  do {
    if (*(char *)(param_2[1] + lVar6) == '\0') {
LAB_038b6920:
      iVar5 = (int)lVar6;
joined_r0x038b6924:
      if (2 < iVar5) {
        uVar9 = 0;
        goto LAB_038b6950;
      }
      break;
    }
    lVar7 = param_2[1] + lVar6;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038b6920;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      iVar5 = (int)lVar6 + 2;
      goto joined_r0x038b6924;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  goto LAB_038b6a00;
  while( true ) {
    if (*(char *)(lVar7 + lVar6 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038b6b1c;
    }
    if (*(char *)(lVar7 + lVar6 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038b6b1c;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_038b69d0:
    if (*(char *)(lVar7 + lVar6) == '\0') goto LAB_038b6b1c;
  }
  lVar6 = 0;
LAB_038b6b1c:
  pvVar4 = *(void **)(PTR_PTR_04bb2238 + 8);
  if ((int)(uVar9 + 3) <= (int)lVar6 && -4 < (int)uVar9) {
    pvVar4 = (void *)(lVar7 + (uVar9 + 3 & 0xffffffff));
  }
  __dest = (void *)param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_038b6b90;
    lVar7 = param_1[1] + lVar6;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038b6b90;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038b6b90;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_038b6b90:
  lVar7 = 0;
  do {
    if (*(char *)((long)pvVar4 + lVar7) == '\0') goto LAB_038b6bd0;
    if (*(char *)((long)pvVar4 + lVar7 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_038b6bd0;
    }
    if (*(char *)((long)pvVar4 + lVar7 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_038b6bd0;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_038b6bd0:
  uVar3 = (uint)lVar7;
  if ((int)param_1[2] <= (int)(uint)lVar7) {
    uVar3 = (int)param_1[2] - 1;
  }
  if ((int)uVar3 < 1) {
    return;
  }
  memcpy(__dest,pvVar4,(ulong)uVar3);
  if ((int)uVar3 <= (int)lVar6) {
    return;
  }
  puVar8 = (undefined1 *)((long)__dest + (ulong)uVar3);
  goto LAB_038b6af4;
  while (uVar9 = uVar9 + 1, iVar5 - 2 != uVar9) {
LAB_038b6950:
    pcVar1 = (char *)(param_2[1] + uVar9);
    (**(code **)(local_50 + 0x18))(&local_50);
    if ((pcVar1 == local_48) ||
       ((*pcVar1 == *local_48 &&
        ((*pcVar1 == '\0' ||
         ((pcVar1[1] == local_48[1] && ((pcVar1[1] == '\0' || (pcVar1[2] == local_48[2])))))))))) {
      if ((int)uVar9 != -1) {
        (**(code **)(*param_2 + 0x18))(param_2);
        lVar7 = param_2[1];
        lVar6 = 0;
        goto LAB_038b69d0;
      }
      break;
    }
  }
LAB_038b6a00:
  pvVar4 = (void *)param_1[1];
  (**(code **)(*param_1 + 0x18))(param_1);
  lVar6 = 0;
  do {
    if (*(char *)(param_1[1] + lVar6) == '\0') goto LAB_038b6a5c;
    lVar7 = param_1[1] + lVar6;
    if (*(char *)(lVar7 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_038b6a5c;
    }
    if (*(char *)(lVar7 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_038b6a5c;
    }
    lVar6 = lVar6 + 3;
  } while (lVar6 != 0x80001);
  lVar6 = 0;
LAB_038b6a5c:
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar7 = 0;
  do {
    if (*(char *)(param_2[1] + lVar7) == '\0') goto LAB_038b6ab0;
    lVar2 = param_2[1] + lVar7;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar7 = lVar7 + 1;
      goto LAB_038b6ab0;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar7 = lVar7 + 2;
      goto LAB_038b6ab0;
    }
    lVar7 = lVar7 + 3;
  } while (lVar7 != 0x80001);
  lVar7 = 0;
LAB_038b6ab0:
  uVar3 = (uint)lVar7;
  if ((int)param_1[2] <= (int)(uint)lVar7) {
    uVar3 = (int)param_1[2] - 1;
  }
  if (0 < (int)uVar3) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy(pvVar4,(void *)param_2[1],(ulong)uVar3);
    if ((int)lVar6 < (int)uVar3) {
      puVar8 = (undefined1 *)((long)pvVar4 + (ulong)uVar3);
LAB_038b6af4:
      *puVar8 = 0;
    }
  }
  return;
}

