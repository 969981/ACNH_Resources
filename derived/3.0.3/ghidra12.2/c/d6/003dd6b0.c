
void FUN_003dd6b0(long *param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = 0;
  if (param_1[2] != 0) {
    uVar1 = (ulong)(param_2 - *param_1) / (ulong)param_1[2];
  }
  *(byte *)((long)param_1 + (uVar1 >> 3) + 0x20) =
       *(byte *)((long)param_1 + (uVar1 >> 3) + 0x20) & ((byte)(1 << (uVar1 & 7)) ^ 0xff);
  *(int *)((long)param_1 + 0x1c) = *(int *)((long)param_1 + 0x1c) + -1;
  return;
}

