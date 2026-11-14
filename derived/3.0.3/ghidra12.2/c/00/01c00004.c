
void FUN_01c00004(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  
  puVar1 = PTR_DAT_04bb28f8;
  *param_1 = &PTR_FUN_04a3e560;
  lVar3 = *(long *)puVar1;
  FUN_01bf710c(lVar3 + 0xd0,param_1);
  if (*(undefined8 **)(lVar3 + 0xc0) == param_1) {
    *(undefined8 *)(lVar3 + 0xc0) = 0;
  }
  if (*(undefined8 **)(lVar3 + 200) == param_1) {
    *(undefined8 *)(lVar3 + 200) = 0;
  }
  param_1[2] = 0;
  if ((undefined8 *)param_1[3] != (undefined8 *)0x0) {
    *(undefined8 *)param_1[3] = 0;
    param_1[3] = 0;
  }
  *(undefined1 *)((long)param_1 + 0x1ba) = 0;
  FUN_03838610(param_1 + 0x31);
  if (*(long *)PTR_DAT_04bb2698 == 0) {
    free(param_1);
    return;
  }
  plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
  if (plVar2 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01c000a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar2 + 0x38))(plVar2,param_1);
  return;
}

