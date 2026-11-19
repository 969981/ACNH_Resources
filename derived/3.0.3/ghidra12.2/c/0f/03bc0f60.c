
void FUN_03bc0f60(long param_1)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x90));
  plVar7 = *(long **)(param_1 + 0x48);
  if (plVar7 != (long *)(param_1 + 0x40)) {
    plVar3 = plVar7 + -0x13;
    do {
      plVar6 = (long *)plVar7[1];
      lVar1 = plVar3[1];
      if ((((lVar1 == 0) || ((int)plVar3[2] != *(int *)(lVar1 + 0x10))) ||
          (*(int *)(lVar1 + 0xc) == 0)) || (*(int *)(lVar1 + 0xc) == 7)) {
        if ((long *)plVar3[0x11] != plVar3 + 0x10) {
          lVar2 = (long)*(int *)((long)plVar3 + 0x94);
          plVar4 = (long *)(plVar3[0x11] - lVar2);
          lVar1 = (long)plVar4 + lVar2;
          do {
            lVar1 = *(long *)(lVar1 + 8);
            if (*plVar4 != 0) {
              FUN_03b465b0();
            }
            FUN_03bc16f0(plVar3,plVar4);
            plVar4[9] = 0;
            *plVar4 = 0;
            plVar4[1] = 0;
            plVar5 = plVar4 + 0xc;
            if (*plVar5 != 0) {
              *(long *)(*plVar5 + 8) = plVar4[0xd];
            }
            if ((long *)plVar4[0xd] != (long *)0x0) {
              *(long *)plVar4[0xd] = *plVar5;
            }
            *plVar5 = 0;
            plVar4[0xd] = 0;
            *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
            plVar4[9] = 0;
            *plVar4 = 0;
            plVar4[1] = 0;
            plVar4[2] = (long)&PTR_LAB_04b7aaf8;
            *plVar4 = *(long *)(param_1 + 0x28);
            *(long **)(param_1 + 0x28) = plVar4;
            plVar4 = (long *)(lVar1 - lVar2);
          } while (plVar4 != (long *)((long)(plVar3 + 0x10) - lVar2));
        }
        FUN_03bc12b0(plVar3);
        if (*plVar7 != 0) {
          *(long *)(*plVar7 + 8) = plVar7[1];
        }
        if ((long *)plVar7[1] != (long *)0x0) {
          *(long *)plVar7[1] = *plVar7;
        }
        *plVar7 = 0;
        plVar7[1] = 0;
        *(int *)(param_1 + 0x50) = *(int *)(param_1 + 0x50) + -1;
        FUN_03bc11c0(plVar3);
        *plVar3 = *(long *)(param_1 + 0x58);
        *(long **)(param_1 + 0x58) = plVar3;
      }
      else {
        FUN_03bc13a0(plVar3);
      }
      plVar3 = plVar6 + -0x13;
      plVar7 = plVar6;
    } while (plVar3 != (long *)(param_1 + -0x58));
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x90));
  return;
}

