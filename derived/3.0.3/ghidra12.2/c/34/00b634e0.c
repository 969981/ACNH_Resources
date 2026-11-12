
void FUN_00b634e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *__ptr;
  long lVar5;
  long lVar6;
  
  param_1[0xda] = 0;
  param_1[0xd4] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0xce] = 0;
  puVar1 = PTR_DAT_04bb5a88;
  *param_1 = &PTR_FUN_049390b8;
  param_1[200] = 0;
  param_1[0xc2] = 0;
  puVar1 = puVar1 + 0x10;
  param_1[0xd5] = puVar2 + 0x10;
  param_1[0xcf] = puVar2 + 0x10;
  param_1[0x92] = &PTR_LAB_049397a8;
  param_1[0x55] = &PTR_LAB_049397a8;
  param_1[0xc9] = puVar1;
  param_1[0xc3] = puVar1;
  param_1[0x18] = &PTR_LAB_04939448;
  param_1[0xbd] = puVar1;
  param_1[0xb7] = puVar1;
  param_1[0xbc] = 0;
  param_1[0xb1] = puVar1;
  param_1[0xb6] = 0;
  param_1[0xab] = puVar1;
  param_1[0xb0] = 0;
  param_1[0xa5] = puVar1;
  param_1[0xaa] = 0;
  param_1[0x98] = &PTR_LAB_04939908;
  param_1[0x9e] = &PTR_LAB_04939a68;
  param_1[0xa4] = 0;
  param_1[0x8c] = puVar1;
  param_1[0x91] = 0;
  param_1[0x86] = puVar1;
  param_1[0x8b] = 0;
  param_1[0x80] = puVar1;
  param_1[0x85] = 0;
  param_1[0x7a] = puVar1;
  param_1[0x7f] = 0;
  param_1[0x74] = puVar1;
  param_1[0x79] = 0;
  param_1[0x6e] = puVar1;
  param_1[0x73] = 0;
  param_1[0x68] = puVar1;
  param_1[0x6d] = 0;
  param_1[0x5b] = &PTR_LAB_04939908;
  param_1[0x61] = &PTR_LAB_04939a68;
  param_1[0x67] = 0;
  param_1[0x4f] = puVar1;
  param_1[0x54] = 0;
  param_1[0x42] = &PTR_LAB_04939908;
  param_1[0x48] = &PTR_LAB_04939a68;
  param_1[0x4e] = 0;
  param_1[0x3b] = &PTR_LAB_04939a68;
  param_1[0x41] = 0;
  param_1[0x28] = &PTR_LAB_04939908;
  param_1[0x2e] = &PTR_LAB_04939a68;
  param_1[0x1c] = &PTR_LAB_049394d0;
  param_1[0x34] = 0;
  param_1[0x35] = &PTR_LAB_04939908;
  plVar3 = (long *)param_1[0x21];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x21];
  }
  *(undefined4 *)(param_1 + 0x27) = 0;
  if (param_1[0x24] != 0) {
    if (0 < *(int *)(param_1 + 0x23)) {
      lVar5 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x24] + lVar5 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar5 = lVar5 + 1;
        *puVar4 = param_1[0x25];
        param_1[0x25] = puVar4;
      } while (lVar5 < *(int *)(param_1 + 0x23));
    }
    __ptr = (void *)param_1[0x26];
    *(undefined4 *)(param_1 + 0x23) = 0;
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
    *(undefined4 *)((long)param_1 + 0x134) = 0;
    *(undefined8 *)((long)param_1 + 300) = 0;
    *(undefined8 *)((long)param_1 + 0x124) = 0;
    *(undefined8 *)((long)param_1 + 0x11c) = 0;
  }
  lVar5 = param_1[0x19];
  param_1[0x18] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x18));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[0x19] = 1;
  return;
}

