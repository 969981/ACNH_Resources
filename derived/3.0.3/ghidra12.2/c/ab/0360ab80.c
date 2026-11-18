
void FUN_0360ab80(long param_1)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  
  *(undefined4 *)(param_1 + 0x14b0) = 1;
  *(undefined4 *)(param_1 + 0x1070) = 0;
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1488));
  nn::os::SignalLightEvent((LightEventType *)(param_1 + 0x1494));
  uVar8 = *(ulong *)(param_1 + 0x1480);
  uVar9 = *(ulong *)(param_1 + 0x1478);
  if (uVar9 != uVar8) {
    puVar1 = (uint *)(param_1 + 0x400);
    do {
      uVar9 = uVar9 & 0x7f;
      uVar8 = uVar8 & 0x7f;
      if (uVar8 <= uVar9) {
        uVar8 = 0x80;
      }
      uVar8 = uVar8 - uVar9;
      lVar10 = param_1 + uVar9 * 8 + 0x1078;
      if (1 < uVar8) {
        uVar9 = 0;
LAB_0360ad10:
        uVar7 = *(undefined8 *)(lVar10 + uVar9 * 8);
        do {
          uVar2 = *(uint *)(param_1 + 0x400);
          *(undefined8 *)(param_1 + (ulong)uVar2 * 8) = uVar7;
          DataMemoryBarrier(2,3);
          while (*puVar1 == uVar2) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') {
              uVar7 = *(undefined8 *)(lVar10 + (uVar9 << 3 | 8));
              goto LAB_0360ad64;
            }
          }
          ClearExclusiveLocal();
        } while( true );
      }
      uVar9 = 0;
      uVar5 = 1;
LAB_0360ad94:
      if ((uVar5 & 1) != 0) {
        uVar7 = *(undefined8 *)(lVar10 + uVar9 * 8);
        do {
          uVar2 = *(uint *)(param_1 + 0x400);
          *(undefined8 *)(param_1 + (ulong)uVar2 * 8) = uVar7;
          DataMemoryBarrier(2,3);
          while (*puVar1 == uVar2) {
            cVar3 = '\x01';
            bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
            if (bVar4) {
              *puVar1 = uVar2 + 1;
              cVar3 = ExclusiveMonitorsStatus();
            }
            if (cVar3 == '\0') goto LAB_0360acb0;
          }
          ClearExclusiveLocal();
        } while( true );
      }
LAB_0360acb0:
      *(long *)(param_1 + 0x1478) = *(long *)(param_1 + 0x1478) + uVar8;
      uVar8 = *(ulong *)(param_1 + 0x1480);
      uVar9 = *(ulong *)(param_1 + 0x1478);
    } while (uVar9 != uVar8);
  }
  FUN_04002c24(param_1 + 0xe00);
  uVar7 = *(undefined8 *)(param_1 + 0x14a8);
  puVar1 = (uint *)(param_1 + 0x400);
  do {
    uVar2 = *(uint *)(param_1 + 0x400);
    *(undefined8 *)(param_1 + (ulong)uVar2 * 8) = uVar7;
    DataMemoryBarrier(2,3);
    while (*puVar1 == uVar2) {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar4) {
        *puVar1 = uVar2 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      if (cVar3 == '\0') {
        *(undefined8 *)(param_1 + 0x14a8) = 0;
        puVar6 = PTR_DAT_04bdf328;
        lVar10 = 0;
        do {
          (**(code **)(**(long **)puVar6 + 0x18))
                    (*(long **)puVar6,*(undefined8 *)(param_1 + lVar10));
          lVar10 = lVar10 + 8;
        } while (lVar10 != 0x400);
        *(undefined4 *)(param_1 + 0x400) = 0;
        *(undefined4 *)(param_1 + 0x950) = 0xffffffff;
        memset((void *)(param_1 + 0x550),0,0x400);
        return;
      }
    }
    ClearExclusiveLocal();
  } while( true );
LAB_0360ad64:
  uVar2 = *(uint *)(param_1 + 0x400);
  *(undefined8 *)(param_1 + (ulong)uVar2 * 8) = uVar7;
  DataMemoryBarrier(2,3);
  while (*puVar1 == uVar2) {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar4) {
      *puVar1 = uVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
    if (cVar3 == '\0') {
      uVar9 = uVar9 + 2;
      uVar5 = uVar8;
      if (uVar9 == (uVar8 & 0xfffffffffffffffe)) goto LAB_0360ad94;
      goto LAB_0360ad10;
    }
  }
  ClearExclusiveLocal();
  goto LAB_0360ad64;
}

