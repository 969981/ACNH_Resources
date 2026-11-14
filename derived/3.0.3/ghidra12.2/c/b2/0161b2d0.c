
void FUN_0161b2d0(undefined8 *param_1)

{
  MutexType *pMVar1;
  byte bVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  void *pvVar8;
  undefined **local_60;
  long *plStack_58;
  undefined1 *local_50;
  undefined8 uStack_48;
  
  *param_1 = &PTR_FUN_049b3e28;
  puVar3 = PTR_DAT_04bb2698;
  lVar5 = param_1[3];
  if (lVar5 != 0) {
    plVar7 = (long *)(lVar5 + -8);
    if (*plVar7 != 0) {
      lVar6 = *plVar7 * 0x78;
      do {
        FUN_038e1a84(lVar5 + -0x40 + lVar6);
        lVar6 = lVar6 + -0x78;
      } while (lVar6 != 0);
    }
    if (*(long *)puVar3 == 0) {
      free(plVar7);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar3,plVar7);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar7);
      }
    }
    param_1[3] = 0;
    *(undefined4 *)(param_1 + 2) = 0;
  }
  pvVar8 = (void *)param_1[8];
  if (pvVar8 == (void *)0x0) goto LAB_0161b3fc;
  plStack_58 = param_1 + 6;
  local_50 = &LAB_0161cfa0;
  uStack_48 = 0;
  local_60 = &PTR_LAB_049b3e98;
  if (*plStack_58 == 0) {
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[6] = 0;
    lVar5 = *(long *)puVar3;
    if (lVar5 != 0) goto LAB_0161b3b8;
LAB_0161b3ec:
    free(pvVar8);
  }
  else {
    FUN_0161cfb0(*plStack_58,&local_60);
    pvVar8 = (void *)param_1[8];
    *(undefined4 *)(param_1 + 9) = 0;
    param_1[6] = 0;
    if (pvVar8 != (void *)0x0) {
      lVar5 = *(long *)puVar3;
      if (lVar5 == 0) goto LAB_0161b3ec;
LAB_0161b3b8:
      plVar7 = (long *)FUN_038cb610(lVar5,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
  }
  *(undefined4 *)((long)param_1 + 0x4c) = 0;
  param_1[7] = 0;
  param_1[8] = 0;
LAB_0161b3fc:
  if (param_1[5] != 0) {
    pvVar8 = (void *)(param_1[5] + -8);
    if (*(long *)puVar3 == 0) {
      free(pvVar8);
    }
    else {
      plVar7 = (long *)FUN_038cb610(*(long *)puVar3,pvVar8);
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x38))(plVar7,pvVar8);
      }
    }
    param_1[5] = 0;
    *(undefined4 *)(param_1 + 4) = 0;
  }
  lVar5 = param_1[0x31];
  if ((lVar5 != 0) && (*(char *)(param_1 + 1) != '\0')) {
    bVar2 = *(byte *)(lVar5 + 0x281);
    *(undefined8 *)(lVar5 + 0x98) = 0;
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 2) != 0) {
        bVar2 = bVar2 & 0xfd;
      }
      *(byte *)(lVar5 + 0x281) = bVar2 | 1;
    }
    lVar6 = DAT_05ae9b00;
    pMVar1 = (MutexType *)(DAT_05ae9b00 + 0x138);
    nn::os::LockMutex(pMVar1);
    plVar4 = *(long **)(lVar6 + 0x1a0);
    lVar6 = *plVar4;
    plVar7 = (long *)(*(int *)((long)plVar4 + 0x14) + lVar5);
    *plVar4 = (long)plVar7;
    *plVar7 = lVar6;
    plVar7[1] = (long)plVar4;
    if (lVar6 != 0) {
      *(long **)(lVar6 + 8) = plVar7;
    }
    *(int *)(plVar4 + 2) = (int)plVar4[2] + 1;
    nn::os::UnlockMutex(pMVar1);
    param_1[0x31] = 0;
  }
  param_1[0x15] = &PTR_LAB_04b65ee0;
  FUN_0390d560(param_1 + 0x15);
  FUN_038e1a84(param_1 + 0xd);
  return;
}

