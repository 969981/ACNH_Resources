
void FUN_00220450(undefined8 *param_1)

{
  FUN_00221810(param_1 + 0x17);
  FUN_00220d30(param_1 + 4);
  memset((void *)*param_1,0,0x728);
  memset((void *)param_1[1],0,0x768);
  memset((void *)param_1[2],0,0x2750);
  *(undefined1 *)(param_1 + 0xae) = 0;
  param_1[3] = 0x400000000;
  *(undefined2 *)(param_1 + 0xb3) = 0;
  FUN_0021fed4(param_1 + 0xaf);
  return;
}

