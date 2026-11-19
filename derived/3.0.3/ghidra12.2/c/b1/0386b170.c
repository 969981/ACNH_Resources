
void FUN_0386b170(long param_1,long *param_2)

{
  bool bVar1;
  long *plVar2;
  int iVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  
  (**(code **)(*param_2 + 0x50))(param_2);
  if ((int)param_2[0x15] == 5) {
    iVar3 = 6;
  }
  else {
    if ((int)param_2[0x15] != 2) goto LAB_0386b290;
    nn::os::LockMutex((MutexType *)(param_1 + 0xf0));
    plVar4 = (long *)(param_1 + 0x58);
    lVar5 = (long)*(int *)(param_1 + 0x6c);
    if (*(long **)(param_1 + 0x60) != plVar4) {
      lVar6 = (long)*(long **)(param_1 + 0x60) - lVar5;
      do {
        bVar1 = (int)param_2[0x2b] < *(int *)(lVar6 + 0x158);
        if (*(int *)(lVar6 + 0x15c) != *(int *)((long)param_2 + 0x15c)) {
          bVar1 = *(int *)((long)param_2 + 0x15c) < *(int *)(lVar6 + 0x15c);
        }
        if (bVar1) {
          plVar4 = (long *)(lVar6 + lVar5);
          break;
        }
        lVar6 = *(long *)(lVar6 + lVar5 + 8) - lVar5;
      } while (lVar6 != (long)plVar4 - lVar5);
    }
    lVar6 = *plVar4;
    plVar2 = (long *)(lVar5 + (long)param_2);
    *plVar4 = (long)plVar2;
    *plVar2 = lVar6;
    plVar2[1] = (long)plVar4;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar2;
    }
    *(int *)(param_1 + 0x68) = *(int *)(param_1 + 0x68) + 1;
    nn::os::UnlockMutex((MutexType *)(param_1 + 0xf0));
    FUN_0386acb0(param_1,param_2);
    iVar3 = 3;
  }
  if ((iVar3 == 5) || (iVar3 == 2)) {
    *(undefined1 *)((long)param_2 + 0x165) = 0;
  }
  *(int *)(param_2 + 0x15) = iVar3;
LAB_0386b290:
  *(undefined1 *)((long)param_2 + 0x164) = 0;
                    /* WARNING: Could not recover jumptable at 0x0386b2ac. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2);
  return;
}

