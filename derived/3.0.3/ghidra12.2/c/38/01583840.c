
void FUN_01583840(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  pvVar4 = (void *)param_1[0xd5];
  *param_1 = &PTR_LAB_049abee8;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar4 == (void *)0x0) {
LAB_015838fc:
    iVar1 = *(int *)(param_1 + 0xcb);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  else {
    if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
      *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
      if (*(long *)((long)pvVar4 + 0x38) == 0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_015838b8;
      }
      else {
        FUN_03f45838((long)pvVar4 + 0x28);
        if (*(long *)((long)pvVar4 + 0x20) == 0) {
          *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
        }
        else {
LAB_015838b8:
          if (DAT_05b05848 != 0) {
            FUN_03f350f4(DAT_05b05848,(long)pvVar4 + 0x10);
          }
        }
      }
    }
    FUN_03f457c4((long)pvVar4 + 0x28);
    if (*(long *)puVar2 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
      goto LAB_015838fc;
    }
    free(pvVar4);
    iVar1 = *(int *)(param_1 + 0xcb);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  PTR_DAT_04bb49b8 = (undefined *)plVar3;
  if (iVar1 != 0) {
    do {
      nn::os::LockMutex((MutexType *)(param_1 + 0xd0));
      if (*(int *)(param_1 + 0xcb) < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)param_1[0xca];
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0xcb) = *(int *)(param_1 + 0xcb) + -1;
      }
      iVar1 = *(int *)((long)param_1 + 0x65c);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd0));
      if ((plVar6 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar6 - (long)iVar1), pvVar4 != (void *)0x0)) {
        if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
          *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
          if (*(long *)((long)pvVar4 + 0x38) == 0) {
            if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_015839cc;
          }
          else {
            FUN_03f45838((long)pvVar4 + 0x28);
            if (*(long *)((long)pvVar4 + 0x20) == 0) {
              *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
            }
            else {
LAB_015839cc:
              if (*plVar3 != 0) {
                FUN_03f350f4(*plVar3,(long)pvVar4 + 0x10);
              }
            }
          }
        }
        FUN_03f457c4((long)pvVar4 + 0x28);
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar4);
          }
        }
      }
    } while (*(int *)(param_1 + 0xcb) != 0);
  }
  pvVar4 = (void *)param_1[0xd4];
  if (pvVar4 == (void *)0x0) {
LAB_01583aac:
    iVar1 = *(int *)(param_1 + 0xc0);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  else {
    if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
      *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
      if (*(long *)((long)pvVar4 + 0x38) == 0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_01583a68;
      }
      else {
        FUN_03f45838((long)pvVar4 + 0x28);
        if (*(long *)((long)pvVar4 + 0x20) == 0) {
          *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
        }
        else {
LAB_01583a68:
          if (DAT_05b05848 != 0) {
            FUN_03f350f4(DAT_05b05848,(long)pvVar4 + 0x10);
          }
        }
      }
    }
    FUN_03f457c4((long)pvVar4 + 0x28);
    if (*(long *)puVar2 != 0) {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
      goto LAB_01583aac;
    }
    free(pvVar4);
    iVar1 = *(int *)(param_1 + 0xc0);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  PTR_DAT_04bb49b8 = (undefined *)plVar3;
  if (iVar1 != 0) {
    do {
      nn::os::LockMutex((MutexType *)(param_1 + 0xc5));
      if (*(int *)(param_1 + 0xc0) < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)param_1[0xbf];
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0xc0) = *(int *)(param_1 + 0xc0) + -1;
      }
      iVar1 = *(int *)((long)param_1 + 0x604);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xc5));
      if ((plVar6 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar6 - (long)iVar1), pvVar4 != (void *)0x0)) {
        if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
          *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
          if (*(long *)((long)pvVar4 + 0x38) == 0) {
            if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_01583b7c;
          }
          else {
            FUN_03f45838((long)pvVar4 + 0x28);
            if (*(long *)((long)pvVar4 + 0x20) == 0) {
              *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
            }
            else {
LAB_01583b7c:
              if (*plVar3 != 0) {
                FUN_03f350f4(*plVar3,(long)pvVar4 + 0x10);
              }
            }
          }
        }
        FUN_03f457c4((long)pvVar4 + 0x28);
        if (*(long *)puVar2 == 0) {
          free(pvVar4);
        }
        else {
          plVar6 = (long *)FUN_038cb610(*(long *)puVar2,pvVar4);
          if (plVar6 != (long *)0x0) {
            (**(code **)(*plVar6 + 0x38))(plVar6,pvVar4);
          }
        }
      }
    } while (*(int *)(param_1 + 0xc0) != 0);
  }
  FUN_038fd0e0(param_1 + 0xe0);
  FUN_038e1a84(param_1 + 0xcc);
  FUN_038e1a84(param_1 + 0xc1);
  FUN_038e1a84(param_1 + 0xb1);
  FUN_038e1a84(param_1 + 0x99);
  FUN_038e1a84(param_1 + 0x8e);
  FUN_038e1a84(param_1 + 0x83);
  FUN_038e1a84(param_1 + 0x78);
  lVar5 = param_1[0x2e];
  param_1[0x2d] = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_01583c9c;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x168);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x2e] = 1;
LAB_01583c9c:
  nn::image::JpegDecoder::~JpegDecoder((JpegDecoder *)(param_1 + 0x22));
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

