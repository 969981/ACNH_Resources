
/* WARNING: Removing unreachable block (ram,0x02f224fc) */
/* WARNING: Removing unreachable block (ram,0x02f2244c) */
/* WARNING: Removing unreachable block (ram,0x02f22398) */
/* WARNING: Removing unreachable block (ram,0x02f223a0) */
/* WARNING: Removing unreachable block (ram,0x02f22454) */
/* WARNING: Removing unreachable block (ram,0x02f22504) */

void FUN_02f22344(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  long lVar6;
  long *plVar7;
  undefined4 uVar8;
  undefined *local_48;
  undefined4 local_40;
  uint local_34;
  
  puVar4 = PTR_DAT_04bb27a8;
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  uVar3 = *(uint *)(param_1 + 0x58);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
  puVar2 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar2[1] == 0) {
LAB_02f22404:
    uVar5 = FUN_02b600e0(uVar3);
    if ((uVar5 & 1) == 0) {
      return;
    }
  }
  else {
    local_48 = PTR_DAT_04bc43f8 + 0x10;
    uVar1 = uVar3;
    if (9 < uVar3) {
      uVar1 = 0;
    }
    local_40 = (&DAT_05636e30)[(int)uVar1];
    local_34 = uVar3;
    uVar5 = FUN_02a59140(puVar2,&local_48);
    if ((uVar5 & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0x58);
      goto LAB_02f22404;
    }
  }
  if (*(long *)(param_1 + 0x20) == 0) {
    return;
  }
  uVar8 = 0;
  if (*(char *)(param_1 + 8) == '\0') goto LAB_02f22580;
  uVar3 = *(uint *)(param_1 + 0x58);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
  lVar6 = *(long *)(*(long *)puVar4 + 0x38);
  puVar2 = &DAT_05636dd8;
  if (lVar6 != 0) {
    puVar2 = (undefined8 *)(lVar6 + 0x148);
  }
  if (puVar2[1] == 0) {
LAB_02f224b0:
    uVar5 = FUN_02b600e0(uVar3);
    if ((uVar5 & 1) == 0) goto LAB_02f22580;
  }
  else {
    local_48 = PTR_DAT_04bc43f8 + 0x10;
    uVar1 = uVar3;
    if (9 < uVar3) {
      uVar1 = 0;
    }
    local_40 = (&DAT_05636e30)[(int)uVar1];
    local_34 = uVar3;
    uVar5 = FUN_02a59140(puVar2,&local_48);
    if ((uVar5 & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0x58);
      goto LAB_02f224b0;
    }
  }
  uVar5 = FUN_02664820(*(undefined4 *)(param_1 + 0x58));
  if (((uVar5 & 1) == 0) || (uVar8 = 0x40000000, *(char *)(param_1 + 8) == '\0')) goto LAB_02f22580;
  uVar3 = *(uint *)(param_1 + 0x58);
  local_48 = (undefined *)CONCAT44(local_48._4_4_,1);
  lVar6 = *(long *)(*(long *)puVar4 + 0x38);
  puVar2 = &DAT_05636dd8;
  if (lVar6 != 0) {
    puVar2 = (undefined8 *)(lVar6 + 0x148);
  }
  if (puVar2[1] == 0) {
LAB_02f22560:
    uVar5 = FUN_02b600e0(uVar3);
    if ((uVar5 & 1) == 0) goto LAB_02f22580;
  }
  else {
    local_48 = PTR_DAT_04bc43f8 + 0x10;
    uVar1 = uVar3;
    if (9 < uVar3) {
      uVar1 = 0;
    }
    local_40 = (&DAT_05636e30)[(int)uVar1];
    local_34 = uVar3;
    uVar5 = FUN_02a59140(puVar2,&local_48);
    if ((uVar5 & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0x58);
      goto LAB_02f22560;
    }
  }
  uVar8 = 0x3f800000;
  if (*(int *)(param_1 + 0x60) != 1) {
    uVar8 = 0x40000000;
  }
LAB_02f22580:
  plVar7 = *(long **)(param_1 + 0x20);
  local_48 = PTR_DAT_04bc4f00 + 0x10;
  local_40 = 0x14;
  (**(code **)(*plVar7 + 0x18))(plVar7,&local_48);
  (**(code **)(plVar7[3] + 0x158))(uVar8,plVar7[1]);
  return;
}

