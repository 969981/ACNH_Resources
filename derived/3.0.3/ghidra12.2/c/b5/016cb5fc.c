
void FUN_016cb5fc(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  long lVar3;
  
  *param_1 = (long)(PTR_DAT_04bc35d0 + 0x10);
  if (*(char *)((long)param_1 + 0x11) != '\0') {
    lVar3 = *(long *)(param_1[1] + 0x28);
    if ((char)param_1[2] == '\0') {
      if (lVar3 == 0) goto LAB_016cb65c;
      puVar1 = *(undefined8 **)(lVar3 + 0x18);
    }
    else {
      if (lVar3 == 0) goto LAB_016cb65c;
      puVar1 = *(undefined8 **)(lVar3 + 8);
    }
    if (puVar1 != (undefined8 *)0x0) {
      (**(code **)*puVar1)();
    }
  }
LAB_016cb65c:
  if (DAT_05ae7600 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(DAT_05ae7600,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x016cb68c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

