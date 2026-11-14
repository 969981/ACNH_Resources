
void FUN_01635210(long *param_1)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar3 = DAT_05230078;
  (**(code **)(*param_1 + 0x18))();
  pvVar5 = (void *)param_1[1];
  if (pvVar3 != pvVar5) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_016352ac;
      lVar1 = param_1[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_016352ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_016352ac;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_016352ac:
    iVar2 = (int)lVar4;
    if (DAT_05230080 <= (int)lVar4) {
      iVar2 = DAT_05230080 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  pvVar3 = DAT_05230190;
  (**(code **)(param_1[0x23] + 0x18))(param_1 + 0x23);
  pvVar5 = (void *)param_1[0x24];
  if (pvVar3 != pvVar5) {
    (**(code **)(param_1[0x23] + 0x18))(param_1 + 0x23);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[0x24] + lVar4) == '\0') goto LAB_0163535c;
      lVar1 = param_1[0x24] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0163535c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0163535c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0163535c:
    iVar2 = (int)lVar4;
    if (DAT_05230198 <= (int)lVar4) {
      iVar2 = DAT_05230198 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  pvVar3 = DAT_052301e8;
  (**(code **)(param_1[0x2e] + 0x18))(param_1 + 0x2e);
  pvVar5 = (void *)param_1[0x2f];
  if (pvVar3 != pvVar5) {
    (**(code **)(param_1[0x2e] + 0x18))(param_1 + 0x2e);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[0x2f] + lVar4) == '\0') goto LAB_0163540c;
      lVar1 = param_1[0x2f] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0163540c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0163540c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0163540c:
    iVar2 = (int)lVar4;
    if (DAT_052301f0 <= (int)lVar4) {
      iVar2 = DAT_052301f0 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  pvVar3 = DAT_05230240;
  (**(code **)(param_1[0x39] + 0x18))(param_1 + 0x39);
  pvVar5 = (void *)param_1[0x3a];
  if (pvVar3 != pvVar5) {
    (**(code **)(param_1[0x39] + 0x18))(param_1 + 0x39);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[0x3a] + lVar4) == '\0') goto LAB_016354bc;
      lVar1 = param_1[0x3a] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_016354bc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_016354bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_016354bc:
    iVar2 = (int)lVar4;
    if (DAT_05230248 <= (int)lVar4) {
      iVar2 = DAT_05230248 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  pvVar3 = DAT_05230298;
  (**(code **)(param_1[0x44] + 0x18))(param_1 + 0x44);
  pvVar5 = (void *)param_1[0x45];
  if (pvVar3 != pvVar5) {
    (**(code **)(param_1[0x44] + 0x18))(param_1 + 0x44);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[0x45] + lVar4) == '\0') goto LAB_0163556c;
      lVar1 = param_1[0x45] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0163556c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0163556c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0163556c:
    iVar2 = (int)lVar4;
    if (DAT_052302a0 <= (int)lVar4) {
      iVar2 = DAT_052302a0 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  DAT_052302e8 = (int)param_1[0x4f];
  return;
}

