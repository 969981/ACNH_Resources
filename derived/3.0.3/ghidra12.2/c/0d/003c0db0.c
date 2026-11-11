
void FUN_003c0db0(long param_1,byte param_2)

{
  if (*(byte *)(param_1 + 0x1db) != (param_2 & 1)) {
    *(byte *)(param_1 + 0x1db) = param_2 & 1;
    *(ushort *)(param_1 + 0x1e8) = *(ushort *)(param_1 + 0x1e8) | 2;
  }
  return;
}

