
void FUN_03d70660(long *param_1,long *param_2,long *param_3)

{
  void *pvVar1;
  long lVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  void *pvVar6;
  long *plVar7;
  
  *param_1 = (long)(PTR_DAT_04bb3050 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar5 = param_2[1];
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[1] = lVar5;
  lVar5 = param_2[6];
  *param_1 = (long)&DAT_04b7e798;
  param_1[5] = 0;
  *(int *)(param_1 + 4) = (int)lVar5;
  if (param_3 != (long *)0x0) {
    (**(code **)(*param_3 + 0x140))(param_3,param_1);
  }
  *(undefined1 *)((long)param_1 + 99) = 0;
  *param_1 = (long)&PTR_LAB_04b90fa0;
  pvVar1 = (void *)((long)param_1 + 0x44);
  *(undefined4 *)(param_1 + 8) = 0x20;
  param_1[6] = (long)(PTR_DAT_04bb2a08 + 0x10);
  param_1[7] = (long)pvVar1;
  plVar7 = param_2 + 7;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[8];
  if (pvVar1 != pvVar6) {
    (**(code **)(param_2[7] + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[8] + lVar5) == '\0') goto LAB_03d7078c;
      lVar2 = param_2[8] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d7078c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d7078c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d7078c:
    iVar3 = (int)lVar5;
    if ((int)param_1[8] <= (int)lVar5) {
      iVar3 = (int)param_1[8] + -1;
    }
    memcpy(pvVar1,pvVar6,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  puVar4 = PTR_DAT_04bb2028;
  pvVar1 = (void *)((long)param_1 + 0x7c);
  *(undefined1 *)((long)param_1 + 0xfb) = 0;
  param_1[6] = (long)(puVar4 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0x80;
  param_1[0xd] = (long)&PTR_LAB_048fcff0;
  param_1[0xe] = (long)pvVar1;
  plVar7 = param_2 + 0xe;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[0xf];
  if (pvVar1 != pvVar6) {
    (**(code **)(param_2[0xe] + 0x18))(plVar7);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[0xf] + lVar5) == '\0') goto LAB_03d7085c;
      lVar2 = param_2[0xf] + lVar5;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_03d7085c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_03d7085c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_03d7085c:
    iVar3 = (int)lVar5;
    if ((int)param_1[0xf] <= (int)lVar5) {
      iVar3 = (int)param_1[0xf] + -1;
    }
    memcpy(pvVar1,pvVar6,(long)iVar3);
    *(undefined1 *)((long)pvVar1 + (long)iVar3) = 0;
  }
  param_1[0xd] = (long)&DAT_048fc708;
  return;
}

