
void FUN_015d4fe0(undefined8 *param_1)

{
  int iVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  pvVar4 = (void *)param_1[0xd7];
  *param_1 = &PTR_LAB_049af710;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar4 == (void *)0x0) {
LAB_015d509c:
    iVar1 = *(int *)(param_1 + 0xcd);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  else {
    if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
      *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
      if (*(long *)((long)pvVar4 + 0x38) == 0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_015d5058;
      }
      else {
        FUN_03f45838((long)pvVar4 + 0x28);
        if (*(long *)((long)pvVar4 + 0x20) == 0) {
          *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
        }
        else {
LAB_015d5058:
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
      goto LAB_015d509c;
    }
    free(pvVar4);
    iVar1 = *(int *)(param_1 + 0xcd);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  PTR_DAT_04bb49b8 = (undefined *)plVar3;
  if (iVar1 != 0) {
    do {
      nn::os::LockMutex((MutexType *)(param_1 + 0xd2));
      if (*(int *)(param_1 + 0xcd) < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)param_1[0xcc];
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0xcd) = *(int *)(param_1 + 0xcd) + -1;
      }
      iVar1 = *(int *)((long)param_1 + 0x66c);
      nn::os::UnlockMutex((MutexType *)(param_1 + 0xd2));
      if ((plVar6 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar6 - (long)iVar1), pvVar4 != (void *)0x0)) {
        if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
          *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
          if (*(long *)((long)pvVar4 + 0x38) == 0) {
            if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_015d516c;
          }
          else {
            FUN_03f45838((long)pvVar4 + 0x28);
            if (*(long *)((long)pvVar4 + 0x20) == 0) {
              *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
            }
            else {
LAB_015d516c:
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
    } while (*(int *)(param_1 + 0xcd) != 0);
  }
  pvVar4 = (void *)param_1[0xd6];
  if (pvVar4 == (void *)0x0) {
LAB_015d524c:
    iVar1 = *(int *)(param_1 + 0xc2);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  else {
    if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
      *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
      if (*(long *)((long)pvVar4 + 0x38) == 0) {
        if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_015d5208;
      }
      else {
        FUN_03f45838((long)pvVar4 + 0x28);
        if (*(long *)((long)pvVar4 + 0x20) == 0) {
          *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
        }
        else {
LAB_015d5208:
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
      goto LAB_015d524c;
    }
    free(pvVar4);
    iVar1 = *(int *)(param_1 + 0xc2);
    plVar3 = (long *)PTR_DAT_04bb49b8;
  }
  PTR_DAT_04bb49b8 = (undefined *)plVar3;
  if (iVar1 != 0) {
    do {
      nn::os::LockMutex((MutexType *)(param_1 + 199));
      if (*(int *)(param_1 + 0xc2) < 1) {
        plVar6 = (long *)0x0;
      }
      else {
        plVar6 = (long *)param_1[0xc1];
        if (*plVar6 != 0) {
          *(long *)(*plVar6 + 8) = plVar6[1];
        }
        if ((long *)plVar6[1] != (long *)0x0) {
          *(long *)plVar6[1] = *plVar6;
        }
        *plVar6 = 0;
        plVar6[1] = 0;
        *(int *)(param_1 + 0xc2) = *(int *)(param_1 + 0xc2) + -1;
      }
      iVar1 = *(int *)((long)param_1 + 0x614);
      nn::os::UnlockMutex((MutexType *)(param_1 + 199));
      if ((plVar6 != (long *)0x0) &&
         (pvVar4 = (void *)((long)plVar6 - (long)iVar1), pvVar4 != (void *)0x0)) {
        if ((*(byte *)((long)pvVar4 + 0x18) >> 1 & 1) != 0) {
          *(byte *)((long)pvVar4 + 0x18) = *(byte *)((long)pvVar4 + 0x18) & 0xf8 | 4;
          if (*(long *)((long)pvVar4 + 0x38) == 0) {
            if (*(long *)((long)pvVar4 + 0x20) != 0) goto LAB_015d531c;
          }
          else {
            FUN_03f45838((long)pvVar4 + 0x28);
            if (*(long *)((long)pvVar4 + 0x20) == 0) {
              *(undefined4 *)((long)pvVar4 + 0x1c) = 0xe;
            }
            else {
LAB_015d531c:
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
    } while (*(int *)(param_1 + 0xc2) != 0);
  }
  FUN_038e1a84(param_1 + 0x12e);
  FUN_038fd0e0(param_1 + 0xe2);
  FUN_038e1a84(param_1 + 0xce);
  FUN_038e1a84(param_1 + 0xc3);
  FUN_038e1a84(param_1 + 0xb3);
  FUN_038e1a84(param_1 + 0x9b);
  FUN_038e1a84(param_1 + 0x90);
  FUN_038e1a84(param_1 + 0x85);
  FUN_038e1a84(param_1 + 0x7a);
  lVar5 = param_1[0x31];
  param_1[0x30] = &PTR_FUN_04b64428;
  if (lVar5 != 0) {
    if (lVar5 == 1) goto LAB_015d5444;
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar5 + 0x84) + 0x180);
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
  param_1[0x31] = 1;
LAB_015d5444:
  nn::image::JpegDecoder::~JpegDecoder((JpegDecoder *)(param_1 + 0xb));
  param_1[7] = &PTR_FUN_049b4b10;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  param_1[8] = 0;
  *param_1 = &PTR_FUN_049ba290;
  if ((long *)param_1[1] != (long *)0x0) {
    (**(code **)(*(long *)param_1[1] + 0x18))();
  }
  param_1[1] = 0;
  return;
}

