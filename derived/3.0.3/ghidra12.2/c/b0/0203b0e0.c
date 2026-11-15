
void FUN_0203b0e0(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5,undefined4 param_6,undefined1 param_7,undefined4 param_8,
                 long *param_9,long *param_10)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  
  *(undefined4 *)(param_1 + 4) = param_6;
  *param_1 = param_2;
  param_1[1] = param_3;
  pvVar1 = (void *)((long)param_1 + 0x44);
  param_1[2] = param_4;
  param_1[3] = param_5;
  *(undefined1 *)((long)param_1 + 0x24) = param_7;
  *(undefined4 *)(param_1 + 5) = param_8;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x1e;
  *(undefined4 *)(param_1 + 8) = 8;
  puVar2 = PTR_DAT_04bb6a30 + 0x10;
  *(undefined1 *)((long)param_1 + 0x4b) = 0;
  param_1[6] = puVar2;
  param_1[7] = pvVar1;
  (**(code **)(*param_9 + 0x18))(param_9);
  pvVar7 = (void *)param_9[1];
  if (pvVar1 != pvVar7) {
    (**(code **)(*param_9 + 0x18))(param_9);
    lVar6 = 0;
    do {
      if (*(char *)(param_9[1] + lVar6) == '\0') goto LAB_0203b1b0;
      lVar3 = param_9[1] + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0203b1b0;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0203b1b0;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0203b1b0:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 8) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 8) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  puVar5 = PTR_DAT_04bb3768;
  pvVar1 = (void *)((long)param_1 + 100);
  *(undefined4 *)(param_1 + 0xc) = 8;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  param_1[10] = puVar2;
  param_1[0xb] = pvVar1;
  param_1[6] = puVar5 + 0x10;
  (**(code **)(*param_10 + 0x18))(param_10);
  pvVar7 = (void *)param_10[1];
  if (pvVar1 != pvVar7) {
    (**(code **)(*param_10 + 0x18))(param_10);
    lVar6 = 0;
    do {
      if (*(char *)(param_10[1] + lVar6) == '\0') goto LAB_0203b26c;
      lVar3 = param_10[1] + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0203b26c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0203b26c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0203b26c:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0xc) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0xc) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[10] = puVar5 + 0x10;
  return;
}

