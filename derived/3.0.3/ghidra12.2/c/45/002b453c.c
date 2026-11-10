
void FUN_002b453c(long param_1,char param_2)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xf | param_2 << 4;
  return;
}

