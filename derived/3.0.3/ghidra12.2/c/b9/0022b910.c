
long FUN_0022b910(long param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_1 + 0x5f8);
  uVar1 = uVar2 + param_2;
  if (uVar1 < 0x5c1) {
    *(uint *)(param_1 + 0x5f8) = uVar1;
    return param_1 + (ulong)uVar2 + 0x38;
  }
  return 0;
}

