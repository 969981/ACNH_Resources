
void FUN_011bd0f0(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_0073d768(*(undefined8 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10));
  if ((uVar1 & 1) != 0) {
    *(undefined4 *)(param_1 + 0x60) = 1;
  }
  return;
}

