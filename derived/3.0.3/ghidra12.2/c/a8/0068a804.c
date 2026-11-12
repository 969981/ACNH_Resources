
void FUN_0068a804(long param_1,undefined8 param_2,long param_3,int param_4)

{
  *(long *)param_1 = param_1;
  *(long *)(param_1 + 8) = param_1;
  *(int *)(param_1 + 0x18) = param_4;
  *(undefined4 *)(param_1 + 0x1c) = 0xffffffff;
  *(long *)(param_1 + 0x10) = param_3;
  *(undefined2 *)(param_1 + 0x28) = 0x100;
  *(undefined8 *)(param_1 + 0x20) = param_2;
  *(undefined4 *)(param_1 + 0x1c) =
       *(undefined4 *)(*(long *)(param_3 + 0x38) + (long)param_4 * 0x20 + 0x10);
  return;
}

