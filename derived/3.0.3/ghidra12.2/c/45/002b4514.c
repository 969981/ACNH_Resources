
void FUN_002b4514(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf3 | (param_2 & 3) << 2;
  return;
}

