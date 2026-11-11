
void FUN_003bf590(long param_1,undefined4 *param_2,undefined4 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  *(undefined4 *)(param_1 + 0x164) = param_3;
  FUN_003bebc8(param_1 + 0x3c);
  FUN_003bebc8(param_1 + 0x5c);
  FUN_003bebc8(param_1 + 0x7c);
  FUN_003bebc8(param_1 + 0x9c);
  FUN_003bfeec(*(undefined4 *)PTR_DAT_04bd04f8,param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x140) = 0;
  FUN_003c1470(*(undefined8 *)(param_1 + 400),*param_2);
  FUN_003c14e0(*(undefined8 *)(param_1 + 400),param_2[3]);
  FUN_003c2c30(*(undefined8 *)(param_1 + 400),*(undefined1 *)(param_1 + 0x173));
  FUN_003bf650(param_1,param_2,param_4,param_5);
  FUN_003c0c10(*(undefined8 *)(param_1 + 400));
  *(undefined1 *)(param_1 + 0xc1) = 1;
  return;
}

