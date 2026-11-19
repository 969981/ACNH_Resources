
void FUN_03b50cb0(undefined1 *param_1)

{
  undefined *puVar1;
  long *plVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  
  *param_1 = 0;
  plVar2 = *(long **)(param_1 + 0x150);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,0);
    (**(code **)(**(long **)(param_1 + 0x150) + 0x40))();
  }
  plVar2 = *(long **)(param_1 + 0x148);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x38))(plVar2,0);
    (**(code **)(**(long **)(param_1 + 0x148) + 0x40))();
  }
  param_1[1] = 0;
  nn::audio::StopAudioRenderer(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  nn::audio::CloseAudioRenderer(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  puVar1 = PTR_DAT_04bb2698;
  pvVar4 = *(void **)(param_1 + 0x1e8);
  if (pvVar4 != (void *)0x0) {
    if (*(long *)PTR_DAT_04bb2698 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)PTR_DAT_04bb2698,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x1e8) = 0;
    *(undefined4 *)(param_1 + 0x1e0) = 0;
  }
  if (*(long *)(param_1 + 0x1b8) != 0) {
    FUN_03b586f0();
    pvVar4 = *(void **)(param_1 + 0x1b8);
    if (pvVar4 != (void *)0x0) {
      nn::os::FinalizeMutex((MutexType *)((long)pvVar4 + 0x8b8));
      lVar3 = (long)pvVar4 + 0x1a8;
      do {
        lVar3 = *(long *)(lVar3 + 8);
      } while (lVar3 != (long)pvVar4 + 0x1a8);
      pvVar5 = *(void **)((long)pvVar4 + 0x140);
      *(undefined8 *)((long)pvVar4 + 0x140) = 0;
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(pvVar5);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
          }
        }
      }
      pvVar5 = *(void **)((long)pvVar4 + 0x138);
      *(undefined8 *)((long)pvVar4 + 0x138) = 0;
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(pvVar5);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
          }
        }
      }
      pvVar5 = *(void **)((long)pvVar4 + 0x130);
      *(undefined8 *)((long)pvVar4 + 0x130) = 0;
      if (pvVar5 != (void *)0x0) {
        if (*(long *)puVar1 == 0) {
          free(pvVar5);
        }
        else {
          plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
          if (plVar2 != (long *)0x0) {
            (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
          }
        }
      }
      nn::os::FinalizeMutex((MutexType *)((long)pvVar4 + 0x30));
      nn::os::FinalizeMutex((MutexType *)((long)pvVar4 + 0x10));
      if (*(long *)puVar1 == 0) {
        free(pvVar4);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
        }
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  if (*(long **)(param_1 + 0x168) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x168) + 8))();
    *(undefined8 *)(param_1 + 0x168) = 0;
  }
  if (*(long **)(param_1 + 0x170) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x170) + 8))();
    *(undefined8 *)(param_1 + 0x170) = 0;
  }
  if (*(long **)(param_1 + 0x178) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x178) + 8))();
    *(undefined8 *)(param_1 + 0x178) = 0;
  }
  if (*(long **)(param_1 + 0x180) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x180) + 8))();
    *(undefined8 *)(param_1 + 0x180) = 0;
  }
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x188) + 8))();
    *(undefined8 *)(param_1 + 0x188) = 0;
  }
  if (*(long **)(param_1 + 400) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 400) + 8))();
    *(undefined8 *)(param_1 + 400) = 0;
  }
  if (*(long **)(param_1 + 0x1a0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a0) + 8))();
    *(undefined8 *)(param_1 + 0x1a0) = 0;
  }
  if (*(long **)(param_1 + 0x1a8) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1a8) + 8))();
    *(undefined8 *)(param_1 + 0x1a8) = 0;
  }
  if (*(long **)(param_1 + 0x1b0) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x1b0) + 8))();
    *(undefined8 *)(param_1 + 0x1b0) = 0;
  }
  pvVar4 = *(void **)(param_1 + 0x1b8);
  if (pvVar4 != (void *)0x0) {
    nn::os::FinalizeMutex((MutexType *)((long)pvVar4 + 0x8b8));
    lVar3 = (long)pvVar4 + 0x1a8;
    do {
      lVar3 = *(long *)(lVar3 + 8);
    } while (lVar3 != (long)pvVar4 + 0x1a8);
    pvVar5 = *(void **)((long)pvVar4 + 0x140);
    *(undefined8 *)((long)pvVar4 + 0x140) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    pvVar5 = *(void **)((long)pvVar4 + 0x138);
    *(undefined8 *)((long)pvVar4 + 0x138) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    pvVar5 = *(void **)((long)pvVar4 + 0x130);
    *(undefined8 *)((long)pvVar4 + 0x130) = 0;
    if (pvVar5 != (void *)0x0) {
      if (*(long *)puVar1 == 0) {
        free(pvVar5);
      }
      else {
        plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar5);
        if (plVar2 != (long *)0x0) {
          (**(code **)(*plVar2 + 0x38))(plVar2,pvVar5);
        }
      }
    }
    nn::os::FinalizeMutex((MutexType *)((long)pvVar4 + 0x30));
    nn::os::FinalizeMutex((MutexType *)((long)pvVar4 + 0x10));
    if (*(long *)puVar1 == 0) {
      free(pvVar4);
    }
    else {
      plVar2 = (long *)FUN_038cb610(*(long *)puVar1,pvVar4);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x38))(plVar2,pvVar4);
      }
    }
    *(undefined8 *)(param_1 + 0x1b8) = 0;
  }
  return;
}

