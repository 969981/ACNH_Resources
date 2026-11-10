
void FUN_002ac270(long param_1,undefined4 *param_2,undefined4 param_3,undefined1 param_4,
                 undefined1 param_5)

{
  undefined4 uVar1;
  
  *(undefined4 *)(param_1 + 0x508) = param_3;
  uVar1 = *param_2;
  *(undefined1 *)(param_1 + 0x510) = param_4;
  *(undefined1 *)(param_1 + 0x511) = param_5;
  *(undefined1 *)(param_1 + 0x8fc) = 0;
  *(undefined4 *)(param_1 + 0x8f8) = 0;
  *(undefined4 *)(param_1 + 0x50c) = uVar1;
  return;
}

