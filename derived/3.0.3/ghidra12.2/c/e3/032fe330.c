
void FUN_032fe330(long param_1)

{
  long *plVar1;
  long lVar2;
  void *pvVar3;
  long *plVar4;
  
  if (*(long *)(param_1 + 0x1ae0) != 0) {
    FUN_032e28a0(*(long *)(param_1 + 0x1ae0),param_1 + 0x1a70);
  }
  *(undefined1 *)(param_1 + 0x1aa8) = 1;
  if (*(int *)(param_1 + 0x1aa4) - 1U < 2) {
    lVar2 = *(long *)PTR_DAT_04bb29d0;
    do {
      nn::os::ConvertToTimeSpan(lVar2 / 1000);
      nn::os::SleepThread();
    } while (*(int *)(param_1 + 0x1aa4) - 1U < 2);
  }
  FUN_0335d080(*(undefined8 *)(param_1 + 0x520));
  pvVar3 = *(void **)(param_1 + 0x520);
  *(undefined8 *)(param_1 + 0x520) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0335a294(pvVar3);
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
  FUN_03306434(*(undefined8 *)(param_1 + 0x518));
  pvVar3 = *(void **)(param_1 + 0x518);
  *(undefined8 *)(param_1 + 0x518) = 0;
  if (pvVar3 == (void *)0x0) {
LAB_032fe450:
    lVar2 = *(long *)(param_1 + 0x510);
  }
  else {
    FUN_03305008(pvVar3);
    if (DAT_05ae7600 != 0) {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
      goto LAB_032fe450;
    }
    free(pvVar3);
    lVar2 = *(long *)(param_1 + 0x510);
  }
  if (lVar2 != 0) {
    FUN_0331fe48();
    pvVar3 = *(void **)(param_1 + 0x510);
    *(undefined8 *)(param_1 + 0x510) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_03313980(pvVar3);
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
  }
  if (*(long *)(param_1 + 0x508) == 0) {
LAB_032fe4f8:
    lVar2 = *(long *)(param_1 + 0x500);
  }
  else {
    FUN_0331fe48();
    pvVar3 = *(void **)(param_1 + 0x508);
    *(undefined8 *)(param_1 + 0x508) = 0;
    if (pvVar3 == (void *)0x0) goto LAB_032fe4f8;
    FUN_033270a0(pvVar3);
    if (DAT_05ae7600 != 0) {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
      goto LAB_032fe4f8;
    }
    free(pvVar3);
    lVar2 = *(long *)(param_1 + 0x500);
  }
  if (lVar2 != 0) {
    FUN_0331fe48();
    pvVar3 = *(void **)(param_1 + 0x500);
    *(undefined8 *)(param_1 + 0x500) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_0333abc0(pvVar3);
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
  }
  if (*(long *)(param_1 + 0x4f0) == 0) {
LAB_032fe5a0:
    lVar2 = *(long *)(param_1 + 0x4f8);
  }
  else {
    FUN_0331fe48();
    pvVar3 = *(void **)(param_1 + 0x4f0);
    *(undefined8 *)(param_1 + 0x4f0) = 0;
    if (pvVar3 == (void *)0x0) goto LAB_032fe5a0;
    FUN_033081e0(pvVar3);
    if (DAT_05ae7600 != 0) {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
      goto LAB_032fe5a0;
    }
    free(pvVar3);
    lVar2 = *(long *)(param_1 + 0x4f8);
  }
  if (lVar2 != 0) {
    FUN_0331fe48();
    pvVar3 = *(void **)(param_1 + 0x4f8);
    *(undefined8 *)(param_1 + 0x4f8) = 0;
    if (pvVar3 != (void *)0x0) {
      FUN_0332d770(pvVar3);
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
  }
  FUN_033268e0(*(undefined8 *)(param_1 + 0x528));
  pvVar3 = *(void **)(param_1 + 0x528);
  *(undefined8 *)(param_1 + 0x528) = 0;
  if (pvVar3 != (void *)0x0) {
    FUN_0332616c(pvVar3);
    if (DAT_05ae7600 == 0) {
      free(pvVar3);
      pvVar3 = *(void **)(param_1 + 0x17f8);
      lVar2 = DAT_05ae7600;
      goto joined_r0x032fe648;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
    if (plVar1 != (long *)0x0) {
      (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
    }
  }
  pvVar3 = *(void **)(param_1 + 0x17f8);
  lVar2 = DAT_05ae7600;
joined_r0x032fe648:
  DAT_05ae7600 = lVar2;
  if (pvVar3 != (void *)0x0) {
    *(undefined8 *)(param_1 + 0x17f8) = 0;
    if (lVar2 == 0) {
      free(pvVar3);
    }
    else {
      plVar1 = (long *)FUN_038cb610(lVar2,pvVar3);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,pvVar3);
      }
    }
  }
  FUN_032ed4b4(param_1 + 0x1800);
  FUN_032ae1e0(*(undefined8 *)(param_1 + 0x17f0));
  FUN_03292080(*(undefined8 *)(param_1 + 0x17e8));
  plVar4 = *(long **)(param_1 + 0x4e0);
  *(undefined8 *)(param_1 + 0x17e8) = 0;
  *(undefined8 *)(param_1 + 0x4e0) = 0;
  plVar1 = *(long **)(param_1 + 0x4e8);
  *(undefined8 *)(param_1 + 0x4e8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((plVar1 != (long *)0x0) && (plVar1 != plVar4)) {
    (**(code **)(*plVar1 + 0x20))(plVar1);
  }
  plVar4 = *(long **)(param_1 + 0x4d0);
  *(undefined8 *)(param_1 + 0x4d0) = 0;
  plVar1 = *(long **)(param_1 + 0x4d8);
  *(undefined8 *)(param_1 + 0x4d8) = 0;
  if (plVar4 != (long *)0x0) {
    (**(code **)(*plVar4 + 0x20))(plVar4);
  }
  if ((plVar1 == (long *)0x0) || (plVar1 == plVar4)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032fe73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar1 + 0x20))(plVar1);
  return;
}

