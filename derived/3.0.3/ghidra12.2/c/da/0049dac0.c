
undefined1  [16] FUN_0049dac0(long param_1)

{
  long lVar1;
  undefined1 auVar2 [16];
  
  if (*(int *)(param_1 + 0xc0) < 1) {
    return ZEXT816(0);
  }
  lVar1 = *(long *)(param_1 + 0x90) + (long)*(int *)(param_1 + 0x80);
  auVar2._8_8_ = lVar1 + (*(int **)(param_1 + 0xb8))[1];
  auVar2._0_8_ = lVar1 + **(int **)(param_1 + 0xb8);
  return auVar2;
}

