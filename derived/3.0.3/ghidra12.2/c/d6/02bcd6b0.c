
void FUN_02bcd6b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar1 = PTR_DAT_04bc0d10 + 0x10;
  param_1[0x2f6] = (long)puVar1;
  puVar2 = PTR_DAT_04bb2df8;
  param_1[0x2c9] = (long)puVar1;
  param_1[0x29c] = (long)puVar1;
  param_1[0x26f] = (long)puVar1;
  param_1[0x242] = (long)puVar1;
  param_1[0x215] = (long)puVar1;
  param_1[0x1e8] = (long)puVar1;
  param_1[0x1bb] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x18e] = (long)puVar1;
  param_1[0x161] = (long)puVar1;
  param_1[0x134] = (long)puVar1;
  param_1[0x107] = (long)puVar1;
  param_1[0xda] = (long)puVar1;
  param_1[0xad] = (long)puVar1;
  param_1[0x80] = (long)puVar1;
  param_1[0x53] = (long)puVar1;
  param_1[0x2f7] = (long)puVar2;
  param_1[0x2ca] = (long)puVar2;
  param_1[0x29d] = (long)puVar2;
  param_1[0x270] = (long)puVar2;
  param_1[0x243] = (long)puVar2;
  param_1[0x216] = (long)puVar2;
  param_1[0x1e9] = (long)puVar2;
  param_1[0x1bc] = (long)puVar2;
  param_1[399] = (long)puVar2;
  param_1[0x162] = (long)puVar2;
  param_1[0x135] = (long)puVar2;
  param_1[0x108] = (long)puVar2;
  param_1[0xdb] = (long)puVar2;
  param_1[0xae] = (long)puVar2;
  param_1[0x81] = (long)puVar2;
  param_1[0x54] = (long)puVar2;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

