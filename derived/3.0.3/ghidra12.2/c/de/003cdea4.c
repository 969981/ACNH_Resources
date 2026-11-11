
void FUN_003cdea4(long param_1,void *param_2)

{
  int iVar1;
  
  memcpy((void *)(param_1 + (long)*(int *)(param_1 + 0x1f514) * 0xfa8 + 0x10),param_2,0xfa8);
  iVar1 = 0;
  if (*(int *)(param_1 + 0x1f514) < 0x1f) {
    iVar1 = *(int *)(param_1 + 0x1f514) + 1;
  }
  *(int *)(param_1 + 0x1f514) = iVar1;
  return;
}

