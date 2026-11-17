
void FUN_02b07970(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  char *__dest;
  
  FUN_00705c50();
  *(undefined2 *)(param_1 + 0x53) = 0;
  puVar1 = PTR_DAT_04bd4738;
  __dest = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x54) = 0;
  param_1[0x55] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x50] = 0xffffffff;
  param_1[0x51] = 0xffffffff;
  param_1[0x52] = 0xffffffff;
  param_1[0x4f] = puVar1;
  *(undefined4 *)(param_1 + 0x56) = 0;
  param_1[0x57] = 0;
  puVar2 = PTR_DAT_04bb2d80 + 0x10;
  param_1[0x58] = puVar2;
  param_1[0x5c] = puVar2;
  if (__dest != "StateMachine") {
    iVar4 = 0xc;
    if (*(int *)(param_1 + 0xd) < 0xd) {
      iVar4 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"StateMachine",(long)iVar4);
    __dest[iVar4] = '\0';
  }
  *(undefined4 *)(param_1 + 0x60) = 0;
  *param_1 = &PTR_LAB_04aa1518;
  *(undefined2 *)((long)param_1 + 0x304) = 0;
  *(undefined4 *)(param_1 + 0x61) = 0xffffffff;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 2;
  FUN_02b55554(param_1 + 0x62);
  FUN_02b55554(param_1 + 0x10b);
  FUN_02b55554(param_1 + 0x1b4);
  FUN_02b55554(param_1 + 0x25d);
  *(undefined4 *)(param_1 + 0x307) = 0;
  puVar2 = PTR_DAT_04bc4750;
  param_1[0x308] = 0;
  param_1[0x309] = puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x30a] = 0xffffffff;
  param_1[0x30b] = 0xffffffff;
  param_1[0x30c] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x30d) = 0;
  *(undefined4 *)(param_1 + 0x30e) = 0;
  param_1[0x30f] = 0;
  *(undefined4 *)(param_1 + 0x310) = 0;
  param_1[0x311] = 0;
  *(undefined4 *)(param_1 + 0x312) = 0xffffffff;
  param_1[0x306] = puVar2;
  *(undefined1 *)((long)param_1 + 0x1894) = 0;
  param_1[0x313] = 0x3f80000000000000;
  puVar3 = PTR_DAT_04bbba78 + 0x10;
  *(undefined4 *)(param_1 + 0x314) = 0x3f800000;
  param_1[0x31d] = puVar2;
  *(undefined4 *)(param_1 + 0x31e) = 0;
  param_1[799] = 0;
  param_1[800] = puVar1;
  param_1[0x321] = 0xffffffff;
  param_1[0x322] = 0xffffffff;
  param_1[0x323] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x324) = 0;
  *(undefined4 *)(param_1 + 0x325) = 0;
  param_1[0x326] = 0;
  *(undefined4 *)(param_1 + 0x327) = 0;
  param_1[0x328] = 0;
  param_1[0x315] = puVar3;
  param_1[0x319] = puVar3;
  *(undefined4 *)(param_1 + 0x329) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x194c) = 0;
  param_1[0x32a] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x32b) = 0x3f800000;
  param_1[0x32c] = puVar3;
  param_1[0x330] = puVar3;
  param_1[0x334] = puVar2;
  *(undefined4 *)(param_1 + 0x335) = 0;
  param_1[0x336] = 0;
  param_1[0x337] = puVar1;
  param_1[0x338] = 0xffffffff;
  param_1[0x339] = 0xffffffff;
  param_1[0x33a] = 0xffffffff;
  *(undefined2 *)(param_1 + 0x33b) = 0;
  *(undefined4 *)(param_1 + 0x33c) = 0;
  param_1[0x33d] = 0;
  *(undefined4 *)(param_1 + 0x33e) = 0;
  param_1[0x33f] = 0;
  *(undefined4 *)(param_1 + 0x340) = 0xffffffff;
  *(undefined1 *)((long)param_1 + 0x1a04) = 0;
  param_1[0x341] = 0x3f80000000000000;
  *(undefined4 *)(param_1 + 0x342) = 0x3f800000;
  param_1[0x343] = puVar3;
  param_1[0x347] = puVar3;
  param_1[0x34b] = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x34d] = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  param_1[0x34c] = puVar1;
  param_1[0x34e] = puVar1;
  param_1[0x34f] = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) | 4;
  return;
}

