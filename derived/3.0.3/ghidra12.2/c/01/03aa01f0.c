
void FUN_03aa01f0(long param_1,long param_2,uint param_3,long param_4,undefined4 *param_5)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  uint uVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined8 uVar15;
  undefined4 *puVar16;
  undefined8 uVar17;
  ulong uVar18;
  long *plVar19;
  long lVar20;
  ulong uVar21;
  long lVar22;
  undefined2 local_d4 [2];
  uint local_d0;
  
  if (*(char *)(param_1 + 0x48) == '\0') {
    return;
  }
  if ((*(byte *)(param_1 + 0x380) >> 1 & 1) == 0) {
    return;
  }
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x180) <= param_3) {
    uVar2 = 0;
  }
  puVar16 = (undefined4 *)(*(long *)(param_1 + 0x188) + (long)(int)uVar2 * 0xd70);
  FUN_038e4cec(local_d4);
  local_d4[0] = 0;
  local_d0 = local_d0 & 0xfffffffe;
  FUN_038e4d90(local_d4,param_2);
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x458) + 8);
  lVar20 = *(long *)(lVar11 + 0x28);
  lVar22 = 5;
  if (*(uint *)(lVar11 + 0x20) < 6) {
    lVar22 = 0;
  }
  lVar11 = lVar20 + lVar22 * 0x150;
  FUN_03907810(lVar11,param_2);
  FUN_03a9e2f0(param_1,param_2,param_3,lVar11);
  puVar3 = (undefined4 *)(*(long *)(param_4 + 0x20) + 8);
  if (param_5 != (undefined4 *)0x0) {
    puVar3 = param_5;
  }
  *puVar16 = *puVar3;
  puVar16[1] = puVar3[1];
  *(undefined8 *)(puVar16 + 2) = *(undefined8 *)(puVar3 + 2);
  *(undefined8 *)(puVar16 + 4) = *(undefined8 *)(puVar3 + 4);
  puVar16[6] = puVar3[6];
  puVar16[7] = puVar3[7];
  *(undefined8 *)(puVar16 + 8) = *(undefined8 *)(puVar3 + 8);
  *(undefined8 *)(puVar16 + 10) = *(undefined8 *)(puVar3 + 10);
  uVar15 = *(undefined8 *)(puVar3 + 0x10);
  uVar17 = *(undefined8 *)(puVar3 + 0xc);
  uVar10 = *(undefined8 *)(puVar3 + 0xe);
  *(undefined8 *)((long)puVar16 + 0x47) = *(undefined8 *)((long)puVar3 + 0x47);
  *(undefined8 *)(puVar16 + 0xe) = uVar10;
  *(undefined8 *)(puVar16 + 0x10) = uVar15;
  *(undefined8 *)(puVar16 + 0xc) = uVar17;
  FUN_038fd1e0(puVar16 + 0x14);
  FUN_038fd2f0(puVar16 + 0x14,puVar3 + 0x14);
  uVar14 = puVar3[0x26];
  *(undefined8 *)(puVar16 + 0x24) = *(undefined8 *)(puVar3 + 0x24);
  puVar1 = puVar16 + 0x35;
  puVar16[0x26] = uVar14;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar1 = (uint *)(lVar20 + lVar22 * 0x150 + 0x14);
  do {
    uVar2 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar2 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if ((int)uVar2 < 0) {
      if ((int)*puVar1 < 0) {
        lVar12 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar12 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
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
  plVar19 = (long *)(lVar20 + lVar22 * 0x150 + 0x68);
  FUN_0390d290(puVar16,param_2,*plVar19,0xffffffff,0);
  iVar4 = puVar16[0x358];
  do {
    uVar2 = *puVar1;
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = uVar2 | 0x80000000;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if ((uVar2 & 0x7fffffff) != 0) {
    if ((int)uVar2 < 0) {
      if ((int)*puVar1 < 0) {
        lVar11 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar11 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar11);
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
  FUN_0390d290(puVar16 + (long)iVar4 * 0xba + 0x72,param_2,
               *plVar19 + (ulong)(1 < *(uint *)(lVar20 + lVar22 * 0x150 + 0x60)) * 0x18,0xffffffff,0
              );
  (**(code **)PTR_DAT_04bcfdf8)(0x40000000,*(undefined8 *)(param_2 + 0xb8));
  uVar17 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar17,0x10,param_1 + 0x6e4);
  (**(code **)PTR_DAT_04bcf1b0)(uVar17,0x10,param_1 + 0x728);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar4 = *(int *)(param_1 + 0x6d0);
  if (iVar4 != 0) {
    lVar22 = *(long *)(param_1 + 0x6d8);
    uVar18 = 0;
    uVar21 = 0;
    do {
      lVar11 = *(long *)(lVar22 + (-(uVar21 >> 0x1f) & 0xfffffff800000000 | uVar21 << 3));
      if (lVar11 != 0) {
        uVar10 = (**(code **)puVar8)(lVar11 + 8);
        (**(code **)puVar9)(uVar17,uVar18 & 0xffffffff,uVar10,*(undefined4 *)(lVar11 + 0x118));
      }
      uVar18 = uVar21 + 1;
      uVar21 = uVar18 & 0xffffffff;
    } while (iVar4 != (int)uVar18);
  }
  iVar4 = *(int *)(param_1 + 0x960);
  if (iVar4 != 0) {
    uVar14 = *(undefined4 *)(param_1 + 0x944);
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    uVar17 = (**(code **)puVar8)(param_1 + 0x968);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar14,*(undefined4 *)(param_1 + 0x940),iVar4,uVar17);
  }
  uVar2 = puVar16[0x234];
  if (uVar2 != 0xffffffff) {
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 3 & 1) == 0) {
      uVar7 = uVar2 - *(ushort *)(DAT_05ae78f0 + 0x3da);
      if (*(uint *)(DAT_05ae78f0 + 0x368) <= uVar7) {
        uVar7 = 0;
      }
      if ((*(uint *)(*(long *)(DAT_05ae78f0 + 0x370) + (long)(int)uVar7 * 0x20 + 4) >> 2 & 1) == 0)
      {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03aa0694;
      }
    }
    if ((*(uint *)(DAT_05ae78f0 + 0x5c8) >> 5 & 1) == 0) {
      uVar13 = 0x112;
      uVar14 = 0x12;
    }
    else {
      uVar13 = 0x111;
      uVar14 = 0x11;
    }
    if ((*(uint *)(DAT_05ae78f0 + 800) & 2) != 0) {
      uVar14 = uVar13;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar14);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03aa0694:
  puVar16[0x1e6] = puVar16[0x270];
  *(undefined8 *)(puVar16 + 0x1f0) = *(undefined8 *)(puVar16 + 0x27a);
  puVar16[0x1e7] = puVar16[0x271];
  *(undefined8 *)(puVar16 + 0x1e8) = *(undefined8 *)(puVar16 + 0x272);
  *(undefined8 *)(puVar16 + 0x1ea) = *(undefined8 *)(puVar16 + 0x274);
  puVar16[0x1ec] = puVar16[0x276];
  puVar16[0x1ed] = puVar16[0x277];
  *(undefined8 *)(puVar16 + 0x1ee) = *(undefined8 *)(puVar16 + 0x278);
  *(undefined8 *)((long)puVar16 + 0x7df) = *(undefined8 *)((long)puVar16 + 0xa07);
  *(undefined8 *)(puVar16 + 0x1f6) = *(undefined8 *)(puVar16 + 0x280);
  *(undefined8 *)(puVar16 + 500) = *(undefined8 *)(puVar16 + 0x27e);
  *(undefined8 *)(puVar16 + 0x1f2) = *(undefined8 *)(puVar16 + 0x27c);
  FUN_038fd1e0(puVar16 + 0x1fa);
  FUN_038fd2f0(puVar16 + 0x1fa,puVar16 + 0x284);
  *(undefined8 *)(puVar16 + 0x20a) = *(undefined8 *)(puVar16 + 0x294);
  puVar16[0x20c] = puVar16[0x296];
  puVar1 = puVar16 + 0x21b;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  return;
}

