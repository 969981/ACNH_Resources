
void FUN_00751ec0(long *param_1,long *param_2,long *param_3,long *param_4)

{
  undefined *puVar1;
  void *pvVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  void *pvVar6;
  
  (**(code **)(*param_3 + 0x18))(param_3);
  lVar5 = param_3[1];
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined4 *)(param_1 + 4) = 0;
  puVar1 = PTR_DAT_04bb60a0 + 0x10;
  param_1[5] = 0;
  *param_1 = (long)puVar1;
  param_1[1] = lVar5;
  if (param_4 != (long *)0x0) {
    (**(code **)(*param_4 + 0x140))(param_4,param_1);
  }
  puVar1 = PTR_DAT_04bb2f70;
  *param_1 = (long)&PTR_LAB_04905560;
  pvVar2 = (void *)((long)param_1 + 0x44);
  param_1[7] = (long)pvVar2;
  *(undefined4 *)(param_1 + 8) = 0x40;
  *(undefined1 *)((long)param_1 + 0x83) = 0;
  param_1[6] = (long)(puVar1 + 0x10);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar6 = (void *)param_3[1];
  if (pvVar2 != pvVar6) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar5 = 0;
    do {
      if (*(char *)(param_3[1] + lVar5) == '\0') goto LAB_00751fdc;
      lVar3 = param_3[1] + lVar5;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_00751fdc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_00751fdc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00751fdc:
    iVar4 = (int)lVar5;
    if ((int)param_1[8] <= (int)lVar5) {
      iVar4 = (int)param_1[8] + -1;
    }
    memcpy(pvVar2,pvVar6,(long)iVar4);
    *(undefined1 *)((long)pvVar2 + (long)iVar4) = 0;
  }
  pvVar2 = (void *)((long)param_1 + 0x9c);
  param_1[6] = (long)(PTR_DAT_04bb2bc0 + 0x10);
  *(undefined4 *)(param_1 + 0x13) = 0x20;
  puVar1 = PTR_DAT_04bb2a08;
  *(undefined1 *)((long)param_1 + 0xbb) = 0;
  param_1[0x11] = (long)(puVar1 + 0x10);
  param_1[0x12] = (long)pvVar2;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar2 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_007520ac;
      lVar3 = param_2[1] + lVar5;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_007520ac;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_007520ac;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_007520ac:
    iVar4 = (int)lVar5;
    if ((int)param_1[0x13] <= (int)lVar5) {
      iVar4 = (int)param_1[0x13] + -1;
    }
    memcpy(pvVar2,pvVar6,(long)iVar4);
    *(undefined1 *)((long)pvVar2 + (long)iVar4) = 0;
  }
  param_1[0x11] = (long)(PTR_DAT_04bb2028 + 0x10);
  (**(code **)(param_1[6] + 0x18))(param_1 + 6);
  param_1[1] = param_1[7];
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x240000;
  return;
}

