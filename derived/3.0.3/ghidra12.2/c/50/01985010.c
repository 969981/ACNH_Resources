
void FUN_01985010(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  void *__ptr;
  long lVar10;
  
  puVar1 = PTR_DAT_04bbf508;
  *param_1 = &PTR_FUN_049e4f48;
  param_1[0x58] = puVar1 + 0x10;
  puVar3 = PTR_DAT_04bb31d0;
  param_1[0xac] = 0;
  param_1[0xa6] = 0;
  param_1[0xa0] = 0;
  param_1[0x9a] = 0;
  param_1[0x94] = 0;
  param_1[0x8e] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x88] = 0;
  param_1[0x82] = 0;
  param_1[0xa7] = puVar1;
  param_1[0xa1] = puVar1;
  param_1[0x9b] = puVar1;
  param_1[0x95] = puVar1;
  param_1[0x8f] = puVar1;
  param_1[0x89] = puVar1;
  param_1[0x83] = puVar1;
  param_1[0x7d] = puVar1;
  puVar2 = PTR_DAT_04bb5950 + 0x10;
  param_1[0x77] = puVar1;
  param_1[0x7c] = 0;
  lVar8 = *(long *)PTR_DAT_04bb3058;
  param_1[0x71] = puVar1;
  param_1[0x76] = 0;
  param_1[0x6b] = puVar1;
  param_1[0x70] = 0;
  param_1[0x5e] = puVar2;
  uVar6 = (**(code **)(**(long **)(lVar8 + 0x330) + 0x88))(*(long **)(lVar8 + 0x330),param_1[0x6a]);
  if (((uVar6 & 1) != 0) && ((long *)param_1[0x6a] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0x6a] + 8))();
  }
  puVar5 = PTR_DAT_04bbf500;
  param_1[0x6a] = 0;
  puVar4 = PTR_DAT_04bb62c0;
  param_1[0x57] = 0;
  puVar2 = PTR_DAT_04bb3380;
  plVar7 = (long *)param_1[0x39];
  param_1[0x4c] = puVar1;
  param_1[0x51] = 0;
  param_1[0x4b] = 0;
  param_1[0x40] = puVar5 + 0x10;
  param_1[0x52] = puVar4 + 0x10;
  param_1[0x46] = puVar2 + 0x10;
  param_1[0x30] = &PTR_LAB_049e52e8;
  param_1[0x34] = &PTR_LAB_049e5370;
  while (plVar7 != (long *)0x0) {
    (**(code **)(*plVar7 + 0x40))();
    plVar7 = (long *)param_1[0x39];
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  if (param_1[0x3c] != 0) {
    if (0 < *(int *)(param_1 + 0x3b)) {
      lVar8 = 0;
      do {
        puVar9 = *(undefined8 **)(param_1[0x3c] + lVar8 * 8);
        (**(code **)*puVar9)(puVar9);
        lVar8 = lVar8 + 1;
        *puVar9 = param_1[0x3d];
        param_1[0x3d] = puVar9;
      } while (lVar8 < *(int *)(param_1 + 0x3b));
    }
    __ptr = (void *)param_1[0x3e];
    *(undefined4 *)(param_1 + 0x3b) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar7 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar7 != (long *)0x0) {
          (**(code **)(*plVar7 + 0x38))(plVar7,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 500) = 0;
    *(undefined8 *)((long)param_1 + 0x1ec) = 0;
    *(undefined8 *)((long)param_1 + 0x1e4) = 0;
    *(undefined8 *)((long)param_1 + 0x1dc) = 0;
  }
  lVar8 = param_1[0x31];
  param_1[0x30] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_0198529c;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar10 = 0;
    }
    else {
      lVar10 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar7 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x180);
    if (*plVar7 != 0) {
      *(long *)(*plVar7 + 8) = plVar7[1];
    }
    if ((long *)plVar7[1] != (long *)0x0) {
      *(long *)plVar7[1] = *plVar7;
    }
    *plVar7 = 0;
    plVar7[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar10 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar10 + 0x20));
    }
  }
  param_1[0x31] = 1;
LAB_0198529c:
  param_1[0x2f] = 0;
  param_1[0x18] = puVar5 + 0x10;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar4 + 0x10;
  param_1[0x1e] = puVar2 + 0x10;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3 + 0x10;
  return;
}

