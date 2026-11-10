
long FUN_001e15a8(long param_1,long param_2)

{
  memcpy((void *)(param_1 + 8),(void *)(param_2 + 8),0x80);
  *(undefined4 *)(param_1 + 0x88) = *(undefined4 *)(param_2 + 0x88);
  return param_1;
}

