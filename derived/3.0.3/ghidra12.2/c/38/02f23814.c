
/* WARNING: Removing unreachable block (ram,0x02f239b8) */
/* WARNING: Removing unreachable block (ram,0x02f23910) */
/* WARNING: Removing unreachable block (ram,0x02f2386c) */
/* WARNING: Removing unreachable block (ram,0x02f23874) */
/* WARNING: Removing unreachable block (ram,0x02f23918) */
/* WARNING: Removing unreachable block (ram,0x02f239c0) */

void FUN_02f23814(long param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  undefined *local_60;
  undefined4 local_58;
  undefined4 local_44;
  
  puVar3 = PTR_DAT_04bc43f8;
  puVar2 = PTR_DAT_04bb27a8;
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] == 0) {
    return;
  }
  local_58 = 0;
  local_44 = 0;
  local_60 = PTR_DAT_04bc43f8 + 0x10;
  uVar4 = FUN_02b674f0(&local_44,*(undefined4 *)(param_1 + 0x58));
  if ((uVar4 & 1) != 0) {
    local_58 = local_44;
  }
  uVar4 = FUN_02a59140(puVar1,&local_60);
  if ((uVar4 & 1) == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar7 = 0;
  if (*(char *)(param_1 + 8) == '\0') goto LAB_02f23a24;
  lVar5 = *(long *)(*(long *)puVar2 + 0x38);
  puVar1 = &DAT_05636dd8;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x148);
  }
  if (puVar1[1] != 0) {
    local_60 = puVar3 + 0x10;
    local_58 = 0;
    local_44 = 0;
    uVar4 = FUN_02b674f0(&local_44,*(undefined4 *)(param_1 + 0x58));
    if ((uVar4 & 1) != 0) {
      local_58 = local_44;
    }
    uVar4 = FUN_02a59140(puVar1,&local_60);
    if (((uVar4 & 1) != 0) && (*(int *)(param_1 + 0x60) == 1)) {
      uVar7 = 0x3f800000;
      goto LAB_02f23a24;
    }
    if (*(char *)(param_1 + 8) == '\0') goto LAB_02f23a24;
  }
  lVar5 = *(long *)(*(long *)puVar2 + 0x38);
  puVar1 = &DAT_05636dd8;
  if (lVar5 != 0) {
    puVar1 = (undefined8 *)(lVar5 + 0x148);
  }
  if (puVar1[1] != 0) {
    local_60 = puVar3 + 0x10;
    local_58 = 0;
    local_44 = 0;
    uVar4 = FUN_02b674f0(&local_44,*(undefined4 *)(param_1 + 0x58));
    if ((uVar4 & 1) != 0) {
      local_58 = local_44;
    }
    uVar4 = FUN_02a59140(puVar1,&local_60);
    if (((uVar4 & 1) != 0) && (uVar7 = 0x40000000, *(int *)(param_1 + 0x60) < 2)) {
      uVar7 = 0;
    }
  }
LAB_02f23a24:
  plVar6 = *(long **)(param_1 + 0x20);
  local_60 = PTR_DAT_04bc4f00 + 0x10;
  local_58 = 0x14;
  (**(code **)(*plVar6 + 0x18))(plVar6,&local_60);
  (**(code **)(plVar6[3] + 0x158))(uVar7,plVar6[1]);
  return;
}

