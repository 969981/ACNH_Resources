
void FUN_03f04620(undefined8 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined *puVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long *__ptr;
  void *pvVar11;
  uint uVar12;
  uint uVar13;
  undefined8 *puVar14;
  
  *param_1 = &PTR_FUN_04ba78d0;
  puVar3 = PTR_DAT_04bb2698;
  uVar6 = *(uint *)(param_1 + 1);
  if (0 < (int)uVar6) {
    uVar12 = 0;
    do {
      lVar7 = param_1[2];
      uVar10 = uVar12;
      if (uVar6 <= uVar12) {
        uVar10 = 0;
      }
      uVar8 = (ulong)uVar10;
      uVar10 = *(uint *)(lVar7 + uVar8 * 0x10);
      if (0 < (int)uVar10) {
        uVar13 = 0;
        do {
          uVar2 = uVar13;
          if (uVar10 <= uVar13) {
            uVar2 = 0;
          }
          puVar1 = (undefined4 *)(*(long *)(lVar7 + uVar8 * 0x10 + 8) + (ulong)uVar2 * 0x10);
          plVar5 = (long *)(puVar1 + 2);
          lVar9 = *plVar5;
          if (lVar9 != 0) {
            __ptr = (long *)(lVar9 + -8);
            if (*__ptr != 0) {
              lVar7 = *__ptr * 0xa8;
              do {
                FUN_039aa618(lVar9 + -0x68 + lVar7);
                lVar7 = lVar7 + -0xa8;
              } while (lVar7 != 0);
            }
            if (*(long *)puVar3 == 0) {
              free(__ptr);
            }
            else {
              plVar4 = (long *)FUN_038cb610(*(long *)puVar3,__ptr);
              if (plVar4 != (long *)0x0) {
                (**(code **)(*plVar4 + 0x38))(plVar4,__ptr);
              }
            }
            *plVar5 = 0;
            *puVar1 = 0;
            uVar6 = *(uint *)(param_1 + 1);
            lVar7 = param_1[2];
          }
          uVar13 = uVar13 + 1;
          uVar10 = uVar12;
          if (uVar6 <= uVar12) {
            uVar10 = 0;
          }
          uVar8 = (ulong)uVar10;
          uVar10 = *(uint *)(lVar7 + uVar8 * 0x10);
        } while ((int)uVar13 < (int)uVar10);
      }
      puVar1 = (undefined4 *)(lVar7 + uVar8 * 0x10);
      puVar14 = (undefined8 *)(puVar1 + 2);
      pvVar11 = (void *)*puVar14;
      if (pvVar11 != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(pvVar11);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar11);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar11);
          }
        }
        *puVar14 = 0;
        *puVar1 = 0;
        uVar6 = *(uint *)(param_1 + 1);
      }
      uVar12 = uVar12 + 1;
    } while ((int)uVar12 < (int)uVar6);
  }
  pvVar11 = (void *)param_1[2];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar11);
      }
    }
    param_1[2] = 0;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  pvVar11 = (void *)param_1[4];
  if (pvVar11 != (void *)0x0) {
    if (*(long *)puVar3 == 0) {
      free(pvVar11);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar11);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar11);
      }
    }
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 3) = 0;
  }
  param_1[5] = 0;
  return;
}

