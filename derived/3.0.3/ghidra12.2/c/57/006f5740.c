
bool FUN_006f5740(long *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  undefined *local_78;
  long lStack_70;
  int local_68;
  long local_60;
  int local_58;
  
  (**(code **)(*param_1 + 0x38))();
  (**(code **)(*param_4 + 0x18))(param_4);
  FUN_03b0d9a0(&local_60,param_2,param_4[1]);
  if (local_60 != 0) {
    local_68 = local_58 + 1;
    local_78 = PTR_DAT_04bb2de8 + 0x10;
    lStack_70 = local_60;
    (**(code **)(*param_1 + 0x28))(param_1,&local_78);
    (**(code **)(*param_1 + 0x30))(param_1,&local_78);
  }
  pvVar4 = (void *)param_1[7];
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_006f5860;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006f5860;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006f5860;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006f5860:
    iVar2 = (int)lVar3;
    if ((int)param_1[8] <= (int)lVar3) {
      iVar2 = (int)param_1[8] + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = (void *)param_1[0x12];
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar5 = (void *)param_4[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar3 = 0;
    do {
      if (*(char *)(param_4[1] + lVar3) == '\0') goto LAB_006f58fc;
      lVar1 = param_4[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006f58fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006f58fc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006f58fc:
    iVar2 = (int)lVar3;
    if ((int)param_1[0x13] <= (int)lVar3) {
      iVar2 = (int)param_1[0x13] + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  return local_60 != 0;
}

