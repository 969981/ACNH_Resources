
void FUN_03d72b50(long *param_1,long *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  void *__dest;
  void *__src;
  undefined *local_40;
  char *pcStack_38;
  
  __dest = (void *)param_1[8];
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_03d72bec;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03d72bec;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03d72bec;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03d72bec:
    iVar2 = (int)lVar4;
    if ((int)param_1[9] <= (int)lVar4) {
      iVar2 = (int)param_1[9] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  lVar4 = (**(code **)(*param_1 + 0x20))(param_1);
  param_1[5] = lVar4;
  local_40 = PTR_DAT_04bb2020 + 0x10;
  pcStack_38 = "XLink";
  lVar4 = FUN_03d72c88(param_1[1],&local_40,0);
  param_1[2] = lVar4;
  uVar3 = (**(code **)(*param_1 + 0x30))(param_1);
  if ((uVar3 & 1) != 0) {
    lVar4 = FUN_03c68fb0(param_1[2]);
    param_1[3] = lVar4;
  }
  return;
}

