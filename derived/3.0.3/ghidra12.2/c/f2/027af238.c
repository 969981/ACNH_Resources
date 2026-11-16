
bool FUN_027af238(byte *param_1)

{
  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint local_14;
  
  bVar1 = param_1[0x58];
  if (bVar1 == 2) {
    FUN_027af340(&local_14);
    if (((DAT_04f292d0 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04f292d0), iVar2 != 0)) {
      FUN_00dd5f80(&DAT_04f292c0);
      __cxa_guard_release(&DAT_04f292d0);
    }
    if (*(uint *)PTR_DAT_04bb8aa0 <= local_14) {
      local_14 = 0;
    }
    return *(int *)(*(long *)(PTR_DAT_04bb8aa0 + 8) + (long)(int)local_14 * 4) != 0;
  }
  if (bVar1 == 1) {
    uVar3 = (ulong)*param_1;
    if (((uVar3 < 0x23) && (param_1[1] <= (byte)PTR_DAT_04bc27f0[uVar3])) &&
       (((uint)(&DAT_053e6eb8)[uVar3] >> (ulong)(param_1[1] & 0x1f) & 1) != 0)) {
      return *(int *)(param_1 + 4) != 0;
    }
  }
  else if (bVar1 == 0) {
    return *(int *)(param_1 + 0x1c) != 0 && *(int *)param_1 != 0;
  }
  return false;
}

