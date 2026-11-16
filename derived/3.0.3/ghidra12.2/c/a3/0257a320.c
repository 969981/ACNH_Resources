
void FUN_0257a320(undefined1 *param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  *param_1 = 0;
  puVar3 = PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)PTR_DAT_04bb37e0;
  *(undefined4 *)(param_1 + 8) = *(undefined4 *)(puVar3 + 4);
  puVar3 = PTR_PTR_04bb2238;
  pvVar5 = *(void **)(param_1 + 0x18);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar6 = *(void **)(puVar3 + 8);
  if (pvVar5 != pvVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_0257a3dc;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0257a3dc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0257a3dc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0257a3dc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x20) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x20) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x70);
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  pvVar6 = *(void **)(puVar3 + 8);
  if (pvVar5 != pvVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_0257a47c;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0257a47c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0257a47c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0257a47c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x78) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x78) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  FUN_0257a130(param_1 + 0xc0);
  FUN_0257a130(param_1 + 0x210);
  FUN_0257a130(param_1 + 0x360);
  return;
}

