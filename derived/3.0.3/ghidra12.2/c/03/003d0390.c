
void FUN_003d0390(long param_1)

{
  if (*(char *)(param_1 + 0x2c1) == '\0') {
    *(undefined2 *)(param_1 + 0x2c0) = 0x100;
    FUN_003d0c14(param_1 + 0x18,0);
    return;
  }
  return;
}

