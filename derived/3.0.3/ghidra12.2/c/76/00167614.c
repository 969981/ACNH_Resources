
void FUN_00167614(undefined8 *param_1,undefined4 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  
  *(undefined4 *)(param_1 + 1) = param_2;
  *(undefined1 *)((long)param_1 + 0xe) = 0;
  *param_1 = 5;
  *(undefined2 *)((long)param_1 + 0xc) = 2;
  uVar1 = *param_3;
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(param_3 + 1);
  param_1[2] = uVar1;
  return;
}

