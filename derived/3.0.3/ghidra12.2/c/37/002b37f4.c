
undefined4 FUN_002b37f4(long param_1,uint param_2)

{
  if ((param_2 & 0xff) < (uint)*(byte *)(param_1 + 0x4e)) {
    return *(undefined4 *)(*(long *)(param_1 + 0x50) + (ulong)(param_2 & 0xff) * 0x34);
  }
  return 0;
}

