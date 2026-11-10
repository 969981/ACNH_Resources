
bool FUN_002e9828(long param_1,int param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x2c8);
  if (lVar1 == 0) {
    return false;
  }
  return ((*(int *)(lVar1 + 0x10) == param_2 || *(int *)(lVar1 + 0x658) == param_2) ||
         *(int *)(lVar1 + 0xca0) == param_2) || *(int *)(lVar1 + 0x12e8) == param_2;
}

