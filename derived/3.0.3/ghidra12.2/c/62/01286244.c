
void FUN_01286244(long *param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined4 uVar4;
  long *plVar5;
  long lVar6;
  void *pvVar7;
  undefined8 *__s;
  
  puVar3 = PTR_DAT_04bbbeb8;
  puVar2 = PTR_DAT_04bbbeb0;
  param_1[0x16] = 0;
  *param_1 = (long)&PTR_FUN_04989d48;
  pvVar7 = (void *)param_1[0x1a];
  *puVar2 = 1;
  *(undefined8 *)puVar3 = 0xffffffffffffffff;
  *(undefined4 *)(puVar3 + 8) = 0xffffffff;
  puVar2 = PTR_DAT_04bb2698;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar7 = (void *)param_1[0x37];
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar7 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar7 != (void *)0x0) {
    if (*(long *)puVar2 == 0) {
      free(pvVar7);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar2,pvVar7);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar7);
      }
    }
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
  __s = (undefined8 *)param_1[2];
  *param_1 = (long)(PTR_DAT_04bcb440 + 0x10);
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if ((int)param_1[3] < 1) {
      iVar1 = (int)param_1[3] + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  uVar4 = FUN_006bd550(param_1[2],0);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  lVar6 = *(long *)puVar2;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  if (lVar6 == 0) {
    free(param_1);
    return;
  }
  plVar5 = (long *)FUN_038cb610(lVar6,param_1);
  if (plVar5 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01286400. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar5 + 0x38))(plVar5,param_1);
  return;
}

