
void FUN_03aa84b0(undefined8 *param_1,undefined8 param_2,undefined4 *param_3)

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
  *param_1 = param_3;
  uVar2 = (uint)uVar8;
  if (sVar6 != 3) {
    uVar2 = 1;
  }
  *(bool *)((long)param_1 + 0x341) = uVar7 - 0x59 < 4;
  *(undefined4 *)(param_1 + 1) = *param_3;
  *(undefined4 *)((long)param_1 + 0xc) = param_3[1];
  param_1[2] = *(undefined8 *)(param_3 + 2);
  param_1[3] = *(undefined8 *)(param_3 + 4);
  *(undefined4 *)(param_1 + 4) = param_3[6];
  *(undefined4 *)((long)param_1 + 0x24) = param_3[7];
  param_1[5] = *(undefined8 *)(param_3 + 8);
  param_1[6] = *(undefined8 *)(param_3 + 10);
  uVar3 = *(undefined8 *)(param_3 + 0xc);
  uVar4 = *(undefined8 *)(param_3 + 0xe);
  uVar12 = *(undefined8 *)(param_3 + 0x10);
  *(undefined8 *)((long)param_1 + 0x4f) = *(undefined8 *)((long)param_3 + 0x47);
  param_1[8] = uVar4;
  param_1[9] = uVar12;
  param_1[7] = uVar3;
  FUN_038fd1e0(param_1 + 0xb);
  FUN_038fd2f0(param_1 + 0xb,param_3 + 0x14);
  uVar5 = param_3[0x26];
  param_1[0x13] = *(undefined8 *)(param_3 + 0x24);
  puVar1 = (uint *)((long)param_1 + 0xdc);
  *(undefined4 *)(param_1 + 0x14) = uVar5;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = *puVar1 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  *(undefined2 *)((long)param_1 + 0xcc) = 0x101;
  *(undefined1 *)((long)param_1 + 0xce) = 1;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar11) {
      *puVar1 = *puVar1 | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  param_1[0x21] = 0;
  uVar13 = (uint)uVar9;
  if (uVar9 < 2) {
    uVar13 = 1;
  }
  if (uVar2 == uVar8 || uVar2 < uVar8) {
    uVar2 = (uint)uVar8;
  }
  fVar15 = (float)uVar13;
  fVar16 = (float)uVar2;
  param_1[0x28] = 0;
  param_1[0x29] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x24] = 0;
  param_1[0x25] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  if (*(char *)((long)param_1 + 0x341) == '\0') {
    FUN_01560750(param_1 + 0x2a,*param_1,*(undefined1 *)((long)param_1 + 0x20e),
                 *(undefined2 *)((long)param_1 + 0x20c));
    param_1[0x21] = param_1 + 0x2a;
  }
  else {
    FUN_0155a100(param_1 + 0x46,*param_1,*(undefined1 *)((long)param_1 + 0x2ee),
                 *(undefined2 *)((long)param_1 + 0x2ec));
    param_1[0x29] = param_1 + 0x46;
  }
  *(float *)(param_1 + 0x1e) = fVar15;
  *(float *)((long)param_1 + 0xf4) = fVar16;
  param_1[0x1f] = 0;
  *(float *)(param_1 + 0x20) = fVar15;
  *(float *)((long)param_1 + 0x104) = fVar16;
  *(uint *)(param_1 + 0x67) = uVar13;
  *(uint *)((long)param_1 + 0x33c) = uVar2;
  if (*(uint *)(param_1 + 0x65) < 6) {
    if ((1 << (ulong)(*(uint *)(param_1 + 0x65) & 0x1f) & 0x39U) == 0) {
      fVar14 = fVar16;
    }
    else {
      fVar14 = fVar15;
      fVar15 = fVar16;
    }
    param_1[99] = 0;
    *(float *)(param_1 + 100) = fVar14;
    *(float *)((long)param_1 + 0x324) = fVar15;
  }
  return;
}

