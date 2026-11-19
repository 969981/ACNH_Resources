
void FUN_03a03610(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  long lVar5;
  long *plVar6;
  void *pvVar7;
  long lVar8;
  long lVar9;
  
  *param_1 = &PTR_LAB_04b6be58;
  param_1[0x1d] = &PTR_LAB_04b6c120;
  puVar2 = PTR_DAT_04bb2698;
  lVar5 = param_1[0x22];
  if (lVar5 != 0) {
    plVar6 = (long *)(lVar5 + -8);
    if (*plVar6 != 0) {
      lVar8 = *plVar6 * 0x430;
      do {
        FUN_03a4f0b0(lVar5 + -0x430 + lVar8);
        lVar8 = lVar8 + -0x430;
      } while (lVar8 != 0);
    }
    if (*(long *)puVar2 == 0) {
      free(plVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar2,plVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,plVar6);
      }
    }
    param_1[0x22] = 0;
    *(undefined4 *)(param_1 + 0x21) = 0;
  }
  if (param_1[0xad7] != 0) {
    pvVar7 = (void *)(param_1[0xad7] + -8);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0xad7] = 0;
    *(undefined4 *)(param_1 + 0xad6) = 0;
  }
  FUN_039728e8(param_1 + 0xabd);
  pvVar7 = (void *)param_1[0x25];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0x24] = 0;
    param_1[0x25] = 0;
  }
  lVar5 = DAT_05ae9b00 + 0x158;
  if (*(long *)(DAT_05ae9b00 + 0x160) != lVar5) {
    lVar9 = (long)*(int *)(DAT_05ae9b00 + 0x16c);
    lVar8 = *(long *)(DAT_05ae9b00 + 0x160) - lVar9;
    do {
      if (*(undefined8 **)(lVar8 + 0x70) == param_1) {
        FUN_03a03df0(param_1,lVar8);
        *(undefined8 *)(lVar8 + 0x70) = 0;
      }
      lVar8 = *(long *)(lVar8 + lVar9 + 8) - lVar9;
    } while (lVar8 != lVar5 - lVar9);
  }
  FUN_039ccd60(DAT_05ae9b00,param_1);
  if ((long *)param_1[0x9dd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9dd] + 8))();
    param_1[0x9dd] = 0;
  }
  if ((long *)param_1[0x9de] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9de] + 8))();
    param_1[0x9de] = 0;
  }
  pvVar7 = (void *)param_1[0xab9];
  if (pvVar7 != (void *)0x0) {
    FUN_03a0dde0(pvVar7);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0xab9] = 0;
  }
  if ((long *)param_1[0xaba] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xaba] + 8))();
    param_1[0xaba] = 0;
  }
  if ((long *)param_1[0x9df] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9df] + 8))();
  }
  if ((long *)param_1[0x9e0] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x9e0] + 0x18))();
    param_1[0x9e0] = 0;
  }
  puVar3 = PTR_DAT_04bd0d40;
  pvVar7 = (void *)param_1[0xab8];
  if (pvVar7 != (void *)0x0) {
    FUN_03afbdcc((long)pvVar7 + 0x38a8);
    FUN_039de300((long)pvVar7 + 0xbf8);
    FUN_0391f4c0((long)pvVar7 + 0x770);
    lVar5 = *(long *)((long)pvVar7 + 0x538);
    *(undefined **)((long)pvVar7 + 0x530) = puVar3 + 0x10;
    if (lVar5 == 0) {
LAB_03a03920:
      *(undefined8 *)((long)pvVar7 + 0x538) = 1;
    }
    else if (lVar5 != 1) {
      if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar5 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
      }
      plVar6 = (long *)((long)pvVar7 + (long)*(int *)(lVar5 + 0x84) + 0x530);
      if (*plVar6 != 0) {
        *(long *)(*plVar6 + 8) = plVar6[1];
      }
      if ((long *)plVar6[1] != (long *)0x0) {
        *(long *)plVar6[1] = *plVar6;
      }
      *plVar6 = 0;
      plVar6[1] = 0;
      *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
      goto LAB_03a03920;
    }
    puVar1 = PTR_DAT_04bbd508 + 0x10;
    *(undefined **)((long)pvVar7 + 1000) = puVar1;
    FUN_038fd0e0((long)pvVar7 + 0x440);
    *(undefined **)((long)pvVar7 + 0x2a0) = PTR_DAT_04bbd500 + 0x10;
    FUN_038fd0e0((long)pvVar7 + 0x2f8);
    *(undefined **)((long)pvVar7 + 0x1c0) = puVar1;
    FUN_038fd0e0((long)pvVar7 + 0x218);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0xab8] = 0;
  }
  pvVar7 = (void *)param_1[0xabb];
  if (pvVar7 != (void *)0x0) {
    FUN_03af0850(pvVar7);
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar6 != (long *)0x0) {
        (**(code **)(*plVar6 + 0x38))(plVar6,pvVar7);
      }
    }
    param_1[0xabb] = 0;
  }
  FUN_038e1a84(param_1 + 0xae1);
  FUN_038e1a84(param_1 + 0xad9);
  param_1[0xabd] = &PTR_LAB_04903d30;
  FUN_038e1c80(param_1 + 0xac2);
  FUN_039e8290(param_1 + 0xa72);
  FUN_0391f4c0(param_1 + 0x9e1);
  FUN_03a0a990(param_1 + 0x9aa);
  FUN_03a7c330(param_1 + 0x8d6);
  FUN_03a36e90(param_1 + 0x63b);
  FUN_03a61830(param_1 + 0x5dd);
  FUN_03a99bcc(param_1 + 0x580);
  FUN_03aac8f0(param_1 + 0x2bf);
  FUN_03a33150(param_1 + 0x1d8);
  FUN_03a532b0(param_1 + 0x26);
  lVar5 = param_1[0x1e];
  param_1[0x1d] = puVar3 + 0x10;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_03a03b00;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar8 = 0;
    }
    else {
      lVar8 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar6 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)(param_1 + 0x1d));
    if (*plVar6 != 0) {
      *(long *)(*plVar6 + 8) = plVar6[1];
    }
    if ((long *)plVar6[1] != (long *)0x0) {
      *(long *)plVar6[1] = *plVar6;
    }
    *plVar6 = 0;
    plVar6[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar8 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
    }
  }
  param_1[0x1e] = 1;
LAB_03a03b00:
  FUN_039e9280(param_1);
  return;
}

