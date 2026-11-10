
ulong FUN_002aaa28(long param_1)

{
  ulong uVar1;
  
  uVar1 = *(ulong *)(param_1 + 0x30);
  if (*(byte *)(param_1 + 0x2a) != 0) {
    uVar1 = (ulong)*(byte *)(param_1 + 0x2a);
  }
  return uVar1;
}

