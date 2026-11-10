
ulong FUN_001f6e90(ulong param_1)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = FUN_001f63e0();
  uVar2 = FUN_001f63e0(param_1 >> 0x20);
  return uVar2 & 0xffffffff | lVar1 << 0x20;
}

