
void FUN_0341100c(long *param_1)

{
  long *plVar1;
  uint uVar2;
  undefined *puVar3;
  ulong uVar4;
  undefined **ppuVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b29e58;
  puVar3 = PTR_DAT_04bb46c0;
  uVar2 = *(uint *)(param_1 + 8);
  if (uVar2 != 0) {
    if (((uVar2 & 1) == 0) || ((uVar2 & 1) == 0)) {
      ppuVar5 = &PTR_FUN_04b29e58;
    }
    else {
      **(int **)(*(long *)PTR_DAT_04bb46c0 + 0x10) =
           **(int **)(*(long *)PTR_DAT_04bb46c0 + 0x10) + -1;
      *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xfffffffe;
      ppuVar5 = (undefined **)*param_1;
    }
    uVar4 = (*(code *)ppuVar5[4])(param_1,1);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,1);
    }
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,2);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,2);
    }
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,3);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,3);
    }
    uVar4 = (**(code **)(*param_1 + 0x20))(param_1,4);
    if ((uVar4 & 1) != 0) {
      (**(code **)(*param_1 + 0x18))(param_1,4);
    }
  }
  *param_1 = (long)&PTR_FUN_04b29e18;
  lVar6 = *(long *)puVar3;
  plVar1 = (long *)((long)*(int *)(lVar6 + 0x2c) + (long)param_1);
  if (*plVar1 != 0) {
    *(long *)(*plVar1 + 8) = plVar1[1];
  }
  if ((long *)plVar1[1] != (long *)0x0) {
    *(long *)plVar1[1] = *plVar1;
  }
  *plVar1 = 0;
  plVar1[1] = 0;
  *(int *)(lVar6 + 0x28) = *(int *)(lVar6 + 0x28) + -1;
  lVar6 = param_1[1];
  *param_1 = (long)&PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

