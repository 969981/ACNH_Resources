
void FUN_0039a17c(long param_1,long param_2)

{
  if ((**(byte **)(param_2 + 200) >> 1 & 1) != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0x10a) & 2) == 0 && *(int *)(param_1 + 0x128) == 0) {
    FUN_0039a020();
    return;
  }
  FUN_00399d70();
  return;
}

