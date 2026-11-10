
bool FUN_0017bdb4(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = nnResultGetModule(param_1);
  iVar3 = nnResultGetDescription(param_1);
  bVar1 = iVar2 != 0x7b;
  return (((!bVar1 && iVar3 != 0x69) && (bVar1 || 0x68 < iVar3)) && iVar3 + -0x6b < 0) !=
         (((!bVar1 && iVar3 != 0x69) && (bVar1 || 0x68 < iVar3)) && SBORROW4(iVar3,0x6b));
}

