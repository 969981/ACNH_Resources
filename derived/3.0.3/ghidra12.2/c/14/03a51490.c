
void FUN_03a51490(long param_1,long param_2,uint param_3,long param_4)

{
  uint *puVar1;
  MutexType *pMVar2;
  void *pvVar3;
  ushort uVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  char cVar8;
  bool bVar9;
  short sVar10;
  long lVar11;
  long lVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long *plVar20;
  float fVar21;
  int iVar22;
  long lVar23;
  size_t __n;
  long lVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float local_1a8 [4];
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  ulong uStack_180;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined4 local_160;
  undefined4 uStack_15c;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined7 uStack_138;
  undefined1 local_131;
  undefined7 uStack_130;
  undefined1 auStack_128 [64];
  undefined8 local_e8;
  undefined4 local_e0;
  uint local_a4;
  short local_9e;
  
  lVar23 = *(long *)(param_1 + 0x38);
  if (*(uint *)(param_1 + 0x30) <= param_3) {
    param_3 = 0;
  }
  lVar15 = FUN_03a51cd0(param_1,0);
  FUN_03907810(lVar15,param_2);
  FUN_03a465e0(lVar15,param_2,0,lVar23 + (long)(int)param_3 * 0x108 + 0x78,0);
  FUN_0390cee0(&local_178);
  puVar19 = *(undefined4 **)(param_4 + 0x10);
  local_178 = *puVar19;
  uStack_174 = puVar19[1];
  local_148 = *(undefined8 *)(puVar19 + 0xc);
  local_170 = *(undefined8 *)(puVar19 + 2);
  uStack_168 = *(undefined8 *)(puVar19 + 4);
  local_160 = puVar19[6];
  uStack_15c = puVar19[7];
  local_158 = *(undefined8 *)(puVar19 + 8);
  uStack_150 = *(undefined8 *)(puVar19 + 10);
  local_140 = *(undefined8 *)(puVar19 + 0xe);
  uStack_130 = (undefined7)((ulong)*(undefined8 *)((long)puVar19 + 0x47) >> 8);
  uStack_138 = (undefined7)*(undefined8 *)(puVar19 + 0x10);
  local_131 = (undefined1)((ulong)*(undefined8 *)(puVar19 + 0x10) >> 0x38);
  FUN_038fd1e0(auStack_128);
  FUN_038fd2f0(auStack_128,puVar19 + 0x14);
  local_e8 = *(undefined8 *)(puVar19 + 0x24);
  local_e0 = puVar19[0x26];
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(&local_a4,0x10);
    if (bVar9) {
      cVar8 = ExclusiveMonitorsStatus();
      local_a4 = local_a4 | 1;
    }
  } while (cVar8 != '\0');
  puVar1 = (uint *)(lVar15 + 0x14);
  do {
    uVar14 = *puVar1;
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = uVar14 | 0x80000000;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  plVar20 = (long *)(lVar23 + (long)(int)param_3 * 0x108);
  if ((uVar14 & 0x7fffffff) != 0) {
    if ((int)uVar14 < 0) {
      if ((int)*puVar1 < 0) {
        lVar23 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar23 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar15);
    }
  }
  do {
    cVar8 = '\x01';
    bVar9 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar9) {
      *puVar1 = 0;
      cVar8 = ExclusiveMonitorsStatus();
    }
  } while (cVar8 != '\0');
  FUN_0390d290(&local_178,param_2,*(undefined8 *)(lVar15 + 0x68),0xffffffff,0);
  lVar23 = *(long *)(param_4 + 0x10);
  local_1a8[2] = 0.0;
  local_1a8[3] = 0.0;
  uVar6 = *(ushort *)(lVar23 + 0x30);
  if (uVar6 < 2) {
    uVar6 = 1;
  }
  uVar7 = *(ushort *)(lVar23 + 0x32);
  uVar4 = uVar7;
  if (*(short *)(lVar23 + 0x3a) != 3) {
    uVar4 = 1;
  }
  if (uVar4 <= uVar7) {
    uVar4 = uVar7;
  }
  local_1a8[1] = *(float *)(param_1 + 0x330);
  local_1a8[0] = *(float *)(param_1 + 0x310);
  fVar27 = 1.0 / (float)uVar6;
  lVar24 = plVar20[2];
  fVar28 = 1.0 / (float)uVar4;
  fVar26 = (float)uVar4 / (float)(int)local_1a8[1];
  iVar22 = (int)fVar26;
  fVar25 = (float)uVar6 / (float)(int)local_1a8[0];
  fVar21 = (float)(int)fVar25;
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 8) * 4];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 4)),local_1a8,(ulong)bVar5 << 2);
  }
  local_1a8[2] = 0.0;
  local_1a8[3] = 0.0;
  lVar24 = plVar20[2];
  local_1a8[0] = fVar27 * (float)(int)fVar25;
  local_1a8[1] = fVar28 * (float)(int)fVar26;
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x14) * 4];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x10)),local_1a8,(ulong)bVar5 << 2);
  }
  local_1a8[2] = 0.0;
  local_1a8[3] = 0.0;
  lVar24 = plVar20[2];
  local_1a8[0] = fVar21;
  local_1a8[1] = (float)iVar22;
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x20) * 4];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x1c)),local_1a8,(ulong)bVar5 << 2);
  }
  local_1a8[1] = 0.0;
  local_1a8[2] = 0.0;
  local_1a8[3] = 0.0;
  local_1a8[0] = 1.0 / (float)(iVar22 * (int)fVar21);
  lVar24 = plVar20[2];
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x2c) * 4];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x28)),local_1a8,(ulong)bVar5 << 2);
  }
  local_1a8[2] = 0.0;
  local_1a8[3] = 0.0;
  lVar24 = plVar20[2];
  local_1a8[0] = fVar27;
  local_1a8[1] = fVar28;
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x38) * 4];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x34)),local_1a8,(ulong)bVar5 << 2);
  }
  if (*(int *)(param_1 + 0x8c) == 1) {
    if (*(int *)(param_1 + 0x90) == 0) {
      local_1a8[0] = 0.4360747;
      local_1a8[1] = 0.3850649;
      local_1a8[2] = 0.1430804;
      uVar14 = 0x3f36d410;
      local_198 = 0x3f37855b3e63d838;
      uStack_190 = 0x3d78496d;
      local_188 = 0x3dc6deb93c6443e2;
    }
    else {
      local_1a8[0] = 0.412391;
      local_1a8[1] = 0.357584;
      local_1a8[2] = 0.180481;
      uVar14 = 0x3f735611;
      local_198 = 0x3f3715513e59be0a;
      uStack_190 = 0x3d93d966;
      local_188 = 0x3df41c823c9e5c0c;
    }
    local_1a8[3] = 0.0;
    uStack_180 = (ulong)uVar14;
  }
  else {
    local_198 = DAT_0419b4f4;
    uStack_190 = DAT_0419b4fc;
    local_188 = DAT_0419b504;
    uStack_180 = DAT_0419b50c;
    local_1a8[0] = (float)DAT_0419b4e4;
    local_1a8[1] = (float)((ulong)DAT_0419b4e4 >> 0x20);
    local_1a8[2] = (float)DAT_0419b4ec;
    local_1a8[3] = (float)((ulong)DAT_0419b4ec >> 0x20);
  }
  lVar24 = plVar20[2];
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  uVar18 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x44) * 4];
  uVar16 = (**(code **)(*plVar20 + 0x18))(plVar20);
  if (uVar18 != 0) {
    __n = uVar18 * 4;
    pvVar3 = (void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x40));
    memcpy(pvVar3,local_1a8,__n);
    lVar23 = (uVar16 & 0xff) * 4;
    pvVar3 = (void *)((long)pvVar3 + lVar23);
    memcpy(pvVar3,local_1a8 + uVar18,__n);
    memcpy((void *)((long)pvVar3 + lVar23),local_1a8 + uVar18 + uVar18,__n);
  }
  local_1a8[3] = 0.0;
  local_1a8[2] = 0.0;
  local_1a8[1] = 0.0;
  local_1a8[0] = 0.0;
  if (*(uint *)(param_1 + 0x8c) < 3) {
    local_1a8[3] = 1.0;
    lVar23 = (long)(int)*(uint *)(param_1 + 0x8c) * 4;
    local_1a8[2] = *(float *)(&DAT_041dfe7c + lVar23);
    local_1a8[1] = *(float *)(&DAT_041dfe88 + lVar23);
    local_1a8[0] = *(float *)(&DAT_041dfe94 + lVar23);
  }
  lVar24 = plVar20[2];
  (**(code **)(*plVar20 + 0x20))(plVar20);
  (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar23 = *(long *)plVar20[1];
  bVar5 = (&DAT_041b370c)[(ulong)*(byte *)(lVar23 + 0x50) * 4];
  (**(code **)(*plVar20 + 0x18))(plVar20);
  if ((ulong)bVar5 != 0) {
    memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar23 + 0x4c)),local_1a8,(ulong)bVar5 << 2);
  }
  bVar5 = *(byte *)((long)plVar20 + 0x39);
  uVar6 = *(ushort *)((long)plVar20 + 0x3a);
  lVar23 = plVar20[6];
  iVar22 = (**(code **)(*plVar20 + 0x20))(plVar20);
  iVar13 = (**(code **)(*plVar20 + 0x20))(plVar20);
  lVar24 = plVar20[4];
  if (lVar24 != 0) {
    lVar11 = plVar20[6];
    lVar12 = plVar20[3];
    uVar14 = (**(code **)PTR_DAT_04bcf030)(lVar24);
    if ((uVar14 >> 2 & 1) != 0) {
      (*DAT_04c61fd8)(lVar24,(int)lVar12 +
                             (uint)uVar6 * (uint)bVar5 * (((int)lVar23 + iVar22) - 1U & -iVar13),
                      (int)lVar11);
    }
  }
  FUN_01557430(lVar15,param_2,0,plVar20,0);
  fVar21 = (float)*(int *)(param_1 + 0x310) * 0.0625;
  fVar25 = (float)*(int *)(param_1 + 0x330) * 0.0625;
  uVar14 = 0;
  if (fVar21 != (float)(int)fVar21) {
    uVar14 = (uint)(0.0 <= fVar21);
  }
  uVar17 = 0;
  if (fVar25 != (float)(int)fVar25) {
    uVar17 = (uint)(0.0 <= fVar25);
  }
  (*DAT_04c629b0)(*(undefined8 *)(param_2 + 0xb8),uVar14 + (int)fVar21,uVar17 + (int)fVar25,1);
  lVar23 = DAT_05ae78f0;
  if (local_9e != -1) {
    pMVar2 = (MutexType *)(DAT_05ae78f0 + 0x580);
    nn::os::LockMutex(pMVar2);
    uVar14 = (int)local_9e - (uint)*(ushort *)(lVar23 + 0x5c0);
    if (*(uint *)(lVar23 + 0x5a0) <= uVar14) {
      uVar14 = 0;
    }
    lVar15 = *(long *)(lVar23 + 0x5a8) + (long)(int)uVar14 * 0x80;
    sVar10 = *(short *)(lVar15 + 0x76) + -1;
    *(short *)(lVar15 + 0x76) = sVar10;
    if (sVar10 == 0) {
      *(short *)(lVar23 + 0x5c4) = *(short *)(lVar23 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex(pMVar2);
    local_9e = -1;
  }
  FUN_038fd0e0(auStack_128);
  return;
}

