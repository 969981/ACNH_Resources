
void FUN_0031ee14(long param_1,ulong param_2)

{
  if (*(char *)(param_1 + 0x3c) == '\0' || *(int *)(param_1 + 0x38) != 2) {
    return;
  }
  memcpy(*(void **)(param_1 + (param_2 & 0xffffffff) * 8 + 0x18),*(void **)(param_1 + 0x30),
         *(size_t *)(param_1 + 0x40));
  return;
}

