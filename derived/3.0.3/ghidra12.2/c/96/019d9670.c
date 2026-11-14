
void FUN_019d9670(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  
  if (*(long **)(param_1 + 0x838) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x838) + 0x20))();
    *(undefined8 *)(param_1 + 0x838) = 0;
  }
  *(undefined ***)(param_1 + 0x6e8) = &PTR_LAB_049dc968;
  *(undefined ***)(param_1 + 0x708) = &PTR_LAB_049dc9f0;
  plVar1 = *(long **)(param_1 + 0x730);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x730);
  }
  *(undefined4 *)(param_1 + 0x760) = 0;
  if (*(long *)(param_1 + 0x748) != 0) {
    if (0 < *(int *)(param_1 + 0x740)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x748) + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 0x750);
        *(undefined8 **)(param_1 + 0x750) = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x740));
    }
    pvVar3 = *(void **)(param_1 + 0x758);
    *(undefined4 *)(param_1 + 0x740) = 0;
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
    *(undefined4 *)(param_1 + 0x75c) = 0;
    *(undefined8 *)(param_1 + 0x754) = 0;
    *(undefined8 *)(param_1 + 0x74c) = 0;
    *(undefined8 *)(param_1 + 0x744) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x6f0);
  *(undefined ***)(param_1 + 0x6e8) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_019d9800:
    *(undefined8 *)(param_1 + 0x6f0) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + param_1 + 0x6e8);
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
    goto LAB_019d9800;
  }
  *(undefined ***)(param_1 + 0x5c8) = &PTR_LAB_049dc968;
  *(undefined ***)(param_1 + 0x5e8) = &PTR_LAB_049dc9f0;
  plVar1 = *(long **)(param_1 + 0x610);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x610);
  }
  *(undefined4 *)(param_1 + 0x640) = 0;
  if (*(long *)(param_1 + 0x628) != 0) {
    if (0 < *(int *)(param_1 + 0x620)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x628) + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 0x630);
        *(undefined8 **)(param_1 + 0x630) = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x620));
    }
    pvVar3 = *(void **)(param_1 + 0x638);
    *(undefined4 *)(param_1 + 0x620) = 0;
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
    *(undefined4 *)(param_1 + 0x63c) = 0;
    *(undefined8 *)(param_1 + 0x634) = 0;
    *(undefined8 *)(param_1 + 0x62c) = 0;
    *(undefined8 *)(param_1 + 0x624) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x5d0);
  *(undefined ***)(param_1 + 0x5c8) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_019d9958:
    *(undefined8 *)(param_1 + 0x5d0) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + param_1 + 0x5c8);
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
    goto LAB_019d9958;
  }
  *(undefined ***)(param_1 + 0x4a8) = &PTR_LAB_049dc968;
  *(undefined ***)(param_1 + 0x4c8) = &PTR_LAB_049dc9f0;
  plVar1 = *(long **)(param_1 + 0x4f0);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x4f0);
  }
  *(undefined4 *)(param_1 + 0x520) = 0;
  if (*(long *)(param_1 + 0x508) != 0) {
    if (0 < *(int *)(param_1 + 0x500)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x508) + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 0x510);
        *(undefined8 **)(param_1 + 0x510) = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x500));
    }
    pvVar3 = *(void **)(param_1 + 0x518);
    *(undefined4 *)(param_1 + 0x500) = 0;
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
    *(undefined4 *)(param_1 + 0x51c) = 0;
    *(undefined8 *)(param_1 + 0x514) = 0;
    *(undefined8 *)(param_1 + 0x50c) = 0;
    *(undefined8 *)(param_1 + 0x504) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x4b0);
  *(undefined ***)(param_1 + 0x4a8) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_019d9ab8:
    *(undefined8 *)(param_1 + 0x4b0) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + param_1 + 0x4a8);
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
    goto LAB_019d9ab8;
  }
  *(undefined ***)(param_1 + 0x388) = &PTR_LAB_049dc968;
  *(undefined ***)(param_1 + 0x3a8) = &PTR_LAB_049dc9f0;
  plVar1 = *(long **)(param_1 + 0x3d0);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x3d0);
  }
  *(undefined4 *)(param_1 + 0x400) = 0;
  if (*(long *)(param_1 + 1000) != 0) {
    if (0 < *(int *)(param_1 + 0x3e0)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 1000) + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 0x3f0);
        *(undefined8 **)(param_1 + 0x3f0) = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x3e0));
    }
    pvVar3 = *(void **)(param_1 + 0x3f8);
    *(undefined4 *)(param_1 + 0x3e0) = 0;
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
    *(undefined4 *)(param_1 + 0x3fc) = 0;
    *(undefined8 *)(param_1 + 0x3f4) = 0;
    *(undefined8 *)(param_1 + 0x3ec) = 0;
    *(undefined8 *)(param_1 + 0x3e4) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x390);
  *(undefined ***)(param_1 + 0x388) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_019d9c18:
    *(undefined8 *)(param_1 + 0x390) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + param_1 + 0x388);
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
    goto LAB_019d9c18;
  }
  *(undefined ***)(param_1 + 0x268) = &PTR_LAB_049dc968;
  *(undefined ***)(param_1 + 0x288) = &PTR_LAB_049dc9f0;
  plVar1 = *(long **)(param_1 + 0x2b0);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x2b0);
  }
  *(undefined4 *)(param_1 + 0x2e0) = 0;
  if (*(long *)(param_1 + 0x2c8) != 0) {
    if (0 < *(int *)(param_1 + 0x2c0)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x2c8) + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 0x2d0);
        *(undefined8 **)(param_1 + 0x2d0) = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x2c0));
    }
    pvVar3 = *(void **)(param_1 + 0x2d8);
    *(undefined4 *)(param_1 + 0x2c0) = 0;
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
    *(undefined4 *)(param_1 + 0x2dc) = 0;
    *(undefined8 *)(param_1 + 0x2d4) = 0;
    *(undefined8 *)(param_1 + 0x2cc) = 0;
    *(undefined8 *)(param_1 + 0x2c4) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x270);
  *(undefined ***)(param_1 + 0x268) = &PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_019d9d78:
    *(undefined8 *)(param_1 + 0x270) = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + param_1 + 0x268);
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
    goto LAB_019d9d78;
  }
  *(undefined ***)(param_1 + 0x148) = &PTR_LAB_049dc968;
  *(undefined ***)(param_1 + 0x168) = &PTR_LAB_049dc9f0;
  plVar1 = *(long **)(param_1 + 400);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 400);
  }
  *(undefined4 *)(param_1 + 0x1c0) = 0;
  if (*(long *)(param_1 + 0x1a8) != 0) {
    if (0 < *(int *)(param_1 + 0x1a0)) {
      lVar4 = 0;
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 0x1a8) + lVar4 * 8);
        (**(code **)*puVar2)(puVar2);
        lVar4 = lVar4 + 1;
        *puVar2 = *(undefined8 *)(param_1 + 0x1b0);
        *(undefined8 **)(param_1 + 0x1b0) = puVar2;
      } while (lVar4 < *(int *)(param_1 + 0x1a0));
    }
    pvVar3 = *(void **)(param_1 + 0x1b8);
    *(undefined4 *)(param_1 + 0x1a0) = 0;
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
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(undefined8 *)(param_1 + 0x1b4) = 0;
    *(undefined8 *)(param_1 + 0x1ac) = 0;
    *(undefined8 *)(param_1 + 0x1a4) = 0;
  }
  lVar4 = *(long *)(param_1 + 0x150);
  *(undefined ***)(param_1 + 0x148) = &PTR_FUN_04b64428;
  if (lVar4 != 0) {
    if (lVar4 == 1) goto LAB_019d9ee0;
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar4 + 0x84) + param_1 + 0x148);
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
  *(undefined8 *)(param_1 + 0x150) = 1;
LAB_019d9ee0:
  FUN_009931e0(param_1);
  return;
}

