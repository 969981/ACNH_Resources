
void FUN_02dae850(long *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long *plVar5;
  void *__ptr;
  
  if ((undefined1 *)param_1[0x49] != (undefined1 *)0x0) {
    *(undefined1 *)param_1[0x49] = 1;
  }
  plVar5 = (long *)param_1[0x4a];
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar4 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar4 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar4 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
    }
  }
  __ptr = (void *)param_1[0x43];
  param_1[0x43] = 0;
  if (__ptr != (void *)0x0) {
    if (DAT_05ae7600 == 0) {
      free(__ptr);
    }
    else {
      plVar5 = (long *)FUN_038cb610(DAT_05ae7600,__ptr);
      if (plVar5 != (long *)0x0) {
        (**(code **)(*plVar5 + 0x38))(plVar5,__ptr);
      }
    }
  }
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

