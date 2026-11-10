
undefined8 FUN_00172a6c(long param_1)

{
  int iVar1;
  
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(byte *)(param_1 + 0xe4) = *(byte *)(param_1 + 0xe4) & 0xf3;
  iVar1 = FUN_001734d8(param_1 + 0x18);
  if (iVar1 != 0) {
    FUN_00172f08(param_1);
  }
  return 0;
}

