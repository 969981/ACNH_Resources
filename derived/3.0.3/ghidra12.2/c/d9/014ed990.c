
bool FUN_014ed990(long param_1)

{
  bool bVar1;
  int iVar2;
  long lVar3;
  
  if (*(int *)(param_1 + 0x18) != 4) {
    return false;
  }
  lVar3 = FUN_014bac20(param_1 + 0x90);
  bVar1 = false;
  if (lVar3 != 0) {
    iVar2 = FUN_02b820b0();
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

