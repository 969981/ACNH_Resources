
void FUN_02ef79f0(long param_1,long *param_2,long *param_3,byte *param_4,byte param_5)

{
  long lVar1;
  int iVar2;
  long lVar3;
  byte bVar4;
  void *pvVar5;
  void *pvVar6;
  
  pvVar5 = *(void **)(param_1 + 0x388);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar6 = (void *)param_2[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_02ef7a9c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02ef7a9c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_02ef7a9c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02ef7a9c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x390) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x390) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x3e0);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar6 = (void *)param_3[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar3 = 0;
    do {
      if (*(char *)(param_3[1] + lVar3) == '\0') goto LAB_02ef7b3c;
      lVar1 = param_3[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_02ef7b3c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_02ef7b3c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_02ef7b3c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 1000) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 1000) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  bVar4 = *param_4;
  if (7 < bVar4) {
    bVar4 = 0xff;
  }
  *(byte *)(param_1 + 0x430) = bVar4;
  *(byte *)(param_1 + 0x431) = param_5 & 1;
  return;
}

