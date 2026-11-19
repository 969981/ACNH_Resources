
void FUN_03c41e00(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *__ptr;
  long lVar4;
  long lVar5;
  
  puVar1 = PTR_DAT_04bd2f00;
  param_1[0x3c] = (long)&PTR_LAB_04b7f7a0;
  param_1[0x6e] = (long)&PTR_FUN_04b7f900;
  param_1[0x7a] = (long)&PTR_LAB_04b7fa60;
  *param_1 = (long)(puVar1 + 0x10);
  param_1[0x7e] = (long)&PTR_LAB_04b7fae8;
  plVar3 = (long *)param_1[0x83];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x83];
  }
  *(undefined4 *)(param_1 + 0x89) = 0;
  if (param_1[0x86] != 0) {
    if (0 < (int)param_1[0x85]) {
      lVar4 = 0;
      do {
        plVar3 = *(long **)(param_1[0x86] + lVar4 * 8);
        (**(code **)*plVar3)(plVar3);
        lVar4 = lVar4 + 1;
        *plVar3 = param_1[0x87];
        param_1[0x87] = (long)plVar3;
      } while (lVar4 < (int)param_1[0x85]);
    }
    __ptr = (void *)param_1[0x88];
    *(undefined4 *)(param_1 + 0x85) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x444) = 0;
    *(undefined8 *)((long)param_1 + 0x43c) = 0;
    *(undefined8 *)((long)param_1 + 0x434) = 0;
    *(undefined8 *)((long)param_1 + 0x42c) = 0;
  }
  lVar4 = param_1[0x7b];
  param_1[0x7a] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_03c41fa8;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x3d0);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[0x7b] = 1;
LAB_03c41fa8:
  param_1[0x79] = 0;
  puVar1 = PTR_DAT_04bb31d0;
  param_1[0x6d] = 0;
  param_1[0x5a] = (long)&PTR_LAB_04b800b8;
  puVar2 = PTR_DAT_04bb5890;
  param_1[0x66] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0x5f] = 0;
  param_1[0x59] = 0;
  param_1[0x74] = (long)puVar1;
  param_1[0x54] = (long)puVar1;
  param_1[0x4e] = (long)puVar1;
  param_1[0x53] = 0;
  param_1[0x48] = (long)puVar1;
  param_1[0x4d] = 0;
  param_1[0x42] = (long)puVar1;
  param_1[0x67] = (long)(puVar2 + 0x10);
  param_1[0x60] = (long)(puVar2 + 0x10);
  param_1[0x47] = 0;
  param_1[0x3b] = 0;
  param_1[0x35] = 0;
  param_1[0x36] = (long)puVar1;
  param_1[0x2f] = 0;
  param_1[0x30] = (long)puVar1;
  param_1[0x29] = 0;
  param_1[0x2a] = (long)puVar1;
  param_1[0x23] = 0;
  param_1[0x24] = (long)puVar1;
  param_1[0x1d] = 0;
  param_1[0x1e] = (long)puVar1;
  param_1[0x17] = 0;
  param_1[0x18] = (long)puVar1;
  puVar2 = PTR_DAT_04bb33a8 + 0x10;
  param_1[6] = (long)puVar1;
  param_1[0x11] = 0;
  param_1[0x12] = (long)puVar1;
  param_1[0xb] = 0;
  param_1[0xc] = (long)puVar2;
  return;
}

