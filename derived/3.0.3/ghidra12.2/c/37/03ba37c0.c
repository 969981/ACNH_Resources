
void FUN_03ba37c0(undefined8 *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04b79fb8;
  if (*(char *)(param_1 + 1) != '\0') {
    if ((DAT_05aebb78 != 0) && (lVar6 = *(long *)(DAT_05aebb78 + 8), lVar6 != 0)) {
      pMVar1 = (MutexType *)(lVar6 + 200);
      nn::os::LockMutex(pMVar1);
      lVar3 = lVar6 + 0x40;
      if (*(long *)(lVar6 + 0x48) != lVar3) {
        lVar4 = (long)*(int *)(lVar6 + 0x54);
        lVar5 = *(long *)(lVar6 + 0x48) - lVar4;
        lVar7 = lVar5 + lVar4;
        do {
          lVar7 = *(long *)(lVar7 + 8);
          if (*(long *)(lVar5 + 0x108) != 0) {
            FUN_03ba63a0(*(long *)(lVar5 + 0x108),lVar5);
            *(undefined8 *)(lVar5 + 0x108) = 0;
          }
          lVar5 = lVar7 - lVar4;
        } while (lVar5 != lVar3 - lVar4);
      }
      nn::os::UnlockMutex(pMVar1);
      nn::os::LockMutex(pMVar1);
      if (*(long *)(lVar6 + 0x48) != lVar3) {
        lVar4 = (long)*(int *)(lVar6 + 0x54);
        lVar5 = *(long *)(lVar6 + 0x48) - lVar4;
        lVar7 = lVar5 + lVar4;
        do {
          lVar7 = *(long *)(lVar7 + 8);
          nn::os::LockMutex((MutexType *)(lVar6 + 0x108));
          FUN_03b45ec0(0xbf800000,0,lVar5);
          nn::os::UnlockMutex((MutexType *)(lVar6 + 0x108));
          lVar5 = lVar7 - lVar4;
        } while (lVar5 != lVar3 - lVar4);
      }
      nn::os::UnlockMutex(pMVar1);
    }
    if ((undefined8 *)param_1[5] != param_1 + 4) {
      lVar7 = (long)*(int *)((long)param_1 + 0x34);
      lVar3 = (long)param_1[5] - lVar7;
      lVar6 = lVar3 + lVar7;
      do {
        plVar2 = (long *)(lVar3 + *(int *)((long)param_1 + 0x34));
        lVar6 = *(long *)(lVar6 + 8);
        if (*plVar2 != 0) {
          *(long *)(*plVar2 + 8) = plVar2[1];
        }
        if ((long *)plVar2[1] != (long *)0x0) {
          *(long *)plVar2[1] = *plVar2;
        }
        *plVar2 = 0;
        plVar2[1] = 0;
        *(int *)(param_1 + 6) = *(int *)(param_1 + 6) + -1;
        (**(code **)(*(long *)param_1[7] + 0x20))();
        lVar3 = lVar6 - lVar7;
      } while (lVar3 != (long)(param_1 + 4) - lVar7);
    }
    __ptr = (void *)param_1[10];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
      param_1[10] = 0;
      *(undefined4 *)(param_1 + 9) = 0;
    }
    *(undefined1 *)(param_1 + 1) = 0;
  }
  FUN_03b41e80(param_1 + 0xb);
  return;
}

