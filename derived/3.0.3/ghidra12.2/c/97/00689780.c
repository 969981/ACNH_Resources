
void FUN_00689780(undefined8 *param_1)

{
  long lVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 0x11);
  *param_1 = &PTR_LAB_048f2938;
  if (0 < iVar2) {
    lVar1 = param_1[0x10] + (long)iVar2 * 0x18 + -8;
    do {
      FUN_0043be10(lVar1);
      iVar2 = iVar2 + -1;
      lVar1 = lVar1 + -0x18;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0x11) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x8c)) && (param_1[0x10] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[0x10],0x18,*(uint *)((long)param_1 + 0x8c) & 0x3fffffff);
  }
  param_1[0x10] = 0;
  *(undefined4 *)((long)param_1 + 0x8c) = 0x80000000;
  FUN_00685590(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

