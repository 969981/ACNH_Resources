
long * FUN_015efaf8(long param_1,long param_2,long *param_3)

{
  int *piVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long *plVar8;
  
  piVar1 = (int *)(&LAB_007a5448 + param_1);
  lVar7 = *(long *)PTR_DAT_04bb2698;
  if (lVar7 == 0) {
    plVar5 = malloc(0x50);
  }
  else {
    plVar5 = param_3;
    if (param_3 == (long *)0x0) {
      lVar4 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar5 = (long *)(lVar7 + 8);
      if (lVar4 != 0) {
        plVar5 = (long *)(lVar4 + 0xa8);
      }
      plVar5 = (long *)*plVar5;
    }
    plVar5 = (long *)(**(code **)(*plVar5 + 0x30))(plVar5,0x50,8);
  }
  *(undefined4 *)(plVar5 + 6) = 0xffffffff;
  *(undefined4 *)(plVar5 + 7) = 0x30;
  plVar8 = plVar5 + 2;
  *plVar8 = 0;
  puVar3 = PTR_DAT_04bbdaf8;
  puVar2 = PTR_DAT_04bb3048;
  plVar5[5] = 0;
  plVar5[3] = 0;
  plVar5[4] = 0;
  *plVar5 = (long)(puVar3 + 0x10);
  plVar5[1] = (long)(puVar2 + 0x10);
  plVar5[8] = 0;
  plVar5[9] = -0xfffffffe;
  FUN_0160fd18(plVar5,param_3);
  if (param_2 != 0) {
    plVar6 = (long *)*plVar8;
    if (plVar6 == (long *)0x0) {
      lVar7 = 0;
    }
    else {
      (**(code **)(*plVar6 + 0x98))(plVar6,param_2);
      lVar7 = *plVar8;
    }
    (**(code **)(*(long *)(lVar7 + 0x188) + 0xf0))(lVar7 + 0x188);
  }
  *(uint *)(plVar5 + 7) = *(uint *)(plVar5 + 7) | 4;
  nn::os::LockMutex((MutexType *)(param_1 + 0x7a5428));
  if (*piVar1 < *(int *)(&LAB_007a544c + param_1)) {
    *(long **)(*(long *)(&LAB_007a5450 + param_1) + (long)*piVar1 * 8) = plVar5;
    *piVar1 = *piVar1 + 1;
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x7a5428));
  return plVar5;
}

