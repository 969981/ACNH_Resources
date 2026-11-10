
ulong FUN_001e0d04(int param_1)

{
  ulong uVar1;
  
  uVar1 = nn::socket::Shutdown(param_1,2);
  return uVar1 >> 0x1f & 1;
}

