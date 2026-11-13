
void FUN_0145bb60(long param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x3b8);
  (**(code **)(DAT_051d0288 + 0x18))(&DAT_051d0288);
  pvVar2 = DAT_051d0290;
  if (pvVar4 != DAT_051d0290) {
    (**(code **)(DAT_051d0288 + 0x18))(&DAT_051d0288);
    lVar3 = 0;
    do {
      if (*(char *)((long)DAT_051d0290 + lVar3) == '\0') goto LAB_0145bbfc;
      if (*(char *)((long)DAT_051d0290 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0145bbfc;
      }
      if (*(char *)((long)DAT_051d0290 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0145bbfc;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0145bbfc:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x3c0) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x3c0) + -1;
    }
    memcpy(pvVar4,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x410);
  (**(code **)(DAT_051d02e0 + 0x18))(&DAT_051d02e0);
  pvVar2 = DAT_051d02e8;
  if (pvVar4 != DAT_051d02e8) {
    (**(code **)(DAT_051d02e0 + 0x18))(&DAT_051d02e0);
    lVar3 = 0;
    do {
      if (*(char *)((long)DAT_051d02e8 + lVar3) == '\0') goto LAB_0145bca0;
      if (*(char *)((long)DAT_051d02e8 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0145bca0;
      }
      if (*(char *)((long)DAT_051d02e8 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0145bca0;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0145bca0:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x418) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x418) + -1;
    }
    memcpy(pvVar4,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
  }
  return;
}

