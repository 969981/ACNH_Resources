
void FUN_00522570(undefined8 *param_1)

{
  undefined *puVar1;
  int iVar2;
  long *plVar3;
  
  *param_1 = &PTR_LAB_048d49e0;
  puVar1 = PTR_DAT_048607b8;
  iVar2 = *(int *)(param_1 + 0xb);
  if (0 < iVar2) {
    plVar3 = (long *)(param_1[10] + (long)iVar2 * 0x30 + -0x18);
    do {
      *(undefined4 *)(plVar3 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + 0xc)) && (*plVar3 != 0)) {
        FUN_00421f90(puVar1,*plVar3,1,*(uint *)((long)plVar3 + 0xc) & 0x3fffffff);
      }
      *plVar3 = 0;
      *(undefined4 *)((long)plVar3 + 0xc) = 0x80000000;
      *(undefined4 *)(plVar3 + -1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar3 + -4)) && (plVar3[-2] != 0)) {
        FUN_00421f90(puVar1,plVar3[-2],4,*(uint *)((long)plVar3 + -4) & 0x3fffffff);
      }
      plVar3[-2] = 0;
      *(undefined4 *)((long)plVar3 + -4) = 0x80000000;
      FUN_0043be10(plVar3 + -3);
      iVar2 = iVar2 + -1;
      plVar3 = plVar3 + -6;
    } while (iVar2 != 0);
  }
  *(undefined4 *)(param_1 + 0xb) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x5c)) && (param_1[10] != 0)) {
    FUN_00421f90(puVar1,param_1[10],0x30,*(uint *)((long)param_1 + 0x5c) & 0x3fffffff);
  }
  param_1[10] = 0;
  *(undefined4 *)((long)param_1 + 0x5c) = 0x80000000;
  FUN_00522f30(param_1);
  return;
}

