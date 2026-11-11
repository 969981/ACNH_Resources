
void FUN_00522f30(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_048d4838;
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 8);
  if (0 < iVar3) {
    lVar2 = param_1[7] + (long)iVar3 * 0x20 + -0x18;
    do {
      FUN_005294a0(lVar2);
      iVar3 = iVar3 + -1;
      lVar2 = lVar2 + -0x20;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar1,param_1[7],0x20,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],0x10,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

