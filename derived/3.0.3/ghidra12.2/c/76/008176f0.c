
void FUN_008176f0(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  puVar3 = PTR_PTR_04bb2238;
  pvVar5 = *(void **)(param_1 + 0x20);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar6 = *(void **)(puVar3 + 8);
  if (pvVar5 != pvVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_0081778c;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0081778c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0081778c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0081778c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x28) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x28) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0xb8);
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  pvVar6 = *(void **)(puVar3 + 8);
  if (pvVar5 != pvVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_0081782c;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0081782c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0081782c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0081782c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0xc0) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0xc0) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  *(undefined2 *)(param_1 + 0x160) = 0;
  *(undefined1 *)(param_1 + 0x162) = 0;
  *(undefined8 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x118) = 0;
  *(undefined4 *)(param_1 + 0x158) = 0xffffffff;
  return;
}

