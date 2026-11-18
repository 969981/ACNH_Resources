
uint FUN_0330198c(long param_1,int param_2)

{
  long lVar1;
  uint uVar2;
  
  lVar1 = (ulong)(param_2 - 2U) + 0x14;
  if (2 < param_2 - 2U) {
    lVar1 = 0x13;
  }
  uVar2 = FUN_033016f0(param_1,lVar1,1);
  *(int *)(param_1 + 0x1024) = param_2;
  return uVar2 & 1;
}

