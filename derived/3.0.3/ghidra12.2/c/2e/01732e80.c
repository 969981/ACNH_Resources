
void FUN_01732e80(long param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  pvVar4 = *(void **)(param_1 + 8);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01732f1c;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01732f1c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01732f1c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01732f1c:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x10) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(int *)(param_1 + 0x58) = (int)param_2[0xb];
  pvVar4 = *(void **)(param_1 + 0x88);
  *(undefined4 *)(param_1 + 0x5c) = *(undefined4 *)((long)param_2 + 0x5c);
  *(int *)(param_1 + 0x60) = (int)param_2[0xc];
  *(undefined4 *)(param_1 + 100) = *(undefined4 *)((long)param_2 + 100);
  *(int *)(param_1 + 0x68) = (int)param_2[0xd];
  *(undefined4 *)(param_1 + 0x6c) = *(undefined4 *)((long)param_2 + 0x6c);
  *(int *)(param_1 + 0x70) = (int)param_2[0xe];
  *(long *)(param_1 + 0x78) = param_2[0xf];
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_01732ffc;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01732ffc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01732ffc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01732ffc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x90) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x90) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(int *)(param_1 + 0xd8) = (int)param_2[0xb];
  pvVar4 = *(void **)(param_1 + 0x108);
  *(undefined4 *)(param_1 + 0xdc) = *(undefined4 *)((long)param_2 + 0x5c);
  *(int *)(param_1 + 0xe0) = (int)param_2[0xc];
  *(undefined4 *)(param_1 + 0xe4) = *(undefined4 *)((long)param_2 + 100);
  *(int *)(param_1 + 0xe8) = (int)param_2[0xd];
  *(undefined4 *)(param_1 + 0xec) = *(undefined4 *)((long)param_2 + 0x6c);
  *(int *)(param_1 + 0xf0) = (int)param_2[0xe];
  *(long *)(param_1 + 0xf8) = param_2[0xf];
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_017330dc;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_017330dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_017330dc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_017330dc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 0x110) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 0x110) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(int *)(param_1 + 0x158) = (int)param_2[0xb];
  pvVar4 = *(void **)(param_1 + 0x188);
  *(undefined4 *)(param_1 + 0x15c) = *(undefined4 *)((long)param_2 + 0x5c);
  *(int *)(param_1 + 0x160) = (int)param_2[0xc];
  *(undefined4 *)(param_1 + 0x164) = *(undefined4 *)((long)param_2 + 100);
  *(int *)(param_1 + 0x168) = (int)param_2[0xd];
  *(undefined4 *)(param_1 + 0x16c) = *(undefined4 *)((long)param_2 + 0x6c);
  *(int *)(param_1 + 0x170) = (int)param_2[0xe];
  *(long *)(param_1 + 0x178) = param_2[0xf];
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar4 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar3 = 0;
    do {
      if (*(char *)(param_2[1] + lVar3) == '\0') goto LAB_017331bc;
      lVar1 = param_2[1] + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_017331bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_017331bc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_017331bc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 400) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 400) + -1;
    }
    memcpy(pvVar4,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar4 + (long)iVar2) = 0;
  }
  *(int *)(param_1 + 0x1d8) = (int)param_2[0xb];
  *(undefined4 *)(param_1 + 0x1dc) = *(undefined4 *)((long)param_2 + 0x5c);
  *(int *)(param_1 + 0x1e0) = (int)param_2[0xc];
  *(undefined4 *)(param_1 + 0x1e4) = *(undefined4 *)((long)param_2 + 100);
  *(int *)(param_1 + 0x1e8) = (int)param_2[0xd];
  *(undefined4 *)(param_1 + 0x1ec) = *(undefined4 *)((long)param_2 + 0x6c);
  *(int *)(param_1 + 0x1f0) = (int)param_2[0xe];
  *(long *)(param_1 + 0x1f8) = param_2[0xf];
  return;
}

