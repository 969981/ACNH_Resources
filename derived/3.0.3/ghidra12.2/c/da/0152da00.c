
void FUN_0152da00(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  
  pvVar4 = *(void **)(param_1 + 0x1300);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0152da9c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0152da9c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0152da9c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0152da9c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x1308) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x1308) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1398);
  plVar6 = param_2 + 0x13;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = (void *)param_2[0x14];
  if (pvVar4 != pvVar5) {
    (**(code **)(param_2[0x13] + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[0x14] + lVar3) == '\0') goto LAB_0152db3c;
      lVar1 = param_2[0x14] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0152db3c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0152db3c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0152db3c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x13a0) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x13a0) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  lVar3 = *(long *)(*(long *)(param_1 + 0x48) + 0x78);
  if (lVar3 == 0) {
    return;
  }
  FUN_0074ed40(lVar3,param_2,0);
  return;
}

