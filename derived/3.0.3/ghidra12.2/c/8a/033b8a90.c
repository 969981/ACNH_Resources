
void FUN_033b8a90(long param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  FUN_03ebae78(param_1 + 8);
  *(undefined ***)(param_1 + 2000) = &PTR_LAB_04b24d80;
  *(undefined ***)(param_1 + 0x990) = &PTR_LAB_04b25148;
  *(undefined ***)(param_1 + 0x9b0) = &PTR_LAB_04b251d0;
  plVar1 = *(long **)(param_1 + 0x9d8);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x9d8);
  }
  *(undefined4 *)(param_1 + 0xa08) = 0;
  if (*(long *)(param_1 + 0x9f0) != 0) {
    if (0 < *(int *)(param_1 + 0x9e8)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x9f0) + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = *(undefined8 *)(param_1 + 0x9f8);
        *(undefined8 **)(param_1 + 0x9f8) = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x9e8));
    }
    pvVar4 = *(void **)(param_1 + 0xa00);
    *(undefined4 *)(param_1 + 0x9e8) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0xa04) = 0;
    *(undefined8 *)(param_1 + 0x9fc) = 0;
    *(undefined8 *)(param_1 + 0x9f4) = 0;
    *(undefined8 *)(param_1 + 0x9ec) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x998);
  *(undefined ***)(param_1 + 0x990) = &PTR_FUN_04b64428;
  if (lVar5 == 0) {
LAB_033b8c20:
    *(undefined8 *)(param_1 + 0x998) = 1;
  }
  else if (lVar5 != 1) {
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + param_1 + 0x990);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
    goto LAB_033b8c20;
  }
  *(undefined ***)(param_1 + 0x330) = &PTR_LAB_04b26190;
  FUN_033c6474(param_1 + 0x348);
  *(undefined ***)(param_1 + 0xf0) = &PTR_LAB_04b24478;
  *(undefined ***)(param_1 + 0x2b0) = &PTR_LAB_04b24840;
  *(undefined ***)(param_1 + 0x2d0) = &PTR_LAB_04b248c8;
  plVar1 = *(long **)(param_1 + 0x2f8);
  while (plVar1 != (long *)0x0) {
    (**(code **)(*plVar1 + 0x40))();
    plVar1 = *(long **)(param_1 + 0x2f8);
  }
  *(undefined4 *)(param_1 + 0x328) = 0;
  if (*(long *)(param_1 + 0x310) != 0) {
    if (0 < *(int *)(param_1 + 0x308)) {
      lVar5 = 0;
      do {
        puVar3 = *(undefined8 **)(*(long *)(param_1 + 0x310) + lVar5 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar5 = lVar5 + 1;
        *puVar3 = *(undefined8 *)(param_1 + 0x318);
        *(undefined8 **)(param_1 + 0x318) = puVar3;
      } while (lVar5 < *(int *)(param_1 + 0x308));
    }
    pvVar4 = *(void **)(param_1 + 800);
    *(undefined4 *)(param_1 + 0x308) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0x324) = 0;
    *(undefined8 *)(param_1 + 0x31c) = 0;
    *(undefined8 *)(param_1 + 0x314) = 0;
    *(undefined8 *)(param_1 + 0x30c) = 0;
  }
  lVar5 = *(long *)(param_1 + 0x2b8);
  *(undefined ***)(param_1 + 0x2b0) = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_033b8da4;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + param_1 + 0x2b0);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
  }
  *(undefined8 *)(param_1 + 0x2b8) = 1;
LAB_033b8da4:
  *(undefined ***)(param_1 + 0xb8) = &PTR_LAB_04b5eb40;
  if (*(long *)(param_1 + 200) != 0) {
    if (0 < *(int *)(param_1 + 0xc0)) {
      lVar5 = 0;
      puVar3 = *(undefined8 **)(param_1 + 0xd0);
      do {
        puVar2 = *(undefined8 **)(*(long *)(param_1 + 200) + lVar5 * 8);
        lVar5 = lVar5 + 1;
        *puVar2 = puVar3;
        *(undefined8 **)(param_1 + 0xd0) = puVar2;
        puVar3 = puVar2;
      } while (lVar5 < *(int *)(param_1 + 0xc0));
    }
    pvVar4 = *(void **)(param_1 + 0xd8);
    *(undefined4 *)(param_1 + 0xc0) = 0;
    if (pvVar4 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar4);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar4);
        }
      }
    }
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined8 *)(param_1 + 0xd4) = 0;
    *(undefined8 *)(param_1 + 0xcc) = 0;
    *(undefined8 *)(param_1 + 0xc4) = 0;
  }
  return;
}

