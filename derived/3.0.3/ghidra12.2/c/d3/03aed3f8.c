
void FUN_03aed3f8(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  short sVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  long *plVar7;
  ulong uVar8;
  void *pvVar9;
  uint *puVar10;
  ulong uVar11;
  long lVar12;
  
  *param_1 = &PTR_FUN_04b72378;
  puVar6 = PTR_DAT_04bc1010;
  puVar5 = PTR_DAT_04bb2698;
  puVar10 = (uint *)(param_1 + 1);
  uVar8 = (ulong)*puVar10;
  if (0 < (int)*puVar10) {
    uVar11 = 0;
    puVar1 = PTR_DAT_04bbd500 + 0x10;
    do {
      if ((uVar11 < uVar8) && (pvVar9 = *(void **)(param_1[2] + uVar11 * 8), pvVar9 != (void *)0x0))
      {
        if (*(short *)((long)pvVar9 + 0x22a) != -1) {
          lVar12 = *(long *)puVar6;
          nn::os::LockMutex((MutexType *)(lVar12 + 0x580));
          uVar4 = (int)*(short *)((long)pvVar9 + 0x22a) - (uint)*(ushort *)(lVar12 + 0x5c0);
          if (*(uint *)(lVar12 + 0x5a0) <= uVar4) {
            uVar4 = 0;
          }
          lVar2 = *(long *)(lVar12 + 0x5a8) + (long)(int)uVar4 * 0x80;
          sVar3 = *(short *)(lVar2 + 0x76) + -1;
          *(short *)(lVar2 + 0x76) = sVar3;
          if (sVar3 == 0) {
            *(short *)(lVar12 + 0x5c4) = *(short *)(lVar12 + 0x5c4) + -1;
          }
          nn::os::UnlockMutex((MutexType *)(lVar12 + 0x580));
          *(undefined2 *)((long)pvVar9 + 0x22a) = 0xffff;
        }
        FUN_038fd0e0((long)pvVar9 + 0x1a0);
        *(undefined **)((long)pvVar9 + 8) = puVar1;
        FUN_038fd0e0((long)pvVar9 + 0x60);
        lVar12 = *(long *)puVar5;
        if (lVar12 == 0) {
          free(pvVar9);
        }
        else {
          plVar7 = (long *)FUN_038cb610(lVar12,pvVar9);
          if (plVar7 != (long *)0x0) {
            (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
          }
        }
        uVar8 = (ulong)*puVar10;
      }
      uVar11 = uVar11 + 1;
    } while ((long)uVar11 < (long)(int)uVar8);
  }
  pvVar9 = (void *)param_1[2];
  if (pvVar9 != (void *)0x0) {
    lVar12 = *(long *)puVar5;
    if (lVar12 == 0) {
      free(pvVar9);
    }
    else {
      plVar7 = (long *)FUN_038cb610(lVar12,pvVar9);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar9);
      }
    }
    puVar10[0] = 0;
    puVar10[1] = 0;
    param_1[2] = 0;
  }
  return;
}

