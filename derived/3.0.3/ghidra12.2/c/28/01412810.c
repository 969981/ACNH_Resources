
void FUN_01412810(undefined8 *param_1)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_049977e8;
  param_1[0x740] = &PTR_LAB_049978f0;
  param_1[0x744] = &PTR_LAB_04997978;
  plVar2 = (long *)param_1[0x749];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x749];
  }
  *(undefined4 *)(param_1 + 0x74f) = 0;
  if (param_1[0x74c] != 0) {
    if (0 < *(int *)(param_1 + 0x74b)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x74c] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x74d];
        param_1[0x74d] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x74b));
    }
    pvVar4 = (void *)param_1[0x74e];
    *(undefined4 *)(param_1 + 0x74b) = 0;
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
    *(undefined4 *)((long)param_1 + 0x3a74) = 0;
    *(undefined8 *)((long)param_1 + 0x3a6c) = 0;
    *(undefined8 *)((long)param_1 + 0x3a64) = 0;
    *(undefined8 *)((long)param_1 + 0x3a5c) = 0;
  }
  lVar5 = param_1[0x741];
  param_1[0x740] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_01412998:
    param_1[0x741] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x3a00);
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
    goto LAB_01412998;
  }
  param_1[0x62d] = &PTR_LAB_04997db0;
  param_1[0x631] = &PTR_LAB_04997e38;
  plVar2 = (long *)param_1[0x636];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x636];
  }
  *(undefined4 *)(param_1 + 0x63c) = 0;
  if (param_1[0x639] != 0) {
    if (0 < *(int *)(param_1 + 0x638)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x639] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x63a];
        param_1[0x63a] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x638));
    }
    pvVar4 = (void *)param_1[0x63b];
    *(undefined4 *)(param_1 + 0x638) = 0;
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
    *(undefined4 *)((long)param_1 + 0x31dc) = 0;
    *(undefined8 *)((long)param_1 + 0x31d4) = 0;
    *(undefined8 *)((long)param_1 + 0x31cc) = 0;
    *(undefined8 *)((long)param_1 + 0x31c4) = 0;
  }
  lVar5 = param_1[0x62e];
  param_1[0x62d] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_01412b00:
    param_1[0x62e] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x3168);
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
    goto LAB_01412b00;
  }
  param_1[0x51a] = &PTR_LAB_04998270;
  param_1[0x51e] = &PTR_LAB_049982f8;
  plVar2 = (long *)param_1[0x523];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x523];
  }
  *(undefined4 *)(param_1 + 0x529) = 0;
  if (param_1[0x526] != 0) {
    if (0 < *(int *)(param_1 + 0x525)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x526] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x527];
        param_1[0x527] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x525));
    }
    pvVar4 = (void *)param_1[0x528];
    *(undefined4 *)(param_1 + 0x525) = 0;
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
    *(undefined4 *)((long)param_1 + 0x2944) = 0;
    *(undefined8 *)((long)param_1 + 0x293c) = 0;
    *(undefined8 *)((long)param_1 + 0x2934) = 0;
    *(undefined8 *)((long)param_1 + 0x292c) = 0;
  }
  lVar5 = param_1[0x51b];
  param_1[0x51a] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_01412c64:
    param_1[0x51b] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x28d0);
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
    goto LAB_01412c64;
  }
  param_1[0x407] = &PTR_LAB_04998730;
  param_1[0x40b] = &PTR_LAB_049987b8;
  plVar2 = (long *)param_1[0x410];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x410];
  }
  *(undefined4 *)(param_1 + 0x416) = 0;
  if (param_1[0x413] != 0) {
    if (0 < *(int *)(param_1 + 0x412)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x413] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x414];
        param_1[0x414] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x412));
    }
    pvVar4 = (void *)param_1[0x415];
    *(undefined4 *)(param_1 + 0x412) = 0;
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
    *(undefined4 *)((long)param_1 + 0x20ac) = 0;
    *(undefined8 *)((long)param_1 + 0x20a4) = 0;
    *(undefined8 *)((long)param_1 + 0x209c) = 0;
    *(undefined8 *)((long)param_1 + 0x2094) = 0;
  }
  lVar5 = param_1[0x408];
  param_1[0x407] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_01412dd0:
    param_1[0x408] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x2038);
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
    goto LAB_01412dd0;
  }
  param_1[0x2f4] = &PTR_LAB_04998bf0;
  param_1[0x2f8] = &PTR_LAB_04998c78;
  plVar2 = (long *)param_1[0x2fd];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x2fd];
  }
  *(undefined4 *)(param_1 + 0x303) = 0;
  if (param_1[0x300] != 0) {
    if (0 < *(int *)(param_1 + 0x2ff)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x300] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x301];
        param_1[0x301] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x2ff));
    }
    pvVar4 = (void *)param_1[0x302];
    *(undefined4 *)(param_1 + 0x2ff) = 0;
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
    *(undefined4 *)((long)param_1 + 0x1814) = 0;
    *(undefined8 *)((long)param_1 + 0x180c) = 0;
    *(undefined8 *)((long)param_1 + 0x1804) = 0;
    *(undefined8 *)((long)param_1 + 0x17fc) = 0;
  }
  lVar5 = param_1[0x2f5];
  param_1[0x2f4] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_01412f34:
    param_1[0x2f5] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x17a0);
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
    goto LAB_01412f34;
  }
  param_1[699] = &PTR_LAB_049990b0;
  param_1[0x2c1] = &PTR_LAB_04999210;
  param_1[0x2c5] = &PTR_LAB_04999298;
  plVar2 = (long *)param_1[0x2ca];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x2ca];
  }
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  if (param_1[0x2cd] != 0) {
    if (0 < *(int *)(param_1 + 0x2cc)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x2cd] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x2ce];
        param_1[0x2ce] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x2cc));
    }
    pvVar4 = (void *)param_1[0x2cf];
    *(undefined4 *)(param_1 + 0x2cc) = 0;
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
    *(undefined4 *)((long)param_1 + 0x167c) = 0;
    *(undefined8 *)((long)param_1 + 0x1674) = 0;
    *(undefined8 *)((long)param_1 + 0x166c) = 0;
    *(undefined8 *)((long)param_1 + 0x1664) = 0;
  }
  lVar5 = param_1[0x2c2];
  param_1[0x2c1] = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_014130a4:
    param_1[0x2c2] = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x1608);
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
    goto LAB_014130a4;
  }
  param_1[0x1a7] = &PTR_LAB_0499a690;
  param_1[0x1ab] = &PTR_LAB_0499a718;
  plVar2 = (long *)param_1[0x1b0];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x1b0];
  }
  *(undefined4 *)(param_1 + 0x1b6) = 0;
  if (param_1[0x1b3] != 0) {
    if (0 < *(int *)(param_1 + 0x1b2)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x1b3] + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = param_1[0x1b4];
        param_1[0x1b4] = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x1b2));
    }
    pvVar4 = (void *)param_1[0x1b5];
    *(undefined4 *)(param_1 + 0x1b2) = 0;
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
    *(undefined4 *)((long)param_1 + 0xdac) = 0;
    *(undefined8 *)((long)param_1 + 0xda4) = 0;
    *(undefined8 *)((long)param_1 + 0xd9c) = 0;
    *(undefined8 *)((long)param_1 + 0xd94) = 0;
  }
  lVar5 = param_1[0x1a8];
  param_1[0x1a7] = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_01413210;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0xd38);
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
  param_1[0x1a8] = 1;
LAB_01413210:
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

