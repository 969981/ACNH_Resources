
void FUN_019e1ea0(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_049f2258;
  param_1[0xd0] = PTR_DAT_04bbf7e8 + 0x10;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0xf4] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0xef] = puVar1;
  param_1[0xe9] = puVar1;
  puVar3 = PTR_DAT_04bb6048;
  param_1[0xee] = 0;
  param_1[0xe8] = 0;
  param_1[0xe3] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0xd6] = PTR_DAT_04bb5950 + 0x10;
  uVar5 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0xe2]);
  if (((uVar5 & 1) != 0) && ((long *)param_1[0xe2] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xe2] + 8))();
  }
  param_1[0xe2] = 0;
  puVar4 = PTR_DAT_04bbf7e0;
  param_1[0xca] = puVar1;
  param_1[0xcf] = 0;
  param_1[0xc4] = puVar1;
  param_1[0xc9] = 0;
  param_1[0xbe] = puVar1;
  param_1[0xc3] = 0;
  param_1[0xb8] = puVar1;
  param_1[0xbd] = 0;
  param_1[0xb2] = puVar1;
  param_1[0xb7] = 0;
  param_1[0xac] = puVar1;
  param_1[0xb1] = 0;
  param_1[0xa6] = puVar1;
  param_1[0x7c] = puVar4 + 0x10;
  param_1[0xab] = 0;
  param_1[0xa0] = puVar1;
  param_1[0xa5] = 0;
  param_1[0x9a] = puVar1;
  param_1[0x9f] = 0;
  param_1[0x94] = puVar1;
  param_1[0x99] = 0;
  param_1[0x8e] = puVar1;
  puVar3 = PTR_DAT_04bb62c0;
  plVar6 = (long *)param_1[0x75];
  puVar1 = PTR_DAT_04bb62c0 + 0x10;
  param_1[0x93] = 0;
  param_1[0x8d] = 0;
  param_1[0x87] = 0;
  param_1[0x88] = puVar1;
  param_1[0x82] = puVar1;
  param_1[0x6c] = &PTR_LAB_049f25f8;
  param_1[0x70] = &PTR_LAB_049f2680;
  while (plVar6 != (long *)0x0) {
    (**(code **)(*plVar6 + 0x40))();
    plVar6 = (long *)param_1[0x75];
  }
  *(undefined4 *)(param_1 + 0x7b) = 0;
  if (param_1[0x78] != 0) {
    if (0 < *(int *)(param_1 + 0x77)) {
      lVar8 = 0;
      do {
        puVar7 = *(undefined8 **)(param_1[0x78] + lVar8 * 8);
        (**(code **)*puVar7)(puVar7);
        lVar8 = lVar8 + 1;
        *puVar7 = param_1[0x79];
        param_1[0x79] = puVar7;
      } while (lVar8 < *(int *)(param_1 + 0x77));
    }
    __ptr = (void *)param_1[0x7a];
    *(undefined4 *)(param_1 + 0x77) = 0;
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
    *(undefined4 *)((long)param_1 + 0x3d4) = 0;
    *(undefined8 *)((long)param_1 + 0x3cc) = 0;
    *(undefined8 *)((long)param_1 + 0x3c4) = 0;
    *(undefined8 *)((long)param_1 + 0x3bc) = 0;
  }
  lVar8 = param_1[0x6d];
  param_1[0x6c] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar8 != 0) {
    if (lVar8 == 1) goto LAB_019e213c;
    if ((*(uint *)(lVar8 + 0xd0) & 1) == 0) {
      lVar9 = 0;
    }
    else {
      lVar9 = lVar8 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar8 + 0xb0));
    }
    plVar6 = (long *)((long)param_1 + (long)*(int *)(lVar8 + 0x84) + 0x360);
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
  param_1[0x6d] = 1;
LAB_019e213c:
  param_1[0x6b] = 0;
  param_1[0x18] = puVar4 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[0x66] = puVar2;
  param_1[0x60] = puVar2;
  param_1[0x65] = 0;
  param_1[0x5a] = puVar2;
  param_1[0x5f] = 0;
  param_1[0x54] = puVar2;
  param_1[0x59] = 0;
  param_1[0x4e] = puVar2;
  param_1[0x53] = 0;
  param_1[0x48] = puVar2;
  param_1[0x4d] = 0;
  param_1[0x42] = puVar2;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x1e] = puVar3 + 0x10;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar2;
  param_1[0x35] = 0;
  param_1[0x36] = puVar2;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar2;
  param_1[0x23] = 0;
  param_1[0x24] = puVar3 + 0x10;
  return;
}

