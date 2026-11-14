
void FUN_01bea210(long param_1,undefined8 param_2,long *param_3,long *param_4)

{
  long lVar1;
  int iVar2;
  long *plVar3;
  long lVar4;
  void *pvVar5;
  void *pvVar6;
  
  *(undefined8 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 9) = 1;
  *(undefined4 *)(param_1 + 0x14) = 0;
  if (*(long *)(param_1 + 0xf8) != 0) {
    *(undefined8 *)(param_1 + 0x20) = 0;
    *(undefined4 *)(param_1 + 0x28) = 0;
    (**(code **)(*(long *)(param_1 + 0x18) + 0x38))((long *)(param_1 + 0x18));
    pvVar5 = *(void **)(param_1 + 0xf8);
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0xf8) = 0;
  }
  if (*(long *)(param_1 + 0x1e0) != 0) {
    *(undefined8 *)(param_1 + 0x108) = 0;
    *(undefined4 *)(param_1 + 0x110) = 0;
    (**(code **)(*(long *)(param_1 + 0x100) + 0x38))(param_1 + 0x100);
    pvVar5 = *(void **)(param_1 + 0x1e0);
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0x2c8) != 0) {
    *(undefined8 *)(param_1 + 0x1f0) = 0;
    *(undefined4 *)(param_1 + 0x1f8) = 0;
    (**(code **)(*(long *)(param_1 + 0x1e8) + 0x38))(param_1 + 0x1e8);
    pvVar5 = *(void **)(param_1 + 0x2c8);
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar3 != (long *)0x0) {
          (**(code **)(*plVar3 + 0x38))(plVar3,pvVar5);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x2c8) = 0;
  }
  **(undefined1 **)(param_1 + 0x2e8) = 0;
  **(undefined1 **)(param_1 + 0x340) = 0;
  *(undefined2 *)(param_1 + 0x3a8) = 0;
  *(undefined8 *)(param_1 + 0x2d8) = param_2;
  *(undefined4 *)(param_1 + 0xc) = 1;
  pvVar5 = *(void **)(param_1 + 0x2e8);
  (**(code **)(*param_3 + 0x18))(param_3);
  pvVar6 = (void *)param_3[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_3 + 0x18))(param_3);
    lVar4 = 0;
    do {
      if (*(char *)(param_3[1] + lVar4) == '\0') goto LAB_01bea410;
      lVar1 = param_3[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01bea410;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01bea410;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01bea410:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x2f0) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x2f0) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  pvVar5 = *(void **)(param_1 + 0x340);
  (**(code **)(*param_4 + 0x18))(param_4);
  pvVar6 = (void *)param_4[1];
  if (pvVar5 != pvVar6) {
    (**(code **)(*param_4 + 0x18))(param_4);
    lVar4 = 0;
    do {
      if (*(char *)(param_4[1] + lVar4) == '\0') goto LAB_01bea4ac;
      lVar1 = param_4[1] + lVar4;
      if (*(char *)(lVar1 + 1) == '\0') {
        lVar4 = lVar4 + 1;
        goto LAB_01bea4ac;
      }
      if (*(char *)(lVar1 + 2) == '\0') {
        lVar4 = lVar4 + 2;
        goto LAB_01bea4ac;
      }
      lVar4 = lVar4 + 3;
    } while (lVar4 != 0x80001);
    lVar4 = 0;
LAB_01bea4ac:
    iVar2 = (int)lVar4;
    if (*(int *)(param_1 + 0x348) <= (int)lVar4) {
      iVar2 = *(int *)(param_1 + 0x348) + -1;
    }
    memcpy(pvVar5,pvVar6,(long)iVar2);
    *(undefined1 *)((long)pvVar5 + (long)iVar2) = 0;
  }
  return;
}

