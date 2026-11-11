
void FUN_0039fcd4(long param_1,long param_2,int param_3)

{
  long lVar1;
  
  lVar1 = (ulong)*(byte *)(param_1 + 0x1e) * 4;
  *(uint *)(param_2 + lVar1) =
       param_3 << (ulong)(*(byte *)(param_1 + 0x1f) & 0x1f) |
       *(uint *)(param_2 + lVar1) & (*(uint *)(param_1 + 0x20) ^ 0xffffffff);
  return;
}

