
void FUN_002443c0(long param_1)

{
  FUN_0024f470();
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined2 *)(param_1 + 0x230) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  memset((void *)(param_1 + 100),0,0x40);
  *(undefined1 *)(param_1 + 0xa4) = 0;
  memset((void *)(param_1 + 0xa5),0,0x180);
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined2 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x232) = 0;
  return;
}

