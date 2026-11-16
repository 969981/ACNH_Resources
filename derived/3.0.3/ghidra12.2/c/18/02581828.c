
void FUN_02581828(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04a85178;
  lVar6 = DAT_055021a0;
  if (DAT_05502178 == param_1) {
    DAT_05502178 = (long *)0x0;
    FUN_0282cba8(DAT_055021a0 + 0x1d4738);
    puVar1 = PTR_DAT_04bc2f50 + 0x10;
    *(undefined **)(lVar6 + 0x35d0) = puVar1;
    puVar2 = PTR_DAT_04bc2ec0 + 0x10;
    puVar3 = PTR_DAT_04bc2ed8 + 0x10;
    *(undefined **)(lVar6 + 0x34a0) = puVar2;
    *(undefined **)(lVar6 + 0x34b8) = puVar3;
    puVar4 = PTR_DAT_04bc2f00;
    *(undefined **)(lVar6 + 0x2e90) = puVar1;
    *(undefined **)(lVar6 + 0x2d60) = puVar2;
    *(undefined **)(lVar6 + 0x2d78) = puVar3;
    *(undefined **)(lVar6 + 0x2750) = puVar1;
    *(undefined **)(lVar6 + 0x2620) = puVar2;
    *(undefined **)(lVar6 + 0x2638) = puVar3;
    *(undefined **)(lVar6 + 0x2010) = puVar1;
    *(undefined **)(lVar6 + 0x1ee0) = puVar2;
    *(undefined **)(lVar6 + 0x1ef8) = puVar3;
    *(undefined **)(lVar6 + 0x18d0) = puVar1;
    *(undefined **)(lVar6 + 0x17a0) = puVar2;
    puVar4 = puVar4 + 0x10;
    *(undefined **)(lVar6 + 0x17b8) = puVar3;
    *(undefined **)(lVar6 + 0x1190) = puVar1;
    *(undefined **)(lVar6 + 0x1060) = puVar2;
    *(undefined **)(lVar6 + 0x1078) = puVar3;
    *(undefined **)(lVar6 + 0xa50) = puVar1;
    *(undefined **)(lVar6 + 0x920) = puVar2;
    *(undefined **)(lVar6 + 0x938) = puVar3;
    *(undefined **)(lVar6 + 0x310) = puVar1;
    *(undefined **)(lVar6 + 0x1e0) = puVar2;
    DAT_055021a0 = 0;
    *(undefined **)(lVar6 + 0x34c0) = puVar4;
    *(undefined **)(lVar6 + 0x2d80) = puVar4;
    *(undefined **)(lVar6 + 0x2640) = puVar4;
    *(undefined **)(lVar6 + 0x1f00) = puVar4;
    *(undefined **)(lVar6 + 0x17c0) = puVar4;
    *(undefined **)(lVar6 + 0x1080) = puVar4;
    *(undefined **)(lVar6 + 0x940) = puVar4;
    *(undefined **)(lVar6 + 0x1f8) = puVar3;
    *(undefined **)(lVar6 + 0x200) = puVar4;
  }
  lVar6 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
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
    plVar5 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

