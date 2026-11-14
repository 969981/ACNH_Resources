
void FUN_01bebc30(undefined8 *param_1,undefined8 param_2,long *param_3,long *param_4,
                 undefined8 param_5)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = 0;
  param_1[1] = 0;
  *(undefined1 *)param_1[3] = 0;
  *(undefined1 *)param_1[0xe] = 0;
  if (param_1[0x34] != 0) {
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x1a) = 0;
    (**(code **)(param_1[0x18] + 0x38))(param_1 + 0x18);
    pvVar6 = (void *)param_1[0x34];
    if (pvVar6 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar6);
        }
      }
    }
    param_1[0x34] = 0;
  }
  *param_1 = param_2;
  param_1[1] = param_5;
  pvVar6 = (void *)param_1[3];
  *(undefined2 *)(param_1 + 0x38) = 0x100;
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar6 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_01bebd5c;
      lVar1 = param_3[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01bebd5c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01bebd5c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01bebd5c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 4) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 4) + -1;
    }
    memcpy(pvVar6,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  pvVar6 = (void *)param_1[0xe];
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar5 = (void *)param_4[1];
  if (pvVar6 != pvVar5) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar4 = 0;
    do {
      if (*(char *)(param_4[1] + lVar4) == '\0') goto LAB_01bebdfc;
      lVar1 = param_4[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01bebdfc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01bebdfc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01bebdfc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0xf) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0xf) + -1;
    }
    memcpy(pvVar6,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar6 + (long)iVar2) = 0;
  }
  return;
}

