
void FUN_03603d40(long param_1)

{
  ulong uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  uint *puVar12;
  uint *puVar13;
  
  bVar4 = *(byte *)(param_1 + 0x138);
  uVar8 = (ulong)bVar4;
  if (bVar4 < 2 || *(char *)(param_1 + 0x139) == '\0') {
    if (bVar4 != 0) {
      uVar10 = 0;
      do {
        lVar11 = *(long *)(param_1 + uVar10 * 8 + 0x140);
        uVar2 = *(uint *)(lVar11 + 0xe0);
        uVar9 = (ulong)uVar2;
        uVar3 = *(uint *)(lVar11 + 0xe4);
        uVar1 = (uVar3 - uVar9) + 4;
        if (uVar2 <= uVar3) {
          uVar1 = (ulong)(uVar3 - uVar2);
        }
        if (uVar1 != 0) {
          do {
            puVar13 = (uint *)(lVar11 + 0xe0);
            *puVar13 = (int)uVar9 + 1U & 3;
            uVar7 = *(undefined8 *)(puVar13 + uVar9 * 2 + 2);
            *(undefined8 *)(lVar11 + 0x4130) = *(undefined8 *)(lVar11 + 0x4128);
            *(undefined8 *)(lVar11 + 0x4128) = uVar7;
            FUN_035c4240(lVar11 + 0x438);
            uVar2 = *puVar13;
            uVar9 = (ulong)uVar2;
            uVar3 = *(uint *)(lVar11 + 0xe4);
            uVar8 = (uVar3 - uVar9) + 4;
            if (uVar2 <= uVar3) {
              uVar8 = (ulong)(uVar3 - uVar2);
            }
          } while (uVar8 != 0);
          uVar8 = (ulong)*(byte *)(param_1 + 0x138);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < uVar8);
    }
  }
  else {
    puVar13 = (uint *)(param_1 + 0xc44);
    if ((*(uint *)(param_1 + 0xc44) >> 1 & 1) == 0) {
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = *puVar13 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(param_1 + 0x140);
      uVar2 = *(uint *)(lVar11 + 0xe0);
      uVar10 = (ulong)uVar2;
      uVar3 = *(uint *)(lVar11 + 0xe4);
      uVar8 = (uVar3 - uVar10) + 4;
      if (uVar2 <= uVar3) {
        uVar8 = (ulong)(uVar3 - uVar2);
      }
      if (uVar8 != 0) {
        do {
          puVar12 = (uint *)(lVar11 + 0xe0);
          *puVar12 = (int)uVar10 + 1U & 3;
          uVar7 = *(undefined8 *)(puVar12 + uVar10 * 2 + 2);
          *(undefined8 *)(lVar11 + 0x4130) = *(undefined8 *)(lVar11 + 0x4128);
          *(undefined8 *)(lVar11 + 0x4128) = uVar7;
          FUN_035c4240(lVar11 + 0x438);
          uVar2 = *puVar12;
          uVar10 = (ulong)uVar2;
          uVar3 = *(uint *)(lVar11 + 0xe4);
          uVar8 = (uVar3 - uVar10) + 4;
          if (uVar2 <= uVar3) {
            uVar8 = (ulong)(uVar3 - uVar2);
          }
        } while (uVar8 != 0);
      }
      while ((*puVar13 >> 3 & 1) != 0) {
        Yield();
      }
    }
    else {
      if ((*puVar13 >> 1 & 1) != 0) {
        do {
          cVar5 = '\x01';
          bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
          if (bVar6) {
            *puVar13 = *puVar13 & 0xfffffffd;
            cVar5 = ExclusiveMonitorsStatus();
          }
        } while (cVar5 != '\0');
        nn::os::SignalLightEvent((LightEventType *)(param_1 + 0xc38));
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = *puVar13 | 8;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
      lVar11 = *(long *)(param_1 + 0x140);
      uVar2 = *(uint *)(lVar11 + 0xe0);
      uVar10 = (ulong)uVar2;
      uVar3 = *(uint *)(lVar11 + 0xe4);
      uVar8 = (uVar3 - uVar10) + 4;
      if (uVar2 <= uVar3) {
        uVar8 = (ulong)(uVar3 - uVar2);
      }
      if (uVar8 != 0) {
        do {
          puVar12 = (uint *)(lVar11 + 0xe0);
          *puVar12 = (int)uVar10 + 1U & 3;
          uVar7 = *(undefined8 *)(puVar12 + uVar10 * 2 + 2);
          *(undefined8 *)(lVar11 + 0x4130) = *(undefined8 *)(lVar11 + 0x4128);
          *(undefined8 *)(lVar11 + 0x4128) = uVar7;
          FUN_035c4240(lVar11 + 0x438);
          uVar2 = *puVar12;
          uVar10 = (ulong)uVar2;
          uVar3 = *(uint *)(lVar11 + 0xe4);
          uVar8 = (uVar3 - uVar10) + 4;
          if (uVar2 <= uVar3) {
            uVar8 = (ulong)(uVar3 - uVar2);
          }
        } while (uVar8 != 0);
      }
      while ((*puVar13 >> 3 & 1) != 0) {
        Yield();
      }
      do {
        cVar5 = '\x01';
        bVar6 = (bool)ExclusiveMonitorPass(puVar13,0x10);
        if (bVar6) {
          *puVar13 = *puVar13 | 2;
          cVar5 = ExclusiveMonitorsStatus();
        }
      } while (cVar5 != '\0');
    }
  }
  return;
}

