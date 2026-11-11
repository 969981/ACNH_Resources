
void FUN_003bdc6c(long param_1,long param_2,int param_3)

{
  *(long *)(param_1 + 0x68) = param_2;
  *(long *)(param_1 + 0x70) = param_2 + param_3;
  return;
}

