
undefined8 FUN_0125fc6c(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  int *piVar8;
  long lVar9;
  undefined *local_60;
  char *pcStack_58;
  undefined *local_50;
  char *pcStack_48;
  
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != 0x6622bd46) {
    return 0;
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "HotelConstruction";
  local_50 = puVar1;
  uVar6 = FUN_0273f0a0(&local_50);
  if ((uVar6 & 1) == 0) {
    pcStack_58 = "HotelBuilt";
    local_60 = puVar1;
    uVar6 = FUN_0273f0a0(&local_60);
    if ((uVar6 & 1) == 0) {
      return 0;
    }
  }
  if ((DAT_0519d040 != 0) && (*(char *)(DAT_0519d040 + 0x4b30) != '\0')) {
    uVar2 = *(uint *)(DAT_0519d040 + 0x4b34);
    lVar7 = FUN_01260194(0xe7);
    local_50 = (undefined *)CONCAT44(local_50._4_4_,uVar2);
    if ((uVar2 < *(uint *)(lVar7 + 0x420)) &&
       (lVar7 = *(long *)(*(long *)(lVar7 + 0x428) + (long)(int)uVar2 * 8), lVar7 != 0)) {
      piVar8 = (int *)(**(code **)(*(long *)(lVar7 + 0x1e8) + 0xf0))(lVar7 + 0x1e8);
      iVar3 = *piVar8;
      lVar9 = (**(code **)(*(long *)(lVar7 + 0x1e8) + 0xf0))(lVar7 + 0x1e8);
      iVar4 = *(int *)(lVar9 + 4);
      piVar8 = (int *)(**(code **)(*(long *)(lVar7 + 0x220) + 0xf0))(lVar7 + 0x220);
      iVar5 = *piVar8;
      *(int *)(param_1 + 0x10) = iVar3 + -3;
      *(int *)(param_1 + 0x14) = iVar4 + -3;
      *(int *)(param_1 + 0x20) = iVar3 + iVar5 + 2;
      *(int *)(param_1 + 0x24) = iVar4 + 2;
      return 1;
    }
  }
  return 0;
}

