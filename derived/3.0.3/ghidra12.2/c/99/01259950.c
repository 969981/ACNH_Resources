
void FUN_01259950(long param_1)

{
  if (*(uint *)(param_1 + 0x10) < 8) {
    *(uint *)(*(long *)(param_1 + 8) + 0x184) =
         *(uint *)(*(long *)(param_1 + 8) + 0x184) | 1 << (ulong)(*(uint *)(param_1 + 0x10) & 0x1f);
  }
  return;
}

