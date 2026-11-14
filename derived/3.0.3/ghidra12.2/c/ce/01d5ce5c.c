
void FUN_01d5ce5c(long param_1)

{
  long lVar1;
  uint local_4;
  
  lVar1 = *(long *)PTR_DAT_04bb27f0;
  if (lVar1 != 0) {
    *(uint *)(lVar1 + 0x43c) = *(uint *)(lVar1 + 0x43c) | 8;
  }
  FUN_01dace80();
  lVar1 = **(long **)PTR_DAT_04bb27d0;
  local_4 = (uint)(((*(uint *)(lVar1 + 0x48) ^ 0xffffffff) & 10) == 0);
  if (((*(uint *)(lVar1 + 200) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 2;
  }
  if (((*(uint *)(lVar1 + 0x148) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 4;
  }
  if (((*(uint *)(lVar1 + 0x1c8) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 8;
  }
  if (((*(uint *)(lVar1 + 0x248) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 0x10;
  }
  if (((*(uint *)(lVar1 + 0x2c8) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 0x20;
  }
  if (((*(uint *)(lVar1 + 0x348) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 0x40;
  }
  if (((*(uint *)(lVar1 + 0x3c8) ^ 0xffffffff) & 10) == 0) {
    local_4 = local_4 | 0x80;
  }
  FUN_01d66574(param_1 + 0x200,&local_4);
  *PTR_DAT_04bb4518 = 1;
  return;
}

