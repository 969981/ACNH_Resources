
undefined8 * FUN_03837520(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  long *plVar7;
  
  uVar3 = param_2[1];
  pvVar5 = (void *)param_1[3];
  *param_1 = *param_2;
  param_1[1] = uVar3;
  plVar7 = param_2 + 2;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[3];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[2] + 0x18))(plVar7);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[3] + lVar4) == '\0') goto LAB_038375cc;
      lVar1 = param_2[3] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038375cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038375cc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038375cc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 4) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 4) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = (void *)param_1[0x16];
  plVar7 = param_2 + 0x15;
  (**(code **)(*plVar7 + 0x18))(plVar7);
  pvVar6 = (void *)param_2[0x16];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[0x15] + 0x18))(plVar7);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[0x16] + lVar4) == '\0') goto LAB_0383766c;
      lVar1 = param_2[0x16] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0383766c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0383766c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0383766c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x17) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x17) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = (void *)param_1[0x29];
  (**(code **)(param_2[0x28] + 0x18))(param_2 + 0x28);
  pvVar6 = (void *)param_2[0x29];
  if (pvVar5 != pvVar6) {
    (**(code **)(param_2[0x28] + 0x18))(param_2 + 0x28);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[0x29] + lVar4) == '\0') goto LAB_0383770c;
      lVar1 = param_2[0x29] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0383770c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0383770c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0383770c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x2a) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x2a) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  return param_1;
}

