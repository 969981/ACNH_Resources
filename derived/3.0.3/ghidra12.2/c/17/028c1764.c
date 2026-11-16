
void FUN_028c1764(void)

{
  long lVar1;
  undefined8 *puVar2;
  void *__ptr;
  long *plVar3;
  
  puVar2 = DAT_055b3ca8;
  if (DAT_055b3ca8 != (undefined8 *)0x0) {
    DAT_055b3ca8 = (undefined8 *)0x0;
    (**(code **)*puVar2)();
    __ptr = DAT_055b3cb0;
    if (DAT_055b3cb0 != (void *)0x0) {
      lVar1 = (long)DAT_055b3cb0 + 8;
      FUN_0275ea2c((long)DAT_055b3cb0 + 0xb8);
      FUN_0275ea2c(lVar1);
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
        }
      }
    }
    DAT_055b3cb0 = (void *)0x0;
  }
  return;
}

