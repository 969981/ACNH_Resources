
void FUN_002b562c(undefined8 param_1,long param_2,undefined4 param_3)

{
  *(undefined4 *)(param_2 + 0x78) = 0;
  *(undefined4 *)(param_2 + 0xb4) = 0xffffffff;
  *(undefined8 *)(param_2 + 0x80) = 0;
  *(undefined8 *)(param_2 + 0x88) = 0;
  *(undefined4 *)(param_2 + 0x90) = 0;
  *(undefined2 *)(param_2 + 0xb8) = 0xffff;
  *(undefined8 *)(param_2 + 0xbc) = 0;
  *(undefined8 *)(param_2 + 200) = 0;
  *(undefined2 *)(param_2 + 0xd0) = 0;
  *(undefined1 *)(param_2 + 0xd2) = 0;
  memset((void *)(param_2 + 0x94),0xff,0x20);
  *(undefined1 *)(param_2 + 0xd3) = 0;
  *(undefined4 *)(param_2 + 0xd4) = 0;
  *(undefined8 *)(param_2 + 0x108) = 0;
  *(undefined2 *)(param_2 + 0x110) = 0;
  *(undefined1 *)(param_2 + 0x112) = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined8 *)(param_2 + 0xe0) = 0;
  *(undefined8 *)(param_2 + 0xf8) = 0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  *(undefined8 *)(param_2 + 0xe8) = 0;
  *(undefined8 *)(param_2 + 0xf0) = 0;
  FUN_002a4bd8(param_1,param_2,param_3);
  return;
}

