
bool FUN_0076c408(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_0277d7b4(param_2,param_3);
  if (((((uVar2 & 1) == 0) || (*(char *)(param_2 + 3) != *(char *)(param_3 + 3))) ||
      (*(int *)(param_2 + 4) != *(int *)(param_3 + 4))) ||
     (*(int *)(param_2 + 8) != *(int *)(param_3 + 8))) {
    bVar1 = false;
  }
  else {
    bVar1 = *(int *)(param_2 + 0xc) == *(int *)(param_3 + 0xc);
  }
  return bVar1;
}

