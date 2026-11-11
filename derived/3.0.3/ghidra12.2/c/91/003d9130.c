
void FUN_003d9130(long param_1)

{
  undefined4 uVar1;
  
  *(long *)(param_1 + 0x848) = param_1;
  *(int *)(param_1 + 0x844) = (int)param_1;
  uVar1 = FUN_003c98bc();
  FUN_003c9a08(uVar1,param_1 + 0x800,1);
  return;
}

