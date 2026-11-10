
void FUN_002414c8(long param_1,void *param_2,uint param_3)

{
  if (0x17f < param_3) {
    param_3 = 0x180;
  }
  memset((void *)(param_1 + 0x5c),0,0x180);
  memcpy((void *)(param_1 + 0x5c),param_2,(ulong)param_3);
  *(uint *)(param_1 + 0x1dc) = param_3;
  return;
}

