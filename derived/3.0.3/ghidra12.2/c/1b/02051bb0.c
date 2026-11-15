
void FUN_02051bb0(long param_1,int param_2,long *param_3,long *param_4,long *param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  *(undefined1 *)(param_1 + 0x14d) = 0;
  pvVar4 = *(void **)(param_1 + 0x60);
  *(int *)(param_1 + 0x50) = param_2;
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_02051c60;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02051c60;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_02051c60;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02051c60:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x68) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xb8);
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar5 = (void *)param_4[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar3 = 0;
    do {
      if (*(char *)(param_4[1] + lVar3) == '\0') goto LAB_02051cfc;
      lVar1 = param_4[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02051cfc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_02051cfc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02051cfc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xc0) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xc0) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xf0);
  (**(code **)(*param_5 + 0x18))(param_5);
  pvVar5 = (void *)param_5[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_5 + 0x18))(param_5);
    lVar3 = 0;
    do {
      if (*(char *)(param_5[1] + lVar3) == '\0') goto LAB_02051d9c;
      lVar1 = param_5[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02051d9c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_02051d9c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02051d9c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xf8) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xf8) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(bool *)(param_1 + 0x14e) = param_2 != 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x4b;
  return;
}

