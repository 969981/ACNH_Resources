
ulong FUN_003c4698(ulong param_1,uint param_2)

{
  ulong uVar1;
  
  uVar1 = -(param_1 >> 0x1f & 1) & 0xffffffe000000000 | (param_1 & 0xffffffff) << 5;
  if ((param_2 & 1) == 0) {
    uVar1 = 0;
  }
  return uVar1;
}

