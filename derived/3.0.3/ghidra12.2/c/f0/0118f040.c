
void FUN_0118f040(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  void *__ptr;
  undefined8 *__s;
  
  __ptr = (void *)param_1[0x3c];
  *param_1 = &PTR_FUN_04983ff8;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,__ptr);
      }
    }
    param_1[0x3c] = 0;
    *(undefined4 *)(param_1 + 0x3b) = 0;
  }
  *(undefined4 *)(param_1 + 0x3f) = 0;
  *(undefined1 *)((long)param_1 + 0x1fc) = 0;
  FUN_01192668(param_1);
  *param_1 = &PTR_LAB_04984050;
  FUN_01192668(param_1);
  __s = (undefined8 *)param_1[2];
  *param_1 = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 3) < 1) {
      iVar1 = *(int *)(param_1 + 3) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[1] + 0x18))(param_1 + 1);
  uVar2 = FUN_006bd550(param_1[2],0);
  *(undefined4 *)(param_1 + 0x14) = uVar2;
  param_1[0x17] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  return;
}

