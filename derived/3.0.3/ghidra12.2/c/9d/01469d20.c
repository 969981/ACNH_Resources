
bool FUN_01469d20(long param_1)

{
  uint *puVar1;
  short sVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  long lVar6;
  undefined *local_30;
  char *pcStack_28;
  
  puVar3 = PTR_DAT_04bb6298;
  sVar2 = *(short *)PTR_DAT_04bb6298;
  if (sVar2 != -1) {
    local_30 = (undefined *)CONCAT44(local_30._4_4_,0x1a);
    puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
    if (0xff < (uint)(int)sVar2) {
      puVar1 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar1 >> 0x1a & 1) != 0) {
      return false;
    }
  }
  lVar6 = *(long *)PTR_DAT_04bb27d0;
  if (((lVar6 == 0) || (*(long *)(lVar6 + 0x28) == 0)) || (*(int *)(lVar6 + 0x80) != 1)) {
    uVar5 = FUN_02915598(param_1 + 0x2c4);
    if ((uVar5 & 1) != 0) {
LAB_01469db4:
      return 1 < *(uint *)(param_1 + 0x280);
    }
    sVar2 = *(short *)puVar3;
    if (sVar2 != -1) {
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 3 & 1) != 0) goto LAB_01469db4;
      puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar2 * 8);
      if (0xff < (uint)(int)sVar2) {
        puVar1 = (uint *)PTR_DAT_04bc39f8;
      }
      if ((*puVar1 >> 7 & 1) != 0) {
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "NpcInteriorCoordinate";
        iVar4 = FUN_02743000(&local_30);
        if (iVar4 == 0) goto LAB_01469db4;
      }
    }
  }
  return false;
}

