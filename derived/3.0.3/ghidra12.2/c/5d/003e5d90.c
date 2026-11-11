
void FUN_003e5d90(long param_1,void *param_2,size_t param_3)

{
  if ((*(byte *)(param_1 + 0x38) >> 1 & 1) == 0) {
    return;
  }
  memset(param_2,DAT_04c11a98,param_3);
  return;
}

