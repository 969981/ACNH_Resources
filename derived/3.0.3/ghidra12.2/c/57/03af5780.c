
void FUN_03af5780(long param_1,uint param_2)

{
  uint *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  
  puVar7 = PTR_DAT_04bb31c8;
  lVar9 = *(long *)(param_1 + 0x10);
  lVar10 = *(long *)PTR_DAT_04bb31c8;
  if (*(uint *)(param_1 + 8) <= param_2) {
    param_2 = 0;
  }
  lVar12 = lVar9 + (long)(int)param_2 * 0x23c0;
  puVar11 = *(undefined4 **)(lVar10 + 0x18);
  *(undefined4 *)(lVar12 + 0x708) = *puVar11;
  *(undefined4 *)(lVar12 + 0x70c) = puVar11[1];
  *(undefined8 *)(lVar12 + 0x710) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(lVar12 + 0x718) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(lVar12 + 0x720) = puVar11[6];
  *(undefined4 *)(lVar12 + 0x724) = puVar11[7];
  *(undefined8 *)(lVar12 + 0x728) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(lVar12 + 0x730) = *(undefined8 *)(puVar11 + 10);
  uVar2 = *(undefined8 *)(puVar11 + 0xc);
  uVar3 = *(undefined8 *)(puVar11 + 0xe);
  uVar8 = *(undefined8 *)(puVar11 + 0x10);
  *(undefined8 *)(lVar12 + 0x74f) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(lVar12 + 0x748) = uVar8;
  *(undefined8 *)(lVar12 + 0x740) = uVar3;
  *(undefined8 *)(lVar12 + 0x738) = uVar2;
  FUN_038fd1e0(lVar12 + 0x758);
  FUN_038fd2f0(lVar12 + 0x758,puVar11 + 0x14);
  uVar4 = puVar11[0x26];
  *(undefined8 *)(lVar12 + 0x798) = *(undefined8 *)(puVar11 + 0x24);
  puVar1 = (uint *)(lVar12 + 0x7dc);
  *(undefined4 *)(lVar12 + 0x7a0) = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar11 = *(undefined4 **)(lVar10 + 0xb8);
  *(undefined4 *)(lVar12 + 0x7e8) = *puVar11;
  *(undefined4 *)(lVar12 + 0x7ec) = puVar11[1];
  *(undefined8 *)(lVar12 + 0x7f0) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(lVar12 + 0x7f8) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(lVar12 + 0x800) = puVar11[6];
  *(undefined4 *)(lVar12 + 0x804) = puVar11[7];
  *(undefined8 *)(lVar12 + 0x808) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(lVar12 + 0x810) = *(undefined8 *)(puVar11 + 10);
  uVar2 = *(undefined8 *)(puVar11 + 0xc);
  uVar3 = *(undefined8 *)(puVar11 + 0xe);
  uVar8 = *(undefined8 *)(puVar11 + 0x10);
  *(undefined8 *)(lVar12 + 0x82f) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(lVar12 + 0x828) = uVar8;
  *(undefined8 *)(lVar12 + 0x820) = uVar3;
  *(undefined8 *)(lVar12 + 0x818) = uVar2;
  FUN_038fd1e0(lVar12 + 0x838);
  FUN_038fd2f0(lVar12 + 0x838,puVar11 + 0x14);
  uVar4 = puVar11[0x26];
  *(undefined8 *)(lVar12 + 0x878) = *(undefined8 *)(puVar11 + 0x24);
  puVar1 = (uint *)(lVar12 + 0x8bc);
  *(undefined4 *)(lVar12 + 0x880) = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)puVar7;
  puVar11 = *(undefined4 **)(lVar10 + 0x18);
  *(undefined4 *)(lVar12 + 0xec8) = *puVar11;
  *(undefined4 *)(lVar12 + 0xecc) = puVar11[1];
  *(undefined8 *)(lVar12 + 0xed0) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(lVar12 + 0xed8) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(lVar12 + 0xee0) = puVar11[6];
  *(undefined4 *)(lVar12 + 0xee4) = puVar11[7];
  *(undefined8 *)(lVar12 + 0xee8) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(lVar12 + 0xef0) = *(undefined8 *)(puVar11 + 10);
  uVar2 = *(undefined8 *)(puVar11 + 0xc);
  uVar3 = *(undefined8 *)(puVar11 + 0xe);
  uVar8 = *(undefined8 *)(puVar11 + 0x10);
  *(undefined8 *)(lVar12 + 0xf0f) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(lVar12 + 0xf08) = uVar8;
  *(undefined8 *)(lVar12 + 0xf00) = uVar3;
  *(undefined8 *)(lVar12 + 0xef8) = uVar2;
  FUN_038fd1e0(lVar12 + 0xf18);
  FUN_038fd2f0(lVar12 + 0xf18,puVar11 + 0x14);
  uVar4 = puVar11[0x26];
  *(undefined8 *)(lVar12 + 0xf58) = *(undefined8 *)(puVar11 + 0x24);
  puVar1 = (uint *)(lVar12 + 0xf9c);
  *(undefined4 *)(lVar12 + 0xf60) = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar11 = *(undefined4 **)(lVar10 + 0xb8);
  *(undefined4 *)(lVar12 + 0xfa8) = *puVar11;
  *(undefined4 *)(lVar12 + 0xfac) = puVar11[1];
  *(undefined8 *)(lVar12 + 0xfb0) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(lVar12 + 0xfb8) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(lVar12 + 0xfc0) = puVar11[6];
  *(undefined4 *)(lVar12 + 0xfc4) = puVar11[7];
  *(undefined8 *)(lVar12 + 0xfc8) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(lVar12 + 0xfd0) = *(undefined8 *)(puVar11 + 10);
  uVar2 = *(undefined8 *)(puVar11 + 0xc);
  uVar3 = *(undefined8 *)(puVar11 + 0xe);
  uVar8 = *(undefined8 *)(puVar11 + 0x10);
  *(undefined8 *)(lVar12 + 0xfef) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(lVar12 + 0xfe8) = uVar8;
  *(undefined8 *)(lVar12 + 0xfe0) = uVar3;
  *(undefined8 *)(lVar12 + 0xfd8) = uVar2;
  FUN_038fd1e0(lVar12 + 0xff8);
  FUN_038fd2f0(lVar12 + 0xff8,puVar11 + 0x14);
  uVar4 = puVar11[0x26];
  *(undefined8 *)(lVar12 + 0x1038) = *(undefined8 *)(puVar11 + 0x24);
  puVar1 = (uint *)(lVar12 + 0x107c);
  *(undefined4 *)(lVar12 + 0x1040) = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar10 = *(long *)puVar7;
  puVar11 = *(undefined4 **)(lVar10 + 0x18);
  *(undefined4 *)(lVar12 + 0x1688) = *puVar11;
  *(undefined4 *)(lVar12 + 0x168c) = puVar11[1];
  *(undefined8 *)(lVar12 + 0x1690) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(lVar12 + 0x1698) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(lVar12 + 0x16a0) = puVar11[6];
  *(undefined4 *)(lVar12 + 0x16a4) = puVar11[7];
  *(undefined8 *)(lVar12 + 0x16a8) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(lVar12 + 0x16b0) = *(undefined8 *)(puVar11 + 10);
  uVar8 = *(undefined8 *)(puVar11 + 0x10);
  uVar2 = *(undefined8 *)(puVar11 + 0xc);
  uVar3 = *(undefined8 *)(puVar11 + 0xe);
  *(undefined8 *)(lVar12 + 0x16cf) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(lVar12 + 0x16c8) = uVar8;
  *(undefined8 *)(lVar12 + 0x16c0) = uVar3;
  *(undefined8 *)(lVar12 + 0x16b8) = uVar2;
  FUN_038fd1e0(lVar12 + 0x16d8);
  FUN_038fd2f0(lVar12 + 0x16d8,puVar11 + 0x14);
  uVar4 = puVar11[0x26];
  *(undefined8 *)(lVar12 + 0x1718) = *(undefined8 *)(puVar11 + 0x24);
  *(undefined4 *)(lVar12 + 0x1720) = uVar4;
  puVar1 = (uint *)(lVar12 + 0x175c);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar11 = *(undefined4 **)(lVar10 + 0xb8);
  *(undefined4 *)(lVar12 + 0x1768) = *puVar11;
  *(undefined4 *)(lVar12 + 0x176c) = puVar11[1];
  *(undefined8 *)(lVar12 + 6000) = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(lVar12 + 0x1778) = *(undefined8 *)(puVar11 + 4);
  *(undefined4 *)(lVar12 + 0x1780) = puVar11[6];
  *(undefined4 *)(lVar12 + 0x1784) = puVar11[7];
  *(undefined8 *)(lVar12 + 0x1788) = *(undefined8 *)(puVar11 + 8);
  *(undefined8 *)(lVar12 + 0x1790) = *(undefined8 *)(puVar11 + 10);
  uVar8 = *(undefined8 *)(puVar11 + 0x10);
  uVar2 = *(undefined8 *)(puVar11 + 0xc);
  uVar3 = *(undefined8 *)(puVar11 + 0xe);
  *(undefined8 *)(lVar12 + 0x17af) = *(undefined8 *)((long)puVar11 + 0x47);
  *(undefined8 *)(lVar12 + 0x17a8) = uVar8;
  *(undefined8 *)(lVar12 + 0x17a0) = uVar3;
  *(undefined8 *)(lVar12 + 0x1798) = uVar2;
  FUN_038fd1e0(lVar12 + 0x17b8);
  FUN_038fd2f0(lVar12 + 0x17b8,puVar11 + 0x14);
  uVar4 = puVar11[0x26];
  *(undefined8 *)(lVar12 + 0x17f8) = *(undefined8 *)(puVar11 + 0x24);
  *(undefined4 *)(lVar12 + 0x1800) = uVar4;
  puVar1 = (uint *)(lVar12 + 0x183c);
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  lVar9 = lVar9 + (long)(int)param_2 * 0x23c0;
  FUN_039cf910(*(undefined8 *)(lVar9 + 0x1fa8));
  *(undefined4 *)(lVar9 + 8) = 0;
  *(undefined4 *)(*(long *)(lVar9 + 0x1fa8) + 0xbc0) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(long *)(lVar9 + 0x1fa8) + 0xcc0) = *(undefined4 *)(param_1 + 0x34);
  *(undefined4 *)(*(long *)(lVar9 + 0x1fa8) + 0xdc0) = *(undefined4 *)(param_1 + 0x38);
  return;
}

