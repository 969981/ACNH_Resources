
void FUN_0392c510(long param_1,undefined8 param_2,uint param_3,undefined8 param_4,
                 undefined4 *param_5)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 *puVar8;
  
  if (*(char *)(param_1 + 0x218) == '\0') {
    return;
  }
  if (*(uint *)(param_1 + 0x2320) <= param_3) {
    param_3 = 0;
  }
  puVar8 = (undefined4 *)(*(long *)(param_1 + 9000) + (long)(int)param_3 * 0xe0);
  *puVar8 = *param_5;
  puVar8[1] = param_5[1];
  *(undefined8 *)(puVar8 + 2) = *(undefined8 *)(param_5 + 2);
  *(undefined8 *)(puVar8 + 4) = *(undefined8 *)(param_5 + 4);
  puVar8[6] = param_5[6];
  puVar8[7] = param_5[7];
  *(undefined8 *)(puVar8 + 8) = *(undefined8 *)(param_5 + 8);
  *(undefined8 *)(puVar8 + 10) = *(undefined8 *)(param_5 + 10);
  uVar2 = *(undefined8 *)(param_5 + 0xc);
  uVar3 = *(undefined8 *)(param_5 + 0xe);
  uVar7 = *(undefined8 *)(param_5 + 0x10);
  *(undefined8 *)((long)puVar8 + 0x47) = *(undefined8 *)((long)param_5 + 0x47);
  *(undefined8 *)(puVar8 + 0xc) = uVar2;
  *(undefined8 *)(puVar8 + 0xe) = uVar3;
  *(undefined8 *)(puVar8 + 0x10) = uVar7;
  FUN_038fd1e0(puVar8 + 0x14);
  FUN_038fd2f0(puVar8 + 0x14,param_5 + 0x14);
  uVar4 = param_5[0x26];
  *(undefined8 *)(puVar8 + 0x24) = *(undefined8 *)(param_5 + 0x24);
  puVar1 = puVar8 + 0x35;
  puVar8[0x26] = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0392c640(param_1,param_2);
  return;
}

