
void FUN_03c65c20(long param_1,undefined8 param_2)

{
  int iVar1;
  long *plVar2;
  void *__ptr;
  
  if (((DAT_05aee2a8 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_05aee2a8), iVar1 != 0)) {
    DAT_04c4cb68 = 0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(FUN_03c66288,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  FUN_038e2f80(&DAT_04c4cb88);
  if (*(char *)(param_1 + 0x3e) != '\0') {
    (**(code **)(*(long *)(param_1 + 0x28) + 0x18))(param_1 + 0x28);
    __ptr = *(void **)(param_1 + 0x30);
    if (__ptr != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(__ptr);
      }
      else {
        plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,__ptr);
        }
      }
    }
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  FUN_03c5a110(param_1 + 0x28,param_2,0xffffffff,0);
  param_1 = param_1 + DAT_04c4cb80;
  FUN_03c677e0(&DAT_04c4cb68,param_1);
  FUN_03c63ed0(&DAT_04c4cb68,param_1);
  FUN_038e3040(&DAT_04c4cb88);
  return;
}

