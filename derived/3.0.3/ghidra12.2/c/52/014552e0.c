
void FUN_014552e0(long param_1)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  void *pvVar4;
  
  pvVar4 = *(void **)(param_1 + 0x3b8);
  (**(code **)(DAT_051cc8a8 + 0x18))(&DAT_051cc8a8);
  pvVar2 = DAT_051cc8b0;
  if (pvVar4 != DAT_051cc8b0) {
    (**(code **)(DAT_051cc8a8 + 0x18))(&DAT_051cc8a8);
    lVar3 = 0;
    do {
      if (*(char *)((long)DAT_051cc8b0 + lVar3) == '\0') goto LAB_0145537c;
      if (*(char *)((long)DAT_051cc8b0 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0145537c;
      }
      if (*(char *)((long)DAT_051cc8b0 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0145537c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0145537c:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x3c0) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x3c0) + -1;
    }
    memcpy(pvVar4,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x410);
  (**(code **)(DAT_051cc900 + 0x18))(&DAT_051cc900);
  pvVar2 = DAT_051cc908;
  if (pvVar4 != DAT_051cc908) {
    (**(code **)(DAT_051cc900 + 0x18))(&DAT_051cc900);
    lVar3 = 0;
    do {
      if (*(char *)((long)DAT_051cc908 + lVar3) == '\0') goto LAB_01455420;
      if (*(char *)((long)DAT_051cc908 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_01455420;
      }
      if (*(char *)((long)DAT_051cc908 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_01455420;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_01455420:
    iVar1 = (int)lVar3;
    if (*(int *)(param_1 + 0x418) <= (int)lVar3) {
      iVar1 = *(int *)(param_1 + 0x418) + -1;
    }
    memcpy(pvVar4,pvVar2,(long)iVar1);
    *(undefined1 *)((long)pvVar4 + (long)iVar1) = 0;
  }
  return;
}

