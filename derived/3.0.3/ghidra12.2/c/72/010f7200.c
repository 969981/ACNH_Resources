
void FUN_010f7200(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined1 *)((long)param_1 + 0x34) = 0;
  *(undefined4 *)(param_1 + 6) = 0x40;
  param_1[2] = 0;
  param_1[3] = 0;
  pvVar4 = (void *)((long)param_1 + 0x8c);
  *(undefined4 *)(param_1 + 0x11) = 0x40;
  param_1[4] = &PTR_LAB_048fb9f8;
  param_1[5] = (undefined1 *)((long)param_1 + 0x34);
  *param_1 = &PTR_LAB_0497aa18;
  param_1[1] = 0;
  *(undefined1 *)((long)param_1 + 0xcb) = 0;
  param_1[0xf] = &PTR_LAB_048fd2d8;
  param_1[0x10] = pvVar4;
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar5 = (void *)param_4[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar3 = 0;
    do {
      if (*(char *)(param_4[1] + lVar3) == '\0') goto LAB_010f72f0;
      lVar1 = param_4[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_010f72f0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_010f72f0;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_010f72f0:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x11) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x11) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  param_1[0xf] = &PTR_LAB_048fb9f8;
  param_1[0x1a] = param_2;
  pvVar4 = (void *)param_1[5];
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_010f739c;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_010f739c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_010f739c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_010f739c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 6) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 6) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  return;
}

