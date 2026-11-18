
void FUN_035c71e0(MutexType *param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  
  *(undefined **)(param_1 + 0x50) = PTR_DAT_04bdf360 + 0x10;
  if (*(long *)(param_1 + 0x68) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
    (**(code **)(**(long **)(param_1 + 0x60) + 0x18))();
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  if (*(long *)(param_1 + 0x70) != 0) {
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  lVar6 = *(long *)(param_1 + 0x38);
  *(undefined ***)(param_1 + 0x50) = &PTR_LAB_04bb19f8;
  if (lVar6 != 0) {
    lVar4 = *(long *)(param_1 + 0x48);
    if (lVar4 != 0) {
      uVar8 = 0;
      do {
        if (*(int *)(lVar6 + uVar8 * 4) != 0) {
          *(undefined4 *)(lVar6 + uVar8 * 4) = 0;
          plVar7 = *(long **)(lVar6 + (lVar4 * 4 + 7U & 0xfffffffffffffff8) + uVar8 * 0x20 + 0x18);
          if (plVar7 != (long *)0x0) {
            plVar1 = plVar7 + 1;
            do {
              lVar5 = *plVar1;
              cVar2 = '\x01';
              bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
              if (bVar3) {
                *plVar1 = lVar5 + -1;
                cVar2 = ExclusiveMonitorsStatus();
              }
            } while (cVar2 != '\0');
            if (lVar5 == 0) {
              (**(code **)(*plVar7 + 0x10))(plVar7);
              std::__shared_weak_count::__release_weak();
            }
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(ulong *)(param_1 + 0x48));
      lVar6 = *(long *)(param_1 + 0x38);
    }
    *(undefined8 *)(param_1 + 0x40) = 0;
    (**(code **)(**(long **)(param_1 + 0x28) + 0x18))(*(long **)(param_1 + 0x28),lVar6);
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined8 *)(param_1 + 0x48) = 0;
  }
  nn::os::FinalizeMutex(param_1);
  return;
}

