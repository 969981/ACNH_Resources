
void FUN_00361334(undefined4 param_1,long param_2)

{
  *(undefined4 *)(param_2 + 0x3c) = 0;
  *(undefined4 *)(param_2 + 0x20) = param_1;
  *(uint *)(param_2 + 0x44) = *(uint *)(param_2 + 0x44) & 0xfffffff0;
  return;
}

