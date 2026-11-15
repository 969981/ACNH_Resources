
undefined8
FUN_01ea79f0(long param_1,undefined8 param_2,int param_3,long *param_4,long *param_5,long *param_6,
            byte param_7)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  long *plVar9;
  undefined8 *puVar10;
  
  plVar1 = (long *)(param_1 + 0x8360);
  plVar5 = *(long **)(param_1 + 0x8368);
  if (plVar5 != plVar1) {
    plVar9 = plVar5 + -0x27;
    do {
      if ((int)plVar9[4] == param_3) {
        pvVar7 = (void *)plVar9[6];
        (**(code **)(*param_4 + 0x18))(param_4);
        pvVar8 = (void *)param_4[1];
        if (pvVar7 == pvVar8) goto LAB_01ea7c9c;
        (**(code **)(*param_4 + 0x18))(param_4);
        lVar6 = 0;
        goto LAB_01ea7b70;
      }
      plVar5 = (long *)plVar5[1];
      plVar9 = plVar5 + -0x27;
    } while (plVar9 != (long *)(param_1 + 0x8228));
  }
  if (*(int *)(param_1 + 0x8388) <= *(int *)(param_1 + 0x8370)) {
    return 0;
  }
  puVar10 = *(undefined8 **)(param_1 + 0x8378);
  if (puVar10 != (undefined8 *)0x0) {
    *(undefined8 *)(param_1 + 0x8378) = *puVar10;
  }
  *(int *)(puVar10 + 4) = param_3;
  *puVar10 = &PTR_LAB_04a5ec10;
  puVar10[1] = param_2;
  pvVar7 = (void *)((long)puVar10 + 0x3c);
  *(undefined4 *)(puVar10 + 7) = 0x40;
  *(undefined1 *)((long)puVar10 + 0x7b) = 0;
  puVar10[5] = &PTR_LAB_048fd2d8;
  puVar10[6] = pvVar7;
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar8 = (void *)param_4[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar6 = 0;
    do {
      if (*(char *)(param_4[1] + lVar6) == '\0') goto LAB_01ea7bac;
      lVar2 = param_4[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01ea7bac;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01ea7bac;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01ea7bac:
    iVar3 = (int)lVar6;
    if (*(int *)(puVar10 + 7) <= (int)lVar6) {
      iVar3 = *(int *)(puVar10 + 7) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  puVar4 = PTR_DAT_04bb2bc0;
  pvVar7 = (void *)((long)puVar10 + 0x94);
  *(undefined1 *)((long)puVar10 + 0xd3) = 0;
  puVar10[0x10] = &PTR_LAB_048fd2d8;
  puVar10[0x11] = pvVar7;
  puVar10[5] = puVar4 + 0x10;
  *(undefined4 *)(puVar10 + 0x12) = 0x40;
  (**(code **)(*param_5 + 0x18))(param_5);
  pvVar8 = (void *)param_5[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar6 = 0;
    do {
      if (*(char *)(param_5[1] + lVar6) == '\0') goto LAB_01ea7d08;
      lVar2 = param_5[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01ea7d08;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01ea7d08;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01ea7d08:
    iVar3 = (int)lVar6;
    if (*(int *)(puVar10 + 0x12) <= (int)lVar6) {
      iVar3 = *(int *)(puVar10 + 0x12) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  puVar10[0x10] = puVar4 + 0x10;
  pvVar7 = (void *)((long)puVar10 + 0xec);
  *(undefined4 *)(puVar10 + 0x1d) = 0x40;
  *(undefined1 *)((long)puVar10 + 299) = 0;
  puVar10[0x1b] = PTR_DAT_04bb2f70 + 0x10;
  puVar10[0x1c] = pvVar7;
  (**(code **)(*param_6 + 0x18))(param_6);
  pvVar8 = (void *)param_6[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_6 + 0x18))(param_6);
    lVar6 = 0;
    do {
      if (*(char *)(param_6[1] + lVar6) == '\0') goto LAB_01ea7e68;
      lVar2 = param_6[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01ea7e68;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01ea7e68;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01ea7e68:
    iVar3 = (int)lVar6;
    if (*(int *)(puVar10 + 0x1d) <= (int)lVar6) {
      iVar3 = *(int *)(puVar10 + 0x1d) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  *(byte *)(puVar10 + 0x26) = param_7 & 1;
  puVar10[0x27] = 0;
  puVar10[0x28] = 0;
  puVar10[0x1b] = &PTR_LAB_048fb9f8;
  lVar6 = *plVar1;
  *plVar1 = (long)(puVar10 + 0x27);
  puVar10[0x27] = lVar6;
  puVar10[0x28] = plVar1;
  if (lVar6 != 0) {
    *(undefined8 **)(lVar6 + 8) = puVar10 + 0x27;
  }
  *(int *)(param_1 + 0x8370) = *(int *)(param_1 + 0x8370) + 1;
  return 1;
  while( true ) {
    lVar2 = param_4[1] + lVar6;
    if (*(char *)(lVar2 + 1) == '\0') {
      lVar6 = lVar6 + 1;
      goto LAB_01ea7c74;
    }
    if (*(char *)(lVar2 + 2) == '\0') {
      lVar6 = lVar6 + 2;
      goto LAB_01ea7c74;
    }
    lVar6 = lVar6 + 3;
    if (lVar6 == 0x80001) break;
LAB_01ea7b70:
    if (*(char *)(param_4[1] + lVar6) == '\0') goto LAB_01ea7c74;
  }
  lVar6 = 0;
LAB_01ea7c74:
  iVar3 = (int)lVar6;
  if ((int)plVar9[7] <= (int)lVar6) {
    iVar3 = (int)plVar9[7] + -1;
  }
  memcpy(pvVar7,pvVar8,(long)iVar3);
  *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
LAB_01ea7c9c:
  pvVar7 = (void *)plVar9[0x11];
  (**(code **)(*param_5 + 0x18))(param_5);
  pvVar8 = (void *)param_5[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar6 = 0;
    do {
      if (*(char *)(param_5[1] + lVar6) == '\0') goto LAB_01ea7dd4;
      lVar2 = param_5[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01ea7dd4;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01ea7dd4;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01ea7dd4:
    iVar3 = (int)lVar6;
    if ((int)plVar9[0x12] <= (int)lVar6) {
      iVar3 = (int)plVar9[0x12] + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  pvVar7 = (void *)plVar9[0x1c];
  (**(code **)(*param_6 + 0x18))(param_6);
  pvVar8 = (void *)param_6[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_6 + 0x18))(param_6);
    lVar6 = 0;
    do {
      if (*(char *)(param_6[1] + lVar6) == '\0') goto LAB_01ea7edc;
      lVar2 = param_6[1] + lVar6;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_01ea7edc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_01ea7edc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_01ea7edc:
    iVar3 = (int)lVar6;
    if ((int)plVar9[0x1d] <= (int)lVar6) {
      iVar3 = (int)plVar9[0x1d] + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar3);
    *(undefined1 *)((long)pvVar7 + (long)iVar3) = 0;
  }
  *(byte *)(plVar9 + 0x26) = param_7 & 1;
  return 1;
}

