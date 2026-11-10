
void FUN_002b7b7c(long param_1)

{
  if (*(long *)(param_1 + 0x18) != 0) {
    FUN_002bc030();
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  FUN_002bc030();
  return;
}

