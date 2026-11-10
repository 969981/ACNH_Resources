
void FUN_00283ae4(long param_1)

{
  *(undefined8 *)(param_1 + 0x48) = 0;
  if (*(void **)(param_1 + 0x10) == (void *)0x0) {
    return;
  }
  memset(*(void **)(param_1 + 0x10),0,8);
  return;
}

