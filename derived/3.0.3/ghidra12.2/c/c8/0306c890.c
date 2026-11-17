
void FUN_0306c890(long *param_1)

{
  long *plVar1;
  void *__ptr;
  undefined8 uVar2;
  int iVar3;
  
  *param_1 = (long)&PTR_LAB_04af8510;
  if (param_1[0x43] != 0) {
    __ptr = (void *)(param_1[0x43] + -8);
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar1 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar1 != (long *)0x0) {
        (**(code **)(*plVar1 + 0x38))(plVar1,__ptr);
      }
    }
    param_1[0x43] = 0;
    *(undefined4 *)(param_1 + 0x42) = 0;
  }
  FUN_031356e0(param_1 + 0x2a9);
  iVar3 = 0;
  param_1[0x49] = (long)(PTR_DAT_04bc9bd8 + 0x10);
  uVar2 = *(undefined8 *)(DAT_05231900 + 0x100);
  do {
    if ((*(ushort *)(param_1 + 0x4a + (long)iVar3 * 6 + 2) >> 1 & 1) != 0) {
      FUN_015a30c0(uVar2);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 100);
  FUN_03412774(param_1 + 0x4a);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

