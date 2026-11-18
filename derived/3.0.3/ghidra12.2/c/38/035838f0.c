
void FUN_035838f0(undefined4 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  void *pvVar6;
  
  puVar1 = PTR_DAT_04bb2698;
  if (*(long *)(param_1 + 8) != 0) {
    if (0 < (int)param_1[6]) {
      lVar3 = 0;
      puVar4 = *(undefined8 **)(param_1 + 10);
      do {
        puVar5 = *(undefined8 **)(*(long *)(param_1 + 8) + lVar3 * 8);
        lVar3 = lVar3 + 1;
        *puVar5 = puVar4;
        *(undefined8 **)(param_1 + 10) = puVar5;
        puVar4 = puVar5;
      } while (lVar3 < (int)param_1[6]);
    }
    pvVar6 = *(void **)(param_1 + 0xc);
    param_1[6] = 0;
    if (pvVar6 != (void *)0x0) {
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        free(pvVar6);
      }
      else {
        plVar2 = (long *)FUN_038cb610(lVar3,pvVar6);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
        }
      }
    }
    param_1[0xd] = 0;
    *(undefined8 *)(param_1 + 0xb) = 0;
    *(undefined8 *)(param_1 + 9) = 0;
    *(undefined8 *)(param_1 + 7) = 0;
  }
  if (*(long *)(param_1 + 2) != 0) {
    lVar3 = *(long *)puVar1;
    pvVar6 = (void *)(*(long *)(param_1 + 2) + -8);
    if (lVar3 == 0) {
      free(pvVar6);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar6);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar6);
      }
    }
    *(undefined8 *)(param_1 + 2) = 0;
    *param_1 = 0;
  }
  return;
}

