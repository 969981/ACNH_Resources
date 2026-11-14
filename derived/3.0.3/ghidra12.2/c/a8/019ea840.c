
void FUN_019ea840(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  long lVar7;
  undefined8 *puVar8;
  void *__ptr;
  long lVar9;
  
  puVar3 = PTR_DAT_04bb31d0;
  *param_1 = &PTR_FUN_049f3c08;
  param_1[0x106] = 0;
  param_1[0x100] = 0;
  puVar1 = puVar3 + 0x10;
  param_1[0x101] = puVar1;
  param_1[0xfb] = puVar1;
  puVar2 = PTR_DAT_04bbf818;
  param_1[0xf5] = puVar1;
  param_1[0xfa] = 0;
  param_1[0xef] = puVar1;
  param_1[0xf4] = 0;
  param_1[0xe9] = puVar1;
  param_1[0xee] = 0;
  param_1[0xc4] = puVar2 + 0x10;
  puVar2 = PTR_DAT_04bb3380;
  param_1[0xe8] = 0;
  param_1[0xe3] = puVar2 + 0x10;
  puVar4 = PTR_DAT_04bb5950;
  param_1[0xdd] = puVar1;
  puVar2 = PTR_DAT_04bb3058;
  param_1[0xe2] = 0;
  param_1[0xd7] = puVar1;
  param_1[0xdc] = 0;
  lVar7 = *(long *)puVar2;
  param_1[0xca] = puVar4 + 0x10;
  uVar5 = (**(code **)(**(long **)(lVar7 + 0x330) + 0x88))(*(long **)(lVar7 + 0x330),param_1[0xd6]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0xd6] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xd6] + 8))();
  }
  param_1[0xd6] = 0;
  param_1[0xbe] = puVar1;
  param_1[0xc3] = 0;
  param_1[0xb8] = puVar1;
  param_1[0xbd] = 0;
  param_1[0xb2] = puVar1;
  param_1[0xb7] = 0;
  param_1[0xac] = puVar1;
  param_1[0xb1] = 0;
  puVar4 = PTR_DAT_04bbf810;
  plVar6 = (long *)param_1[0x6f];
  puVar2 = PTR_DAT_04bbf810 + 0x10;
  param_1[0xa6] = puVar1;
  param_1[0xab] = 0;
  param_1[0xa0] = puVar1;
  param_1[0xa5] = 0;
  param_1[0x9a] = puVar1;
  param_1[0x76] = puVar2;
  param_1[0x66] = &PTR_LAB_049f3fa8;
  param_1[0x9f] = 0;
  param_1[0x94] = puVar1;
  param_1[0x99] = 0;
  param_1[0x8e] = puVar1;
  param_1[0x93] = 0;
  param_1[0x88] = puVar1;
  param_1[0x8d] = 0;
  param_1[0x82] = puVar1;
  param_1[0x87] = 0;
  param_1[0x7c] = puVar1;
  param_1[0x81] = 0;
  param_1[0x6a] = &PTR_LAB_049f4030;
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[0x6f];
  }
  *(undefined4 *)(param_1 + 0x75) = 0;
  if (param_1[0x72] != 0) {
    if (0 < *(int *)(param_1 + 0x71)) {
      lVar7 = 0;
      do {
        puVar8 = *(undefined8 **)(param_1[0x72] + lVar7 * 8);
        (**(code **)*puVar8)(puVar8);
        lVar7 = lVar7 + 1;
        *puVar8 = param_1[0x73];
        param_1[0x73] = puVar8;
      } while (lVar7 < *(int *)(param_1 + 0x71));
    }
    __ptr = (void *)param_1[0x74];
    *(undefined4 *)(param_1 + 0x71) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x3a4) = 0;
    *(undefined8 *)((long)param_1 + 0x39c) = 0;
    *(undefined8 *)((long)param_1 + 0x394) = 0;
    *(undefined8 *)((long)param_1 + 0x38c) = 0;
  }
  lVar7 = param_1[0x67];
  param_1[0x66] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_019eaaec;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x330);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0x67] = 1;
LAB_019eaaec:
  puVar3 = puVar3 + 0x10;
  param_1[0x65] = 0;
  param_1[0x60] = puVar3;
  param_1[0x5a] = puVar3;
  param_1[0x5f] = 0;
  param_1[0x54] = puVar3;
  param_1[0x59] = 0;
  param_1[0x4e] = puVar3;
  param_1[0x53] = 0;
  param_1[0x18] = puVar4 + 0x10;
  param_1[0x48] = puVar3;
  param_1[0x4d] = 0;
  param_1[0x42] = puVar3;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x1e] = puVar3;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar3;
  param_1[0x35] = 0;
  param_1[0x36] = puVar3;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar3;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar3;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3;
  return;
}

