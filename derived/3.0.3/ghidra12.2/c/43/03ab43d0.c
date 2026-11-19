
void FUN_03ab43d0(undefined4 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  void *pvVar5;
  long lVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  lVar3 = *(long *)(param_1 + 2);
  if (lVar3 != 0) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar6 = *plVar4 * 0xfc8;
      do {
        FUN_03ac9c00(lVar3 + -0xfc8 + lVar6);
        lVar6 = lVar6 + -0xfc8;
      } while (lVar6 != 0);
    }
    if (*(long *)puVar1 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  if (*(long *)(param_1 + 6) != 0) {
    pvVar5 = (void *)(*(long *)(param_1 + 6) + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 6) = 0;
    param_1[4] = 0;
  }
  if (*(long *)(param_1 + 10) != 0) {
    pvVar5 = (void *)(*(long *)(param_1 + 10) + -8);
    if (*(long *)puVar1 == 0) {
      free(pvVar5);
    }
    else {
      plVar4 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
      if (plVar4 != (long *)0x0) {
        (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
      }
    }
    *(undefined8 *)(param_1 + 10) = 0;
    param_1[8] = 0;
  }
  return;
}

