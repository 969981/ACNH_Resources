
bool FUN_00172b1c(long param_1)

{
  if (*(long *)(param_1 + 0xa8) == 0) {
    return false;
  }
  return (*(byte *)(param_1 + 0xe4) & 0xc) != 0;
}

