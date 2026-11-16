
uint FUN_02641630(long *param_1,undefined8 *param_2)

{
  uint uVar1;
  void *__ptr;
  long *plVar2;
  undefined1 local_40 [16];
  
  uVar1 = 0;
  if (param_1 != (long *)0x0) {
    local_40 = FUN_026837a0();
    if (local_40._0_8_ != 0 || local_40._8_8_ != 0) {
      if (DAT_05ae7600 == 0) {
        __ptr = malloc(0x410);
      }
      else {
        __ptr = (void *)(**(code **)(*param_1 + 0x30))(param_1,0x410,8);
      }
      if (__ptr != (void *)0x0) {
        uVar1 = FUN_006b7bf0(__ptr,local_40);
        if ((param_2 != (undefined8 *)0x0) && ((uVar1 & 1) != 0)) {
          *param_2 = *(undefined8 *)((long)__ptr + 8);
        }
        if (DAT_05ae7600 == 0) {
          free(__ptr);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
          }
        }
        goto LAB_026416ec;
      }
    }
    uVar1 = 0;
  }
LAB_026416ec:
  return uVar1 & 1;
}

