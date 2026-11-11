
void FUN_00659b10(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  *param_1 = &PTR_LAB_048e2720;
  if (param_1[0xe] != 0) {
    FUN_004435c0();
  }
  uVar1 = *(uint *)(param_1 + 4);
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      if (*(long *)(param_1[3] + uVar2 * 8) != 0) {
        FUN_004435c0();
      }
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (param_1[0xf] != 0) {
    FUN_004435c0();
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

