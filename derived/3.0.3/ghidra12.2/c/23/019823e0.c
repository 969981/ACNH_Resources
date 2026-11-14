
void FUN_019823e0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *__ptr;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_FUN_049e4830;
  puVar2 = PTR_DAT_04bbf3a0;
  puVar1 = PTR_DAT_04bb3380;
  param_1[0xe8] = 0;
  param_1[0xac] = puVar2 + 0x10;
  param_1[0xe3] = puVar1 + 0x10;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0xe2] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0xdd] = puVar1;
  param_1[0xd7] = puVar1;
  puVar3 = PTR_DAT_04bb62c0;
  param_1[0xdc] = 0;
  param_1[0xd6] = 0;
  param_1[0xcb] = puVar1;
  param_1[0xd0] = 0;
  param_1[0xc5] = puVar1;
  param_1[0xca] = 0;
  param_1[0xbf] = puVar1;
  param_1[0xd1] = puVar3 + 0x10;
  puVar4 = PTR_DAT_04bb5950;
  param_1[0xc4] = 0;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0xb2] = puVar4 + 0x10;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0xbe]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0xbe] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xbe] + 8))();
  }
  param_1[0xbe] = 0;
  puVar3 = PTR_DAT_04bbf398;
  plVar6 = (long *)param_1[99];
  param_1[0xa6] = puVar1;
  param_1[0xab] = 0;
  param_1[0xa0] = puVar1;
  param_1[0xa5] = 0;
  param_1[0x9a] = puVar1;
  param_1[0x9f] = 0;
  param_1[0x94] = puVar1;
  param_1[0x99] = 0;
  param_1[0x8e] = puVar1;
  param_1[0x93] = 0;
  param_1[0x88] = puVar1;
  param_1[0x8d] = 0;
  param_1[0x82] = puVar1;
  param_1[0x6a] = puVar3 + 0x10;
  param_1[0x5a] = &PTR_LAB_049e4bd0;
  param_1[0x87] = 0;
  param_1[0x7c] = puVar1;
  param_1[0x81] = 0;
  param_1[0x76] = puVar1;
  param_1[0x7b] = 0;
  param_1[0x70] = puVar1;
  param_1[0x75] = 0;
  param_1[0x5e] = &PTR_LAB_049e4c58;
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[99];
  }
  *(undefined4 *)(param_1 + 0x69) = 0;
  if (param_1[0x66] != 0) {
    if (0 < *(int *)(param_1 + 0x65)) {
      lVar8 = 0;
      do {
        puVar7 = *(undefined8 **)(param_1[0x66] + lVar8 * 8);
        (**(code **)*puVar7)(puVar7);
        lVar8 = lVar8 + 1;
        *puVar7 = param_1[0x67];
        param_1[0x67] = puVar7;
      } while (lVar8 < *(int *)(param_1 + 0x65));
    }
    __ptr = (void *)param_1[0x68];
    *(undefined4 *)(param_1 + 0x65) = 0;
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
    *(undefined4 *)((long)param_1 + 0x344) = 0;
    *(undefined8 *)((long)param_1 + 0x33c) = 0;
    *(undefined8 *)((long)param_1 + 0x334) = 0;
    *(undefined8 *)((long)param_1 + 0x32c) = 0;
  }
  lVar8 = param_1[0x5b];
  param_1[0x5a] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_01982688;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x2d0);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar8 + 0x80) = *(int *)(lVar8 + 0x80) + -1;
    if (lVar9 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar9 + 0x20));
    }
  }
  param_1[0x5b] = 1;
LAB_01982688:
  param_1[0x59] = 0;
  param_1[0x53] = 0;
  param_1[0x18] = puVar3 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[0x54] = puVar2;
  param_1[0x4e] = puVar2;
  param_1[0x48] = puVar2;
  param_1[0x4d] = 0;
  param_1[0x42] = puVar2;
  param_1[0x47] = 0;
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

