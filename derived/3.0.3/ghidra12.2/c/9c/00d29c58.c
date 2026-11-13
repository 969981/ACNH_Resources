
void FUN_00d29c58(long param_1)

{
  int iVar1;
  long lVar2;
  undefined *local_30;
  char *pcStack_28;
  int local_4;
  
  local_4 = 0;
  FUN_00d29820(&local_4,param_1 + 0xd8);
  lVar2 = *(long *)PTR_DAT_04bb4128;
  if (*(int *)(lVar2 + 0x294) == local_4) {
    if (*(int *)(lVar2 + 0x298) < 2) {
      return;
    }
    if (6 < *(uint *)(lVar2 + 0x294)) {
      return;
    }
    if (*(uint *)(lVar2 + 0x294) == 2) {
      local_30 = PTR_DAT_04bb2020 + 0x10;
      pcStack_28 = "MuseumCafePayOption";
      iVar1 = FUN_02743000(&local_30);
      if (iVar1 == 0) {
        return;
      }
    }
  }
  else if (local_4 < *(int *)(lVar2 + 0x294)) {
    return;
  }
  *(undefined4 *)(param_1 + 0xb0) = 1;
  return;
}

