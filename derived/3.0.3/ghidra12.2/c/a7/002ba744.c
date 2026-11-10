
void FUN_002ba744(long param_1)

{
  if (*(long *)(param_1 + 0x88) != 0) {
    FUN_002a8f10();
  }
  if (*(long *)(param_1 + 0x90) != 0) {
    FUN_002a8f10();
  }
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_002a8f10();
  }
  if (*(long *)(param_1 + 0xa0) == 0) {
    return;
  }
  FUN_002a8f10();
  return;
}

