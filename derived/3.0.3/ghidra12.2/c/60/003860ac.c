
void FUN_003860ac(long param_1,uint param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffff8 | param_2;
  return;
}

