
void FUN_032aab28(long *param_1)

{
  undefined *puVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  void *__ptr;
  
  puVar5 = PTR_LAB_04bc8ef8;
  puVar1 = (undefined *)0x0;
  if (param_1[1] != 0) {
    puVar1 = PTR_LAB_04bc8ef8;
  }
  if (puVar1 != (undefined *)0x0) {
    FUN_032c6840();
    puVar7 = (undefined8 *)param_1[1];
    param_1[1] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_032c6840(puVar7);
      plVar6 = (long *)*puVar7;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[3] = 0;
      if (plVar6 != (long *)0x0) {
        lVar3 = puVar7[1];
        lVar4 = puVar7[2];
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        if ((undefined8 *)*plVar6 == puVar7) {
          *plVar6 = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar4;
        }
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(puVar7);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar7);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,puVar7);
        }
      }
    }
  }
  puVar1 = (undefined *)0x0;
  if (param_1[2] != 0) {
    puVar1 = puVar5;
  }
  if (puVar1 != (undefined *)0x0) {
    FUN_032c6840();
    puVar7 = (undefined8 *)param_1[2];
    param_1[2] = 0;
    if (puVar7 != (undefined8 *)0x0) {
      FUN_032c6840(puVar7);
      plVar6 = (long *)*puVar7;
      puVar7[4] = 0;
      puVar7[5] = 0;
      puVar7[3] = 0;
      if (plVar6 != (long *)0x0) {
        lVar3 = puVar7[1];
        lVar4 = puVar7[2];
        puVar7[2] = 0;
        *puVar7 = 0;
        puVar7[1] = 0;
        if ((undefined8 *)*plVar6 == puVar7) {
          *plVar6 = lVar4;
        }
        if (lVar4 != 0) {
          *(long *)(lVar4 + 8) = lVar3;
        }
        if (lVar3 != 0) {
          *(long *)(lVar3 + 0x10) = lVar4;
        }
      }
      puVar7[1] = 0;
      puVar7[2] = 0;
      *puVar7 = 0;
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(puVar7);
      }
      else {
        plVar6 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,puVar7);
        if (plVar6 != (long *)0x0) {
          (**(code **)(*plVar6 + 0x38))(plVar6,puVar7);
        }
      }
    }
  }
  puVar2 = (undefined1 *)0x0;
  if (*param_1 != 0) {
    puVar2 = &LAB_032ac1e0;
  }
  if (puVar2 != (undefined1 *)0x0) {
    FUN_03286f10();
    __ptr = (void *)*param_1;
    *param_1 = 0;
    if (__ptr != (void *)0x0) {
      FUN_03286c9c(__ptr);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
        return;
      }
      plVar6 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar6 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x032aacf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*plVar6 + 0x38))(plVar6,__ptr);
        return;
      }
    }
  }
  return;
}

