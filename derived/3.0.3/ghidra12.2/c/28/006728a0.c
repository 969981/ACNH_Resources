
void FUN_006728a0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &PTR_LAB_048eb2c8;
  puVar2 = PTR_DAT_048607b8;
  iVar1 = *(int *)(param_1 + 7);
  if (0 < iVar1) {
    iVar5 = 0;
    lVar3 = param_1[6] + (long)iVar1 * 0x18;
    do {
      iVar6 = *(int *)(lVar3 + -8);
      if (0 < iVar6) {
        lVar4 = *(long *)(lVar3 + -0x10) + (long)iVar6 * 0x10 + -8;
        do {
          FUN_0043be10(lVar4);
          iVar6 = iVar6 + -1;
          lVar4 = lVar4 + -0x10;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(lVar3 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar3 + -4)) && (*(long *)(lVar3 + -0x10) != 0)) {
        FUN_00421f90(puVar2,*(long *)(lVar3 + -0x10),0x10,*(uint *)(lVar3 + -4) & 0x3fffffff);
      }
      *(undefined8 *)(lVar3 + -0x10) = 0;
      *(undefined4 *)(lVar3 + -4) = 0x80000000;
      FUN_0043be10(lVar3 + -0x18);
      iVar5 = iVar5 + 1;
      lVar3 = lVar3 + -0x18;
    } while (iVar5 != iVar1);
  }
  *(undefined4 *)(param_1 + 7) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x3c)) && (param_1[6] != 0)) {
    FUN_00421f90(puVar2,param_1[6],0x18,*(uint *)((long)param_1 + 0x3c) & 0x3fffffff);
  }
  param_1[6] = 0;
  *(undefined4 *)((long)param_1 + 0x3c) = 0x80000000;
  if (param_1[5] != 0) {
    FUN_004435c0();
  }
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

