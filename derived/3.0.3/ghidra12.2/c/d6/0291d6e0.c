
void FUN_0291d6e0(long *param_1,long *param_2,byte param_3,byte param_4)

{
  long lVar1;
  int iVar2;
  void *pvVar3;
  long lVar4;
  void *pvVar5;
  
  pvVar3 = DAT_055c19d0;
  (**(code **)(*param_1 + 0x18))();
  pvVar5 = (void *)param_1[1];
  if (pvVar3 != pvVar5) {
    (**(code **)(*param_1 + 0x18))(param_1);
    lVar4 = 0;
    do {
      if (*(char *)(param_1[1] + lVar4) == '\0') goto LAB_0291d78c;
      lVar1 = param_1[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0291d78c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0291d78c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0291d78c:
    iVar2 = (int)lVar4;
    if (DAT_055c19d8 <= (int)lVar4) {
      iVar2 = DAT_055c19d8 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  pvVar3 = DAT_055c1a28;
  (**(code **)(*param_2 + 0x18))(param_2);
  pvVar5 = (void *)param_2[1];
  if (pvVar3 != pvVar5) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_0291d830;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_0291d830;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_0291d830;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_0291d830:
    iVar2 = (int)lVar4;
    if (DAT_055c1a30 <= (int)lVar4) {
      iVar2 = DAT_055c1a30 + -1;
    }
    memcpy(pvVar3,pvVar5,(long)iVar2);
    *(undefined1 *)((long)pvVar3 + (long)iVar2) = 0;
  }
  DAT_055c1a78 = param_3 & 1;
  DAT_055c1a7c = param_4 & 1;
  return;
}

