
void FUN_02605380(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_LAB_04a86d20;
  if ((*(char *)(param_1 + 9) == '\0') && (__ptr = (void *)param_1[1], __ptr != (void *)0x0)) {
    FUN_03f29b30(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
      return;
    }
    plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
    if (plVar1 != (long *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x026053ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      return;
    }
  }
  return;
}

