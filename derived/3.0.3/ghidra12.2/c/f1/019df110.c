
void FUN_019df110(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  ulong uVar4;
  long *plVar5;
  undefined8 *puVar6;
  void *__ptr;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bbf7c8;
  *param_1 = &PTR_FUN_049f19c0;
  param_1[100] = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x82] = 0;
  param_1[0x7c] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x7d] = puVar1;
  param_1[0x77] = puVar1;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x6a] = PTR_DAT_04bb5950 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0x76]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0x76] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x76] + 8))();
  }
  param_1[0x76] = 0;
  puVar3 = PTR_DAT_04bbf7c0;
  plVar5 = (long *)param_1[0x3f];
  param_1[0x5e] = puVar1;
  param_1[99] = 0;
  param_1[0x58] = puVar1;
  param_1[0x5d] = 0;
  param_1[0x52] = puVar1;
  param_1[0x57] = 0;
  param_1[0x4c] = puVar1;
  param_1[0x51] = 0;
  param_1[0x46] = puVar3 + 0x10;
  param_1[0x36] = &PTR_LAB_049f1d60;
  param_1[0x3a] = &PTR_LAB_049f1de8;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x3f];
  }
  *(undefined4 *)(param_1 + 0x45) = 0;
  if (param_1[0x42] != 0) {
    if (0 < *(int *)(param_1 + 0x41)) {
      lVar7 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x42] + lVar7 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + 1;
        *puVar6 = param_1[0x43];
        param_1[0x43] = puVar6;
      } while (lVar7 < *(int *)(param_1 + 0x41));
    }
    __ptr = (void *)param_1[0x44];
    *(undefined4 *)(param_1 + 0x41) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x224) = 0;
    *(undefined8 *)((long)param_1 + 0x21c) = 0;
    *(undefined8 *)((long)param_1 + 0x214) = 0;
    *(undefined8 *)((long)param_1 + 0x20c) = 0;
  }
  lVar7 = param_1[0x37];
  param_1[0x36] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_019df348;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x1b0);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x37] = 1;
LAB_019df348:
  puVar2 = puVar2 + 0x10;
  param_1[0x35] = 0;
  param_1[0x18] = puVar3 + 0x10;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar2;
  param_1[0x1e] = puVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar2;
  param_1[0x23] = 0;
  param_1[0x24] = puVar2;
  return;
}

