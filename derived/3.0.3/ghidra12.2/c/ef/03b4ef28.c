
void FUN_03b4ef28(undefined8 *param_1)

{
  long *plVar1;
  void *pvVar2;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04b765d8;
  lVar3 = DAT_05aebb88;
  if (DAT_05aebb80 == param_1) {
    DAT_05aebb80 = (undefined8 *)0x0;
    nn::os::FinalizeMutex((MutexType *)(DAT_05aebb88 + 0x1c0));
    plVar1 = *(long **)(lVar3 + 0x158);
    *(undefined8 *)(lVar3 + 0x158) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = *(long **)(lVar3 + 0x150);
    *(undefined8 *)(lVar3 + 0x150) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    plVar1 = *(long **)(lVar3 + 0x148);
    *(undefined8 *)(lVar3 + 0x148) = 0;
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 8))();
    }
    if (*(char *)(lVar3 + 0x138) != '\0') {
      nn::os::DestroySystemEvent((SystemEventType *)(lVar3 + 0x110));
    }
    pvVar2 = *(void **)(lVar3 + 0x48);
    *(undefined8 *)(lVar3 + 0x48) = 0;
    if (pvVar2 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
    }
    pvVar2 = *(void **)(lVar3 + 0x40);
    *(undefined8 *)(lVar3 + 0x40) = 0;
    if (pvVar2 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
    }
    DAT_05aebb88 = 0;
  }
  lVar3 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar3 != 0) {
    if (lVar3 == 1) {
      return;
    }
    if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
      lVar4 = 0;
    }
    else {
      lVar4 = lVar3 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

