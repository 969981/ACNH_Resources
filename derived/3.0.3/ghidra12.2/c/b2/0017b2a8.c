
bool FUN_0017b2a8(undefined4 param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetModule(param_2);
  if (iVar2 == iVar3) {
    iVar2 = nnResultGetDescription(param_1);
    iVar3 = nnResultGetDescription(param_2);
    bVar1 = iVar2 == iVar3;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

