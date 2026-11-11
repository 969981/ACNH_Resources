
bool FUN_003b98c8(long param_1)

{
  uint uVar1;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((uVar1 >> 1 & 1) == 0) {
    return true;
  }
  return *(char *)(param_1 + 0xc + ((ulong)uVar1 & 1) * 4 + 5) != '\0';
}

