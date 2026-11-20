
void FUN_03d59f38(undefined8 *param_1)

{
  undefined *puVar1;
  long lVar2;
  long *plVar3;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04b8f648;
  FUN_038e31ec(param_1 + 0x2d);
  FUN_038e31ec(param_1 + 0x23);
  FUN_03d5aae0(param_1 + 0xf);
  puVar1 = PTR_DAT_04bb2698;
  if (*(char *)((long)param_1 + 0x3e) != '\0') {
    (**(code **)(param_1[5] + 0x18))(param_1 + 5);
    __ptr = (void *)param_1[6];
    if (__ptr != (void *)0x0) {
      lVar2 = *(long *)puVar1;
      if (lVar2 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(lVar2,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    *(undefined1 *)((long)param_1 + 0x3e) = 0;
  }
  lVar2 = *(long *)puVar1;
  if (lVar2 == 0) {
    free(param_1);
    return;
  }
  plVar3 = (long *)FUN_038cb610(lVar2,param_1);
  if (plVar3 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03d59ffc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*plVar3 + 0x38))(plVar3,param_1);
  return;
}

