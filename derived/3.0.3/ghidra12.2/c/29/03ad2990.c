
void FUN_03ad2990(undefined8 *param_1)

{
  ulong uVar1;
  ushort uVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  uint uVar9;
  ulong uVar10;
  void *__ptr;
  long lVar11;
  void *pvVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  
  *param_1 = &PTR_FUN_04b714c8;
  puVar3 = PTR_DAT_04bb2698;
  lVar4 = param_1[5];
  if (lVar4 != 0) {
    if (*(short *)(lVar4 + 0x40) != 0) {
      uVar13 = 0;
      do {
        lVar11 = *(long *)(lVar4 + 0x10) + uVar13 * 0x100;
        __ptr = *(void **)(lVar11 + 200);
        if (__ptr != (void *)0x0) {
          uVar2 = *(ushort *)(lVar11 + 0xe8);
          uVar14 = (ulong)uVar2;
          if (uVar14 != 0) {
            uVar15 = 1;
            uVar7 = 0;
            uVar9 = (uint)uVar2;
            do {
              uVar1 = uVar7 + 1;
              uVar10 = (ulong)(uVar9 + 3) & 3;
              pvVar12 = *(void **)(*(long *)((long)__ptr + 0x40) + uVar7 * 8);
              *(undefined8 *)(*(long *)((long)__ptr + 0x40) + uVar7 * 8) = 0;
              if (uVar1 < uVar14) {
                uVar6 = uVar15;
                if ((~(uint)uVar7 + (uint)uVar2 & 3) != 0) {
                  uVar8 = uVar10;
                  do {
                    if (pvVar12 == *(void **)(*(long *)((long)__ptr + 0x40) + uVar6 * 8)) {
                      *(undefined8 *)(*(long *)((long)__ptr + 0x40) + uVar6 * 8) = 0;
                    }
                    uVar6 = uVar6 + 1;
                    uVar8 = uVar8 - 1;
                  } while (uVar8 != 0);
                }
                if (2 < (uVar14 - 2) - uVar7) {
                  do {
                    if (pvVar12 == *(void **)(*(long *)((long)__ptr + 0x40) + uVar6 * 8)) {
                      *(undefined8 *)(*(long *)((long)__ptr + 0x40) + uVar6 * 8) = 0;
                    }
                    lVar4 = *(long *)((long)__ptr + 0x40) + uVar6 * 8;
                    if (pvVar12 == *(void **)(lVar4 + 8)) {
                      *(undefined8 *)(lVar4 + 8) = 0;
                    }
                    lVar4 = *(long *)((long)__ptr + 0x40) + uVar6 * 8;
                    if (pvVar12 == *(void **)(lVar4 + 0x10)) {
                      *(undefined8 *)(lVar4 + 0x10) = 0;
                    }
                    lVar4 = *(long *)((long)__ptr + 0x40) + uVar6 * 8;
                    if (pvVar12 == *(void **)(lVar4 + 0x18)) {
                      *(undefined8 *)(lVar4 + 0x18) = 0;
                    }
                    uVar6 = uVar6 + 4;
                  } while (uVar14 != uVar6);
                }
              }
              if (pvVar12 != (void *)0x0) {
                if (*(long *)puVar3 == 0) {
                  free(pvVar12);
                }
                else {
                  plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
                  if (plVar5 != (long *)0x0) {
                    (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
                  }
                }
              }
              uVar15 = uVar15 + 1;
              uVar9 = (uint)uVar10;
              uVar7 = uVar1;
            } while (uVar1 != uVar14);
          }
          pvVar12 = *(void **)((long)__ptr + 0x40);
          if (pvVar12 != (void *)0x0) {
            if (*(long *)puVar3 == 0) {
              free(pvVar12);
            }
            else {
              plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar12);
              if (plVar5 != (long *)0x0) {
                (**(code **)(*plVar5 + 0x38))(plVar5,pvVar12);
              }
            }
          }
          FUN_038e1a84(__ptr);
          if (*(long *)puVar3 == 0) {
            free(__ptr);
          }
          else {
            plVar5 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
            if (plVar5 != (long *)0x0) {
              (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
            }
          }
          *(undefined8 *)(lVar11 + 200) = 0;
          lVar4 = param_1[5];
        }
        uVar13 = uVar13 + 1;
      } while (uVar13 < *(ushort *)(lVar4 + 0x40));
    }
    FUN_003a0840(lVar4,*(undefined8 *)(DAT_05ae78f0 + 0x30));
  }
  lVar4 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) {
      return;
    }
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar11 = 0;
    }
    else {
      lVar11 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar5 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
    if (*plVar5 != 0) {
      *(long *)(*plVar5 + 8) = plVar5[1];
    }
    if ((long *)plVar5[1] != (long *)0x0) {
      *(long *)plVar5[1] = *plVar5;
    }
    *plVar5 = 0;
    plVar5[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar11 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar11 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

