
void FUN_03684d34(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = (ulong)**(uint **)(param_1 + 0x10);
  if (0x14 < **(uint **)(param_1 + 0x10)) {
    uVar1 = 0;
  }
  if (**(int **)(param_1 + 8) <= (int)(uint)*(ushort *)(param_2 + uVar1 * 2)) {
    **(int **)(param_1 + 0x18) = **(int **)(param_1 + 0x18) + 1;
  }
  return;
}

