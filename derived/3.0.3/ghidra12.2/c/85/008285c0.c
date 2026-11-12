
void FUN_008285c0(undefined8 *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  void *__ptr;
  long lVar3;
  long lVar4;
  
  *param_1 = &PTR_FUN_04917c20;
  puVar1 = DAT_04cd1a78;
  if (DAT_04cd1a70 == param_1) {
    DAT_04cd1a70 = (undefined8 *)0x0;
    (**(code **)(*(long *)DAT_04cd1a78[2] + 0x50))((long *)DAT_04cd1a78[2],0);
    if ((long *)puVar1[2] != (long *)0x0) {
      (**(code **)(*(long *)puVar1[2] + 8))();
    }
    puVar1[2] = 0;
    (**(code **)(*(long *)puVar1[3] + 0x50))((long *)puVar1[3],0);
    if ((long *)puVar1[3] != (long *)0x0) {
      (**(code **)(*(long *)puVar1[3] + 8))();
    }
    puVar1[3] = 0;
    if ((long *)puVar1[1] != (long *)0x0) {
      (**(code **)(*(long *)puVar1[1] + 0x18))();
    }
    __ptr = (void *)*puVar1;
    puVar1[1] = 0;
    if (__ptr != (void *)0x0) {
      FUN_03f44fe0(__ptr);
      FUN_038e1c80((long)__ptr + 200);
      FUN_038e1c80((long)__ptr + 0x98);
      FUN_038e1a84((long)__ptr + 0x58);
      FUN_038e1a84((long)__ptr + 0x18);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
    }
    *puVar1 = 0;
    DAT_04cd1a78 = (undefined8 *)0x0;
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
    plVar2 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + -1;
    if (lVar4 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar4 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

