
void FUN_0078b974(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char *__dest;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  *(undefined1 *)(param_1 + 0x55) = 0;
  param_1[0x56] = 0;
  param_1[0x58] = 0;
  param_1[0x59] = 0;
  param_1[0x5a] = 0;
  param_1[0x57] = &PTR_FUN_04ba93e0;
  if (__dest != "XLink") {
    iVar2 = 5;
    if (*(int *)(param_1 + 0xd) < 6) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"XLink",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  *(undefined1 *)(param_1 + 0x5b) = 0;
  *param_1 = &PTR_LAB_0490d2c0;
  *(undefined2 *)(param_1 + 100) = 1;
  param_1[0x5c] = 0;
  param_1[0x5d] = &PTR_FUN_04ba93e0;
  param_1[0x5e] = 0;
  param_1[0x5f] = 0;
  param_1[0x60] = 0;
  *(undefined1 *)(param_1 + 0x62) = 0;
  param_1[99] = 0;
  param_1[0x61] = &PTR_LAB_0490d4b8;
  *(undefined8 *)((long)param_1 + 0x324) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = PTR_DAT_04bb2020 + 0x10;
  puVar1 = PTR_DAT_04c4b988;
  *(undefined4 *)(param_1 + 0x6d) = 0;
  param_1[0x6c] = 0;
  param_1[0x6b] = 0;
  param_1[0x68] = puVar1;
  param_1[0x69] = 0x7f7fffff7f7fffff;
  param_1[0x6a] = 0xff7fffffff7fffff;
  param_1[0x6f] = 0;
  *(undefined8 *)((long)param_1 + 0x37e) = 0;
  uVar4 = DAT_0419b5a4;
  uVar3 = DAT_0419b59c;
  *(undefined8 *)((long)param_1 + 999) = 0;
  param_1[0x71] = 0;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x73) = 0;
  param_1[0x7c] = 0;
  param_1[0x7b] = 0;
  *(undefined1 *)((long)param_1 + 0x483) = 0;
  *(undefined8 *)((long)param_1 + 0x36c) = uVar3;
  *(undefined8 *)((long)param_1 + 0x3cc) = uVar3;
  *(undefined4 *)((long)param_1 + 0x374) = uVar4;
  *(undefined4 *)((long)param_1 + 0x3d4) = uVar4;
  *(undefined1 *)((long)param_1 + 0x404) = 0;
  param_1[0x7f] = (undefined1 *)((long)param_1 + 0x404);
  *(undefined4 *)(param_1 + 0x80) = 0x80;
  puVar1 = PTR_DAT_04bb2d88 + 0x10;
  *(undefined4 *)(param_1 + 0x93) = 0x80;
  param_1[0xa4] = param_1 + 0xa6;
  param_1[0xa5] = 0x4000000000;
  *(undefined1 *)((long)param_1 + 0x51b) = 0;
  *(undefined1 *)(param_1 + 0xa6) = 0;
  *(undefined1 *)((long)param_1 + 0x49c) = 0;
  param_1[0x92] = (undefined1 *)((long)param_1 + 0x49c);
  *(undefined4 *)(param_1 + 0xae) = 0xffffffff;
  *(undefined8 *)((long)param_1 + 0x574) = 0;
  param_1[0x7e] = puVar1;
  param_1[0x91] = puVar1;
  return;
}

