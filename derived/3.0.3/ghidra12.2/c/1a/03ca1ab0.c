
void FUN_03ca1ab0(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = *param_1;
  nn::os::LockMutex((MutexType *)(lVar4 + 0x60));
  puVar1 = PTR_LAB_04bd1da8;
  lVar5 = *param_1;
  if (*(long *)(lVar5 + 0x10) != lVar5 + 8) {
    lVar7 = (long)*(int *)(lVar5 + 0x1c);
    plVar2 = (long *)(*(long *)(lVar5 + 0x10) - lVar7);
    do {
      plVar3 = plVar2;
      if ((int)plVar2[0x15] != 0) {
        lVar6 = plVar2[0x13];
        if ((int)plVar2[0x15] < 1) {
          lVar6 = 0;
        }
        plVar3 = (long *)0x0;
        if (lVar6 != 0) {
          plVar3 = (long *)(lVar6 - *(int *)((long)plVar2 + 0xac));
        }
      }
      if (((long *)plVar3[4] == param_1) && ((int)plVar3[3] == 0)) {
        *(undefined4 *)(plVar3 + 3) = 1;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
        (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,0);
      }
      plVar2 = (long *)(*(long *)((long)plVar2 + lVar7 + 8) - lVar7);
    } while (plVar2 != (long *)((lVar5 + 8) - lVar7));
    lVar5 = *param_1;
  }
  puVar1 = PTR_LAB_04bd1da8;
  if (*(long *)(lVar5 + 0x28) != lVar5 + 0x20) {
    lVar7 = (long)*(int *)(lVar5 + 0x34);
    plVar2 = (long *)(*(long *)(lVar5 + 0x28) - lVar7);
    do {
      plVar3 = plVar2;
      if ((int)plVar2[0x15] != 0) {
        lVar6 = plVar2[0x13];
        if ((int)plVar2[0x15] < 1) {
          lVar6 = 0;
        }
        plVar3 = (long *)0x0;
        if (lVar6 != 0) {
          plVar3 = (long *)(lVar6 - *(int *)((long)plVar2 + 0xac));
        }
      }
      if (((long *)plVar3[4] == param_1) && ((int)plVar3[3] == 0)) {
        *(undefined4 *)(plVar3 + 3) = 1;
        plVar3 = (long *)(**(code **)(*plVar3 + 0x20))();
        (**(code **)(*plVar3 + 0x18))(plVar3,puVar1,0);
      }
      plVar2 = (long *)(*(long *)((long)plVar2 + lVar7 + 8) - lVar7);
    } while (plVar2 != (long *)((lVar5 + 0x20) - lVar7));
  }
  nn::os::UnlockMutex((MutexType *)(lVar4 + 0x60));
  *(undefined4 *)(param_1 + 1) = 0;
  return;
}

