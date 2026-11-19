
void FUN_03b4f2f8(void)

{
  undefined8 *puVar1;
  void *__ptr;
  long *plVar2;
  void *pvVar3;
  
  puVar1 = DAT_05aebb80;
  if (DAT_05aebb80 != (undefined8 *)0x0) {
    DAT_05aebb80 = (undefined8 *)0x0;
    (**(code **)*puVar1)();
    __ptr = DAT_05aebb88;
    if (DAT_05aebb88 != (void *)0x0) {
      nn::os::FinalizeMutex((MutexType *)((long)DAT_05aebb88 + 0x1c0));
      plVar2 = *(long **)((long)__ptr + 0x158);
      *(undefined8 *)((long)__ptr + 0x158) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = *(long **)((long)__ptr + 0x150);
      *(undefined8 *)((long)__ptr + 0x150) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      plVar2 = *(long **)((long)__ptr + 0x148);
      *(undefined8 *)((long)__ptr + 0x148) = 0;
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 8))();
      }
      if (*(char *)((long)__ptr + 0x138) != '\0') {
        nn::os::DestroySystemEvent((SystemEventType *)((long)__ptr + 0x110));
      }
      pvVar3 = *(void **)((long)__ptr + 0x48);
      *(undefined8 *)((long)__ptr + 0x48) = 0;
      if (pvVar3 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
      pvVar3 = *(void **)((long)__ptr + 0x40);
      *(undefined8 *)((long)__ptr + 0x40) = 0;
      if (pvVar3 != (void *)0x0) {
        if (DAT_05ae7600 == 0) {
          free(pvVar3);
        }
        else {
          plVar2 = (long *)FUN_038cb610(DAT_05ae7600,pvVar3);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar3);
          }
        }
      }
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
    DAT_05aebb88 = (void *)0x0;
  }
  return;
}

