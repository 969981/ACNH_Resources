
void FUN_004ac600(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x24)) && (*(long *)(param_1 + 0x18) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x18),0x10,*(uint *)(param_1 + 0x24) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0x80000000;
  *(undefined4 *)(param_1 + 0x40) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x44)) && (*(long *)(param_1 + 0x38) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x38),0x10,*(uint *)(param_1 + 0x44) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(undefined4 *)(param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 0x30) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x34)) && (*(long *)(param_1 + 0x28) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x28),0x10,*(uint *)(param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x28) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0x80000000;
  return;
}

