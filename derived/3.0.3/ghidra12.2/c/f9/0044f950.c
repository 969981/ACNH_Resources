
bool FUN_0044f950(undefined8 *param_1,undefined8 *param_2)

{
  uint uVar1;
  int iVar2;
  
  while( true ) {
    uVar1 = (uint)*(ulong *)*param_2;
    if (((DAT_04c6f8f8 & 1) == 0) || ((((uint)*(ulong *)*param_1 ^ uVar1) & 3) == 0)) break;
    DataMemoryBarrier(2,2);
    Yield();
  }
  iVar2 = (int)(*(ulong *)*param_1 >> 0x11);
  return iVar2 <= (int)(uVar1 >> 2 & 0x7fff) && (int)(*(ulong *)*param_2 >> 0x11) <= iVar2;
}

