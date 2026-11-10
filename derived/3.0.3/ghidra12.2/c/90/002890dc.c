
void FUN_002890dc(long param_1,long param_2)

{
  long lVar1;
  
  if ((*(ushort *)(param_1 + 0xd0) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x90;
    FUN_00290438(lVar1);
  }
  FUN_002860e8(*(int *)(param_1 + 0x84) + param_2);
  *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
  if (lVar1 == 0) {
    return;
  }
  FUN_00290440(lVar1);
  return;
}

