
bool FUN_014ca7fc(long param_1)

{
  int iVar1;
  
  FUN_014e70e0(param_1 + 0x720,param_1 + 0xb40);
  iVar1 = *(int *)(param_1 + 0x3c0);
  if (iVar1 != 0xb) {
    FUN_03ebb160(param_1 + 0x3b8,0xb);
  }
  return iVar1 != 0xb;
}

