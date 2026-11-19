
void FUN_03c66590(void)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  long *plVar4;
  bool bVar5;
  int iVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  uint uVar10;
  
  if (((DAT_05aee2a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05aee2a8), iVar6 != 0)) {
    DAT_04c4cb68 = (long *)0x0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(FUN_03c66288,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  FUN_038e2e80(&DAT_04c4cb88);
  if (((DAT_05aee2a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_05aee2a8), iVar6 != 0)) {
    DAT_04c4cb68 = (long *)0x0;
    DAT_04c4cb70 = (code *)0x0;
    DAT_04c4cb78 = (code *)0x0;
    DAT_04c4cb80 = 0xffffffffffffffff;
    FUN_038e2df8(&DAT_04c4cb88);
    DAT_04c4cc40 = 0;
    DAT_04c4cb70 = FUN_03c66bc0;
    DAT_04c4cb78 = FUN_03c66d50;
    DAT_04c4cb80 = 0;
    FUN_001001d0(FUN_03c66288,&DAT_04c4cb68,&__DT_FINI_ARRAY);
    __cxa_guard_release(&DAT_05aee2a8);
  }
  uVar3 = DAT_04c4cc40;
  uVar10 = 0;
  plVar7 = DAT_04c4cb68;
  do {
    if (plVar7 != (long *)0x0) {
      plVar8 = plVar7;
      do {
        plVar9 = plVar8;
        plVar8 = (long *)plVar9[1];
      } while ((long *)plVar9[1] != (long *)0x0);
      uVar1 = *(uint *)((long)plVar9 + (0x20 - DAT_04c4cb80));
      while (uVar1 != uVar10) {
        plVar8 = plVar9;
        plVar4 = (long *)plVar9[2];
        if ((long *)plVar9[2] == (long *)0x0) {
          do {
            plVar9 = (long *)*plVar8;
            if (plVar9 == (long *)0x0) goto LAB_03c665f8;
            bVar5 = (long *)plVar9[1] != plVar8;
            plVar8 = plVar9;
          } while (bVar5);
        }
        else {
          do {
            plVar9 = plVar4;
            plVar4 = (long *)plVar9[1];
          } while ((long *)plVar9[1] != (long *)0x0);
        }
        uVar1 = *(uint *)((long)plVar9 + (0x20 - DAT_04c4cb80));
      }
      FUN_03c662b0();
      plVar7 = DAT_04c4cb68;
    }
LAB_03c665f8:
    uVar10 = uVar10 + 1;
    if (uVar3 < uVar10) {
      do {
        iVar6 = DAT_04c4cb88;
        cVar2 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(0x4c4cb88,0x10);
        if (bVar5) {
          cVar2 = ExclusiveMonitorsStatus();
          DAT_04c4cb88 = DAT_04c4cb88 + -1;
        }
      } while (cVar2 != '\0');
      if (iVar6 == 1) {
        do {
          iVar6 = DAT_04c4cc28;
          cVar2 = '\x01';
          bVar5 = (bool)ExclusiveMonitorPass(0x4c4cc28,0x10);
          if (bVar5) {
            cVar2 = ExclusiveMonitorsStatus();
            DAT_04c4cc28 = DAT_04c4cc28 + -1;
          }
        } while (cVar2 != '\0');
        if (iVar6 != 1) {
          nn::os::ReleaseSemaphore((SemaphoreType *)&DAT_04c4cc00);
          return;
        }
      }
      return;
    }
  } while( true );
}

