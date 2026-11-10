
bool FUN_0017bd6c(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetDescription(param_1);
  bVar1 = iVar2 != 0x7b;
  return (((!bVar1 && iVar3 != 0x65) && (bVar1 || 100 < iVar3)) && iVar3 + -0x67 < 0) !=
         (((!bVar1 && iVar3 != 0x65) && (bVar1 || 100 < iVar3)) && SBORROW4(iVar3,0x67));
}

