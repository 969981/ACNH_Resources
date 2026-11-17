
/* WARNING: Removing unreachable block (ram,0x02b5e7cc) */
/* WARNING: Removing unreachable block (ram,0x02b5e738) */
/* WARNING: Removing unreachable block (ram,0x02b5e6a4) */
/* WARNING: Removing unreachable block (ram,0x02b5e610) */
/* WARNING: Removing unreachable block (ram,0x02b5e57c) */
/* WARNING: Removing unreachable block (ram,0x02b5e4e0) */
/* WARNING: Removing unreachable block (ram,0x02b5e44c) */
/* WARNING: Removing unreachable block (ram,0x02b5e3ac) */
/* WARNING: Removing unreachable block (ram,0x02b5e3b4) */
/* WARNING: Removing unreachable block (ram,0x02b5e454) */
/* WARNING: Removing unreachable block (ram,0x02b5e4f0) */
/* WARNING: Removing unreachable block (ram,0x02b5e584) */
/* WARNING: Removing unreachable block (ram,0x02b5e618) */
/* WARNING: Removing unreachable block (ram,0x02b5e6ac) */
/* WARNING: Removing unreachable block (ram,0x02b5e740) */
/* WARNING: Removing unreachable block (ram,0x02b5e7d4) */

undefined8 FUN_02b5e360(undefined4 *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined *local_50;
  undefined4 local_48;
  undefined4 local_24;
  
  puVar3 = PTR_DAT_04bc43f8;
  puVar2 = PTR_DAT_04bb27a8;
  if (param_1 == (undefined4 *)0x0) {
    return 0;
  }
  local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
  puVar1 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar1[1] == 0) {
LAB_02b5e418:
    iVar4 = FUN_0266ce40(0);
    if (iVar4 != -1) goto LAB_02b5e428;
    uVar7 = 0;
LAB_02b5e844:
    uVar6 = 1;
    *param_1 = uVar7;
  }
  else {
    local_50 = PTR_DAT_04bc43f8 + 0x10;
    local_48 = 0;
    local_24 = 0;
    uVar5 = FUN_02b674f0(&local_24,0);
    if ((uVar5 & 1) != 0) {
      local_48 = local_24;
    }
    uVar5 = FUN_02a59140(puVar1,&local_50);
    if ((uVar5 & 1) == 0) goto LAB_02b5e418;
LAB_02b5e428:
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e4a8:
      uVar7 = 1;
      iVar4 = FUN_0266ce40(1);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,1);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e4a8;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e544:
      uVar7 = 2;
      iVar4 = FUN_0266ce40(2);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,2);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e544;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e5d8:
      uVar7 = 3;
      iVar4 = FUN_0266ce40(3);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,3);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e5d8;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e66c:
      uVar7 = 4;
      iVar4 = FUN_0266ce40(4);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,4);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e66c;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e700:
      uVar7 = 5;
      iVar4 = FUN_0266ce40(5);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,5);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e700;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e794:
      uVar7 = 6;
      iVar4 = FUN_0266ce40(6);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,6);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e794;
    }
    local_50 = (undefined *)CONCAT44(local_50._4_4_,1);
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] == 0) {
LAB_02b5e828:
      uVar7 = 7;
      iVar4 = FUN_0266ce40(7);
      if (iVar4 == -1) goto LAB_02b5e844;
    }
    else {
      local_50 = puVar3 + 0x10;
      local_48 = 0;
      local_24 = 0;
      uVar5 = FUN_02b674f0(&local_24,7);
      if ((uVar5 & 1) != 0) {
        local_48 = local_24;
      }
      uVar5 = FUN_02a59140(puVar1,&local_50);
      if ((uVar5 & 1) == 0) goto LAB_02b5e828;
    }
    uVar6 = 0;
  }
  return uVar6;
}

