
void FUN_0064d860(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  
  *param_1 = &PTR_LAB_048e3390;
  puVar1 = PTR_DAT_048607b8;
  iVar3 = *(int *)(param_1 + 0x2a);
  if (0 < iVar3) {
    plVar2 = (long *)(param_1[0x29] + (long)iVar3 * 0x18);
    do {
      plVar2 = plVar2 + -3;
      if (*plVar2 != 0) {
        FUN_004435c0();
      }
      iVar3 = iVar3 + -1;
    } while (iVar3 != 0);
  }
  *(undefined4 *)(param_1 + 0x2a) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x154)) && (param_1[0x29] != 0)) {
    FUN_00421f90(puVar1,param_1[0x29],0x18,*(uint *)((long)param_1 + 0x154) & 0x3fffffff);
  }
  param_1[0x29] = 0;
  *(undefined4 *)((long)param_1 + 0x154) = 0x80000000;
  *(undefined4 *)(param_1 + 0x28) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x144)) && (param_1[0x27] != 0)) {
    FUN_00421f90(puVar1,param_1[0x27],2,*(uint *)((long)param_1 + 0x144) & 0x3fffffff);
  }
  param_1[0x27] = 0;
  *(undefined4 *)((long)param_1 + 0x144) = 0x80000000;
  if (param_1[0x26] != 0) {
    FUN_004435c0();
  }
  *(undefined4 *)(param_1 + 0x25) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 300)) && (param_1[0x24] != 0)) {
    FUN_00421f90(puVar1,param_1[0x24],7,*(uint *)((long)param_1 + 300) & 0x3fffffff);
  }
  param_1[0x24] = 0;
  *(undefined4 *)((long)param_1 + 300) = 0x80000000;
  FUN_00651bf0(param_1);
  return;
}

