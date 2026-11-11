
void FUN_0045a320(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  ulong *puVar4;
  
  puVar1 = PTR_DAT_048607b8;
  iVar2 = (int)param_1[4];
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[3] + (long)iVar2 * 8);
    do {
      plVar3 = plVar3 + -1;
      if (*plVar3 != 0) {
        FUN_004435c0();
      }
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(puVar1,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  if (param_1[2] != 0) {
    FUN_004435c0();
  }
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    puVar4 = (ulong *)(*param_1 + (long)iVar2 * 0x20 + -0x10);
    do {
      if ((*puVar4 & 1) != 0) {
        FUN_0043dd50(*puVar4 & 0xfffffffffffffffe);
      }
      iVar2 = iVar2 + -1;
      puVar4 = puVar4 + -4;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_00421f90(puVar1,*param_1,0x20,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}

