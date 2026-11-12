
void FUN_009a7ed0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  long lVar8;
  
  puVar1 = PTR_DAT_04bb60c8;
  *param_1 = &PTR_FUN_0492c088;
  puVar6 = param_1 + 0x24bb7;
  *puVar6 = &PTR_LAB_0492c2d0;
  param_1[0x24bdd] = puVar1 + 0x10;
  param_1[0x24bbb] = &PTR_LAB_0492c358;
  plVar2 = (long *)param_1[0x24bc0];
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x24bc0];
  }
  *(undefined4 *)(param_1 + 0x24bc6) = 0;
  puVar5 = param_1 + 0x1d65a;
  if (param_1[0x24bc3] != 0) {
    if (0 < *(int *)(param_1 + 0x24bc2)) {
      lVar7 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x24bc3] + lVar7 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar7 = lVar7 + 1;
        *puVar3 = param_1[0x24bc4];
        param_1[0x24bc4] = puVar3;
      } while (lVar7 < *(int *)(param_1 + 0x24bc2));
    }
    pvVar4 = (void *)param_1[0x24bc5];
    *(undefined4 *)(param_1 + 0x24bc2) = 0;
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
    *(undefined4 *)((long)param_1 + 0x125e2c) = 0;
    *(undefined8 *)((long)param_1 + 0x125e24) = 0;
    *(undefined8 *)((long)param_1 + 0x125e1c) = 0;
    *(undefined8 *)((long)param_1 + 0x125e14) = 0;
  }
  lVar7 = param_1[0x24bb8];
  *puVar6 = &PTR_FUN_04b64428;
  if (lVar7 == 0) {
LAB_009a8090:
    param_1[0x24bb8] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar6);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_009a8090;
  }
  plVar2 = (long *)param_1[0x1d663];
  *puVar5 = &PTR_LAB_0492c2d0;
  param_1[0x1d680] = puVar1 + 0x10;
  param_1[0x1d65e] = &PTR_LAB_0492c358;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x1d663];
  }
  *(undefined4 *)(param_1 + 0x1d669) = 0;
  puVar6 = param_1 + 0x160fd;
  if (param_1[0x1d666] != 0) {
    if (0 < *(int *)(param_1 + 0x1d665)) {
      lVar7 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x1d666] + lVar7 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar7 = lVar7 + 1;
        *puVar3 = param_1[0x1d667];
        param_1[0x1d667] = puVar3;
      } while (lVar7 < *(int *)(param_1 + 0x1d665));
    }
    pvVar4 = (void *)param_1[0x1d668];
    *(undefined4 *)(param_1 + 0x1d665) = 0;
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
    *(undefined4 *)((long)param_1 + 0xeb344) = 0;
    *(undefined8 *)((long)param_1 + 0xeb33c) = 0;
    *(undefined8 *)((long)param_1 + 0xeb334) = 0;
    *(undefined8 *)((long)param_1 + 0xeb32c) = 0;
  }
  lVar7 = param_1[0x1d65b];
  *puVar5 = &PTR_FUN_04b64428;
  if (lVar7 == 0) {
LAB_009a81fc:
    param_1[0x1d65b] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar5);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_009a81fc;
  }
  plVar2 = (long *)param_1[0x16106];
  *puVar6 = &PTR_LAB_0492c2d0;
  param_1[0x16123] = puVar1 + 0x10;
  param_1[0x16101] = &PTR_LAB_0492c358;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x16106];
  }
  *(undefined4 *)(param_1 + 0x1610c) = 0;
  puVar5 = param_1 + 0xeba0;
  if (param_1[0x16109] != 0) {
    if (0 < *(int *)(param_1 + 0x16108)) {
      lVar7 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0x16109] + lVar7 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar7 = lVar7 + 1;
        *puVar3 = param_1[0x1610a];
        param_1[0x1610a] = puVar3;
      } while (lVar7 < *(int *)(param_1 + 0x16108));
    }
    pvVar4 = (void *)param_1[0x1610b];
    *(undefined4 *)(param_1 + 0x16108) = 0;
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
    *(undefined4 *)((long)param_1 + 0xb085c) = 0;
    *(undefined8 *)((long)param_1 + 0xb0854) = 0;
    *(undefined8 *)((long)param_1 + 0xb084c) = 0;
    *(undefined8 *)((long)param_1 + 0xb0844) = 0;
  }
  lVar7 = param_1[0x160fe];
  *puVar6 = &PTR_FUN_04b64428;
  if (lVar7 == 0) {
LAB_009a8368:
    param_1[0x160fe] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar6);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_009a8368;
  }
  plVar2 = (long *)param_1[0xeba9];
  *puVar5 = &PTR_LAB_0492c2d0;
  param_1[0xebc6] = puVar1 + 0x10;
  param_1[0xeba4] = &PTR_LAB_0492c358;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0xeba9];
  }
  *(undefined4 *)(param_1 + 0xebaf) = 0;
  puVar6 = param_1 + 0x7643;
  if (param_1[0xebac] != 0) {
    if (0 < *(int *)(param_1 + 0xebab)) {
      lVar7 = 0;
      do {
        puVar3 = *(undefined8 **)(param_1[0xebac] + lVar7 * 8);
        (**(code **)*puVar3)(puVar3);
        lVar7 = lVar7 + 1;
        *puVar3 = param_1[0xebad];
        param_1[0xebad] = puVar3;
      } while (lVar7 < *(int *)(param_1 + 0xebab));
    }
    pvVar4 = (void *)param_1[0xebae];
    *(undefined4 *)(param_1 + 0xebab) = 0;
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
    *(undefined4 *)((long)param_1 + 0x75d74) = 0;
    *(undefined8 *)((long)param_1 + 0x75d6c) = 0;
    *(undefined8 *)((long)param_1 + 0x75d64) = 0;
    *(undefined8 *)((long)param_1 + 0x75d5c) = 0;
  }
  lVar7 = param_1[0xeba1];
  *puVar5 = &PTR_FUN_04b64428;
  if (lVar7 == 0) {
LAB_009a84d8:
    param_1[0xeba1] = 1;
  }
  else if (lVar7 != 1) {
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar5);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
    goto LAB_009a84d8;
  }
  plVar2 = (long *)param_1[0x764c];
  *puVar6 = &PTR_LAB_0492c2d0;
  param_1[0x7669] = puVar1 + 0x10;
  param_1[0x7647] = &PTR_LAB_0492c358;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0x764c];
  }
  *(undefined4 *)(param_1 + 0x7652) = 0;
  if (param_1[0x764f] != 0) {
    if (0 < *(int *)(param_1 + 0x764e)) {
      lVar7 = 0;
      do {
        puVar5 = *(undefined8 **)(param_1[0x764f] + lVar7 * 8);
        (**(code **)*puVar5)(puVar5);
        lVar7 = lVar7 + 1;
        *puVar5 = param_1[0x7650];
        param_1[0x7650] = puVar5;
      } while (lVar7 < *(int *)(param_1 + 0x764e));
    }
    pvVar4 = (void *)param_1[0x7651];
    *(undefined4 *)(param_1 + 0x764e) = 0;
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
    *(undefined4 *)((long)param_1 + 0x3b28c) = 0;
    *(undefined8 *)((long)param_1 + 0x3b284) = 0;
    *(undefined8 *)((long)param_1 + 0x3b27c) = 0;
    *(undefined8 *)((long)param_1 + 0x3b274) = 0;
  }
  lVar7 = param_1[0x7644];
  *puVar6 = &PTR_FUN_04b64428;
  if (lVar7 != 0) {
    if (lVar7 == 1) goto LAB_009a8640;
    if ((*(uint *)(lVar7 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar7 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar7 + 0xb0));
    }
    plVar2 = (long *)((long)*(int *)(lVar7 + 0x84) + (long)puVar6);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x7644] = 1;
LAB_009a8640:
  plVar2 = (long *)param_1[0xef];
  param_1[0xe6] = &PTR_LAB_0492c2d0;
  param_1[0x10c] = puVar1 + 0x10;
  param_1[0xea] = &PTR_LAB_0492c358;
  while (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x40))();
    plVar2 = (long *)param_1[0xef];
  }
  *(undefined4 *)(param_1 + 0xf5) = 0;
  if (param_1[0xf2] != 0) {
    if (0 < *(int *)(param_1 + 0xf1)) {
      lVar7 = 0;
      do {
        puVar6 = *(undefined8 **)(param_1[0xf2] + lVar7 * 8);
        (**(code **)*puVar6)(puVar6);
        lVar7 = lVar7 + 1;
        *puVar6 = param_1[0xf3];
        param_1[0xf3] = puVar6;
      } while (lVar7 < *(int *)(param_1 + 0xf1));
    }
    pvVar4 = (void *)param_1[0xf4];
    *(undefined4 *)(param_1 + 0xf1) = 0;
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
    *(undefined4 *)((long)param_1 + 0x7a4) = 0;
    *(undefined8 *)((long)param_1 + 0x79c) = 0;
    *(undefined8 *)((long)param_1 + 0x794) = 0;
    *(undefined8 *)((long)param_1 + 0x78c) = 0;
  }
  lVar7 = param_1[0xe7];
  param_1[0xe6] = &PTR_FUN_04b64428;
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
    plVar2 = (long *)((long)param_1 + (long)*(int *)(lVar7 + 0x84) + 0x730);
    if (*plVar2 != 0) {
      *(long *)(*plVar2 + 8) = plVar2[1];
    }
    if ((long *)plVar2[1] != (long *)0x0) {
      *(long *)plVar2[1] = *plVar2;
    }
    *plVar2 = 0;
    plVar2[1] = 0;
    *(int *)(lVar7 + 0x80) = *(int *)(lVar7 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0xe7] = 1;
  return;
}

