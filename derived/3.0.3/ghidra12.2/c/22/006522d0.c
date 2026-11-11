
void FUN_006522d0(undefined8 *param_1)

{
  long lVar1;
  
  *param_1 = &PTR_LAB_048e2aa0;
  if (0 < *(int *)(param_1 + 0xf)) {
    lVar1 = 0;
    do {
      FUN_004435c0(*(undefined8 *)(param_1[0xe] + lVar1 * 8));
      lVar1 = lVar1 + 1;
    } while (lVar1 < *(int *)(param_1 + 0xf));
  }
  FUN_0043be10(param_1 + 0x10);
  *(undefined4 *)(param_1 + 0xf) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x7c)) && (param_1[0xe] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[0xe],8,*(uint *)((long)param_1 + 0x7c) & 0x3fffffff);
  }
  param_1[0xe] = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0x80000000;
  if (param_1[0xd] != 0) {
    FUN_004435c0();
  }
  if (param_1[0xc] != 0) {
    FUN_004435c0();
  }
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

