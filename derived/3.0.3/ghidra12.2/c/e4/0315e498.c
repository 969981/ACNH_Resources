
void FUN_0315e498(long param_1)

{
  undefined4 uVar1;
  int iVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)(param_1 + 0x210) + 0x588);
  if (*(uint *)(lVar3 + 0x298) < 2) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(lVar3 + 0x444) + *(int *)(lVar3 + 0x2e8) * *(int *)(lVar3 + 0x440);
  }
  uVar1 = FUN_031669b0(param_1,iVar2);
  FUN_03166b9c(param_1,uVar1);
  return;
}

