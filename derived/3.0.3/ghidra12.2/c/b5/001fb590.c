
bool FUN_001fb590(long param_1,uint param_2)

{
  return (param_2 & (*(uint *)(param_1 + 0x60) ^ 0xffffffff)) == 0;
}

