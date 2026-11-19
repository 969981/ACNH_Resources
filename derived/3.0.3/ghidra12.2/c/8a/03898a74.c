
void FUN_03898a74(long param_1,undefined8 param_2)

{
  if (*(int *)(param_1 + 0xb0) < *(int *)(param_1 + 0xb4)) {
    *(undefined8 *)(*(long *)(param_1 + 0xb8) + (long)*(int *)(param_1 + 0xb0) * 8) = param_2;
    *(int *)(param_1 + 0xb0) = *(int *)(param_1 + 0xb0) + 1;
  }
  return;
}

