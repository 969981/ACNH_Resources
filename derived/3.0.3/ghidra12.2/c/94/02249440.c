
void FUN_02249440(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  
  FUN_006f94c0();
  puVar1 = PTR_DAT_04bb2f70;
  *param_1 = &PTR_LAB_04a79940;
  *(undefined4 *)(param_1 + 0x51) = 0x40;
  pvVar7 = (void *)((long)param_1 + 0x28c);
  param_1[0x4f] = puVar1 + 0x10;
  param_1[0x50] = pvVar7;
  puVar5 = PTR_PTR_04bb2238;
  *(undefined1 *)((long)param_1 + 0x2cb) = 0;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  pvVar8 = *(void **)(puVar5 + 8);
  if (pvVar7 != pvVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_0224951c;
      lVar3 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0224951c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0224951c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0224951c:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0x51) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0x51) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar4);
    *(undefined1 *)((long)pvVar7 + (long)iVar4) = 0;
  }
  puVar2 = PTR_DAT_04bb2bc0;
  lVar6 = *(long *)puVar5;
  *(undefined4 *)(param_1 + 0x5c) = 0x40;
  *(undefined1 *)((long)param_1 + 0x323) = 0;
  pvVar7 = (void *)((long)param_1 + 0x2e4);
  param_1[0x5a] = puVar1 + 0x10;
  param_1[0x5b] = pvVar7;
  puVar1 = puVar2 + 0x10;
  param_1[0x4f] = puVar1;
  (**(code **)(lVar6 + 0x18))(puVar5);
  pvVar8 = *(void **)(puVar5 + 8);
  if (pvVar7 != pvVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_022495dc;
      lVar3 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_022495dc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_022495dc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_022495dc:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0x5c) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0x5c) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar4);
    *(undefined1 *)((long)pvVar7 + (long)iVar4) = 0;
  }
  param_1[0x5a] = puVar1;
  puVar1 = PTR_DAT_04bb2f70;
  *(undefined4 *)(param_1 + 0x67) = 0x40;
  *(undefined1 *)((long)param_1 + 0x37b) = 0;
  lVar6 = *(long *)puVar5;
  pvVar7 = (void *)((long)param_1 + 0x33c);
  param_1[0x65] = puVar1 + 0x10;
  param_1[0x66] = pvVar7;
  (**(code **)(lVar6 + 0x18))(puVar5);
  pvVar8 = *(void **)(puVar5 + 8);
  if (pvVar7 != pvVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_0224969c;
      lVar3 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_0224969c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_0224969c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_0224969c:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0x67) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0x67) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar4);
    *(undefined1 *)((long)pvVar7 + (long)iVar4) = 0;
  }
  lVar6 = *(long *)puVar5;
  puVar2 = puVar2 + 0x10;
  pvVar7 = (void *)((long)param_1 + 0x394);
  param_1[0x70] = puVar1 + 0x10;
  param_1[0x65] = puVar2;
  param_1[0x71] = pvVar7;
  *(undefined4 *)(param_1 + 0x72) = 0x40;
  *(undefined1 *)((long)param_1 + 0x3d3) = 0;
  (**(code **)(lVar6 + 0x18))(puVar5);
  pvVar8 = *(void **)(puVar5 + 8);
  if (pvVar7 != pvVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_02249750;
      lVar3 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02249750;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02249750;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02249750:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 0x72) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 0x72) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar4);
    *(undefined1 *)((long)pvVar7 + (long)iVar4) = 0;
  }
  param_1[0x70] = puVar2;
  param_1[0x7b] = 0;
  param_1[0x7c] = 0;
  param_1[0x7d] = 0;
  param_1[0x7e] = 0;
  param_1[0x7f] = 0;
  param_1[0x81] = 0;
  param_1[0x82] = 0;
  *(undefined4 *)((long)param_1 + 0x3ff) = 0;
  return;
}

