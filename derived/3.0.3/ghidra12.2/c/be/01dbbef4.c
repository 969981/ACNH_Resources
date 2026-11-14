
void FUN_01dbbef4(long *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  long *plVar8;
  
  *param_1 = (long)&PTR_FUN_04a5b1a0;
  plVar8 = DAT_0537d558;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_0537d550 == param_1) {
    DAT_0537d550 = (long *)0x0;
    pvVar5 = (void *)DAT_0537d558[0x11];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      plVar8[0x11] = 0;
    }
    pvVar5 = (void *)plVar8[6];
    if (pvVar5 != (void *)0x0) {
      FUN_03ebae78(pvVar5);
      puVar4 = (undefined8 *)((long)pvVar5 + 0x50);
      puVar3 = (undefined8 *)*puVar4;
      if ((puVar3 != (undefined8 *)0x0) &&
         ((undefined8 *)*puVar3 != (undefined8 *)0x0 && (undefined8 *)*puVar3 == puVar4)) {
        *puVar4 = 0;
        *puVar3 = 0;
      }
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      plVar8[6] = 0;
    }
    pvVar5 = (void *)plVar8[5];
    if (pvVar5 != (void *)0x0) {
      FUN_03ebae78((long)pvVar5 + 0x58);
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      plVar8[5] = 0;
    }
    pvVar5 = (void *)plVar8[4];
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      plVar8[4] = 0;
    }
    pvVar5 = (void *)plVar8[3];
    if (pvVar5 != (void *)0x0) {
      puVar3 = (undefined8 *)((long)pvVar5 + 34000);
      puVar4 = (undefined8 *)*puVar3;
      if ((puVar4 != (undefined8 *)0x0) &&
         ((undefined8 *)*puVar4 != (undefined8 *)0x0 && (undefined8 *)*puVar4 == puVar3)) {
        *puVar3 = 0;
        *puVar4 = 0;
      }
      FUN_01db63a8((long)pvVar5 + 0x98);
      FUN_038e1a84(pvVar5);
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      plVar8[3] = 0;
    }
    pvVar5 = (void *)plVar8[2];
    if (pvVar5 != (void *)0x0) {
      FUN_01d4b5a4(pvVar5);
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
      plVar8[2] = 0;
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      (**(code **)(*(long *)plVar8[1] + 8))();
      plVar8[1] = 0;
    }
    if ((long *)*plVar8 != (long *)0x0) {
      (**(code **)(*(long *)*plVar8 + 8))();
      *plVar8 = 0;
    }
    plVar8 = plVar8 + 8;
    puVar3 = (undefined8 *)*plVar8;
    if (((puVar3 != (undefined8 *)0x0) && ((long *)*puVar3 != (long *)0x0)) &&
       ((long *)*puVar3 == plVar8)) {
      *plVar8 = 0;
      *puVar3 = 0;
    }
    DAT_0537d558 = (long *)0x0;
  }
  lVar6 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar8 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar8 != 0) {
      *(long *)(*plVar8 + 8) = plVar8[1];
    }
    if ((long *)plVar8[1] != (long *)0x0) {
      *(long *)plVar8[1] = *plVar8;
    }
    *plVar8 = 0;
    plVar8[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

