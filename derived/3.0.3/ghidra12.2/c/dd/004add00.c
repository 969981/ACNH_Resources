
int FUN_004add00(long param_1)

{
  int iVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar2 = 0;
  do {
    iVar1 = FUN_004284f0(param_1);
    iVar2 = iVar1 + iVar2;
    param_1 = FUN_00427d30(param_1);
  } while (param_1 != 0);
  return iVar2;
}

