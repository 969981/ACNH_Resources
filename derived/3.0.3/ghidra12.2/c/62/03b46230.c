
bool FUN_03b46230(long param_1,long param_2)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(int *)(param_1 + 0xc) < 3;
  bVar2 = *(long *)(param_1 + 0x118) == 0;
  if ((bVar1 && bVar2) && (*(long *)(param_1 + 0x118) = param_2, param_2 != 0)) {
    FUN_03b46430();
  }
  return bVar1 && bVar2;
}

