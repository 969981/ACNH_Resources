
bool FUN_0308bdc0(undefined8 param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  ulong uVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 local_30;
  char *pcStack_28;
  
  uVar7 = FUN_02915598();
  if (((uVar7 & 1) != 0) && (iVar5 = FUN_0266c940(param_1), iVar5 != 1)) {
    return true;
  }
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    uVar4 = local_30._4_4_;
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if (((*puVar1 >> 0x17 & 1) != 0) && ((*puVar1 >> 0x15 & 1) != 0)) {
      return true;
    }
    local_30 = (undefined *)CONCAT44(local_30._4_4_,0x19);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((((*puVar1 >> 0x19 & 1) != 0) &&
        (local_30 = (undefined *)((ulong)local_30._4_4_ << 0x20), (*puVar1 & 1) != 0)) &&
       (local_30 = (undefined *)CONCAT44(uVar4,0x1a), (*puVar1 >> 0x1a & 1) != 0)) {
      return true;
    }
  }
  if (*(long *)PTR_DAT_04bb2800 != 0) {
    local_30 = PTR_DAT_04bb2020 + 0x10;
    pcStack_28 = "NpcInteriorCoordinate";
    iVar5 = FUN_02743000(&local_30);
    if (iVar5 != 0) {
      return true;
    }
  }
  puVar3 = PTR_DAT_04bb2720;
  lVar9 = *(long *)PTR_DAT_04bb2720;
  iVar5 = 0;
  if (lVar9 != 0) {
    if (*(long *)(lVar9 + 0x330) == 0) {
      iVar5 = 0;
    }
    else {
      puVar8 = (undefined8 *)
               (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                         (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar9 + 0x338));
      iVar6 = FUN_006bd550(*puVar8,0);
      iVar5 = 0;
      if (iVar6 == 0x758f7eaf) {
        iVar5 = 0;
        if (*(long *)puVar3 != 0) {
          lVar9 = *(long *)(*(long *)puVar3 + 0x330);
          iVar5 = 0;
          if (lVar9 != 0) {
            iVar5 = *(int *)(lVar9 + 0x244);
          }
        }
      }
    }
  }
  if ((*(int *)(PTR_DAT_04bbe4b0 + 0xcc) == iVar5) && (*(long *)PTR_DAT_04bb4938 != 0)) {
    return *(int *)(*(long *)PTR_DAT_04bb4938 + 0x98) != 0;
  }
  return false;
}

