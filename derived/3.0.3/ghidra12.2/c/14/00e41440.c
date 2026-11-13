
void FUN_00e41440(undefined8 *param_1)

{
  void *pvVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  long lVar6;
  void *pvVar7;
  
  pvVar1 = (void *)((long)param_1 + 0x1c);
  *(undefined1 *)((long)param_1 + 0x23) = 0;
  param_1[2] = pvVar1;
  *(undefined4 *)(param_1 + 3) = 8;
  puVar5 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb6a30 + 0x10;
  *param_1 = 0;
  param_1[1] = puVar2;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  pvVar7 = *(void **)(puVar5 + 8);
  if (pvVar1 != pvVar7) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_00e414fc;
      lVar3 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00e414fc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00e414fc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00e414fc:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 3) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 3) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  puVar2 = PTR_DAT_04bb3768;
  pvVar1 = (void *)((long)param_1 + 0x4c);
  param_1[5] = 0;
  *(undefined1 *)(param_1 + 6) = 0;
  param_1[1] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 9) = 0x20;
  puVar2 = PTR_DAT_04bb2a08;
  *(undefined1 *)((long)param_1 + 0x6b) = 0;
  param_1[7] = puVar2 + 0x10;
  param_1[8] = pvVar1;
  (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
  pvVar7 = *(void **)(puVar5 + 8);
  if (pvVar1 != pvVar7) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar6 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar6) == '\0') goto LAB_00e415cc;
      lVar3 = *(long *)(puVar5 + 8) + lVar6;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_00e415cc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_00e415cc;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_00e415cc:
    iVar4 = (int)lVar6;
    if (*(int *)(param_1 + 9) <= (int)lVar6) {
      iVar4 = *(int *)(param_1 + 9) + -1;
    }
    memcpy(pvVar1,pvVar7,(long)iVar4);
    *(undefined1 *)((long)pvVar1 + (long)iVar4) = 0;
  }
  param_1[7] = PTR_DAT_04bb2028 + 0x10;
  return;
}

