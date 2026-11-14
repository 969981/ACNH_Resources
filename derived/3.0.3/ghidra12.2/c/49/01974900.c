
void FUN_01974900(undefined8 *param_1)

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
  
  *param_1 = &PTR_FUN_049e24b8;
  param_1[0xe8] = PTR_DAT_04bbf4c8 + 0x10;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x11e] = 0;
  puVar1 = puVar2 + 0x10;
  param_1[0x119] = puVar1;
  puVar3 = PTR_DAT_04bb3380;
  param_1[0x118] = 0;
  param_1[0x10d] = puVar1;
  param_1[0x112] = 0;
  param_1[0x107] = puVar1;
  param_1[0x10c] = 0;
  param_1[0x101] = puVar1;
  param_1[0x106] = 0;
  param_1[0xfb] = puVar1;
  param_1[0x100] = 0;
  param_1[0x113] = puVar3 + 0x10;
  puVar3 = PTR_DAT_04bb3058;
  param_1[0xee] = PTR_DAT_04bb5950 + 0x10;
  uVar4 = (**(code **)(**(long **)(*(long *)puVar3 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar3 + 0x330),param_1[0xfa]);
  if (((uVar4 & 1) != 0) && ((long *)param_1[0xfa] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xfa] + 8))();
  }
  puVar3 = PTR_DAT_04bbf4c0;
  plVar5 = (long *)param_1[0x81];
  param_1[0xfa] = 0;
  param_1[0xe2] = puVar1;
  param_1[0xe7] = 0;
  param_1[0xdc] = puVar1;
  param_1[0xe1] = 0;
  param_1[0xd6] = puVar1;
  param_1[0xdb] = 0;
  param_1[0xd0] = puVar1;
  param_1[0xd5] = 0;
  param_1[0xca] = puVar1;
  param_1[0xcf] = 0;
  param_1[0xc4] = puVar1;
  param_1[0xc9] = 0;
  param_1[0xbe] = puVar1;
  param_1[0x88] = puVar3 + 0x10;
  param_1[0x78] = &PTR_LAB_049e2858;
  param_1[0xc3] = 0;
  param_1[0xb8] = puVar1;
  param_1[0xbd] = 0;
  param_1[0xb2] = puVar1;
  param_1[0xb7] = 0;
  param_1[0xac] = puVar1;
  param_1[0xb1] = 0;
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
  param_1[0x7c] = &PTR_LAB_049e28e0;
  while (plVar5 != (long *)0x0) {
    (**(code **)(*plVar5 + 0x40))();
    plVar5 = (long *)param_1[0x81];
  }
  *(undefined4 *)(param_1 + 0x87) = 0;
  if (param_1[0x84] != 0) {
    if (0 < *(int *)(param_1 + 0x83)) {
      lVar7 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0x84] + lVar7 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + 1;
        *puVar6 = param_1[0x85];
        param_1[0x85] = puVar6;
      } while (lVar7 < *(int *)(param_1 + 0x83));
    }
    __ptr = (void *)param_1[0x86];
    *(undefined4 *)(param_1 + 0x83) = 0;
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
    *(undefined4 *)((long)param_1 + 0x434) = 0;
    *(undefined8 *)((long)param_1 + 0x42c) = 0;
    *(undefined8 *)((long)param_1 + 0x424) = 0;
    *(undefined8 *)((long)param_1 + 0x41c) = 0;
  }
  lVar7 = param_1[0x79];
  param_1[0x78] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_01974bb8;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar5 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x3c0);
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
  param_1[0x79] = 1;
LAB_01974bb8:
  param_1[0x77] = 0;
  param_1[0x71] = 0;
  param_1[0x18] = puVar3 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[0x72] = puVar2;
  param_1[0x6c] = puVar2;
  param_1[0x66] = puVar2;
  param_1[0x6b] = 0;
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

