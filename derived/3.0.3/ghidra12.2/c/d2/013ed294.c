
void FUN_013ed294(long param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  long *plVar4;
  long lVar5;
  void *pvVar6;
  undefined8 *__s;
  
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined ***)(param_1 + 0x350) = &PTR_FUN_04996eb8;
  puVar2 = PTR_DAT_04bb2698;
  DAT_051b6998 = 1;
  DAT_051b699c = 0xffffffffffffffff;
  DAT_051b69a4 = 0xffffffffffffffff;
  pvVar6 = *(void **)(param_1 + 0x420);
  if (pvVar6 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x420) = 0;
    *(undefined4 *)(param_1 + 0x418) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x508);
  if (pvVar6 != (void *)0x0) {
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x508) = 0;
    *(undefined4 *)(param_1 + 0x500) = 0;
  }
  pvVar6 = *(void **)(param_1 + 0x520);
  *(undefined4 *)(param_1 + 0x510) = 0xffffffff;
  if (pvVar6 != (void *)0x0) {
    lVar5 = *(long *)puVar2;
    if (lVar5 == 0) {
      free(pvVar6);
    }
    else {
      plVar4 = (long *)FUN_038cb610(lVar5,pvVar6);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 0x520) = 0;
    *(undefined4 *)(param_1 + 0x518) = 0;
  }
  __s = *(undefined8 **)(param_1 + 0x360);
  *(undefined ***)(param_1 + 0x350) = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x368) < 1) {
      iVar1 = *(int *)(param_1 + 0x368) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(*(long *)(param_1 + 0x358) + 0x18))(param_1 + 0x358);
  uVar3 = FUN_006bd550(*(undefined8 *)(param_1 + 0x360),0);
  *(undefined4 *)(param_1 + 0x3f0) = uVar3;
  *(undefined8 *)(param_1 + 0x3f8) = 0;
  *(undefined8 *)(param_1 + 0x400) = 0;
  *(undefined8 *)(param_1 + 0x408) = 0;
  FUN_013ff104(param_1 + 0x150);
  FUN_009931e0(param_1);
  return;
}

