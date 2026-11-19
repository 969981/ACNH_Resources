
void FUN_03c839f0(long param_1,int param_2)

{
  *(int *)(param_1 + 0x2c) = param_2;
  while (param_2 != -0x80000000) {
    if (*(char *)(param_1 + 0x20) == '\0') {
      FUN_03c83a50(param_1,1);
    }
    FUN_03c835a0(param_1);
    param_2 = *(int *)(param_1 + 0x2c);
  }
  return;
}

