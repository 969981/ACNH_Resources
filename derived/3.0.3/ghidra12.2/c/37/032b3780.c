
void FUN_032b3780(long *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  
  lVar4 = param_1[2];
  if (lVar4 != 0) {
    if (*(long **)(lVar4 + 0x100) != (long *)0x0) {
      (**(code **)(**(long **)(lVar4 + 0x100) + 8))();
      *(undefined8 *)(lVar4 + 0x100) = 0;
    }
    *(undefined4 *)(lVar4 + 0xac) = 0;
    plVar3 = (long *)param_1[2];
    param_1[2] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x18))();
    }
  }
  puVar2 = PTR_DAT_04bb2698;
  if (param_1[0x14] != 0) {
    FUN_032ae1e0();
    pvVar5 = (void *)param_1[0x14];
    param_1[0x14] = 0;
    if (pvVar5 != (void *)0x0) {
      FUN_032ae0c8(pvVar5);
      if (*(long *)puVar2 == 0) {
        free(pvVar5);
        lVar4 = param_1[3];
        goto joined_r0x032b3820;
      }
      plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
      }
    }
  }
  lVar4 = param_1[3];
joined_r0x032b3820:
  if (lVar4 != 0) {
    FUN_032c1bf0();
    pvVar5 = (void *)param_1[3];
    param_1[3] = 0;
    if (pvVar5 != (void *)0x0) {
      FUN_032c1b04(pvVar5);
      if (*(long *)puVar2 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(*(long *)puVar2,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
  }
  if (param_1[4] != 0) {
    param_1[4] = 0;
    param_1[5] = 0;
  }
  if (param_1[6] != 0) {
    param_1[6] = 0;
  }
  if ((long *)param_1[8] != (long *)0x0) {
    (**(code **)(*(long *)param_1[8] + 8))();
    param_1[8] = 0;
  }
  if (*(long *)puVar2 != 0) {
    plVar3 = (long *)*param_1;
    plVar1 = (long *)param_1[1];
    *param_1 = 0;
    param_1[1] = 0;
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x20))(plVar3);
    }
    if ((plVar1 != (long *)0x0) && (plVar1 != plVar3)) {
                    /* WARNING: Could not recover jumptable at 0x032b38fc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x20))(plVar1);
      return;
    }
  }
  return;
}

