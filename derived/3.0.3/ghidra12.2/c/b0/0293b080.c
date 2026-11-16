
void FUN_0293b080(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  ulong uVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = &PTR_FUN_04a930d0;
  param_1[0x24] = &PTR_LAB_04a93450;
  param_1[0x28] = &PTR_LAB_04a934d8;
  plVar2 = (long *)param_1[0x2d];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x2d];
  }
  *(undefined4 *)(param_1 + 0x33) = 0;
  if (param_1[0x30] != 0) {
    if (0 < *(int *)(param_1 + 0x2f)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x30] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x31];
        param_1[0x31] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x2f));
    }
    pvVar5 = (void *)param_1[0x32];
    *(undefined4 *)(param_1 + 0x2f) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x194) = 0;
    *(undefined8 *)((long)param_1 + 0x18c) = 0;
    *(undefined8 *)((long)param_1 + 0x184) = 0;
    *(undefined8 *)((long)param_1 + 0x17c) = 0;
  }
  lVar6 = param_1[0x25];
  param_1[0x24] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_0293b208;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x120);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x25] = 1;
LAB_0293b208:
  puVar1 = PTR_DAT_04bb3380;
  param_1[0x23] = 0;
  param_1[0x1e] = puVar1 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0x17] = PTR_DAT_04bb2fe8 + 0x10;
  plVar2 = *(long **)(*(long *)puVar1 + 0x330);
  uVar3 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1[0x1d]);
  if (((uVar3 & 1) != 0) && (pvVar5 = (void *)param_1[0x1d], pvVar5 != (void *)0x0)) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar5);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
      }
    }
  }
  param_1[0x1d] = 0;
  param_1[6] = PTR_DAT_04bb3578 + 0x10;
  plVar2 = *(long **)(*(long *)puVar1 + 0x330);
  uVar3 = (**(code **)(*plVar2 + 0x88))(plVar2,param_1[0x16]);
  if (((uVar3 & 1) != 0) && ((long *)param_1[0x16] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x16] + 8))();
  }
  param_1[0x16] = 0;
  return;
}

