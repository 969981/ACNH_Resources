
void FUN_00cf79a0(long *param_1,long *param_2)

{
  void *__dest;
  long lVar1;
  int iVar2;
  undefined *puVar3;
  long lVar4;
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
    lVar4 = 0;
    do {
      if (*(char *)(param_2[1] + lVar4) == '\0') goto LAB_00cf7a5c;
      lVar1 = param_2[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_00cf7a5c;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_00cf7a5c;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_00cf7a5c:
    iVar2 = (int)lVar4;
    if ((int)param_1[2] <= (int)lVar4) {
      iVar2 = (int)param_1[2] + -1;
    }
    memcpy(__dest,__src,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *param_1 = (long)&PTR_LAB_048f9700;
  *(int *)(param_1 + 7) = (int)param_2[7];
  return;
}

