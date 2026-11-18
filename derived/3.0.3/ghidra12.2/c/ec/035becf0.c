
void FUN_035becf0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  long *plVar5;
  long lVar6;
  
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(param_1 + 0x78) = 0;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
    *(undefined8 *)(param_1 + 0x70) = 0;
    *(undefined8 *)(param_1 + 0x80) = 0;
  }
  if (*(long *)(param_1 + 0x38) != 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))();
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  puVar4 = PTR_DAT_04bdf328;
  (**(code **)(**(long **)PTR_DAT_04bdf328 + 0x18))
            (*(long **)PTR_DAT_04bdf328,*(undefined8 *)(param_1 + 0x50));
  plVar5 = *(long **)puVar4;
  *(undefined8 *)(param_1 + 0x50) = 0;
  (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0x58));
  plVar5 = *(long **)puVar4;
  *(undefined8 *)(param_1 + 0x58) = 0;
  (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0x88));
  plVar5 = *(long **)puVar4;
  *(undefined8 *)(param_1 + 0x88) = 0;
  (**(code **)(*plVar5 + 0x18))(plVar5,*(undefined8 *)(param_1 + 0x90));
  plVar5 = *(long **)(param_1 + 0xa0);
  *(undefined8 *)(param_1 + 0x90) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  if (plVar5 != (long *)0x0) {
    plVar1 = plVar5 + 1;
    do {
      lVar6 = *plVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
      if (bVar3) {
        *plVar1 = lVar6 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (lVar6 == 0) {
      (**(code **)(*plVar5 + 0x10))(plVar5);
      std::__shared_weak_count::__release_weak();
      return;
    }
  }
  return;
}

