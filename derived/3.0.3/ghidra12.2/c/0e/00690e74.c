
void FUN_00690e74(undefined8 *param_1)

{
  if ((int)(*(int *)(param_1 + 1) + 0x3fU) < 0x40) {
    return;
  }
  memset((void *)*param_1,0,(ulong)((*(int *)(param_1 + 1) + 0x3fU >> 6) - 1) * 8 + 8);
  return;
}

