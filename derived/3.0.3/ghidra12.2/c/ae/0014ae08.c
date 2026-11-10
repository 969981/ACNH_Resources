
int FUN_0014ae08(undefined8 *param_1)

{
  int iVar1;
  
  if (param_1[0xa8] != 0) {
    param_1[0xd] = param_1[0xa8];
    param_1[0xa8] = 0;
  }
  iVar1 = FUN_001500d0(param_1);
  if (iVar1 != 0) {
    FUN_0014f784(*param_1,param_1,1);
  }
  return iVar1;
}

