
ulong FUN_01b08d84(long param_1)

{
  ulong uVar1;
  
  uVar1 = FUN_01377be0();
  if ((((uVar1 & 1) == 0) || (uVar1 = FUN_01377be0(param_1), (uVar1 & 1) == 0)) ||
     (uVar1 = (ulong)*(ushort *)(param_1 + 0xc), 0xdb < *(ushort *)(param_1 + 0xc))) {
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

