
void FUN_00652b20(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  uint *puVar3;
  
  *param_1 = &PTR_LAB_048e2e08;
  FUN_0043be10(param_1 + 9);
  puVar1 = PTR_DAT_048607b8;
  *(undefined4 *)(param_1 + 8) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x44)) && (param_1[7] != 0)) {
    FUN_00421f90(puVar1,param_1[7],4,*(uint *)((long)param_1 + 0x44) & 0x3fffffff);
  }
  param_1[7] = 0;
  *(undefined4 *)((long)param_1 + 0x44) = 0x80000000;
  *(undefined4 *)(param_1 + 6) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x34)) && (param_1[5] != 0)) {
    FUN_00421f90(puVar1,param_1[5],2,*(uint *)((long)param_1 + 0x34) & 0x3fffffff);
  }
  *(undefined4 *)((long)param_1 + 0x34) = 0x80000000;
  iVar2 = *(int *)(param_1 + 4);
  param_1[5] = 0;
  if (0 < iVar2) {
    puVar3 = (uint *)(param_1[3] + (long)iVar2 * 0x38 + -0x1c);
    do {
      puVar3[-1] = 0;
      if ((-1 < (int)*puVar3) && (*(long *)(puVar3 + -3) != 0)) {
        FUN_00421f90(puVar1,*(long *)(puVar3 + -3),2,*puVar3 & 0x3fffffff);
      }
      puVar3[-3] = 0;
      puVar3[-2] = 0;
      *puVar3 = 0x80000000;
      if (*(long *)(puVar3 + -5) != 0) {
        FUN_004435c0();
      }
      if (*(long *)(puVar3 + -7) != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
      puVar3 = puVar3 + -0xe;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],0x38,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

