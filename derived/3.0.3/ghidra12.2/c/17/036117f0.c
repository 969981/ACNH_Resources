
void FUN_036117f0(long param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  ushort uVar3;
  char cVar4;
  bool bVar5;
  code *pcVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  
  if (*(int *)(*(long *)(param_1 + 0x14a8) + 0x200) == 0) {
    if ((param_2 & 1) == 0) {
      return;
    }
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1488));
    return;
  }
  uVar3 = *(ushort *)(param_1 + 0x106e);
  while (uVar7 = *(ulong *)(param_1 + 0x1480), 0x7f < uVar7 - *(long *)(param_1 + 0x1478)) {
    nn::os::WaitLightEvent((LightEventType *)(param_1 + 0x1494));
  }
  *(undefined8 *)(param_1 + (uVar7 & 0x7f) * 8 + 0x1078) = *(undefined8 *)(param_1 + 0x14a8);
  *(ulong *)(param_1 + 0x1480) = uVar7 + 1;
  if (((0x40 < uVar3) || ((uVar3 & 0xfff7) == 0x30)) || ((param_2 & 1) != 0)) {
    nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1488));
  }
  puVar1 = (uint *)(param_1 + 0x400);
  *(short *)(param_1 + 0x106e) = *(short *)(param_1 + 0x106e) + 1;
  uVar2 = *puVar1;
  while (uVar2 != 0) {
    DataMemoryBarrier(2,1);
    lVar8 = *(long *)(param_1 + (ulong)(uVar2 - 1) * 8);
    while (*puVar1 == uVar2) {
      cVar4 = '\x01';
      bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar5) {
        *puVar1 = uVar2 - 1;
        cVar4 = ExclusiveMonitorsStatus();
      }
      if (cVar4 == '\0') {
        *(undefined4 *)(lVar8 + 0x200) = 0;
        *(long *)(param_1 + 0x14a8) = lVar8;
        return;
      }
    }
    ClearExclusiveLocal();
    uVar2 = *puVar1;
  }
  lVar8 = 0;
  *(undefined8 *)(param_1 + 0x14a8) = 0;
  do {
    nn::os::SleepThread(100000);
    uVar2 = *puVar1;
    while (uVar2 != 0) {
      DataMemoryBarrier(2,1);
      lVar9 = *(long *)(param_1 + (ulong)(uVar2 - 1) * 8);
      while (*puVar1 == uVar2) {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar5) {
          *puVar1 = uVar2 - 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
        if (cVar4 == '\0') {
          *(undefined4 *)(lVar9 + 0x200) = 0;
          *(long *)(param_1 + 0x14a8) = lVar9;
          if (lVar9 != 0) {
            return;
          }
          goto LAB_0361190c;
        }
      }
      ClearExclusiveLocal();
      uVar2 = *puVar1;
    }
    *(undefined8 *)(param_1 + 0x14a8) = 0;
LAB_0361190c:
    lVar8 = lVar8 + 1;
    if (lVar8 == 100) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)UndefinedInstructionException(0x8002,0x36119a4);
      (*pcVar6)();
    }
  } while( true );
}

