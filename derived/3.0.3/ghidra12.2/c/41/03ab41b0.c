
void FUN_03ab41b0(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long *plVar5;
  void *pvVar6;
  long lVar7;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar4 = param_1[7];
  if (lVar4 != 0) {
    plVar5 = (long *)(lVar4 + -8);
    if (*plVar5 != 0) {
      lVar7 = *plVar5 * 0xfc8;
      do {
        FUN_03ac9c00(lVar4 + -0xfc8 + lVar7);
        lVar7 = lVar7 + -0xfc8;
      } while (lVar7 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar5);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,plVar5);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,plVar5);
      }
    }
    param_1[7] = 0;
    *(undefined4 *)(param_1 + 6) = 0;
  }
  if (param_1[9] != 0) {
    pvVar6 = (void *)(param_1[9] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    param_1[8] = 0;
    param_1[9] = 0;
  }
  if (param_1[0xb] != 0) {
    pvVar6 = (void *)(param_1[0xb] + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar6);
    }
    else {
      plVar5 = (long *)FUN_038cb610(*(long *)puVar1,pvVar6);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,pvVar6);
      }
    }
    param_1[10] = 0;
    param_1[0xb] = 0;
  }
  puVar1 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x16] = (long)puVar1;
  puVar2 = PTR_DAT_04bd1068;
  param_1[0xc] = (long)puVar1;
  *param_1 = (long)(puVar2 + 0x10);
  return;
}

