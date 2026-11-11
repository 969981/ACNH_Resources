
void FUN_00682160(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &PTR_LAB_048f26b0;
  FUN_00689780(param_1 + 6);
  puVar2 = PTR_DAT_048607b8;
  iVar1 = *(int *)(param_1 + 5);
  if (0 < iVar1) {
    iVar5 = 0;
    lVar4 = param_1[4] + (long)iVar1 * 0x18;
    do {
      iVar6 = *(int *)(lVar4 + -8);
      if (0 < iVar6) {
        lVar3 = *(long *)(lVar4 + -0x10) + (long)iVar6 * 0x28;
        do {
          lVar3 = lVar3 + -0x28;
          FUN_006843c0(lVar3);
          iVar6 = iVar6 + -1;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(lVar4 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + -4)) && (*(long *)(lVar4 + -0x10) != 0)) {
        FUN_00421f90(puVar2,*(long *)(lVar4 + -0x10),0x28,*(uint *)(lVar4 + -4) & 0x3fffffff);
      }
      *(undefined8 *)(lVar4 + -0x10) = 0;
      *(undefined4 *)(lVar4 + -4) = 0x80000000;
      FUN_0043be10(lVar4 + -0x18);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + -0x18;
    } while (iVar5 != iVar1);
  }
  *(undefined4 *)(param_1 + 5) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x2c)) && (param_1[4] != 0)) {
    FUN_00421f90(puVar2,param_1[4],0x18,*(uint *)((long)param_1 + 0x2c) & 0x3fffffff);
  }
  param_1[4] = 0;
  *(undefined4 *)((long)param_1 + 0x2c) = 0x80000000;
  FUN_0043be10(param_1 + 3);
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

