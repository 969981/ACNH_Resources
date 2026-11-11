
void FUN_0053c880(long param_1,long param_2)

{
  long lVar1;
  
  if (param_2 != 0) {
    FUN_004435a0(param_2);
  }
  lVar1 = *(long *)(param_1 + 0x278);
  *(long *)(param_1 + 0x278) = param_2;
  if (lVar1 == 0) {
    return;
  }
  FUN_004435c0();
  return;
}

