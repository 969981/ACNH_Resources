
void FUN_0118ecfc(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  undefined8 *__s;
  void *__ptr;
  
  *param_1 = &PTR_FUN_04983ec0;
  FUN_0118ee4c(param_1 + 0xc1);
  param_1[0x81] = &PTR_FUN_04984110;
  FUN_01195920(param_1 + 0x81);
  FUN_01196068(param_1 + 0x81);
  __ptr = (void *)param_1[0x7d];
  param_1[0x41] = &PTR_FUN_04983ff8;
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
    param_1[0x7d] = 0;
    *(undefined4 *)(param_1 + 0x7c) = 0;
  }
  *(undefined4 *)(param_1 + 0x80) = 0;
  *(undefined1 *)((long)param_1 + 0x404) = 0;
  FUN_01192668(param_1 + 0x41);
  param_1[0x41] = &PTR_LAB_04984050;
  FUN_01192668(param_1 + 0x41);
  __s = (undefined8 *)param_1[0x43];
  param_1[0x41] = &PTR_FUN_04b5e7f8;
  if (__s != &DAT_0407ebb1) {
    iVar1 = 0;
    if (*(int *)(param_1 + 0x44) < 1) {
      iVar1 = *(int *)(param_1 + 0x44) + -1;
    }
    memset(__s,0,(long)iVar1);
    *(undefined1 *)((long)__s + (long)iVar1) = 0;
  }
  (**(code **)(param_1[0x42] + 0x18))(param_1 + 0x42);
  uVar2 = FUN_006bd550(param_1[0x43],0);
  *(undefined4 *)(param_1 + 0x55) = uVar2;
  param_1[0x56] = 0;
  param_1[0x57] = 0;
  param_1[0x58] = 0;
  FUN_0118f150(param_1 + 1);
  return;
}

