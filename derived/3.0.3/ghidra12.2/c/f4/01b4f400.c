
void FUN_01b4f400(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__s;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04a38290;
  lVar5 = DAT_05335028;
  if (DAT_05335020 == param_1) {
    DAT_05335020 = (long *)0x0;
    FUN_01b51e94(DAT_05335028 + 0x470);
    *(undefined ***)(lVar5 + 0x238) = &PTR_FUN_04a38378;
    FUN_01b54e90(lVar5 + 0x238);
    puVar2 = PTR_DAT_04bc0610;
    pvVar6 = *(void **)(lVar5 + 0x308);
    *PTR_DAT_04bc0608 = 1;
    *(undefined ***)(lVar5 + 0x238) = &PTR_LAB_04a383d0;
    *(undefined8 *)puVar2 = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 8) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x10) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x18) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x20) = 0xffffffffffffffff;
    *(undefined8 *)(puVar2 + 0x28) = 0xffffffffffffffff;
    puVar2 = PTR_DAT_04bb2698;
    *(undefined8 *)(lVar5 + 0x2e8) = 0;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
      *(undefined8 *)(lVar5 + 0x308) = 0;
      *(undefined4 *)(lVar5 + 0x300) = 0;
    }
    pvVar6 = *(void **)(lVar5 + 0x3f0);
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
      *(undefined8 *)(lVar5 + 0x3f0) = 0;
      *(undefined4 *)(lVar5 + 1000) = 0;
    }
    pvVar6 = *(void **)(lVar5 + 0x408);
    *(undefined4 *)(lVar5 + 0x3f8) = 0xffffffff;
    if (pvVar6 != (void *)0x0) {
      if (*(long *)puVar2 == 0) {
        free(pvVar6);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
        }
      }
      *(undefined8 *)(lVar5 + 0x408) = 0;
      *(undefined4 *)(lVar5 + 0x400) = 0;
    }
    __s = *(undefined8 **)(lVar5 + 0x248);
    *(undefined **)(lVar5 + 0x238) = PTR_DAT_04bcb440 + 0x10;
    if (__s != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(lVar5 + 0x250) < 1) {
        iVar1 = *(int *)(lVar5 + 0x250) + -1;
      }
      memset(__s,0,(long)iVar1);
      *(undefined1 *)((long)__s + (long)iVar1) = 0;
    }
    (**(code **)(*(long *)(lVar5 + 0x240) + 0x18))(lVar5 + 0x240);
    uVar3 = FUN_006bd550(*(undefined8 *)(lVar5 + 0x248),0);
    *(undefined4 *)(lVar5 + 0x2d8) = uVar3;
    *(undefined8 *)(lVar5 + 0x2e0) = 0;
    *(undefined8 *)(lVar5 + 0x2e8) = 0;
    *(undefined8 *)(lVar5 + 0x2f0) = 0;
    FUN_01b521f0(lVar5);
    DAT_05335028 = 0;
  }
  lVar5 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar5 != 0) {
    if (lVar5 == 1) {
      return;
    }
    if ((*(uint *)(lVar5 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar5 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar5 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

