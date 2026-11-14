
void FUN_01c789bc(long param_1)

{
  char cVar1;
  void *pvVar2;
  long *plVar3;
  
  if (*(char *)(param_1 + 0x790) != '\0') {
    FUN_038fd0e0(param_1 + 0x740);
    *(undefined1 *)(param_1 + 0x790) = 0;
  }
  if (((*(byte *)(param_1 + 0x5c0) >> 1 & 1) != 0) && (DAT_04cce818 != 0)) {
    plVar3 = *(long **)(*(long *)(DAT_04cce818 + 0x10) + (long)*(int *)(param_1 + 0x5f8) * 8);
    nn::os::LockMutex((MutexType *)(plVar3 + 0x4d));
    (**(code **)(*plVar3 + 0x38))(plVar3,param_1 + 0x5a8);
    nn::os::UnlockMutex((MutexType *)(plVar3 + 0x4d));
  }
  FUN_03ebae78(param_1 + 0x6a0);
  FUN_03f2d448(param_1 + 0x5b8);
  if (*(char *)(param_1 + 0x5a1) != '\0') {
    *(undefined1 *)(param_1 + 0x5a1) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x590);
  *(undefined8 *)(param_1 + 0x590) = 0;
  if (pvVar2 == (void *)0x0) {
LAB_01c78aac:
    cVar1 = *(char *)(param_1 + 0x580);
  }
  else {
    if ((*(long *)((long)pvVar2 + 8) != 0) && (*(long **)((long)pvVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)pvVar2 + 0x10) + 8))();
    }
    FUN_038fd0e0((long)pvVar2 + 0x50);
    if (DAT_05ae7600 != 0) {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar2);
      }
      goto LAB_01c78aac;
    }
    free(pvVar2);
    cVar1 = *(char *)(param_1 + 0x580);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x580) = 0;
  }
  if (*(char *)(param_1 + 0x570) != '\0') {
    *(undefined1 *)(param_1 + 0x570) = 0;
  }
  if (*(char *)(param_1 + 0x498) != '\0') {
    *(undefined1 *)(param_1 + 0x498) = 0;
  }
  if (*(char *)(param_1 + 0x458) != '\0') {
    *(undefined1 *)(param_1 + 0x458) = 0;
  }
  if (*(char *)(param_1 + 0x439) != '\0') {
    *(undefined1 *)(param_1 + 0x439) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x428);
  *(undefined8 *)(param_1 + 0x428) = 0;
  if (pvVar2 == (void *)0x0) {
LAB_01c78b3c:
    cVar1 = *(char *)(param_1 + 0x418);
  }
  else {
    if ((*(long *)((long)pvVar2 + 8) != 0) && (*(long **)((long)pvVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)pvVar2 + 0x10) + 8))();
    }
    FUN_038fd0e0((long)pvVar2 + 0x50);
    if (DAT_05ae7600 != 0) {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar2);
      }
      goto LAB_01c78b3c;
    }
    free(pvVar2);
    cVar1 = *(char *)(param_1 + 0x418);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x418) = 0;
  }
  if (*(char *)(param_1 + 0x408) != '\0') {
    *(undefined1 *)(param_1 + 0x408) = 0;
  }
  if (*(char *)(param_1 + 0x330) != '\0') {
    *(undefined1 *)(param_1 + 0x330) = 0;
  }
  if (*(char *)(param_1 + 0x2f0) != '\0') {
    *(undefined1 *)(param_1 + 0x2f0) = 0;
  }
  if (*(char *)(param_1 + 0x2d1) != '\0') {
    *(undefined1 *)(param_1 + 0x2d1) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x2c0);
  *(undefined8 *)(param_1 + 0x2c0) = 0;
  if (pvVar2 == (void *)0x0) {
LAB_01c78bcc:
    cVar1 = *(char *)(param_1 + 0x2b0);
  }
  else {
    if ((*(long *)((long)pvVar2 + 8) != 0) && (*(long **)((long)pvVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)pvVar2 + 0x10) + 8))();
    }
    FUN_038fd0e0((long)pvVar2 + 0x50);
    if (DAT_05ae7600 != 0) {
      plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
      if (plVar3 != (long *)0x0) {
        (**(code **)(*plVar3 + 0x38))(plVar3,pvVar2);
      }
      goto LAB_01c78bcc;
    }
    free(pvVar2);
    cVar1 = *(char *)(param_1 + 0x2b0);
  }
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x2b0) = 0;
  }
  if (*(char *)(param_1 + 0x2a0) != '\0') {
    *(undefined1 *)(param_1 + 0x2a0) = 0;
  }
  if (*(char *)(param_1 + 0x1c8) != '\0') {
    *(undefined1 *)(param_1 + 0x1c8) = 0;
  }
  if (*(char *)(param_1 + 0x188) != '\0') {
    *(undefined1 *)(param_1 + 0x188) = 0;
  }
  if (*(char *)(param_1 + 0x169) != '\0') {
    *(undefined1 *)(param_1 + 0x169) = 0;
  }
  pvVar2 = *(void **)(param_1 + 0x158);
  *(undefined8 *)(param_1 + 0x158) = 0;
  if (pvVar2 != (void *)0x0) {
    if ((*(long *)((long)pvVar2 + 8) != 0) && (*(long **)((long)pvVar2 + 0x10) != (long *)0x0)) {
      (**(code **)(**(long **)((long)pvVar2 + 0x10) + 8))();
    }
    FUN_038fd0e0((long)pvVar2 + 0x50);
    if (DAT_05ae7600 == 0) {
      free(pvVar2);
      cVar1 = *(char *)(param_1 + 0x148);
      goto joined_r0x01c78c60;
    }
    plVar3 = (long *)FUN_038cb610(DAT_05ae7600,pvVar2);
    if (plVar3 != (long *)0x0) {
      (**(code **)(*plVar3 + 0x38))(plVar3,pvVar2);
    }
  }
  cVar1 = *(char *)(param_1 + 0x148);
joined_r0x01c78c60:
  if (cVar1 != '\0') {
    *(undefined1 *)(param_1 + 0x148) = 0;
  }
  if (*(char *)(param_1 + 0x138) != '\0') {
    *(undefined1 *)(param_1 + 0x138) = 0;
  }
  if (*(char *)(param_1 + 0x60) != '\0') {
    *(undefined1 *)(param_1 + 0x60) = 0;
  }
  if (*(char *)(param_1 + 0x20) != '\0') {
    *(undefined1 *)(param_1 + 0x20) = 0;
  }
  return;
}

