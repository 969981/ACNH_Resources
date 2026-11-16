
void FUN_0250c3e0(undefined1 *param_1)

{
  undefined1 *puVar1;
  undefined *puVar2;
  long lVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined1 *puVar8;
  
  puVar2 = PTR_DAT_04bb37e0;
  *param_1 = 0;
  *(undefined4 *)(param_1 + 0x20) = 0x40;
  param_1[99] = 0;
  puVar1 = param_1 + 0x24;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)puVar2;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar2 + 4);
  puVar5 = PTR_PTR_04bb2238;
  puVar2 = PTR_DAT_04bb2f70 + 0x10;
  lVar7 = *(long *)PTR_PTR_04bb2238;
  *(undefined **)(param_1 + 0x10) = puVar2;
  *(undefined1 **)(param_1 + 0x18) = puVar1;
  (**(code **)(lVar7 + 0x18))(puVar5);
  puVar8 = *(undefined1 **)(puVar5 + 8);
  if (puVar1 != puVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar7) == '\0') goto LAB_0250c4bc;
      lVar3 = *(long *)(puVar5 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0250c4bc;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0250c4bc;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0250c4bc:
    iVar4 = (int)lVar7;
    if (*(int *)(param_1 + 0x20) <= (int)lVar7) {
      iVar4 = *(int *)(param_1 + 0x20) + -1;
    }
    memcpy(puVar1,puVar8,(long)iVar4);
    puVar1[iVar4] = 0;
  }
  puVar6 = PTR_DAT_04bb2bc0;
  puVar1 = param_1 + 0x7c;
  *(undefined4 *)(param_1 + 0x78) = 0x40;
  param_1[0xbb] = 0;
  *(undefined **)(param_1 + 0x68) = puVar2;
  *(undefined1 **)(param_1 + 0x70) = puVar1;
  lVar7 = *(long *)puVar5;
  *(undefined **)(param_1 + 0x10) = puVar6 + 0x10;
  (**(code **)(lVar7 + 0x18))(puVar5);
  puVar8 = *(undefined1 **)(puVar5 + 8);
  if (puVar1 != puVar8) {
    (**(code **)(*(long *)puVar5 + 0x18))(puVar5);
    lVar7 = 0;
    do {
      if (*(char *)(*(long *)(puVar5 + 8) + lVar7) == '\0') goto LAB_0250c57c;
      lVar3 = *(long *)(puVar5 + 8) + lVar7;
      if (*(char *)(lVar3 + 1) == '\0') {
        lVar7 = lVar7 + 1;
        goto LAB_0250c57c;
      }
      if (*(char *)(lVar3 + 2) == '\0') {
        lVar7 = lVar7 + 2;
        goto LAB_0250c57c;
      }
      lVar7 = lVar7 + 3;
    } while (lVar7 != 0x80001);
    lVar7 = 0;
LAB_0250c57c:
    iVar4 = (int)lVar7;
    if (*(int *)(param_1 + 0x78) <= (int)lVar7) {
      iVar4 = *(int *)(param_1 + 0x78) + -1;
    }
    memcpy(puVar1,puVar8,(long)iVar4);
    puVar1[iVar4] = 0;
  }
  *(undefined **)(param_1 + 0x68) = puVar6 + 0x10;
  FUN_0257a010(param_1 + 0xc0);
  FUN_0257a010(param_1 + 0x210);
  FUN_0257a010(param_1 + 0x360);
  return;
}

