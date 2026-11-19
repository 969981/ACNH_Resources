
void FUN_03af7d80(long param_1,long param_2,uint param_3,undefined4 param_4,ulong param_5)

{
  int *piVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined1 uVar6;
  ushort uVar7;
  undefined2 uVar8;
  char cVar9;
  bool bVar10;
  float fVar11;
  undefined *puVar12;
  undefined *puVar13;
  int iVar14;
  long lVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lVar23;
  undefined8 uVar24;
  int *piVar25;
  int *piVar26;
  undefined4 *puVar27;
  ulong uVar28;
  long lVar29;
  long *plVar30;
  uint uVar31;
  ulong uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  undefined *local_180;
  char *pcStack_178;
  undefined *local_108;
  undefined8 local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_ec;
  undefined2 local_dc [2];
  undefined4 local_d8;
  undefined1 local_c0;
  
  lVar23 = *(long *)(param_1 + 0x10);
  uVar5 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar5 = 0;
  }
  piVar25 = (int *)(lVar23 + (long)(int)uVar5 * 0x23c0);
  plVar30 = (long *)(piVar25 + 0xc2);
  lVar20 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x3f0;
  if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 4) {
    lVar20 = 0;
  }
  FUN_038e4cec(local_dc);
  local_dc[0] = 0;
  local_c0 = 0xff;
  if ((param_5 & 1) == 0) {
    local_c0 = 0xf;
  }
  local_d8 = 0;
  FUN_038e4d90(local_dc,param_2);
  lVar18 = *(long *)(*(long *)(lVar20 + 8) + 0x38);
  lVar29 = *(long *)PTR_DAT_04bbd510;
  lVar15 = 0x70;
  if (*(uint *)(*(long *)(lVar20 + 8) + 0x30) < 3) {
    lVar15 = 0;
  }
  iVar3 = ((uint)*(ushort *)(lVar18 + lVar15 + 0x30) & (*piVar25 << 0x19) >> 0x1f) +
          (uint)*(ushort *)(lVar18 + 0x30);
  local_180 = PTR_DAT_04bb2020 + 0x10;
  uVar33 = (uint)((float)piVar25[200] - (float)piVar25[0xc6]);
  uVar31 = (uint)((float)piVar25[0xc9] - (float)piVar25[199]);
  lVar18 = *(long *)PTR_DAT_04bb31c8;
  pcStack_178 = "gsys::RenderBufferContext::NLD";
  lVar15 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar15 == 0) {
    iVar14 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar14 = (int)lVar15 + -1;
  }
  local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar14);
  lVar15 = lVar29 + 0x10;
  uVar16 = FUN_03948e10(lVar29,param_2,lVar15 + (long)iVar14 * 0x290,&local_180,param_4,1,uVar33,
                        uVar31,1,0,1,0,1,0,0,0);
  *(undefined8 *)(piVar25 + 0x1c0) = uVar16;
  piVar1 = piVar25 + 0x114;
  FUN_01560750(piVar1,*(undefined8 *)(piVar25 + 0x1c0),*(undefined1 *)((long)piVar25 + 0x50e),
               (short)piVar25[0x143]);
  piVar26 = *(int **)(piVar25 + 0x1c0);
  piVar25[0x232] = *piVar26;
  piVar25[0x233] = piVar26[1];
  *(undefined8 *)(piVar25 + 0x234) = *(undefined8 *)(piVar26 + 2);
  *(undefined8 *)(piVar25 + 0x236) = *(undefined8 *)(piVar26 + 4);
  piVar25[0x238] = piVar26[6];
  piVar25[0x239] = piVar26[7];
  *(undefined8 *)(piVar25 + 0x23a) = *(undefined8 *)(piVar26 + 8);
  *(undefined8 *)(piVar25 + 0x23c) = *(undefined8 *)(piVar26 + 10);
  uVar16 = *(undefined8 *)(piVar26 + 0xc);
  uVar17 = *(undefined8 *)(piVar26 + 0xe);
  uVar24 = *(undefined8 *)(piVar26 + 0x10);
  *(undefined8 *)((long)piVar25 + 0x90f) = *(undefined8 *)((long)piVar26 + 0x47);
  *(undefined8 *)(piVar25 + 0x242) = uVar24;
  *(undefined8 *)(piVar25 + 0x240) = uVar17;
  *(undefined8 *)(piVar25 + 0x23e) = uVar16;
  FUN_038fd1e0(piVar25 + 0x246);
  FUN_038fd2f0(piVar25 + 0x246,piVar26 + 0x14);
  iVar14 = piVar26[0x26];
  *(undefined8 *)(piVar25 + 0x256) = *(undefined8 *)(piVar26 + 0x24);
  puVar4 = (uint *)(piVar25 + 0x267);
  piVar25[600] = iVar14;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar10) {
      *puVar4 = *puVar4 | 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  piVar26 = *(int **)(piVar25 + 0x1c0);
  piVar25[0x26a] = *piVar26;
  piVar25[0x26b] = piVar26[1];
  *(undefined8 *)(piVar25 + 0x26c) = *(undefined8 *)(piVar26 + 2);
  *(undefined8 *)(piVar25 + 0x26e) = *(undefined8 *)(piVar26 + 4);
  piVar25[0x270] = piVar26[6];
  piVar25[0x271] = piVar26[7];
  *(undefined8 *)(piVar25 + 0x272) = *(undefined8 *)(piVar26 + 8);
  *(undefined8 *)(piVar25 + 0x274) = *(undefined8 *)(piVar26 + 10);
  uVar16 = *(undefined8 *)(piVar26 + 0xc);
  uVar17 = *(undefined8 *)(piVar26 + 0xe);
  uVar24 = *(undefined8 *)(piVar26 + 0x10);
  *(undefined8 *)((long)piVar25 + 0x9ef) = *(undefined8 *)((long)piVar26 + 0x47);
  *(undefined8 *)(piVar25 + 0x27a) = uVar24;
  *(undefined8 *)(piVar25 + 0x278) = uVar17;
  *(undefined8 *)(piVar25 + 0x276) = uVar16;
  FUN_038fd1e0(piVar25 + 0x27e);
  FUN_038fd2f0(piVar25 + 0x27e,piVar26 + 0x14);
  iVar14 = piVar26[0x26];
  *(undefined8 *)(piVar25 + 0x28e) = *(undefined8 *)(piVar26 + 0x24);
  puVar4 = (uint *)(piVar25 + 0x29f);
  piVar25[0x290] = iVar14;
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar10) {
      *puVar4 = *puVar4 | 1;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  *(int **)(piVar25 + 0xca) = piVar1;
  if ((param_5 & 1) == 0) {
    lVar15 = lVar23 + (long)(int)uVar5 * 0x23c0;
    puVar27 = *(undefined4 **)(lVar18 + 0x98);
    *(undefined4 *)(lVar15 + 0x2110) = *puVar27;
    *(undefined4 *)(lVar15 + 0x2114) = puVar27[1];
    *(undefined8 *)(lVar15 + 0x2118) = *(undefined8 *)(puVar27 + 2);
    *(undefined8 *)(lVar15 + 0x2120) = *(undefined8 *)(puVar27 + 4);
    *(undefined4 *)(lVar15 + 0x2128) = puVar27[6];
    *(undefined4 *)(lVar15 + 0x212c) = puVar27[7];
    *(undefined8 *)(lVar15 + 0x2130) = *(undefined8 *)(puVar27 + 8);
    *(undefined8 *)(lVar15 + 0x2138) = *(undefined8 *)(puVar27 + 10);
    uVar24 = *(undefined8 *)(puVar27 + 0x10);
    uVar16 = *(undefined8 *)(puVar27 + 0xc);
    uVar17 = *(undefined8 *)(puVar27 + 0xe);
    *(undefined8 *)(lVar15 + 0x2157) = *(undefined8 *)((long)puVar27 + 0x47);
    *(undefined8 *)(lVar15 + 0x2150) = uVar24;
    *(undefined8 *)(lVar15 + 0x2148) = uVar17;
    *(undefined8 *)(&DAT_00002140 + lVar15) = uVar16;
    FUN_038fd1e0(lVar15 + 0x2160);
    FUN_038fd2f0(lVar15 + 0x2160,puVar27 + 0x14);
    uVar22 = puVar27[0x26];
    *(undefined8 *)(lVar15 + 0x21a0) = *(undefined8 *)(puVar27 + 0x24);
    *(undefined4 *)(lVar15 + 0x21a8) = uVar22;
    puVar4 = (uint *)(lVar15 + 0x21e4);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar10) {
        *puVar4 = *puVar4 | 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    puVar27 = *(undefined4 **)(lVar18 + 0x18);
    lVar15 = lVar23 + (long)(int)uVar5 * 0x23c0;
    *(undefined4 *)(lVar15 + 0x22d8) = *puVar27;
    *(undefined4 *)(lVar15 + 0x22dc) = puVar27[1];
    *(undefined8 *)(lVar15 + 0x22e0) = *(undefined8 *)(puVar27 + 2);
    *(undefined8 *)(lVar15 + 0x22e8) = *(undefined8 *)(puVar27 + 4);
    *(undefined4 *)(lVar15 + 0x22f0) = puVar27[6];
    *(undefined4 *)(lVar15 + 0x22f4) = puVar27[7];
    *(undefined8 *)(lVar15 + 0x22f8) = *(undefined8 *)(puVar27 + 8);
    *(undefined8 *)(lVar15 + 0x2300) = *(undefined8 *)(puVar27 + 10);
    uVar24 = *(undefined8 *)(puVar27 + 0x10);
    uVar16 = *(undefined8 *)(puVar27 + 0xc);
    uVar17 = *(undefined8 *)(puVar27 + 0xe);
    *(undefined8 *)(lVar15 + 0x231f) = *(undefined8 *)((long)puVar27 + 0x47);
    *(undefined8 *)(lVar15 + 0x2318) = uVar24;
    *(undefined8 *)(lVar15 + 0x2310) = uVar17;
    *(undefined8 *)(lVar15 + 0x2308) = uVar16;
    FUN_038fd1e0(lVar15 + 9000);
    FUN_038fd2f0(lVar15 + 9000,puVar27 + 0x14);
    uVar22 = puVar27[0x26];
    *(undefined8 *)(lVar15 + 0x2368) = *(undefined8 *)(puVar27 + 0x24);
    *(undefined4 *)(lVar15 + 0x2370) = uVar22;
    puVar4 = (uint *)(lVar15 + 0x23ac);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar10) {
        *puVar4 = *puVar4 | 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
  }
  else {
    lVar18 = 0xe0;
    if (*(uint *)(*(long *)(lVar20 + 8) + 0x30) < 5) {
      lVar18 = 0;
    }
    uVar7 = *(ushort *)(*(long *)(*(long *)(lVar20 + 8) + 0x38) + lVar18 + 0x30);
    local_180 = PTR_DAT_04bb2020 + 0x10;
    pcStack_178 = "gsys::RenderBufferContext::EdgeAdjust";
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar18 == 0) {
      iVar14 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar14 = (int)lVar18 + -1;
    }
    local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar14);
    iVar3 = iVar3 + (uint)uVar7;
    uVar16 = FUN_03948e10(lVar29,param_2,lVar15 + (long)iVar14 * 0x290,&local_180,10,1,uVar33,uVar31
                          ,1,0,1,0,1,0,0,0);
    lVar19 = lVar23 + (long)(int)uVar5 * 0x23c0;
    *(undefined8 *)(lVar19 + 0x21f0) = uVar16;
    local_180 = PTR_DAT_04bb2020 + 0x10;
    pcStack_178 = "gsys::RenderBufferContext::BlurAdjust";
    lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar18 == 0) {
      iVar14 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar14 = (int)lVar18 + -1;
    }
    local_108 = (undefined *)CONCAT44(local_108._4_4_,iVar14);
    uVar16 = FUN_03948e10(lVar29,param_2,lVar15 + (long)iVar14 * 0x290,&local_180,0x1d,1,uVar33 >> 1
                          ,uVar31 >> 1,1,0,1,0,1,0,0,0);
    uVar17 = *(undefined8 *)(lVar19 + 0x21f0);
    lVar15 = lVar23 + (long)(int)uVar5 * 0x23c0;
    uVar6 = *(undefined1 *)(lVar19 + 0x20ee);
    uVar8 = *(undefined2 *)(lVar19 + 0x20ec);
    *(undefined8 *)(lVar15 + 0x23b8) = uVar16;
    FUN_01560750(lVar19 + 0x2030,uVar17,uVar6,uVar8);
    puVar27 = *(undefined4 **)(lVar19 + 0x21f0);
    *(undefined4 *)(lVar15 + 0x2110) = *puVar27;
    *(undefined4 *)(lVar15 + 0x2114) = puVar27[1];
    *(undefined8 *)(lVar15 + 0x2118) = *(undefined8 *)(puVar27 + 2);
    *(undefined8 *)(lVar15 + 0x2120) = *(undefined8 *)(puVar27 + 4);
    *(undefined4 *)(lVar15 + 0x2128) = puVar27[6];
    *(undefined4 *)(lVar15 + 0x212c) = puVar27[7];
    *(undefined8 *)(lVar15 + 0x2130) = *(undefined8 *)(puVar27 + 8);
    *(undefined8 *)(lVar15 + 0x2138) = *(undefined8 *)(puVar27 + 10);
    uVar24 = *(undefined8 *)(puVar27 + 0x10);
    uVar16 = *(undefined8 *)(puVar27 + 0xc);
    uVar17 = *(undefined8 *)(puVar27 + 0xe);
    *(undefined8 *)(lVar15 + 0x2157) = *(undefined8 *)((long)puVar27 + 0x47);
    *(undefined8 *)(lVar15 + 0x2150) = uVar24;
    *(undefined8 *)(lVar15 + 0x2148) = uVar17;
    *(undefined8 *)(&DAT_00002140 + lVar15) = uVar16;
    FUN_038fd1e0(lVar15 + 0x2160);
    FUN_038fd2f0(lVar15 + 0x2160,puVar27 + 0x14);
    uVar22 = puVar27[0x26];
    *(undefined8 *)(lVar15 + 0x21a0) = *(undefined8 *)(puVar27 + 0x24);
    *(undefined4 *)(lVar15 + 0x21a8) = uVar22;
    puVar4 = (uint *)(lVar15 + 0x21e4);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar10) {
        *puVar4 = *puVar4 | 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    lVar18 = lVar23 + (long)(int)uVar5 * 0x23c0;
    FUN_01560750(lVar18 + 0x21f8,*(undefined8 *)(lVar15 + 0x23b8),*(undefined1 *)(lVar18 + 0x22b6),
                 *(undefined2 *)(lVar18 + 0x22b4));
    puVar27 = *(undefined4 **)(lVar15 + 0x23b8);
    *(undefined4 *)(lVar18 + 0x22d8) = *puVar27;
    *(undefined4 *)(lVar18 + 0x22dc) = puVar27[1];
    *(undefined8 *)(lVar18 + 0x22e0) = *(undefined8 *)(puVar27 + 2);
    *(undefined8 *)(lVar18 + 0x22e8) = *(undefined8 *)(puVar27 + 4);
    *(undefined4 *)(lVar18 + 0x22f0) = puVar27[6];
    *(undefined4 *)(lVar18 + 0x22f4) = puVar27[7];
    *(undefined8 *)(lVar18 + 0x22f8) = *(undefined8 *)(puVar27 + 8);
    *(undefined8 *)(lVar18 + 0x2300) = *(undefined8 *)(puVar27 + 10);
    uVar24 = *(undefined8 *)(puVar27 + 0x10);
    uVar16 = *(undefined8 *)(puVar27 + 0xc);
    uVar17 = *(undefined8 *)(puVar27 + 0xe);
    *(undefined8 *)(lVar18 + 0x231f) = *(undefined8 *)((long)puVar27 + 0x47);
    *(undefined8 *)(lVar18 + 0x2318) = uVar24;
    *(undefined8 *)(lVar18 + 0x2310) = uVar17;
    *(undefined8 *)(lVar18 + 0x2308) = uVar16;
    FUN_038fd1e0(lVar18 + 9000);
    FUN_038fd2f0(lVar18 + 9000,puVar27 + 0x14);
    uVar22 = puVar27[0x26];
    *(undefined8 *)(lVar18 + 0x2368) = *(undefined8 *)(puVar27 + 0x24);
    *(undefined4 *)(lVar18 + 0x2370) = uVar22;
    puVar4 = (uint *)(lVar18 + 0x23ac);
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
      if (bVar10) {
        *puVar4 = *puVar4 | 1;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    *(long *)(piVar25 + 0xcc) = lVar19 + 0x2030;
    lVar15 = lVar23 + (long)(int)uVar5 * 0x23c0;
    *(uint *)(lVar15 + 8) = *(uint *)(lVar15 + 8) | 0x2000;
  }
  (**(code **)(*plVar30 + 0x38))(plVar30,param_2);
  FUN_038e77e4(piVar25 + 0x2a8,param_2,plVar30);
  lVar20 = *(long *)(lVar20 + 8);
  if (iVar3 == 0) {
    lVar20 = *(long *)(lVar20 + 0x18);
  }
  else {
    uVar31 = iVar3 - 1;
    if (*(uint *)(lVar20 + 0x20) <= uVar31) {
      uVar31 = 0;
    }
    lVar20 = *(long *)(lVar20 + 0x28) + (ulong)uVar31 * 0x150;
  }
  FUN_03907810(lVar20,param_2);
  puVar4 = (uint *)(lVar20 + 0x14);
  do {
    uVar31 = *puVar4;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar10) {
      *puVar4 = uVar31 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar31 & 0x7fffffff) != 0) {
    if ((int)uVar31 < 0) {
      if ((int)*puVar4 < 0) {
        lVar15 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar15 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar4 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar10) {
      *puVar4 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  FUN_0390d290(piVar25 + 0x1fa,param_2,*(undefined8 *)(lVar20 + 0x68),0xffffffff,0);
  lVar15 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_3) {
    param_3 = 0;
  }
  do {
    uVar31 = *puVar4;
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar10) {
      *puVar4 = uVar31 | 0x80000000;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  if ((uVar31 & 0x7fffffff) != 0) {
    if ((int)uVar31 < 0) {
      if ((int)*puVar4 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar4 < 0);
      }
    }
    else {
      FUN_03907b80(lVar20);
    }
  }
  do {
    cVar9 = '\x01';
    bVar10 = (bool)ExclusiveMonitorPass(puVar4,0x10);
    if (bVar10) {
      *puVar4 = 0;
      cVar9 = ExclusiveMonitorsStatus();
    }
  } while (cVar9 != '\0');
  lVar18 = 0x30;
  if (*(uint *)(lVar20 + 0x60) < 3) {
    lVar18 = 0;
  }
  FUN_0390d290(lVar15 + (long)(int)param_3 * 0x23c0 + 0x1088,param_2,
               *(long *)(lVar20 + 0x68) + lVar18,0xffffffff,0);
  lVar15 = lVar23 + (long)(int)uVar5 * 0x23c0 + 0x1fb0;
  FUN_01557430(lVar20,param_2,0,lVar15,0);
  uVar16 = *(undefined8 *)(param_2 + 0xb8);
  lVar20 = *(long *)PTR_DAT_04bbd7e0;
  (**(code **)PTR_DAT_04bcf1a8)(uVar16,0x10,lVar20 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar16,0x10,lVar20 + 0x1068);
  puVar13 = PTR_DAT_04bcf1e8;
  puVar12 = PTR_DAT_04bbd560;
  iVar3 = *(int *)(lVar20 + 0x1010);
  if (iVar3 != 0) {
    lVar20 = *(long *)(lVar20 + 0x1018);
    uVar32 = 0;
    uVar28 = 0;
    do {
      lVar18 = *(long *)(lVar20 + (-(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3));
      if (lVar18 != 0) {
        uVar17 = (**(code **)puVar12)(lVar18 + 8);
        (**(code **)puVar13)(uVar16,uVar32 & 0xffffffff,uVar17,*(undefined4 *)(lVar18 + 0x118));
      }
      uVar32 = uVar28 + 1;
      uVar28 = uVar32 & 0xffffffff;
    } while (iVar3 != (int)uVar32);
  }
  if ((*(byte *)(param_1 + 0x1c) & 1) == 0) {
    lVar20 = *(long *)PTR_DAT_04bbd7e8;
    iVar3 = *(int *)(lVar20 + 0x480);
    if (iVar3 != 0) {
      uVar22 = *(undefined4 *)(lVar20 + 0x464);
      uVar17 = *(undefined8 *)(param_2 + 0xb8);
      uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar17,uVar22,*(undefined4 *)(lVar20 + 0x460),iVar3,uVar16);
    }
  }
  plVar30 = (long *)PTR_DAT_04bc1010;
  uVar31 = piVar25[0x12a];
  if (uVar31 != 0xffffffff) {
    lVar20 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar20 + 0x5c8) >> 3 & 1) == 0) {
      uVar33 = uVar31 - *(ushort *)(lVar20 + 0x3da);
      if (*(uint *)(lVar20 + 0x368) <= uVar33) {
        uVar33 = 0;
      }
      if ((*(uint *)(*(long *)(lVar20 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar31 & 0x3f);
        goto LAB_03af8938;
      }
    }
    if ((*(uint *)(lVar20 + 0x5c8) >> 5 & 1) == 0) {
      uVar21 = 0x112;
      uVar22 = 0x12;
    }
    else {
      uVar21 = 0x111;
      uVar22 = 0x11;
    }
    if ((*(uint *)(lVar20 + 800) & 2) != 0) {
      uVar22 = uVar21;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03af8938:
  if (((*(byte *)(lVar23 + (long)(int)uVar5 * 0x23c0 + 5) >> 6 & 1) != 0) &&
     (lVar20 = lVar23 + (long)(int)uVar5 * 0x23c0, (*(byte *)(lVar20 + 9) >> 5 & 1) != 0)) {
    *(long *)(piVar25 + 0x2ba) = lVar23 + (long)(int)uVar5 * 0x23c0 + 0x21f8;
    (**(code **)(*(long *)(piVar25 + 0x2b2) + 0x38))(piVar25 + 0x2b2,param_2);
    local_f8 = 0xff7fffffff7fffff;
    local_108 = PTR_DAT_04bd0f08 + 0x10;
    local_100 = 0x7f7fffff7f7fffff;
    local_f0 = *(uint *)PTR_DAT_04bd0ea8;
    local_ec = 0x3f80000000000000;
    if (local_f0 < 6) {
      if ((1 << (ulong)(local_f0 & 0x1f) & 0x39U) == 0) {
        fVar34 = (float)piVar25[0x2b5];
        fVar35 = (float)piVar25[0x2b4];
      }
      else {
        fVar34 = (float)piVar25[0x2b4];
        fVar35 = (float)piVar25[0x2b5];
      }
      fVar37 = fVar34;
      fVar11 = 0.0;
      if (fVar34 <= 0.0) {
        fVar37 = 0.0;
        fVar11 = fVar34;
      }
      fVar36 = fVar35;
      fVar34 = 0.0;
      if (fVar35 <= 0.0) {
        fVar36 = 0.0;
        fVar34 = fVar35;
      }
      local_100 = CONCAT44(fVar34,fVar11);
      local_f8 = CONCAT44(fVar36,fVar37);
    }
    puVar4 = (uint *)(lVar20 + 8);
    FUN_038e77e4(&local_108,param_2,piVar25 + 0x2b2);
    FUN_038e4cec(&local_180);
    local_180 = (undefined *)(((ulong)local_180 >> 0x10 & 0xffff) << 0x10);
    FUN_038e4d90(&local_180,param_2);
    lVar20 = *(long *)(*(long *)PTR_DAT_04bd1650 + 0x40) + 0x540;
    if (*(uint *)(*(long *)PTR_DAT_04bd1650 + 0x38) < 5) {
      lVar20 = 0;
    }
    lVar29 = *(long *)(*(long *)(lVar20 + 8) + 0x28);
    lVar18 = 7;
    if (*(uint *)(*(long *)(lVar20 + 8) + 0x20) < 8) {
      lVar18 = 0;
    }
    lVar20 = lVar29 + lVar18 * 0x150;
    FUN_03907810(lVar20,param_2);
    puVar2 = (uint *)(lVar20 + 0x14);
    do {
      uVar31 = *puVar2;
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *puVar2 = uVar31 | 0x80000000;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    if ((uVar31 & 0x7fffffff) != 0) {
      if ((int)uVar31 < 0) {
        if ((int)*puVar2 < 0) {
          lVar19 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar19 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar2 < 0);
        }
      }
      else {
        FUN_03907b80(lVar20);
      }
    }
    do {
      cVar9 = '\x01';
      bVar10 = (bool)ExclusiveMonitorPass(puVar2,0x10);
      if (bVar10) {
        *puVar2 = 0;
        cVar9 = ExclusiveMonitorsStatus();
      }
    } while (cVar9 != '\0');
    lVar29 = lVar29 + lVar18 * 0x150;
    FUN_0390d290(lVar23 + (long)(int)uVar5 * 0x23c0 + 0x2110,param_2,
                 *(long *)(lVar29 + 0x68) + (ulong)(1 < *(uint *)(lVar29 + 0x60)) * 0x18,0xffffffff,
                 0);
    FUN_01557430(lVar20,param_2,0,lVar15,0);
    lVar20 = *(long *)PTR_DAT_04bbd7e8;
    iVar3 = *(int *)(lVar20 + 0x480);
    if (iVar3 != 0) {
      uVar22 = *(undefined4 *)(lVar20 + 0x464);
      uVar17 = *(undefined8 *)(param_2 + 0xb8);
      uVar16 = (**(code **)PTR_DAT_04bbd560)(lVar20 + 0x488);
      (**(code **)PTR_DAT_04bbd568)(uVar17,uVar22,*(undefined4 *)(lVar20 + 0x460),iVar3,uVar16);
    }
    *(int **)(piVar25 + 0x2ba) = piVar25 + 0x2cc;
    *puVar4 = *puVar4 | 0x4000;
    plVar30 = (long *)PTR_DAT_04bc1010;
  }
  *(int **)(piVar25 + 0xca) = piVar25 + 0xdc;
  piVar25[0xcc] = 0;
  piVar25[0xcd] = 0;
  lVar23 = lVar23 + (long)(int)uVar5 * 0x23c0;
  *(uint *)(lVar23 + 8) = *(uint *)(lVar23 + 8) | 1;
  lVar23 = *(long *)(lVar23 + 0x1fa8);
  if ((*(byte *)(lVar23 + 0x498) >> 4 & 1) == 0) {
    *(int **)(lVar23 + 0x4f8) = piVar1;
    *(uint *)(lVar23 + 0x13f4) = *(uint *)(lVar23 + 0x13f4) | 0xf0000000;
    *(uint *)(lVar23 + 0x13fc) = *(uint *)(lVar23 + 0x13fc) | 0xf0000000;
  }
  if ((*(byte *)(param_1 + 0x1c) >> 6 & 1) == 0) {
    uVar22 = 0x11;
    if ((*(uint *)(*plVar30 + 800) & 2) != 0) {
      uVar22 = 0x111;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
  return;
}

