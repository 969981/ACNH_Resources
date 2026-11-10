
void FUN_002b452c(long param_1,byte param_2)

{
  *(byte *)(param_1 + 0x78) = *(byte *)(param_1 + 0x78) & 0xfc | param_2 & 3;
  return;
}

