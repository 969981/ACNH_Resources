
void FUN_03680808(undefined8 *param_1,undefined8 param_2)

{
  long *plVar1;
  undefined8 *__ptr;
  
  __ptr = (undefined8 *)*param_1;
  *param_1 = param_2;
  if (__ptr != (undefined8 *)0x0) {
    (**(code **)(*(long *)__ptr[2] + 0x38))((long *)__ptr[2],*__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x03680864. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      return;
    }
  }
  return;
}

