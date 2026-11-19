
void FUN_03ab6820(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  long *plVar13;
  char cVar14;
  bool bVar15;
  undefined *puVar16;
  undefined8 uVar17;
  uint uVar18;
  undefined1 uVar19;
  uint uVar20;
  byte *pbVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined *local_50;
  byte *local_48;
  
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_48 = (byte *)0x41010f3;
  local_50 = puVar1;
  FUN_03955370(param_1,&local_50,0);
  *param_1 = &PTR_FUN_04b710d0;
  FUN_0390cee0(param_1 + 0x3a);
  param_1[0x65] = 0;
  uVar4 = crc32b(0xffffffff,0x62,0x4c11db7);
  uVar5 = crc32b(0xffffffff,0x61,0x4c11db7);
  param_1[100] = 0;
  uVar4 = crc32b(uVar4,0x69,0x4c11db7);
  param_1[99] = 0;
  param_1[0x66] = param_1;
  puVar2 = PTR_DAT_04bd10d8;
  uVar5 = crc32b(uVar5,0x6e,0x4c11db7);
  param_1[0x69] = param_1 + 0x6b;
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  param_1[0x61] = param_1 + 0x67;
  uVar5 = crc32b(uVar5,0x69,0x4c11db7);
  param_1[0x6a] = &DAT_3f8000003f800000;
  param_1[0x6d] = param_1 + 0x6f;
  uVar4 = crc32b(uVar4,0x73,0x4c11db7);
  param_1[0x71] = param_1 + 0x73;
  uVar5 = crc32b(uVar5,0x6d,0x4c11db7);
  param_1[0x75] = param_1 + 0x77;
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  param_1[0x79] = param_1 + 0x7b;
  param_1[0x60] = &PTR_LAB_04b71148;
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  param_1[0x6e] = 0;
  puVar16 = PTR_DAT_04bd1080;
  puVar2 = puVar2 + 0x10;
  uVar6 = crc32b(0xffffffff,0x72,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar7 = crc32b(uVar5,0x73,0x4c11db7);
  uVar7 = crc32b(uVar7,0x77,0x4c11db7);
  uVar8 = crc32b(uVar5,0x74,0x4c11db7);
  uVar9 = crc32b(uVar4,0x74,0x4c11db7);
  uVar5 = crc32b(uVar5,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x69,0x4c11db7);
  uVar8 = crc32b(uVar8,0x72,0x4c11db7);
  uVar9 = crc32b(uVar9,0x72,0x4c11db7);
  uVar7 = crc32b(uVar7,0x6e,0x4c11db7);
  uVar8 = crc32b(uVar8,0x61,0x4c11db7);
  uVar9 = crc32b(uVar9,0x61,0x4c11db7);
  uVar8 = crc32b(uVar8,0x6e,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6e,0x4c11db7);
  uVar7 = crc32b(uVar7,0x67,0x4c11db7);
  param_1[0x67] = puVar2;
  param_1[0x6b] = puVar2;
  param_1[0x77] = puVar2;
  param_1[0x7b] = puVar2;
  *(undefined4 *)(param_1 + 0x72) = 0;
  *(undefined4 *)(param_1 + 0x76) = 0;
  param_1[0x7a] = 0;
  param_1[0x7e] = 0;
  uVar8 = crc32b(uVar8,0x73,0x4c11db7);
  uVar18 = crc32b(uVar9,0x73,0x4c11db7);
  uVar7 = crc32b(uVar7,0x5f,0x4c11db7);
  uVar8 = crc32b(uVar8,0x5f,0x4c11db7);
  param_1[0x6f] = puVar16 + 0x10;
  param_1[0x73] = puVar16 + 0x10;
  *(uint *)(param_1 + 0x7c) = ~uVar18;
  uVar5 = crc32b(uVar5,0x6f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x70,0x4c11db7);
  uVar8 = crc32b(uVar8,0x76,0x4c11db7);
  uVar9 = crc32b(uVar7,0x61,0x4c11db7);
  uVar5 = crc32b(uVar5,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x65,0x4c11db7);
  uVar9 = crc32b(uVar9,0x6d,0x4c11db7);
  uVar8 = crc32b(uVar8,0x65,0x4c11db7);
  uVar5 = crc32b(uVar5,0x5f,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar18 = crc32b(uVar9,0x70,0x4c11db7);
  uVar5 = crc32b(uVar5,0x73,0x4c11db7);
  uVar9 = crc32b(uVar4,0x73,0x4c11db7);
  uVar4 = crc32b(uVar4,0x72,0x4c11db7);
  uVar20 = crc32b(uVar6,0x74,0x4c11db7);
  uVar6 = crc32b(uVar9,99,0x4c11db7);
  uVar4 = crc32b(uVar4,0x6f,0x4c11db7);
  uVar5 = crc32b(uVar5,0x70,0x4c11db7);
  uVar6 = crc32b(uVar6,0x61,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar6 = crc32b(uVar6,0x6c,0x4c11db7);
  uVar10 = crc32b(uVar8,0x6c,0x4c11db7);
  uVar4 = crc32b(uVar4,0x61,0x4c11db7);
  uVar11 = crc32b(uVar6,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x74,0x4c11db7);
  uVar12 = crc32b(uVar4,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x68) = ~uVar11;
  puVar2 = PTR_DAT_04bd1078;
  *(uint *)(param_1 + 0x78) = ~uVar18;
  uVar4 = crc32b(uVar7,99,0x4c11db7);
  *(uint *)(param_1 + 0x6c) = ~uVar10;
  param_1[0x7d] = param_1 + 0x7f;
  *(undefined4 *)(param_1 + 0x82) = 0;
  *(undefined4 *)(param_1 + 0x86) = 0;
  *(uint *)(param_1 + 0x84) = ~uVar12;
  uVar4 = crc32b(uVar4,0x79,0x4c11db7);
  param_1[0x7f] = puVar2 + 0x10;
  param_1[0x83] = puVar2 + 0x10;
  uVar4 = crc32b(uVar4,99,0x4c11db7);
  uVar5 = crc32b(uVar5,0x65,0x4c11db7);
  uVar4 = crc32b(uVar4,0x5f,0x4c11db7);
  uVar18 = crc32b(uVar4,0x78,0x4c11db7);
  uVar10 = crc32b(uVar4,0x79,0x4c11db7);
  *(uint *)(param_1 + 0x74) = ~uVar10;
  uVar4 = crc32b(uVar5,0x65,0x4c11db7);
  *(uint *)(param_1 + 0x70) = ~uVar18;
  uVar18 = crc32b(uVar4,100,0x4c11db7);
  *(uint *)(param_1 + 0x80) = ~uVar18;
  param_1[0x81] = param_1 + 0x83;
  puVar2 = PTR_DAT_04bd1088;
  *(uint *)(param_1 + 0x88) = ~uVar20;
  param_1[0x89] = 0;
  param_1[0x85] = param_1 + 0x87;
  param_1[0x62] = param_1 + 0x87;
  *(undefined1 *)(param_1 + 0x8a) = 0;
  *(undefined1 *)(param_1 + 0x8b) = 0;
  local_48 = (byte *)0x40ada67;
  *(undefined4 *)(param_1 + 99) = 9;
  *(undefined8 *)((long)param_1 + 0x45c) = 0;
  param_1[0x87] = puVar2 + 0x10;
  uVar17 = 0;
  local_50 = puVar1;
  if (*(long *)PTR_DAT_04bd1140 != 0) {
    uVar17 = FUN_03954f70(*(long *)PTR_DAT_04bd1140,&local_50);
  }
  param_1[0x65] = uVar17;
  (**(code **)(local_50 + 0x18))(&local_50);
  uVar18 = (uint)*local_48;
  if (*local_48 != 0) {
    uVar20 = 0xffffffff;
    pbVar21 = local_48;
    do {
      pbVar21 = pbVar21 + 1;
      uVar20 = crc32b(uVar20,uVar18,0x4c11db7);
      uVar18 = (uint)*pbVar21;
    } while (uVar18 != 0);
    uVar18 = ~uVar20;
  }
  *(uint *)((long)param_1 + 0x31c) = uVar18;
  plVar13 = param_1 + 1;
  if (param_1[2] != 0) {
    plVar13 = (long *)(param_1[2] + 0x20);
  }
  *plVar13 = (long)(param_1 + 0x60);
  param_1[2] = param_1 + 0x60;
  uVar19 = 7;
  if (*(char *)(param_1 + 0x8a) != '\0') {
    uVar19 = 1;
  }
  *(undefined1 *)((long)param_1 + 0x297) = uVar19;
  *(undefined1 *)(param_1 + 0x53) = uVar19;
  *(undefined1 *)((long)param_1 + 0x299) = uVar19;
  puVar3 = (uint *)((long)param_1 + 0x2a4);
  do {
    cVar14 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar15) {
      *puVar3 = *puVar3 & 0xfffffffd | 2;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  *(undefined2 *)((long)param_1 + 0x294) = 0x101;
  *(undefined1 *)((long)param_1 + 0x296) = 1;
  do {
    cVar14 = '\x01';
    bVar15 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar15) {
      *puVar3 = *puVar3 & 0xfffffffb | 4;
      cVar14 = ExclusiveMonitorsStatus();
    }
  } while (cVar14 != '\0');
  fVar22 = *(float *)(param_1 + 0x86);
  *(undefined4 *)(param_1 + 0x5f) = 0;
  param_1[0x5e] = 0;
  param_1[0x5d] = 0;
  param_1[0x5c] = 0;
  fVar23 = sinf(fVar22 + 0.0);
  fVar22 = cosf(fVar22 + 0.0);
  param_1[0x5b] = 0x3f800000;
  fVar25 = -0.5 / *(float *)((long)param_1 + 0x354);
  *(float *)(param_1 + 0x57) = fVar23 * 0.0 + fVar22 * 0.0;
  *(float *)(param_1 + 0x59) = fVar22 * -0.0 + fVar23 * 0.0;
  fVar24 = 0.5 / *(float *)(param_1 + 0x6a);
  *(float *)(param_1 + 0x56) = fVar22 * fVar24;
  *(float *)(param_1 + 0x5a) = fVar24 * -0.0;
  *(float *)((long)param_1 + 0x2b4) = (fVar22 * 0.0 - fVar23) * fVar25;
  *(float *)(param_1 + 0x58) = fVar23 * fVar24;
  *(float *)((long)param_1 + 0x2c4) = (fVar22 + fVar23 * 0.0) * fVar25;
  *(float *)((long)param_1 + 0x2d4) = fVar25 * 0.0;
  *(float *)((long)param_1 + 700) =
       *(float *)(param_1 + 0x7e) + 0.5 + *(float *)(param_1 + 0x5c) +
       *(float *)((long)param_1 + 0x2ec);
  *(float *)((long)param_1 + 0x2cc) =
       *(float *)((long)param_1 + 0x3f4) + 0.5 + *(float *)((long)param_1 + 0x2e4) +
       *(float *)(param_1 + 0x5e);
  return;
}

