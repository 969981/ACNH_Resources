
void FUN_0392c3e0(long param_1,undefined8 param_2,uint param_3,long param_4)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined8 uVar7;
  long lVar8;
  undefined4 *puVar9;
  
  if (*(char *)(param_1 + 0x218) == '\0') {
    return;
  }
  lVar8 = *(long *)(param_4 + 0x20);
  if (*(uint *)(param_1 + 0x2320) <= param_3) {
    param_3 = 0;
  }
  puVar9 = (undefined4 *)(*(long *)(param_1 + 9000) + (long)(int)param_3 * 0xe0);
  *puVar9 = *(undefined4 *)(lVar8 + 8);
  puVar9[1] = *(undefined4 *)(lVar8 + 0xc);
  *(undefined8 *)(puVar9 + 2) = *(undefined8 *)(lVar8 + 0x10);
  *(undefined8 *)(puVar9 + 4) = *(undefined8 *)(lVar8 + 0x18);
  puVar9[6] = *(undefined4 *)(lVar8 + 0x20);
  puVar9[7] = *(undefined4 *)(lVar8 + 0x24);
  *(undefined8 *)(puVar9 + 8) = *(undefined8 *)(lVar8 + 0x28);
  *(undefined8 *)(puVar9 + 10) = *(undefined8 *)(lVar8 + 0x30);
  uVar2 = *(undefined8 *)(lVar8 + 0x38);
  uVar3 = *(undefined8 *)(lVar8 + 0x40);
  uVar7 = *(undefined8 *)(lVar8 + 0x48);
  *(undefined8 *)((long)puVar9 + 0x47) = *(undefined8 *)(lVar8 + 0x4f);
  *(undefined8 *)(puVar9 + 0xc) = uVar2;
  *(undefined8 *)(puVar9 + 0xe) = uVar3;
  *(undefined8 *)(puVar9 + 0x10) = uVar7;
  FUN_038fd1e0(puVar9 + 0x14);
  FUN_038fd2f0(puVar9 + 0x14,lVar8 + 0x58);
  uVar4 = *(undefined4 *)(lVar8 + 0xa0);
  *(undefined8 *)(puVar9 + 0x24) = *(undefined8 *)(lVar8 + 0x98);
  puVar1 = puVar9 + 0x35;
  puVar9[0x26] = uVar4;
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

