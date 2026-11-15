
uint FUN_021dd260(long param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  ulong uVar4;
  
  if (((param_1 != 0) && (uVar2 = *(uint *)(param_1 + 0x508), uVar2 < 10)) &&
     ((&DAT_053fee41)[(ulong)uVar2 * 0xba0] != '\0')) {
    if (1 < *(byte *)(*DAT_0537d558 + 0x476)) {
      return *(byte *)(*(long *)PTR_DAT_04bb3968 + (ulong)uVar2 * 0x28 + 0xe23) & 3;
    }
    if (0 < (int)(&DAT_053fe898)[(ulong)uVar2 * 0x2e8]) {
      uVar4 = (ulong)uVar2;
      iVar3 = (&DAT_053fe898)[(ulong)uVar2 * 0x2e8] + (&DAT_053fe894)[uVar4 * 0x2e8] + -1;
      iVar1 = 0;
      if ((int)(&DAT_053fe890)[uVar4 * 0x2e8] <= iVar3) {
        iVar1 = (&DAT_053fe890)[uVar4 * 0x2e8];
      }
      return *(uint *)((&DAT_053fe888)[uVar4 * 0x174] + (long)(iVar3 - iVar1) * 0x14 + 8);
    }
  }
  return DAT_0538ea6c;
}

