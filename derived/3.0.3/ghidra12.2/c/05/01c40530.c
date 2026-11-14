
void FUN_01c40530(undefined8 *param_1,undefined8 *param_2)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  long lVar12;
  void *pvVar13;
  long *plVar14;
  
  uVar11 = *param_2;
  pvVar1 = (void *)((long)param_1 + 0x2c);
  *(undefined4 *)(param_1 + 1) = *(undefined4 *)(param_2 + 1);
  *param_1 = uVar11;
  *(undefined4 *)((long)param_1 + 0xc) = *(undefined4 *)((long)param_2 + 0xc);
  *(undefined2 *)(param_1 + 2) = *(undefined2 *)(param_2 + 2);
  *(undefined1 *)((long)param_1 + 0x12) = *(undefined1 *)((long)param_2 + 0x12);
  *(undefined1 *)((long)param_1 + 0x13) = *(undefined1 *)((long)param_2 + 0x13);
  uVar6 = *(undefined4 *)((long)param_2 + 0x14);
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  *(undefined4 *)((long)param_1 + 0x14) = uVar6;
  *(undefined4 *)(param_1 + 5) = 0x20;
  puVar8 = PTR_DAT_04bb2a08;
  param_1[3] = PTR_DAT_04bb2a08 + 0x10;
  param_1[4] = pvVar1;
  plVar14 = param_2 + 3;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar13 = (void *)param_2[4];
  if (pvVar1 != pvVar13) {
    (**(code **)(param_2[3] + 0x18))(plVar14);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[4] + lVar12) == '\0') goto LAB_01c4062c;
      lVar2 = param_2[4] + lVar12;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01c4062c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01c4062c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01c4062c:
    iVar3 = (int)lVar12;
    if (*(int *)(param_1 + 5) <= (int)lVar12) {
      iVar3 = *(int *)(param_1 + 5) + -1;
    }
    memcpy(pvVar1,pvVar13,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  puVar7 = PTR_DAT_04bb2028;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  pvVar1 = (void *)((long)param_1 + 100);
  param_1[3] = puVar7 + 0x10;
  *(undefined4 *)(param_1 + 0xc) = 8;
  puVar10 = PTR_DAT_04bb6a30;
  param_1[10] = PTR_DAT_04bb6a30 + 0x10;
  param_1[0xb] = pvVar1;
  plVar14 = param_2 + 10;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar13 = (void *)param_2[0xb];
  if (pvVar1 != pvVar13) {
    (**(code **)(param_2[10] + 0x18))(plVar14);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[0xb] + lVar12) == '\0') goto LAB_01c406fc;
      lVar2 = param_2[0xb] + lVar12;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01c406fc;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01c406fc;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01c406fc:
    iVar3 = (int)lVar12;
    if (*(int *)(param_1 + 0xc) <= (int)lVar12) {
      iVar3 = *(int *)(param_1 + 0xc) + -1;
    }
    memcpy(pvVar1,pvVar13,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  puVar9 = PTR_DAT_04bb3768;
  pvVar1 = (void *)((long)param_1 + 0x84);
  *(undefined1 *)((long)param_1 + 0xa3) = 0;
  param_1[10] = puVar9 + 0x10;
  *(undefined4 *)(param_1 + 0x10) = 0x20;
  param_1[0xe] = puVar8 + 0x10;
  param_1[0xf] = pvVar1;
  plVar14 = param_2 + 0xe;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar13 = (void *)param_2[0xf];
  if (pvVar1 != pvVar13) {
    (**(code **)(param_2[0xe] + 0x18))(plVar14);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[0xf] + lVar12) == '\0') goto LAB_01c407c0;
      lVar2 = param_2[0xf] + lVar12;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01c407c0;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01c407c0;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01c407c0:
    iVar3 = (int)lVar12;
    if (*(int *)(param_1 + 0x10) <= (int)lVar12) {
      iVar3 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar1,pvVar13,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  pvVar1 = (void *)((long)param_1 + 0xbc);
  *(undefined1 *)((long)param_1 + 0xc3) = 0;
  param_1[0xe] = puVar7 + 0x10;
  *(undefined4 *)(param_1 + 0x17) = 8;
  param_1[0x15] = puVar10 + 0x10;
  param_1[0x16] = pvVar1;
  plVar14 = param_2 + 0x15;
  (**(code **)(*plVar14 + 0x18))(plVar14);
  pvVar13 = (void *)param_2[0x16];
  if (pvVar1 != pvVar13) {
    (**(code **)(param_2[0x15] + 0x18))(plVar14);
    lVar12 = 0;
    do {
      if (*(char *)(param_2[0x16] + lVar12) == '\0') goto LAB_01c4087c;
      lVar2 = param_2[0x16] + lVar12;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar12 = lVar12 + 1;
        goto LAB_01c4087c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar12 = lVar12 + 2;
        goto LAB_01c4087c;
      }
      lVar12 = lVar12 + 3;
    } while (lVar12 != 0x80001);
    lVar12 = 0;
LAB_01c4087c:
    iVar3 = (int)lVar12;
    if (*(int *)(param_1 + 0x17) <= (int)lVar12) {
      iVar3 = *(int *)(param_1 + 0x17) + -1;
    }
    memcpy(pvVar1,pvVar13,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  param_1[0x15] = puVar9 + 0x10;
  uVar11 = param_2[0x19];
  uVar4 = param_2[0x1a];
  uVar5 = param_2[0x1c];
  param_1[0x1b] = param_2[0x1b];
  param_1[0x1c] = uVar5;
  param_1[0x19] = uVar11;
  param_1[0x1a] = uVar4;
  return;
}

