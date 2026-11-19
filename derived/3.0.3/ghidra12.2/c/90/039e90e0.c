
void FUN_039e90e0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  long *plVar4;
  long lVar5;
  
  *param_1 = &PTR_FUN_04b6b5e8;
  puVar1 = PTR_DAT_04bb2698;
  if ((0 < *(int *)(param_1 + 0x5b)) && (lVar3 = param_1[0x5c], lVar3 != 0)) {
    plVar4 = (long *)(lVar3 + -8);
    if (*plVar4 != 0) {
      lVar5 = *plVar4 * 0x168;
      do {
        FUN_03922a70(lVar3 + -0x168 + lVar5);
        lVar5 = lVar5 + -0x168;
      } while (lVar5 != 0);
    }
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(plVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,plVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar4);
      }
    }
    param_1[0x5c] = 0;
    *(undefined4 *)(param_1 + 0x5b) = 0;
  }
  param_1[0xf] = &PTR_LAB_04b67f18;
  param_1[9] = &PTR_LAB_04b66680;
  *param_1 = &PTR_LAB_04b66628;
  lVar3 = *(long *)puVar1;
  if (lVar3 == 0) {
    free(param_1);
    return;
  }
  plVar4 = (long *)FUN_038cb610(lVar3,param_1);
  if (plVar4 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x039e91e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar4 + 0x38))(plVar4,param_1);
  return;
}

