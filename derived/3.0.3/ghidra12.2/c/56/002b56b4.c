
void FUN_002b56b4(long param_1)

{
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0xb4) = 0xffffffff;
  *(undefined2 *)(param_1 + 0xb8) = 0xffff;
  *(undefined4 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0xbc) = 0;
  *(undefined8 *)(param_1 + 200) = 0;
  *(undefined2 *)(param_1 + 0xd0) = 0;
  *(undefined1 *)(param_1 + 0xd2) = 0;
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined8 *)(param_1 + 0x88) = 0;
  memset((void *)(param_1 + 0x94),0xff,0x20);
  return;
}

