
void FUN_01402efc(void)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  void *pvVar4;
  
  pvVar4 = DAT_051b69c8;
  puVar1 = PTR_DAT_04bb2698;
  if (DAT_051b69c8 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(DAT_051b69c8);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,DAT_051b69c8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_051b69c8 = (void *)0x0;
    DAT_051b69c0 = 0;
  }
  pvVar4 = DAT_051b69d8;
  if (DAT_051b69d8 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_051b69d8);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_051b69d8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_051b69d8 = (void *)0x0;
    DAT_051b69d0 = 0;
  }
  pvVar4 = DAT_051b69e8;
  if (DAT_051b69e8 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_051b69e8);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_051b69e8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_051b69e8 = (void *)0x0;
    DAT_051b69e0 = 0;
  }
  pvVar4 = DAT_051b69f8;
  if (DAT_051b69f8 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_051b69f8);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_051b69f8);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_051b69f8 = (void *)0x0;
    DAT_051b69f0 = 0;
  }
  pvVar4 = DAT_051b6a08;
  if (DAT_051b6a08 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(DAT_051b6a08);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,DAT_051b6a08);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    DAT_051b6a08 = (void *)0x0;
    DAT_051b6a00 = 0;
  }
  puVar2 = PTR_DAT_04bbcad8;
  pvVar4 = *(void **)(PTR_DAT_04bbcad8 + 8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar3 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar4);
      }
    }
    *(undefined8 *)(puVar2 + 8) = 0;
    *(undefined4 *)puVar2 = 0;
  }
  return;
}

