
long * FUN_0033c600(long *param_1)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  long lVar5;
  
  *param_1 = (long)(PTR_DAT_04bcefc0 + 0x10);
  FUN_00343be0(param_1 + 0x47);
  iVar3 = (int)param_1[0x32];
  if (0 < iVar3) {
    uVar4 = 0;
    do {
      lVar2 = *(long *)(param_1[0x33] + uVar4 * 8);
      if (lVar2 != 0) {
        FUN_003320e0(lVar2,0,0);
        FUN_0032c410("The vfx system deleted a registered binary. The resource id : %d.",
                     uVar4 & 0xffffffff);
        iVar3 = (int)param_1[0x32];
      }
      uVar4 = uVar4 + 1;
    } while ((long)uVar4 < (long)iVar3);
  }
  plVar1 = param_1 + 0x2e2;
  FUN_0031e980(plVar1,param_1[0x334],0);
  FUN_0031e980(plVar1,param_1[0x335],0);
  FUN_0031e720(plVar1,param_1[0x3c]);
  *(int *)(param_1 + 0x44) = (int)param_1[0x44] + -1;
  (**(code **)(*(long *)param_1[0x42] + 0x18))((long *)param_1[0x42],param_1[800]);
  *(int *)(param_1 + 0x44) = (int)param_1[0x44] + -1;
  (**(code **)(*(long *)param_1[0x42] + 0x18))((long *)param_1[0x42],param_1[0x321]);
  FUN_00344020(param_1 + 0x4a);
  if (param_1[0x18a] != 0) {
    FUN_00325c00();
  }
  if (0 < (int)param_1[0x38]) {
    lVar2 = 0;
    lVar5 = 0x10;
    do {
      FUN_00346d44(param_1[0x39] + lVar5,param_1[0x3c],param_1 + 0x3d);
      lVar2 = lVar2 + 1;
      lVar5 = lVar5 + 0x7d8;
    } while (lVar2 < (int)param_1[0x38]);
  }
  plVar1 = param_1 + 0x3d;
  *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
  (**(code **)(*(long *)param_1[0x3e] + 0x18))((long *)param_1[0x3e],param_1[0x2e1]);
  *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
  (**(code **)(*(long *)param_1[0x3e] + 0x18))((long *)param_1[0x3e],param_1[0x2d8]);
  if (*(char *)((long)param_1 + 0x72) != '\0') {
    FUN_00320570(param_1[0x3c],plVar1);
  }
  if (*(char *)((long)param_1 + 0x71) != '\0') {
    FUN_003314f0(plVar1);
  }
  if ((char)param_1[0xe] != '\0') {
    FUN_0032c4a0(plVar1);
  }
  if (param_1[0xd] == 0) {
    FUN_00347570(param_1[0x33e],param_1[0x3c],plVar1);
    *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
    (**(code **)(*(long *)param_1[0x3e] + 0x18))((long *)param_1[0x3e],param_1[0x33e]);
  }
  FUN_0032c3b0(0);
  FUN_0032c3f0(0);
  FUN_00335de0(param_1[0x340],param_1,plVar1);
  *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
  (**(code **)(*(long *)param_1[0x3e] + 0x18))((long *)param_1[0x3e],param_1[0x340]);
  param_1[0x340] = 0;
  FUN_00337a64(param_1[0x341],param_1,plVar1);
  *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
  (**(code **)(*(long *)param_1[0x3e] + 0x18))((long *)param_1[0x3e],param_1[0x341]);
  param_1[0x341] = 0;
  FUN_003441c8(param_1[0x33f],param_1,plVar1);
  *(int *)(param_1 + 0x40) = (int)param_1[0x40] + -1;
  (**(code **)(*(long *)param_1[0x3e] + 0x18))((long *)param_1[0x3e],param_1[0x33f]);
  param_1[0x33f] = 0;
  (**(code **)(param_1[0x3d] + 0x18))(plVar1,param_1[0x336]);
  (**(code **)(param_1[0x3d] + 0x18))(plVar1,param_1[0x337]);
  (**(code **)(param_1[0x3d] + 0x18))(plVar1,param_1[0x34]);
  param_1[0x327] = (long)&PTR_LAB_0484b550;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x328));
  param_1[0x322] = (long)&PTR_LAB_0484b550;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x323));
  param_1[0x2e2] = (long)&PTR_FUN_0484b528;
  FUN_003490c0(param_1 + 0x2ec);
  FUN_00347b98(param_1 + 0x2e3);
  param_1[0x2da] = (long)&PTR_LAB_0484b550;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x2db));
  FUN_00343d78(param_1 + 0x4a);
  return param_1 + 0x47;
}

