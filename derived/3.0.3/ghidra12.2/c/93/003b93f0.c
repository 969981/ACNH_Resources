
undefined4 FUN_003b93f0(long param_1)

{
  uint uVar1;
  
  uVar1 = *(ushort *)(param_1 + 0xc) - 0x2201;
  if (uVar1 < 3) {
    return *(undefined4 *)(&DAT_04138250 + (long)(short)uVar1 * 4);
  }
  return 0;
}

