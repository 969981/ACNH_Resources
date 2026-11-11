
void FUN_003b4a78(long param_1,uint param_2)

{
  ulong uVar1;
  undefined4 uVar2;
  
  *(uint *)(param_1 + 0x28) = param_2;
  uVar2 = 1;
  if (0xffff < (int)param_2) {
    uVar2 = 2;
  }
  *(undefined4 *)(param_1 + 0x1c) = uVar2;
  uVar1 = -(ulong)(param_2 >> 0x1f) & 0xfffffffe00000000 | (ulong)param_2 << 1;
  if (0xffff < (int)param_2) {
    uVar1 = (ulong)param_2 << 2;
  }
  *(ulong *)(param_1 + 0x38) = uVar1;
  return;
}

