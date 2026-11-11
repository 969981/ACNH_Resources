
void FUN_003a9600(undefined8 *param_1,undefined8 param_2,undefined2 param_3)

{
  *param_1 = param_2;
  *(undefined2 *)(param_1 + 1) = 0;
  *(undefined2 *)((long)param_1 + 10) = param_3;
  *(undefined4 *)((long)param_1 + 0xc) = 0;
  return;
}

