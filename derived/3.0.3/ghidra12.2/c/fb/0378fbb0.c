
void FUN_0378fbb0(undefined4 param_1,undefined4 param_2,undefined8 *param_3,void *param_4)

{
  void *__dest;
  undefined *puVar1;
  int iVar2;
  long lVar3;
  
  __dest = (void *)((long)param_3 + 0x1c);
  *(undefined1 *)((long)param_3 + 0x5b) = 0;
  param_3[2] = __dest;
  *(undefined4 *)(param_3 + 3) = 0x40;
  *param_3 = &PTR_LAB_04b472b0;
  param_3[1] = &PTR_LAB_048fd2d8;
  if (__dest != param_4) {
    lVar3 = 0;
    do {
      if (*(char *)((long)param_4 + lVar3) == '\0') goto LAB_0378fc4c;
      if (*(char *)((long)param_4 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_0378fc4c;
      }
      if (*(char *)((long)param_4 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_0378fc4c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_0378fc4c:
    iVar2 = (int)lVar3;
    if (0x3e < iVar2) {
      iVar2 = 0x3f;
    }
    memcpy(__dest,param_4,(long)iVar2);
    *(undefined1 *)((long)__dest + (long)iVar2) = 0;
  }
  *(undefined1 *)((long)param_3 + 100) = 0;
  puVar1 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(param_3 + 0xc) = 2;
  *(undefined4 *)(param_3 + 0xd) = param_1;
  *(undefined4 *)((long)param_3 + 0x6c) = param_2;
  *param_3 = &PTR_LAB_04b47290;
  param_3[1] = puVar1 + 0x10;
  return;
}

