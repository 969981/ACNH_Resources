
void FUN_00483b70(long param_1)

{
  long lVar1;
  
  if (0 < *(int *)(param_1 + 0x40)) {
    lVar1 = 0;
    do {
      *(long *)(*(long *)(*(long *)(param_1 + 0x38) + lVar1 * 8) + 0x20) = param_1;
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0x40));
  }
  return;
}

