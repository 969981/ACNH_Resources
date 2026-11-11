
bool FUN_0044f9c0(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  
  while( true ) {
    uVar1 = *(ulong *)*param_1 ^ *(ulong *)*param_2;
    if (((DAT_04c6f8f8 & 1) == 0) || ((uVar1 & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  return (int)(*(ulong *)*param_1 >> 0x11) == (int)(*(ulong *)*param_2 >> 0x11) &&
         (uVar1 & 0x1fffc) == 0;
}

