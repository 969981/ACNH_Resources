
void FUN_0022b6dc(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bccfc8 + 0x10);
  memset((void *)((long)param_1 + 0x5fc),0,4);
  FUN_00227258(param_1 + 0xc0);
  FUN_00227258(param_1 + 0xc6);
  param_1[2] = 0;
  *(undefined4 *)(param_1 + 1) = 0x32ab9864;
  *(undefined1 *)((long)param_1 + 0xc) = 9;
  *(undefined2 *)(param_1 + 3) = 0;
  *(undefined1 *)((long)param_1 + 0x1a) = 0;
  memset((void *)((long)param_1 + 0x1b),0,8);
  memset((void *)((long)param_1 + 0x23),0,0x10);
  *(undefined4 *)(param_1 + 0xbf) = 0x20;
  memset((void *)((long)param_1 + 0x5fc),0,4);
  FUN_00227284(param_1 + 0xc0);
  *(undefined4 *)(param_1 + 0xc5) = 0x1000000;
  FUN_00227284(param_1 + 0xc6);
  *(undefined1 *)(param_1 + 0xcb) = 0;
  return;
}

