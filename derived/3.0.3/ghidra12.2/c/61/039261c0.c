
void FUN_039261c0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = (void *)param_1[0x4d];
  *param_1 = (long)&PTR_FUN_04b67208;
  param_1[6] = (long)&PTR_LAB_04b672d0;
  puVar1 = PTR_DAT_04bb2698;
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0x4d] = 0;
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  pvVar4 = (void *)param_1[0x4b];
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0x4b] = 0;
    *(undefined4 *)(param_1 + 0x4a) = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x46] = (long)puVar1;
  param_1[0x42] = (long)puVar1;
  param_1[0x3e] = (long)puVar1;
  param_1[0x39] = (long)puVar1;
  param_1[0x34] = (long)puVar1;
  param_1[0x30] = (long)puVar1;
  param_1[0x2c] = (long)puVar1;
  param_1[0x27] = (long)puVar1;
  param_1[0x22] = (long)puVar1;
  puVar2 = PTR_DAT_04bd11e8 + 0xd8;
  param_1[0x17] = (long)puVar1;
  param_1[0xc] = (long)puVar1;
  param_1[6] = (long)puVar2;
  puVar2 = PTR_DAT_04bd1068;
  param_1[8] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}

