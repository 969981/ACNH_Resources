
void FUN_03790e60(long *param_1,void *param_2)

{
  void *__dest;
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  long lVar4;
  
  puVar2 = PTR_DAT_04bcad48;
  __dest = (void *)((long)param_1 + 0x1c);
  *(undefined4 *)(param_1 + 3) = 0x40;
  *(undefined1 *)((long)param_1 + 0x5b) = 0;
  param_1[2] = (long)__dest;
  puVar1 = PTR_DAT_04bb2f70 + 0x10;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = (long)puVar1;
  if (__dest != param_2) {
    lVar4 = 0;
    do {
      if (*(char *)((long)param_2 + lVar4) == '\0') goto LAB_03790efc;
      if (*(char *)((long)param_2 + lVar4 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_03790efc;
      }
      if (*(char *)((long)param_2 + lVar4 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_03790efc;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_03790efc:
    iVar3 = (int)lVar4;
    if (0x3e < iVar3) {
      iVar3 = 0x3f;
    }
    memcpy(__dest,param_2,(long)iVar3);
    *(undefined1 *)((long)__dest + (long)iVar3) = 0;
  }
  *(undefined4 *)(param_1 + 0xc) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0xf] = 0;
  *(undefined1 *)((long)param_1 + 100) = 0;
  param_1[0x11] = 0;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xf);
  *param_1 = (long)&PTR_LAB_04b47580;
  param_1[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)((long)param_1 + 0x6c) = 2;
  return;
}

