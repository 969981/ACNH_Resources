
void FUN_03c662b0(long param_1)

{
  int *piVar1;
  char cVar2;
  long *plVar3;
  bool bVar4;
  int iVar5;
  long lVar6;
  long *plVar7;
  long *plVar8;
  long lVar9;
  
  if (((DAT_05aee368 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_05aee368), iVar5 != 0)) {
    FUN_038e2df8(&DAT_05aee2b0);
    FUN_001001d0(PTR_FUN_04bcb458,&DAT_05aee2b0,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee368);
  }
  FUN_038e2e80(&DAT_05aee2b0);
  if (*(int *)(param_1 + 0x270) != 0) {
    if (*(long *)(param_1 + 0x268) != param_1 + 0x260) {
      lVar6 = (long)*(int *)(param_1 + 0x274);
      lVar9 = *(long *)(param_1 + 0x268) - lVar6;
      do {
        lVar9 = *(long *)(lVar9 + lVar6 + 8) - lVar6;
      } while (lVar9 != (param_1 + 0x260) - lVar6);
    }
  }
  if (*(int *)(param_1 + 0x288) != 0) {
    if (*(long *)(param_1 + 0x280) != param_1 + 0x278) {
      lVar6 = (long)*(int *)(param_1 + 0x28c);
      lVar9 = *(long *)(param_1 + 0x280) - lVar6;
      do {
        lVar9 = *(long *)(lVar9 + lVar6 + 8) - lVar6;
      } while (lVar9 != (param_1 + 0x278) - lVar6);
    }
  }
  do {
    iVar5 = DAT_05aee2b0;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(0x5aee2b0,0x10);
    if (bVar4) {
      cVar2 = ExclusiveMonitorsStatus();
      DAT_05aee2b0 = DAT_05aee2b0 + -1;
    }
  } while (cVar2 != '\0');
  if (iVar5 == 1) {
    do {
      iVar5 = DAT_05aee350;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(0x5aee350,0x10);
      if (bVar4) {
        cVar2 = ExclusiveMonitorsStatus();
        DAT_05aee350 = DAT_05aee350 + -1;
      }
    } while (cVar2 != '\0');
    if (iVar5 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)&DAT_05aee328);
    }
  }
  piVar1 = (int *)(param_1 + 0xd0);
  FUN_038e2e80(piVar1);
  plVar3 = *(long **)(param_1 + 0xb0);
  if (*(long **)(param_1 + 0xb0) != (long *)0x0) {
    do {
      plVar7 = plVar3;
      plVar3 = (long *)plVar7[1];
    } while ((long *)plVar7[1] != (long *)0x0);
    do {
      while (plVar3 = (long *)plVar7[2], plVar8 = plVar7, (long *)plVar7[2] != (long *)0x0) {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
      }
      do {
        plVar7 = (long *)*plVar8;
        if (plVar7 == (long *)0x0) goto LAB_03c66410;
        bVar4 = (long *)plVar7[1] != plVar8;
        plVar8 = plVar7;
      } while (bVar4);
    } while( true );
  }
LAB_03c66410:
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 1) {
    piVar1 = (int *)(param_1 + 0x170);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x148));
    }
  }
  piVar1 = (int *)(param_1 + 0x1a8);
  FUN_038e2e80(piVar1);
  plVar3 = *(long **)(param_1 + 0x188);
  if (*(long **)(param_1 + 0x188) != (long *)0x0) {
    do {
      plVar7 = plVar3;
      plVar3 = (long *)plVar7[1];
    } while ((long *)plVar7[1] != (long *)0x0);
    lVar9 = (long)plVar7 - *(long *)(param_1 + 0x1a0);
    do {
      (**(code **)(**(long **)(lVar9 + 0x58) + 0x28))();
      plVar3 = (long *)plVar7[2];
      plVar8 = plVar7;
      if ((long *)plVar7[2] == (long *)0x0) {
        do {
          plVar7 = (long *)*plVar8;
          if (plVar7 == (long *)0x0) goto LAB_03c664e0;
          bVar4 = (long *)plVar7[1] != plVar8;
          plVar8 = plVar7;
        } while (bVar4);
      }
      else {
        do {
          plVar7 = plVar3;
          plVar3 = (long *)plVar7[1];
        } while ((long *)plVar7[1] != (long *)0x0);
      }
      lVar9 = (long)plVar7 - *(long *)(param_1 + 0x1a0);
    } while( true );
  }
LAB_03c664e0:
  do {
    iVar5 = *piVar1;
    cVar2 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = iVar5 + -1;
      cVar2 = ExclusiveMonitorsStatus();
    }
  } while (cVar2 != '\0');
  if (iVar5 == 1) {
    piVar1 = (int *)(param_1 + 0x248);
    do {
      iVar5 = *piVar1;
      cVar2 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar5 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    if (iVar5 != 1) {
      nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0x220));
      return;
    }
  }
  return;
}

