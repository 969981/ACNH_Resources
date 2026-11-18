
void FUN_032bc2b0(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  void *pvVar3;
  
  *param_1 = &PTR_FUN_04b1a920;
  if ((long *)param_1[0x26] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x26] + 8))();
  }
  if ((long *)param_1[0x20] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x20] + 8))();
  }
  if ((long *)param_1[0x1a] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1a] + 8))();
  }
  if ((long *)param_1[0x14] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x14] + 8))();
  }
  if ((long *)param_1[0xe] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xe] + 8))();
  }
  FUN_03285a70(param_1 + 9);
  puVar1 = PTR_DAT_04bb2698;
  pvVar3 = (void *)param_1[8];
  if (pvVar3 == (void *)0x0) {
LAB_032bc378:
    pvVar3 = (void *)param_1[7];
  }
  else {
    FUN_03286c9c(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_032bc378;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[7];
  }
  if (pvVar3 != (void *)0x0) {
    FUN_032bac20(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  pvVar3 = (void *)param_1[6];
  if (pvVar3 == (void *)0x0) {
LAB_032bc400:
    pvVar3 = (void *)param_1[5];
  }
  else {
    FUN_032bf210(pvVar3);
    if (*(long *)puVar1 != 0) {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
      goto LAB_032bc400;
    }
    free(pvVar3);
    pvVar3 = (void *)param_1[5];
  }
  if (pvVar3 != (void *)0x0) {
    if (*(long **)((long)pvVar3 + 0x1c0) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x1c0) + 8))();
    }
    if (*(long **)((long)pvVar3 + 400) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 400) + 8))();
    }
    if (*(long **)((long)pvVar3 + 0x160) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x160) + 8))();
    }
    if (*(long **)((long)pvVar3 + 0x150) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar3 + 0x150) + 8))();
    }
    *(undefined8 *)((long)pvVar3 + 0x120) = 0;
    *(undefined8 *)((long)pvVar3 + 0x128) = 0;
    *(undefined8 *)((long)pvVar3 + 0x148) = 0;
    *(undefined8 *)((long)pvVar3 + 0x110) = 0;
    *(undefined8 *)((long)pvVar3 + 0x118) = 0;
    *(undefined8 *)((long)pvVar3 + 0x100) = 0;
    *(undefined8 *)((long)pvVar3 + 0x108) = 0;
    *(undefined8 *)((long)pvVar3 + 0xf0) = 0;
    *(undefined8 *)((long)pvVar3 + 0xf8) = 0;
    *(undefined8 *)((long)pvVar3 + 0x138) = 0;
    *(undefined8 *)((long)pvVar3 + 0x140) = 0;
    FUN_032b3674((long)pvVar3 + 8);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  pvVar3 = (void *)param_1[4];
  if (pvVar3 != (void *)0x0) {
    FUN_032c1b04(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
      pvVar3 = (void *)param_1[3];
      goto joined_r0x032bc4f4;
    }
    plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
    }
  }
  pvVar3 = (void *)param_1[3];
joined_r0x032bc4f4:
  if (pvVar3 != (void *)0x0) {
    FUN_032ae0c8(pvVar3);
    if (*(long *)puVar1 == 0) {
      free(pvVar3);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar3);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
      }
    }
  }
  FUN_03281ac0(param_1 + 2);
  *param_1 = &PTR_LAB_04b1a9d0;
  param_1[1] = 0;
  return;
}

