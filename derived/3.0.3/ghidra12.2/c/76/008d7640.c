
void FUN_008d7640(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined4 *puVar8;
  
  *param_1 = 0;
  puVar2 = PTR_DAT_04bb3238;
  param_1[6] = 0x20;
  *(undefined1 *)((long)param_1 + 0x3b) = 0;
  puVar1 = param_1 + 7;
  param_1[1] = *(undefined4 *)puVar2;
  puVar6 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2a08 + 0x10;
  lVar7 = *(long *)PTR_PTR_04bb2238;
  *(undefined **)(param_1 + 2) = puVar2;
  *(undefined4 **)(param_1 + 4) = puVar1;
  (**(code **)(lVar7 + 0x18))(puVar6);
  puVar8 = *(undefined4 **)(puVar6 + 8);
  if (puVar1 != puVar8) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar7) == '\0') goto LAB_008d7710;
      lVar3 = *(long *)(puVar6 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_008d7710;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_008d7710;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_008d7710:
    iVar4 = (int)lVar7;
    if ((int)param_1[6] <= (int)lVar7) {
      iVar4 = param_1[6] + -1;
    }
    memcpy(puVar1,puVar8,(long)iVar4);
    *(undefined1 *)((long)puVar1 + (long)iVar4) = 0;
  }
  puVar5 = PTR_DAT_04bb2028;
  puVar1 = param_1 + 0x15;
  param_1[0x14] = 0x20;
  *(undefined1 *)((long)param_1 + 0x73) = 0;
  *(undefined **)(param_1 + 0x10) = puVar2;
  *(undefined4 **)(param_1 + 0x12) = puVar1;
  lVar7 = *(long *)puVar6;
  *(undefined **)(param_1 + 2) = puVar5 + 0x10;
  (**(code **)(lVar7 + 0x18))(puVar6);
  puVar8 = *(undefined4 **)(puVar6 + 8);
  if (puVar1 != puVar8) {
    (**(code **)(*(long *)puVar6 + 0x18))(puVar6);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar6 + 8) + lVar7) == '\0') goto LAB_008d77cc;
      lVar3 = *(long *)(puVar6 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_008d77cc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_008d77cc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_008d77cc:
    iVar4 = (int)lVar7;
    if ((int)param_1[0x14] <= (int)lVar7) {
      iVar4 = param_1[0x14] + -1;
    }
    memcpy(puVar1,puVar8,(long)iVar4);
    *(undefined1 *)((long)puVar1 + (long)iVar4) = 0;
  }
  *(undefined **)(param_1 + 0x10) = puVar5 + 0x10;
  *(undefined1 *)(param_1 + 0x1e) = 0;
  return;
}

