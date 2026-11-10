
void FUN_001eb9c4(long param_1,ulong param_2)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x10) + (param_2 & 0xffffffff) * 0x148;
  FUN_001864f4(lVar1 + 8,param_1 + 0x168);
  memcpy((void *)(lVar1 + 0x50),(void *)(param_1 + 0x1b0),0xf8);
  return;
}

