
void FUN_006870f0(undefined8 *param_1)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  int iVar5;
  int iVar6;
  
  *param_1 = &PTR_LAB_048f21d0;
  puVar3 = PTR_DAT_048607b8;
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    iVar5 = 0;
    lVar4 = param_1[3] + (long)iVar1 * 0x18;
    do {
      iVar6 = *(int *)(lVar4 + -8);
      if (0 < iVar6) {
        lVar2 = *(long *)(lVar4 + -0x10) + (long)iVar6 * 0x10;
        do {
          if (*(long *)(lVar2 + -8) != 0) {
            FUN_004435c0();
          }
          FUN_0043be10(lVar2 + -0x10);
          iVar6 = iVar6 + -1;
          lVar2 = lVar2 + -0x10;
        } while (iVar6 != 0);
      }
      *(undefined4 *)(lVar4 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar4 + -4)) && (*(long *)(lVar4 + -0x10) != 0)) {
        FUN_00421f90(puVar3,*(long *)(lVar4 + -0x10),0x10,*(uint *)(lVar4 + -4) & 0x3fffffff);
      }
      *(undefined8 *)(lVar4 + -0x10) = 0;
      *(undefined4 *)(lVar4 + -4) = 0x80000000;
      FUN_0043be10(lVar4 + -0x18);
      iVar5 = iVar5 + 1;
      lVar4 = lVar4 + -0x18;
    } while (iVar5 != iVar1);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar3,param_1[3],0x18,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  *param_1 = &PTR_LAB_0485b0a8;
  return;
}

