
void FUN_037b5bf0(long *param_1,void *param_2)

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
      if (*(char *)((long)param_2 + lVar3) == '\0') goto LAB_037b5c8c;
      if (*(char *)((long)param_2 + lVar3 + 1) == '\0') {
        lVar3 = lVar3 + 1;
        goto LAB_037b5c8c;
      }
      if (*(char *)((long)param_2 + lVar3 + 2) == '\0') {
        lVar3 = lVar3 + 2;
        goto LAB_037b5c8c;
      }
      lVar3 = lVar3 + 3;
    } while (lVar3 != 0x80001);
    lVar3 = 0;
LAB_037b5c8c:
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
  param_1[0x1d] = 0;
  param_1[0x1f] = 0;
  param_1[0x21] = 0;
  param_1[0x23] = 0;
  param_1[0x25] = 0;
  param_1[0x27] = 0;
  param_1[0x29] = 0;
  param_1[0x2b] = 0;
  param_1[0x2d] = 0;
  param_1[0x2f] = 0;
  param_1[0x31] = 0;
  param_1[0x33] = 0;
  param_1[0x35] = 0;
  param_1[0x37] = 0;
  param_1[0x39] = 0;
  param_1[0x3b] = 0;
  param_1[0x3d] = 0;
  param_1[0x3f] = 0;
  param_1[0x41] = 0;
  param_1[0x43] = 0;
  param_1[0x45] = 0;
  *param_1 = (long)&PTR_LAB_04b4d170;
  param_1[1] = (long)(puVar1 + 0x10);
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x12) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x16) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x18) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x1e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x20) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x22) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x24) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x26) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x28) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x2e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x30) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x32) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x34) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x36) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3a) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x3e) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x40) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x44) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x46) = 0xffffffff;
  param_1[0xd] = 0;
  param_1[0xe] = (long)(param_1 + 0xf);
  *(undefined4 *)((long)param_1 + 0x6c) = 0x1c;
  return;
}

