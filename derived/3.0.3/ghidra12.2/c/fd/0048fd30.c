
void FUN_0048fd30(long param_1)

{
  undefined *puVar1;
  
  FUN_0043d280(param_1 + 0x200);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 0x1f8) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1fc)) && (*(long *)(param_1 + 0x1f0) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x1f0),8,*(uint *)(param_1 + 0x1fc) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1f0) = 0;
  *(undefined4 *)(param_1 + 0x1fc) = 0x80000000;
  *(undefined4 *)(param_1 + 0x1e0) = 0;
  if ((-1 < (int)*(uint *)(param_1 + 0x1e4)) && (*(long *)(param_1 + 0x1d8) != 0)) {
    FUN_00421f90(puVar1,*(long *)(param_1 + 0x1d8),1,*(uint *)(param_1 + 0x1e4) & 0x3fffffff);
  }
  *(undefined8 *)(param_1 + 0x1d8) = 0;
  *(undefined4 *)(param_1 + 0x1e4) = 0x80000000;
  FUN_0043f070(param_1 + 0x1b0);
  FUN_0043f070(param_1 + 0x198);
  FUN_0043f070(param_1 + 0x180);
  FUN_004919f0(param_1 + 0x128);
  FUN_00490340(param_1 + 8);
  return;
}

