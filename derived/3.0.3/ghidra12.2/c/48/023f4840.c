
bool FUN_023f4840(long param_1)

{
  uint *puVar1;
  short sVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined *local_20;
  char *pcStack_18;
  
  if (param_1 == 0) {
    return true;
  }
  uVar5 = FUN_016dc824();
  if ((uVar5 & 1) == 0) {
    sVar2 = *(short *)PTR_DAT_04bb6298;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 0x19 & 1) != 0) goto LAB_023f4858;
    }
    local_20 = PTR_DAT_04bb2020 + 0x10;
    pcStack_18 = "NpcInteriorCoordinate";
    iVar4 = FUN_02743000(&local_20);
    bVar3 = iVar4 != 0;
  }
  else {
LAB_023f4858:
    bVar3 = true;
  }
  return bVar3;
}

