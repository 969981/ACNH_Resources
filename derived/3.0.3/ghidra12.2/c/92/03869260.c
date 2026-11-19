
/* WARNING: Removing unreachable block (ram,0x03869314) */

void FUN_03869260(long param_1,long *param_2)

{
  long *plVar1;
  int iVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  (**(code **)(*param_2 + 0x50))(param_2);
  if ((int)param_2[0x15] == 5) {
    iVar2 = 6;
  }
  else {
    if ((int)param_2[0x15] != 2) goto LAB_03869390;
    lVar5 = param_2[9];
    if (lVar5 == 0) {
      lVar5 = param_2[0x13];
      if (lVar5 != 0) {
        nn::os::LockMutex((MutexType *)(lVar5 + 0xf0));
        plVar4 = (long *)(lVar5 + 0x58);
        lVar3 = *plVar4;
        plVar1 = (long *)((long)*(int *)(lVar5 + 0x6c) + (long)param_2);
        *plVar4 = (long)plVar1;
        *plVar1 = lVar3;
        plVar1[1] = (long)plVar4;
        if (lVar3 != 0) {
          *(long **)(lVar3 + 8) = plVar1;
        }
        *(int *)(lVar5 + 0x68) = *(int *)(lVar5 + 0x68) + 1;
        nn::os::UnlockMutex((MutexType *)(lVar5 + 0xf0));
        FUN_0386aa80(lVar5,param_2);
      }
    }
    else {
      nn::os::LockMutex((MutexType *)(lVar5 + 0x188));
      plVar4 = (long *)(lVar5 + 0x68);
      lVar3 = *plVar4;
      plVar1 = (long *)((long)*(int *)(lVar5 + 0x7c) + (long)param_2);
      *plVar4 = (long)plVar1;
      *plVar1 = lVar3;
      plVar1[1] = (long)plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar1;
      }
      *(int *)(lVar5 + 0x78) = *(int *)(lVar5 + 0x78) + 1;
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x188));
      FUN_038695c0(lVar5,param_2);
    }
    iVar2 = 3;
  }
  if (iVar2 == 2) {
    *(undefined1 *)((long)param_2 + 0x165) = 0;
  }
  *(int *)(param_2 + 0x15) = iVar2;
LAB_03869390:
  *(undefined1 *)(param_1 + 0x164) = 0;
                    /* WARNING: Could not recover jumptable at 0x038693b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x58))(param_2);
  return;
}

