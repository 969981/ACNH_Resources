
void FUN_032cc160(undefined8 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  
  lVar3 = param_1[0x1c];
  *param_1 = &PTR_FUN_04b1b2b8;
  puVar1 = PTR_DAT_04bb2698;
  if (lVar3 != 0) {
    plVar2 = *(long **)(lVar3 + 0x80);
    *(undefined8 *)(lVar3 + 0x80) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = *(long **)(lVar3 + 0x68);
    *(undefined8 *)(lVar3 + 0x68) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x18))();
    }
    plVar2 = *(long **)(lVar3 + 0x70);
    *(undefined8 *)(lVar3 + 0x70) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    plVar2 = *(long **)(lVar3 + 0x78);
    *(undefined8 *)(lVar3 + 0x78) = 0;
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 8))();
    }
    FUN_0327f04c(lVar3 + 0x48);
    FUN_0327fc38(lVar3);
    pvVar4 = (void *)param_1[0x1c];
    param_1[0x1c] = 0;
    if (pvVar4 != (void *)0x0) {
      if (*(long **)((long)pvVar4 + 0x80) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 0x80) + 8))();
      }
      if (*(long **)((long)pvVar4 + 0x78) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 0x78) + 8))();
      }
      if (*(long **)((long)pvVar4 + 0x70) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 0x70) + 8))();
      }
      if (*(long **)((long)pvVar4 + 0x68) != (long *)0x0) {
        (**(code **)(**(long **)((long)pvVar4 + 0x68) + 0x18))();
      }
      FUN_0327edb0((long)pvVar4 + 0x48);
      *(undefined8 *)((long)pvVar4 + 0x40) = 0;
      FUN_0327f6b0(pvVar4);
      lVar3 = *(long *)puVar1;
      if (lVar3 == 0) {
        free(pvVar4);
        lVar3 = param_1[0x1b];
        goto joined_r0x032cc298;
      }
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  lVar3 = param_1[0x1b];
joined_r0x032cc298:
  if (lVar3 != 0) {
    param_1[0x1b] = 0;
    FUN_00367b50();
  }
  if ((long *)param_1[0x24] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x24] + 8))();
  }
  if ((long *)param_1[0x1e] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x1e] + 8))();
  }
  pvVar4 = (void *)param_1[0x1c];
  if (pvVar4 != (void *)0x0) {
    if (*(long **)((long)pvVar4 + 0x80) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x80) + 8))();
    }
    if (*(long **)((long)pvVar4 + 0x78) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x78) + 8))();
    }
    if (*(long **)((long)pvVar4 + 0x70) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x70) + 8))();
    }
    if (*(long **)((long)pvVar4 + 0x68) != (long *)0x0) {
      (**(code **)(**(long **)((long)pvVar4 + 0x68) + 0x18))();
    }
    FUN_0327edb0((long)pvVar4 + 0x48);
    *(undefined8 *)((long)pvVar4 + 0x40) = 0;
    FUN_0327f6b0(pvVar4);
    lVar3 = *(long *)puVar1;
    if (lVar3 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(lVar3,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
  }
  param_1[0x1b] = 0;
  *param_1 = &PTR_LAB_04b1b3b0;
  FUN_0037bb6c(param_1);
  return;
}

