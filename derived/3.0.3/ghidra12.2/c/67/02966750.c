
void FUN_02966750(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04a95320;
  param_1[0x2fe] = &PTR_LAB_04a95428;
  param_1[0x302] = &PTR_LAB_04a954b0;
  plVar2 = (long *)param_1[0x307];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x307];
  }
  *(undefined4 *)(param_1 + 0x30d) = 0;
  if (param_1[0x30a] != 0) {
    if (0 < *(int *)(param_1 + 0x309)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x30a] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x30b];
        param_1[0x30b] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x309));
    }
    pvVar4 = (void *)param_1[0x30c];
    *(undefined4 *)(param_1 + 0x309) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1864) = 0;
    *(undefined8 *)((long)param_1 + 0x185c) = 0;
    *(undefined8 *)((long)param_1 + 0x1854) = 0;
    *(undefined8 *)((long)param_1 + 0x184c) = 0;
  }
  lVar5 = param_1[0x2ff];
  param_1[0x2fe] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_029668d8:
    param_1[0x2ff] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x17f0);
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
    goto LAB_029668d8;
  }
  param_1[0x2c6] = &PTR_LAB_04a958e8;
  param_1[0x2cc] = &PTR_LAB_04a95a48;
  param_1[0x2d0] = &PTR_LAB_04a95ad0;
  plVar2 = (long *)param_1[0x2d5];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x2d5];
  }
  *(undefined4 *)(param_1 + 0x2db) = 0;
  if (param_1[0x2d8] != 0) {
    if (0 < *(int *)(param_1 + 0x2d7)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x2d8] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x2d9];
        param_1[0x2d9] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x2d7));
    }
    pvVar4 = (void *)param_1[0x2da];
    *(undefined4 *)(param_1 + 0x2d7) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x16d4) = 0;
    *(undefined8 *)((long)param_1 + 0x16cc) = 0;
    *(undefined8 *)((long)param_1 + 0x16c4) = 0;
    *(undefined8 *)((long)param_1 + 0x16bc) = 0;
  }
  lVar5 = param_1[0x2cd];
  param_1[0x2cc] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_02966a50:
    param_1[0x2cd] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x1660);
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
    goto LAB_02966a50;
  }
  param_1[0x1b2] = &PTR_LAB_04a96408;
  param_1[0x1b6] = &PTR_LAB_04a96490;
  plVar2 = (long *)param_1[0x1bb];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x1bb];
  }
  *(undefined4 *)(param_1 + 0x1c1) = 0;
  if (param_1[0x1be] != 0) {
    if (0 < *(int *)(param_1 + 0x1bd)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x1be] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x1bf];
        param_1[0x1bf] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x1bd));
    }
    pvVar4 = (void *)param_1[0x1c0];
    *(undefined4 *)(param_1 + 0x1bd) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0xe04) = 0;
    *(undefined8 *)((long)param_1 + 0xdfc) = 0;
    *(undefined8 *)((long)param_1 + 0xdf4) = 0;
    *(undefined8 *)((long)param_1 + 0xdec) = 0;
  }
  lVar5 = param_1[0x1b3];
  param_1[0x1b2] = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_02966bb4;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0xd90);
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
  param_1[0x1b3] = 1;
LAB_02966bb4:
  *param_1 = &PTR_LAB_048fce60;
  if ((undefined8 *)param_1[0x16] != param_1 + 0x15) {
    lVar6 = (long)*(int *)((long)param_1 + 0xbc);
    plVar2 = (long *)((long)param_1[0x16] - lVar6);
    lVar5 = (long)plVar2 + lVar6;
    do {
      plVar1 = (long *)((long)plVar2 + (long)*(int *)((long)param_1 + 0xbc));
      lVar5 = *(long *)(lVar5 + 8);
      if (*plVar1 != 0) {
        *(long *)(*plVar1 + 8) = plVar1[1];
      }
      if ((long *)plVar1[1] != (long *)0x0) {
        *(long *)plVar1[1] = *plVar1;
      }
      *plVar1 = 0;
      plVar1[1] = 0;
      *(int *)(param_1 + 0x17) = *(int *)(param_1 + 0x17) + -1;
      (**(code **)(*plVar2 + 0x28))();
      plVar2 = (long *)(lVar5 - lVar6);
    } while (plVar2 != (long *)((long)(param_1 + 0x15) - lVar6));
  }
  return;
}

