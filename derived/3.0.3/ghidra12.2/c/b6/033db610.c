
void FUN_033db610(long param_1,long *param_2,long *param_3,undefined4 param_4,uint param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = *(void **)(param_1 + 0x228);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_033db6bc;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_033db6bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_033db6bc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_033db6bc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x230) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x230) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x280);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar6 = (void *)param_3[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_033db75c;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_033db75c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_033db75c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_033db75c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x288) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x288) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  bVar4 = 2;
  if ((param_5 & 1) == 0) {
    bVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0x32c) = param_4;
  *(byte *)(param_1 + 0x2d0) = *(byte *)(param_1 + 0x2d0) & 0xfd | bVar4;
  FUN_0345a290();
  return;
}

