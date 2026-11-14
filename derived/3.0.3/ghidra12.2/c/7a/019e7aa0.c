
void FUN_019e7aa0(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_049f3388;
  param_1[0x94] = PTR_DAT_04bbf818 + 0x10;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0xca] = 0;
  param_1[0xc4] = 0;
  param_1[0xbe] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0xc5] = puVar1;
  param_1[0xbf] = puVar1;
  param_1[0xb9] = puVar1;
  puVar3 = PTR_DAT_04bb3380;
  param_1[0xb8] = 0;
  param_1[0xad] = puVar1;
  param_1[0xb2] = 0;
  param_1[0xa7] = puVar1;
  param_1[0xac] = 0;
  param_1[0xb3] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0x9a] = PTR_DAT_04bb5950 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0xa6]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0xa6] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xa6] + 8))();
  }
  param_1[0xa6] = 0;
  puVar3 = PTR_DAT_04bbf810;
  plVar5 = (long *)param_1[0x57];
  param_1[0x8e] = puVar1;
  param_1[0x93] = 0;
  param_1[0x88] = puVar1;
  param_1[0x8d] = 0;
  param_1[0x82] = puVar1;
  param_1[0x87] = 0;
  param_1[0x7c] = puVar1;
  param_1[0x81] = 0;
  param_1[0x76] = puVar1;
  param_1[0x7b] = 0;
  param_1[0x70] = puVar1;
  param_1[0x75] = 0;
  param_1[0x6a] = puVar1;
  param_1[0x5e] = puVar3 + 0x10;
  param_1[0x4e] = &PTR_LAB_049f3728;
  param_1[0x6f] = 0;
  param_1[100] = puVar1;
  param_1[0x69] = 0;
  param_1[0x52] = &PTR_LAB_049f37b0;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x57];
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5a] != 0) {
    if (0 < *(int *)(param_1 + 0x59)) {
      lVar7 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x5a] + lVar7 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + 1;
        *puVar6 = param_1[0x5b];
        param_1[0x5b] = puVar6;
      } while (lVar7 < *(int *)(param_1 + 0x59));
    }
    __ptr = (void *)param_1[0x5c];
    *(undefined4 *)(param_1 + 0x59) = 0;
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
    *(undefined4 *)((long)param_1 + 0x2e4) = 0;
    *(undefined8 *)((long)param_1 + 0x2dc) = 0;
    *(undefined8 *)((long)param_1 + 0x2d4) = 0;
    *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  }
  lVar7 = param_1[0x4f];
  param_1[0x4e] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_019e7d1c;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x270);
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
  param_1[0x4f] = 1;
LAB_019e7d1c:
  param_1[0x4d] = 0;
  param_1[0x47] = 0;
  param_1[0x18] = puVar3 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[0x48] = puVar2;
  param_1[0x42] = puVar2;
  param_1[0x41] = 0;
  param_1[0x1e] = puVar2;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar2;
  param_1[0x35] = 0;
  param_1[0x36] = puVar2;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar2;
  param_1[0x23] = 0;
  param_1[0x24] = puVar2;
  return;
}

