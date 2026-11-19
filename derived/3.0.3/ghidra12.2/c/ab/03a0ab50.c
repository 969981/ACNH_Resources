
void FUN_03a0ab50(undefined4 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long *plVar6;
  long *__ptr;
  void *pvVar7;
  long lVar8;
  long lVar9;
  
  puVar5 = PTR_DAT_04bd1840;
  puVar4 = PTR_DAT_04bb2698;
  lVar8 = *(long *)(param_1 + 2);
  if (lVar8 != 0) {
    __ptr = (long *)(lVar8 + -8);
    if (*__ptr != 0) {
      lVar9 = *__ptr * 0x3d8;
      puVar1 = PTR_DAT_04bd1840 + 0x10;
      do {
        lVar3 = lVar8 + lVar9;
        FUN_03b0c258(lVar3 + -0xc0);
        pvVar7 = *(void **)(lVar3 + -0xd8);
        *(undefined **)(lVar3 + -0x100) = puVar1;
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(pvVar7);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
            }
          }
        }
        puVar2 = puVar5 + 0x10;
        *(undefined **)(lVar3 + -0x140) = puVar2;
        pvVar7 = *(void **)(lVar3 + -0x118);
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(pvVar7);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
            }
          }
        }
        *(undefined **)(lVar3 + -0x180) = puVar2;
        pvVar7 = *(void **)(lVar3 + -0x158);
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(pvVar7);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
            }
          }
        }
        puVar2 = puVar5 + 0x10;
        *(undefined **)(lVar3 + -0x1c0) = puVar2;
        pvVar7 = *(void **)(lVar3 + -0x198);
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(pvVar7);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
            }
          }
        }
        *(undefined **)(lVar3 + -0x200) = puVar2;
        pvVar7 = *(void **)(lVar3 + -0x1d8);
        if (pvVar7 != (void *)0x0) {
          if (*(long *)puVar4 == 0) {
            free(pvVar7);
          }
          else {
            plVar6 = (long *)FUN_038cb610(*(long *)puVar4,pvVar7);
            if (plVar6 != (long *)0x0) {
              (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
            }
          }
        }
        lVar9 = lVar9 + -0x3d8;
      } while (lVar9 != 0);
    }
    if (*(long *)puVar4 == 0) {
      free(__ptr);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar4,__ptr);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
      }
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  return;
}

