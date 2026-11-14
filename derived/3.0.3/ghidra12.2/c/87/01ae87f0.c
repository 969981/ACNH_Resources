
bool FUN_01ae87f0(undefined8 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01ae7550();
  if ((iVar1 == 10) || (iVar1 = FUN_01ae7550(param_1), iVar1 == 0xb)) {
    return true;
  }
  iVar1 = FUN_01ae7550(param_1);
  return iVar1 == 0xc;
}

