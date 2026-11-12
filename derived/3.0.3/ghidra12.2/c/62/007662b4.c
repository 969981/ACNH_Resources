
bool FUN_007662b4(long param_1,long param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0277d7b4();
  if (((((uVar2 & 1) == 0) || (*(char *)(param_1 + 3) != *(char *)(param_2 + 3))) ||
      (*(int *)(param_1 + 4) != *(int *)(param_2 + 4))) ||
     (*(int *)(param_1 + 8) != *(int *)(param_2 + 8))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_1 + 0xc) == *(int *)(param_2 + 0xc);
  }
  return bVar1;
}

