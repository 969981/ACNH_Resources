
bool FUN_01ce59c0(long param_1,long param_2)

{
  ulong uVar1;
  ulong uVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  ulong uVar6;
  
  iVar4 = FUN_00a7f6d4(param_2);
  uVar1 = 0;
  if (iVar4 != -1) {
    uVar1 = (long)iVar4;
  }
  iVar4 = FUN_00a7f6d4(param_1);
  uVar2 = 0;
  if (iVar4 != -1) {
    uVar2 = (long)iVar4;
  }
  if (uVar2 == uVar1) {
    if (uVar1 == 0) {
      bVar3 = true;
    }
    else {
      uVar2 = 1;
      uVar6 = 0;
      do {
        uVar5 = uVar2;
        bVar3 = *(char *)(param_1 + uVar6) == *(char *)(param_2 + uVar6);
        uVar2 = (ulong)((int)uVar5 + 1);
        uVar6 = uVar5;
      } while ((bVar3 && uVar5 <= uVar1) && (!bVar3 || uVar1 != uVar5));
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}

