
void FUN_02a7240c(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  char *__dest;
  
  FUN_00705c50();
  __dest = (char *)param_1[0xc];
  param_1[0x50] = 0xffffffffffffffff;
  *(undefined8 *)((long)param_1 + 0x28c) = 0x4270000043b40000;
  *(undefined1 *)(param_1 + 0x4f) = 0;
  *(undefined1 *)(param_1 + 0x51) = 0xff;
  if (__dest != "StructureDemo") {
    iVar2 = 0xd;
    if (*(int *)(param_1 + 0xd) < 0xe) {
      iVar2 = *(int *)(param_1 + 0xd) + -1;
    }
    memcpy(__dest,"StructureDemo",(long)iVar2);
    __dest[iVar2] = '\0';
  }
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined1 *)((long)param_1 + 0x2c4) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0x40;
  *param_1 = &PTR_LAB_04a9c038;
  puVar1 = PTR_DAT_04bbb868;
  param_1[0x57] = (undefined1 *)((long)param_1 + 0x2c4);
  param_1[0x53] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bbb848;
  *(undefined1 *)((long)param_1 + 0x303) = 0;
  *(undefined1 *)((long)param_1 + 0x31c) = 0;
  param_1[0x55] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb2bc0;
  param_1[0x62] = (undefined1 *)((long)param_1 + 0x31c);
  *(undefined4 *)(param_1 + 99) = 0x40;
  *(undefined1 *)((long)param_1 + 0x35b) = 0;
  param_1[0x6c] = 0;
  *(undefined2 *)(param_1 + 0x6d) = 0xff;
  param_1[0x6e] = 0;
  param_1[0x6f] = 0;
  *(undefined1 *)((long)param_1 + 0x3b3) = 0;
  *(undefined1 *)((long)param_1 + 0x394) = 0;
  param_1[0x71] = (undefined1 *)((long)param_1 + 0x394);
  *(undefined4 *)(param_1 + 0x72) = 0x20;
  param_1[0x56] = puVar1 + 0x10;
  param_1[0x61] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb2028 + 0x10;
  *(undefined4 *)(param_1 + 0x79) = 0x20;
  *(undefined1 *)((long)param_1 + 0x3cc) = 0;
  param_1[0x78] = (undefined1 *)((long)param_1 + 0x3cc);
  *(undefined1 *)((long)param_1 + 0x3eb) = 0;
  param_1[0x7e] = 0;
  param_1[0x70] = puVar1;
  param_1[0x77] = puVar1;
  puVar1 = PTR_DAT_04bbba70 + 0x10;
  *(undefined4 *)(param_1 + 0x7f) = 0;
  param_1[0x80] = puVar1;
  param_1[0x84] = puVar1;
  *(uint *)(param_1 + 0x4c) = *(uint *)(param_1 + 0x4c) & 0xfffffff0 | 2;
  return;
}

