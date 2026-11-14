
/* WARNING: Removing unreachable block (ram,0x01698850) */
/* WARNING: Removing unreachable block (ram,0x016987ac) */
/* WARNING: Removing unreachable block (ram,0x01698708) */
/* WARNING: Removing unreachable block (ram,0x01698664) */
/* WARNING: Removing unreachable block (ram,0x016985c0) */
/* WARNING: Removing unreachable block (ram,0x0169851c) */
/* WARNING: Removing unreachable block (ram,0x01698478) */
/* WARNING: Removing unreachable block (ram,0x016983c4) */
/* WARNING: Removing unreachable block (ram,0x016983cc) */
/* WARNING: Removing unreachable block (ram,0x01698480) */
/* WARNING: Removing unreachable block (ram,0x01698524) */
/* WARNING: Removing unreachable block (ram,0x016985c8) */
/* WARNING: Removing unreachable block (ram,0x0169866c) */
/* WARNING: Removing unreachable block (ram,0x01698710) */
/* WARNING: Removing unreachable block (ram,0x016987b4) */
/* WARNING: Removing unreachable block (ram,0x01698858) */

void FUN_01698340(ulong *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  int iVar4;
  int iVar5;
  ulong uVar6;
  undefined *local_48;
  undefined4 local_40;
  undefined4 local_34;
  
  if (0 < (long)*param_1) {
    if (*param_1 < 7) {
      iVar4 = nn::time::GetDayOfWeek
                        ((int)(short)param_1[2],(int)*(char *)((long)param_1 + 0x12),
                         (int)*(char *)((long)param_1 + 0x13));
      iVar5 = nn::time::GetDayOfWeek
                        ((int)(short)param_1[3],(int)*(char *)((long)param_1 + 0x1a),
                         (int)*(char *)((long)param_1 + 0x1b));
      if (iVar5 <= iVar4) {
        return;
      }
    }
    puVar3 = PTR_DAT_04bc43f8;
    puVar2 = PTR_DAT_04bb27a8;
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = PTR_DAT_04bc43f8 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,0);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,0), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,0,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,1);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,1), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,1,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,2);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,2), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,2,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,3);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,3), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,3,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,4);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,4), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,4,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,5);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,5), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,5,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,6);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,6), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,6,1);
      }
    }
    puVar1 = &DAT_05636dd8;
    if (*(long *)(*(long *)puVar2 + 0x38) != 0) {
      puVar1 = (undefined8 *)(*(long *)(*(long *)puVar2 + 0x38) + 0x148);
    }
    if (puVar1[1] != 0) {
      local_48 = puVar3 + 0x10;
      local_40 = 0;
      local_34 = 0;
      uVar6 = FUN_02b674f0(&local_34,7);
      if ((uVar6 & 1) != 0) {
        local_40 = local_34;
      }
      uVar6 = FUN_02a59140(puVar1,&local_48);
      if (((uVar6 & 1) != 0) && (uVar6 = FUN_01698900(DAT_05234ef0,7), (uVar6 & 1) != 0)) {
        FUN_0169a510(DAT_05234ef0,7,1);
        return;
      }
    }
  }
  return;
}

