
void FUN_01d6f8d0(undefined8 *param_1)

{
  int *piVar1;
  undefined *puVar2;
  long *plVar3;
  int iVar4;
  void *pvVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  pvVar5 = (void *)param_1[5];
  *param_1 = &PTR_FUN_04a59f90;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar5 == (void *)0x0) {
    puVar6 = (undefined8 *)param_1[7];
    *(undefined4 *)(param_1 + 8) = 0;
    param_1[6] = &PTR_FUN_04a59fb0;
    if (puVar6 == (undefined8 *)0x0) goto LAB_01d6fabc;
    pvVar5 = (void *)puVar6[1];
    if (pvVar5 == (void *)0x0) {
LAB_01d6fa80:
      if (DAT_05ae7600 == 0) {
        free(puVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,puVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,puVar6);
        }
      }
    }
    else {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)param_1[7];
      if (puVar6 != (undefined8 *)0x0) goto LAB_01d6fa80;
    }
    param_1[7] = 0;
    goto LAB_01d6fabc;
  }
  piVar1 = (int *)(param_1 + 4);
  iVar4 = *piVar1;
  if (iVar4 == 0) {
LAB_01d6f954:
    if (*(long *)puVar2 == 0) {
      free(pvVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    param_1[5] = 0;
  }
  else {
    do {
      if (iVar4 < 1) {
        plVar3 = (long *)0x0;
      }
      else {
        *(uint *)(param_1 + 4) = iVar4 - 1U;
        plVar3 = *(long **)(param_1[5] + (ulong)(iVar4 - 1U) * 8);
      }
      FUN_01d707f4(plVar3);
      (**(code **)(*plVar3 + 8))(plVar3);
      iVar4 = *piVar1;
    } while (iVar4 != 0);
    pvVar5 = (void *)param_1[5];
    if (pvVar5 != (void *)0x0) goto LAB_01d6f954;
  }
  puVar6 = (undefined8 *)param_1[7];
  if (puVar6 != (undefined8 *)0x0) {
    pvVar5 = (void *)puVar6[1];
    if (pvVar5 == (void *)0x0) {
LAB_01d6fa24:
      if (*(long *)puVar2 == 0) {
        free(puVar6);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,puVar6);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,puVar6);
        }
      }
    }
    else {
      if (*(long *)puVar2 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6 = (undefined8 *)param_1[7];
      if (puVar6 != (undefined8 *)0x0) goto LAB_01d6fa24;
    }
    param_1[7] = 0;
  }
  *(undefined4 *)(param_1 + 8) = 0;
  param_1[6] = &PTR_FUN_04a59fb0;
LAB_01d6fabc:
  lVar7 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar7 != 0) {
    if (lVar7 == 1) {
      return;
    }
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)param_1);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

