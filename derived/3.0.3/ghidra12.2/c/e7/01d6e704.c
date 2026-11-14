
void FUN_01d6e704(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  undefined8 *puVar4;
  long lVar5;
  long lVar6;
  
  pvVar3 = (void *)param_1[5];
  *param_1 = &PTR_FUN_04a59f48;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar3 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    puVar4 = (undefined8 *)param_1[7];
    param_1[4] = 0;
    param_1[5] = 0;
    if (puVar4 != (undefined8 *)0x0) {
      pvVar3 = (void *)puVar4[1];
      if (pvVar3 == (void *)0x0) {
LAB_01d6e7b8:
        if (*(long *)puVar1 == 0) {
          free(puVar4);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
          }
        }
      }
      else {
        if (*(long *)puVar1 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
        *puVar4 = 0;
        puVar4[1] = 0;
        puVar4 = (undefined8 *)param_1[7];
        if (puVar4 != (undefined8 *)0x0) goto LAB_01d6e7b8;
      }
      param_1[7] = 0;
    }
    pvVar3 = (void *)param_1[8];
    if (pvVar3 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar3);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
        }
      }
    }
    param_1[8] = 0;
  }
  puVar4 = (undefined8 *)param_1[7];
  param_1[6] = &PTR_FUN_04a59f68;
  if (puVar4 == (undefined8 *)0x0) goto LAB_01d6e8b4;
  pvVar3 = (void *)puVar4[1];
  if (pvVar3 == (void *)0x0) {
LAB_01d6e880:
    if (*(long *)puVar1 == 0) {
      free(puVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,puVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,puVar4);
      }
    }
  }
  else {
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4 = (undefined8 *)param_1[7];
    if (puVar4 != (undefined8 *)0x0) goto LAB_01d6e880;
  }
  param_1[7] = 0;
LAB_01d6e8b4:
  lVar5 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

