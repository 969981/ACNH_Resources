
void FUN_00172d70(long param_1,long param_2)

{
  long lVar1;
  
  *(int *)(param_1 + 0xd8) = *(int *)(param_1 + 0xd8) + *(int *)(param_2 + 0xd0);
  lVar1 = *(long *)(param_1 + 0x78);
  if (lVar1 != 0) {
    *(long *)(param_2 + 0x88) = lVar1;
    *(long *)(lVar1 + 0x80) = param_2;
  }
  *(long *)(param_1 + 0x78) = param_2;
  *(long *)(param_2 + 0x70) = param_1;
  return;
}

