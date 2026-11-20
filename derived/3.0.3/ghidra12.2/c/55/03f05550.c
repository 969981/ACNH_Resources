
void FUN_03f05550(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  uint uVar4;
  long *plVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  ulong uVar10;
  void *pvVar11;
  undefined4 *__ptr;
  long *plVar12;
  long lVar13;
  long lVar14;
  
  *param_1 = (long)&PTR_LAB_04ba78f0;
  if ((*(byte *)(param_1 + 0x1b) >> 1 & 1) != 0) {
    FUN_004d46e0(param_1[0x1d],(int)param_1[0x1e]);
    uVar4 = *(uint *)(param_1 + 0x1b);
    *(uint *)(param_1 + 0x1b) = uVar4 & 0xfffffffd;
    if (((uVar4 >> 8 & 1) != 0) && (pvVar11 = (void *)param_1[0x1c], pvVar11 != (void *)0x0)) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar11);
      }
      else {
        plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar11);
        if (plVar5 != (long *)0x0) {
          (**(code **)(*plVar5 + 0x38))(plVar5,pvVar11);
        }
      }
      param_1[0x1c] = 0;
    }
    param_1[0x1d] = 0;
    *(undefined4 *)(param_1 + 0x1e) = 0;
  }
  puVar1 = PTR_DAT_04bb2698;
  __ptr = (undefined4 *)param_1[0x1a];
  if (__ptr == (undefined4 *)0x0) goto LAB_03f05768;
  plVar5 = *(long **)(__ptr + 2);
  if (plVar5 == (long *)0x0) {
LAB_03f0572c:
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
  else {
    plVar8 = plVar5 + -1;
    if (*plVar8 != 0) {
      plVar9 = plVar5 + *plVar8 * 4;
      do {
        lVar13 = plVar9[-2];
        if (lVar13 != 0) {
          plVar12 = (long *)(lVar13 + -8);
          if (*plVar12 != 0) {
            lVar14 = *plVar12 << 5;
            do {
              lVar3 = lVar13 + lVar14;
              pvVar11 = *(void **)(lVar3 + -8);
              if (pvVar11 != (void *)0x0) {
                lVar6 = *(long *)puVar1;
                if (lVar6 == 0) {
                  free(pvVar11);
                }
                else {
                  plVar7 = (long *)FUN_038cb610(lVar6,pvVar11);
                  if (plVar7 != (long *)0x0) {
                    (**(code **)(*plVar7 + 0x38))(plVar7,pvVar11);
                  }
                }
                *(undefined8 *)(lVar3 + -8) = 0;
                *(undefined4 *)(lVar3 + -0x10) = 0;
              }
              lVar14 = lVar14 + -0x20;
            } while (lVar14 != 0);
          }
          lVar13 = *(long *)puVar1;
          if (lVar13 == 0) {
            free(plVar12);
          }
          else {
            plVar7 = (long *)FUN_038cb610(lVar13,plVar12);
            if (plVar7 != (long *)0x0) {
              (**(code **)(*plVar7 + 0x38))(plVar7,plVar12);
            }
          }
          plVar9[-2] = 0;
          *(undefined4 *)(plVar9 + -3) = 0;
        }
        plVar9 = plVar9 + -4;
        if (*plVar9 != 0) {
          FUN_004435c0();
        }
      } while (plVar9 != plVar5);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar8);
      }
    }
    *(undefined8 *)(__ptr + 2) = 0;
    *__ptr = 0;
    __ptr = (undefined4 *)param_1[0x1a];
    if (__ptr != (undefined4 *)0x0) goto LAB_03f0572c;
  }
  param_1[0x1a] = 0;
LAB_03f05768:
  lVar13 = param_1[5];
  if (lVar13 != 0) {
    plVar5 = (long *)(lVar13 + -8);
    if (*plVar5 != 0) {
      lVar14 = *plVar5 * 0x1a0;
      puVar1 = PTR_DAT_04bbd578 + 0x10;
      puVar2 = PTR_DAT_04bd1068 + 0x10;
      do {
        plVar8 = (long *)(lVar13 + -0xd0 + lVar14);
        lVar14 = lVar14 + -0x1a0;
        plVar8[0x16] = (long)puVar1;
        plVar8[0x12] = (long)puVar1;
        plVar8[0xd] = (long)puVar1;
        plVar8[9] = (long)puVar1;
        plVar8[4] = (long)puVar1;
        *plVar8 = (long)puVar1;
        plVar8[-5] = (long)puVar1;
        plVar8[-10] = (long)puVar1;
        plVar8[-0xf] = (long)puVar1;
        plVar8[-0x14] = (long)puVar1;
        plVar8[-0x1a] = (long)puVar2;
      } while (lVar14 != 0);
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar5);
    }
    else {
      plVar8 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar5);
      if (plVar8 != (long *)0x0) {
        (**(code **)(*plVar8 + 0x38))(plVar8,plVar5);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  plVar5 = (long *)param_1[0x10];
  if (plVar5 != (long *)0x0) {
    plVar8 = plVar5 + -1;
    lVar13 = *plVar8;
    if (lVar13 != 0) {
      plVar9 = plVar5 + lVar13 * 0xf;
      uVar10 = lVar13 * 0x78 - 0x78;
      uVar4 = ((uint)(uVar10 / 0x78) & 0x3ffffff) + 1;
      if ((uVar4 & 3) != 0) {
        lVar13 = ((ulong)uVar4 & 3) * 0x78;
        puVar1 = PTR_DAT_04bd1068 + 0x10;
        puVar2 = PTR_DAT_04bbd578 + 0x10;
        plVar12 = plVar9;
        do {
          plVar9 = plVar12 + -0xf;
          *plVar9 = (long)puVar1;
          lVar13 = lVar13 + -0x78;
          plVar12[-4] = (long)puVar2;
          plVar12[-9] = (long)puVar2;
          plVar12 = plVar9;
        } while (lVar13 != 0);
      }
      if (0x167 < uVar10) {
        puVar1 = PTR_DAT_04bbd578 + 0x10;
        puVar2 = PTR_DAT_04bd1068 + 0x10;
        plVar9 = plVar9 + -0x1e;
        do {
          plVar9[0x1a] = (long)puVar1;
          plVar9[0x15] = (long)puVar1;
          plVar9[0xf] = (long)puVar2;
          plVar9[0xb] = (long)puVar1;
          plVar9[6] = (long)puVar1;
          *plVar9 = (long)puVar2;
          plVar9[-4] = (long)puVar1;
          plVar9[-9] = (long)puVar1;
          plVar9[-0xf] = (long)puVar2;
          plVar9[-0x13] = (long)puVar1;
          plVar9[-0x18] = (long)puVar1;
          plVar12 = plVar9 + -0x1e;
          *plVar12 = (long)puVar2;
          plVar9 = plVar9 + -0x3c;
        } while (plVar12 != plVar5);
      }
    }
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(plVar8);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,plVar8);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,plVar8);
      }
    }
    param_1[0x10] = 0;
    *(undefined4 *)(param_1 + 0xf) = 0;
  }
  puVar2 = PTR_DAT_04bd0de0;
  puVar1 = PTR_DAT_04bd1070 + 0x10;
  param_1[0x11] = (long)puVar1;
  param_1[6] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  if (((*(byte *)(param_1 + 3) & 1) != 0) && (pvVar11 = (void *)param_1[1], pvVar11 != (void *)0x0))
  {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar11);
      return;
    }
    plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar11);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03f059b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar11);
      return;
    }
  }
  return;
}

