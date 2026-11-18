
void FUN_0329effc(undefined8 *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  
  puVar3 = PTR_DAT_04bb2698;
  pvVar6 = (void *)param_1[0xd];
  if (pvVar6 != (void *)0x0) {
    puVar1 = (undefined8 *)((long)pvVar6 + 8);
    FUN_032c6840(puVar1);
    plVar5 = *(long **)((long)pvVar6 + 8);
    *(undefined8 *)((long)pvVar6 + 0x28) = 0;
    *(undefined8 *)((long)pvVar6 + 0x30) = 0;
    *(undefined8 *)((long)pvVar6 + 0x20) = 0;
    if (plVar5 != (long *)0x0) {
      lVar4 = *(long *)((long)pvVar6 + 0x10);
      lVar2 = *(long *)((long)pvVar6 + 0x18);
      *(undefined8 *)((long)pvVar6 + 0x18) = 0;
      *puVar1 = 0;
      *(undefined8 *)((long)pvVar6 + 0x10) = 0;
      if ((undefined8 *)*plVar5 == puVar1) {
        *plVar5 = lVar2;
      }
      if (lVar2 != 0) {
        *(long *)(lVar2 + 8) = lVar4;
      }
      if (lVar4 != 0) {
        *(long *)(lVar4 + 0x10) = lVar2;
      }
    }
    lVar4 = *(long *)puVar3;
    *(undefined8 *)((long)pvVar6 + 0x10) = 0;
    *(undefined8 *)((long)pvVar6 + 0x18) = 0;
    *puVar1 = 0;
    if (lVar4 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(lVar4,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
  }
  *param_1 = &PTR_LAB_04b18c60;
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
  }
  if ((long *)param_1[6] != (long *)0x0) {
    (**(code **)(*(long *)param_1[6] + 8))();
  }
  pvVar6 = (void *)param_1[3];
  param_1[4] = 0;
  param_1[5] = 0;
  if (pvVar6 != (void *)0x0) {
    FUN_032d0688(pvVar6);
    lVar4 = *(long *)puVar3;
    if (lVar4 == 0) {
      free(pvVar6);
      return;
    }
    plVar5 = (long *)FUN_038cb610(lVar4,pvVar6);
    if (plVar5 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0329f114. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      return;
    }
  }
  return;
}

