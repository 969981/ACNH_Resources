
void FUN_035be6b0(long param_1)

{
  long *plVar1;
  char cVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  ulong uVar7;
  
  FUN_035c71e0(param_1 + 0x970);
  *(undefined **)(param_1 + 0x6f8) = PTR_DAT_04bdf380 + 0x10;
  FUN_04002c24(param_1 + 0x6f8);
  lVar4 = *(long *)(param_1 + 0x6e0);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x6e8) != 0) {
      uVar7 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x6e0);
        plVar6 = *(long **)(lVar4 + uVar7 * 0x70 + 0x60);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar6 = *(long **)(lVar4 + uVar7 * 0x70 + 0x50);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar6 = *(long **)(lVar4 + uVar7 * 0x70 + 0x40);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulong *)(param_1 + 0x6e8));
      lVar4 = *(long *)(param_1 + 0x6e0);
    }
    *(undefined8 *)(param_1 + 0x6e8) = 0;
    (**(code **)(**(long **)(param_1 + 0x6d0) + 0x18))(*(long **)(param_1 + 0x6d0),lVar4);
    *(undefined8 *)(param_1 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + 0x6f0) = 0;
  }
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x6b0));
  nn::os::FinalizeConditionVariable((ConditionVariableType *)(param_1 + 0x6a8));
  nn::os::FinalizeMutex((MutexType *)(param_1 + 0x680));
  lVar4 = *(long *)(param_1 + 0x638);
  if (lVar4 != 0) {
    if (*(long *)(param_1 + 0x640) != 0) {
      uVar7 = 0;
      do {
        lVar4 = *(long *)(param_1 + 0x638);
        plVar6 = *(long **)(lVar4 + uVar7 * 0x68 + 0x58);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar6 = *(long **)(lVar4 + uVar7 * 0x68 + 0x48);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        plVar6 = *(long **)(lVar4 + uVar7 * 0x68 + 0x38);
        if (plVar6 != (long *)0x0) {
          plVar1 = plVar6 + 1;
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
            (**(code **)(*plVar6 + 0x10))(plVar6);
            std::__shared_weak_count::__release_weak();
          }
        }
        uVar7 = uVar7 + 1;
      } while (uVar7 < *(ulong *)(param_1 + 0x640));
      lVar4 = *(long *)(param_1 + 0x638);
    }
    *(undefined8 *)(param_1 + 0x640) = 0;
    (**(code **)(**(long **)(param_1 + 0x628) + 0x18))(*(long **)(param_1 + 0x628),lVar4);
    *(undefined8 *)(param_1 + 0x638) = 0;
    *(undefined8 *)(param_1 + 0x648) = 0;
  }
  plVar6 = *(long **)(param_1 + 0x618);
  lVar4 = param_1 + 0x610;
  if (plVar6 != (long *)0x0) {
    plVar1 = plVar6 + 1;
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
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
    }
  }
  do {
    plVar6 = *(long **)(lVar4 + -0x18);
    if (plVar6 == (long *)0x0) {
LAB_035be9a4:
      lVar5 = *(long *)(lVar4 + -0x48);
    }
    else {
      plVar1 = plVar6 + 1;
      do {
        lVar5 = *plVar1;
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(plVar1,0x10);
        if (bVar3) {
          *plVar1 = lVar5 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (lVar5 != 0) goto LAB_035be9a4;
      (**(code **)(*plVar6 + 0x10))(plVar6);
      std::__shared_weak_count::__release_weak();
      lVar5 = *(long *)(lVar4 + -0x48);
    }
    if (lVar5 != 0) {
      *(undefined8 *)(lVar4 + -0x40) = 0;
      (**(code **)(**(long **)(lVar4 + -0x58) + 0x18))();
      *(undefined8 *)(lVar4 + -0x48) = 0;
      *(undefined8 *)(lVar4 + -0x38) = 0;
    }
    if (*(long *)(lVar4 + -0x80) != 0) {
      *(undefined8 *)(lVar4 + -0x78) = 0;
      (**(code **)(**(long **)(lVar4 + -0x90) + 0x18))();
      *(undefined8 *)(lVar4 + -0x80) = 0;
      *(undefined8 *)(lVar4 + -0x70) = 0;
    }
    lVar4 = lVar4 + -0xb8;
    if (lVar4 == param_1 + 0x50) {
      plVar6 = *(long **)(param_1 + 0x48);
      if (plVar6 != (long *)0x0) {
        plVar1 = plVar6 + 1;
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
          (**(code **)(*plVar6 + 0x10))(plVar6);
          std::__shared_weak_count::__release_weak();
          return;
        }
      }
      return;
    }
  } while( true );
}

