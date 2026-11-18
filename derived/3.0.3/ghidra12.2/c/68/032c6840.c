
/* WARNING: Removing unreachable block (ram,0x032c68e8) */
/* WARNING: Removing unreachable block (ram,0x032c6904) */

void FUN_032c6840(long *param_1)

{
  MutexType *pMVar1;
  long lVar2;
  void *pvVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  undefined8 *__ptr;
  int iVar7;
  
  lVar4 = param_1[4];
  if (lVar4 != 0) {
    iVar7 = 0;
    do {
      lVar4 = *(long *)(lVar4 + 0x10);
      iVar7 = iVar7 + 1;
    } while (lVar4 != 0);
    do {
      __ptr = (undefined8 *)param_1[4];
      lVar4 = __ptr[1];
      lVar2 = __ptr[2];
      *__ptr = 0;
      __ptr[1] = 0;
      __ptr[2] = 0;
      if ((undefined8 *)param_1[4] == __ptr) {
        param_1[4] = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar2;
      }
      __ptr[3] = 0;
      plVar5 = (long *)param_1[3];
      if ((plVar5 == (long *)0x0) || (*plVar5 == 0)) {
        if ((long *)__ptr[7] != (long *)0x0) {
          (**(code **)(*(long *)__ptr[7] + 8))();
        }
        plVar5 = (long *)*__ptr;
        __ptr[5] = 0;
        __ptr[3] = 0;
        if (plVar5 != (long *)0x0) {
          lVar4 = __ptr[1];
          lVar2 = __ptr[2];
          __ptr[2] = 0;
          *__ptr = 0;
          __ptr[1] = 0;
          if ((undefined8 *)*plVar5 == __ptr) {
            *plVar5 = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar2;
          }
        }
        if (DAT_05ae7600 == 0) {
          free(__ptr);
        }
        else {
          plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
          if (plVar5 != (long *)0x0) {
            lVar4 = *plVar5;
            goto LAB_032c6890;
          }
        }
      }
      else {
        plVar5 = (long *)*plVar5;
        if ((long *)__ptr[7] != (long *)0x0) {
          (**(code **)(*(long *)__ptr[7] + 8))();
        }
        plVar6 = (long *)*__ptr;
        __ptr[5] = 0;
        __ptr[3] = 0;
        if (plVar6 != (long *)0x0) {
          lVar4 = __ptr[1];
          lVar2 = __ptr[2];
          __ptr[2] = 0;
          *__ptr = 0;
          __ptr[1] = 0;
          if ((undefined8 *)*plVar6 == __ptr) {
            *plVar6 = lVar2;
          }
          if (lVar2 != 0) {
            *(long *)(lVar2 + 8) = lVar4;
          }
          if (lVar4 != 0) {
            *(long *)(lVar4 + 0x10) = lVar2;
          }
        }
        __ptr[1] = 0;
        __ptr[2] = 0;
        *__ptr = 0;
        lVar4 = *plVar5;
LAB_032c6890:
        (**(code **)(lVar4 + 0x38))(plVar5,__ptr);
      }
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  pvVar3 = (void *)param_1[7];
  if (pvVar3 != (void *)0x0) {
    plVar5 = (long *)((long)pvVar3 + -8);
    if (*plVar5 != 0) {
      memset(pvVar3,0,*plVar5 << 3);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar5);
    }
    else {
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,plVar5);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  pvVar3 = (void *)param_1[9];
  if (pvVar3 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar3);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar3);
      }
    }
    param_1[9] = 0;
    *(undefined4 *)(param_1 + 8) = 0;
  }
  plVar5 = DAT_0572e5c8;
  if (*param_1 == 0) {
    return;
  }
  pMVar1 = (MutexType *)(DAT_0572e5c8 + 5);
  nn::os::LockMutex(pMVar1);
  lVar4 = param_1[1];
  lVar2 = param_1[2];
  param_1[2] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  if ((long *)*plVar5 == param_1) {
    *plVar5 = lVar2;
  }
  if (lVar2 != 0) {
    *(long *)(lVar2 + 8) = lVar4;
  }
  if (lVar4 != 0) {
    *(long *)(lVar4 + 0x10) = lVar2;
  }
  nn::os::UnlockMutex(pMVar1);
  return;
}

