
void FUN_005144a0(long param_1,int param_2,long param_3)

{
  long lVar1;
  
  FUN_004435a0(param_3);
  lVar1 = *(long *)(param_1 + 0x20);
  if (*(long *)(lVar1 + (long)param_2 * 8) != 0) {
    FUN_004435c0();
    lVar1 = *(long *)(param_1 + 0x20);
  }
  *(long *)(lVar1 + (long)param_2 * 8) = param_3;
  *(int *)(param_3 + 0x110) = param_2;
  return;
}

