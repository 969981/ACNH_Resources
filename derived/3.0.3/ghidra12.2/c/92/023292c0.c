
long FUN_023292c0(long param_1,long *param_2)

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
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_0232935c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0232935c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0232935c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0232935c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x10) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x60);
  plVar6 = param_2 + 0xb;
  (**(code **)(*plVar6 + 0x18))(plVar6);
  pvVar5 = (void *)param_2[0xc];
  if (pvVar4 != pvVar5) {
    (**(code **)(param_2[0xb] + 0x18))(plVar6);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[0xc] + lVar3) == '\0') goto LAB_023293fc;
      lVar1 = param_2[0xc] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_023293fc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_023293fc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_023293fc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x68) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(short *)(param_1 + 0xb0) = (short)param_2[0x16];
  *(undefined1 *)(param_1 + 0xb2) = *(undefined1 *)((long)param_2 + 0xb2);
  *(undefined1 *)(param_1 + 0xb3) = *(undefined1 *)((long)param_2 + 0xb3);
  *(undefined4 *)(param_1 + 0xb4) = *(undefined4 *)((long)param_2 + 0xb4);
  *(int *)(param_1 + 0xb8) = (int)param_2[0x17];
  *(undefined2 *)(param_1 + 0xbc) = *(undefined2 *)((long)param_2 + 0xbc);
  *(undefined1 *)(param_1 + 0xbe) = *(undefined1 *)((long)param_2 + 0xbe);
  *(undefined1 *)(param_1 + 0xbf) = *(undefined1 *)((long)param_2 + 0xbf);
  *(int *)(param_1 + 0xc0) = (int)param_2[0x18];
  *(undefined1 *)(param_1 + 0xc4) = *(undefined1 *)((long)param_2 + 0xc4);
  *(char *)(param_1 + 200) = (char)param_2[0x19];
  *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)((long)param_2 + 0xcc);
  *(short *)(param_1 + 0xd0) = (short)param_2[0x1a];
  *(undefined1 *)(param_1 + 0xd2) = *(undefined1 *)((long)param_2 + 0xd2);
  *(undefined1 *)(param_1 + 0xd3) = *(undefined1 *)((long)param_2 + 0xd3);
  *(undefined4 *)(param_1 + 0xd4) = *(undefined4 *)((long)param_2 + 0xd4);
  lVar3 = param_2[0x1b];
  *(undefined1 *)(param_1 + 0xdc) = *(undefined1 *)((long)param_2 + 0xdc);
  *(int *)(param_1 + 0xd8) = (int)lVar3;
  return param_1;
}

