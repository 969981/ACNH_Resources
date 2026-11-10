
void FUN_0025f540(long param_1,uint param_2)

{
  *(uint *)(param_1 + 0x5c) =
       *(uint *)(param_1 + 0x5c) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  return;
}

