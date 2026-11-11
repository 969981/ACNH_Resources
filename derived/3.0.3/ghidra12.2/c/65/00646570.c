
void FUN_00646570(long param_1)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x100) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x104)) && (*(long *)(param_1 + 0xf8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0xf8),1,*(uint *)(param_1 + 0x104) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xf8) = 0;
  *(undefined4 *)(param_1 + 0x104) = 0x80000000;
  if (*(long *)(param_1 + 0xf0) != 0) {
    FUN_004435c0();
  }
  *(undefined4 *)(param_1 + 0xa8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0xac)) && (*(long *)(param_1 + 0xa0) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0xa0),1,*(uint *)(param_1 + 0xac) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0x80000000;
  if (*(long *)(param_1 + 0x98) != 0) {
    FUN_004435c0();
  }
  *(undefined4 *)(param_1 + 0x50) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x54)) && (*(long *)(param_1 + 0x48) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x48),1,*(uint *)(param_1 + 0x54) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0x80000000;
  if (*(long *)(param_1 + 0x40) == 0) {
    return;
  }
  FUN_004435c0();
  return;
}

