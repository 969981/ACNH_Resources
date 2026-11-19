
void FUN_03a57430(long param_1,long param_2,ulong param_3)

{
  undefined *puVar1;
  long *plVar2;
  int iVar3;
  undefined *puVar4;
  long lVar5;
  long *plVar6;
  undefined8 *puVar7;
  undefined1 *puVar8;
  undefined8 *puVar9;
  long lVar10;
  long *plVar11;
  void *pvVar12;
  long lVar13;
  void *__ptr;
  int iVar14;
  
  lVar13 = 0;
  do {
    plVar6 = *(long **)(param_1 + 0x7e8 + lVar13);
    if ((plVar6 != (long *)0x0) && (*plVar6 == param_2)) {
      plVar6 = *(long **)(param_2 + lVar13 + 0x290);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x88))();
        puVar7 = *(undefined8 **)(*(long *)(param_2 + lVar13 + 0x290) + 0x18);
        *puVar7 = 0;
        *(undefined4 *)(puVar7 + 1) = 0;
        *(undefined8 *)(param_1 + 0x7e8 + lVar13) = 0;
      }
    }
    lVar13 = lVar13 + 8;
  } while (lVar13 != 0x188);
  if (*(int *)(param_2 + 0x98) != 0) {
    plVar6 = *(long **)(param_2 + 0xa0);
    plVar2 = plVar6 + *(int *)(param_2 + 0x98);
    do {
      lVar13 = *plVar6;
      if (0 < *(int *)(lVar13 + 0x30)) {
        plVar11 = *(long **)(lVar13 + 0x20);
        if (*plVar11 != 0) {
          *(long *)(*plVar11 + 8) = plVar11[1];
        }
        if ((long *)plVar11[1] != (long *)0x0) {
          *(long *)plVar11[1] = *plVar11;
        }
        *plVar11 = 0;
        plVar11[1] = 0;
        *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + -1;
        while ((plVar11 != (long *)0x0 &&
               (puVar7 = (undefined8 *)((long)plVar11 - (long)*(int *)(lVar13 + 0x34)),
               puVar7 != (undefined8 *)0x0))) {
          lVar10 = *(long *)(lVar13 + 8);
          *puVar7 = *(undefined8 *)(lVar10 + 0x7b0);
          *(undefined8 **)(lVar10 + 0x7b0) = puVar7;
          *(int *)(lVar10 + 0x7c0) = *(int *)(lVar10 + 0x7c0) + -1;
          if (*(int *)(lVar13 + 0x30) < 1) break;
          plVar11 = *(long **)(lVar13 + 0x20);
          if (*plVar11 != 0) {
            *(long *)(*plVar11 + 8) = plVar11[1];
          }
          if ((long *)plVar11[1] != (long *)0x0) {
            *(long *)plVar11[1] = *plVar11;
          }
          *plVar11 = 0;
          plVar11[1] = 0;
          *(int *)(lVar13 + 0x30) = *(int *)(lVar13 + 0x30) + -1;
        }
      }
      plVar6 = plVar6 + 1;
    } while (plVar6 != plVar2);
  }
  iVar3 = *(int *)(param_2 + 0x448);
  if (iVar3 != 0) {
    lVar13 = *(long *)(param_2 + 0x450);
    iVar14 = 0;
    do {
      puVar8 = (undefined1 *)(lVar13 + (long)iVar14 * 0x1f0);
      *puVar8 = 0;
      *(undefined4 *)(puVar8 + 0x60) = 0xffffffff;
      **(undefined1 **)(puVar8 + 0x10) = 0;
      memset(puVar8 + 0x68,0,0x188);
      iVar14 = iVar14 + 1;
    } while (iVar3 != iVar14);
  }
  if ((param_3 & 1) != 0) {
    if (*(long **)(param_2 + 0x418) != (long *)0x0) {
      (**(code **)(**(long **)(param_2 + 0x418) + 8))();
    }
    puVar4 = PTR_DAT_04bb2698;
    pvVar12 = *(void **)(param_2 + 0x4a8);
    if (pvVar12 != (void *)0x0) {
      if (*(long *)(param_1 + 0x990) != param_1 + 0x988) {
        lVar10 = (long)*(int *)(param_1 + 0x99c);
        pvVar12 = (void *)(*(long *)(param_1 + 0x990) - lVar10);
        lVar13 = (long)pvVar12 + lVar10;
        puVar1 = PTR_DAT_04bc9388 + 0x10;
        do {
          lVar13 = *(long *)(lVar13 + 8);
          if (*(long *)((long)pvVar12 + 0x38) == param_2) {
            plVar6 = (long *)((long)pvVar12 + (long)*(int *)(param_1 + 0x99c));
            if (*plVar6 != 0) {
              *(long *)(*plVar6 + 8) = plVar6[1];
            }
            if ((long *)plVar6[1] != (long *)0x0) {
              *(long *)plVar6[1] = *plVar6;
            }
            *plVar6 = 0;
            plVar6[1] = 0;
            *(int *)(param_1 + 0x998) = *(int *)(param_1 + 0x998) + -1;
            *(undefined **)((long)pvVar12 + 0x10) = puVar1;
            __ptr = *(void **)((long)pvVar12 + 0x18);
            if (__ptr == (void *)0x0) {
LAB_03a576f4:
              lVar5 = *(long *)puVar4;
            }
            else {
              if (*(long *)puVar4 != 0) {
                plVar6 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
                if (plVar6 != (long *)0x0) {
                  (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
                }
                goto LAB_03a576f4;
              }
              free(__ptr);
              lVar5 = *(long *)puVar4;
            }
            if (lVar5 == 0) {
              free(pvVar12);
            }
            else {
              plVar6 = (long *)FUN_038cb610(lVar5,pvVar12);
              if (plVar6 != (long *)0x0) {
                (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
              }
            }
          }
          pvVar12 = (void *)(lVar13 - lVar10);
        } while (pvVar12 != (void *)((param_1 + 0x988) - lVar10));
        pvVar12 = *(void **)(param_2 + 0x4a8);
        if (pvVar12 == (void *)0x0) goto LAB_03a57768;
      }
      if (*(long *)puVar4 == 0) {
        free(pvVar12);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar12);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,pvVar12);
        }
      }
    }
  }
LAB_03a57768:
  *(undefined8 *)(param_2 + 0x418) = 0;
  *(undefined8 *)(param_2 + 0x4a8) = 0;
  *(undefined4 *)(param_2 + 0x4b0) = 0;
  if (0 < *(int *)(param_2 + 0x498)) {
    plVar6 = *(long **)(param_2 + 0x488);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_2 + 0x498) = *(int *)(param_2 + 0x498) + -1;
    while ((plVar6 != (long *)0x0 &&
           (puVar7 = (undefined8 *)((long)plVar6 - (long)*(int *)(param_2 + 0x49c)),
           puVar7 != (undefined8 *)0x0))) {
      *puVar7 = *(undefined8 *)(param_1 + 0x7b0);
      *(undefined8 **)(param_1 + 0x7b0) = puVar7;
      *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + -1;
      if (*(int *)(param_2 + 0x498) < 1) break;
      plVar6 = *(long **)(param_2 + 0x488);
      if (*plVar6 != 0) {
        *(long *)(*plVar6 + 8) = plVar6[1];
      }
      if ((long *)plVar6[1] != (long *)0x0) {
        *(long *)plVar6[1] = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(param_2 + 0x498) = *(int *)(param_2 + 0x498) + -1;
    }
  }
  if (0 < *(int *)(param_2 + 0x480)) {
    plVar6 = *(long **)(param_2 + 0x470);
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(param_2 + 0x480) = *(int *)(param_2 + 0x480) + -1;
    while ((plVar6 != (long *)0x0 &&
           (puVar7 = (undefined8 *)((long)plVar6 - (long)*(int *)(param_2 + 0x484)),
           puVar7 != (undefined8 *)0x0))) {
      puVar9 = (undefined8 *)puVar7[2];
      *puVar9 = *(undefined8 *)(param_1 + 0x788);
      *(undefined8 **)(param_1 + 0x788) = puVar9;
      *(int *)(param_1 + 0x798) = *(int *)(param_1 + 0x798) + -1;
      *puVar7 = *(undefined8 *)(param_1 + 0x7b0);
      *(undefined8 **)(param_1 + 0x7b0) = puVar7;
      *(int *)(param_1 + 0x7c0) = *(int *)(param_1 + 0x7c0) + -1;
      if (*(int *)(param_2 + 0x480) < 1) break;
      plVar6 = *(long **)(param_2 + 0x470);
      if (*plVar6 != 0) {
        *(long *)(*plVar6 + 8) = plVar6[1];
      }
      if ((long *)plVar6[1] != (long *)0x0) {
        *(long *)plVar6[1] = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(param_2 + 0x480) = *(int *)(param_2 + 0x480) + -1;
    }
  }
  *(undefined4 *)(param_2 + 0x468) = 0;
  return;
}

