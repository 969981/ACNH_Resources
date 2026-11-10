
bool FUN_0036515c(long param_1,long param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  
  bVar1 = *(long *)(param_1 + 400) != param_2;
  bVar2 = *(short *)(param_1 + 0x198) != param_3;
  if (bVar1 || bVar2) {
    *(long *)(param_1 + 400) = param_2;
    *(short *)(param_1 + 0x198) = param_3;
  }
  return bVar1 || bVar2;
}

