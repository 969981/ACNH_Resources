
void FUN_01be9eb8(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long *plVar4;
  void *pvVar5;
  
  *param_1 = &PTR___cxa_pure_virtual_04a3d320;
  if (param_1[0x1f] != 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    (**(code **)(param_1[3] + 0x38))(param_1 + 3);
    pvVar5 = (void *)param_1[0x1f];
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    param_1[0x1f] = 0;
  }
  if (param_1[0x3c] != 0) {
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    (**(code **)(param_1[0x20] + 0x38))(param_1 + 0x20);
    pvVar5 = (void *)param_1[0x3c];
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    param_1[0x3c] = 0;
  }
  if (param_1[0x59] != 0) {
    param_1[0x3e] = 0;
    *(undefined4 *)(param_1 + 0x3f) = 0;
    (**(code **)(param_1[0x3d] + 0x38))(param_1 + 0x3d);
    pvVar5 = (void *)param_1[0x59];
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    param_1[0x59] = 0;
  }
  puVar1 = PTR_DAT_04bb2e00;
  if (*(char *)((long)param_1 + 0x39c) == '\0') {
    param_1[0x72] = &PTR___cxa_pure_virtual_04a3ac58;
  }
  else {
    FUN_01bc1880(*(long *)PTR_DAT_04bb28f8 + 0x2990,param_1 + 0x73);
    param_1[0x72] = PTR_DAT_04bc0a68 + 0x10;
    param_1[0x3d] = puVar1 + 0x10;
    if (param_1[0x59] != 0) {
      param_1[0x3e] = 0;
      *(undefined4 *)(param_1 + 0x3f) = 0;
      param_1[0x41] = 0xffffffff00000000;
      *(undefined1 *)((long)param_1 + 0x1fc) = 0;
      param_1[0x40] = 0xffffffff;
      *(undefined4 *)(param_1 + 0x42) = 0xffffffff;
      *(undefined1 *)param_1[0x44] = 0;
      *(undefined1 *)param_1[0x4f] = 0;
      pvVar5 = (void *)param_1[0x59];
      if (pvVar5 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar5);
        }
        else {
          plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
          if (plVar4 != (long *)0x0) {
            (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
          }
        }
      }
      param_1[0x59] = 0;
    }
  }
  puVar3 = PTR_DAT_04bb2df8;
  puVar1 = puVar1 + 0x10;
  param_1[0x20] = puVar1;
  puVar2 = puVar3 + 0x10;
  param_1[0x3d] = puVar2;
  if (param_1[0x3c] != 0) {
    param_1[0x21] = 0;
    *(undefined4 *)(param_1 + 0x22) = 0;
    *(undefined1 *)((long)param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x25) = 0xffffffff;
    param_1[0x23] = 0xffffffff;
    param_1[0x24] = 0xffffffff00000000;
    *(undefined1 *)param_1[0x27] = 0;
    *(undefined1 *)param_1[0x32] = 0;
    pvVar5 = (void *)param_1[0x3c];
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    param_1[0x3c] = 0;
  }
  param_1[0x20] = puVar2;
  param_1[3] = puVar1;
  if (param_1[0x1f] != 0) {
    param_1[4] = 0;
    *(undefined4 *)(param_1 + 5) = 0;
    *(undefined1 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    param_1[6] = 0xffffffff;
    param_1[7] = 0xffffffff00000000;
    *(undefined1 *)param_1[10] = 0;
    *(undefined1 *)param_1[0x15] = 0;
    pvVar5 = (void *)param_1[0x1f];
    if (pvVar5 != (void *)0x0) {
      if (DAT_05ae7600 == 0) {
        free(pvVar5);
      }
      else {
        plVar4 = (long *)FUN_038cb610(DAT_05ae7600,pvVar5);
        if (plVar4 != (long *)0x0) {
          (**(code **)(*plVar4 + 0x38))(plVar4,pvVar5);
        }
      }
    }
    param_1[0x1f] = 0;
  }
  param_1[3] = puVar3 + 0x10;
  return;
}

