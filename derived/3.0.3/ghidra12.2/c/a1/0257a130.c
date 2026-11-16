
void FUN_0257a130(long param_1)

{
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
  char *__dest;
  void *pvVar5;
  void *pvVar6;
  
  puVar3 = PTR_PTR_04bb2238;
  pvVar5 = *(void **)(param_1 + 8);
  (**(code **)(*(long *)PTR_PTR_04bb2238 + 0x18))(PTR_PTR_04bb2238);
  pvVar6 = *(void **)(puVar3 + 8);
  if (pvVar5 != pvVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_0257a1cc;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0257a1cc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0257a1cc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0257a1cc:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x10) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x10) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x60);
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  pvVar6 = *(void **)(puVar3 + 8);
  if (pvVar5 != pvVar6) {
    (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
    lVar4 = 0;
    do {
      if (*(char *)(*(long *)(puVar3 + 8) + lVar4) == '\0') goto LAB_0257a26c;
      lVar1 = *(long *)(puVar3 + 8) + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0257a26c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0257a26c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0257a26c:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x68) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x68) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  __dest = *(char **)(param_1 + 0xb8);
  if (__dest != "PlayerComplete") {
    iVar2 = 0xe;
    if (*(int *)(param_1 + 0xc0) < 0xf) {
      iVar2 = *(int *)(param_1 + 0xc0) + -1;
    }
    memcpy(__dest,"PlayerComplete",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  *(undefined4 *)(param_1 + 0x10c) = 0;
  *(undefined1 *)(param_1 + 0x108) = 1;
  *(undefined8 *)(param_1 + 0x114) = 0xc;
  *(undefined1 *)(param_1 + 300) = 1;
  *(undefined4 *)(param_1 + 0x130) = 0;
  *(undefined2 *)(param_1 + 0x110) = 0;
  *(undefined1 *)(param_1 + 0x112) = 1;
  *(undefined8 *)(param_1 + 0x11c) = 0;
  return;
}

