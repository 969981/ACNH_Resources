
undefined8 FUN_03c65fa0(long param_1,long param_2)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  ulong uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  
  if (param_1 == param_2) {
    uVar5 = 1;
  }
  else {
    if (((DAT_05aee368 & 1) == 0) && (iVar3 = __cxa_guard_acquire(&DAT_05aee368), iVar3 != 0)) {
      FUN_038e2df8(&DAT_05aee2b0);
      FUN_001001d0(PTR_FUN_04bcb458,&DAT_05aee2b0,&__DT_FINI_ARRAY);
      __cxa_guard_release(&DAT_05aee368);
    }
    FUN_038e2e80(&DAT_05aee2b0);
    if (*(long *)(param_1 + 0x268) != param_1 + 0x260) {
      lVar6 = (long)*(int *)(param_1 + 0x274);
      lVar7 = *(long *)(param_1 + 0x268) - lVar6;
      do {
        if (*(long *)(lVar7 + 0x20) == param_2) {
          uVar5 = 1;
          goto LAB_03c66050;
        }
        uVar4 = FUN_03c65fa0(*(long *)(lVar7 + 0x20),param_2);
        if ((uVar4 & 1) != 0) {
          uVar5 = 1;
          goto LAB_03c66050;
        }
        lVar7 = *(long *)(lVar7 + lVar6 + 8) - lVar6;
      } while (lVar7 != (param_1 + 0x260) - lVar6);
    }
    uVar5 = 0;
LAB_03c66050:
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
  return uVar5;
}

