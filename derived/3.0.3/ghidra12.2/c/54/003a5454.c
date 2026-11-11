
void FUN_003a5454(long param_1)

{
  if (*(float *)(param_1 + 0x40) != **(float **)(param_1 + 8)) {
    (**(code **)(PTR_PTR_04bd0a70 + ((ulong)(*(uint *)(param_1 + 0x7c) >> 5) & 3) * 0x10))();
    *(undefined4 *)(param_1 + 0x40) = **(undefined4 **)(param_1 + 8);
  }
  return;
}

