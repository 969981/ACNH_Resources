
bool FUN_033fa910(void)

{
  uint *puVar1;
  int *piVar2;
  short sVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  
  puVar4 = PTR_DAT_04bb2020;
  lVar7 = *(long *)PTR_DAT_04bb27d0;
  if (((((lVar7 == 0) || (*(long *)(lVar7 + 0x28) == 0)) || (*(int *)(lVar7 + 0x80) != 1)) &&
      (*(uint *)(lVar7 + 0x80) < 2)) &&
     ((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0 || ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)))
     ) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "NpcInteriorCoordinate";
    iVar5 = FUN_02743000(&local_30);
    if (iVar5 == 0) {
      sVar3 = *(short *)PTR_DAT_04bb6298;
      if (sVar3 != -1) {
        puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          puVar1 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar1 >> 0x11 & 1) != 0) {
          return false;
        }
        local_30 = (undefined *)CONCAT44(local_30._4_4_,0x1f);
        piVar2 = (int *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
        if (0xff < (uint)(int)sVar3) {
          piVar2 = (int *)PTR_DAT_04bc39f8;
        }
        if (*piVar2 < 0) {
          return false;
        }
      }
      uVar6 = FUN_01c65b60();
      if (((uVar6 & 1) == 0) &&
         ((*(long *)PTR_DAT_04bb39b0 == 0 || (*(int *)(*(long *)PTR_DAT_04bb39b0 + 0x15c) == 0)))) {
        local_30 = puVar4 + 0x10;
        pcStack_28 = "CanSetPlayerBirthdayCallNpc";
        iVar5 = FUN_02743000(&local_30);
        if ((iVar5 == 0) || (DAT_0540762c < 0)) {
          return *(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) == 0;
        }
      }
    }
  }
  return false;
}

