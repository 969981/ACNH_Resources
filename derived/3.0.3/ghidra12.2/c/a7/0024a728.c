
void FUN_0024a728(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_0024e3d8();
  puVar1 = PTR_DAT_04bcd4c0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  puVar2 = PTR_DAT_04bcd4c8;
  *(undefined1 *)((long)param_1 + 0x104) = 0;
  *(undefined4 *)(param_1 + 0x51) = 0;
  *(undefined2 *)((long)param_1 + 0x28c) = 0;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x16] = (long)(puVar2 + 0x10);
  param_1[0x17] = 0;
  memset((void *)((long)param_1 + 0xc4),0,0x40);
  memset((void *)((long)param_1 + 0x105),0,0x180);
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  *(undefined4 *)(param_1 + 0x55) = 0;
  *(undefined1 *)((long)param_1 + 0x2ec) = 0;
  memset((void *)((long)param_1 + 0x2ac),0,0x40);
  return;
}

