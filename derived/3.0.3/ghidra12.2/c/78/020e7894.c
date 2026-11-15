
ushort FUN_020e7894(long param_1,byte *param_2)

{
  if ((*(byte *)(param_1 + 0x269) < 8) &&
     (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) != 0 ||
      1 < *(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476))) {
    return *(ushort *)(param_1 + 0x26e) >> (ulong)(*param_2 & 0x1f) & 1;
  }
  return 1;
}

