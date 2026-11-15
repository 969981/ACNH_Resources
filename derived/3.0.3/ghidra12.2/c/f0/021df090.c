
bool FUN_021df090(long param_1)

{
  uint uVar1;
  
  if (((param_1 == 0) || (uVar1 = *(uint *)(param_1 + 0x508), 9 < uVar1)) ||
     ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] == '\0')) {
    return false;
  }
  if (*(byte *)(*DAT_0537d558 + 0x476) < 2) {
    return (bool)((&DAT_053fea30)[(ulong)uVar1 * 0xba0] & 1);
  }
  return (*(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar1 * 0x28 + 0xe23) & 0x30) == 0x10;
}

