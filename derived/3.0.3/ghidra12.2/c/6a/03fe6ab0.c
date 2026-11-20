
void FUN_03fe6ab0(long param_1,ushort param_2)

{
  ushort uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0x3170d8);
  if ((*(char *)(*(long *)(param_1 + 0x45940) + 0x34710) == '\0') ||
     ((param_2 & 0xff) != uVar1 >> 8)) {
    uVar1 = uVar1 & 0xff | param_2 << 8;
    *(ushort *)(param_1 + 0x3170d8) = uVar1;
    if (uVar1 != *(ushort *)(param_1 + 0x3170da)) {
      *(ushort *)(param_1 + 0x3170da) = uVar1;
      FUN_03fe5eb0();
      return;
    }
  }
  return;
}

