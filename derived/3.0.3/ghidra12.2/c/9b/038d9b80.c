
void FUN_038d9b80(long *param_1,long param_2,long *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  void *__dest;
  void *__src;
  
  __dest = *(void **)(param_2 + 0x48);
  (**(code **)(*param_3 + 0x18))(param_3);
  __src = (void *)param_3[1];
  if (__dest != __src) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_038d9c1c;
      lVar2 = param_3[1] + lVar4;
      if (*(char *)(lVar2 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_038d9c1c;
      }
      if (*(char *)(lVar2 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_038d9c1c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_038d9c1c:
    iVar3 = (int)lVar4;
    if (*(int *)(param_2 + 0x50) <= (int)lVar4) {
      iVar3 = *(int *)(param_2 + 0x50) + -1;
    }
    memcpy(__dest,__src,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  lVar4 = *(long *)(param_2 + 0x38);
  puVar1 = (undefined8 *)(param_2 + 0x20);
  if (lVar4 != 0) {
    *(undefined8 *)(param_2 + 0x38) = 0;
    if (*(long *)(param_2 + 0x20) != 0) {
      *(undefined8 *)(*(long *)(param_2 + 0x20) + 8) = *(undefined8 *)(param_2 + 0x28);
    }
    if (*(undefined8 **)(param_2 + 0x28) != (undefined8 *)0x0) {
      **(undefined8 **)(param_2 + 0x28) = *puVar1;
    }
    *puVar1 = 0;
    *(undefined8 *)(param_2 + 0x28) = 0;
    *(int *)(lVar4 + 0x10) = *(int *)(lVar4 + 0x10) + -1;
  }
  *(long **)(param_2 + 0x38) = param_1;
  lVar4 = *param_1;
  *param_1 = (long)puVar1;
  *(long *)(param_2 + 0x20) = lVar4;
  *(long **)(param_2 + 0x28) = param_1;
  if (lVar4 != 0) {
    *(undefined8 **)(lVar4 + 8) = puVar1;
  }
  *(int *)(param_1 + 2) = (int)param_1[2] + 1;
  return;
}

