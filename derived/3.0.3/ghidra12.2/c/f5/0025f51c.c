
void FUN_0025f51c(long param_1,uint param_2,int param_3)

{
  if (*(int *)(param_1 + 0x58) == param_3) {
    *(uint *)(param_1 + 0x5c) =
         *(uint *)(param_1 + 0x5c) & (1 << (ulong)(param_2 & 0x1f) ^ 0xffffffffU);
  }
  return;
}

