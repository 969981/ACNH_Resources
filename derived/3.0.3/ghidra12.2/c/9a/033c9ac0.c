
void FUN_033c9ac0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b254b0;
  puVar1 = PTR_DAT_04bb62c0 + 0x10;
  param_1[0x6c] = puVar1;
  param_1[0x66] = puVar1;
  puVar1 = PTR_DAT_04bbd520;
  param_1[0x71] = 0;
  param_1[0x6b] = 0;
  param_1[0x65] = 0;
  param_1[0x48] = &PTR_LAB_04b25c50;
  param_1[0x5e] = 0;
  param_1[0x5f] = puVar1 + 0x10;
  param_1[0x58] = puVar1 + 0x10;
  param_1[0x4c] = &PTR_LAB_04b25cd8;
  plVar2 = (long *)param_1[0x51];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x51];
  }
  *(undefined4 *)(param_1 + 0x57) = 0;
  if (param_1[0x54] != 0) {
    if (0 < *(int *)(param_1 + 0x53)) {
      lVar5 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x54] + lVar5 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar5 = lVar5 + 1;
        *puVar4 = param_1[0x55];
        param_1[0x55] = puVar4;
      } while (lVar5 < *(int *)(param_1 + 0x53));
    }
    __ptr = (void *)param_1[0x56];
    *(undefined4 *)(param_1 + 0x53) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2b4) = 0;
    *(undefined8 *)((long)param_1 + 0x2ac) = 0;
    *(undefined8 *)((long)param_1 + 0x2a4) = 0;
    *(undefined8 *)((long)param_1 + 0x29c) = 0;
  }
  lVar5 = param_1[0x49];
  param_1[0x48] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_033c9c7c;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x240);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0x49] = 1;
LAB_033c9c7c:
  param_1[0x42] = &PTR_LAB_04b25618;
  puVar1 = PTR_DAT_04bbd958;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x3c] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x2b] = PTR_DAT_04bb3578 + 0x10;
  uVar3 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0x3b]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x3b] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x3b] + 8))();
  }
  param_1[0x3b] = 0;
  return;
}

