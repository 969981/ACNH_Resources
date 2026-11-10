
void FUN_001864a0(long *param_1,long *param_2)

{
  uint uVar1;
  
  *param_1 = (long)(PTR_DAT_04bcbc98 + 0x10);
  uVar1 = (**(code **)(*param_2 + 0x30))(param_2);
  FUN_00188844(param_1 + 1,uVar1 & 1);
  FUN_00187b80(param_1 + 6,param_2 + 6);
  return;
}

