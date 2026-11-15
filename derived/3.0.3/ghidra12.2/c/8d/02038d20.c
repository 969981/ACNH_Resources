
void FUN_02038d20(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10,undefined8 param_11,long *param_12,
                 long *param_13,undefined8 param_14)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  
  pvVar1 = (void *)((long)param_1 + 0x54);
  *(undefined4 *)(param_1 + 4) = param_6;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)((long)param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 5) = param_8;
  *(undefined4 *)((long)param_1 + 0x2c) = param_9;
  *(undefined4 *)(param_1 + 6) = param_10;
  param_1[9] = pvVar1;
  *(undefined4 *)(param_1 + 10) = 8;
  puVar2 = PTR_DAT_04bb6a30 + 0x10;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[7] = param_11;
  param_1[8] = puVar2;
  (**(code **)(*param_12 + 0x18))(param_12);
  pvVar7 = (void *)param_12[1];
  if (pvVar1 != pvVar7) {
    (**(code **)(*param_12 + 0x18))(param_12);
    lVar6 = 0;
    do {
      if (*(char *)(param_12[1] + lVar6) == '\0') goto LAB_02038e00;
      lVar3 = param_12[1] + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02038e00;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02038e00;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02038e00:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 10) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 10) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  puVar5 = PTR_DAT_04bb3768;
  pvVar1 = (void *)((long)param_1 + 0x74);
  *(undefined4 *)(param_1 + 0xe) = 8;
  *(undefined1 *)((long)param_1 + 0x7b) = 0;
  param_1[0xc] = puVar2;
  param_1[0xd] = pvVar1;
  param_1[8] = puVar5 + 0x10;
  (**(code **)(*param_13 + 0x18))(param_13);
  pvVar7 = (void *)param_13[1];
  if (pvVar1 != pvVar7) {
    (**(code **)(*param_13 + 0x18))(param_13);
    lVar6 = 0;
    do {
      if (*(char *)(param_13[1] + lVar6) == '\0') goto LAB_02038ebc;
      lVar3 = param_13[1] + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02038ebc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02038ebc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02038ebc:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0xe) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0xe) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[0xc] = puVar5 + 0x10;
  param_1[0x10] = param_14;
  return;
}

