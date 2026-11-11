
void FUN_004e2000(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong *puVar3;
  
  *param_1 = &PTR_FUN_04868f00;
  FUN_00454810(param_1 + 7);
  puVar1 = PTR_DAT_048607b8;
  iVar2 = *(int *)(param_1 + 6);
  if (0 < iVar2) {
    puVar3 = (ulong *)(param_1[5] + (long)iVar2 * 0x20 + -0x10);
    do {
      if ((*puVar3 & 1) != 0) {
        FUN_0043dd50(*puVar3 & 0xfffffffffffffffe);
      }
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -4;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],0x20,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  param_1[5] = 0;
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],0x18,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  FUN_004866e0(param_1);
  return;
}

