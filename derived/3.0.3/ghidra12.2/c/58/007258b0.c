
void FUN_007258b0(undefined8 *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  param_1[0xbb] = 0;
  *param_1 = &PTR_FUN_04900b00;
  param_1[0xb6] = &PTR_LAB_04903138;
  param_1[0xb0] = &PTR_LAB_04903138;
  param_1[0xb5] = 0;
  param_1[0xaa] = &PTR_LAB_04902ff8;
  param_1[0xaf] = 0;
  param_1[0xa4] = &PTR_LAB_04902ff8;
  param_1[0xa9] = 0;
  param_1[0x9e] = &PTR_LAB_04903138;
  param_1[0xa3] = 0;
  param_1[0x98] = &PTR_LAB_04903138;
  param_1[0x9d] = 0;
  param_1[0x92] = &PTR_LAB_04903138;
  param_1[0x97] = 0;
  param_1[0x91] = 0;
  param_1[0x85] = &PTR_LAB_04902b38;
  plVar1 = (long *)param_1[0x8a];
  param_1[0x81] = &PTR_LAB_04902ab0;
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[0x8a];
  }
  *(undefined4 *)(param_1 + 0x90) = 0;
  if (param_1[0x8d] != 0) {
    if (0 < *(int *)(param_1 + 0x8c)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[0x8d] + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = param_1[0x8e];
        param_1[0x8e] = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x8c));
    }
    pvVar3 = (void *)param_1[0x8f];
    *(undefined4 *)(param_1 + 0x8c) = 0;
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x47c) = 0;
    *(undefined8 *)((long)param_1 + 0x474) = 0;
    *(undefined8 *)((long)param_1 + 0x46c) = 0;
    *(undefined8 *)((long)param_1 + 0x464) = 0;
  }
  lVar4 = param_1[0x82];
  param_1[0x81] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_00725a80:
    param_1[0x82] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x408);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
    goto LAB_00725a80;
  }
  plVar1 = (long *)param_1[0x79];
  param_1[0x80] = 0;
  param_1[0x70] = &PTR_LAB_04902ab0;
  param_1[0x74] = &PTR_LAB_04902b38;
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[0x79];
  }
  *(undefined4 *)(param_1 + 0x7f) = 0;
  if (param_1[0x7c] != 0) {
    if (0 < *(int *)(param_1 + 0x7b)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[0x7c] + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = param_1[0x7d];
        param_1[0x7d] = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x7b));
    }
    pvVar3 = (void *)param_1[0x7e];
    *(undefined4 *)(param_1 + 0x7b) = 0;
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x3f4) = 0;
    *(undefined8 *)((long)param_1 + 0x3ec) = 0;
    *(undefined8 *)((long)param_1 + 0x3e4) = 0;
    *(undefined8 *)((long)param_1 + 0x3dc) = 0;
  }
  lVar4 = param_1[0x71];
  param_1[0x70] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_00725bd8:
    param_1[0x71] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x380);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
    goto LAB_00725bd8;
  }
  param_1[0x6f] = 0;
  param_1[0x5f] = &PTR_LAB_04902230;
  param_1[99] = &PTR_LAB_049022b8;
  plVar1 = (long *)param_1[0x68];
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[0x68];
  }
  *(undefined4 *)(param_1 + 0x6e) = 0;
  if (param_1[0x6b] != 0) {
    if (0 < *(int *)(param_1 + 0x6a)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[0x6b] + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = param_1[0x6c];
        param_1[0x6c] = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x6a));
    }
    pvVar3 = (void *)param_1[0x6d];
    *(undefined4 *)(param_1 + 0x6a) = 0;
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x36c) = 0;
    *(undefined8 *)((long)param_1 + 0x364) = 0;
    *(undefined8 *)((long)param_1 + 0x35c) = 0;
    *(undefined8 *)((long)param_1 + 0x354) = 0;
  }
  lVar4 = param_1[0x60];
  param_1[0x5f] = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_00725d38:
    param_1[0x60] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x2f8);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
    goto LAB_00725d38;
  }
  param_1[0x5e] = 0;
  param_1[0x4e] = &PTR_LAB_04901540;
  param_1[0x52] = &PTR_LAB_049015c8;
  plVar1 = (long *)param_1[0x57];
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = (long *)param_1[0x57];
  }
  *(undefined4 *)(param_1 + 0x5d) = 0;
  if (param_1[0x5a] != 0) {
    if (0 < *(int *)(param_1 + 0x59)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(param_1[0x5a] + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = param_1[0x5b];
        param_1[0x5b] = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x59));
    }
    pvVar3 = (void *)param_1[0x5c];
    *(undefined4 *)(param_1 + 0x59) = 0;
    if (pvVar3 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar3);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x2e4) = 0;
    *(undefined8 *)((long)param_1 + 0x2dc) = 0;
    *(undefined8 *)((long)param_1 + 0x2d4) = 0;
    *(undefined8 *)((long)param_1 + 0x2cc) = 0;
  }
  lVar4 = param_1[0x4f];
  param_1[0x4e] = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_00725ea0;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)param_1 + (long)*(int *)(lVar4 + 0x84) + 0x270);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[0x4f] = 1;
LAB_00725ea0:
  param_1[0x48] = &PTR_LAB_04903138;
  param_1[0x4d] = 0;
  FUN_00728940(param_1 + 0x37);
  param_1[0x36] = 0;
  param_1[0x2b] = &PTR_LAB_04903138;
  param_1[0x30] = 0;
  param_1[0x31] = &PTR_LAB_04902ff8;
  return;
}

