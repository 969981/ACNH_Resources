
void FUN_0390d060(undefined4 *param_1,undefined4 *param_2)

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
  puVar1 = param_1 + 0x35;
  param_1[0x26] = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}

