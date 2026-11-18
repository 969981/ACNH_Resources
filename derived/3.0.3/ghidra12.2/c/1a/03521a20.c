
undefined8 FUN_03521a20(long param_1,undefined4 *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  long *plVar6;
  
  pvVar4 = *(void **)(param_1 + 0x228);
  *(undefined4 *)(param_1 + 0x218) = *param_2;
  *(undefined4 *)(param_1 + 0x21c) = param_2[1];
  plVar6 = (long *)(param_2 + 2);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = *(void **)(param_2 + 4);
  if (pvVar4 != pvVar5) {
    (**(code **)(*(long *)(param_2 + 2) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 4) + lVar3) == '\0') goto LAB_03521acc;
      lVar1 = *(long *)(param_2 + 4) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03521acc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03521acc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03521acc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x230) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x230) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x240) = param_2[10];
  pvVar4 = *(void **)(param_1 + 600);
  *(undefined4 *)(param_1 + 0x244) = param_2[0xb];
  *(undefined1 *)(param_1 + 0x248) = *(undefined1 *)(param_2 + 0xc);
  plVar6 = (long *)(param_2 + 0xe);
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = *(void **)(param_2 + 0x10);
  if (pvVar4 != pvVar5) {
    (**(code **)(*(long *)(param_2 + 0xe) + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x10) + lVar3) == '\0') goto LAB_03521b8c;
      lVar1 = *(long *)(param_2 + 0x10) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03521b8c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03521b8c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03521b8c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x260) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x260) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0x2f8) = 1;
  return 1;
}

