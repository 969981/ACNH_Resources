
void FUN_00cf3a10(long *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long lVar5;
  void *__src;
  
  __dest = (void *)((long)param_1 + 0x14);
  *(undefined4 *)(param_1 + 2) = 0x20;
  puVar3 = PTR_DAT_04bb2a08;
  *(undefined1 *)((long)param_1 + 0x33) = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = (long)__dest;
  (**(code **)(*param_2 + 0x18))(param_2);
  __src = (void *)param_2[1];
  if (__dest != __src) {
    (**(code **)(*param_2 + 0x18))(param_2);
    lVar5 = 0;
    do {
      if (*(char *)(param_2[1] + lVar5) == '\0') goto LAB_00cf3acc;
      lVar1 = param_2[1] + lVar5;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar5 = lVar5 + 1;
        goto LAB_00cf3acc;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar5 = lVar5 + 2;
        goto LAB_00cf3acc;
      }
      lVar5 = lVar5 + 3;
    } while (lVar5 != 0x80001);
    lVar5 = 0;
LAB_00cf3acc:
    iVar2 = (int)lVar5;
    if ((int)param_1[2] <= (int)lVar5) {
      iVar2 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *param_1 = (long)(PTR_DAT_04bb2028 + 0x10);
  (**(code **)(*param_2 + 0x18))(param_2);
  uVar4 = FUN_006bd550(param_2[1],0);
  *(undefined4 *)(param_1 + 7) = uVar4;
  return;
}

