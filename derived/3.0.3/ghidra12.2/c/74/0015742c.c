
void FUN_0015742c(long param_1)

{
  if ((*(long **)(param_1 + 0x550) == (long *)0x0) || (**(long **)(param_1 + 0x550) == 0)) {
    FUN_00157314(param_1);
    return;
  }
  FUN_00143a68();
  *(byte *)(param_1 + 0x558) = *(byte *)(param_1 + 0x558) | 1;
  FUN_001573a4(param_1 + 0x530);
  return;
}

