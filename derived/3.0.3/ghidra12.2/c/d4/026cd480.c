
void FUN_026cd480(long param_1)

{
  long *plVar1;
  void *pvVar2;
  
  if (*(char *)(param_1 + 0x88) != '\0') {
    pvVar2 = *(void **)(param_1 + 0x70);
    if ((pvVar2 != (void *)0x0) && (*(char *)(param_1 + 0x80) == '\0')) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
      *(undefined8 *)(param_1 + 0x70) = 0;
    }
    *(undefined1 *)(param_1 + 0x88) = 0;
    *(undefined1 *)(param_1 + 0x80) = 0xff;
  }
  if (*(char *)(param_1 + 0xb0) != '\0') {
    pvVar2 = *(void **)(param_1 + 0x98);
    if ((pvVar2 != (void *)0x0) && (*(char *)(param_1 + 0xa8) == '\0')) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
      *(undefined8 *)(param_1 + 0x98) = 0;
    }
    *(undefined1 *)(param_1 + 0xb0) = 0;
    *(undefined1 *)(param_1 + 0xa8) = 0xff;
  }
  if (*(char *)(param_1 + 0xd8) != '\0') {
    pvVar2 = *(void **)(param_1 + 0xc0);
    if ((pvVar2 != (void *)0x0) && (*(char *)(param_1 + 0xd0) == '\0')) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
      *(undefined8 *)(param_1 + 0xc0) = 0;
    }
    *(undefined1 *)(param_1 + 0xd8) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
  }
  if (*(char *)(param_1 + 0x100) != '\0') {
    pvVar2 = *(void **)(param_1 + 0xe8);
    if ((pvVar2 != (void *)0x0) && (*(char *)(param_1 + 0xf8) == '\0')) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
      *(undefined8 *)(param_1 + 0xe8) = 0;
    }
    *(undefined1 *)(param_1 + 0x100) = 0;
    *(undefined1 *)(param_1 + 0xf8) = 0xff;
  }
  if (*(char *)(param_1 + 0x128) != '\0') {
    pvVar2 = *(void **)(param_1 + 0x110);
    if ((pvVar2 != (void *)0x0) && (*(char *)(param_1 + 0x120) == '\0')) {
      if (DAT_05ae7600 == 0) {
        free(pvVar2);
      }
      else {
        plVar1 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
        if (plVar1 != (long *)0x0) {
          (**(code **)(*plVar1 + 0x38))(plVar1,pvVar2);
        }
      }
      *(undefined8 *)(param_1 + 0x110) = 0;
    }
    *(undefined1 *)(param_1 + 0x128) = 0;
    *(undefined1 *)(param_1 + 0x120) = 0xff;
  }
  *(undefined4 *)(param_1 + 0x130) = 0;
  return;
}

