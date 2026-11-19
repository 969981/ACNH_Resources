
void FUN_0391e3b0(undefined4 param_1,long param_2,undefined8 param_3,undefined4 param_4,uint param_5
                 ,uint param_6,uint param_7,ulong param_8)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  undefined1 uVar8;
  byte bVar9;
  char cVar10;
  bool bVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined2 local_f4 [2];
  uint local_f0;
  undefined1 local_8f;
  
  bVar5 = *(byte *)(param_2 + 0x119);
  if (param_5 < bVar5) {
    uVar6 = *(undefined1 *)(param_2 + 0xc5);
    uVar7 = *(undefined1 *)(param_2 + 0xc4);
    uVar15 = *(undefined4 *)(param_2 + 0xb8);
    uVar14 = *(undefined4 *)(param_2 + 0xbc);
    uVar13 = *(undefined4 *)(param_2 + 0xc0);
    puVar1 = (uint *)(param_2 + 0xd4);
    *(undefined4 *)(param_2 + 0xb8) = 0;
    uVar8 = *(undefined1 *)(param_2 + 0xc6);
    bVar9 = *(byte *)(param_2 + 0xd8);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(float *)(param_2 + 0xbc) = (float)bVar5;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(undefined4 *)(param_2 + 0xc0) = 0;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(undefined2 *)(param_2 + 0xc4) = 0x101;
    *(undefined1 *)(param_2 + 0xc6) = 1;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    bVar2 = 0x20;
    if ((param_8 & 1) == 0) {
      bVar2 = 0;
    }
    *(byte *)(param_2 + 0xd8) = *(byte *)(param_2 + 0xd8) & 0xdf | bVar2;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xffffffbf | 0x40;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    uVar3 = (uint)bVar5;
    if (param_6 <= bVar5) {
      uVar3 = param_6;
    }
    uVar4 = param_7;
    if (param_7 < 2) {
      uVar4 = 1;
    }
    uVar12 = 0;
    if (param_7 != 0) {
      uVar12 = param_1;
    }
    FUN_038e4cec(local_f4);
    local_f4[0] = 0;
    local_8f = 0;
    local_f0 = local_f0 & 0xfffffffe;
    FUN_038e4d90(local_f4,param_3);
    if (param_5 < uVar3) {
      do {
        FUN_0391dd60(uVar12,param_2,param_3,param_2,param_4,param_5 - 1,param_4,param_5,uVar4);
        param_5 = param_5 + 1;
      } while (uVar3 != param_5);
    }
    *(undefined4 *)(param_2 + 0xb8) = uVar15;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(undefined4 *)(param_2 + 0xbc) = uVar14;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(undefined4 *)(param_2 + 0xc0) = uVar13;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffff7 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(undefined1 *)(param_2 + 0xc4) = uVar7;
    *(undefined1 *)(param_2 + 0xc5) = uVar6;
    *(undefined1 *)(param_2 + 0xc6) = uVar8;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xfffffffb | 4;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    *(byte *)(param_2 + 0xd8) = *(byte *)(param_2 + 0xd8) & 0xdf | bVar9 & 0x20;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar11) {
        *puVar1 = *puVar1 & 0xffffffbf | 0x40;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
  }
  return;
}

