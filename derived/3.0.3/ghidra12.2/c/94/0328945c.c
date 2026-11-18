
void FUN_0328945c(undefined8 param_1,int *param_2)

{
  int iVar1;
  bool bVar2;
  undefined8 uVar3;
  
  if (*param_2 == 0) {
    iVar1 = param_2[1];
    FUN_03288880(param_1);
    FUN_03289a60(param_1,1,0);
    bVar2 = iVar1 == 0;
    uVar3 = 0;
  }
  else {
    uVar3 = 2;
    bVar2 = false;
  }
  FUN_0328a0b0(param_1,uVar3,bVar2,0);
  return;
}

