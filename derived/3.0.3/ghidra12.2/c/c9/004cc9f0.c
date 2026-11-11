
void FUN_004cc9f0(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x98) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x9c)) && (*(long *)(param_1 + 0x90) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x90),0x10,*(uint *)(param_1 + 0x9c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined4 *)(param_1 + 0x9c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x88) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x8c)) && (*(long *)(param_1 + 0x80) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x80),8,*(uint *)(param_1 + 0x8c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x80) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0x80000000;
  *(undefined4 *)(param_1 + 0x60) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 100)) && (*(long *)(param_1 + 0x58) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x58),4,*(uint *)(param_1 + 100) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  *(undefined4 *)(param_1 + 100) = 0x80000000;
  *(undefined4 *)(param_1 + 0x48) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x4c)) && (*(long *)(param_1 + 0x40) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x40),8,*(uint *)(param_1 + 0x4c) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x40) = 0;
  *(undefined4 *)(param_1 + 0x4c) = 0x80000000;
  FUN_00471120(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x18),8,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  return;
}

