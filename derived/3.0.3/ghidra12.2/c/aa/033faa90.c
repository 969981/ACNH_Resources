
undefined8 FUN_033faa90(void)

{
  undefined *puVar1;
  uint *puVar2;
  short sVar3;
  int iVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  undefined *local_30;
  char *pcStack_28;
  
  sVar3 = *(short *)PTR_DAT_04bb6298;
  if (sVar3 == -1) {
    return 0;
  }
  puVar2 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar3 * 8);
  if (0xff < (uint)(int)sVar3) {
    puVar2 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar2 >> 0x19 & 1) != 0) {
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "Unlock_HousePhoto";
    local_30 = puVar1;
    uVar5 = FUN_02758850(&local_30);
    if ((int)uVar5 == 0) {
      return uVar5;
    }
    pcStack_28 = "IsParty";
    local_30 = puVar1;
    iVar4 = FUN_02758850(&local_30);
    if (iVar4 == 0) {
      if (*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) {
        lVar7 = *(long *)PTR_DAT_04bb27f8;
        if (lVar7 == 0) {
          return 0;
        }
      }
      else {
        if ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0) {
          return 0;
        }
        lVar7 = *(long *)PTR_DAT_04bb27f8;
        if (lVar7 == 0) {
          return 0;
        }
      }
      if ((((*(int *)(lVar7 + 0x14) == 4) || (*(int *)(lVar7 + 0x14) == 5)) ||
          (*(int *)(lVar7 + 0x14) == 7)) || (uVar6 = FUN_036e5810(lVar7), (uVar6 & 1) != 0)) {
        return 1;
      }
    }
  }
  return 0;
}

