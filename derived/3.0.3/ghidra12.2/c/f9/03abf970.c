
void FUN_03abf970(long param_1,long param_2,long param_3)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  undefined4 *puVar13;
  long lVar14;
  long lVar15;
  undefined8 uVar16;
  ulong uVar17;
  ulong uVar18;
  undefined2 local_d4 [2];
  uint local_d0;
  uint local_b8;
  undefined4 local_ac;
  
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x81) {
    lVar14 = 0;
  }
  else {
    lVar14 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x400);
  }
  lVar10 = *(long *)PTR_DAT_04bbd7e8;
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_ac = 0x1010909;
  local_d0 = local_d0 | 1;
  local_b8 = local_b8 & 0xfffffff0 | 7;
  FUN_038e4d90(local_d4,param_2);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar14 = *(long *)(*(long *)(lVar14 + 8) + 0x18);
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,param_1 + 0x14c);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,param_1 + 400);
  puVar8 = PTR_DAT_04bcf1e8;
  puVar7 = PTR_DAT_04bbd560;
  iVar2 = *(int *)(param_1 + 0x138);
  if (iVar2 != 0) {
    lVar15 = *(long *)(param_1 + 0x140);
    uVar17 = 0;
    uVar18 = 0;
    do {
      lVar12 = *(long *)(lVar15 + (-(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3));
      if (lVar12 != 0) {
        uVar9 = (**(code **)puVar7)(lVar12 + 8);
        (**(code **)puVar8)(uVar16,uVar17 & 0xffffffff,uVar9,*(undefined4 *)(lVar12 + 0x118));
      }
      uVar17 = uVar18 + 1;
      uVar18 = uVar17 & 0xffffffff;
    } while (iVar2 != (int)uVar17);
  }
  FUN_03907810(lVar14,param_2);
  puVar13 = *(undefined4 **)(param_3 + 0x3a0);
  *(undefined4 *)(param_3 + 0x178) = *puVar13;
  *(undefined4 *)(param_3 + 0x17c) = puVar13[1];
  *(undefined8 *)(param_3 + 0x180) = *(undefined8 *)(puVar13 + 2);
  *(undefined8 *)(param_3 + 0x188) = *(undefined8 *)(puVar13 + 4);
  *(undefined4 *)(param_3 + 400) = puVar13[6];
  *(undefined4 *)(param_3 + 0x194) = puVar13[7];
  *(undefined8 *)(param_3 + 0x198) = *(undefined8 *)(puVar13 + 8);
  *(undefined8 *)(param_3 + 0x1a0) = *(undefined8 *)(puVar13 + 10);
  uVar16 = *(undefined8 *)(puVar13 + 0xc);
  uVar9 = *(undefined8 *)(puVar13 + 0xe);
  uVar11 = *(undefined8 *)(puVar13 + 0x10);
  *(undefined8 *)(param_3 + 0x1bf) = *(undefined8 *)((long)puVar13 + 0x47);
  *(undefined8 *)(param_3 + 0x1a8) = uVar16;
  *(undefined8 *)(param_3 + 0x1b0) = uVar9;
  *(undefined8 *)(param_3 + 0x1b8) = uVar11;
  FUN_038fd1e0(param_3 + 0x1c8);
  FUN_038fd2f0(param_3 + 0x1c8,puVar13 + 0x14);
  uVar3 = puVar13[0x26];
  *(undefined8 *)(param_3 + 0x208) = *(undefined8 *)(puVar13 + 0x24);
  puVar1 = (uint *)(param_3 + 0x24c);
  *(undefined4 *)(param_3 + 0x210) = uVar3;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar1 = (uint *)(lVar14 + 0x14);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(param_3 + 0x98,param_2,*(undefined8 *)(lVar14 + 0x68),0xffffffff,0);
  do {
    uVar4 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar4 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar4 & 0x7fffffff) != 0) {
    if ((int)uVar4 < 0) {
      if ((int)*puVar1 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar14);
    }
  }
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = 0;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  FUN_0390d290(param_3 + 0x178,param_2,
               *(long *)(lVar14 + 0x68) + (ulong)(1 < *(uint *)(lVar14 + 0x60)) * 0x18,0xffffffff,0)
  ;
  FUN_01557430(lVar14,param_2,0,param_3,0);
  iVar2 = *(int *)(lVar10 + 0x1f8);
  if (iVar2 != 0) {
    uVar3 = *(undefined4 *)(lVar10 + 0x1dc);
    uVar9 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)puVar7)(lVar10 + 0x200);
    (**(code **)PTR_DAT_04bbd568)(uVar9,uVar3,*(undefined4 *)(lVar10 + 0x1d8),iVar2,uVar16);
  }
  return;
}

