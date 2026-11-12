
uint FUN_006f50a0(long *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  uint uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  undefined *local_70;
  undefined2 *local_68;
  int local_60;
  undefined4 local_58;
  undefined1 local_54;
  
  (**(code **)(*param_1 + 0x38))();
  local_68 = (undefined2 *)param_1[1];
  local_60 = (int)param_1[2];
  local_70 = PTR_DAT_04bb4ca0 + 0x10;
  local_68[local_60 - 1] = 0;
  local_54 = 0;
  *local_68 = 0;
  local_58 = 0;
  uVar3 = FUN_03d4cd40(&local_70,param_2,param_3);
  pvVar5 = (void *)param_1[7];
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_006f519c;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_006f519c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_006f519c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_006f519c:
    iVar2 = (int)lVar4;
    if ((int)param_1[8] <= (int)lVar4) {
      iVar2 = (int)param_1[8] + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = (void *)param_1[0x12];
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar6 = (void *)param_3[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_006f523c;
      lVar1 = param_3[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_006f523c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_006f523c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_006f523c:
    iVar2 = (int)lVar4;
    if ((int)param_1[0x13] <= (int)lVar4) {
      iVar2 = (int)param_1[0x13] + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  return uVar3 & 1;
}

