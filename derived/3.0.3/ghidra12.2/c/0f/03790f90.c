
void FUN_03790f90(long *param_1,void *param_2,undefined4 param_3,undefined4 param_4)

{
  void *__dest;
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bcad48;
  __dest = (void *)((long)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = 0x40;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[2] = (long)__dest;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[1] = (long)&PTR_LAB_048fd2d8;
  if (__dest != param_2) {
    lVar3 = 0;
    do {
      if (*(char *)((long)param_2 + lVar3) == '\0') goto LAB_03791030;
      if (*(char *)((long)param_2 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_03791030;
      }
      if (*(char *)((long)param_2 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_03791030;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_03791030:
    iVar2 = (int)lVar3;
    if (0x3e < iVar2) {
      iVar2 = 0x3f;
    }
    memcpy(__dest,param_2,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined1 *)((long)param_1 + 100) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0xd) = param_3;
  *(undefined4 *)((long)param_1 + 0x6c) = param_4;
  *param_1 = (long)&PTR_LAB_04b47560;
  param_1[1] = (long)(puVar1 + 0x10);
  return;
}

