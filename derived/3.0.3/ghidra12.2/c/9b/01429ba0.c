
void FUN_01429ba0(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  void *pvVar5;
  long lVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bbcb18;
  *param_1 = &PTR_FUN_0499acc0;
  param_1[0x451] = puVar1 + 0x10;
  param_1[0x455] = puVar1 + 0x98;
  plVar3 = (long *)param_1[0x45a];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x45a];
  }
  *(undefined4 *)(param_1 + 0x460) = 0;
  if (param_1[0x45d] != 0) {
    if (0 < *(int *)(param_1 + 0x45c)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x45d] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x45e];
        param_1[0x45e] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x45c));
    }
    pvVar5 = (void *)param_1[0x45f];
    *(undefined4 *)(param_1 + 0x45c) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x22fc) = 0;
    *(undefined8 *)((long)param_1 + 0x22f4) = 0;
    *(undefined8 *)((long)param_1 + 0x22ec) = 0;
    *(undefined8 *)((long)param_1 + 0x22e4) = 0;
  }
  puVar2 = PTR_DAT_04bd0d40;
  lVar6 = param_1[0x452];
  param_1[0x451] = PTR_DAT_04bd0d40 + 0x10;
  if (lVar6 == 0) {
LAB_01429d2c:
    param_1[0x452] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x2288);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_01429d2c;
  }
  param_1[0x33d] = puVar1 + 0x10;
  param_1[0x341] = puVar1 + 0x98;
  plVar3 = (long *)param_1[0x346];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x346];
  }
  *(undefined4 *)(param_1 + 0x34c) = 0;
  if (param_1[0x349] != 0) {
    if (0 < *(int *)(param_1 + 0x348)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x349] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x34a];
        param_1[0x34a] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x348));
    }
    pvVar5 = (void *)param_1[0x34b];
    *(undefined4 *)(param_1 + 0x348) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x1a5c) = 0;
    *(undefined8 *)((long)param_1 + 0x1a54) = 0;
    *(undefined8 *)((long)param_1 + 0x1a4c) = 0;
    *(undefined8 *)((long)param_1 + 0x1a44) = 0;
  }
  lVar6 = param_1[0x33e];
  param_1[0x33d] = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_01429e90:
    param_1[0x33e] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x19e8);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_01429e90;
  }
  param_1[0x229] = puVar1 + 0x10;
  param_1[0x22d] = puVar1 + 0x98;
  plVar3 = (long *)param_1[0x232];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x232];
  }
  *(undefined4 *)(param_1 + 0x238) = 0;
  if (param_1[0x235] != 0) {
    if (0 < *(int *)(param_1 + 0x234)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x235] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x236];
        param_1[0x236] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x234));
    }
    pvVar5 = (void *)param_1[0x237];
    *(undefined4 *)(param_1 + 0x234) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x11bc) = 0;
    *(undefined8 *)((long)param_1 + 0x11b4) = 0;
    *(undefined8 *)((long)param_1 + 0x11ac) = 0;
    *(undefined8 *)((long)param_1 + 0x11a4) = 0;
  }
  lVar6 = param_1[0x22a];
  param_1[0x229] = puVar2 + 0x10;
  if (lVar6 == 0) {
LAB_01429ff0:
    param_1[0x22a] = 1;
  }
  else if (lVar6 != 1) {
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x1148);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
    goto LAB_01429ff0;
  }
  param_1[0x115] = puVar1 + 0x10;
  param_1[0x119] = puVar1 + 0x98;
  plVar3 = (long *)param_1[0x11e];
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[0x11e];
  }
  *(undefined4 *)(param_1 + 0x124) = 0;
  if (param_1[0x121] != 0) {
    if (0 < *(int *)(param_1 + 0x120)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0x121] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0x122];
        param_1[0x122] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0x120));
    }
    pvVar5 = (void *)param_1[0x123];
    *(undefined4 *)(param_1 + 0x120) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x91c) = 0;
    *(undefined8 *)((long)param_1 + 0x914) = 0;
    *(undefined8 *)((long)param_1 + 0x90c) = 0;
    *(undefined8 *)((long)param_1 + 0x904) = 0;
  }
  lVar6 = param_1[0x116];
  param_1[0x115] = puVar2 + 0x10;
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_0142a150;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x8a8);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x116] = 1;
LAB_0142a150:
  param_1[1] = puVar1 + 0x10;
  plVar3 = (long *)param_1[10];
  param_1[5] = puVar1 + 0x98;
  while (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x40))();
    plVar3 = (long *)param_1[10];
  }
  *(undefined4 *)(param_1 + 0x10) = 0;
  if (param_1[0xd] != 0) {
    if (0 < *(int *)(param_1 + 0xc)) {
      lVar6 = 0;
      do {
        puVar4 = *(undefined8 **)(param_1[0xd] + lVar6 * 8);
        (**(code **)*puVar4)(puVar4);
        lVar6 = lVar6 + 1;
        *puVar4 = param_1[0xe];
        param_1[0xe] = puVar4;
      } while (lVar6 < *(int *)(param_1 + 0xc));
    }
    pvVar5 = (void *)param_1[0xf];
    *(undefined4 *)(param_1 + 0xc) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined4 *)((long)param_1 + 0x7c) = 0;
    *(undefined8 *)((long)param_1 + 0x74) = 0;
    *(undefined8 *)((long)param_1 + 0x6c) = 0;
    *(undefined8 *)((long)param_1 + 100) = 0;
  }
  lVar6 = param_1[2];
  param_1[1] = puVar2 + 0x10;
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
    plVar3 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)(param_1 + 1));
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[2] = 1;
  return;
}

