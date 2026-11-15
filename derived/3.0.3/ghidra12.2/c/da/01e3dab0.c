
void FUN_01e3dab0(long param_1,long *param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 0x60);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01e3db5c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01e3db5c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01e3db5c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01e3db5c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x68) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xb8);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_01e3dbfc;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01e3dbfc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01e3dbfc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01e3dbfc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xc0) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xc0) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xf0);
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar5 = (void *)param_4[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar3 = 0;
    do {
      if (*(char *)(param_4[1] + lVar3) == '\0') goto LAB_01e3dc9c;
      lVar1 = param_4[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01e3dc9c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01e3dc9c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01e3dc9c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0xf8) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0xf8) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  return;
}

