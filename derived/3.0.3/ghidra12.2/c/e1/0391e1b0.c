
void FUN_0391e1b0(undefined4 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 uint param_9)

{
  uint *puVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  byte bVar5;
  char cVar6;
  bool bVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined2 local_fc [2];
  uint local_f8;
  undefined1 local_97;
  
  uVar2 = *(undefined1 *)(param_2 + 0xc5);
  uVar3 = *(undefined1 *)(param_2 + 0xc4);
  uVar11 = *(undefined4 *)(param_2 + 0xb8);
  uVar10 = *(undefined4 *)(param_2 + 0xbc);
  uVar9 = *(undefined4 *)(param_2 + 0xc0);
  uVar4 = *(undefined1 *)(param_2 + 0xc6);
  bVar5 = *(byte *)(param_2 + 0x119);
  FUN_038e4cec(local_fc);
  local_fc[0] = 0;
  local_97 = 0;
  local_f8 = local_f8 & 0xfffffffe;
  FUN_038e4d90(local_fc,param_3);
  puVar1 = (uint *)(param_2 + 0xd4);
  *(undefined4 *)(param_2 + 0xb8) = 0;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(float *)(param_2 + 0xbc) = (float)bVar5;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_2 + 0xc0) = 0;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined2 *)(param_2 + 0xc4) = 0x101;
  *(undefined1 *)(param_2 + 0xc6) = 2;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  uVar8 = 0;
  if (param_9 != 0) {
    uVar8 = param_1;
  }
  if (param_9 < 2) {
    param_9 = 1;
  }
  FUN_0391dd60(uVar8,param_2,param_3,param_4,param_5,param_6,param_7,param_8,param_9);
  *(undefined4 *)(param_2 + 0xb8) = uVar11;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_2 + 0xbc) = uVar10;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined4 *)(param_2 + 0xc0) = uVar9;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffff7 | 8;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  *(undefined1 *)(param_2 + 0xc4) = uVar3;
  *(undefined1 *)(param_2 + 0xc5) = uVar2;
  *(undefined1 *)(param_2 + 0xc6) = uVar4;
  do {
    cVar6 = '\x01';
    bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar7) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar6 = ExclusiveMonitorsStatus();
    }
  } while (cVar6 != '\0');
  return;
}

