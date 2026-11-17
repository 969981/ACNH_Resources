
void FUN_030d3bdc(long param_1,long param_2)

{
  ulong uVar1;
  long lVar2;
  
  lVar2 = *(long *)(param_1 + 8);
  if ((*(int *)(param_2 + 0xc) != 0) && (uVar1 = FUN_02a8e9e8(param_2), (uVar1 & 1) != 0)) {
    *(int *)(lVar2 + 0xe08) = *(int *)(lVar2 + 0xe08) + 1;
  }
  return;
}

