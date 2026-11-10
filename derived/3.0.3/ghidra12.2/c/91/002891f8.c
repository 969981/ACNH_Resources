
void FUN_002891f8(long param_1,long param_2)

{
  long lVar1;
  
  FUN_00290438(&DAT_04c608c8);
  if ((*(ushort *)(param_1 + 0xd0) & 1) == 0) {
    lVar1 = 0;
  }
  else {
    lVar1 = param_1 + 0x90;
    FUN_00290438(lVar1);
  }
  FUN_002860d0(param_1 + 0x48,*(int *)(param_1 + 0x5c) + param_2);
  *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 1;
  if (lVar1 != 0) {
    FUN_00290440(lVar1);
  }
  FUN_00290440(&DAT_04c608c8);
  return;
}

