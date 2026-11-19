
void FUN_03aa0760(long param_1,long param_2,uint param_3)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  float fVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined8 uVar10;
  long lVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  long lVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  long lVar17;
  ulong uVar18;
  ulong uVar19;
  long *plVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  uint local_c0;
  undefined8 local_bc;
  
  if (*(char *)(param_1 + 0x48) == '\0' || *(char *)(param_1 + 0x590) == '\0') {
    return;
  }
  uVar2 = param_3;
  if (*(uint *)(param_1 + 0x180) <= param_3) {
    uVar2 = 0;
  }
  puVar15 = (undefined4 *)(*(long *)(param_1 + 0x188) + (long)(int)uVar2 * 0xd70);
  lVar11 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x458) + 8);
  lVar17 = *(long *)(lVar11 + 0x28);
  uVar19 = (ulong)(4 < *(uint *)(lVar11 + 0x20));
  lVar11 = lVar17 + uVar19 * 0x540;
  FUN_01560750(puVar15 + 0x2d8,puVar15 + 0x32a,*(undefined1 *)((long)puVar15 + 0xc1e),
               *(undefined2 *)(puVar15 + 0x307));
  uVar2 = puVar15[0x29f];
  *(undefined4 **)(puVar15 + 0x318) = puVar15 + 0x2d8;
  *(undefined8 *)(puVar15 + 0x328) = 0;
  uVar3 = puVar15[0x29e];
  puVar15[0x313] = (float)(int)uVar2;
  puVar15[0x312] = (float)(int)uVar3;
  puVar15[0x314] = (float)(int)(uVar3 & (int)uVar3 >> 0x1f);
  puVar15[0x316] = (float)(int)(uVar3 & ((int)uVar3 >> 0x1f ^ 0xffffffffU));
  puVar15[0x315] = (float)(int)(uVar2 & (int)uVar2 >> 0x1f);
  puVar15[0x317] = (float)(int)(uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU));
  (**(code **)(*(long *)(puVar15 + 0x310) + 0x38))(puVar15 + 0x310,param_2);
  local_c8 = 0xff7fffffff7fffff;
  local_d8 = PTR_DAT_04bd0f08 + 0x10;
  local_d0 = 0x7f7fffff7f7fffff;
  local_c0 = *(uint *)PTR_DAT_04bd0ea8;
  local_bc = 0x3f80000000000000;
  if (local_c0 < 6) {
    if ((1 << (ulong)(local_c0 & 0x1f) & 0x39U) == 0) {
      fVar21 = (float)puVar15[0x313];
      fVar22 = (float)puVar15[0x312];
    }
    else {
      fVar21 = (float)puVar15[0x312];
      fVar22 = (float)puVar15[0x313];
    }
    fVar24 = fVar21;
    fVar7 = 0.0;
    if (fVar21 <= 0.0) {
      fVar24 = 0.0;
      fVar7 = fVar21;
    }
    fVar23 = fVar22;
    fVar21 = 0.0;
    if (fVar22 <= 0.0) {
      fVar23 = 0.0;
      fVar21 = fVar22;
    }
    local_d0 = CONCAT44(fVar21,fVar7);
    local_c8 = CONCAT44(fVar23,fVar24);
  }
  FUN_038e77e4(&local_d8,param_2,puVar15 + 0x310);
  uVar2 = puVar15[0x2ee];
  if (uVar2 != 0xffffffff) {
    lVar14 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar14 + 0x5c8) >> 3 & 1) == 0) {
      uVar3 = uVar2 - *(ushort *)(lVar14 + 0x3da);
      if (*(uint *)(lVar14 + 0x368) <= uVar3) {
        uVar3 = 0;
      }
      if ((*(uint *)(*(long *)(lVar14 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03aa09ac;
      }
    }
    if ((*(uint *)(lVar14 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(lVar14 + 800) & 2) != 0) {
      uVar13 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar13);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03aa09ac:
  FUN_038e4cec(&local_d8);
  local_d8 = (undefined *)((ulong)local_d8 & 0xfffffffeffff0000);
  FUN_038e4d90(&local_d8,param_2);
  FUN_03907810(lVar11,param_2);
  FUN_03a9e2f0(param_1,param_2,param_3,lVar11);
  *puVar15 = puVar15[0x270];
  puVar15[1] = puVar15[0x271];
  *(undefined8 *)(puVar15 + 2) = *(undefined8 *)(puVar15 + 0x272);
  *(undefined8 *)(puVar15 + 4) = *(undefined8 *)(puVar15 + 0x274);
  puVar15[6] = puVar15[0x276];
  puVar15[7] = puVar15[0x277];
  *(undefined8 *)(puVar15 + 8) = *(undefined8 *)(puVar15 + 0x278);
  *(undefined8 *)(puVar15 + 10) = *(undefined8 *)(puVar15 + 0x27a);
  *(undefined8 *)((long)puVar15 + 0x47) = *(undefined8 *)((long)puVar15 + 0xa07);
  *(undefined8 *)(puVar15 + 0xc) = *(undefined8 *)(puVar15 + 0x27c);
  *(undefined8 *)(puVar15 + 0xe) = *(undefined8 *)(puVar15 + 0x27e);
  *(undefined8 *)(puVar15 + 0x10) = *(undefined8 *)(puVar15 + 0x280);
  FUN_038fd1e0(puVar15 + 0x14);
  FUN_038fd2f0(puVar15 + 0x14,puVar15 + 0x284);
  *(undefined8 *)(puVar15 + 0x24) = *(undefined8 *)(puVar15 + 0x294);
  puVar15[0x26] = puVar15[0x296];
  puVar1 = puVar15 + 0x35;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 | 1;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  puVar1 = (uint *)(lVar17 + uVar19 * 0x540 + 0x14);
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
        lVar14 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar14 / 1000000);
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
  plVar20 = (long *)(lVar17 + uVar19 * 0x540 + 0x68);
  FUN_0390d290(puVar15,param_2,*plVar20,0xffffffff,0);
  iVar4 = puVar15[0x359];
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
  FUN_0390d290(puVar15 + (long)iVar4 * 0xba + 0x72,param_2,
               *plVar20 + (ulong)(1 < *(uint *)(lVar17 + uVar19 * 0x540 + 0x60)) * 0x18,0xffffffff,0
              );
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar11 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar11 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar11 + 0x1068);
  puVar9 = PTR_DAT_04bcf1e8;
  puVar8 = PTR_DAT_04bbd560;
  iVar4 = *(int *)(lVar11 + 0x1010);
  if (iVar4 != 0) {
    lVar11 = *(long *)(lVar11 + 0x1018);
    uVar19 = 0;
    uVar18 = 0;
    do {
      lVar17 = *(long *)(lVar11 + (-(uVar18 >> 0x1f) & 0xfffffff800000000 | uVar18 << 3));
      if (lVar17 != 0) {
        uVar10 = (**(code **)puVar8)(lVar17 + 8);
        (**(code **)puVar9)(uVar16,uVar19 & 0xffffffff,uVar10,*(undefined4 *)(lVar17 + 0x118));
      }
      uVar19 = uVar18 + 1;
      uVar18 = uVar19 & 0xffffffff;
    } while (iVar4 != (int)uVar19);
  }
  lVar11 = *(long *)PTR_DAT_04bbd7e8;
  iVar4 = *(int *)(lVar11 + 0x480);
  if (iVar4 != 0) {
    uVar13 = *(undefined4 *)(lVar11 + 0x464);
    uVar10 = *(undefined8 *)(param_2 + 0xb8);
    uVar16 = (**(code **)puVar8)(lVar11 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar10,uVar13,*(undefined4 *)(lVar11 + 0x460),iVar4,uVar16);
  }
  uVar2 = puVar15[0x2ee];
  if (uVar2 != 0xffffffff) {
    lVar11 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar11 + 0x5c8) >> 3 & 1) == 0) {
      uVar3 = uVar2 - *(ushort *)(lVar11 + 0x3da);
      if (*(uint *)(lVar11 + 0x368) <= uVar3) {
        uVar3 = 0;
      }
      if ((*(uint *)(*(long *)(lVar11 + 0x370) + (long)(int)uVar3 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar2 & 0x3f);
        goto LAB_03aa0d9c;
      }
    }
    if ((*(uint *)(lVar11 + 0x5c8) >> 5 & 1) == 0) {
      uVar12 = 0x112;
      uVar13 = 0x12;
    }
    else {
      uVar12 = 0x111;
      uVar13 = 0x11;
    }
    if ((*(uint *)(lVar11 + 800) & 2) != 0) {
      uVar13 = uVar12;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar13);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03aa0d9c:
  puVar15[0x2a0] = puVar15[0x32a];
  *(undefined8 *)(puVar15 + 0x2aa) = *(undefined8 *)(puVar15 + 0x334);
  puVar15[0x2a1] = puVar15[0x32b];
  *(undefined8 *)(puVar15 + 0x2a2) = *(undefined8 *)(puVar15 + 0x32c);
  *(undefined8 *)(puVar15 + 0x2a4) = *(undefined8 *)(puVar15 + 0x32e);
  puVar15[0x2a6] = puVar15[0x330];
  puVar15[0x2a7] = puVar15[0x331];
  *(undefined8 *)(puVar15 + 0x2a8) = *(undefined8 *)(puVar15 + 0x332);
  *(undefined8 *)((long)puVar15 + 0xac7) = *(undefined8 *)((long)puVar15 + 0xcef);
  *(undefined8 *)(puVar15 + 0x2b0) = *(undefined8 *)(puVar15 + 0x33a);
  *(undefined8 *)(puVar15 + 0x2ae) = *(undefined8 *)(puVar15 + 0x338);
  *(undefined8 *)(puVar15 + 0x2ac) = *(undefined8 *)(puVar15 + 0x336);
  FUN_038fd1e0(puVar15 + 0x2b4);
  FUN_038fd2f0(puVar15 + 0x2b4,puVar15 + 0x33e);
  *(undefined8 *)(puVar15 + 0x2c4) = *(undefined8 *)(puVar15 + 0x34e);
  puVar15[0x2c6] = puVar15[0x350];
  puVar1 = puVar15 + 0x2d5;
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

