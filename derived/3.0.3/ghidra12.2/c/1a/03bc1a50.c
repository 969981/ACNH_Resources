
void FUN_03bc1a50(undefined8 *param_1)

{
  MutexType *pMVar1;
  long *plVar2;
  long *plVar3;
  long *plVar4;
  undefined8 *puVar5;
  void *__ptr;
  long lVar6;
  
  *param_1 = &PTR_LAB_04b7ab20;
  lVar6 = DAT_05aec0b0;
  if (*(char *)(param_1 + 3) != '\0') {
    puVar5 = (undefined8 *)param_1[0xb];
    if (puVar5 != (undefined8 *)0x0) {
      if (*(long *)(DAT_05aec0b0 + 0x28) != 0) {
        pMVar1 = (MutexType *)(DAT_05aec0b0 + 0x58);
        plVar3 = (long *)(DAT_05aec0b0 + 8);
        nn::os::LockMutex(pMVar1);
        plVar4 = *(long **)(lVar6 + 0x10);
        if (plVar4 != plVar3) {
          plVar2 = puVar5 + 10;
          do {
            if (plVar4 == plVar2) {
              if (*plVar2 != 0) {
                *(undefined8 *)(*plVar2 + 8) = puVar5[0xb];
              }
              if ((long *)puVar5[0xb] != (long *)0x0) {
                *(long *)puVar5[0xb] = *plVar2;
              }
              *plVar2 = 0;
              puVar5[0xb] = 0;
              *(int *)(lVar6 + 0x18) = *(int *)(lVar6 + 0x18) + -1;
              (**(code **)*puVar5)(puVar5);
              *puVar5 = *(undefined8 *)(lVar6 + 0x20);
              *(undefined8 **)(lVar6 + 0x20) = puVar5;
              break;
            }
            plVar4 = (long *)plVar4[1];
          } while (plVar4 != plVar3);
        }
        nn::os::UnlockMutex(pMVar1);
      }
      param_1[0xb] = 0;
    }
    __ptr = (void *)param_1[0x11];
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
      param_1[0x11] = 0;
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    lVar6 = param_1[8];
    if (lVar6 != 0) {
      nn::os::LockMutex((MutexType *)(lVar6 + 200));
      plVar3 = *(long **)(lVar6 + 0x98);
      if (plVar3 != (long *)(lVar6 + 0x90)) {
        plVar4 = (long *)((long)*(int *)(lVar6 + 0xa4) + (long)param_1);
        do {
          if (plVar3 == plVar4) {
            if (*plVar4 != 0) {
              *(long *)(*plVar4 + 8) = plVar4[1];
            }
            if ((long *)plVar4[1] != (long *)0x0) {
              *(long *)plVar4[1] = *plVar4;
            }
            *plVar4 = 0;
            plVar4[1] = 0;
            *(int *)(lVar6 + 0xa0) = *(int *)(lVar6 + 0xa0) + -1;
            break;
          }
          plVar3 = (long *)plVar3[1];
        } while (plVar3 != (long *)(lVar6 + 0x90));
      }
      nn::os::UnlockMutex((MutexType *)(lVar6 + 200));
    }
    *(undefined1 *)(param_1 + 3) = 0;
  }
  FUN_038e1a84(param_1 + 0x12);
  return;
}

