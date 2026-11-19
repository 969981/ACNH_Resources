
void FUN_03a2e270(long param_1,long param_2,uint param_3,long *param_4,uint param_5)

{
  long *plVar1;
  undefined *puVar2;
  uint *puVar3;
  uint *puVar4;
  undefined *puVar5;
  uint *puVar6;
  char *pcVar7;
  long lVar8;
  ushort uVar9;
  ushort uVar10;
  short sVar11;
  int iVar12;
  char cVar13;
  bool bVar14;
  ushort uVar15;
  bool bVar16;
  int iVar17;
  long lVar18;
  undefined8 uVar19;
  undefined4 *puVar20;
  undefined1 **ppuVar21;
  undefined4 uVar22;
  long lVar23;
  undefined4 uVar24;
  long lVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  undefined8 uVar32;
  uint uVar33;
  long lVar34;
  undefined4 *puVar35;
  undefined4 *puVar36;
  undefined4 *puVar37;
  undefined8 uVar38;
  long *plVar39;
  long lVar40;
  int iVar41;
  ulong uVar42;
  long lVar43;
  undefined4 *puVar44;
  ulong uVar45;
  uint uVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float local_518;
  float fStack_514;
  undefined4 local_510;
  undefined4 uStack_50c;
  float local_508;
  float fStack_504;
  float local_500;
  float local_4fc;
  undefined8 local_4f8;
  undefined8 local_4f0;
  undefined8 local_4e8;
  float fStack_4e0;
  float fStack_4dc;
  undefined8 local_4d8;
  uint local_4d0;
  undefined8 local_4cc;
  undefined8 local_4c0;
  undefined8 local_4b8;
  undefined1 *local_4b0;
  undefined8 local_4a8;
  undefined1 *local_4a0;
  undefined8 local_498;
  undefined1 *local_490;
  undefined8 local_488;
  
  uVar46 = *(uint *)(param_1 + 0x18) & param_3;
  if (*(uint *)(param_1 + 0x5d0) <= uVar46) {
    uVar46 = 0;
  }
  if (*(char *)(param_1 + 0x7d8) == '\0') {
    return;
  }
  lVar25 = *(long *)(*(long *)(param_1 + 0x5d8) + (long)(int)uVar46 * 8);
  if (param_3 == 0xffffffff) {
    uVar46 = *(uint *)(param_1 + 8);
  }
  else {
    uVar46 = *(uint *)(param_1 + 8) >> (ulong)(param_3 & 0x1f) & 1;
  }
  if (uVar46 == 0) {
    return;
  }
  uVar46 = param_3;
  if (*(uint *)(param_1 + 0x5c0) <= param_3) {
    uVar46 = 0;
  }
  puVar44 = (undefined4 *)(*(long *)(param_1 + 0x5c8) + (long)(int)uVar46 * 0x808);
  lVar34 = *(long *)PTR_DAT_04bbd510;
  lVar18 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar18 == 0) {
    iVar17 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar17 = (int)lVar18 + -1;
  }
  local_4c0 = (undefined *)CONCAT44(local_4c0._4_4_,iVar17);
  if ((*(uint *)(lVar34 + (long)iVar17 * 0x290 + 0x298) & 1) != 0) {
    puVar44[0x1fa] = 0;
    *(byte *)(puVar44 + 0x1f8) = *(byte *)(puVar44 + 0x1f8) & 0xfe;
  }
  lVar18 = *param_4;
  lVar34 = param_4[1];
  fVar50 = *(float *)(lVar34 + 0x14) - *(float *)(lVar34 + 0xc);
  fVar47 = *(float *)(lVar34 + 0x10) - *(float *)(lVar34 + 8);
  fVar52 = fVar50;
  if (1 < *(int *)(lVar34 + 0x18) - 1U) {
    fVar52 = fVar47;
    fVar47 = fVar50;
  }
  fVar52 = (fVar52 / *(float *)(lVar18 + 8)) *
           (*(float *)(lVar18 + 0x18) - *(float *)(lVar18 + 0x10));
  fVar47 = (fVar47 / *(float *)(lVar18 + 0xc)) *
           (*(float *)(lVar18 + 0x1c) - *(float *)(lVar18 + 0x14));
  bVar16 = true;
  if ((64.0 <= fVar52) && (bVar16 = false, !NAN(fVar47))) {
    bVar16 = fVar47 < 64.0;
  }
  if (bVar16) {
    puVar35 = *(undefined4 **)(*(long *)PTR_DAT_04bb31c8 + 0x18);
    *puVar44 = *puVar35;
    puVar44[1] = puVar35[1];
    *(undefined8 *)(puVar44 + 2) = *(undefined8 *)(puVar35 + 2);
    *(undefined8 *)(puVar44 + 4) = *(undefined8 *)(puVar35 + 4);
    puVar44[6] = puVar35[6];
    puVar44[7] = puVar35[7];
    *(undefined8 *)(puVar44 + 8) = *(undefined8 *)(puVar35 + 8);
    *(undefined8 *)(puVar44 + 10) = *(undefined8 *)(puVar35 + 10);
    uVar32 = *(undefined8 *)(puVar35 + 0x10);
    uVar38 = *(undefined8 *)(puVar35 + 0xc);
    uVar19 = *(undefined8 *)(puVar35 + 0xe);
    *(undefined8 *)((long)puVar44 + 0x47) = *(undefined8 *)((long)puVar35 + 0x47);
    *(undefined8 *)(puVar44 + 0xe) = uVar19;
    *(undefined8 *)(puVar44 + 0x10) = uVar32;
    *(undefined8 *)(puVar44 + 0xc) = uVar38;
    FUN_038fd1e0(puVar44 + 0x14);
    FUN_038fd2f0(puVar44 + 0x14,puVar35 + 0x14);
    uVar22 = puVar35[0x26];
    *(undefined8 *)(puVar44 + 0x24) = *(undefined8 *)(puVar35 + 0x24);
    puVar3 = puVar44 + 0x35;
    puVar44[0x26] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    return;
  }
  fVar50 = (float)puVar44[0x1f0];
  fVar53 = (float)puVar44[0x1f1];
  uVar46 = *(uint *)(*(long *)(lVar18 + 0x20) + 0x58);
  if (uVar46 != 0xffffffff) {
    lVar18 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
      uVar33 = uVar46 - *(ushort *)(lVar18 + 0x3da);
      if (*(uint *)(lVar18 + 0x368) <= uVar33) {
        uVar33 = 0;
      }
      if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
        goto LAB_03a2e520;
      }
    }
    if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
      uVar24 = 0x112;
      uVar22 = 0x12;
    }
    else {
      uVar24 = 0x111;
      uVar22 = 0x11;
    }
    if ((*(uint *)(lVar18 + 800) & 2) != 0) {
      uVar22 = uVar24;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a2e520:
  puVar36 = (undefined4 *)param_4[2];
  puVar35 = puVar44 + 0x1f6;
  if (puVar36 == (undefined4 *)0x0) {
    puVar36 = (undefined4 *)(*(long *)(*param_4 + 0x20) + 8);
  }
  puVar44[0x70] = *puVar36;
  puVar44[0x71] = puVar36[1];
  *(undefined8 *)(puVar44 + 0x72) = *(undefined8 *)(puVar36 + 2);
  *(undefined8 *)(puVar44 + 0x74) = *(undefined8 *)(puVar36 + 4);
  puVar44[0x76] = puVar36[6];
  puVar44[0x77] = puVar36[7];
  *(undefined8 *)(puVar44 + 0x78) = *(undefined8 *)(puVar36 + 8);
  *(undefined8 *)(puVar44 + 0x7a) = *(undefined8 *)(puVar36 + 10);
  uVar32 = *(undefined8 *)(puVar36 + 0x10);
  uVar38 = *(undefined8 *)(puVar36 + 0xc);
  uVar19 = *(undefined8 *)(puVar36 + 0xe);
  *(undefined8 *)((long)puVar44 + 0x207) = *(undefined8 *)((long)puVar36 + 0x47);
  *(undefined8 *)(puVar44 + 0x7e) = uVar19;
  *(undefined8 *)(puVar44 + 0x80) = uVar32;
  *(undefined8 *)(puVar44 + 0x7c) = uVar38;
  FUN_038fd1e0(puVar44 + 0x84);
  FUN_038fd2f0(puVar44 + 0x84,puVar36 + 0x14);
  uVar22 = puVar36[0x26];
  *(undefined8 *)(puVar44 + 0x94) = *(undefined8 *)(puVar36 + 0x24);
  puVar3 = puVar44 + 0xa5;
  puVar44[0x96] = uVar22;
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = *puVar3 | 1;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar18 = param_4[4];
  puVar36 = (undefined4 *)param_4[3];
  if ((puVar36 == (undefined4 *)0x0) || ((*(ushort *)(param_1 + 0x7e0) >> 1 & 1) != 0)) {
    lVar34 = *(long *)(*param_4 + 0x60);
    if (lVar34 == 0) goto LAB_03a2e758;
    puVar44[0x38] = *(undefined4 *)(lVar34 + 8);
    puVar44[0x39] = *(undefined4 *)(lVar34 + 0xc);
    *(undefined8 *)(puVar44 + 0x3a) = *(undefined8 *)(lVar34 + 0x10);
    *(undefined8 *)(puVar44 + 0x3c) = *(undefined8 *)(lVar34 + 0x18);
    puVar44[0x3e] = *(undefined4 *)(lVar34 + 0x20);
    puVar44[0x3f] = *(undefined4 *)(lVar34 + 0x24);
    *(undefined8 *)(puVar44 + 0x40) = *(undefined8 *)(lVar34 + 0x28);
    *(undefined8 *)(puVar44 + 0x42) = *(undefined8 *)(lVar34 + 0x30);
    uVar38 = *(undefined8 *)(lVar34 + 0x38);
    uVar19 = *(undefined8 *)(lVar34 + 0x40);
    uVar32 = *(undefined8 *)(lVar34 + 0x48);
    *(undefined8 *)((long)puVar44 + 0x127) = *(undefined8 *)(lVar34 + 0x4f);
    *(undefined8 *)(puVar44 + 0x46) = uVar19;
    *(undefined8 *)(puVar44 + 0x48) = uVar32;
    *(undefined8 *)(puVar44 + 0x44) = uVar38;
    FUN_038fd1e0(puVar44 + 0x4c);
    FUN_038fd2f0(puVar44 + 0x4c,lVar34 + 0x58);
    uVar22 = *(undefined4 *)(lVar34 + 0xa0);
    *(undefined8 *)(puVar44 + 0x5c) = *(undefined8 *)(lVar34 + 0x98);
    puVar3 = puVar44 + 0x6d;
    puVar44[0x5e] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    bVar16 = false;
  }
  else {
    puVar44[0x38] = *puVar36;
    puVar44[0x39] = puVar36[1];
    *(undefined8 *)(puVar44 + 0x3a) = *(undefined8 *)(puVar36 + 2);
    *(undefined8 *)(puVar44 + 0x3c) = *(undefined8 *)(puVar36 + 4);
    puVar44[0x3e] = puVar36[6];
    puVar44[0x3f] = puVar36[7];
    *(undefined8 *)(puVar44 + 0x40) = *(undefined8 *)(puVar36 + 8);
    *(undefined8 *)(puVar44 + 0x42) = *(undefined8 *)(puVar36 + 10);
    uVar38 = *(undefined8 *)(puVar36 + 0xc);
    uVar19 = *(undefined8 *)(puVar36 + 0xe);
    uVar32 = *(undefined8 *)(puVar36 + 0x10);
    *(undefined8 *)((long)puVar44 + 0x127) = *(undefined8 *)((long)puVar36 + 0x47);
    *(undefined8 *)(puVar44 + 0x46) = uVar19;
    *(undefined8 *)(puVar44 + 0x48) = uVar32;
    *(undefined8 *)(puVar44 + 0x44) = uVar38;
    FUN_038fd1e0(puVar44 + 0x4c);
    FUN_038fd2f0(puVar44 + 0x4c,puVar36 + 0x14);
    uVar22 = puVar36[0x26];
    *(undefined8 *)(puVar44 + 0x5c) = *(undefined8 *)(puVar36 + 0x24);
    puVar3 = puVar44 + 0x6d;
    puVar44[0x5e] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
LAB_03a2e758:
    bVar16 = (char)lVar18 != '\0';
  }
  puVar36 = (undefined4 *)param_4[5];
  if (puVar36 != (undefined4 *)0x0) {
    puVar44[0xa8] = *puVar36;
    puVar44[0xa9] = puVar36[1];
    *(undefined8 *)(puVar44 + 0xaa) = *(undefined8 *)(puVar36 + 2);
    *(undefined8 *)(puVar44 + 0xac) = *(undefined8 *)(puVar36 + 4);
    puVar44[0xae] = puVar36[6];
    puVar44[0xaf] = puVar36[7];
    *(undefined8 *)(puVar44 + 0xb0) = *(undefined8 *)(puVar36 + 8);
    *(undefined8 *)(puVar44 + 0xb2) = *(undefined8 *)(puVar36 + 10);
    uVar32 = *(undefined8 *)(puVar36 + 0x10);
    uVar38 = *(undefined8 *)(puVar36 + 0xc);
    uVar19 = *(undefined8 *)(puVar36 + 0xe);
    *(undefined8 *)((long)puVar44 + 0x2e7) = *(undefined8 *)((long)puVar36 + 0x47);
    *(undefined8 *)(puVar44 + 0xb8) = uVar32;
    *(undefined8 *)(puVar44 + 0xb6) = uVar19;
    *(undefined8 *)(puVar44 + 0xb4) = uVar38;
    FUN_038fd1e0(puVar44 + 0xbc);
    FUN_038fd2f0(puVar44 + 0xbc,puVar36 + 0x14);
    uVar22 = puVar36[0x26];
    *(undefined8 *)(puVar44 + 0xcc) = *(undefined8 *)(puVar36 + 0x24);
    puVar3 = puVar44 + 0xdd;
    puVar44[0xce] = uVar22;
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar14) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  lVar18 = *(long *)PTR_DAT_04bbd7e0;
  uVar38 = *(undefined8 *)(param_2 + 0xb8);
  (**(code **)PTR_DAT_04bcf1a8)(uVar38,0x10,lVar18 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar38,0x10,lVar18 + 0x1068);
  puVar5 = PTR_DAT_04bcf1e8;
  puVar2 = PTR_DAT_04bbd560;
  iVar17 = *(int *)(lVar18 + 0x1010);
  if (iVar17 != 0) {
    lVar18 = *(long *)(lVar18 + 0x1018);
    uVar42 = 0;
    uVar45 = 0;
    do {
      lVar34 = *(long *)(lVar18 + (-(uVar45 >> 0x1f) & 0xfffffff800000000 | uVar45 << 3));
      if (lVar34 != 0) {
        uVar19 = (**(code **)puVar2)(lVar34 + 8);
        (**(code **)puVar5)(uVar38,uVar42 & 0xffffffff,uVar19,*(undefined4 *)(lVar34 + 0x118));
      }
      uVar42 = uVar45 + 1;
      uVar45 = uVar42 & 0xffffffff;
    } while (iVar17 != (int)uVar42);
  }
  uVar46 = (uint)(fVar52 * fVar50 * fVar53);
  lVar18 = 0;
  uVar33 = (uint)(fVar47 * fVar50 * fVar53);
  plVar1 = (long *)(puVar44 + 0xfa);
  if (((*(ushort *)(param_1 + 0x7e0) >> 7 & 1) != 0) && (param_4[2] == 0)) {
    if (*(int *)(lVar25 + 0x510) == 0) {
      fVar50 = (float)uVar46;
      local_4c0 = PTR_DAT_04bb2020 + 0x10;
      fVar50 = fVar50 + fVar50;
      fVar53 = (float)uVar33;
      fVar53 = fVar53 + fVar53;
      local_4b8 = "reduce";
      lVar18 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,(int)fVar50,(int)fVar53,1,0,0,1);
      puVar36 = puVar44 + 0xe0;
      puVar37 = puVar44 + 0x13c;
      puVar44[0xe2] = fVar50;
      puVar44[0xe3] = fVar53;
      fVar47 = fVar50;
      fVar52 = 0.0;
      if (fVar50 <= 0.0) {
        fVar47 = 0.0;
        fVar52 = fVar50;
      }
      fVar50 = fVar53;
      if (fVar53 <= 0.0) {
        fVar50 = 0.0;
      }
      fVar48 = 0.0;
      if (fVar53 <= 0.0) {
        fVar48 = fVar53;
      }
      puVar44[0xe4] = fVar52;
      puVar44[0xe6] = fVar47;
      puVar44[0xe7] = fVar50;
      puVar44[0xe5] = fVar48;
      if (*(char *)((long)puVar44 + 0x5ae) != '\0') {
        puVar3 = puVar44 + 0x16a;
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar14) {
            *puVar3 = *puVar3 | 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        *(undefined1 *)((long)puVar44 + 0x5ae) = 0;
      }
      FUN_01560750(puVar37,lVar18,0,*(undefined2 *)(puVar44 + 0x16b));
      *(undefined4 **)(puVar44 + 0xe8) = puVar37;
      FUN_038e4cec(&local_4c0);
      local_4c0 = (undefined *)((ulong)local_4c0 & 0xfffffffeffff0000);
      FUN_038e4d90(&local_4c0,param_2);
      FUN_038e7760(&local_4e8,puVar36);
      FUN_038e77e4(&local_4e8,param_2,puVar36);
      (**(code **)(*(long *)(puVar44 + 0xe0) + 0x38))(puVar36,param_2);
      if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x42) {
        uVar38 = 0;
      }
      else {
        uVar38 = *(undefined8 *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x208);
      }
      FUN_03907810(uVar38,param_2);
      FUN_03a31520(param_2,uVar38,puVar44 + 0x70);
      FUN_03902b58(puVar37,param_2);
      FUN_0390d060(puVar44 + 0x70,lVar18);
    }
    else {
      lVar18 = 0;
    }
  }
  uVar46 = uVar46 + 3;
  uVar33 = uVar33 + 3;
  iVar17 = 0;
  puVar2 = PTR_DAT_04bb2020 + 0x10;
  do {
    if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
      pcVar7 = "detect0";
      if (iVar17 != 0) {
        pcVar7 = "detect1";
      }
      plVar39 = plVar1 + (long)iVar17 * 0x3d;
      local_4c0 = puVar2;
      local_4b8 = pcVar7;
      lVar34 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,uVar46 & 0xfffffffc,uVar33 & 0xfffffffc,
                            1,0,0,1);
      *plVar39 = lVar34;
      local_4c0 = puVar2;
      local_4b8 = pcVar7;
      lVar34 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,(uVar46 & 0xfffffffc) >> 1,
                            (uVar33 & 0xfffffffc) >> 1,1,0,0,1);
      plVar39[1] = lVar34;
      local_4c0 = puVar2;
      local_4b8 = pcVar7;
      lVar34 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,uVar46 >> 2,uVar33 >> 2,1,0,0,1);
      plVar39[2] = lVar34;
      local_4c0 = puVar2;
      local_4b8 = pcVar7;
      lVar34 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,uVar46 >> 3,uVar33 >> 3,1,0,0,1);
      plVar39[3] = lVar34;
      local_4c0 = puVar2;
      local_4b8 = pcVar7;
      lVar34 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,uVar46 >> 4,uVar33 >> 4,1,0,0,1);
      plVar39[4] = lVar34;
    }
    else {
      local_4b8 = "detect0";
      if (iVar17 != 0) {
        local_4b8 = "detect1";
      }
      local_4c0 = PTR_DAT_04bb2020 + 0x10;
      uVar22 = 5;
      if (iVar17 != 0) {
        uVar22 = 1;
      }
      lVar34 = FUN_039a6304(puVar35,param_2,&local_4c0,0x1a,uVar46 & 0xfffffffc,uVar33 & 0xfffffffc,
                            uVar22,0,0,1);
      plVar39 = plVar1 + (long)iVar17 * 0x3d;
      *plVar39 = lVar34;
      if (*(char *)((long)plVar39 + 0x1c6) != '\0') {
        puVar3 = (uint *)(plVar39 + 0x38);
        do {
          cVar13 = '\x01';
          bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
          if (bVar14) {
            *puVar3 = *puVar3 | 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
        *(undefined1 *)((long)plVar39 + 0x1c6) = 0;
      }
      plVar1[(long)iVar17 * 0x3d + 0x1c] = 0;
      *(undefined4 *)(plVar1 + (long)iVar17 * 0x3d + 0x1d) = 0;
      puVar3 = (uint *)((long)plVar1 + (long)iVar17 * 0x1e8 + 0xfc);
      do {
        cVar13 = '\x01';
        bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar14) {
          *puVar3 = *puVar3 & 0xfffffff7 | 8;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
    }
    plVar39 = plVar1 + (long)iVar17 * 0x3d;
    FUN_01560750(plVar39 + 0x21,*plVar39,*(undefined1 *)((long)plVar39 + 0x1c6),
                 *(undefined2 *)((long)plVar39 + 0x1c4));
    *(int *)(plVar39 + 5) = (int)plVar39[0x22];
    *(undefined4 *)((long)plVar39 + 0x2c) = *(undefined4 *)((long)plVar39 + 0x114);
    plVar39[6] = plVar39[0x23];
    plVar39[7] = plVar39[0x24];
    *(int *)(plVar39 + 8) = (int)plVar39[0x25];
    *(undefined4 *)((long)plVar39 + 0x44) = *(undefined4 *)((long)plVar39 + 300);
    plVar39[9] = plVar39[0x26];
    plVar39[10] = plVar39[0x27];
    *(undefined8 *)((long)plVar39 + 0x6f) = *(undefined8 *)((long)plVar39 + 0x157);
    plVar39[0xc] = plVar39[0x29];
    plVar39[0xd] = plVar39[0x2a];
    plVar39[0xb] = plVar39[0x28];
    FUN_038fd1e0(plVar39 + 0xf);
    FUN_038fd2f0(plVar39 + 0xf,plVar39 + 0x2c);
    plVar39[0x17] = plVar39[0x34];
    *(int *)(plVar39 + 0x18) = (int)plVar39[0x35];
    puVar3 = (uint *)((long)plVar39 + 0xfc);
    do {
      cVar13 = '\x01';
      bVar14 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar14) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    *(long **)(puVar44 + (long)iVar17 * 2 + 0xe8) = plVar39 + 0x21;
    iVar17 = iVar17 + 1;
  } while (iVar17 != 2);
  uVar46 = *(uint *)(param_1 + 0x18) & param_3;
  if (*(uint *)(param_1 + 0x5d0) <= uVar46) {
    uVar46 = 0;
  }
  lVar34 = *(long *)(*(long *)(param_1 + 0x5d8) + (long)(int)uVar46 * 8);
  uVar46 = param_3;
  if (*(uint *)(param_1 + 0x5c0) <= param_3) {
    uVar46 = 0;
  }
  lVar43 = *(long *)(param_1 + 0x5c8) + (long)(int)uVar46 * 0x808;
  uVar9 = *(ushort *)(lVar43 + 0x1f0);
  uVar10 = *(ushort *)(lVar43 + 0x1f2);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar15 = uVar10;
  if (*(short *)(lVar43 + 0x1fa) != 3) {
    uVar15 = 1;
  }
  if (uVar15 <= uVar10) {
    uVar15 = uVar10;
  }
  FUN_038e4cec(&local_4c0);
  local_4c0 = (undefined *)(((ulong)local_4c0 >> 0x10 & 0xffff) << 0x10);
  uVar22 = 0xf;
  if (*(int *)(lVar34 + 0x450) != 0) {
    uVar22 = 0xff;
  }
  local_4a8 = (undefined1 *)CONCAT44(uVar22,(undefined4)local_4a8);
  FUN_038e4d90(&local_4c0,param_2);
  if (*(uint *)(*(long *)PTR_DAT_04bbdd18 + 8) < 0x3f) {
    lVar23 = 0;
  }
  else {
    lVar23 = *(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1f0);
  }
  uVar46 = (uint)*(byte *)(lVar34 + 0x490);
  if (*(byte *)(lVar34 + 0x490) != 0) {
    uVar46 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + 0x30);
  }
  uVar33 = 0;
  if (bVar16) {
    lVar40 = 0xa8;
    if (*(uint *)(*(long *)(lVar23 + 8) + 0x30) < 4) {
      lVar40 = 0;
    }
    uVar33 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + lVar40 + 0x30);
  }
  uVar26 = 0;
  if (*(int *)(lVar34 + 0x450) != 0) {
    lVar40 = 0xe0;
    if (*(uint *)(*(long *)(lVar23 + 8) + 0x30) < 5) {
      lVar40 = 0;
    }
    uVar26 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + lVar40 + 0x30);
  }
  uVar27 = (uint)*(byte *)(lVar34 + 0x2a8);
  if (*(byte *)(lVar34 + 0x2a8) != 0) {
    lVar40 = 0x118;
    if (*(uint *)(*(long *)(lVar23 + 8) + 0x30) < 6) {
      lVar40 = 0;
    }
    uVar27 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + lVar40 + 0x30);
  }
  uVar28 = (uint)*(byte *)(param_1 + 0x4e0);
  if (*(byte *)(param_1 + 0x4e0) != 0) {
    lVar40 = 0x150;
    if (*(uint *)(*(long *)(lVar23 + 8) + 0x30) < 7) {
      lVar40 = 0;
    }
    uVar28 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + lVar40 + 0x30);
  }
  uVar29 = (uint)*(byte *)(param_1 + 0x500);
  if (*(byte *)(param_1 + 0x500) != 0) {
    lVar40 = 0x188;
    if (*(uint *)(*(long *)(lVar23 + 8) + 0x30) < 8) {
      lVar40 = 0;
    }
    uVar29 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + lVar40 + 0x30);
  }
  uVar30 = (uint)*(byte *)(lVar34 + 0x168);
  if (*(byte *)(lVar34 + 0x168) != 0) {
    if (*(float *)(lVar34 + 0x1c8) <= 0.0) {
      uVar30 = 0;
    }
    else {
      uVar30 = (uint)*(ushort *)
                      (*(long *)(*(long *)(lVar23 + 8) + 0x38) +
                       (ulong)(1 < *(uint *)(*(long *)(lVar23 + 8) + 0x30)) * 0x38 + 0x30);
    }
  }
  uVar31 = (uint)*(byte *)(lVar34 + 0x208);
  if (*(byte *)(lVar34 + 0x208) != 0) {
    if (*(float *)(lVar34 + 0x268) <= 0.0) {
      uVar31 = 0;
    }
    else {
      lVar40 = 0x70;
      if (*(uint *)(*(long *)(lVar23 + 8) + 0x30) < 3) {
        lVar40 = 0;
      }
      uVar31 = (uint)*(ushort *)(*(long *)(*(long *)(lVar23 + 8) + 0x38) + lVar40 + 0x30);
    }
  }
  lVar23 = *(long *)(lVar23 + 8);
  iVar17 = uVar33 + uVar46 + uVar26 + uVar27 + uVar28 + uVar29 + uVar30 + uVar31;
  if (iVar17 == 0) {
    lVar23 = *(long *)(lVar23 + 0x18);
  }
  else {
    uVar46 = iVar17 - 1;
    if (*(uint *)(lVar23 + 0x20) <= uVar46) {
      uVar46 = 0;
    }
    lVar23 = *(long *)(lVar23 + 0x28) + (ulong)uVar46 * 0x150;
  }
  FUN_03907810(lVar23,param_2);
  fVar47 = *(float *)(lVar43 + 0x7cc) * *(float *)(lVar34 + 0x38);
  fVar52 = 0.0;
  if (0.0 < fVar47) {
    fVar52 = 1.0 / fVar47;
  }
  fStack_4e0 = *(float *)(lVar34 + 0x58);
  fVar47 = 1.0 / (float)uVar9;
  puVar3 = (uint *)(lVar23 + 0x14);
  local_4e8._4_4_ = 0.0;
  fStack_4dc = 10000.0;
  local_4f8 = (undefined *)
              CONCAT44(fVar52 * *(float *)(param_1 + 0x5b4),fVar52 * *(float *)(param_1 + 0x5b0));
  local_4e8._0_4_ = fVar52 * *(float *)(param_1 + 0x5a0);
  fVar50 = 1.0 / (float)uVar15;
  local_4f0 = (char *)CONCAT44(-(*(float *)(lVar34 + 0x18) * *(float *)(lVar43 + 0x7cc)) * fVar52,
                               fVar52 * *(float *)(param_1 + 0x5b8));
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar40 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar40 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
    puVar2 = PTR_DAT_04bd0fc8;
  } while (cVar13 != '\0');
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + (ulong)(1 < *(uint *)(lVar23 + 0x30)) * 0x18);
  if (iVar17 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar17,0x10,&local_4e8);
  }
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar40 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar40 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if (**(int **)(lVar23 + 0x38) != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
               *(undefined8 *)(*(long *)puVar2 + 0x18),(long)**(int **)(lVar23 + 0x38),0x10,
               &local_4f8);
  }
  fVar52 = *(float *)(lVar43 + 0x7cc) * *(float *)(lVar34 + 0xe0);
  local_4e8._0_4_ = 0.0;
  if (0.0 < fVar52) {
    local_4e8._0_4_ = 1.0 / fVar52;
  }
  fStack_4e0 = *(float *)(lVar34 + 0x100);
  local_4e8._4_4_ = 0.0;
  fStack_4dc = 10000.0;
  local_4f8 = (undefined *)
              CONCAT44((float)local_4e8 * *(float *)(param_1 + 0x5b4),
                       (float)local_4e8 * *(float *)(param_1 + 0x5b0));
  local_4f0 = (char *)CONCAT44(-(*(float *)(lVar34 + 0xc0) * *(float *)(lVar43 + 0x7cc)) *
                               (float)local_4e8,(float)local_4e8 * *(float *)(param_1 + 0x5b8));
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar40 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar40 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar40 = 0xc0;
  if (*(uint *)(lVar23 + 0x30) < 9) {
    lVar40 = 0;
  }
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + lVar40);
  if (iVar17 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
               *(undefined8 *)(*(long *)puVar2 + 0x18),(long)iVar17,0x10,&local_4e8);
  }
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar40 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar40 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar40 = 0x30;
  if (*(uint *)(lVar23 + 0x60) < 3) {
    lVar40 = 0;
  }
  FUN_0390d290(lVar43 + 0x2a0,param_2,*(long *)(lVar23 + 0x68) + lVar40,0xffffffff,0);
  fStack_4dc = 0.0;
  local_4e8._4_4_ = 0.0;
  fStack_4e0 = 0.0;
  local_4e8._0_4_ = *(float *)(param_1 + 0x560) + *(float *)(param_1 + 0x560);
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar40 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar40 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar40 = 0xa8;
  if (*(uint *)(lVar23 + 0x30) < 8) {
    lVar40 = 0;
  }
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + lVar40);
  if (iVar17 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
               *(undefined8 *)(*(long *)puVar2 + 0x18),(long)iVar17,0x10,&local_4e8);
  }
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar40 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar40 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  FUN_0390d290(lVar43 + 0xe0,param_2,
               *(long *)(lVar23 + 0x68) + (ulong)(1 < *(uint *)(lVar23 + 0x60)) * 0x18,0xffffffff,0)
  ;
  fStack_504 = *(float *)(lVar43 + 2000);
  fStack_4e0 = *(float *)(lVar43 + 0x7d4) - fStack_504;
  local_508 = 1.0 - fStack_504 / *(float *)(lVar43 + 0x7d4);
  fStack_4dc = 1.0 / fStack_4e0;
  fStack_504 = fStack_504 * fStack_4dc;
  local_4e8._0_4_ = fStack_4e0 / (*(float *)(lVar34 + 0x1a8) - *(float *)(lVar34 + 0x188));
  local_4e8._4_4_ = fStack_4dc * -(*(float *)(lVar34 + 0x188) * (float)local_4e8);
  local_4f8 = (undefined *)CONCAT44(*(undefined4 *)(lVar34 + 0x1c8),*(undefined4 *)(lVar34 + 0x1e8))
  ;
  local_518 = fStack_4e0 / (*(float *)(lVar34 + 0x2e8) - *(float *)(lVar34 + 0x2c8));
  fStack_514 = fStack_4dc * -(*(float *)(lVar34 + 0x2c8) * local_518);
  local_510 = *(undefined4 *)(lVar34 + 0x328);
  uStack_50c = *(undefined4 *)(lVar34 + 0x308);
  fStack_4e0 = fStack_4e0 / (*(float *)(lVar34 + 0x248) - *(float *)(lVar34 + 0x228));
  fStack_4dc = fStack_4dc * -(*(float *)(lVar34 + 0x228) * fStack_4e0);
  local_4f0 = (char *)(ulong)*(uint *)(lVar34 + 0x268);
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
    puVar5 = PTR_DAT_04bcf2e0;
  } while (cVar13 != '\0');
  local_500 = fVar47;
  local_4fc = fVar50;
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar34 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar34 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar34 = 0x30;
  if (*(uint *)(lVar23 + 0x30) < 3) {
    lVar34 = 0;
  }
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + lVar34);
  if (iVar17 != -1) {
    (**(code **)puVar5)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
                        *(undefined8 *)(*(long *)puVar2 + 0x18),(long)iVar17,0x10,&local_4e8);
  }
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar34 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar34 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar34 = 0x48;
  if (*(uint *)(lVar23 + 0x30) < 4) {
    lVar34 = 0;
  }
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + lVar34);
  if (iVar17 != -1) {
    (**(code **)puVar5)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
                        *(undefined8 *)(*(long *)puVar2 + 0x18),(long)iVar17,0x10,&local_4f8);
  }
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar34 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar34 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar34 = 0x60;
  if (*(uint *)(lVar23 + 0x30) < 5) {
    lVar34 = 0;
  }
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + lVar34);
  if (iVar17 != -1) {
    (**(code **)puVar5)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
                        *(undefined8 *)(*(long *)puVar2 + 0x18),(long)iVar17,0x10,&local_508);
  }
  do {
    uVar46 = *puVar3;
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = uVar46 | 0x80000000;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  if ((uVar46 & 0x7fffffff) != 0) {
    if ((int)uVar46 < 0) {
      if ((int)*puVar3 < 0) {
        lVar34 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar34 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar13 = '\x01';
    bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar16) {
      *puVar3 = 0;
      cVar13 = ExclusiveMonitorsStatus();
    }
  } while (cVar13 != '\0');
  lVar34 = 0xd8;
  if (*(uint *)(lVar23 + 0x30) < 10) {
    lVar34 = 0;
  }
  iVar17 = *(int *)(*(long *)(lVar23 + 0x38) + lVar34);
  if (iVar17 != -1) {
    (**(code **)puVar5)(*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar2 + 0x70),
                        *(undefined8 *)(*(long *)puVar2 + 0x18),(long)iVar17,0x10,&local_518);
  }
  uVar9 = *(ushort *)(lVar43 + 0x528);
  *(undefined8 *)(lVar43 + 0x390) = 0;
  uVar10 = *(ushort *)(lVar43 + 0x52a);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  uVar15 = uVar10;
  if (*(short *)(lVar43 + 0x532) != 3) {
    uVar15 = 1;
  }
  if (uVar15 <= uVar10) {
    uVar15 = uVar10;
  }
  *(float *)(lVar43 + 0x388) = (float)uVar9;
  *(float *)(lVar43 + 0x398) = (float)uVar9;
  *(float *)(lVar43 + 0x38c) = (float)uVar15;
  *(float *)(lVar43 + 0x39c) = (float)uVar15;
  (**(code **)(*(long *)(lVar43 + 0x380) + 0x38))(lVar43 + 0x380,param_2);
  fStack_4e0 = 3.4028235e+38;
  fStack_4dc = 3.4028235e+38;
  local_4d8 = 0xff7fffffff7fffff;
  local_4e8 = PTR_DAT_04bd0f08 + 0x10;
  local_4cc = 0x3f80000000000000;
  local_4d0 = *(uint *)PTR_DAT_04bd0ea8;
  if (local_4d0 < 6) {
    if ((1 << (ulong)(local_4d0 & 0x1f) & 0x39U) == 0) {
      fVar52 = *(float *)(lVar43 + 0x38c);
      fVar47 = *(float *)(lVar43 + 0x388);
    }
    else {
      fVar52 = *(float *)(lVar43 + 0x388);
      fVar47 = *(float *)(lVar43 + 0x38c);
    }
    fVar50 = fVar52;
    fStack_4e0 = 0.0;
    if (fVar52 <= 0.0) {
      fVar50 = 0.0;
      fStack_4e0 = fVar52;
    }
    fVar52 = fVar47;
    fStack_4dc = 0.0;
    if (fVar47 <= 0.0) {
      fVar52 = 0.0;
      fStack_4dc = fVar47;
    }
    local_4d8 = CONCAT44(fVar52,fVar50);
  }
  FUN_038e77e4(&local_4e8,param_2,lVar43 + 0x380);
  FUN_03a31520(param_2,lVar23,lVar43 + 0x1c0);
  uVar46 = *(uint *)(lVar43 + 0x548);
  if (uVar46 != 0xffffffff) {
    lVar34 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar34 + 0x5c8) >> 3 & 1) == 0) {
      uVar33 = uVar46 - *(ushort *)(lVar34 + 0x3da);
      if (*(uint *)(lVar34 + 0x368) <= uVar33) {
        uVar33 = 0;
      }
      if ((*(uint *)(*(long *)(lVar34 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
        goto LAB_03a2fad8;
      }
    }
    if ((*(uint *)(lVar34 + 0x5c8) >> 5 & 1) == 0) {
      uVar24 = 0x112;
      uVar22 = 0x12;
    }
    else {
      uVar24 = 0x111;
      uVar22 = 0x11;
    }
    if ((*(uint *)(lVar34 + 800) & 2) != 0) {
      uVar22 = uVar24;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a2fad8:
  uVar46 = *(uint *)(lVar43 + 0x730);
  if (uVar46 != 0xffffffff) {
    lVar34 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar34 + 0x5c8) >> 3 & 1) == 0) {
      uVar33 = uVar46 - *(ushort *)(lVar34 + 0x3da);
      if (*(uint *)(lVar34 + 0x368) <= uVar33) {
        uVar33 = 0;
      }
      if ((*(uint *)(*(long *)(lVar34 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
        goto LAB_03a2fb74;
      }
    }
    if ((*(uint *)(lVar34 + 0x5c8) >> 5 & 1) == 0) {
      uVar24 = 0x112;
      uVar22 = 0x12;
    }
    else {
      uVar24 = 0x111;
      uVar22 = 0x11;
    }
    if ((*(uint *)(lVar34 + 800) & 2) != 0) {
      uVar22 = uVar24;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_03a2fb74:
  *(undefined8 *)(puVar44 + 0xea) = 0;
  if ((lVar18 != 0) && ((*(byte *)(puVar44 + 0x1f8) & 1) == 0)) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
  }
  uVar9 = *(ushort *)(param_1 + 0x7e0);
  puVar36 = puVar44 + 0xe0;
  if ((uVar9 >> 3 & 1) == 0) {
    FUN_03a31650(param_1,param_2,param_3,0);
    FUN_03a31650(param_1,param_2,param_3,1);
    FUN_03a31650(param_1,param_2,param_3,2);
    FUN_03a31650(param_1,param_2,param_3,3);
    uVar9 = *(ushort *)(param_1 + 0x7e0);
    if ((uVar9 >> 4 & 1) == 0) goto LAB_03a2fcd8;
LAB_03a2fc00:
    if ((uVar9 >> 6 & 1) != 0) goto LAB_03a30284;
LAB_03a2fc04:
    puVar37 = *(undefined4 **)(puVar44 + 0xfa);
    puVar44[0x104] = *puVar37;
    puVar44[0x105] = puVar37[1];
    *(undefined8 *)(puVar44 + 0x106) = *(undefined8 *)(puVar37 + 2);
    *(undefined8 *)(puVar44 + 0x108) = *(undefined8 *)(puVar37 + 4);
    puVar44[0x10a] = puVar37[6];
    puVar44[0x10b] = puVar37[7];
    *(undefined8 *)(puVar44 + 0x10c) = *(undefined8 *)(puVar37 + 8);
    *(undefined8 *)(puVar44 + 0x10e) = *(undefined8 *)(puVar37 + 10);
    uVar38 = *(undefined8 *)(puVar37 + 0xc);
    uVar19 = *(undefined8 *)(puVar37 + 0xe);
    uVar32 = *(undefined8 *)(puVar37 + 0x10);
    *(undefined8 *)((long)puVar44 + 0x457) = *(undefined8 *)((long)puVar37 + 0x47);
    *(undefined8 *)(puVar44 + 0x114) = uVar32;
    *(undefined8 *)(puVar44 + 0x112) = uVar19;
    *(undefined8 *)(puVar44 + 0x110) = uVar38;
    FUN_038fd1e0(puVar44 + 0x118);
    FUN_038fd2f0(puVar44 + 0x118,puVar37 + 0x14);
    uVar22 = puVar37[0x26];
    *(undefined8 *)(puVar44 + 0x128) = *(undefined8 *)(puVar37 + 0x24);
    puVar3 = puVar44 + 0x139;
    puVar44[0x12a] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    FUN_01560750(puVar44 + 0x13c,*(undefined8 *)(puVar44 + 0xfa),
                 *(undefined1 *)((long)puVar44 + 0x5ae),*(undefined2 *)(puVar44 + 0x16b));
  }
  else {
    if ((uVar9 >> 4 & 1) != 0) goto LAB_03a2fc00;
LAB_03a2fcd8:
    local_4c0 = (undefined1 *)0x0;
    local_4b8 = (char *)0x3f80000000000000;
    local_4b0 = (undefined1 *)0x0;
    local_4a8 = (undefined1 *)0x3f80000000000000;
    local_4a0 = (undefined1 *)0x0;
    local_498 = 0x3f80000000000000;
    local_490 = (undefined1 *)0x0;
    local_488 = 0x3f80000000000000;
    if (*(int *)(param_1 + 0x418) == 1) {
      fVar52 = *(float *)(lVar25 + 0xa0);
      fVar47 = fVar52 * 3.0;
      local_4c0 = &DAT_3f8000003f800000;
      local_4b0 = &DAT_3f8000003f800000;
      local_4a0 = &DAT_3f8000003f800000;
      local_490 = &DAT_3f8000003f800000;
      if (0.33333334 <= fVar52) {
        fVar47 = 1.0;
      }
      fVar50 = 0.0;
      if (0.33333334 <= fVar52) {
        fVar50 = fVar52 * 3.0 + -1.0;
      }
      fVar52 = 1.0 / (fVar50 + fVar47 + 1.0);
      local_4b8 = (char *)CONCAT44(fVar52,0x3f800000);
      local_4a8 = (undefined1 *)CONCAT44(fVar47 * fVar52,0x3f800000);
      local_498 = CONCAT44(fVar50 * fVar52,0x3f800000);
      local_488 = CONCAT44(fVar52 * 0.0,0x3f800000);
    }
    else if (*(int *)(param_1 + 0x418) == 0) {
      local_4b0 = *(undefined1 **)(lVar25 + 0x370);
      local_4a8 = *(undefined1 **)(lVar25 + 0x378);
      local_4c0 = *(undefined **)(lVar25 + 0x348);
      local_4b8 = *(char **)(lVar25 + 0x350);
      local_4a0 = *(undefined1 **)(lVar25 + 0x398);
      local_498 = *(undefined8 *)(lVar25 + 0x3a0);
      local_488 = *(undefined8 *)(lVar25 + 0x3c8);
      local_490 = *(undefined1 **)(lVar25 + 0x3c0);
    }
    puVar3 = puVar44 + 0x16a;
    puVar4 = puVar44 + 0x139;
    puVar2 = PTR_DAT_04bd0f08 + 0x10;
    uVar42 = 3;
    while( true ) {
      lVar18 = *plVar1;
      uVar46 = (uint)*(ushort *)(lVar18 + 0x30);
      if (*(ushort *)(lVar18 + 0x30) < 2) {
        uVar46 = 1;
      }
      uVar9 = *(ushort *)(lVar18 + 0x32);
      uVar33 = (uint)uVar9;
      if (*(short *)(lVar18 + 0x3a) != 3) {
        uVar33 = 1;
      }
      if (uVar33 == uVar9 || uVar33 < uVar9) {
        uVar33 = (uint)uVar9;
      }
      uVar26 = (uint)uVar42;
      if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
        FUN_01560750(puVar44 + 0x13c,plVar1[uVar42],*(undefined1 *)((long)puVar44 + 0x5ae),
                     *(undefined2 *)(puVar44 + 0x16b));
        puVar37 = (undefined4 *)(plVar1 + uVar42)[1];
        puVar44[0x104] = *puVar37;
        puVar44[0x105] = puVar37[1];
        *(undefined8 *)(puVar44 + 0x106) = *(undefined8 *)(puVar37 + 2);
        *(undefined8 *)(puVar44 + 0x108) = *(undefined8 *)(puVar37 + 4);
        puVar44[0x10a] = puVar37[6];
        puVar44[0x10b] = puVar37[7];
        *(undefined8 *)(puVar44 + 0x10c) = *(undefined8 *)(puVar37 + 8);
        *(undefined8 *)(puVar44 + 0x10e) = *(undefined8 *)(puVar37 + 10);
        uVar38 = *(undefined8 *)(puVar37 + 0xc);
        uVar19 = *(undefined8 *)(puVar37 + 0xe);
        uVar32 = *(undefined8 *)(puVar37 + 0x10);
        *(undefined8 *)((long)puVar44 + 0x457) = *(undefined8 *)((long)puVar37 + 0x47);
        *(undefined8 *)(puVar44 + 0x110) = uVar38;
        *(undefined8 *)(puVar44 + 0x112) = uVar19;
        *(undefined8 *)(puVar44 + 0x114) = uVar32;
        FUN_038fd1e0(puVar44 + 0x118);
        FUN_038fd2f0(puVar44 + 0x118,puVar37 + 0x14);
        uVar38 = *(undefined8 *)(puVar37 + 0x24);
        puVar44[0x12a] = puVar37[0x26];
        *(undefined8 *)(puVar44 + 0x128) = uVar38;
        do {
          cVar13 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar16) {
            *puVar4 = *puVar4 | 1;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      else {
        if (uVar42 != *(byte *)((long)puVar44 + 0x5ae)) {
          do {
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar16) {
              *puVar3 = *puVar3 | 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          *(char *)((long)puVar44 + 0x5ae) = (char)uVar42;
        }
        puVar44[0x134] = 0;
        puVar44[0x132] = (float)(int)uVar26 + 1.0;
        puVar44[0x133] = (float)(int)uVar26 + 1.0;
        do {
          cVar13 = '\x01';
          bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
          if (bVar16) {
            *puVar4 = *puVar4 & 0xfffffff7 | 8;
            cVar13 = ExclusiveMonitorsStatus();
          }
        } while (cVar13 != '\0');
      }
      *(undefined8 *)(puVar44 + 0xe4) = 0;
      fVar52 = (float)(uVar46 >> (ulong)(uVar26 & 0x1f));
      fVar47 = (float)(uVar33 >> (ulong)(uVar26 & 0x1f));
      puVar44[0xe2] = fVar52;
      puVar44[0xe6] = fVar52;
      puVar44[0xe3] = fVar47;
      puVar44[0xe7] = fVar47;
      (**(code **)(*(long *)(puVar44 + 0xe0) + 0x38))(puVar36,param_2);
      fStack_4e0 = 3.4028235e+38;
      fStack_4dc = 3.4028235e+38;
      local_4d8 = 0xff7fffffff7fffff;
      local_4cc = 0x3f80000000000000;
      local_4d0 = *(uint *)PTR_DAT_04bd0ea8;
      if (local_4d0 < 6) {
        if ((1 << (ulong)(local_4d0 & 0x1f) & 0x39U) == 0) {
          fVar52 = (float)puVar44[0xe3];
          fVar47 = (float)puVar44[0xe2];
        }
        else {
          fVar52 = (float)puVar44[0xe2];
          fVar47 = (float)puVar44[0xe3];
        }
        fVar50 = fVar52;
        fStack_4e0 = 0.0;
        if (fVar52 <= 0.0) {
          fVar50 = 0.0;
          fStack_4e0 = fVar52;
        }
        fVar52 = fVar47;
        fStack_4dc = 0.0;
        if (fVar47 <= 0.0) {
          fVar52 = 0.0;
          fStack_4dc = fVar47;
        }
        local_4d8 = CONCAT44(fVar52,fVar50);
      }
      local_4e8 = puVar2;
      FUN_038e77e4(&local_4e8,param_2,puVar36);
      uVar45 = uVar42 - 1;
      if (uVar45 == 0) break;
      if (*(char *)(param_1 + 0x520) == '\0') {
        if (uVar26 == 2) {
          ppuVar21 = (undefined1 **)&local_4f8;
          local_4f8 = &DAT_3f8000003f800000;
          local_4f0 = &DAT_3f8000003f800000;
          goto LAB_03a300a0;
        }
        if (uVar26 == 3) {
          ppuVar21 = &local_490;
          goto LAB_03a300ac;
        }
      }
      else {
        ppuVar21 = (undefined1 **)(&local_4c0 + uVar42 * 2);
LAB_03a300a0:
LAB_03a300ac:
        FUN_03a320e0(param_2,puVar44 + 0x104,ppuVar21,&local_4c0 + uVar45 * 2);
      }
      uVar46 = puVar44[0x152];
      if (uVar46 != 0xffffffff) {
        lVar18 = *(long *)PTR_DAT_04bc1010;
        if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
          uVar33 = uVar46 - *(ushort *)(lVar18 + 0x3da);
          if (*(uint *)(lVar18 + 0x368) <= uVar33) {
            uVar33 = 0;
          }
          if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) != 0)
          goto LAB_03a30110;
          uVar42 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
        }
        else {
LAB_03a30110:
          if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
            uVar24 = 0x112;
            uVar22 = 0x12;
          }
          else {
            uVar24 = 0x111;
            uVar22 = 0x11;
          }
          if ((*(uint *)(lVar18 + 800) & 2) != 0) {
            uVar22 = uVar24;
          }
          (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
          uVar42 = 0;
        }
        *(ulong *)(param_2 + 0x100) = uVar42;
      }
      uVar42 = uVar45;
    }
    if ((*(ushort *)(param_1 + 0x7e0) >> 5 & 1) == 0) {
      local_4f8 = (undefined *)
                  CONCAT44(*(float *)(lVar25 + 0x7c) * local_4c0._4_4_,
                           *(float *)(lVar25 + 0x78) * (float)local_4c0);
      local_4f0 = (char *)CONCAT44(*(float *)(lVar25 + 0x84) * local_4b8._4_4_,
                                   *(float *)(lVar25 + 0x80) * (float)local_4b8);
      FUN_03a320e0(param_2,puVar44 + 0x104,lVar25 + 0x78,&local_4f8);
    }
    uVar46 = puVar44[0x152];
    if (uVar46 != 0xffffffff) {
      lVar18 = *(long *)PTR_DAT_04bc1010;
      if ((*(uint *)(lVar18 + 0x5c8) >> 3 & 1) == 0) {
        uVar33 = uVar46 - *(ushort *)(lVar18 + 0x3da);
        if (*(uint *)(lVar18 + 0x368) <= uVar33) {
          uVar33 = 0;
        }
        if ((*(uint *)(*(long *)(lVar18 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) != 0)
        goto LAB_03a3023c;
        uVar42 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
      }
      else {
LAB_03a3023c:
        if ((*(uint *)(lVar18 + 0x5c8) >> 5 & 1) == 0) {
          uVar24 = 0x112;
          uVar22 = 0x12;
        }
        else {
          uVar24 = 0x111;
          uVar22 = 0x11;
        }
        if ((*(uint *)(lVar18 + 800) & 2) != 0) {
          uVar22 = uVar24;
        }
        (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
        uVar42 = 0;
      }
      *(ulong *)(param_2 + 0x100) = uVar42;
    }
    if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) goto LAB_03a2fc04;
LAB_03a30284:
    puVar3 = puVar44 + 0x139;
    *(undefined8 *)(puVar44 + 0x132) = 0;
    puVar44[0x134] = 0;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 & 0xfffffff7 | 8;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (*(char *)((long)puVar44 + 0x5ae) != '\0') {
      puVar3 = puVar44 + 0x16a;
      do {
        cVar13 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar16) {
          *puVar3 = *puVar3 | 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      *(undefined1 *)((long)puVar44 + 0x5ae) = 0;
    }
  }
  if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
    puVar37 = *(undefined4 **)(puVar44 + 0x174);
    puVar44[0x17e] = *puVar37;
    puVar44[0x17f] = puVar37[1];
    *(undefined8 *)(puVar44 + 0x180) = *(undefined8 *)(puVar37 + 2);
    *(undefined8 *)(puVar44 + 0x182) = *(undefined8 *)(puVar37 + 4);
    puVar44[0x184] = puVar37[6];
    puVar44[0x185] = puVar37[7];
    *(undefined8 *)(puVar44 + 0x186) = *(undefined8 *)(puVar37 + 8);
    *(undefined8 *)(puVar44 + 0x188) = *(undefined8 *)(puVar37 + 10);
    uVar38 = *(undefined8 *)(puVar37 + 0xc);
    uVar19 = *(undefined8 *)(puVar37 + 0xe);
    uVar32 = *(undefined8 *)(puVar37 + 0x10);
    *(undefined8 *)((long)puVar44 + 0x63f) = *(undefined8 *)((long)puVar37 + 0x47);
    *(undefined8 *)(puVar44 + 0x18e) = uVar32;
    *(undefined8 *)(puVar44 + 0x18c) = uVar19;
    *(undefined8 *)(puVar44 + 0x18a) = uVar38;
    FUN_038fd1e0(puVar44 + 0x192);
    FUN_038fd2f0(puVar44 + 0x192,puVar37 + 0x14);
    uVar22 = puVar37[0x26];
    *(undefined8 *)(puVar44 + 0x1a2) = *(undefined8 *)(puVar37 + 0x24);
    puVar3 = puVar44 + 0x1b3;
    puVar44[0x1a4] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    FUN_01560750(puVar44 + 0x1b6,*(undefined8 *)(puVar44 + 0x174),
                 *(undefined1 *)((long)puVar44 + 0x796),*(undefined2 *)(puVar44 + 0x1e5));
  }
  else {
    puVar3 = puVar44 + 0x1b3;
    *(undefined8 *)(puVar44 + 0x1ac) = 0;
    puVar44[0x1ae] = 0;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 & 0xfffffff7 | 8;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    if (*(char *)((long)puVar44 + 0x796) != '\0') {
      puVar3 = puVar44 + 0x1e4;
      do {
        cVar13 = '\x01';
        bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
        if (bVar16) {
          *puVar3 = *puVar3 | 1;
          cVar13 = ExclusiveMonitorsStatus();
        }
      } while (cVar13 != '\0');
      *(undefined1 *)((long)puVar44 + 0x796) = 0;
    }
  }
  uVar46 = *(uint *)(param_1 + 0x18) & param_3;
  if (*(uint *)(param_1 + 0x5d0) <= uVar46) {
    uVar46 = 0;
  }
  lVar18 = *(long *)(*(long *)(param_1 + 0x5d8) + (long)(int)uVar46 * 8);
  if (*(int *)(lVar18 + 0x450) != 0) {
    uVar46 = param_3;
    if (*(uint *)(param_1 + 0x5c0) <= param_3) {
      uVar46 = 0;
    }
    iVar17 = *(int *)(lVar18 + 0x470);
    lVar34 = *(long *)(param_1 + 0x5c8) + (long)(int)uVar46 * 0x808;
    uVar9 = *(ushort *)(lVar34 + 0x710);
    sVar11 = *(short *)(lVar34 + 0x71a);
    uVar10 = *(ushort *)(lVar34 + 0x712);
    FUN_038e4cec(&local_4c0);
    local_4c0 = (undefined *)((ulong)local_4c0 & 0xfffffffeffff0000);
    FUN_038e4d90(&local_4c0,param_2);
    if (iVar17 < 1) {
      puVar37 = (undefined4 *)0x0;
    }
    else {
      uVar15 = uVar10;
      if (sVar11 != 3) {
        uVar15 = 1;
      }
      puVar37 = (undefined4 *)0x0;
      iVar41 = 0;
      if (uVar15 <= uVar10) {
        uVar15 = uVar10;
      }
      fVar52 = (float)uVar15;
      if (uVar9 < 2) {
        uVar9 = 1;
      }
      puVar3 = (uint *)(lVar34 + 0x4e4);
      fVar47 = (float)uVar9;
      lVar43 = lVar34 + 0x380;
      lVar23 = *(long *)PTR_DAT_04bb29d0;
      puVar4 = (uint *)(lVar34 + 0x6cc);
      puVar2 = PTR_DAT_04bb2020 + 0x10;
      puVar5 = PTR_DAT_04bd0f08 + 0x10;
      do {
        if (*(int *)(lVar18 + 0x450) == 2) {
          fVar52 = fVar52 * 0.5;
          fVar53 = 0.0;
          fVar50 = 1.0 / fVar52;
        }
        else if (*(int *)(lVar18 + 0x450) == 1) {
          fVar47 = fVar47 * 0.5;
          fVar50 = 0.0;
          fVar53 = 1.0 / fVar47;
        }
        else {
          fVar50 = 0.0;
          fVar53 = 0.0;
        }
        if ((1.0 <= fVar47) && (1.0 <= fVar52)) {
          fStack_4e0 = 1.6511809e-36;
          fStack_4dc = 0.0;
          local_4e8 = puVar2;
          puVar20 = (undefined4 *)
                    FUN_039a6304(lVar34 + 0x7d8,param_2,&local_4e8,0x1a,(int)fVar47,(int)fVar52,1,0,
                                 0,1);
          *(undefined4 *)(lVar34 + 0x410) = *puVar20;
          *(undefined4 *)(lVar34 + 0x414) = puVar20[1];
          *(undefined8 *)(lVar34 + 0x418) = *(undefined8 *)(puVar20 + 2);
          *(undefined8 *)(lVar34 + 0x420) = *(undefined8 *)(puVar20 + 4);
          *(undefined4 *)(lVar34 + 0x428) = puVar20[6];
          *(undefined4 *)(lVar34 + 0x42c) = puVar20[7];
          *(undefined8 *)(lVar34 + 0x430) = *(undefined8 *)(puVar20 + 8);
          *(undefined8 *)(lVar34 + 0x438) = *(undefined8 *)(puVar20 + 10);
          uVar32 = *(undefined8 *)(puVar20 + 0x10);
          uVar38 = *(undefined8 *)(puVar20 + 0xc);
          uVar19 = *(undefined8 *)(puVar20 + 0xe);
          *(undefined8 *)(lVar34 + 0x457) = *(undefined8 *)((long)puVar20 + 0x47);
          *(undefined8 *)(lVar34 + 0x440) = uVar38;
          *(undefined8 *)(lVar34 + 0x448) = uVar19;
          *(undefined8 *)(lVar34 + 0x450) = uVar32;
          FUN_038fd1e0(lVar34 + 0x460);
          FUN_038fd2f0(lVar34 + 0x460,puVar20 + 0x14);
          uVar38 = *(undefined8 *)(puVar20 + 0x24);
          *(undefined4 *)(lVar34 + 0x4a8) = puVar20[0x26];
          *(undefined8 *)(lVar34 + 0x4a0) = uVar38;
          do {
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
            if (bVar16) {
              *puVar3 = *puVar3 | 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          FUN_01560750(lVar34 + 0x4f0,puVar20,*(undefined1 *)(lVar34 + 0x5ae),
                       *(undefined2 *)(lVar34 + 0x5ac));
          fVar48 = fVar47;
          if (fVar47 <= 0.0) {
            fVar48 = 0.0;
          }
          *(float *)(lVar34 + 0x388) = fVar47;
          *(float *)(lVar34 + 0x38c) = fVar52;
          fVar51 = 0.0;
          if (fVar47 <= 0.0) {
            fVar51 = fVar47;
          }
          *(float *)(lVar34 + 0x398) = fVar48;
          *(float *)(lVar34 + 0x390) = fVar51;
          fVar48 = fVar52;
          if (fVar52 <= 0.0) {
            fVar48 = 0.0;
          }
          fVar51 = 0.0;
          if (fVar52 <= 0.0) {
            fVar51 = fVar52;
          }
          *(float *)(lVar34 + 0x394) = fVar51;
          *(float *)(lVar34 + 0x39c) = fVar48;
          fStack_4e0 = 3.4028235e+38;
          fStack_4dc = 3.4028235e+38;
          local_4d8 = 0xff7fffffff7fffff;
          local_4cc = 0x3f80000000000000;
          local_4d0 = *(uint *)PTR_DAT_04bd0ea8;
          if (local_4d0 < 6) {
            if ((1 << (ulong)(local_4d0 & 0x1f) & 0x39U) == 0) {
              fVar48 = *(float *)(lVar34 + 0x38c);
              fVar51 = *(float *)(lVar34 + 0x388);
            }
            else {
              fVar48 = *(float *)(lVar34 + 0x388);
              fVar51 = *(float *)(lVar34 + 0x38c);
            }
            fVar49 = fVar48;
            fStack_4e0 = 0.0;
            if (fVar48 <= 0.0) {
              fVar49 = 0.0;
              fStack_4e0 = fVar48;
            }
            fVar48 = fVar51;
            fStack_4dc = 0.0;
            if (fVar51 <= 0.0) {
              fVar48 = 0.0;
              fStack_4dc = fVar51;
            }
            local_4d8 = CONCAT44(fVar48,fVar49);
          }
          local_4e8 = puVar5;
          FUN_038e77e4(&local_4e8,param_2,lVar43);
          lVar40 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x200
                                                ) + 8) + 0x28);
          FUN_03907810(lVar40,param_2);
          puVar6 = (uint *)(lVar40 + 0x14);
          local_4f8 = (undefined1 *)0x0;
          local_4f0 = (char *)0x0;
          do {
            uVar46 = *puVar6;
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar16) {
              *puVar6 = uVar46 | 0x80000000;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((uVar46 & 0x7fffffff) != 0) {
            if ((int)uVar46 < 0) {
              while ((int)*puVar6 < 0) {
                nn::os::ConvertToTimeSpan(lVar23 / 1000000);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar40);
            }
          }
          do {
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar16) {
              *puVar6 = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          lVar8 = 0x78;
          if (*(uint *)(lVar40 + 0x30) < 6) {
            lVar8 = 0;
          }
          iVar12 = *(int *)(*(long *)(lVar40 + 0x38) + lVar8);
          if (iVar12 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar12,0x10,
                       &local_4f8);
          }
          *(long *)(lVar34 + 0x3a0) = lVar34 + 0x4f0;
          (**(code **)(*(long *)(lVar34 + 0x380) + 0x38))(lVar43,param_2);
          FUN_03a31520(param_2,lVar40,lVar34 + 0x5f8);
          uVar46 = *(uint *)(lVar34 + 0x548);
          if (uVar46 != 0xffffffff) {
            lVar40 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar40 + 0x5c8) >> 3 & 1) == 0) {
              uVar33 = uVar46 - *(ushort *)(lVar40 + 0x3da);
              if (*(uint *)(lVar40 + 0x368) <= uVar33) {
                uVar33 = 0;
              }
              if ((*(uint *)(*(long *)(lVar40 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03a308d0;
              uVar42 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
            }
            else {
LAB_03a308d0:
              if ((*(uint *)(lVar40 + 0x5c8) >> 5 & 1) == 0) {
                uVar24 = 0x112;
                uVar22 = 0x12;
              }
              else {
                uVar24 = 0x111;
                uVar22 = 0x11;
              }
              if ((*(uint *)(lVar40 + 800) & 2) != 0) {
                uVar22 = uVar24;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
              uVar42 = 0;
            }
            *(ulong *)(param_2 + 0x100) = uVar42;
          }
          if ((puVar37 != (undefined4 *)0x0) && ((*(byte *)(lVar34 + 0x7e0) & 1) == 0)) {
            FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar37);
          }
          local_4f8 = PTR_DAT_04bb2020 + 0x10;
          local_4f0 = "bloom_ex";
          puVar37 = (undefined4 *)
                    FUN_039a6304(lVar34 + 0x7d8,param_2,&local_4f8,0x1a,(int)fVar47,(int)fVar52,1,0,
                                 0,1);
          FUN_01560750(lVar34 + 0x6d8,puVar37,*(undefined1 *)(lVar34 + 0x796),
                       *(undefined2 *)(lVar34 + 0x794));
          *(undefined4 *)(lVar34 + 0x5f8) = *puVar37;
          *(undefined4 *)(lVar34 + 0x5fc) = puVar37[1];
          *(undefined8 *)(lVar34 + 0x600) = *(undefined8 *)(puVar37 + 2);
          *(undefined8 *)(lVar34 + 0x608) = *(undefined8 *)(puVar37 + 4);
          *(undefined4 *)(lVar34 + 0x610) = puVar37[6];
          *(undefined4 *)(lVar34 + 0x614) = puVar37[7];
          *(undefined8 *)(lVar34 + 0x618) = *(undefined8 *)(puVar37 + 8);
          *(undefined8 *)(lVar34 + 0x620) = *(undefined8 *)(puVar37 + 10);
          uVar32 = *(undefined8 *)(puVar37 + 0x10);
          uVar38 = *(undefined8 *)(puVar37 + 0xc);
          uVar19 = *(undefined8 *)(puVar37 + 0xe);
          *(undefined8 *)(lVar34 + 0x63f) = *(undefined8 *)((long)puVar37 + 0x47);
          *(undefined8 *)(lVar34 + 0x630) = uVar19;
          *(undefined8 *)(lVar34 + 0x638) = uVar32;
          *(undefined8 *)(lVar34 + 0x628) = uVar38;
          FUN_038fd1e0(lVar34 + 0x648);
          FUN_038fd2f0(lVar34 + 0x648,puVar37 + 0x14);
          uVar38 = *(undefined8 *)(puVar37 + 0x24);
          *(undefined4 *)(lVar34 + 0x690) = puVar37[0x26];
          *(undefined8 *)(lVar34 + 0x688) = uVar38;
          do {
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar4,0x10);
            if (bVar16) {
              *puVar4 = *puVar4 | 1;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          lVar40 = 0x18;
          if (*(int *)(lVar18 + 0x450) != 1) {
            lVar40 = 0x28;
          }
          lVar40 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x1f8
                                                ) + 8) + lVar40);
          FUN_03907810(lVar40,param_2);
          puVar6 = (uint *)(lVar40 + 0x14);
          local_4f8 = (undefined *)CONCAT44(fVar50,fVar53);
          local_4f0 = (undefined1 *)0x0;
          do {
            uVar46 = *puVar6;
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar16) {
              *puVar6 = uVar46 | 0x80000000;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          if ((uVar46 & 0x7fffffff) != 0) {
            if ((int)uVar46 < 0) {
              while ((int)*puVar6 < 0) {
                nn::os::ConvertToTimeSpan(lVar23 / 1000000);
                nn::os::SleepThread();
              }
            }
            else {
              FUN_03907b80(lVar40);
            }
          }
          do {
            cVar13 = '\x01';
            bVar16 = (bool)ExclusiveMonitorPass(puVar6,0x10);
            if (bVar16) {
              *puVar6 = 0;
              cVar13 = ExclusiveMonitorsStatus();
            }
          } while (cVar13 != '\0');
          lVar8 = 0x90;
          if (*(uint *)(lVar40 + 0x30) < 7) {
            lVar8 = 0;
          }
          iVar12 = *(int *)(*(long *)(lVar40 + 0x38) + lVar8);
          if (iVar12 != -1) {
            (**(code **)PTR_DAT_04bcf2e0)
                      (*(undefined8 *)(param_2 + 0xb8),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                       *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar12,0x10,
                       &local_4f8);
          }
          *(long *)(lVar34 + 0x3a0) = lVar34 + 0x6d8;
          (**(code **)(*(long *)(lVar34 + 0x380) + 0x38))(lVar43,param_2);
          FUN_03a31520(param_2,lVar40,lVar34 + 0x410);
          uVar46 = *(uint *)(lVar34 + 0x730);
          if (uVar46 != 0xffffffff) {
            lVar40 = *(long *)PTR_DAT_04bc1010;
            if ((*(uint *)(lVar40 + 0x5c8) >> 3 & 1) == 0) {
              uVar33 = uVar46 - *(ushort *)(lVar40 + 0x3da);
              if (*(uint *)(lVar40 + 0x368) <= uVar33) {
                uVar33 = 0;
              }
              if ((*(uint *)(*(long *)(lVar40 + 0x370) + (long)(int)uVar33 * 0x20 + 4) >> 2 & 1) !=
                  0) goto LAB_03a30bb0;
              uVar42 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar46 & 0x3f);
            }
            else {
LAB_03a30bb0:
              if ((*(uint *)(lVar40 + 0x5c8) >> 5 & 1) == 0) {
                uVar24 = 0x112;
                uVar22 = 0x12;
              }
              else {
                uVar24 = 0x111;
                uVar22 = 0x11;
              }
              if ((*(uint *)(lVar40 + 800) & 2) != 0) {
                uVar22 = uVar24;
              }
              (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar22);
              uVar42 = 0;
            }
            *(ulong *)(param_2 + 0x100) = uVar42;
          }
          if ((*(byte *)(lVar34 + 0x7e0) & 1) == 0) {
            FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar20);
          }
        }
        iVar41 = iVar41 + 1;
      } while (iVar41 != iVar17);
    }
    *(undefined8 *)(lVar34 + 0x390) = 0;
    uVar33 = *(byte *)(lVar34 + 0x39) - 1;
    uVar46 = (int)*(float *)(lVar34 + 0xb8);
    if (uVar33 <= (uint)(int)*(float *)(lVar34 + 0xb8)) {
      uVar46 = uVar33;
    }
    uVar9 = *(ushort *)(lVar34 + 0x32);
    uVar10 = *(ushort *)(lVar34 + 0x30) >> (ulong)(uVar46 & 0x1f);
    if (uVar10 < 2) {
      uVar10 = 1;
    }
    uVar15 = uVar9 >> (ulong)(uVar46 & 0x1f);
    if (*(short *)(lVar34 + 0x3a) != 3) {
      uVar9 = 1;
    }
    if (uVar9 <= uVar15) {
      uVar9 = uVar15;
    }
    *(float *)(lVar34 + 0x388) = (float)uVar10;
    *(float *)(lVar34 + 0x398) = (float)uVar10;
    *(float *)(lVar34 + 0x38c) = (float)uVar9;
    *(float *)(lVar34 + 0x39c) = (float)uVar9;
    FUN_01560750(lVar34 + 0x4f0,lVar34,uVar46,0);
    *(long *)(lVar34 + 0x3a0) = lVar34 + 0x4f0;
    (**(code **)(*(long *)(lVar34 + 0x380) + 0x38))(lVar34 + 0x380,param_2);
    local_4d8 = 0xff7fffffff7fffff;
    local_4e8 = PTR_DAT_04bd0f08 + 0x10;
    fStack_4e0 = 3.4028235e+38;
    fStack_4dc = 3.4028235e+38;
    local_4cc = 0x3f80000000000000;
    local_4d0 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_4d0 < 6) {
      if ((1 << (ulong)(local_4d0 & 0x1f) & 0x39U) == 0) {
        fVar52 = *(float *)(lVar34 + 0x38c);
        fVar47 = *(float *)(lVar34 + 0x388);
      }
      else {
        fVar52 = *(float *)(lVar34 + 0x388);
        fVar47 = *(float *)(lVar34 + 0x38c);
      }
      fVar50 = fVar52;
      fStack_4e0 = 0.0;
      if (fVar52 <= 0.0) {
        fVar50 = 0.0;
        fStack_4e0 = fVar52;
      }
      fVar52 = fVar47;
      fStack_4dc = 0.0;
      if (fVar47 <= 0.0) {
        fVar52 = 0.0;
        fStack_4dc = fVar47;
      }
      local_4d8 = CONCAT44(fVar52,fVar50);
    }
    FUN_038e77e4(&local_4e8,param_2,lVar34 + 0x380);
    local_4f8 = &DAT_3f8000003f800000;
    local_4f0 = &DAT_3f8000003f800000;
    FUN_03a320e0(param_2,lVar34 + 0x5f8,lVar18 + 0x120,&local_4f8);
    if ((puVar37 != (undefined4 *)0x0) && ((*(byte *)(lVar34 + 0x7e0) & 1) == 0)) {
      FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510,puVar37);
    }
  }
  FUN_03a32288(puVar44 + 0x174,puVar35);
  if ((*(ushort *)(param_1 + 0x7e0) >> 6 & 1) == 0) {
    puVar35 = *(undefined4 **)(puVar44 + 0xfc);
    *puVar44 = *puVar35;
    puVar44[1] = puVar35[1];
    *(undefined8 *)(puVar44 + 2) = *(undefined8 *)(puVar35 + 2);
    *(undefined8 *)(puVar44 + 4) = *(undefined8 *)(puVar35 + 4);
    puVar44[6] = puVar35[6];
    puVar44[7] = puVar35[7];
    *(undefined8 *)(puVar44 + 8) = *(undefined8 *)(puVar35 + 8);
    *(undefined8 *)(puVar44 + 10) = *(undefined8 *)(puVar35 + 10);
    uVar32 = *(undefined8 *)(puVar35 + 0x10);
    uVar38 = *(undefined8 *)(puVar35 + 0xc);
    uVar19 = *(undefined8 *)(puVar35 + 0xe);
    *(undefined8 *)((long)puVar44 + 0x47) = *(undefined8 *)((long)puVar35 + 0x47);
    *(undefined8 *)(puVar44 + 0xe) = uVar19;
    *(undefined8 *)(puVar44 + 0x10) = uVar32;
    *(undefined8 *)(puVar44 + 0xc) = uVar38;
    FUN_038fd1e0(puVar44 + 0x14);
    FUN_038fd2f0(puVar44 + 0x14,puVar35 + 0x14);
    uVar22 = puVar35[0x26];
    *(undefined8 *)(puVar44 + 0x24) = *(undefined8 *)(puVar35 + 0x24);
    puVar3 = puVar44 + 0x35;
    puVar44[0x26] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  else {
    puVar35 = *(undefined4 **)(puVar44 + 0xfa);
    *puVar44 = *puVar35;
    puVar44[1] = puVar35[1];
    *(undefined8 *)(puVar44 + 2) = *(undefined8 *)(puVar35 + 2);
    *(undefined8 *)(puVar44 + 4) = *(undefined8 *)(puVar35 + 4);
    puVar44[6] = puVar35[6];
    puVar44[7] = puVar35[7];
    *(undefined8 *)(puVar44 + 8) = *(undefined8 *)(puVar35 + 8);
    *(undefined8 *)(puVar44 + 10) = *(undefined8 *)(puVar35 + 10);
    uVar32 = *(undefined8 *)(puVar35 + 0x10);
    uVar38 = *(undefined8 *)(puVar35 + 0xc);
    uVar19 = *(undefined8 *)(puVar35 + 0xe);
    *(undefined8 *)((long)puVar44 + 0x47) = *(undefined8 *)((long)puVar35 + 0x47);
    *(undefined8 *)(puVar44 + 0xe) = uVar19;
    *(undefined8 *)(puVar44 + 0x10) = uVar32;
    *(undefined8 *)(puVar44 + 0xc) = uVar38;
    FUN_038fd1e0(puVar44 + 0x14);
    FUN_038fd2f0(puVar44 + 0x14,puVar35 + 0x14);
    uVar22 = puVar35[0x26];
    *(undefined8 *)(puVar44 + 0x24) = *(undefined8 *)(puVar35 + 0x24);
    puVar3 = puVar44 + 0x35;
    puVar44[0x26] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    *(undefined1 **)(puVar44 + 0x2e) = &DAT_3f8000003f800000;
    puVar44[0x30] = 0;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 & 0xfffffff7 | 8;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  lVar18 = *(long *)(puVar44 + 0x1ee);
  if (lVar18 != 0) {
    uVar9 = *(ushort *)(lVar18 + 0x30);
    uVar10 = *(ushort *)(lVar18 + 0x32);
    if (uVar9 < 2) {
      uVar9 = 1;
    }
    uVar15 = uVar10;
    if (*(short *)(lVar18 + 0x3a) != 3) {
      uVar15 = 1;
    }
    if (uVar15 <= uVar10) {
      uVar15 = uVar10;
    }
    FUN_01560750(puVar44 + 0x13c,lVar18,*(undefined1 *)((long)puVar44 + 0x5ae),
                 *(undefined2 *)(puVar44 + 0x16b));
    *(undefined4 **)(puVar44 + 0xe8) = puVar44 + 0x13c;
    puVar44[0xe2] = (float)uVar9;
    puVar44[0xe3] = (float)uVar15;
    *(undefined8 *)(puVar44 + 0xe4) = 0;
    puVar44[0xe6] = (float)uVar9;
    puVar44[0xe7] = (float)uVar15;
    (**(code **)(*(long *)(puVar44 + 0xe0) + 0x38))(puVar36,param_2);
    local_4d8 = 0xff7fffffff7fffff;
    local_4e8 = PTR_DAT_04bd0f08 + 0x10;
    fStack_4e0 = 3.4028235e+38;
    fStack_4dc = 3.4028235e+38;
    local_4cc = 0x3f80000000000000;
    local_4d0 = *(uint *)PTR_DAT_04bd0ea8;
    if (local_4d0 < 6) {
      if ((1 << (ulong)(local_4d0 & 0x1f) & 0x39U) == 0) {
        fVar52 = (float)puVar44[0xe3];
        fVar47 = (float)puVar44[0xe2];
      }
      else {
        fVar52 = (float)puVar44[0xe2];
        fVar47 = (float)puVar44[0xe3];
      }
      fVar50 = fVar52;
      fStack_4e0 = 0.0;
      if (fVar52 <= 0.0) {
        fVar50 = 0.0;
        fStack_4e0 = fVar52;
      }
      fVar52 = fVar47;
      fStack_4dc = 0.0;
      if (fVar47 <= 0.0) {
        fVar52 = 0.0;
        fStack_4dc = fVar47;
      }
      local_4d8 = CONCAT44(fVar52,fVar50);
    }
    FUN_038e77e4(&local_4e8,param_2,puVar36);
    FUN_038e4cec(&local_4c0);
    local_498 = CONCAT44(local_498._4_4_,0x2020202);
    local_4c0 = (undefined *)((ulong)local_4c0 & 0xffffffffffff0000 | 0x100000000);
    FUN_038e4d90(&local_4c0,param_2);
    uVar38 = *(undefined8 *)
              (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x200) + 8) + 0x28)
    ;
    FUN_03907810(uVar38,param_2);
    FUN_03a31520(param_2,uVar38,puVar44);
    puVar35 = *(undefined4 **)(puVar44 + 0x1ee);
    *puVar44 = *puVar35;
    puVar44[1] = puVar35[1];
    *(undefined8 *)(puVar44 + 2) = *(undefined8 *)(puVar35 + 2);
    *(undefined8 *)(puVar44 + 4) = *(undefined8 *)(puVar35 + 4);
    puVar44[6] = puVar35[6];
    puVar44[7] = puVar35[7];
    *(undefined8 *)(puVar44 + 8) = *(undefined8 *)(puVar35 + 8);
    *(undefined8 *)(puVar44 + 10) = *(undefined8 *)(puVar35 + 10);
    uVar32 = *(undefined8 *)(puVar35 + 0x10);
    uVar38 = *(undefined8 *)(puVar35 + 0xc);
    uVar19 = *(undefined8 *)(puVar35 + 0xe);
    *(undefined8 *)((long)puVar44 + 0x47) = *(undefined8 *)((long)puVar35 + 0x47);
    *(undefined8 *)(puVar44 + 0xe) = uVar19;
    *(undefined8 *)(puVar44 + 0x10) = uVar32;
    *(undefined8 *)(puVar44 + 0xc) = uVar38;
    FUN_038fd1e0(puVar44 + 0x14);
    FUN_038fd2f0(puVar44 + 0x14,puVar35 + 0x14);
    uVar22 = puVar35[0x26];
    *(undefined8 *)(puVar44 + 0x24) = *(undefined8 *)(puVar35 + 0x24);
    puVar3 = puVar44 + 0x35;
    puVar44[0x26] = uVar22;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 | 1;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
    *(undefined8 *)(puVar44 + 0x2e) = 0;
    puVar44[0x30] = 0;
    do {
      cVar13 = '\x01';
      bVar16 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar16) {
        *puVar3 = *puVar3 & 0xfffffff7 | 8;
        cVar13 = ExclusiveMonitorsStatus();
      }
    } while (cVar13 != '\0');
  }
  (**(code **)(*(long *)*param_4 + 0x38))((long *)*param_4,param_2);
  FUN_038e77e4(param_4[1],param_2,*param_4);
  if (((param_5 & 1) != 0) || ((*(ushort *)(param_1 + 0x7e0) & 1) != 0)) goto LAB_03a31254;
  uVar38 = *(undefined8 *)
            (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x200) + 8) + 0x28);
  FUN_038e4cec(&local_4c0);
  uVar42 = (ulong)local_4c0 >> 0x20;
  local_4c0 = (undefined *)((ulong)local_4c0 & 0xfffffffeffff0000);
  local_4a8 = (undefined1 *)((ulong)local_4a8 & 0xfffffff0ffffffff | 0x700000000);
  if ((*(byte *)(param_1 + 0x7e0) >> 2 & 1) == 0) {
    if (*(int *)(lVar25 + 0x408) == 2) {
      uVar22 = 0x2020a0a;
    }
    else {
      if (*(int *)(lVar25 + 0x408) != 1) goto LAB_03a31228;
      uVar22 = 0x2020202;
    }
    local_4c0 = (undefined *)(CONCAT44((int)uVar42,(float)local_4c0) | 0x100000000);
    local_498 = CONCAT44(local_498._4_4_,uVar22);
  }
LAB_03a31228:
  FUN_038e4d90(&local_4c0,param_2);
  FUN_03907810(uVar38,param_2);
  FUN_03a31520(param_2,uVar38,puVar44);
LAB_03a31254:
  uVar46 = (uint)*(ushort *)(param_1 + 0x5ac);
  if ((*(ushort *)(param_1 + 0x5ac) >> 4 & 1) != 0) {
    uVar33 = *(uint *)(param_1 + 0x18) & param_3;
    if (*(uint *)(param_1 + 0x5d0) <= uVar33) {
      uVar33 = 0;
    }
    lVar25 = *(long *)(*(long *)(param_1 + 0x5d8) + (long)(int)uVar33 * 8);
    if (*(char *)(lVar25 + 0x168) != '\0') {
      local_4e8._0_4_ = *(float *)(lVar25 + 0x188);
      local_4e8._4_4_ = *(float *)(lVar25 + 0x1a8);
      local_4b0 = &DAT_3f8000003f800000;
      local_4a8 = &DAT_3f8000003f800000;
      local_4c0 = (undefined1 *)0x0;
      local_4b8 = (char *)0x3f80000000000000;
      uVar46 = param_3;
      if (*(uint *)(param_1 + 0x5c0) <= param_3) {
        uVar46 = 0;
      }
      lVar25 = *(long *)(param_1 + 0x5c8) + (long)(int)uVar46 * 0x808;
      FUN_039448b0(*(undefined4 *)(lVar25 + 2000),*(undefined4 *)(lVar25 + 0x7d4),param_2,*param_4,2
                   ,&local_4e8,&local_4c0);
      uVar46 = (uint)*(ushort *)(param_1 + 0x5ac);
    }
  }
  if ((uVar46 >> 5 & 1) != 0) {
    uVar33 = *(uint *)(param_1 + 0x18) & param_3;
    if (*(uint *)(param_1 + 0x5d0) <= uVar33) {
      uVar33 = 0;
    }
    lVar25 = *(long *)(*(long *)(param_1 + 0x5d8) + (long)(int)uVar33 * 8);
    if (*(char *)(lVar25 + 0x208) != '\0') {
      local_4e8._0_4_ = *(float *)(lVar25 + 0x228);
      local_4e8._4_4_ = *(float *)(lVar25 + 0x248);
      local_4b0 = &DAT_3f8000003f800000;
      local_4a8 = &DAT_3f8000003f800000;
      local_4c0 = (undefined1 *)0x0;
      local_4b8 = (char *)0x3f80000000000000;
      uVar46 = param_3;
      if (*(uint *)(param_1 + 0x5c0) <= param_3) {
        uVar46 = 0;
      }
      lVar25 = *(long *)(param_1 + 0x5c8) + (long)(int)uVar46 * 0x808;
      FUN_039448b0(*(undefined4 *)(lVar25 + 2000),*(undefined4 *)(lVar25 + 0x7d4),param_2,*param_4,2
                   ,&local_4e8,&local_4c0);
      uVar46 = (uint)*(ushort *)(param_1 + 0x5ac);
    }
  }
  if ((uVar46 >> 6 & 1) != 0) {
    uVar46 = *(uint *)(param_1 + 0x18) & param_3;
    if (*(uint *)(param_1 + 0x5d0) <= uVar46) {
      uVar46 = 0;
    }
    lVar25 = *(long *)(*(long *)(param_1 + 0x5d8) + (long)(int)uVar46 * 8);
    if (*(char *)(lVar25 + 0x2a8) != '\0') {
      local_4e8._0_4_ = *(float *)(lVar25 + 0x2c8);
      local_4e8._4_4_ = *(float *)(lVar25 + 0x2e8);
      local_4b0 = &DAT_3f8000003f800000;
      local_4a8 = &DAT_3f8000003f800000;
      local_4c0 = (undefined1 *)0x0;
      local_4b8 = (char *)0x3f80000000000000;
      uVar46 = param_3;
      if (*(uint *)(param_1 + 0x5c0) <= param_3) {
        uVar46 = 0;
      }
      lVar25 = *(long *)(param_1 + 0x5c8) + (long)(int)uVar46 * 0x808;
      FUN_039448b0(*(undefined4 *)(lVar25 + 2000),*(undefined4 *)(lVar25 + 0x7d4),param_2,*param_4,2
                   ,&local_4e8,&local_4c0);
    }
  }
  if (*plVar1 != 0) {
    FUN_006e9454(&local_4c0,"bloom:%d",0);
  }
  if (*(long *)(puVar44 + 0xfc) != 0) {
    FUN_006e9454(&local_4c0,"bloom:%d",1);
  }
  if (*(long *)(puVar44 + 0xfe) != 0) {
    FUN_006e9454(&local_4c0,"bloom:%d",2);
  }
  if (*(long *)(puVar44 + 0x100) != 0) {
    FUN_006e9454(&local_4c0,"bloom:%d",3);
  }
  if (*(long *)(puVar44 + 0x102) != 0) {
    FUN_006e9454(&local_4c0,"bloom:%d",4);
  }
  if ((param_5 & 1) == 0) {
    if (*(uint *)(param_1 + 0x5c0) <= param_3) {
      param_3 = 0;
    }
    lVar25 = *(long *)(param_1 + 0x5c8) + (long)(int)param_3 * 0x808;
    FUN_03a32288(lVar25 + 1000,lVar25 + 0x7d8);
    FUN_03a32288(lVar25 + 0x5d0,lVar25 + 0x7d8);
  }
  lVar18 = *(long *)PTR_DAT_04bbd510;
  lVar25 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar25 == 0) {
    iVar17 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar17 = (int)lVar25 + -1;
  }
  *(byte *)(puVar44 + 0x1f8) =
       *(byte *)(puVar44 + 0x1f8) & 0xfe | *(byte *)(lVar18 + (long)iVar17 * 0x290 + 0x298) & 1;
  return;
}

