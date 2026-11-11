
void FUN_0053a910(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  long lVar4;
  
  *param_1 = &PTR_LAB_048d6958;
  if (*(int *)((long)param_1 + 0x18c) != 0) {
    uVar3 = param_1[0x32];
    lVar2 = FUN_0043c4e0(*(undefined2 *)PTR_DAT_04bd4d10);
    lVar4 = DAT_04c6f058;
    if (lVar2 != 0) {
      lVar4 = lVar2;
    }
    FUN_00438ad0(*(undefined8 *)(lVar4 + 0x58),uVar3);
  }
  if (param_1[0x4a] != 0) {
    FUN_00438870(param_1[0x4a],0x30);
    param_1[0x4a] = 0;
  }
  if (param_1[0x48] != 0) {
    FUN_00438870(param_1[0x48],0x20);
    param_1[0x48] = 0;
  }
  if (param_1[0x4b] != 0) {
    FUN_00438870(param_1[0x4b],0x18);
    param_1[0x4b] = 0;
  }
  puVar1 = PTR_DAT_048607b8;
  lVar4 = param_1[0x4c];
  if (lVar4 != 0) {
    *(undefined4 *)(lVar4 + 0x20) = 0;
    if ((-1 < (int)*(uint *)(lVar4 + 0x24)) && (*(long *)(lVar4 + 0x18) != 0)) {
      FUN_00421f90(puVar1,*(long *)(lVar4 + 0x18),0x40,*(uint *)(lVar4 + 0x24) & 0x3fffffff);
    }
    *(undefined8 *)(lVar4 + 0x18) = 0;
    *(undefined4 *)(lVar4 + 0x24) = 0x80000000;
    *(undefined4 *)(lVar4 + 0x10) = 0;
    if ((-1 < (int)*(uint *)(lVar4 + 0x14)) && (*(long *)(lVar4 + 8) != 0)) {
      FUN_00421f90(puVar1,*(long *)(lVar4 + 8),4,*(uint *)(lVar4 + 0x14) & 0x3fffffff);
    }
    *(undefined8 *)(lVar4 + 8) = 0;
    *(undefined4 *)(lVar4 + 0x14) = 0x80000000;
    FUN_00438870(lVar4,0x28);
    param_1[0x4c] = 0;
  }
  FUN_004435c0(param_1[3]);
  if (0 < *(int *)(param_1 + 0x2e)) {
    lVar4 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x2d] + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x2e));
  }
  if (0 < *(int *)(param_1 + 0x30)) {
    lVar4 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x2f] + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x30));
  }
  if (0 < *(int *)(param_1 + 0x1b)) {
    lVar4 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x1a] + lVar4 * 8));
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(param_1 + 0x1b));
  }
  if (0 < *(int *)(param_1 + 0x2c)) {
    lVar4 = 0;
    lVar2 = 8;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x2b] + lVar2));
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x2c));
  }
  if (0 < *(int *)(param_1 + 0x41)) {
    lVar4 = 0;
    lVar2 = 8;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0x40] + lVar2));
      lVar4 = lVar4 + 1;
      lVar2 = lVar2 + 0x10;
    } while (lVar4 < *(int *)(param_1 + 0x41));
  }
  if (param_1[0x33] != 0) {
    FUN_004435c0();
  }
  if (param_1[0x4f] != 0) {
    FUN_004435c0();
  }
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x41) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x20c)) && (param_1[0x40] != 0)) {
    FUN_00421f90(puVar1,param_1[0x40],0x10,*(uint *)((long)param_1 + 0x20c) & 0x3fffffff);
  }
  param_1[0x40] = 0;
  *(undefined4 *)((long)param_1 + 0x20c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x184)) && (param_1[0x2f] != 0)) {
    FUN_00421f90(puVar1,param_1[0x2f],8,*(uint *)((long)param_1 + 0x184) & 0x3fffffff);
  }
  param_1[0x2f] = 0;
  *(undefined4 *)((long)param_1 + 0x184) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x174)) && (param_1[0x2d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x2d],8,*(uint *)((long)param_1 + 0x174) & 0x3fffffff);
  }
  param_1[0x2d] = 0;
  *(undefined4 *)((long)param_1 + 0x174) = 0x80000000;
  *(undefined4 *)(param_1 + 0x2c) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x164)) && (param_1[0x2b] != 0)) {
    FUN_00421f90(puVar1,param_1[0x2b],0x10,*(uint *)((long)param_1 + 0x164) & 0x3fffffff);
  }
  param_1[0x2b] = 0;
  *(undefined4 *)((long)param_1 + 0x164) = 0x80000000;
  FUN_004385e0(param_1 + 0x20);
  *(undefined4 *)(param_1 + 0x1e) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xf4)) && (param_1[0x1d] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1d],8,*(uint *)((long)param_1 + 0xf4) & 0x3fffffff);
  }
  param_1[0x1d] = 0;
  *(undefined4 *)((long)param_1 + 0xf4) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1b) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xdc)) && (param_1[0x1a] != 0)) {
    FUN_00421f90(puVar1,param_1[0x1a],8,*(uint *)((long)param_1 + 0xdc) & 0x3fffffff);
  }
  param_1[0x1a] = 0;
  *(undefined4 *)((long)param_1 + 0xdc) = 0x80000000;
  *(undefined4 *)(param_1 + 9) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x4c)) && (param_1[8] != 0)) {
    FUN_00421f90(puVar1,param_1[8],0x10,*(uint *)((long)param_1 + 0x4c) & 0x3fffffff);
  }
  param_1[8] = 0;
  *(undefined4 *)((long)param_1 + 0x4c) = 0x80000000;
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar1,param_1[6],0x10,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar1,param_1[4],0x10,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

