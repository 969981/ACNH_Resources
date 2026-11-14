
ulong FUN_01ad68b4(long param_1)

{
  int iVar1;
  uint3 local_24;
  
  iVar1 = FUN_0277d6c4(param_1 + 8);
  if ((iVar1 == 0xac5) || (iVar1 = FUN_0277d6c4(param_1 + 8), iVar1 == 0x14ed)) {
    local_24 = 0x80023;
    FUN_020fd218(&local_24,*(uint *)(param_1 + 0xc) & 0xff,*(uint *)(param_1 + 0xc) >> 8 & 0xff);
  }
  else {
    local_24 = 0x80023;
  }
  return (ulong)local_24;
}

