
ulong FUN_001e14d8(long param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xc);
  uVar2 = nn::socket::InetNtohs(*(ushort *)(param_1 + 10));
  return uVar2 & 0xffff | (ulong)uVar1 << 0x20;
}

