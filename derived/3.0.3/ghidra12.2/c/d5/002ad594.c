
void FUN_002ad594(long param_1,uint param_2)

{
  if (0xffffffe < param_2) {
    param_2 = 0xfffffff;
  }
  *(uint *)(param_1 + 0x54) = param_2;
  return;
}

