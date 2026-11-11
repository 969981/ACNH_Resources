
void FUN_004432f0(undefined8 *param_1)

{
  int iVar1;
  long *plVar2;
  
  iVar1 = *(int *)(param_1 + 4);
  *param_1 = &PTR_LAB_04861150;
  if (0 < iVar1) {
    plVar2 = (long *)(param_1[3] + (long)iVar1 * 8);
    do {
      plVar2 = plVar2 + -1;
      if (*plVar2 != 0) {
        FUN_004435c0();
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 6));
  iVar1 = *(int *)(param_1 + 4);
  if (0 < iVar1) {
    plVar2 = (long *)(param_1[3] + (long)iVar1 * 8);
    do {
      plVar2 = plVar2 + -1;
      if (*plVar2 != 0) {
        FUN_004435c0();
      }
      iVar1 = iVar1 + -1;
    } while (iVar1 != 0);
  }
  *(undefined4 *)(param_1 + 4) = 0;
  if ((-1 < (int)*(uint *)((long)param_1 + 0x24)) && (param_1[3] != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,param_1[3],8,*(uint *)((long)param_1 + 0x24) & 0x3fffffff);
  }
  param_1[3] = 0;
  *(undefined4 *)((long)param_1 + 0x24) = 0x80000000;
  FUN_00442660(param_1);
  return;
}

