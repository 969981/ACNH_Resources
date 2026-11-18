
void FUN_0361e250(long param_1,void *param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  void *__src;
  long local_50;
  long *local_48;
  
  FUN_035c4140(&local_50,param_1 + 0x438);
  __src = (void *)(local_50 + 0x40);
  if (param_4 == 0xa0) {
    memcpy(param_2,__src,0x16800);
  }
  else {
    lVar4 = 0x90;
    do {
      memcpy(param_2,__src,0x280);
      memcpy((void *)((long)param_2 + param_4 * 4),(void *)((long)__src + 0x280),0x280);
      lVar4 = lVar4 + -2;
      param_2 = (void *)((long)param_2 + param_4 * 8);
      __src = (void *)((long)__src + 0x500);
    } while (lVar4 != 0);
  }
  if (local_48 != (long *)0x0) {
    plVar1 = local_48 + 1;
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
      (**(code **)(*local_48 + 0x10))(local_48);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

