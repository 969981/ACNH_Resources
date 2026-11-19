
void FUN_03a1fd14(long *param_1)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  ulong uVar5;
  void *pvVar6;
  ulong uVar7;
  
  *param_1 = (long)&PTR_FUN_04b6ccf0;
  param_1[6] = (long)&PTR_LAB_04b6cdc8;
  puVar2 = PTR_DAT_04bb2698;
  uVar5 = (ulong)*(uint *)(param_1 + 0x5f);
  puVar1 = (uint *)(param_1 + 0x5f);
  if (0 < (int)*(uint *)(param_1 + 0x5f)) {
    uVar7 = 0;
    do {
      if ((uVar7 < uVar5) && (pvVar6 = *(void **)(param_1[0x60] + uVar7 * 8), pvVar6 != (void *)0x0)
         ) {
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        uVar5 = (ulong)*puVar1;
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)uVar5);
  }
  pvVar6 = (void *)param_1[0x60];
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
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x60] = 0;
  }
  uVar5 = (ulong)*(uint *)(param_1 + 0x5d);
  puVar1 = (uint *)(param_1 + 0x5d);
  if (0 < (int)*(uint *)(param_1 + 0x5d)) {
    uVar7 = 0;
    do {
      if ((uVar7 < uVar5) && (pvVar6 = *(void **)(param_1[0x5e] + uVar7 * 8), pvVar6 != (void *)0x0)
         ) {
        if (*(long *)puVar2 == 0) {
          free(pvVar6);
        }
        else {
          plVar4 = (long *)FUN_038cb610(*(long *)puVar2,pvVar6);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar6);
          }
        }
        uVar5 = (ulong)*puVar1;
      }
      uVar7 = uVar7 + 1;
    } while ((long)uVar7 < (long)(int)uVar5);
  }
  pvVar6 = (void *)param_1[0x5e];
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
    puVar1[0] = 0;
    puVar1[1] = 0;
    param_1[0x5e] = 0;
  }
  puVar2 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x71] = (long)puVar2;
  param_1[0x6d] = (long)puVar2;
  param_1[0x69] = (long)puVar2;
  param_1[0x65] = (long)puVar2;
  param_1[0x61] = (long)puVar2;
  param_1[0x56] = (long)puVar2;
  param_1[0x52] = (long)puVar2;
  param_1[0x4e] = (long)puVar2;
  param_1[0x44] = (long)puVar2;
  param_1[0x40] = (long)puVar2;
  param_1[0x3b] = (long)puVar2;
  param_1[0x37] = (long)puVar2;
  param_1[0x33] = (long)puVar2;
  param_1[0x2f] = (long)puVar2;
  param_1[0x2b] = (long)puVar2;
  param_1[0x27] = (long)puVar2;
  param_1[0x22] = (long)puVar2;
  puVar3 = PTR_DAT_04bd11e8 + 0xd8;
  param_1[0x17] = (long)puVar2;
  param_1[0xc] = (long)puVar2;
  param_1[6] = (long)puVar3;
  puVar3 = PTR_DAT_04bd1068;
  param_1[8] = (long)puVar2;
  *param_1 = (long)(puVar3 + 0x10);
  return;
}

