
void FUN_01bdbdb8(long param_1)

{
  if ((*(uint *)(param_1 + 0x8c0) & 0xfffffffe) == 0xe) {
    FUN_01bda460();
    return;
  }
  FUN_01bdaa30(param_1 + 0x8c0,param_1 + 0x4e8);
  return;
}

