
void FUN_013ecef0(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *__s;
  
  *param_1 = (long)&PTR_FUN_04996dc0;
  lVar6 = DAT_051b7358;
  if (DAT_051b6980 == param_1) {
    DAT_051b6980 = (long *)0x0;
    *(undefined ***)(DAT_051b7358 + 0x350) = &PTR_FUN_04996eb8;
    *(undefined8 *)(lVar6 + 0x400) = 0;
    puVar2 = PTR_DAT_04bb2698;
    pvVar7 = *(void **)(lVar6 + 0x420);
    DAT_051b6998 = 1;
    DAT_051b699c = 0xffffffffffffffff;
    DAT_051b69a4 = 0xffffffffffffffff;
    if (pvVar7 != (void *)0x0) {
      if (*(long *)PTR_DAT_04bb2698 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
      *(undefined8 *)(lVar6 + 0x420) = 0;
      *(undefined4 *)(lVar6 + 0x418) = 0;
    }
    pvVar7 = *(void **)(lVar6 + 0x508);
    if (pvVar7 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      if (lVar5 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(lVar5,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
      *(undefined8 *)(lVar6 + 0x508) = 0;
      *(undefined4 *)(lVar6 + 0x500) = 0;
    }
    pvVar7 = *(void **)(lVar6 + 0x520);
    *(undefined4 *)(lVar6 + 0x510) = 0xffffffff;
    if (pvVar7 != (void *)0x0) {
      lVar5 = *(long *)puVar2;
      if (lVar5 == 0) {
        free(pvVar7);
      }
      else {
        plVar4 = (long *)FUN_038cb610(lVar5,pvVar7);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar7);
        }
      }
      *(undefined8 *)(lVar6 + 0x520) = 0;
      *(undefined4 *)(lVar6 + 0x518) = 0;
    }
    __s = *(undefined8 **)(lVar6 + 0x360);
    *(undefined **)(lVar6 + 0x350) = PTR_DAT_04bcb440 + 0x10;
    if (__s != &DAT_0407ebb1) {
      iVar1 = 0;
      if (*(int *)(lVar6 + 0x368) < 1) {
        iVar1 = *(int *)(lVar6 + 0x368) + -1;
      }
      memset(__s,0,(long)iVar1);
      *(undefined1 *)((long)__s + (long)iVar1) = 0;
    }
    (**(code **)(*(long *)(lVar6 + 0x358) + 0x18))(lVar6 + 0x358);
    uVar3 = FUN_006bd550(*(undefined8 *)(lVar6 + 0x360),0);
    *(undefined4 *)(lVar6 + 0x3f0) = uVar3;
    *(undefined8 *)(lVar6 + 0x3f8) = 0;
    *(undefined8 *)(lVar6 + 0x400) = 0;
    *(undefined8 *)(lVar6 + 0x408) = 0;
    FUN_013ff104(lVar6 + 0x150);
    FUN_009931e0(lVar6);
    DAT_051b7358 = 0;
  }
  lVar6 = param_1[1];
  *param_1 = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar4 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar4 != 0) {
      *(long *)(*plVar4 + 8) = plVar4[1];
    }
    if ((long *)plVar4[1] != (long *)0x0) {
      *(long *)plVar4[1] = *plVar4;
    }
    *plVar4 = 0;
    plVar4[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar5 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar5 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

