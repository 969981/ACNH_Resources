
void FUN_02fec4d0(undefined8 *param_1,void *param_2,void *param_3,void *param_4,void *param_5)

{
  void *pvVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  long lVar5;
  
  pvVar1 = (void *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x3b) = 0;
  param_1[2] = pvVar1;
  *(undefined4 *)(param_1 + 3) = 0x20;
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  *param_1 = &PTR_LAB_04aefbb0;
  param_1[1] = puVar2;
  if (pvVar1 != param_2) {
    lVar5 = 0;
    do {
      if (*(char *)((long)param_2 + lVar5) == '\0') goto LAB_02fec57c;
      if (*(char *)((long)param_2 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02fec57c;
      }
      if (*(char *)((long)param_2 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02fec57c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02fec57c:
    iVar4 = (int)lVar5;
    if (0x1e < iVar4) {
      iVar4 = 0x1f;
    }
    memcpy(pvVar1,param_2,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  *(undefined4 *)(param_1 + 10) = 0x20;
  puVar3 = PTR_DAT_04bb2028;
  pvVar1 = (void *)((long)param_1 + 0x54);
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  param_1[8] = puVar2;
  param_1[9] = pvVar1;
  puVar2 = puVar3 + 0x10;
  param_1[1] = puVar2;
  if (pvVar1 != param_3) {
    lVar5 = 0;
    do {
      if (*(char *)((long)param_3 + lVar5) == '\0') goto LAB_02fec60c;
      if (*(char *)((long)param_3 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02fec60c;
      }
      if (*(char *)((long)param_3 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02fec60c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02fec60c:
    iVar4 = (int)lVar5;
    if (0x1e < iVar4) {
      iVar4 = 0x1f;
    }
    memcpy(pvVar1,param_3,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[8] = puVar2;
  *(undefined4 *)(param_1 + 0x11) = 0x20;
  pvVar1 = (void *)((long)param_1 + 0x8c);
  *(undefined1 *)((long)param_1 + 0xab) = 0;
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  param_1[0xf] = puVar2;
  param_1[0x10] = pvVar1;
  if (pvVar1 != param_4) {
    lVar5 = 0;
    do {
      if (*(char *)((long)param_4 + lVar5) == '\0') goto LAB_02fec69c;
      if (*(char *)((long)param_4 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02fec69c;
      }
      if (*(char *)((long)param_4 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02fec69c;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02fec69c:
    iVar4 = (int)lVar5;
    if (0x1e < iVar4) {
      iVar4 = 0x1f;
    }
    memcpy(pvVar1,param_4,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  pvVar1 = (void *)((long)param_1 + 0xc4);
  puVar3 = puVar3 + 0x10;
  *(undefined4 *)(param_1 + 0x18) = 0x20;
  param_1[0xf] = puVar3;
  *(undefined1 *)((long)param_1 + 0xe3) = 0;
  param_1[0x16] = puVar2;
  param_1[0x17] = pvVar1;
  if (pvVar1 != param_5) {
    lVar5 = 0;
    do {
      if (*(char *)((long)param_5 + lVar5) == '\0') goto LAB_02fec720;
      if (*(char *)((long)param_5 + lVar5 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_02fec720;
      }
      if (*(char *)((long)param_5 + lVar5 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_02fec720;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_02fec720:
    iVar4 = (int)lVar5;
    if (0x1e < iVar4) {
      iVar4 = 0x1f;
    }
    memcpy(pvVar1,param_5,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[0x16] = puVar3;
  param_1[0x1d] = 0;
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  param_1[0x20] = 0;
  return;
}

