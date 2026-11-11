
void FUN_004dc4c0(long param_1)

{
  if ((*(ulong *)(param_1 + 0x10) & 1) == 0) {
    return;
  }
  FUN_0043dd50(*(ulong *)(param_1 + 0x10) & 0xfffffffffffffffe);
  return;
}

