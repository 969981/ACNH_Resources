
void FUN_033db7c0(long param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 0x228);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_033db85c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_033db85c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_033db85c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_033db85c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x230) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x230) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x280);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar5 = (void *)param_3[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_033db8fc;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_033db8fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_033db8fc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_033db8fc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x288) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  FUN_033dd564(param_1,param_1 + 0x220,param_1 + 0x278);
  if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
    *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = 3;
  }
  return;
}

