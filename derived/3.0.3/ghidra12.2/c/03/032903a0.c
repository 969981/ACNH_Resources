
void FUN_032903a0(long *param_1)

{
  long *plVar1;
  void *__s;
  long *plVar2;
  
  plVar1 = (long *)*param_1;
  if (plVar1 != (long *)0x0) {
    *param_1 = 0;
    (**(code **)(*plVar1 + 8))();
  }
  __s = (void *)param_1[0x2d];
  if (__s != (void *)0x0) {
    plVar1 = (long *)((long)__s + -8);
    if (*plVar1 != 0) {
      memset(__s,0,*plVar1 << 3);
    }
    if (DAT_05ae7600 == 0) {
      free(plVar1);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,plVar1);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,plVar1);
      }
    }
    param_1[0x2d] = 0;
    *(undefined4 *)(param_1 + 0x2c) = 0;
  }
  if ((long *)param_1[0x27] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x27] + 8))();
  }
  if ((undefined8 *)param_1[0x21] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x21])();
  }
  if ((undefined8 *)param_1[0x1c] != (undefined8 *)0x0) {
    (*(code *)**(undefined8 **)param_1[0x1c])();
  }
  if ((long *)param_1[0x17] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x17] + 8))();
  }
  if ((long *)param_1[0x11] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x11] + 8))();
  }
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  if ((long *)*param_1 == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x032904b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*param_1 + 8))();
  return;
}

