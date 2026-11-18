
/* WARNING: Removing unreachable block (ram,0x032fb1a0) */
/* WARNING: Removing unreachable block (ram,0x032faeb4) */
/* WARNING: Removing unreachable block (ram,0x032fae64) */
/* WARNING: Removing unreachable block (ram,0x032fae7c) */
/* WARNING: Removing unreachable block (ram,0x032faecc) */
/* WARNING: Removing unreachable block (ram,0x032fb1b8) */

void FUN_032fae2c(long *param_1)

{
  long *plVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  long lVar6;
  
  if (param_1[0x14e] != 0) {
    if (param_1[2] != 0) {
      (**(code **)(*(long *)param_1[2] + 0x38))();
    }
    param_1[0x14e] = 0;
    *(undefined4 *)((long)param_1 + 0xbe4) = 0;
  }
  if (param_1[0x14d] != 0) {
    if (param_1[2] != 0) {
      (**(code **)(*(long *)param_1[2] + 0x38))();
    }
    param_1[0x14d] = 0;
  }
  if ((int)param_1[7] == 1) {
    pvVar5 = (void *)param_1[0x180];
    if (pvVar5 == (void *)0x0) goto LAB_032fb000;
    param_1[0x180] = 0;
LAB_032fafd4:
    if (DAT_05ae7600 != 0) {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
      goto LAB_032fb000;
    }
    free(pvVar5);
    lVar4 = param_1[4];
  }
  else {
    if ((int)param_1[7] == 0) {
      if (param_1[5] != 0) {
        FUN_03356734();
        pvVar5 = (void *)param_1[5];
        param_1[5] = 0;
        if (pvVar5 != (void *)0x0) {
          FUN_03354a94(pvVar5);
          if (DAT_05ae7600 == 0) {
            free(pvVar5);
          }
          else {
            plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
            }
          }
        }
      }
      if (param_1[0x17f] != 0) {
        FUN_03346b44();
        pvVar5 = (void *)param_1[0x17f];
        param_1[0x17f] = 0;
        if (pvVar5 != (void *)0x0) {
          FUN_03345600(pvVar5);
          if (DAT_05ae7600 == 0) {
            free(pvVar5);
          }
          else {
            plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
            if (plVar3 != (long *)0x0) {
              (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
            }
          }
        }
      }
      if (param_1[6] != 0) {
        FUN_0334fea8();
        pvVar5 = (void *)param_1[6];
        param_1[6] = 0;
        if (pvVar5 != (void *)0x0) {
          FUN_0334c910(pvVar5);
          goto LAB_032fafd4;
        }
      }
    }
LAB_032fb000:
    lVar4 = param_1[4];
  }
  if (lVar4 != 0) {
    FUN_032fe330();
    pvVar5 = (void *)param_1[4];
    param_1[4] = 0;
    if (pvVar5 != (void *)0x0) {
      FUN_032fd2c8(pvVar5);
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
  }
  puVar2 = DAT_0572c600;
  if (DAT_0572c600 == (undefined8 *)0x0) goto LAB_032fb144;
  plVar3 = DAT_0572c600 + 1;
  *plVar3 = (long)(PTR_DAT_04bb24a8 + 0x10);
  FUN_038bbe20(plVar3);
  lVar4 = puVar2[2];
  *plVar3 = (long)&PTR_FUN_04b64428;
  if (lVar4 == 0) {
LAB_032fb118:
    puVar2[2] = 1;
  }
  else if (lVar4 != 1) {
    if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
      lVar6 = 0;
    }
    else {
      lVar6 = lVar4 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
    }
    plVar3 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)plVar3);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + -1;
    if (lVar6 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
    }
    goto LAB_032fb118;
  }
  *puVar2 = 0;
  if (DAT_057312e8 != (long *)0x0) {
    (**(code **)(*DAT_057312e8 + 0x38))(DAT_057312e8,puVar2);
  }
  DAT_0572c600 = (undefined8 *)0x0;
LAB_032fb144:
  if ((DAT_0572b8d8 != (undefined8 *)0x0) &&
     (FUN_032a95b0(), puVar2 = DAT_0572b8d8, DAT_0572b8d8 != (undefined8 *)0x0)) {
    (**(code **)*DAT_0572b8d8)(DAT_0572b8d8);
    if (DAT_057312e0 != (long *)0x0) {
      (**(code **)(*DAT_057312e0 + 0x38))(DAT_057312e0,puVar2);
    }
    DAT_0572b8d8 = (undefined8 *)0x0;
  }
  if (*param_1 != 0) {
    (**(code **)(*(long *)*param_1 + 0x38))((long *)*param_1,param_1[0x8f]);
  }
  if ((DAT_057312f0 != 0) && (FUN_03344eb0(), DAT_057312f0 != 0)) {
    if (DAT_057312d8 != (long *)0x0) {
      (**(code **)(*DAT_057312d8 + 0x38))();
    }
    DAT_057312f0 = 0;
  }
  plVar3 = (long *)param_1[2];
  plVar1 = (long *)param_1[3];
  param_1[2] = 0;
  param_1[3] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((plVar1 != (long *)0x0) && (plVar1 != plVar3)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar3 = (long *)*param_1;
  plVar1 = (long *)param_1[1];
  *param_1 = 0;
  param_1[1] = 0;
  if (plVar3 != (long *)0x0) {
    (**(code **)(*plVar3 + 0x20))(plVar3);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar3)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032fb284. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

