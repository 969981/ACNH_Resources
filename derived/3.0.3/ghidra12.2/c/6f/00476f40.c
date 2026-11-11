
void FUN_00476f40(long param_1,long *param_2)

{
  *param_2 = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 8);
  param_2[3] = *(long *)(param_1 + 0x10) - *(long *)(param_1 + 0x18);
  param_2[1] = *(long *)(param_1 + 0x18) - *(long *)(param_1 + 8);
  param_2[2] = *(long *)(param_1 + 0x28);
  return;
}

