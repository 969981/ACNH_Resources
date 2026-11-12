
long FUN_006e32e0(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  
  pvVar4 = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_006e337c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006e337c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006e337c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006e337c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x10) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x80);
  plVar6 = param_2 + 0xf;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = (void *)param_2[0x10];
  if (pvVar4 != pvVar5) {
    (**(code **)(param_2[0xf] + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[0x10] + lVar3) == '\0') goto LAB_006e341c;
      lVar1 = param_2[0x10] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006e341c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006e341c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006e341c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x88) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x88) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0xf8);
  plVar6 = param_2 + 0x1e;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = (void *)param_2[0x1f];
  if (pvVar4 != pvVar5) {
    (**(code **)(param_2[0x1e] + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[0x1f] + lVar3) == '\0') goto LAB_006e34bc;
      lVar1 = param_2[0x1f] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_006e34bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_006e34bc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_006e34bc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x100) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x100) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  return param_1;
}

