
void FUN_002bdad4(long param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x10) = param_2;
  *(uint *)(param_1 + 0x638) = *(uint *)(param_1 + 0x638) | 1;
  return;
}

