
void FUN_0086f510(undefined8 *param_1)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  
  FUN_0086a400();
  pvVar5 = (void *)param_1[2];
  *param_1 = &PTR_LAB_0491da50;
  (**(code **)(DAT_04ce7f20 + 0x18))(&DAT_04ce7f20);
  pvVar2 = DAT_04ce7f28;
  if (pvVar5 != DAT_04ce7f28) {
    (**(code **)(DAT_04ce7f20 + 0x18))(&DAT_04ce7f20);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f28 + lVar4) == '\0') goto LAB_0086f5bc;
      if (*(char *)((long)DAT_04ce7f28 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f5bc;
      }
      if (*(char *)((long)DAT_04ce7f28 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f5bc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f5bc:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 3) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0xd];
  (**(code **)(DAT_04ce7f70 + 0x18))(&DAT_04ce7f70);
  pvVar2 = DAT_04ce7f78;
  if (pvVar5 != DAT_04ce7f78) {
    (**(code **)(DAT_04ce7f70 + 0x18))(&DAT_04ce7f70);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f78 + lVar4) == '\0') goto LAB_0086f660;
      if (*(char *)((long)DAT_04ce7f78 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f660;
      }
      if (*(char *)((long)DAT_04ce7f78 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f660;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f660:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0xe) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0xe) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x18];
  (**(code **)(DAT_04ce7f30 + 0x18))(&DAT_04ce7f30);
  pvVar2 = DAT_04ce7f38;
  if (pvVar5 != DAT_04ce7f38) {
    (**(code **)(DAT_04ce7f30 + 0x18))(&DAT_04ce7f30);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f38 + lVar4) == '\0') goto LAB_0086f70c;
      if (*(char *)((long)DAT_04ce7f38 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f70c;
      }
      if (*(char *)((long)DAT_04ce7f38 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f70c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f70c:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x19) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x19) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x23];
  (**(code **)(DAT_04ce7f40 + 0x18))(&DAT_04ce7f40);
  pvVar2 = DAT_04ce7f48;
  if (pvVar5 != DAT_04ce7f48) {
    (**(code **)(DAT_04ce7f40 + 0x18))(&DAT_04ce7f40);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f48 + lVar4) == '\0') goto LAB_0086f7b0;
      if (*(char *)((long)DAT_04ce7f48 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f7b0;
      }
      if (*(char *)((long)DAT_04ce7f48 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f7b0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f7b0:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x24) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x24) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x2e];
  (**(code **)(DAT_04ce7f50 + 0x18))(&DAT_04ce7f50);
  pvVar2 = DAT_04ce7f58;
  if (pvVar5 != DAT_04ce7f58) {
    (**(code **)(DAT_04ce7f50 + 0x18))(&DAT_04ce7f50);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f58 + lVar4) == '\0') goto LAB_0086f85c;
      if (*(char *)((long)DAT_04ce7f58 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f85c;
      }
      if (*(char *)((long)DAT_04ce7f58 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f85c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f85c:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x2f) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x2f) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x4f];
  (**(code **)(DAT_04ce7f80 + 0x18))(&DAT_04ce7f80);
  pvVar2 = DAT_04ce7f88;
  if (pvVar5 != DAT_04ce7f88) {
    (**(code **)(DAT_04ce7f80 + 0x18))(&DAT_04ce7f80);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f88 + lVar4) == '\0') goto LAB_0086f900;
      if (*(char *)((long)DAT_04ce7f88 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f900;
      }
      if (*(char *)((long)DAT_04ce7f88 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f900;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f900:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x50) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x50) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x5a];
  (**(code **)(DAT_04ce7f90 + 0x18))(&DAT_04ce7f90);
  pvVar2 = DAT_04ce7f98;
  if (pvVar5 != DAT_04ce7f98) {
    (**(code **)(DAT_04ce7f90 + 0x18))(&DAT_04ce7f90);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f98 + lVar4) == '\0') goto LAB_0086f9ac;
      if (*(char *)((long)DAT_04ce7f98 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086f9ac;
      }
      if (*(char *)((long)DAT_04ce7f98 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086f9ac;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086f9ac:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x5b) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x5b) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x65];
  (**(code **)(DAT_04ce7fa0 + 0x18))(&DAT_04ce7fa0);
  pvVar2 = DAT_04ce7fa8;
  if (pvVar5 != DAT_04ce7fa8) {
    (**(code **)(DAT_04ce7fa0 + 0x18))(&DAT_04ce7fa0);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7fa8 + lVar4) == '\0') goto LAB_0086fa50;
      if (*(char *)((long)DAT_04ce7fa8 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086fa50;
      }
      if (*(char *)((long)DAT_04ce7fa8 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086fa50;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086fa50:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x66) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x66) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x70];
  (**(code **)(DAT_04ce7fb0 + 0x18))(&DAT_04ce7fb0);
  pvVar2 = DAT_04ce7fb8;
  if (pvVar5 != DAT_04ce7fb8) {
    (**(code **)(DAT_04ce7fb0 + 0x18))(&DAT_04ce7fb0);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7fb8 + lVar4) == '\0') goto LAB_0086fafc;
      if (*(char *)((long)DAT_04ce7fb8 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086fafc;
      }
      if (*(char *)((long)DAT_04ce7fb8 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086fafc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086fafc:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x71) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x71) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x44];
  (**(code **)(DAT_04ce7f60 + 0x18))(&DAT_04ce7f60);
  pvVar2 = DAT_04ce7f68;
  if (pvVar5 != DAT_04ce7f68) {
    (**(code **)(DAT_04ce7f60 + 0x18))(&DAT_04ce7f60);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7f68 + lVar4) == '\0') goto LAB_0086fba0;
      if (*(char *)((long)DAT_04ce7f68 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086fba0;
      }
      if (*(char *)((long)DAT_04ce7f68 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086fba0;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086fba0:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x45) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x45) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  pvVar5 = (void *)param_1[0x7b];
  (**(code **)(DAT_04ce7fc0 + 0x18))(&DAT_04ce7fc0);
  pvVar2 = DAT_04ce7fc8;
  if (pvVar5 != DAT_04ce7fc8) {
    (**(code **)(DAT_04ce7fc0 + 0x18))(&DAT_04ce7fc0);
    lVar4 = 0;
    do {
      if (*(char *)((long)DAT_04ce7fc8 + lVar4) == '\0') goto LAB_0086fc4c;
      if (*(char *)((long)DAT_04ce7fc8 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0086fc4c;
      }
      if (*(char *)((long)DAT_04ce7fc8 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0086fc4c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0086fc4c:
    iVar1 = (int)lVar4;
    if (*(int *)(param_1 + 0x7c) <= (int)lVar4) {
      iVar1 = *(int *)(param_1 + 0x7c) + -1;
    }
    memcpy(pvVar5,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar5 + (long)iVar1) = 0;
  }
  iVar3 = FUN_0086db40(1);
  lVar4 = param_1[0x86];
  iVar1 = 0;
  if (iVar3 != -1) {
    iVar1 = iVar3;
  }
  *(undefined4 *)((long)param_1 + 0x42c) = 0;
  *(int *)(param_1 + 0x85) = iVar1;
  *(undefined ***)(lVar4 + 0x40) = &PTR_LAB_0491dab8;
  *(undefined8 **)(lVar4 + 0x48) = param_1;
  *(undefined1 **)(lVar4 + 0x50) = &LAB_0086ebc8;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  lVar4 = param_1[0x87];
  *(undefined ***)(lVar4 + 0x40) = &PTR_LAB_0491dae0;
  *(undefined8 **)(lVar4 + 0x48) = param_1;
  *(undefined1 **)(lVar4 + 0x50) = &LAB_0086ebd8;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  lVar4 = param_1[0x88];
  *(undefined ***)(lVar4 + 0x40) = &PTR_LAB_0491db08;
  *(undefined8 **)(lVar4 + 0x48) = param_1;
  *(undefined1 **)(lVar4 + 0x50) = &LAB_0086ebec;
  *(undefined8 *)(lVar4 + 0x58) = 0;
  return;
}

