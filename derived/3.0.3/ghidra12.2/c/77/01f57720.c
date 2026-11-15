
void FUN_01f57720(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 0x8208);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01f577c0;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01f577c0;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01f577c0;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01f577c0:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x8210) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x8210) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x8260);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_01f5785c;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01f5785c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01f5785c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01f5785c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x8268) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x8268) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  return;
}

