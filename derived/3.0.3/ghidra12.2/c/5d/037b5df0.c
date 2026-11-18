
void FUN_037b5df0(long *param_1,void *param_2)

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
      if (*(char *)((long)param_2 + lVar3) == '\0') goto LAB_037b5e8c;
      if (*(char *)((long)param_2 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_037b5e8c;
      }
      if (*(char *)((long)param_2 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_037b5e8c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_037b5e8c:
    iVar2 = (int)lVar3;
    if (0x3e < iVar2) {
      iVar2 = 0x3f;
    }
    memcpy(__dest,param_2,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xf] = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[0x11] = 0;
  param_1[0x13] = 0;
  param_1[0x15] = 0;
  param_1[0x17] = 0;
  param_1[0x19] = 0;
  param_1[0x1b] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xf);
  *param_1 = (long)&PTR_LAB_04b4d190;
  param_1[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 7;
  return;
}

