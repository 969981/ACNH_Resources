
bool FUN_00283230(long param_1,uint param_2,uint param_3)

{
  uint uVar1;
  
  if (((*(char *)(param_1 + 0x4c) == '\0') ||
      ((uint)*(ushort *)(param_1 + 0x3c) <= (param_2 & 0xff))) ||
     (uVar1 = (uint)*(ushort *)(param_1 + 0x3c), uVar1 <= (param_3 & 0xff))) {
    return false;
  }
  return *(char *)(*(long *)(param_1 + 0x20) +
                  ((ulong)param_3 & 0xff) + (ulong)uVar1 * ((ulong)param_2 & 0xff)) == '\x01' &&
         *(char *)(*(long *)(param_1 + 0x20) +
                  ((ulong)param_2 & 0xff) + (ulong)uVar1 * ((ulong)param_3 & 0xff)) == '\x01';
}

