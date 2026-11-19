
void FUN_03b54570(undefined8 *param_1)

{
  long lVar1;
  long *plVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long lVar6;
  
  *param_1 = &PTR_FUN_04b768f0;
  if (*(char *)((long)param_1 + 0x1f2) != '\0') {
    if ((*(char *)((long)param_1 + 0xdc) != '\0') &&
       ((**(code **)(param_1[0xc] + 0x78))(param_1 + 0xc), *(char *)((long)param_1 + 0xdc) != '\0'))
    {
      *(undefined8 *)((long)param_1 + 0xd5) = 0;
      param_1[0x1a] = 0;
    }
    if (*(char *)(param_1 + 5) != '\0') {
      lVar5 = param_1[6];
      if (lVar5 != 0) {
        if (*(char *)((long)param_1 + 0x29) == '\0') {
          plVar2 = (long *)(lVar5 + -8);
          if (*plVar2 != 0) {
            lVar6 = *plVar2 * 0xe8;
            do {
              lVar1 = lVar5 + lVar6;
              *(undefined8 *)(lVar1 + -0x40) = 0;
              *(undefined ***)(lVar1 + -0x50) = &PTR_LAB_04b769b0;
              *(undefined8 *)(lVar1 + -0x48) = 0;
              *(undefined ***)(lVar1 + -0xe8) = &PTR___cxa_pure_virtual_04b769d0;
              *(undefined ***)(lVar1 + -0xc0) = &PTR_LAB_04b76950;
              nn::os::FinalizeMutex((MutexType *)(lVar1 + -0x98));
              lVar6 = lVar6 + -0xe8;
              *(undefined ***)(lVar1 + -0xd0) = &PTR_LAB_04b76a38;
              *(undefined4 *)(lVar1 + -200) = 0;
              *(undefined ***)(lVar1 + -0xe0) = &PTR_LAB_04b76a38;
              *(undefined4 *)(lVar1 + -0xd8) = 0;
            } while (lVar6 != 0);
          }
          if (DAT_05ae7600 == 0) {
            free(plVar2);
          }
          else {
            plVar3 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
            }
          }
        }
        param_1[6] = 0;
      }
      *(undefined1 *)(param_1 + 5) = 0;
    }
    *(undefined1 *)((long)param_1 + 0x1f2) = 0;
    *(undefined2 *)(param_1 + 0x3e) = 0xffff;
  }
  pvVar4 = (void *)param_1[0x38];
  param_1[0xc] = &PTR_LAB_04b767b0;
  param_1[0x37] = &PTR_LAB_04b76910;
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
    param_1[0x38] = 0;
  }
  param_1[0x39] = 0;
  param_1[0x21] = 0;
  param_1[0xc] = &PTR___cxa_pure_virtual_04b769d0;
  param_1[0x11] = &PTR_LAB_04b76950;
  param_1[0x1f] = &PTR_LAB_04b769b0;
  param_1[0x20] = 0;
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x16));
  param_1[0xf] = &PTR_LAB_04b76a38;
  *(undefined4 *)(param_1 + 0x10) = 0;
  param_1[0xd] = &PTR_LAB_04b76a38;
  *(undefined4 *)(param_1 + 0xe) = 0;
  if (*(char *)(param_1 + 5) != '\0') {
    lVar5 = param_1[6];
    if (lVar5 != 0) {
      if (*(char *)((long)param_1 + 0x29) == '\0') {
        plVar2 = (long *)(lVar5 + -8);
        if (*plVar2 != 0) {
          lVar6 = *plVar2 * 0xe8;
          do {
            lVar1 = lVar5 + lVar6;
            *(undefined8 *)(lVar1 + -0x40) = 0;
            *(undefined ***)(lVar1 + -0x50) = &PTR_LAB_04b769b0;
            *(undefined8 *)(lVar1 + -0x48) = 0;
            *(undefined ***)(lVar1 + -0xe8) = &PTR___cxa_pure_virtual_04b769d0;
            *(undefined ***)(lVar1 + -0xc0) = &PTR_LAB_04b76950;
            nn::os::FinalizeMutex((MutexType *)(lVar1 + -0x98));
            lVar6 = lVar6 + -0xe8;
            *(undefined ***)(lVar1 + -0xd0) = &PTR_LAB_04b76a38;
            *(undefined4 *)(lVar1 + -200) = 0;
            *(undefined ***)(lVar1 + -0xe0) = &PTR_LAB_04b76a38;
            *(undefined4 *)(lVar1 + -0xd8) = 0;
          } while (lVar6 != 0);
        }
        if (DAT_05ae7600 == 0) {
          free(plVar2);
        }
        else {
          plVar3 = (long *)FUN_038cb610(DAT_05ae7600,plVar2);
          if (plVar3 != (long *)0x0) {
            (**(code **)(*plVar3 + 0x38))(plVar3,plVar2);
          }
        }
      }
      param_1[6] = 0;
    }
    *(undefined1 *)(param_1 + 5) = 0;
  }
  *(undefined4 *)(param_1 + 7) = 0;
  pvVar4 = (void *)param_1[10];
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
    param_1[10] = 0;
  }
  param_1[3] = &PTR_LAB_04b76a38;
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[1] = &PTR_LAB_04b76a38;
  *(undefined4 *)(param_1 + 2) = 0;
  return;
}

