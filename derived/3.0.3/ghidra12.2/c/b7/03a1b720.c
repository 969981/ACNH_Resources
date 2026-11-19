
void FUN_03a1b720(long *param_1)

{
  undefined *puVar1;
  uint *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  long *plVar5;
  long *plVar6;
  int iVar7;
  long lVar8;
  undefined8 *__ptr;
  undefined4 *__ptr_00;
  void *pvVar9;
  ulong uVar10;
  long lVar11;
  
  __ptr = (undefined8 *)param_1[0x1ac];
  *param_1 = (long)&PTR_FUN_04b6ce08;
  param_1[6] = (long)&PTR_LAB_04b6cf48;
  puVar3 = PTR_DAT_04bb2698;
  if ((int)param_1[0x1ab] != 0) {
    puVar4 = __ptr + (int)param_1[0x1ab];
    puVar1 = PTR_DAT_04bd11b8 + 0x10;
    do {
      __ptr_00 = (undefined4 *)*__ptr;
      pvVar9 = *(void **)(__ptr_00 + 6);
      if (pvVar9 != (void *)0x0) {
        if (*(long *)puVar3 == 0) {
          free(pvVar9);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
          }
        }
        *(undefined8 *)(__ptr_00 + 6) = 0;
        __ptr_00[4] = 0;
        __ptr_00 = (undefined4 *)*__ptr;
      }
      lVar8 = *(long *)(__ptr_00 + 2);
      if (lVar8 != 0) {
        plVar5 = (long *)(lVar8 + -8);
        if (*plVar5 != 0) {
          lVar11 = *plVar5 * 0x78;
          do {
            *(undefined **)(lVar8 + -0x78 + lVar11) = puVar1;
            FUN_0390d560();
            lVar11 = lVar11 + -0x78;
          } while (lVar11 != 0);
        }
        if (*(long *)puVar3 == 0) {
          free(plVar5);
        }
        else {
          plVar6 = (long *)FUN_038cb610(*(long *)puVar3,plVar5);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,plVar5);
          }
        }
        *(undefined8 *)(__ptr_00 + 2) = 0;
        *__ptr_00 = 0;
        __ptr_00 = (undefined4 *)*__ptr;
      }
      if (*(long *)puVar3 == 0) {
        free(__ptr_00);
      }
      else if ((__ptr_00 != (undefined4 *)0x0) &&
              (plVar5 = (long *)FUN_038cb610(*(long *)puVar3,__ptr_00), plVar5 != (long *)0x0)) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr_00);
      }
      __ptr = __ptr + 1;
    } while (__ptr != puVar4);
    __ptr = (undefined8 *)param_1[0x1ac];
  }
  if (__ptr != (undefined8 *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
    param_1[0x1ab] = 0;
    param_1[0x1ac] = 0;
  }
  puVar3 = PTR_DAT_04bb2698;
  iVar7 = *(int *)((long)param_1 + 0xd6c);
  puVar2 = (uint *)(param_1 + 0x1ad);
  if (0 < iVar7) {
    uVar10 = 0;
    do {
      if ((uVar10 < *puVar2) &&
         (pvVar9 = *(void **)(param_1[0x1ae] + uVar10 * 8), pvVar9 != (void *)0x0)) {
        if (*(long *)puVar3 == 0) {
          free(pvVar9);
        }
        else {
          plVar5 = (long *)FUN_038cb610(*(long *)puVar3,pvVar9);
          if (plVar5 != (long *)0x0) {
            (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
          }
        }
        iVar7 = *(int *)((long)param_1 + 0xd6c);
      }
      uVar10 = uVar10 + 1;
    } while ((long)uVar10 < (long)iVar7);
  }
  pvVar9 = (void *)param_1[0x1ae];
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
      }
    }
    puVar2[0] = 0;
    puVar2[1] = 0;
    param_1[0x1ae] = 0;
  }
  if ((*(byte *)(param_1 + 0x1d5) >> 1 & 1) != 0) {
    pvVar9 = (void *)param_1[0x1d4];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar9);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
        }
      }
      param_1[0x1d4] = 0;
      *(undefined4 *)(param_1 + 0x1d3) = 0;
    }
    *(undefined1 *)(param_1 + 0x1d5) = 0;
  }
  if ((*(byte *)(param_1 + 0x211) >> 1 & 1) != 0) {
    pvVar9 = (void *)param_1[0x210];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar9);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
        }
      }
      param_1[0x210] = 0;
      *(undefined4 *)(param_1 + 0x20f) = 0;
    }
    *(byte *)(param_1 + 0x211) = 0;
  }
  if ((*(byte *)(param_1 + 0x24d) >> 1 & 1) != 0) {
    pvVar9 = (void *)param_1[0x24c];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar9);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
        }
      }
      param_1[0x24c] = 0;
      *(undefined4 *)(param_1 + 0x24b) = 0;
    }
    *(undefined1 *)(param_1 + 0x24d) = 0;
  }
  if ((*(byte *)(param_1 + 0x289) >> 1 & 1) != 0) {
    pvVar9 = (void *)param_1[0x288];
    if (pvVar9 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar9);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
        }
      }
      param_1[0x288] = 0;
      *(undefined4 *)(param_1 + 0x287) = 0;
    }
    *(undefined1 *)(param_1 + 0x289) = 0;
  }
  FUN_0390e230(param_1 + 0x266);
  FUN_0390e230(param_1 + 0x22a);
  FUN_0390e230(param_1 + 0x1ee);
  FUN_0390e230(param_1 + 0x1b2);
  pvVar9 = (void *)param_1[0x23];
  *param_1 = (long)&PTR_FUN_04b6cb78;
  param_1[6] = (long)&PTR_FUN_04b6ccb0;
  if (pvVar9 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar9);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar9);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar9);
      }
    }
    param_1[0x23] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
  }
  FUN_03a26010(param_1 + 0x2e);
  puVar3 = PTR_DAT_04bbd578 + 0x10;
  param_1[6] = (long)(PTR_DAT_04bd11e8 + 0xd8);
  param_1[0x17] = (long)puVar3;
  param_1[0xc] = (long)puVar3;
  puVar1 = PTR_DAT_04bd1068;
  param_1[8] = (long)puVar3;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

