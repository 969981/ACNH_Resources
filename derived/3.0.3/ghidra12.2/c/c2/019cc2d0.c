
void FUN_019cc2d0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  ulong uVar7;
  long *plVar8;
  undefined8 *puVar9;
  void *__ptr;
  long lVar10;
  long lVar11;
  
  *param_1 = &PTR_FUN_049f0bd8;
  param_1[0xc6] = PTR_DAT_04bbf3f0 + 0x10;
  puVar1 = PTR_DAT_04bb3058;
  param_1[0xcc] = PTR_DAT_04bb5950 + 0x10;
  uVar7 = (**(code **)(**(long **)(*(long *)puVar1 + 0x330) + 0x88))
                    (*(long **)(*(long *)puVar1 + 0x330),param_1[0xd8]);
  if (((uVar7 & 1) != 0) && ((long *)param_1[0xd8] != (long *)0x0)) {
    (**(code **)(*(long *)param_1[0xd8] + 8))();
  }
  param_1[0xd8] = 0;
  puVar6 = PTR_DAT_04bbf3e8;
  param_1[0xc5] = 0;
  puVar3 = PTR_DAT_04bb5a60;
  param_1[0xbe] = 0;
  puVar2 = PTR_DAT_04bb31d0;
  param_1[0x77] = puVar6 + 0x10;
  param_1[0xbf] = puVar3 + 0x10;
  puVar4 = PTR_DAT_04bb62c0;
  puVar1 = puVar2 + 0x10;
  param_1[0xb9] = puVar1;
  param_1[0xb8] = 0;
  param_1[0xb3] = puVar4 + 0x10;
  puVar5 = PTR_DAT_04bbefc8;
  plVar8 = (long *)param_1[0x70];
  param_1[0xad] = puVar1;
  param_1[0xa7] = puVar1;
  param_1[0xa1] = puVar1;
  param_1[0x9b] = puVar1;
  param_1[0x95] = puVar1;
  param_1[0x8f] = puVar1;
  param_1[0x89] = puVar1;
  param_1[0x83] = puVar1;
  param_1[0x67] = &PTR_LAB_049f0f78;
  param_1[0xb2] = 0;
  param_1[0xac] = 0;
  param_1[0xa6] = 0;
  param_1[0xa0] = 0;
  param_1[0x9a] = 0;
  param_1[0x94] = 0;
  param_1[0x8e] = 0;
  param_1[0x88] = 0;
  param_1[0x6b] = &PTR_LAB_049f1000;
  param_1[0x7d] = puVar5 + 0x10;
  while (plVar8 != (long *)0x0) {
    (**(code **)(*plVar8 + 0x40))();
    plVar8 = (long *)param_1[0x70];
  }
  *(undefined4 *)(param_1 + 0x76) = 0;
  if (param_1[0x73] != 0) {
    if (0 < *(int *)(param_1 + 0x72)) {
      lVar10 = 0;
      do {
        puVar9 = *(undefined8 **)(param_1[0x73] + lVar10 * 8);
        (**(code **)*puVar9)(puVar9);
        lVar10 = lVar10 + 1;
        *puVar9 = param_1[0x74];
        param_1[0x74] = puVar9;
      } while (lVar10 < *(int *)(param_1 + 0x72));
    }
    __ptr = (void *)param_1[0x75];
    *(undefined4 *)(param_1 + 0x72) = 0;
    if (__ptr != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(__ptr);
      }
      else {
        plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
        if (plVar8 != (long *)0x0) {
          (**(code **)(*plVar8 + 0x38))(plVar8,__ptr);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x3ac) = 0;
    *(undefined8 *)((long)param_1 + 0x3a4) = 0;
    *(undefined8 *)((long)param_1 + 0x39c) = 0;
    *(undefined8 *)((long)param_1 + 0x394) = 0;
  }
  lVar10 = param_1[0x68];
  param_1[0x67] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar10 != 0) {
    if (lVar10 == 1) goto LAB_019cc558;
    if ((*(uint *)(lVar10 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar10 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar10 + 0xb0));
    }
    plVar8 = (long *)((long)param_1 + (long)*(int *)(lVar10 + 0x84) + 0x338);
    if (*plVar8 != 0) {
      *(long *)(*plVar8 + 8) = plVar8[1];
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      *(long *)plVar8[1] = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(lVar10 + 0x80) = *(int *)(lVar10 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[0x68] = 1;
LAB_019cc558:
  param_1[0x66] = 0;
  param_1[0x18] = puVar6 + 0x10;
  param_1[0x60] = puVar3 + 0x10;
  puVar2 = puVar2 + 0x10;
  param_1[0x54] = puVar4 + 0x10;
  param_1[0x5a] = puVar2;
  param_1[0x5f] = 0;
  param_1[0x59] = 0;
  param_1[0x1e] = puVar5 + 0x10;
  param_1[0x4e] = puVar2;
  param_1[0x53] = 0;
  param_1[0x48] = puVar2;
  param_1[0x4d] = 0;
  param_1[0x42] = puVar2;
  param_1[0x47] = 0;
  param_1[0x41] = 0;
  param_1[0x24] = puVar2;
  param_1[0x3b] = 0;
  param_1[0x3c] = puVar2;
  param_1[0x35] = 0;
  param_1[0x36] = puVar2;
  param_1[0x2f] = 0;
  param_1[0x30] = puVar2;
  param_1[0x29] = 0;
  param_1[0x2a] = puVar2;
  return;
}

