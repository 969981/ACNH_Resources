
uint FUN_003c8860(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar2 = nn::os::TryWaitEvent((EventType *)(param_1 + 0x18));
  if ((uVar2 & 1) == 0) {
    return 1;
  }
  uVar1 = nn::os::TryWaitEvent((EventType *)(param_1 + 0x130));
  return (uVar1 ^ 1) & 1;
}

