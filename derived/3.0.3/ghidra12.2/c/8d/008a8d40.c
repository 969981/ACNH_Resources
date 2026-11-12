
void FUN_008a8d40(long param_1)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = FUN_008f96c0();
  if ((uVar2 & 1) == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x174) == 1) {
    bVar1 = *(float *)(*(long *)(DAT_05231900 + 0x78) + 0x3c) != 0.0;
  }
  else {
    bVar1 = false;
  }
  *(bool *)(param_1 + 0x2e1) = bVar1;
  FUN_008a8414(param_1,0);
  return;
}

