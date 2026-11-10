
void FUN_00386098(long param_1,int param_2)

{
  *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffff0f | param_2 << 4;
  return;
}

