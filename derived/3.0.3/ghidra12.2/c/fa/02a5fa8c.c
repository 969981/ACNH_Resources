
void FUN_02a5fa8c(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *__dest;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  *(undefined4 *)(param_1 + 0x4f) = 1;
  if (__dest != "StructureComponent") {
    iVar3 = 0x12;
    if (*(int *)(param_1 + 0xd) < 0x13) {
      iVar3 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"StructureComponent",(long)iVar3);
    __dest[iVar3] = '\0';
  }
  *(undefined4 *)((long)param_1 + 0x27c) = 0;
  param_1[0x51] = 0xffffffff00000000;
  *param_1 = &PTR_LAB_04a9b470;
  puVar2 = PTR_DAT_04bc44c0;
  *(undefined4 *)(param_1 + 0x58) = 0;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 6;
  puVar1 = PTR_DAT_04bb3238;
  param_1[0x59] = 0;
  *(undefined4 *)(param_1 + 0x5a) = 0;
  param_1[0x5b] = 0;
  uVar4 = *(undefined4 *)puVar1;
  param_1[0x50] = puVar2 + 0x10;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  param_1[0x5d] = 0;
  *(undefined4 *)(param_1 + 0x5e) = 0;
  param_1[0x5f] = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  param_1[0x62] = 0;
  param_1[99] = 0;
  param_1[100] = 0;
  *(undefined4 *)((long)param_1 + 0x2c4) = uVar4;
  puVar1 = PTR_DAT_04bb5cb0;
  *(undefined8 *)((long)param_1 + 0x325) = 0;
  param_1[0x66] = 0;
  param_1[0x67] = 0;
  param_1[0x68] = 0;
  param_1[0x69] = 0;
  param_1[0x61] = puVar1 + 0x10;
  param_1[0x6a] = 0x80000000000000;
  param_1[0x6b] = PTR_DAT_04bb5bb8 + 0x10;
  puVar1 = PTR_DAT_04bb5ba8;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  param_1[0x71] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x72] = 0;
  param_1[0x75] = 0;
  param_1[0x74] = 0;
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x7b] = 0;
  param_1[0x7a] = 0;
  param_1[0x7e] = 0;
  param_1[0x7d] = 0;
  param_1[0x81] = 0;
  param_1[0x80] = 0;
  param_1[0x84] = 0;
  param_1[0x83] = 0;
  param_1[0x87] = 0;
  param_1[0x86] = 0;
  param_1[0x8a] = 0;
  param_1[0x89] = 0;
  param_1[0x8d] = 0;
  param_1[0x8c] = 0;
  param_1[0x90] = 0;
  param_1[0x8f] = 0;
  param_1[0x93] = 0;
  param_1[0x92] = 0;
  param_1[0x96] = 0;
  param_1[0x95] = 0;
  param_1[0x6d] = puVar1;
  param_1[0x70] = puVar1;
  param_1[0x73] = puVar1;
  param_1[0x76] = puVar1;
  param_1[0x79] = puVar1;
  param_1[0x7c] = puVar1;
  param_1[0x7f] = puVar1;
  param_1[0x82] = puVar1;
  param_1[0x85] = puVar1;
  param_1[0x88] = puVar1;
  param_1[0x8b] = puVar1;
  param_1[0x8e] = puVar1;
  param_1[0x91] = puVar1;
  param_1[0x94] = puVar1;
  *(undefined4 *)(param_1 + 0x97) = 0;
  *(undefined1 *)(param_1 + 0x98) = 0;
  puVar1 = PTR_DAT_04bbc1a0 + 0x10;
  param_1[0x9b] = 0;
  param_1[0x99] = puVar1;
  puVar2 = PTR_DAT_04bb2010 + 0x10;
  param_1[0x9d] = 0;
  *(undefined4 *)(param_1 + 0x9e) = 0;
  *(undefined1 *)((long)param_1 + 0x4f4) = 0;
  param_1[0xa0] = 0;
  param_1[0x9f] = 0;
  param_1[0xa1] = puVar1;
  param_1[0xa3] = 0;
  param_1[0xa5] = 0;
  param_1[0x9a] = puVar2;
  param_1[0x9c] = puVar2;
  param_1[0xa2] = puVar2;
  param_1[0xa4] = puVar2;
  return;
}

