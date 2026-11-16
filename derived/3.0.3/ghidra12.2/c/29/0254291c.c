
undefined8 FUN_0254291c(byte *param_1,long *param_2,long *param_3)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  
  if (7 < *param_1) {
    return 0;
  }
  uVar4 = FUN_02582d8c(param_1,1);
  puVar3 = PTR_DAT_04bb4fb8;
  if ((((7 < uVar4) ||
       (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')) ||
      (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar4 * 0x13f0 + 0x13d6) == '\0')) ||
     ((uVar4 = FUN_02582d8c(param_1,1), 7 < uVar4 ||
      (*(char *)(*(long *)puVar3 + (ulong)uVar4 * 0x13f0 + 0x13d4) == '\0')))) {
    return 0;
  }
  lVar5 = *(long *)puVar3 + (ulong)uVar4 * 0x13f0;
  *(undefined1 *)(lVar5 + 0x18) = 1;
  pvVar7 = *(void **)(lVar5 + 0x30);
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar8 = (void *)param_2[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar6 = 0;
    do {
      if (*(char *)(param_2[1] + lVar6) == '\0') goto LAB_02542a6c;
      lVar1 = param_2[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02542a6c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02542a6c;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02542a6c:
    iVar2 = (int)lVar6;
    if (*(int *)(lVar5 + 0x38) <= (int)lVar6) {
      iVar2 = *(int *)(lVar5 + 0x38) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar2);
    *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
  }
  pvVar7 = *(void **)(lVar5 + 0x88);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar8 = (void *)param_3[1];
  if (pvVar7 != pvVar8) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar6 = 0;
    do {
      if (*(char *)(param_3[1] + lVar6) == '\0') goto LAB_02542b08;
      lVar1 = param_3[1] + lVar6;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar6 = lVar6 + 1;
        goto LAB_02542b08;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar6 = lVar6 + 2;
        goto LAB_02542b08;
      }
      lVar6 = lVar6 + 3;
    } while (lVar6 != 0x80001);
    lVar6 = 0;
LAB_02542b08:
    iVar2 = (int)lVar6;
    if (*(int *)(lVar5 + 0x90) <= (int)lVar6) {
      iVar2 = *(int *)(lVar5 + 0x90) + -1;
    }
    memcpy(pvVar7,pvVar8,(long)iVar2);
    *(undefined1 *)((long)pvVar7 + (long)iVar2) = 0;
  }
  return 1;
}

