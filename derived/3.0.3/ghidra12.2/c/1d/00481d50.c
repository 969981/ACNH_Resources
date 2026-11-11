
void FUN_00481d50(undefined8 *param_1)

{
  uint uVar1;
  ulong uVar2;
  
  uVar1 = *(uint *)(param_1 + 0xd);
  *param_1 = &PTR_LAB_0485b7e0;
  if (0 < (int)uVar1) {
    uVar2 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xc] + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar1 != uVar2);
  }
  if (param_1[0xf] != 0) {
    FUN_004435c0();
  }
  FUN_0043be10(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xd) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x6c)) && (param_1[0xc] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[0xc],8,*(uint *)((long)param_1 + 0x6c) & 0x3fffffff);
  }
  param_1[0xc] = 0;
  *(undefined4 *)((long)param_1 + 0x6c) = 0x80000000;
  FUN_004385e0(param_1 + 4);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

