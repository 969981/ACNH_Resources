
long FUN_03c66100(long param_1,long param_2,long param_3)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar4 = param_1;
  if (param_2 != param_3) {
    if (((DAT_05aee368 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aee368), iVar3 != 0)) {
      FUN_038e2df8(&DAT_05aee2b0);
      FUN_001001d0(PTR_FUN_04bcb458,&DAT_05aee2b0,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05aee368);
    }
    FUN_038e2e80(&DAT_05aee2b0);
    if (*(long *)(param_3 + 0x268) != param_3 + 0x260) {
      lVar5 = (long)*(int *)(param_3 + 0x274);
      lVar7 = *(long *)(param_3 + 0x268) - lVar5;
      lVar6 = (param_3 + 0x260) - lVar5;
      lVar4 = lVar7;
      do {
        if (*(long *)(lVar4 + 0x20) == param_2) {
          lVar4 = *(long *)(lVar4 + 0x30) + param_1;
          goto LAB_03c661e0;
        }
        lVar4 = *(long *)(lVar4 + lVar5 + 8) + -lVar5;
      } while (lVar4 != lVar6);
      do {
        lVar4 = FUN_03c66100(*(long *)(lVar7 + 0x30) + param_1,param_2,*(undefined8 *)(lVar7 + 0x20)
                            );
        if (lVar4 != 0) goto LAB_03c661e0;
        lVar7 = *(long *)(lVar7 + lVar5 + 8) + -lVar5;
      } while (lVar7 != lVar6);
    }
    lVar4 = 0;
LAB_03c661e0:
    do {
      iVar3 = DAT_05aee2b0;
      cVar1 = '\x01';
      bVar2 = (bool)ExclusiveMonitorPass(0x5aee2b0,0x10);
      if (bVar2) {
        cVar1 = ExclusiveMonitorsStatus();
        DAT_05aee2b0 = DAT_05aee2b0 + -1;
      }
    } while (cVar1 != '\0');
    if (iVar3 == 1) {
      do {
        iVar3 = DAT_05aee350;
        cVar1 = '\x01';
        bVar2 = (bool)ExclusiveMonitorPass(0x5aee350,0x10);
        if (bVar2) {
          cVar1 = ExclusiveMonitorsStatus();
          DAT_05aee350 = DAT_05aee350 + -1;
        }
      } while (cVar1 != '\0');
      if (iVar3 != 1) {
        nn::os::ReleaseSemaphore((SemaphoreType *)&DAT_05aee328);
      }
    }
  }
  return lVar4;
}

