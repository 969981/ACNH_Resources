
void FUN_00659880(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  ulong uVar3;
  
  uVar1 = *(uint *)(param_1 + 4);
  *param_1 = &PTR_LAB_048e25c8;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (*(long *)(param_1[3] + uVar3 * 8) != 0) {
        FUN_004435c0();
      }
      uVar3 = uVar3 + 1;
    } while (uVar1 != uVar3);
  }
  puVar2 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar2,param_1[7],8,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar2,param_1[5],0x40,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar2,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

