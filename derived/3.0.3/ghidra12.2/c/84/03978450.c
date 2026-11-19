
void FUN_03978450(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,long param_8,uint param_9,
                 undefined4 *param_10,float *param_11,float *param_12,undefined8 *param_13,
                 uint param_14,undefined8 *param_15,undefined4 *param_16,byte param_17,
                 undefined4 *param_18,undefined4 *param_19)

{
  uint *puVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  ulong uVar5;
  undefined8 uVar6;
  byte bVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  long lVar12;
  byte *pbVar13;
  long lVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  
  puVar11 = *(undefined8 **)(param_8 + 0x38);
  if (((*PTR_DAT_04bd1460 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bd1460), iVar4 != 0))
  {
    *(undefined ***)PTR_DAT_04bd1458 = &PTR_LAB_04b685d8;
    __cxa_guard_release(PTR_DAT_04bd1460);
  }
  uVar5 = (**(code **)*puVar11)(puVar11,PTR_DAT_04bd1458);
  if ((uVar5 & 1) == 0) {
    puVar11 = (undefined8 *)0x0;
  }
  lVar12 = puVar11[3];
  if (*(uint *)(puVar11 + 2) <= param_9) {
    param_9 = 0;
  }
  pbVar13 = (byte *)(lVar12 + (long)(int)param_9 * 0x360);
  *(undefined4 *)(pbVar13 + 0x10) = *param_10;
  *(undefined4 *)(pbVar13 + 0x14) = param_10[1];
  *(undefined4 *)(pbVar13 + 0x18) = param_10[2];
  *(float *)(pbVar13 + 0x1c) = *param_11;
  *(float *)(pbVar13 + 0x20) = param_11[1];
  *(float *)(pbVar13 + 0x24) = param_11[2];
  *(float *)(pbVar13 + 0x28) = *param_12;
  *(float *)(pbVar13 + 0x2c) = param_12[1];
  *(float *)(pbVar13 + 0x30) = param_12[2];
  uVar6 = *param_13;
  *(undefined8 *)(pbVar13 + 0x3c) = param_13[1];
  *(undefined8 *)(pbVar13 + 0x34) = uVar6;
  uVar6 = *param_15;
  uVar10 = param_15[1];
  *(undefined4 *)(pbVar13 + 0x6c) = param_1;
  *(undefined4 *)(pbVar13 + 0x70) = param_2;
  *(undefined4 *)(pbVar13 + 0x7c) = param_3;
  *(undefined4 *)(pbVar13 + 0x80) = param_4;
  *(undefined4 *)(pbVar13 + 0x84) = param_5;
  *(undefined4 *)(pbVar13 + 0x88) = param_6;
  *(undefined4 *)(pbVar13 + 0x8c) = param_7;
  *(undefined8 *)(pbVar13 + 0x44) = uVar6;
  *(undefined8 *)(pbVar13 + 0x4c) = uVar10;
  bVar7 = 6;
  if ((param_14 & 1) == 0) {
    bVar7 = 4;
  }
  *(undefined4 *)(pbVar13 + 0x178) = *param_18;
  *(undefined4 *)(pbVar13 + 0x17c) = param_18[1];
  *(undefined4 *)(pbVar13 + 0x180) = *param_19;
  uVar15 = param_19[1];
  *pbVar13 = bVar7 | *pbVar13 & 0xf9;
  pbVar13[4] = 0xff;
  pbVar13[5] = 0xff;
  pbVar13[6] = 0xff;
  pbVar13[7] = 0xff;
  *(undefined4 *)(pbVar13 + 0x184) = uVar15;
  if (param_16 == (undefined4 *)0x0) {
    pbVar13[0x90] = 0;
  }
  else {
    pbVar13[0x90] = 1;
    lVar14 = lVar12 + (long)(int)param_9 * 0x360;
    *(undefined4 *)(lVar14 + 0x98) = *param_16;
    *(undefined4 *)(lVar14 + 0x9c) = param_16[1];
    *(undefined8 *)(lVar14 + 0xa0) = *(undefined8 *)(param_16 + 2);
    *(undefined8 *)(lVar14 + 0xa8) = *(undefined8 *)(param_16 + 4);
    *(undefined4 *)(lVar14 + 0xb0) = param_16[6];
    *(undefined4 *)(lVar14 + 0xb4) = param_16[7];
    *(undefined8 *)(lVar14 + 0xb8) = *(undefined8 *)(param_16 + 8);
    *(undefined8 *)(lVar14 + 0xc0) = *(undefined8 *)(param_16 + 10);
    uVar6 = *(undefined8 *)(param_16 + 0xc);
    uVar10 = *(undefined8 *)(param_16 + 0xe);
    uVar9 = *(undefined8 *)(param_16 + 0x10);
    *(undefined8 *)(lVar14 + 0xdf) = *(undefined8 *)((long)param_16 + 0x47);
    *(undefined8 *)(lVar14 + 200) = uVar6;
    *(undefined8 *)(lVar14 + 0xd0) = uVar10;
    *(undefined8 *)(lVar14 + 0xd8) = uVar9;
    FUN_038fd1e0(lVar14 + 0xe8);
    FUN_038fd2f0(lVar14 + 0xe8,param_16 + 0x14);
    uVar6 = *(undefined8 *)(param_16 + 0x24);
    puVar1 = (uint *)(lVar14 + 0x16c);
    *(undefined4 *)(lVar14 + 0x130) = param_16[0x26];
    *(undefined8 *)(lVar14 + 0x128) = uVar6;
    uVar6 = *(undefined8 *)(param_16 + 0x30);
    uVar10 = *(undefined8 *)(param_16 + 0x32);
    uVar9 = *(undefined8 *)(param_16 + 0x2e);
    *(undefined4 *)(lVar14 + 0x168) = param_16[0x34];
    *(undefined8 *)(lVar14 + 0x158) = uVar6;
    *(undefined8 *)(lVar14 + 0x160) = uVar10;
    *(undefined8 *)(lVar14 + 0x150) = uVar9;
    uVar6 = *(undefined8 *)(param_16 + 0x2a);
    uVar10 = *(undefined8 *)(param_16 + 0x2c);
    *(undefined8 *)(lVar14 + 0x138) = *(undefined8 *)(param_16 + 0x28);
    *(undefined8 *)(lVar14 + 0x140) = uVar6;
    *(undefined8 *)(lVar14 + 0x148) = uVar10;
    do {
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar3) {
        *puVar1 = 0x7fffffff;
        cVar2 = ExclusiveMonitorsStatus();
      }
    } while (cVar2 != '\0');
    lVar14 = lVar12 + (long)(int)param_9 * 0x360;
    *(undefined1 *)(lVar14 + 0x170) = *(undefined1 *)(param_16 + 0x36);
    FUN_038fd92c(lVar14 + 0x172,(long)param_16 + 0xda);
    if ((param_17 & 1) == 0) {
      *pbVar13 = *pbVar13 & 0xef;
      lVar14 = lVar12 + (long)(int)param_9 * 0x360;
      *(undefined2 *)(lVar14 + 0x15f) = 0x505;
      *(undefined1 *)(lVar14 + 0x161) = 5;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0xfffffffd | 2;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      lVar14 = lVar12 + (long)(int)param_9 * 0x360;
      *(undefined8 *)(lVar14 + 0x140) = 0;
      *(undefined8 *)(lVar14 + 0x148) = 0;
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar3) {
          *puVar1 = *puVar1 & 0xffffffdf | 0x20;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
    }
    else {
      *pbVar13 = *pbVar13 | 0x10;
    }
  }
  fVar17 = *(float *)(pbVar13 + 0x1c);
  lVar14 = lVar12 + (long)(int)param_9 * 0x360;
  fVar16 = *(float *)(lVar14 + 0x24);
  *(float *)(lVar14 + 0x5c) = fVar16;
  fVar18 = *(float *)(lVar14 + 0x20);
  *(float *)(lVar14 + 0x54) = fVar17;
  *(float *)(lVar14 + 0x58) = fVar18;
  fVar19 = SQRT(fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16);
  if (0.0 < fVar19) {
    fVar19 = 1.0 / fVar19;
    *(float *)(lVar14 + 0x54) = fVar17 * fVar19;
    *(float *)(lVar14 + 0x58) = fVar18 * fVar19;
    *(float *)(lVar14 + 0x5c) = fVar16 * fVar19;
  }
  fVar18 = *(float *)(pbVar13 + 0x28);
  lVar14 = lVar12 + (long)(int)param_9 * 0x360;
  fVar17 = *(float *)(lVar14 + 0x30);
  *(float *)(lVar14 + 0x68) = fVar17;
  fVar19 = *(float *)(lVar14 + 0x2c);
  *(float *)(lVar14 + 0x60) = fVar18;
  *(float *)(lVar14 + 100) = fVar19;
  fVar16 = SQRT(fVar19 * fVar19 + fVar18 * fVar18 + fVar17 * fVar17);
  if (0.0 < fVar16) {
    fVar16 = 1.0 / fVar16;
    *(float *)(lVar14 + 0x60) = fVar18 * fVar16;
    *(float *)(lVar14 + 100) = fVar19 * fVar16;
    *(float *)(lVar14 + 0x68) = fVar17 * fVar16;
  }
  lVar12 = lVar12 + (long)(int)param_9 * 0x360;
  *(undefined8 *)(lVar12 + 0x188) = 0x3f00000000000001;
  iVar4 = *(int *)(lVar12 + 400);
  if (iVar4 != 0) {
    lVar12 = *(long *)(lVar12 + 0x198);
    iVar8 = 0;
    do {
      *(undefined8 *)(lVar12 + (long)iVar8 * 0xd0 + 8) = 0;
      iVar8 = iVar8 + 1;
    } while (iVar4 != iVar8);
  }
  FUN_0397de88(puVar11,pbVar13);
  return;
}

