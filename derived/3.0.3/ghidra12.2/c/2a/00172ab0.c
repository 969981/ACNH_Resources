
undefined8 FUN_00172ab0(long param_1,byte param_2)

{
  int iVar1;
  
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) | param_2;
  iVar1 = FUN_001734d8(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_00172f08(param_1);
  }
  return 0;
}

