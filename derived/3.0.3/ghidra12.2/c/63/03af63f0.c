
void FUN_03af63f0(long param_1,long param_2,uint param_3,uint param_4,undefined8 param_5,
                 long param_6)

{
  undefined4 *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  byte bVar6;
  ushort uVar7;
  ushort uVar8;
  ushort uVar9;
  char cVar10;
  bool bVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulong uVar19;
  undefined8 *puVar20;
  uint uVar21;
  long lVar22;
  byte *pbVar23;
  ulong uVar24;
  undefined4 *puVar25;
  long lVar26;
  uint *puVar27;
  long lVar28;
  long lVar29;
  long lVar30;
  uint uVar31;
  ulong uVar32;
  float fVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_168;
  float fStack_164;
  float local_160;
  float fStack_15c;
  undefined *local_158;
  float local_150;
  float fStack_14c;
  float local_148;
  float fStack_144;
  undefined4 local_140;
  undefined8 local_13c;
  float local_130;
  float local_12c;
  float local_128;
  float local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  uint local_108;
  undefined8 local_104;
  
  lVar22 = *(long *)(param_1 + 0x10);
  uVar4 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar4 = 0;
  }
  puVar27 = (uint *)(lVar22 + (long)(int)uVar4 * 0x23c0);
  fVar41 = (float)puVar27[0x2b8];
  fVar43 = (float)puVar27[0x2b6];
  fVar44 = (float)puVar27[0x2b9];
  fVar36 = (float)puVar27[0x2b7];
  uVar7 = *(ushort *)((long)puVar27 + 0x1fea);
  uVar5 = puVar27[0x7f8];
  puVar3 = puVar27 + 0x7ec;
  *puVar27 = *puVar27 & 0xffffff80 |
             *puVar27 & 0x3f | (uint)(*(char *)(param_6 + 0x234) == '\0') << 6;
  pbVar23 = (byte *)((long)puVar27 + 0x1fe9);
  bVar6 = *pbVar23;
  fVar40 = *(float *)(param_6 + 0xe0);
  fVar38 = *(float *)(param_6 + 0xe4);
  puVar27[0x80b] = (uint)fVar38;
  puVar27[0x80a] = (uint)fVar40;
  *pbVar23 = 1 - bVar6;
  iVar12 = (**(code **)(*(long *)(puVar27 + 0x7ec) + 0x20))(puVar3);
  iVar13 = (**(code **)(*(long *)(puVar27 + 0x7ec) + 0x20))(puVar3);
  uVar21 = puVar27[0x7f2];
  if (*(long *)(puVar27 + 0x7f4) == 0) {
    lVar15 = 0;
  }
  else {
    lVar15 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  fVar45 = fVar38 - fVar40;
  uVar32 = (ulong)(uVar21 + (uint)(byte)(1 - bVar6) * (uint)uVar7 * ((uVar5 + iVar12) - 1 & -iVar13)
                  );
  lVar29 = lVar15 + uVar32;
  lVar30 = lVar22 + (long)(int)uVar4 * 0x23c0;
  *(long *)(lVar30 + 0x1fc0) = lVar29;
  fVar34 = *(float *)(param_6 + 0xf4);
  fVar33 = *(float *)(param_1 + 0xb8);
  local_120 = (undefined *)CONCAT44(1.0 - fVar40 / fVar38,fVar40 / fVar45);
  local_118 = (char *)CONCAT44(fVar45 / fVar40,fVar45 / fVar38);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  lVar28 = **(long **)(lVar30 + 0x1fb8);
  bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 8) * 4];
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  if (bVar6 != 0) {
    uVar24 = (ulong)*(ushort *)(lVar28 + 4);
    uVar19 = (ulong)bVar6 & 3;
    if (bVar6 < 4) {
      lVar28 = 0;
      puVar20 = &local_120;
    }
    else {
      lVar28 = 0;
      puVar25 = (undefined4 *)(uVar24 + uVar32 + lVar15 + 8);
      puVar20 = &local_120;
      do {
        lVar28 = lVar28 + -4;
        puVar25[-2] = *(undefined4 *)puVar20;
        puVar25[-1] = *(undefined4 *)((long)puVar20 + 4);
        *puVar25 = *(undefined4 *)(puVar20 + 1);
        puVar1 = (undefined4 *)((long)puVar20 + 0xc);
        puVar20 = puVar20 + 2;
        puVar25[1] = *puVar1;
        puVar25 = puVar25 + 4;
      } while (-lVar28 != ((ulong)bVar6 & 0xfc));
      lVar28 = -lVar28;
    }
    if ((bVar6 & 3) != 0) {
      puVar25 = (undefined4 *)(lVar29 + uVar24 + lVar28 * 4);
      do {
        uVar19 = uVar19 - 1;
        *puVar25 = *(undefined4 *)puVar20;
        puVar20 = (undefined8 *)((long)puVar20 + 4);
        puVar25 = puVar25 + 1;
      } while (uVar19 != 0);
    }
  }
  uVar5 = param_3;
  if (*(uint *)(param_1 + 8) <= param_3) {
    uVar5 = 0;
  }
  local_120 = (undefined *)CONCAT44(fVar40,fVar45);
  fVar39 = 1.0;
  if ((*(uint *)(*(long *)(param_1 + 0x10) + (long)(int)uVar5 * 0x23c0 + 4) & 0x2000) != 0) {
    fVar39 = fVar45 / fVar40;
  }
  local_118 = (char *)CONCAT44((fVar33 / fVar34) * fVar39,fVar38);
  lVar15 = *(long *)(lVar30 + 0x1fc0);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  lVar29 = **(long **)(lVar30 + 0x1fb8);
  bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 0x14) * 4];
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  if ((ulong)bVar6 != 0) {
    memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar29 + 0x10)),&local_120,(ulong)bVar6 << 2);
  }
  local_120 = (undefined *)CONCAT44(fVar44 - fVar36,fVar41 - fVar43);
  puVar2 = puVar27 + 0xc2;
  local_118 = (char *)CONCAT44(1.0 / (fVar44 - fVar36),1.0 / (fVar41 - fVar43));
  lVar15 = *(long *)(lVar30 + 0x1fc0);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  lVar29 = **(long **)(lVar30 + 0x1fb8);
  bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 0x20) * 4];
  (**(code **)(*(long *)puVar3 + 0x18))(puVar3);
  if ((ulong)bVar6 != 0) {
    memcpy((void *)(lVar15 + (ulong)*(ushort *)(lVar29 + 0x1c)),&local_120,(ulong)bVar6 << 2);
  }
  uVar7 = *(ushort *)((long)puVar27 + 0x1fea);
  uVar5 = puVar27[0x7f8];
  bVar6 = *pbVar23;
  iVar12 = (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  iVar13 = (**(code **)(*(long *)puVar3 + 0x20))(puVar3);
  lVar15 = *(long *)(puVar27 + 0x7f4);
  if (lVar15 != 0) {
    uVar21 = puVar27[0x7f8];
    uVar31 = puVar27[0x7f2];
    uVar14 = (**(code **)PTR_DAT_04bcf030)(lVar15);
    if ((uVar14 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)
                (lVar15,uVar31 + (uint)uVar7 * (uint)bVar6 * ((uVar5 + iVar12) - 1 & -iVar13),uVar21
                );
    }
  }
  fVar36 = (float)puVar27[200];
  fVar38 = (float)puVar27[0xc9];
  fVar40 = (float)puVar27[0xc6];
  fVar41 = (float)puVar27[199];
  lVar15 = *(long *)PTR_DAT_04bbd510;
  local_120 = PTR_DAT_04bb2020 + 0x10;
  local_118 = "gsys::RenderBuffer::depth";
  uVar17 = *(undefined4 *)(param_1 + 0x24);
  puVar3 = (uint *)0x0;
  if ((*(uint *)(param_1 + 0x18) & 1) != 0) {
    puVar3 = puVar27 + 0x2a2;
  }
  lVar29 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
  if (lVar29 == 0) {
    iVar12 = nn::os::GetCurrentCoreNumber();
  }
  else {
    iVar12 = (int)lVar29 + -1;
  }
  local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar12);
  uVar16 = FUN_03948e10(lVar15,param_2,lVar15 + 0x10 + (long)iVar12 * 0x290,&local_120,uVar17,1,
                        (int)(fVar36 - fVar40),(int)(fVar38 - fVar41),1,0,1,puVar3,1,0,0,0);
  *(undefined8 *)(puVar27 + 0x1be) = uVar16;
  FUN_0155a100(puVar27 + 0x184,uVar16,*(undefined1 *)((long)puVar27 + 0x6ce),(short)puVar27[0x1b3]);
  lVar29 = lVar22 + (long)(int)uVar4 * 0x23c0;
  uVar7 = (ushort)puVar27[0x192];
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar9 = *(ushort *)(lVar29 + 0xd8);
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  if (uVar7 == uVar9) {
    uVar9 = *(ushort *)((long)puVar27 + 0x64a);
    uVar7 = uVar9;
    if (*(short *)((long)puVar27 + 0x652) != 3) {
      uVar7 = 1;
    }
    if (uVar7 <= uVar9) {
      uVar7 = uVar9;
    }
    lVar28 = lVar22 + (long)(int)uVar4 * 0x23c0;
    uVar8 = *(ushort *)(lVar28 + 0xda);
    uVar9 = uVar8;
    if (*(short *)(lVar28 + 0xe2) != 3) {
      uVar9 = 1;
    }
    if (uVar9 <= uVar8) {
      uVar9 = uVar8;
    }
    if (uVar7 == uVar9) {
      *(uint **)(lVar22 + (long)(int)uVar4 * 0x23c0 + 0x98) = puVar27 + 0x184;
    }
  }
  uVar21 = *(uint *)(param_1 + 8);
  lVar28 = *(long *)(param_1 + 0x10);
  uVar5 = param_3;
  if (uVar21 <= param_3) {
    uVar5 = 0;
  }
  lVar30 = lVar28 + (long)(int)uVar5 * 0x23c0;
  if ((*(byte *)(param_1 + 0x18) & 1) == 0) {
    iVar12 = 0;
    iVar13 = 0;
    lVar26 = 0;
    uVar16 = 0;
  }
  else {
    iVar12 = *(int *)(lVar30 + 0xa88);
    iVar13 = *(int *)(lVar30 + 0xa8c);
    lVar26 = *(long *)(lVar30 + 0xa90);
    uVar16 = *(undefined8 *)(lVar30 + 0xa98);
  }
  if (((lVar26 != *(long *)(lVar30 + 0x6e0)) || (iVar12 != *(int *)(lVar30 + 0x6d8))) ||
     (iVar13 != *(int *)(lVar30 + 0x6dc))) {
    puVar3 = (uint *)(lVar30 + 0x6c8);
    *(int *)(lVar30 + 0x6d8) = iVar12;
    *(int *)(lVar30 + 0x6dc) = iVar13;
    *(long *)(lVar30 + 0x6e0) = lVar26;
    *(undefined8 *)(lVar30 + 0x6e8) = uVar16;
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = *puVar3 | 8;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    uVar21 = *(uint *)(param_1 + 8);
    lVar28 = *(long *)(param_1 + 0x10);
  }
  if (uVar21 <= param_3) {
    param_3 = 0;
  }
  uVar5 = *(uint *)(lVar28 + (long)(int)param_3 * 0x23c0);
  if ((uVar5 >> 1 & 1) == 0) {
    lVar15 = 0;
  }
  else {
    uVar17 = *(undefined4 *)(param_1 + 0x20);
    local_120 = PTR_DAT_04bb2020 + 0x10;
    if ((uVar5 & 4) != 0) {
      uVar17 = 0x1d;
    }
    local_118 = "gsys::RenderBuffer::color";
    lVar28 = nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb3508);
    if (lVar28 == 0) {
      iVar12 = nn::os::GetCurrentCoreNumber();
    }
    else {
      iVar12 = (int)lVar28 + -1;
    }
    local_158 = (undefined *)CONCAT44(local_158._4_4_,iVar12);
    lVar15 = FUN_03948e10(lVar15,param_2,lVar15 + 0x10 + (long)iVar12 * 0x290,&local_120,uVar17,1,
                          (int)(fVar36 - fVar40),(int)(fVar38 - fVar41),1,0,1,0,1,0,0,0);
    *(long *)(puVar27 + 0x1bc) = lVar15;
    FUN_01560750(puVar27 + 0xdc,lVar15,*(undefined1 *)((long)puVar27 + 0x42e),(short)puVar27[0x10b])
    ;
  }
  puVar27[0x1c2] = puVar27[0xde];
  puVar27[0x1c3] = puVar27[0xdf];
  *(undefined8 *)(puVar27 + 0x1c4) = *(undefined8 *)(puVar27 + 0xe0);
  *(undefined8 *)(puVar27 + 0x1c6) = *(undefined8 *)(puVar27 + 0xe2);
  puVar27[0x1c8] = puVar27[0xe4];
  puVar27[0x1c9] = puVar27[0xe5];
  *(undefined8 *)(puVar27 + 0x1cc) = *(undefined8 *)(puVar27 + 0xe8);
  *(undefined8 *)(puVar27 + 0x1ca) = *(undefined8 *)(puVar27 + 0xe6);
  *(undefined8 *)((long)puVar27 + 0x74f) = *(undefined8 *)((long)puVar27 + 0x3bf);
  *(undefined8 *)(puVar27 + 0x1d2) = *(undefined8 *)(puVar27 + 0xee);
  *(undefined8 *)(puVar27 + 0x1d0) = *(undefined8 *)(puVar27 + 0xec);
  *(undefined8 *)(puVar27 + 0x1ce) = *(undefined8 *)(puVar27 + 0xea);
  FUN_038fd1e0(puVar27 + 0x1d6);
  FUN_038fd2f0(puVar27 + 0x1d6,puVar27 + 0xf2);
  *(undefined8 *)(puVar27 + 0x1e6) = *(undefined8 *)(puVar27 + 0x102);
  puVar27[0x1e8] = puVar27[0x104];
  puVar3 = puVar27 + 0x1f7;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = *puVar3 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  puVar27[0x1fa] = puVar27[0x186];
  *(undefined8 *)(puVar27 + 0x204) = *(undefined8 *)(puVar27 + 400);
  puVar27[0x1fb] = puVar27[0x187];
  *(undefined8 *)(puVar27 + 0x1fc) = *(undefined8 *)(puVar27 + 0x188);
  *(undefined8 *)(puVar27 + 0x1fe) = *(undefined8 *)(puVar27 + 0x18a);
  puVar27[0x200] = puVar27[0x18c];
  puVar27[0x201] = puVar27[0x18d];
  *(undefined8 *)(puVar27 + 0x202) = *(undefined8 *)(puVar27 + 0x18e);
  *(undefined8 *)((long)puVar27 + 0x82f) = *(undefined8 *)((long)puVar27 + 0x65f);
  *(undefined8 *)(puVar27 + 0x20a) = *(undefined8 *)(puVar27 + 0x196);
  *(undefined8 *)(puVar27 + 0x208) = *(undefined8 *)(puVar27 + 0x194);
  *(undefined8 *)(puVar27 + 0x206) = *(undefined8 *)(puVar27 + 0x192);
  FUN_038fd1e0(puVar27 + 0x20e);
  FUN_038fd2f0(puVar27 + 0x20e,puVar27 + 0x19a);
  *(undefined8 *)(puVar27 + 0x21e) = *(undefined8 *)(puVar27 + 0x1aa);
  puVar27[0x220] = puVar27[0x1ac];
  puVar3 = puVar27 + 0x22f;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = *puVar3 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  (**(code **)(*(long *)puVar2 + 0x38))(puVar2,param_2);
  FUN_038e77e4(puVar27 + 0x2a8,param_2,puVar2);
  if ((param_4 & 1) == 0) {
    *puVar27 = *puVar27 & 0xffffffcf | 0x10;
  }
  else {
    *puVar27 = *puVar27 | 0x30;
    bVar11 = (param_4 & 2) == 0 || lVar15 == 0;
    uVar21 = *(ushort *)(*(long *)(puVar27 + 0x1be) + 0x98) - 0x5d;
    uVar31 = (uint)bVar11;
    uVar5 = uVar31 & param_4 >> 2;
    uVar17 = *(undefined4 *)(param_1 + 0xbc);
    if ((*(byte *)(param_1 + 0x1c) >> 2 & 1) == 0) {
      local_110 = 0xff7fffffff7fffff;
      local_120 = PTR_DAT_04bd0f08 + 0x10;
      local_118 = (char *)0x7f7fffff7f7fffff;
      local_108 = *(uint *)PTR_DAT_04bd0ea8;
      local_104 = 0x3f80000000000000;
      if (local_108 < 6) {
        if ((1 << (ulong)(local_108 & 0x1f) & 0x39U) == 0) {
          fVar38 = (float)puVar27[0xc4];
          fVar36 = (float)puVar27[0xc5];
        }
        else {
          fVar36 = (float)puVar27[0xc4];
          fVar38 = (float)puVar27[0xc5];
        }
        fVar41 = fVar36;
        fVar40 = 0.0;
        if (fVar36 <= 0.0) {
          fVar41 = 0.0;
          fVar40 = fVar36;
        }
        fVar43 = fVar38;
        fVar36 = 0.0;
        if (fVar38 <= 0.0) {
          fVar43 = 0.0;
          fVar36 = fVar38;
        }
        local_118 = (char *)CONCAT44(fVar36,fVar40);
        local_110 = CONCAT44(fVar43,fVar41);
      }
      FUN_039025b0(0x3f800000,puVar2,param_2,0,uVar5 | (uint)(0xfffffffd < uVar21) << 2 | 2,param_5,
                   uVar17,&local_120,1);
      if (bVar11) {
        return;
      }
    }
    else {
      if (uVar5 != 0) {
        (**(code **)PTR_DAT_04bcfd90)(*(undefined8 *)(param_2 + 0xb8),0,param_5,0xf);
      }
      if (*(long *)(puVar27 + 0xda) != 0) {
        uVar18 = 0;
        if (0xfffffffd < uVar21) {
          uVar18 = 0xff;
        }
        (**(code **)PTR_DAT_04bcf298)(0x3f800000,*(undefined8 *)(param_2 + 0xb8),1,uVar17,uVar18);
      }
      if (uVar31 != 0) {
        return;
      }
    }
    FUN_038e4cec(&local_120);
    local_120 = (undefined *)(((ulong)local_120 >> 0x10 & 0xffff) << 0x10);
    FUN_038e4d90(&local_120,param_2);
    FUN_038e79bc(puVar27 + 0x2a8,&local_128,puVar2);
    fVar38 = (float)puVar27[0x2ac];
    fVar41 = (float)puVar27[0x2aa];
    fVar40 = (float)puVar27[0x2ad];
    fVar43 = (float)puVar27[0x2ab];
    uVar5 = puVar27[0x2ae];
    fVar44 = (float)puVar27[0xc6];
    fVar36 = fVar38 - fVar41;
    if (1 < uVar5 - 1) {
      fVar36 = fVar40 - fVar43;
    }
    fVar42 = (float)puVar27[0xc4];
    fVar33 = (float)puVar27[200];
    lVar15 = lVar22 + (long)(int)uVar4 * 0x23c0;
    fVar39 = (fVar36 / (float)puVar27[0xc5]) * ((float)puVar27[0xc9] - (float)puVar27[199]);
    fVar37 = (((float)puVar27[0xc9] - (float)puVar27[199]) - fVar39) - local_124;
    FUN_038e79bc(lVar29 + 0x10,&local_130,lVar15 + 0x38);
    fVar36 = *(float *)(lVar29 + 0x20);
    fVar34 = *(float *)(lVar29 + 0x24);
    fVar45 = *(float *)(lVar29 + 0x18);
    fVar35 = *(float *)(lVar29 + 0x1c);
    iVar12 = *(int *)(lVar29 + 0x28);
    uVar17 = *(undefined4 *)(lVar29 + 0xac);
    *(undefined4 *)(lVar15 + 0x220) = *(undefined4 *)(lVar29 + 0xa8);
    *(undefined4 *)(lVar15 + 0x224) = uVar17;
    uVar16 = *(undefined8 *)(lVar29 + 0xb8);
    fVar36 = fVar36 - fVar45;
    if (1 < iVar12 - 1U) {
      fVar36 = fVar34 - fVar35;
    }
    fVar34 = *(float *)(lVar15 + 0x44);
    *(undefined8 *)(lVar15 + 0x228) = *(undefined8 *)(lVar29 + 0xb0);
    *(undefined8 *)(lVar15 + 0x230) = uVar16;
    *(undefined4 *)(lVar15 + 0x238) = *(undefined4 *)(lVar15 + 0xc0);
    *(undefined4 *)(lVar15 + 0x23c) = *(undefined4 *)(lVar15 + 0xc4);
    fVar45 = *(float *)(lVar15 + 0x54) - *(float *)(lVar15 + 0x4c);
    *(undefined8 *)(lVar15 + 0x240) = *(undefined8 *)(lVar15 + 200);
    uVar16 = *(undefined8 *)(lVar29 + 0xef);
    *(undefined8 *)(lVar15 + 0x248) = *(undefined8 *)(lVar15 + 0xd0);
    *(undefined8 *)(lVar15 + 0x267) = uVar16;
    *(undefined8 *)(lVar15 + 0x260) = *(undefined8 *)(lVar29 + 0xe8);
    uVar16 = *(undefined8 *)(lVar29 + 0xd8);
    *(undefined8 *)(lVar15 + 600) = *(undefined8 *)(lVar29 + 0xe0);
    *(undefined8 *)(lVar15 + 0x250) = uVar16;
    FUN_038fd1e0(lVar15 + 0x270);
    FUN_038fd2f0(lVar15 + 0x270,lVar15 + 0xf8);
    *(undefined8 *)(lVar15 + 0x2b0) = *(undefined8 *)(lVar15 + 0x138);
    *(undefined4 *)(lVar15 + 0x2b8) = *(undefined4 *)(lVar15 + 0x140);
    puVar3 = (uint *)(lVar15 + 0x2f4);
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = *puVar3 | 1;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    fVar39 = fVar39 + fVar37;
    fVar40 = fVar40 - fVar43;
    if (1 < uVar5 - 1) {
      fVar40 = fVar38 - fVar41;
    }
    lVar22 = lVar22 + (long)(int)uVar4 * 0x23c0;
    local_13c = 0x3f80000000000000;
    local_140 = *(undefined4 *)PTR_DAT_04bd0ea8;
    local_158 = PTR_DAT_04bd0f08 + 0x10;
    fVar38 = (fVar40 / fVar42) * (fVar33 - fVar44) + local_128;
    local_148 = fVar38;
    local_150 = local_128;
    if (fVar38 <= local_128) {
      local_148 = local_128;
      local_150 = fVar38;
    }
    fStack_144 = fVar39;
    fStack_14c = fVar37;
    if (fVar39 <= fVar37) {
      fStack_144 = fVar37;
      fStack_14c = fVar39;
    }
    local_160 = 1.0 / *(float *)(lVar22 + 0x300);
    fStack_15c = 1.0 / *(float *)(lVar22 + 0x304);
    fStack_164 = -((fVar45 - (fVar36 / fVar34) * fVar45) - local_12c);
    if ((*puVar27 & 1) == 0) {
      local_168 = -local_130;
      uVar16 = *(undefined8 *)
                (*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x28) + 8) + 0x18
                );
      FUN_03907810(uVar16,param_2);
      FUN_03949e90(param_2,uVar16,lVar15 + 0x220,&local_158,&local_160,&local_168);
    }
    else {
      local_168 = -local_130;
      FUN_0394c450(0x400ccccd,param_2,lVar15 + 0x220,&local_158,&local_160,&local_168);
    }
  }
  return;
}

