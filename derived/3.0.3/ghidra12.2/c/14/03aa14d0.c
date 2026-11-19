
void FUN_03aa14d0(long param_1,undefined8 param_2,undefined4 *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  short sVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  undefined8 uVar12;
  uint uVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  
  sVar6 = *(short *)((long)param_3 + 0x3a);
  uVar7 = *(ushort *)(param_3 + 0x26);
  uVar8 = *(ushort *)((long)param_3 + 0x32);
  uVar9 = *(ushort *)(param_3 + 0xc);
  *(undefined4 **)(param_1 + 8) = param_3;
  uVar2 = (uint)uVar8;
  if (sVar6 != 3) {
    uVar2 = 1;
  }
  *(bool *)(param_1 + 0x359) = uVar7 - 0x59 < 4;
  *(undefined4 *)(param_1 + 0x10) = *param_3;
  *(undefined4 *)(param_1 + 0x14) = param_3[1];
  *(undefined8 *)(param_1 + 0x18) = *(undefined8 *)(param_3 + 2);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 0x28) = param_3[6];
  *(undefined4 *)(param_1 + 0x2c) = param_3[7];
  *(undefined8 *)(param_1 + 0x30) = *(undefined8 *)(param_3 + 8);
  *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(param_3 + 10);
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  uVar4 = *(undefined8 *)(param_3 + 0xe);
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)(param_1 + 0x57) = *(undefined8 *)((long)param_3 + 0x47);
  *(undefined8 *)(param_1 + 0x48) = uVar4;
  *(undefined8 *)(param_1 + 0x50) = uVar12;
  *(undefined8 *)(param_1 + 0x40) = uVar3;
  FUN_038fd1e0(param_1 + 0x60);
  FUN_038fd2f0(param_1 + 0x60,param_3 + 0x14);
  uVar5 = param_3[0x26];
  *(undefined8 *)(param_1 + 0xa0) = *(undefined8 *)(param_3 + 0x24);
  puVar1 = (uint *)(param_1 + 0xe4);
  *(undefined4 *)(param_1 + 0xa8) = uVar5;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)(param_1 + 0xd4) = 0x101;
  *(undefined1 *)(param_1 + 0xd6) = 1;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = *puVar1 | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined8 *)(param_1 + 0x110) = 0;
  uVar13 = (uint)uVar9;
  if (uVar9 < 2) {
    uVar13 = 1;
  }
  if (uVar2 == uVar8 || uVar2 < uVar8) {
    uVar2 = (uint)uVar8;
  }
  fVar15 = (float)uVar13;
  fVar16 = (float)uVar2;
  *(undefined8 *)(param_1 + 0x148) = 0;
  *(undefined8 *)(param_1 + 0x150) = 0;
  *(undefined8 *)(param_1 + 0x138) = 0;
  *(undefined8 *)(param_1 + 0x140) = 0;
  *(undefined8 *)(param_1 + 0x128) = 0;
  *(undefined8 *)(param_1 + 0x130) = 0;
  *(undefined8 *)(param_1 + 0x118) = 0;
  *(undefined8 *)(param_1 + 0x120) = 0;
  if (*(char *)(param_1 + 0x359) == '\0') {
    FUN_01560750(param_1 + 0x158,*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x216),
                 *(undefined2 *)(param_1 + 0x214));
    *(long *)(param_1 + 0x110) = param_1 + 0x158;
  }
  else {
    FUN_0155a100(param_1 + 0x238,*(undefined8 *)(param_1 + 8),*(undefined1 *)(param_1 + 0x2f6),
                 *(undefined2 *)(param_1 + 0x2f4));
    *(long *)(param_1 + 0x150) = param_1 + 0x238;
  }
  *(float *)(param_1 + 0xf8) = fVar15;
  *(float *)(param_1 + 0xfc) = fVar16;
  *(undefined8 *)(param_1 + 0x100) = 0;
  *(float *)(param_1 + 0x108) = fVar15;
  *(float *)(param_1 + 0x10c) = fVar16;
  *(uint *)(param_1 + 0x340) = uVar13;
  *(uint *)(param_1 + 0x344) = uVar2;
  if (*(uint *)(param_1 + 0x330) < 6) {
    if ((1 << (ulong)(*(uint *)(param_1 + 0x330) & 0x1f) & 0x39U) == 0) {
      fVar14 = fVar16;
    }
    else {
      fVar14 = fVar15;
      fVar15 = fVar16;
    }
    *(undefined8 *)(param_1 + 800) = 0;
    *(float *)(param_1 + 0x328) = fVar14;
    *(float *)(param_1 + 0x32c) = fVar15;
  }
  return;
}

