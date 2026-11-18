
void FUN_03702710(undefined8 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  void *pvVar4;
  undefined8 *__s;
  
  pvVar4 = (void *)param_1[0x1a];
  *param_1 = &PTR_FUN_04b45768;
  DAT_05ab9860 = 1;
  DAT_05ab9864 = 0xffffffffffffffff;
  DAT_05ab986c = 0xffffffffffffffff;
  DAT_05ab9874 = 0xffffffffffffffff;
  param_1[0x16] = 0;
  if (pvVar4 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0x1a] = 0;
    *(undefined4 *)(param_1 + 0x19) = 0;
  }
  pvVar4 = (void *)param_1[0x37];
  if (pvVar4 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0x37] = 0;
    *(undefined4 *)(param_1 + 0x36) = 0;
  }
  pvVar4 = (void *)param_1[0x3a];
  *(undefined4 *)(param_1 + 0x38) = 0xffffffff;
  if (pvVar4 != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    param_1[0x3a] = 0;
    *(undefined4 *)(param_1 + 0x39) = 0;
  }
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

