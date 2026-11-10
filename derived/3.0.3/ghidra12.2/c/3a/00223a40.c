
void FUN_00223a40(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  
  lVar1 = param_1 + 0x170;
  if (*(long *)(param_1 + 0x178) != lVar1) {
    lVar2 = (long)*(int *)(param_1 + 0x184);
    lVar3 = *(long *)(param_1 + 0x178) - lVar2;
    do {
      if (*(ulong *)(lVar3 + 0x10) <= *(ulong *)(param_2 + 0x10)) {
        FUN_002236bc(lVar1,lVar3 + lVar2,lVar2 + param_2);
        return;
      }
      lVar3 = *(long *)(lVar3 + lVar2 + 8) - lVar2;
    } while (lVar3 != lVar1 - lVar2);
  }
  FUN_002904f0(param_1 + 0x120);
  FUN_002236bc(lVar1,lVar1,*(int *)(param_1 + 0x184) + param_2);
  return;
}

