
void FUN_03bc79e0(uint *param_1)

{
  uint *puVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  long *plVar7;
  void *pvVar8;
  uint uVar9;
  uint uVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  
  puVar6 = PTR_DAT_04bb2698;
  pvVar8 = *(void **)(param_1 + 2);
  if (pvVar8 != (void *)0x0) {
    uVar5 = *param_1;
    if (0 < (int)uVar5) {
      uVar9 = 0;
      do {
        uVar10 = *param_1;
        lVar11 = *(long *)(param_1 + 2);
        uVar3 = uVar9;
        if (uVar10 <= uVar9) {
          uVar3 = 0;
        }
        if (*(long *)(lVar11 + (ulong)uVar3 * 0x10 + 8) != 0) {
          uVar3 = *(uint *)(lVar11 + (ulong)uVar3 * 0x10);
          if (0 < (int)uVar3) {
            uVar10 = 0;
            do {
              lVar11 = 0;
              do {
                uVar4 = uVar9;
                if (*param_1 <= uVar9) {
                  uVar4 = 0;
                }
                puVar1 = (uint *)(*(long *)(param_1 + 2) + (ulong)uVar4 * 0x10);
                uVar4 = uVar10;
                if (*puVar1 <= uVar10) {
                  uVar4 = 0;
                }
                lVar13 = *(long *)(puVar1 + 2) + (ulong)uVar4 * 0x300;
                lVar2 = lVar13 + lVar11;
                pvVar8 = *(void **)(lVar2 + 8);
                if (pvVar8 != (void *)0x0) {
                  if (*(long *)puVar6 == 0) {
                    free(pvVar8);
                  }
                  else {
                    plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
                    if (plVar7 != (long *)0x0) {
                      (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
                    }
                  }
                  *(undefined8 *)(lVar2 + 8) = 0;
                  *(undefined4 *)(lVar13 + lVar11) = 0;
                }
                lVar11 = lVar11 + 0x10;
              } while (lVar11 != 0x300);
              uVar10 = uVar10 + 1;
            } while (uVar10 != uVar3);
            uVar10 = *param_1;
            lVar11 = *(long *)(param_1 + 2);
          }
          uVar3 = uVar9;
          if (uVar10 <= uVar9) {
            uVar3 = 0;
          }
          puVar12 = (undefined8 *)(lVar11 + (ulong)uVar3 * 0x10 + 8);
          pvVar8 = (void *)*puVar12;
          if (pvVar8 != (void *)0x0) {
            if (*(long *)puVar6 == 0) {
              free(pvVar8);
            }
            else {
              plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
              if (plVar7 != (long *)0x0) {
                (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
              }
            }
            *puVar12 = 0;
            *(undefined4 *)(lVar11 + (ulong)uVar3 * 0x10) = 0;
          }
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 != uVar5);
      pvVar8 = *(void **)(param_1 + 2);
      if (pvVar8 == (void *)0x0) goto LAB_03bc7ba8;
    }
    if (*(long *)puVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[2] = 0;
    param_1[3] = 0;
    *param_1 = 0;
  }
LAB_03bc7ba8:
  pvVar8 = *(void **)(param_1 + 4);
  if (pvVar8 != (void *)0x0) {
    if (*(long *)puVar6 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar6,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[4] = 0;
    param_1[5] = 0;
  }
  return;
}

