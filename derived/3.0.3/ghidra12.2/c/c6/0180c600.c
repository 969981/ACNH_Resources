
bool FUN_0180c600(void)

{
  uint *puVar1;
  short sVar2;
  int iVar3;
  undefined *local_20;
  char *pcStack_18;
  
  if ((*(long *)PTR_DAT_04bb5ce0 == 0) || (sVar2 = *(short *)PTR_DAT_04bb6298, sVar2 == -1)) {
    return false;
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
  if (0xff < (uint)(int)sVar2) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x19 & 1) == 0) {
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 7 & 1) != 0) {
      local_20 = PTR_DAT_04bb2020 + 0x10;
      pcStack_18 = "NpcInteriorCoordinate";
      iVar3 = FUN_02743000(&local_20);
      return iVar3 != 0;
    }
  }
  return false;
}

