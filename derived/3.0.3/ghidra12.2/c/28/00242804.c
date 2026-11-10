
void FUN_00242804(long *param_1)

{
  undefined *puVar1;
  
  FUN_002a3808();
  *(undefined8 *)((long)param_1 + 0x256) = 0xffffffffffffffff;
  puVar1 = PTR_DAT_04bcd4a8;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  *(undefined2 *)((long)param_1 + 0x25e) = 0x101;
  param_1[3] = (long)(puVar1 + 0x60);
  param_1[4] = 0;
  memset(param_1 + 5,0,0x50);
  *(undefined4 *)(param_1 + 0x41) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0;
  *(undefined4 *)(param_1 + 0x47) = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  memset(param_1 + 0xf,0,0x50);
  *(undefined4 *)((long)param_1 + 0x20c) = 0;
  *(undefined4 *)((long)param_1 + 0x224) = 0;
  *(undefined4 *)((long)param_1 + 0x23c) = 0;
  *(undefined1 *)((long)param_1 + 0x251) = 0;
  memset(param_1 + 0x19,0,0x50);
  *(undefined4 *)(param_1 + 0x42) = 0;
  *(undefined4 *)(param_1 + 0x45) = 0;
  *(undefined4 *)(param_1 + 0x48) = 0;
  *(undefined1 *)((long)param_1 + 0x252) = 0;
  memset(param_1 + 0x23,0,0x50);
  *(undefined4 *)((long)param_1 + 0x214) = 0;
  *(undefined4 *)((long)param_1 + 0x22c) = 0;
  *(undefined4 *)((long)param_1 + 0x244) = 0;
  *(undefined1 *)((long)param_1 + 0x253) = 0;
  memset(param_1 + 0x2d,0,0x50);
  *(undefined4 *)(param_1 + 0x43) = 0;
  *(undefined4 *)(param_1 + 0x46) = 0;
  *(undefined4 *)(param_1 + 0x49) = 0;
  *(undefined1 *)((long)param_1 + 0x254) = 0;
  memset(param_1 + 0x37,0,0x50);
  *(undefined4 *)((long)param_1 + 0x21c) = 0;
  *(undefined4 *)((long)param_1 + 0x234) = 0;
  *(undefined4 *)((long)param_1 + 0x24c) = 0;
  *(undefined1 *)((long)param_1 + 0x255) = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 100;
  return;
}

