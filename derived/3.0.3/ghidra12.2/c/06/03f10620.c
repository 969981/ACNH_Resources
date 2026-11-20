
void FUN_03f10620(long param_1)

{
  int *piVar1;
  long *plVar2;
  void *__ptr;
  undefined8 *__ptr_00;
  long lVar3;
  undefined **local_50;
  long *plStack_48;
  undefined1 *local_40;
  undefined8 uStack_38;
  
  FUN_03f11920(param_1 + 0x20);
  __ptr = *(void **)(param_1 + 0x248);
  if (__ptr == (void *)0x0) goto LAB_03f106d8;
  plStack_48 = (long *)(param_1 + 0x238);
  local_40 = &LAB_03f115b0;
  uStack_38 = 0;
  local_50 = &PTR_LAB_04ba7e40;
  if (*plStack_48 == 0) {
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
LAB_03f10698:
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
  else {
    FUN_03f115c0(*plStack_48,&local_50);
    __ptr = *(void **)(param_1 + 0x248);
    *(undefined4 *)(param_1 + 0x250) = 0;
    *(undefined8 *)(param_1 + 0x238) = 0;
    if (__ptr != (void *)0x0) goto LAB_03f10698;
  }
  *(undefined4 *)(param_1 + 0x254) = 0;
  *(undefined8 *)(param_1 + 0x240) = 0;
  *(undefined8 *)(param_1 + 0x248) = 0;
LAB_03f106d8:
  __ptr_00 = *(undefined8 **)(param_1 + 0x278);
  if (__ptr_00 != (undefined8 *)0x0) {
    piVar1 = (int *)(param_1 + 0x270);
    if (*piVar1 != 0) {
      lVar3 = (long)*piVar1 << 3;
      do {
        FUN_03bf3600(*__ptr_00);
        lVar3 = lVar3 + -8;
        __ptr_00 = __ptr_00 + 1;
      } while (lVar3 != 0);
      __ptr_00 = *(undefined8 **)(param_1 + 0x278);
      if (__ptr_00 == (undefined8 *)0x0) {
        return;
      }
    }
    if (DAT_05ae7600 == 0) {
      free(__ptr_00);
    }
    else {
      plVar2 = (long *)FUN_038cb610(DAT_05ae7600,__ptr_00);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,__ptr_00);
      }
    }
    piVar1[0] = 0;
    piVar1[1] = 0;
    *(undefined8 *)(param_1 + 0x278) = 0;
  }
  return;
}

