
void FUN_003e5db0(long param_1,void *param_2,size_t param_3)

{
  if ((*(ushort *)(param_1 + 0x38) & 1) != 0) {
    memset(param_2,0,param_3);
    return;
  }
  if ((*(ushort *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return;
  }
  memset(param_2,DAT_04c11a94,param_3);
  return;
}

