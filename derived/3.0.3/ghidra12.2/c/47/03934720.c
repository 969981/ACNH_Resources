
void FUN_03934720(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 *param_5,undefined8 param_6,long param_7,undefined4 *param_8,
                 undefined1 param_9,undefined1 param_10)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  ushort uVar5;
  short sVar6;
  char cVar7;
  bool bVar8;
  uint uVar9;
  undefined8 uVar10;
  long lVar11;
  
  *(undefined4 **)(param_3 + 2) = param_5;
  *(undefined8 *)(param_3 + 4) = param_6;
  *param_3 = param_4;
  param_3[1] = 1;
  *(long *)(param_3 + 6) = param_7;
  param_3[8] = param_1;
  param_3[9] = param_2;
  uVar5 = *(ushort *)(*(long *)(param_7 + 0x20) + 0x38);
  uVar9 = (uint)uVar5;
  if (uVar5 < 2) {
    uVar9 = 1;
  }
  param_3[10] = uVar9;
  sVar6 = *(short *)(*(long *)(param_7 + 0x20) + 0x42);
  uVar5 = *(ushort *)(*(long *)(param_7 + 0x20) + 0x3a);
  *(undefined1 *)(param_3 + 0xc) = param_9;
  *(undefined1 *)((long)param_3 + 0x31) = param_10;
  uVar9 = (uint)uVar5;
  if (sVar6 != 3) {
    uVar9 = 1;
  }
  if (uVar9 == uVar5 || uVar9 < uVar5) {
    uVar9 = (uint)uVar5;
  }
  param_3[0xb] = uVar9;
  lVar11 = *(long *)(param_7 + 0x20);
  *param_5 = *(undefined4 *)(lVar11 + 8);
  param_5[1] = *(undefined4 *)(lVar11 + 0xc);
  *(undefined8 *)(param_5 + 2) = *(undefined8 *)(lVar11 + 0x10);
  *(undefined8 *)(param_5 + 4) = *(undefined8 *)(lVar11 + 0x18);
  param_5[6] = *(undefined4 *)(lVar11 + 0x20);
  param_5[7] = *(undefined4 *)(lVar11 + 0x24);
  *(undefined8 *)(param_5 + 8) = *(undefined8 *)(lVar11 + 0x28);
  *(undefined8 *)(param_5 + 10) = *(undefined8 *)(lVar11 + 0x30);
  uVar2 = *(undefined8 *)(lVar11 + 0x38);
  uVar3 = *(undefined8 *)(lVar11 + 0x40);
  uVar10 = *(undefined8 *)(lVar11 + 0x48);
  *(undefined8 *)((long)param_5 + 0x47) = *(undefined8 *)(lVar11 + 0x4f);
  *(undefined8 *)(param_5 + 0xc) = uVar2;
  *(undefined8 *)(param_5 + 0xe) = uVar3;
  *(undefined8 *)(param_5 + 0x10) = uVar10;
  FUN_038fd1e0(param_5 + 0x14);
  FUN_038fd2f0(param_5 + 0x14,lVar11 + 0x58);
  uVar4 = *(undefined4 *)(lVar11 + 0xa0);
  *(undefined8 *)(param_5 + 0x24) = *(undefined8 *)(lVar11 + 0x98);
  puVar1 = param_5 + 0x35;
  param_5[0x26] = uVar4;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  lVar11 = *(long *)(param_3 + 2);
  *(undefined4 *)(lVar11 + 0xe0) = *param_8;
  *(undefined4 *)(lVar11 + 0xe4) = param_8[1];
  *(undefined8 *)(lVar11 + 0xe8) = *(undefined8 *)(param_8 + 2);
  *(undefined8 *)(lVar11 + 0xf0) = *(undefined8 *)(param_8 + 4);
  *(undefined4 *)(lVar11 + 0xf8) = param_8[6];
  *(undefined4 *)(lVar11 + 0xfc) = param_8[7];
  *(undefined8 *)(lVar11 + 0x100) = *(undefined8 *)(param_8 + 8);
  *(undefined8 *)(lVar11 + 0x108) = *(undefined8 *)(param_8 + 10);
  uVar2 = *(undefined8 *)(param_8 + 0xc);
  uVar3 = *(undefined8 *)(param_8 + 0xe);
  uVar10 = *(undefined8 *)(param_8 + 0x10);
  *(undefined8 *)(lVar11 + 0x127) = *(undefined8 *)((long)param_8 + 0x47);
  *(undefined8 *)(lVar11 + 0x118) = uVar3;
  *(undefined8 *)(lVar11 + 0x120) = uVar10;
  *(undefined8 *)(lVar11 + 0x110) = uVar2;
  FUN_038fd1e0(lVar11 + 0x130);
  FUN_038fd2f0(lVar11 + 0x130,param_8 + 0x14);
  uVar4 = param_8[0x26];
  *(undefined8 *)(lVar11 + 0x170) = *(undefined8 *)(param_8 + 0x24);
  puVar1 = (uint *)(lVar11 + 0x1b4);
  *(undefined4 *)(lVar11 + 0x178) = uVar4;
  do {
    cVar7 = '\x01';
    bVar8 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar8) {
      *puVar1 = *puVar1 | 1;
      cVar7 = ExclusiveMonitorsStatus();
    }
  } while (cVar7 != '\0');
  return;
}

