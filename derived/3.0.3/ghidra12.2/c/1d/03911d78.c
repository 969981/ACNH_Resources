
void FUN_03911d78(undefined8 *param_1)

{
  long *plVar1;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04b65f78;
  if ((*(char *)(param_1 + 0x17) != '\0') && (__ptr = (void *)param_1[2], __ptr != (void *)0x0)) {
    FUN_0391bcc8(__ptr);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[2] = 0;
  }
  FUN_038fd0e0(param_1 + 0xd);
  return;
}

