
void FUN_003649e0(undefined8 param_1,long param_2,undefined4 *param_3,undefined4 *param_4)

{
  *(undefined4 *)(param_2 + 0x210) = *param_4;
  *(undefined4 *)(param_2 + 0x214) = param_4[1];
  *(undefined4 *)(param_2 + 0x218) = *param_3;
  *(undefined4 *)(param_2 + 0x21c) = param_3[1];
  FUN_00365220(param_1,param_2 + 0x40);
  return;
}

