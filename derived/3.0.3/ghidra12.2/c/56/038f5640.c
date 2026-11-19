
void FUN_038f5640(undefined4 *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  *(undefined8 *)(param_1 + 4) = *(undefined8 *)(param_2 + 4);
  param_1[6] = param_2[6];
  param_1[7] = param_2[7];
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
  uVar7 = *(undefined8 *)(param_2 + 0x10);
  uVar2 = *(undefined8 *)(param_2 + 0xc);
  uVar3 = *(undefined8 *)(param_2 + 0xe);
  *(undefined8 *)((long)param_1 + 0x47) = *(undefined8 *)((long)param_2 + 0x47);
  *(undefined8 *)(param_1 + 0xe) = uVar3;
  *(undefined8 *)(param_1 + 0x10) = uVar7;
  *(undefined8 *)(param_1 + 0xc) = uVar2;
  FUN_038fd1e0(param_1 + 0x14);
  FUN_038fd2f0(param_1 + 0x14,param_2 + 0x14);
  uVar4 = param_2[0x26];
  *(undefined8 *)(param_1 + 0x24) = *(undefined8 *)(param_2 + 0x24);
  puVar1 = param_1 + 0x28;
  param_1[0x26] = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (*(ushort *)(param_1 + 0x29) != param_4) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 & 0xfffffffd | 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(short *)(param_1 + 0x29) = (short)param_4;
  }
  if (*(byte *)((long)param_1 + 0xa6) != param_3) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(char *)((long)param_1 + 0xa6) = (char)param_3;
  }
  return;
}

