
void FUN_00196d30(long param_1,long param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x28);
  *(long *)(param_1 + 0x28) = param_2;
  *(long *)(param_1 + 0x18) = (*(long *)(param_1 + 0x18) - param_2) + lVar1;
  return;
}

