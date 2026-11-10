
void FUN_00185d9c(long param_1,ulong param_2)

{
  ulong uVar1;
  
  *(ulong *)(param_1 + 0x50) = *(long *)(param_1 + 0x50) + param_2;
  *(long *)(param_1 + 0x58) = *(long *)(param_1 + 0x58) + 1;
  if (param_2 < *(ulong *)(param_1 + 0x40)) {
    *(ulong *)(param_1 + 0x40) = param_2;
    uVar1 = *(ulong *)(param_1 + 0x48);
  }
  else {
    uVar1 = *(ulong *)(param_1 + 0x48);
  }
  if (uVar1 < param_2) {
    *(ulong *)(param_1 + 0x48) = param_2;
    return;
  }
  return;
}

