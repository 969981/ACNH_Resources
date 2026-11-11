
void FUN_004acce0(long *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  FUN_0043d280(param_1 + 2);
  puVar1 = PTR_DAT_048607b8;
  iVar2 = (int)param_1[1];
  if (0 < iVar2) {
    plVar3 = (long *)(*param_1 + (long)iVar2 * 0x18 + -0x10);
    do {
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        FUN_00421f90(puVar1,*plVar3,8,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
      }
      *plVar3 = 0;
      iVar2 = iVar2 + -1;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      plVar3 = plVar3 + -3;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 1) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0xc)) && (*param_1 != 0)) {
    FUN_00421f90(puVar1,*param_1,0x18,*(uint *)((long)param_1 + 0xc) & 0x3fffffff);
  }
  *param_1 = 0;
  *(undefined4 *)((long)param_1 + 0xc) = 0x80000000;
  return;
}

