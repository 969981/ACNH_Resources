
void FUN_00cf8f00(undefined8 *param_1,long param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  long lVar3;
  void *__src;
  
  *(undefined4 *)(param_1 + 2) = 0x20;
  __dest = (void *)((long)param_1 + 0x14);
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *param_1 = &PTR_LAB_048fa8f8;
  param_1[1] = __dest;
  (**(code **)(*(long *)(param_2 + 0x1a90) + 0x18))(param_2 + 0x1a90);
  __src = *(void **)(param_2 + 0x1a98);
  if (__dest != __src) {
    (**(code **)(*(long *)(param_2 + 0x1a90) + 0x18))(param_2 + 0x1a90);
    lVar3 = 0;
    do {
      if (*(char *)(*(long *)(param_2 + 0x1a98) + lVar3) == '\0') goto LAB_00cf8fbc;
      lVar1 = *(long *)(param_2 + 0x1a98) + lVar3;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_00cf8fbc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_00cf8fbc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_00cf8fbc:
    iVar2 = (int)lVar3;
    if (*(int *)(param_1 + 2) <= (int)lVar3) {
      iVar2 = *(int *)(param_1 + 2) + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *param_1 = &PTR_LAB_048f9700;
  *(undefined4 *)(param_1 + 7) = *(undefined4 *)(param_2 + 0x1ac8);
  return;
}

