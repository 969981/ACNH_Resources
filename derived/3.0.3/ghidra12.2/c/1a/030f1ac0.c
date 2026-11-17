
/* WARNING: Removing unreachable block (ram,0x030f3ad0) */
/* WARNING: Removing unreachable block (ram,0x030f38cc) */
/* WARNING: Removing unreachable block (ram,0x030f3708) */
/* WARNING: Removing unreachable block (ram,0x030f3548) */
/* WARNING: Removing unreachable block (ram,0x030f3384) */
/* WARNING: Removing unreachable block (ram,0x030f31c4) */
/* WARNING: Removing unreachable block (ram,0x030f3004) */
/* WARNING: Removing unreachable block (ram,0x030f2e44) */
/* WARNING: Removing unreachable block (ram,0x030f2c84) */
/* WARNING: Removing unreachable block (ram,0x030f2ac4) */
/* WARNING: Removing unreachable block (ram,0x030f2904) */
/* WARNING: Removing unreachable block (ram,0x030f2754) */
/* WARNING: Removing unreachable block (ram,0x030f25a4) */
/* WARNING: Removing unreachable block (ram,0x030f23f4) */
/* WARNING: Removing unreachable block (ram,0x030f2244) */
/* WARNING: Removing unreachable block (ram,0x030f2094) */
/* WARNING: Removing unreachable block (ram,0x030f1ee4) */
/* WARNING: Removing unreachable block (ram,0x030f1d34) */
/* WARNING: Removing unreachable block (ram,0x030f1b84) */
/* WARNING: Removing unreachable block (ram,0x030f1b8c) */
/* WARNING: Removing unreachable block (ram,0x030f1d3c) */
/* WARNING: Removing unreachable block (ram,0x030f1eec) */
/* WARNING: Removing unreachable block (ram,0x030f209c) */
/* WARNING: Removing unreachable block (ram,0x030f224c) */
/* WARNING: Removing unreachable block (ram,0x030f23fc) */
/* WARNING: Removing unreachable block (ram,0x030f25ac) */
/* WARNING: Removing unreachable block (ram,0x030f275c) */
/* WARNING: Removing unreachable block (ram,0x030f290c) */
/* WARNING: Removing unreachable block (ram,0x030f2acc) */
/* WARNING: Removing unreachable block (ram,0x030f2c8c) */
/* WARNING: Removing unreachable block (ram,0x030f2e4c) */
/* WARNING: Removing unreachable block (ram,0x030f300c) */
/* WARNING: Removing unreachable block (ram,0x030f31cc) */
/* WARNING: Removing unreachable block (ram,0x030f338c) */
/* WARNING: Removing unreachable block (ram,0x030f3550) */
/* WARNING: Removing unreachable block (ram,0x030f3710) */
/* WARNING: Removing unreachable block (ram,0x030f38d4) */
/* WARNING: Removing unreachable block (ram,0x030f3ac0) */

void FUN_030f1ac0(long param_1)

{
  uint uVar1;
  undefined8 *puVar2;
  uint uVar3;
  undefined *puVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  undefined *local_78;
  uint local_70;
  uint local_64;
  
  plVar8 = *(long **)(param_1 + 0x208);
  if ((plVar8 != (long *)0x0) && (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    (**(code **)(*plVar8 + 0xa8))(plVar8);
  }
  plVar8 = *(long **)(param_1 + 800);
  if ((plVar8 != (long *)0x0) && (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
    (**(code **)(*plVar5 + 0x28))(plVar5,0);
    (**(code **)(*plVar8 + 0xa8))(plVar8);
  }
  puVar4 = PTR_DAT_04bc43f8;
  if (*(char *)(param_1 + 0x510) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = PTR_DAT_04bc43f8 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x560));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x508) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x520), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x548);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f1cfc;
      }
    }
    lVar9 = *(long *)(param_1 + 0x520);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x548);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f1cfc:
  if (*(char *)(param_1 + 0x578) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x5c8));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x570) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x588), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x5b0);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f1eac;
      }
    }
    lVar9 = *(long *)(param_1 + 0x588);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x5b0);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f1eac:
  if (*(char *)(param_1 + 0x5e0) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x630));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x5d8) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x5f0), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x618);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f205c;
      }
    }
    lVar9 = *(long *)(param_1 + 0x5f0);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x618);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f205c:
  if (*(char *)(param_1 + 0x648) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x698));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x640) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x658), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x680);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f220c;
      }
    }
    lVar9 = *(long *)(param_1 + 0x658);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x680);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f220c:
  if (*(char *)(param_1 + 0x6b0) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x700));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x6a8) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x6c0), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x6e8);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f23bc;
      }
    }
    lVar9 = *(long *)(param_1 + 0x6c0);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x6e8);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f23bc:
  if (*(char *)(param_1 + 0x718) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x768));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x710) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x728), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x750);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f256c;
      }
    }
    lVar9 = *(long *)(param_1 + 0x728);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x750);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f256c:
  if (*(char *)(param_1 + 0x780) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 2000));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x778) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x790), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x7b8);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f271c;
      }
    }
    lVar9 = *(long *)(param_1 + 0x790);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x7b8);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f271c:
  if (*(char *)(param_1 + 0x7e8) != '\0') {
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] != 0) {
      local_78 = puVar4 + 0x10;
      local_70 = 0;
      local_64 = 0;
      uVar6 = FUN_02b674f0(&local_64,*(undefined4 *)(param_1 + 0x838));
      if ((uVar6 & 1) != 0) {
        local_70 = local_64;
      }
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) != 0) {
        uVar6 = (**(code **)(*(long *)(param_1 + 0x7e0) + 0x50))();
        if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x7f8), plVar8 != (long *)0x0)) {
          if (((long *)plVar8[0x36] != (long *)0x0) &&
             ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
              (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
          plVar8 = *(long **)(param_1 + 0x820);
          if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
              (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
             (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
            (**(code **)(*plVar5 + 0x28))(plVar5,0);
            (**(code **)(*plVar8 + 0xa8))(plVar8);
          }
        }
        goto LAB_030f28cc;
      }
    }
    lVar9 = *(long *)(param_1 + 0x7f8);
    if (lVar9 != 0) {
      if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
          (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
         (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
      lVar9 = *(long *)(param_1 + 0x820);
      if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
         ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
          (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
        (**(code **)(*plVar8 + 0x30))(plVar8,0);
      }
    }
  }
LAB_030f28cc:
  if (*(char *)(param_1 + 0x850) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x8a0);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f2968:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x860);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0x888);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f2a8c;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x8a0);
        goto LAB_030f2968;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0x848) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x860), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x888);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f2a8c:
  if (*(char *)(param_1 + 0x8b8) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x908);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f2b28:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x8c8);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0x8f0);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f2c4c;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x908);
        goto LAB_030f2b28;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0x8b0) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x8c8), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x8f0);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f2c4c:
  if (*(char *)(param_1 + 0x920) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x970);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f2ce8:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x930);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0x958);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f2e0c;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x970);
        goto LAB_030f2ce8;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0x918) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x930), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x958);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f2e0c:
  if (*(char *)(param_1 + 0x988) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x9d8);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f2ea8:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0x998);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0x9c0);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f2fcc;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0x9d8);
        goto LAB_030f2ea8;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0x980) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0x998), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0x9c0);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f2fcc:
  if (*(char *)(param_1 + 0x9f0) != '\0') {
    uVar3 = *(uint *)(param_1 + 0xa40);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f3068:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0xa00);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0xa28);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f318c;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0xa40);
        goto LAB_030f3068;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0x9e8) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xa00), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0xa28);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f318c:
  if (*(char *)(param_1 + 0xa58) != '\0') {
    uVar3 = *(uint *)(param_1 + 0xaa8);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f3228:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0xa68);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0xa90);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f334c;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0xaa8);
        goto LAB_030f3228;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0xa50) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xa68), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0xa90);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f334c:
  if (*(char *)(param_1 + 0xac0) != '\0') {
    uVar3 = *(uint *)(param_1 + 0xb10);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f33e8:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0xad0);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0xaf8);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f350c;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0xb10);
        goto LAB_030f33e8;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0xab8) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xad0), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0xaf8);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f350c:
  if (*(char *)(param_1 + 0xb28) != '\0') {
    uVar3 = *(uint *)(param_1 + 0xb78);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f35ac:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0xb38);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0xb60);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f36d0;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0xb78);
        goto LAB_030f35ac;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0xb20) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xb38), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0xb60);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f36d0:
  if (*(char *)(param_1 + 0xb90) != '\0') {
    uVar3 = *(uint *)(param_1 + 0xbe0);
    local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
    puVar2 = &DAT_05636dd8;
    if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
      puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
    }
    if (puVar2[1] == 0) {
LAB_030f376c:
      uVar6 = FUN_02b600e0(uVar3);
      if ((uVar6 & 1) == 0) {
        lVar9 = *(long *)(param_1 + 0xba0);
        if (lVar9 != 0) {
          if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
              (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
             (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
          lVar9 = *(long *)(param_1 + 0xbc8);
          if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
             ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
              (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
            (**(code **)(*plVar8 + 0x30))(plVar8,0);
          }
        }
        goto LAB_030f3890;
      }
    }
    else {
      local_78 = puVar4 + 0x10;
      uVar1 = uVar3;
      if (9 < uVar3) {
        uVar1 = 0;
      }
      local_70 = (&DAT_05636e30)[(int)uVar1];
      local_64 = uVar3;
      uVar6 = FUN_02a59140(puVar2,&local_78);
      if ((uVar6 & 1) == 0) {
        uVar3 = *(uint *)(param_1 + 0xbe0);
        goto LAB_030f376c;
      }
    }
    uVar6 = (**(code **)(*(long *)(param_1 + 0xb88) + 0x50))();
    if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xba0), plVar8 != (long *)0x0)) {
      if (((long *)plVar8[0x36] != (long *)0x0) &&
         ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
          (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
      plVar8 = *(long **)(param_1 + 0xbc8);
      if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
          (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
         (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x28))(plVar5,0);
        (**(code **)(*plVar8 + 0xa8))(plVar8);
      }
    }
  }
LAB_030f3890:
  if (*(char *)(param_1 + 0xbf8) == '\0') goto LAB_030f3a54;
  uVar3 = *(uint *)(param_1 + 0xc48);
  local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
  puVar2 = &DAT_05636dd8;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
    puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
  }
  if (puVar2[1] == 0) {
LAB_030f3930:
    uVar6 = FUN_02b600e0(uVar3);
    if ((uVar6 & 1) == 0) {
      lVar9 = *(long *)(param_1 + 0xc08);
      if (lVar9 != 0) {
        if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
            (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
           (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)) {
          (**(code **)(*plVar8 + 0x30))(plVar8,0);
        }
        lVar9 = *(long *)(param_1 + 0xc30);
        if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
           ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
            (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
          (**(code **)(*plVar8 + 0x30))(plVar8,0);
        }
      }
      goto LAB_030f3a54;
    }
  }
  else {
    local_78 = puVar4 + 0x10;
    uVar1 = uVar3;
    if (9 < uVar3) {
      uVar1 = 0;
    }
    local_70 = (&DAT_05636e30)[(int)uVar1];
    local_64 = uVar3;
    uVar6 = FUN_02a59140(puVar2,&local_78);
    if ((uVar6 & 1) == 0) {
      uVar3 = *(uint *)(param_1 + 0xc48);
      goto LAB_030f3930;
    }
  }
  uVar6 = (**(code **)(*(long *)(param_1 + 0xbf0) + 0x50))();
  if (((uVar6 & 1) != 0) && (plVar8 = *(long **)(param_1 + 0xc08), plVar8 != (long *)0x0)) {
    if (((long *)plVar8[0x36] != (long *)0x0) &&
       ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
        (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      (**(code **)(*plVar8 + 0xa8))(plVar8);
    }
    plVar8 = *(long **)(param_1 + 0xc30);
    if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
        (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
       (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
      (**(code **)(*plVar5 + 0x28))(plVar5,0);
      (**(code **)(*plVar8 + 0xa8))(plVar8);
    }
  }
LAB_030f3a54:
  iVar10 = 0;
  do {
    plVar8 = (long *)(param_1 + 0xc58 + (long)iVar10 * 0x60);
    if ((char)plVar8[1] != '\0') {
      uVar3 = *(uint *)(param_1 + 0xc58 + (long)iVar10 * 0x60 + 0x58);
      local_78 = (undefined *)CONCAT44(local_78._4_4_,1);
      puVar2 = &DAT_05636dd8;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) != 0) {
        puVar2 = (undefined8 *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x38) + 0x148);
      }
      if (puVar2[1] != 0) {
        uVar1 = uVar3;
        if (0xf < uVar3) {
          uVar1 = 0;
        }
        local_70 = (&DAT_05636e58)[(int)uVar1];
        local_78 = puVar4 + 0x10;
        local_64 = uVar3;
        if ((local_70 != 0) && (uVar6 = FUN_02a59140(puVar2,&local_78), (uVar6 & 1) != 0)) {
          uVar6 = (**(code **)(*plVar8 + 0x50))(plVar8);
          if (((uVar6 & 1) != 0) && (plVar5 = (long *)plVar8[3], plVar5 != (long *)0x0)) {
            if ((((long *)plVar5[0x36] != (long *)0x0) &&
                (uVar6 = (**(code **)(*(long *)plVar5[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
               (plVar7 = (long *)plVar5[0x36], plVar7 != (long *)0x0)) {
              (**(code **)(*plVar7 + 0x28))(plVar7,0);
              (**(code **)(*plVar5 + 0xa8))(plVar5);
            }
            plVar8 = (long *)plVar8[8];
            if ((((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
                (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
               (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
              (**(code **)(*plVar5 + 0x28))(plVar5,0);
              (**(code **)(*plVar8 + 0xa8))(plVar8);
            }
          }
          goto LAB_030f3a74;
        }
      }
      lVar9 = plVar8[3];
      if (lVar9 != 0) {
        if (((*(long **)(lVar9 + 0x1b0) != (long *)0x0) &&
            (uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0)) &&
           (plVar5 = *(long **)(lVar9 + 0x1b0), plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x30))(plVar5,0);
        }
        lVar9 = plVar8[8];
        if (((lVar9 != 0) && (*(long **)(lVar9 + 0x1b0) != (long *)0x0)) &&
           ((uVar6 = (**(code **)(**(long **)(lVar9 + 0x1b0) + 0x48))(), (uVar6 & 1) != 0 &&
            (plVar8 = *(long **)(lVar9 + 0x1b0), plVar8 != (long *)0x0)))) {
          (**(code **)(*plVar8 + 0x30))(plVar8,0);
        }
      }
    }
LAB_030f3a74:
    iVar10 = iVar10 + 1;
    if (iVar10 == 0x10) {
      if (((*(char *)(param_1 + 0x1260) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1258) + 0x50))(param_1 + 0x1258),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1270), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1298);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x12d8) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x12d0) + 0x50))(param_1 + 0x12d0),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x12e8), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1310);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1350) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1348) + 0x50))(param_1 + 0x1348),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1360), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 5000);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x13c8) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x13c0) + 0x50))(param_1 + 0x13c0),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x13d8), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1400);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1440) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1438) + 0x50))(param_1 + 0x1438),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1450), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1478);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x14b8) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x14b0) + 0x50))(param_1 + 0x14b0),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x14c8), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x14f0);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1530) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1528) + 0x50))(param_1 + 0x1528),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1540), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1568);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x15a8) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x15a0) + 0x50))(param_1 + 0x15a0),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x15b8), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x15e0);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1620) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1618) + 0x50))(param_1 + 0x1618),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1630), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1658);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1698) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1690) + 0x50))(param_1 + 0x1690),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x16a8), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x16d0);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1710) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1708) + 0x50))(param_1 + 0x1708),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1720), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1748);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1788) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1780) + 0x50))(param_1 + 0x1780),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1798), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x17c0);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1800) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x17f8) + 0x50))(param_1 + 0x17f8),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1810), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1838);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1878) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1870) + 0x50))(param_1 + 0x1870),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1888), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x18b0);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x18f0) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x18e8) + 0x50))(param_1 + 0x18e8),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1900), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1928);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1968) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1960) + 0x50))(param_1 + 0x1960),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1978), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x19a0);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x19e0) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x19d8) + 0x50))(param_1 + 0x19d8),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x19f0), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1a18);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1a58) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1a50) + 0x50))(param_1 + 0x1a50),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1a68), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1a90);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1ad0) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1ac8) + 0x50))(param_1 + 0x1ac8),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 0x1ae0), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1b08);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
      }
      if (((*(char *)(param_1 + 0x1b48) != '\0') &&
          (uVar6 = (**(code **)(*(long *)(param_1 + 0x1b40) + 0x50))(param_1 + 0x1b40),
          (uVar6 & 1) != 0)) && (plVar8 = *(long **)(param_1 + 7000), plVar8 != (long *)0x0)) {
        if ((((long *)plVar8[0x36] != (long *)0x0) &&
            (uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0)) &&
           (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
          (**(code **)(*plVar8 + 0xa8))(plVar8);
        }
        plVar8 = *(long **)(param_1 + 0x1b80);
        if (((plVar8 != (long *)0x0) && ((long *)plVar8[0x36] != (long *)0x0)) &&
           ((uVar6 = (**(code **)(*(long *)plVar8[0x36] + 0x48))(), (uVar6 & 1) == 0 &&
            (plVar5 = (long *)plVar8[0x36], plVar5 != (long *)0x0)))) {
          (**(code **)(*plVar5 + 0x28))(plVar5,0);
                    /* WARNING: Could not recover jumptable at 0x030f4a24. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (**(code **)(*plVar8 + 0xa8))(plVar8);
          return;
        }
      }
      return;
    }
  } while( true );
}

