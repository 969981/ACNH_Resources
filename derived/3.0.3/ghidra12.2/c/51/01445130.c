
void FUN_01445130(long param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x3b8);
  (**(code **)(DAT_051c49d8 + 0x18))(&DAT_051c49d8);
  pvVar2 = DAT_051c49e0;
  if (pvVar4 != DAT_051c49e0) {
    (**(code **)(DAT_051c49d8 + 0x18))(&DAT_051c49d8);
    lVar3 = 0;
    do {
      if (*(char *)((long)DAT_051c49e0 + lVar3) == '\0') goto LAB_014451cc;
      if (*(char *)((long)DAT_051c49e0 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_014451cc;
      }
      if (*(char *)((long)DAT_051c49e0 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_014451cc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_014451cc:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x3c0) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x3c0) + -1;
    }
    memcpy(pvVar4,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x410);
  (**(code **)(DAT_051c4a30 + 0x18))(&DAT_051c4a30);
  pvVar2 = DAT_051c4a38;
  if (pvVar4 != DAT_051c4a38) {
    (**(code **)(DAT_051c4a30 + 0x18))(&DAT_051c4a30);
    lVar3 = 0;
    do {
      if (*(char *)((long)DAT_051c4a38 + lVar3) == '\0') goto LAB_01445270;
      if (*(char *)((long)DAT_051c4a38 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01445270;
      }
      if (*(char *)((long)DAT_051c4a38 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01445270;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01445270:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x418) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x418) + -1;
    }
    memcpy(pvVar4,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
  }
  return;
}

