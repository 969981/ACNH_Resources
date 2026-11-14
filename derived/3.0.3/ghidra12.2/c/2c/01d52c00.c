
void FUN_01d52c00(long param_1,undefined8 *param_2,uint param_3)

{
  undefined *puVar1;
  ulong uVar2;
  int iVar3;
  ulong uVar4;
  undefined8 *puVar5;
  long *plVar6;
  char *pcVar7;
  undefined1 uVar8;
  char *pcVar9;
  undefined4 uVar10;
  undefined8 local_80;
  int local_78;
  undefined *local_70;
  char *local_68;
  undefined1 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  
  puVar1 = PTR_DAT_04bb2020;
  local_80 = *param_2;
  uVar8 = *(undefined1 *)(param_2 + 4);
  local_78 = *(int *)(param_2 + 1);
  pcVar9 = (char *)param_2[3];
  local_70 = PTR_DAT_04bb2020 + 0x10;
  uVar10 = *(undefined4 *)((long)param_2 + 0x24);
  local_58 = *(undefined4 *)(param_2 + 5);
  local_54 = *(undefined1 *)((long)param_2 + 0x2c);
  local_68 = pcVar9;
  local_60 = uVar8;
  local_5c = uVar10;
  if ((param_3 & 1) != 0) goto LAB_01d52f24;
  if (*(int *)(param_2 + 1) == DAT_04cd26b8) {
    plVar6 = param_2 + 2;
    (**(code **)(*plVar6 + 0x18))(plVar6);
    (**(code **)(*plVar6 + 0x18))(plVar6);
    pcVar7 = (char *)param_2[3];
    (**(code **)(DAT_04cd26c0 + 0x18))(&DAT_04cd26c0);
    if (pcVar7 != DAT_04cd26c8) {
      pcVar7 = (char *)param_2[3];
      if (*pcVar7 != *DAT_04cd26c8) goto LAB_01d52d2c;
      if (*pcVar7 != '\0') {
        uVar2 = 0;
        do {
          uVar4 = uVar2;
          if ((uVar4 == 0x80000) || (pcVar7[uVar4 + 1] != DAT_04cd26c8[uVar4 + 1]))
          goto LAB_01d52d2c;
          if (pcVar7[uVar4 + 1] == '\0') goto LAB_01d52d24;
          if (pcVar7[uVar4 + 2] != DAT_04cd26c8[uVar4 + 2]) goto LAB_01d52d2c;
          uVar2 = uVar4 + 2;
        } while (pcVar7[uVar4 + 2] != '\0');
        uVar4 = uVar4 + 1;
LAB_01d52d24:
        if (0x7ffff < uVar4) goto LAB_01d52d2c;
      }
    }
LAB_01d52ec0:
    iVar3 = FUN_01d53060();
    if (iVar3 == 1) {
      puVar5 = &DAT_04cd25f0;
    }
    else {
      if (iVar3 != 2) goto LAB_01d52f24;
      puVar5 = &DAT_04cd25c0;
    }
    local_80 = *puVar5;
    pcVar9 = (char *)puVar5[3];
    local_78 = *(int *)(puVar5 + 1);
    local_54 = *(undefined1 *)((long)puVar5 + 0x2c);
    uVar8 = *(undefined1 *)(puVar5 + 4);
    uVar10 = *(undefined4 *)((long)puVar5 + 0x24);
    local_58 = *(undefined4 *)(puVar5 + 5);
    local_68 = pcVar9;
    local_60 = uVar8;
    local_5c = uVar10;
  }
  else {
LAB_01d52d2c:
    if (*(int *)(param_2 + 1) == DAT_04cd26e8) {
      plVar6 = param_2 + 2;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pcVar7 = (char *)param_2[3];
      (**(code **)(DAT_04cd26f0 + 0x18))(&DAT_04cd26f0);
      if (pcVar7 != DAT_04cd26f8) {
        pcVar7 = (char *)param_2[3];
        if (*pcVar7 != *DAT_04cd26f8) goto LAB_01d52df8;
        if (*pcVar7 != '\0') {
          uVar2 = 0;
          do {
            uVar4 = uVar2;
            if ((uVar4 == 0x80000) || (pcVar7[uVar4 + 1] != DAT_04cd26f8[uVar4 + 1]))
            goto LAB_01d52df8;
            if (pcVar7[uVar4 + 1] == '\0') goto LAB_01d52df0;
            if (pcVar7[uVar4 + 2] != DAT_04cd26f8[uVar4 + 2]) goto LAB_01d52df8;
            uVar2 = uVar4 + 2;
          } while (pcVar7[uVar4 + 2] != '\0');
          uVar4 = uVar4 + 1;
LAB_01d52df0:
          if (0x7ffff < uVar4) goto LAB_01d52df8;
        }
      }
      goto LAB_01d52ec0;
    }
LAB_01d52df8:
    if (*(int *)(param_2 + 1) == DAT_04cd2718) {
      plVar6 = param_2 + 2;
      (**(code **)(*plVar6 + 0x18))(plVar6);
      (**(code **)(*plVar6 + 0x18))(plVar6);
      pcVar7 = (char *)param_2[3];
      (**(code **)(DAT_04cd2720 + 0x18))(&DAT_04cd2720);
      if (pcVar7 != DAT_04cd2728) {
        pcVar7 = (char *)param_2[3];
        if (*pcVar7 != *DAT_04cd2728) goto LAB_01d52f24;
        if (*pcVar7 != '\0') {
          uVar2 = 0;
          do {
            uVar4 = uVar2;
            if ((uVar4 == 0x80000) || (pcVar7[uVar4 + 1] != DAT_04cd2728[uVar4 + 1]))
            goto LAB_01d52f24;
            if (pcVar7[uVar4 + 1] == '\0') goto LAB_01d52eb8;
            if (pcVar7[uVar4 + 2] != DAT_04cd2728[uVar4 + 2]) goto LAB_01d52f24;
            uVar2 = uVar4 + 2;
          } while (pcVar7[uVar4 + 2] != '\0');
          uVar4 = uVar4 + 1;
LAB_01d52eb8:
          if (uVar4 >> 0x13 != 0) goto LAB_01d52f24;
        }
      }
      goto LAB_01d52ec0;
    }
  }
LAB_01d52f24:
  iVar3 = local_78;
  if (local_78 == *(int *)(param_2 + 1)) {
    (**(code **)(param_2[2] + 0x18))(param_2 + 2);
    pcVar7 = (char *)param_2[3];
    if (pcVar9 == pcVar7) goto LAB_01d53030;
    if (*pcVar9 == *pcVar7) {
      if (*pcVar9 == '\0') goto LAB_01d53030;
      uVar2 = 0;
      do {
        uVar4 = uVar2;
        if ((uVar4 == 0x80000) || (pcVar9[uVar4 + 1] != pcVar7[uVar4 + 1])) goto LAB_01d52fb8;
        if (pcVar9[uVar4 + 1] == '\0') goto LAB_01d52fb0;
        if (pcVar9[uVar4 + 2] != pcVar7[uVar4 + 2]) goto LAB_01d52fb8;
        uVar2 = uVar4 + 2;
      } while (pcVar9[uVar4 + 2] != '\0');
      uVar4 = uVar4 + 1;
LAB_01d52fb0:
      if (uVar4 < 0x80000) goto LAB_01d53030;
    }
  }
LAB_01d52fb8:
  if (*(char *)(param_1 + 0xa90) == '\0') {
    *(undefined **)(param_1 + 0xa70) = puVar1 + 0x10;
    *(char **)(param_1 + 0xa78) = pcVar9;
    *(undefined1 *)(param_1 + 0xa80) = uVar8;
    *(undefined4 *)(param_1 + 0xa84) = uVar10;
    *(undefined8 *)(param_1 + 0xa60) = local_80;
    *(int *)(param_1 + 0xa68) = local_78;
    *(undefined4 *)(param_1 + 0xa88) = local_58;
    *(undefined1 *)(param_1 + 0xa8c) = local_54;
    *(undefined1 *)(param_1 + 0xa90) = 1;
  }
  else {
    *(int *)(param_1 + 0xa68) = iVar3;
    *(char **)(param_1 + 0xa78) = pcVar9;
    *(undefined4 *)(param_1 + 0xa84) = uVar10;
    *(undefined1 *)(param_1 + 0xa80) = uVar8;
    *(undefined8 *)(param_1 + 0xa60) = local_80;
    *(undefined1 *)(param_1 + 0xa8c) = local_54;
    *(undefined4 *)(param_1 + 0xa88) = local_58;
  }
LAB_01d53030:
  FUN_01d53240(param_1,&local_80);
  return;
}

