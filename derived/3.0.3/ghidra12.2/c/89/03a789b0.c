
void FUN_03a789b0(long param_1,long param_2,undefined8 param_3,uint param_4)

{
  uint uVar1;
  uint *puVar2;
  uint *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  ushort uVar6;
  ushort uVar7;
  ushort uVar8;
  int iVar9;
  char cVar10;
  bool bVar11;
  uint uVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  undefined8 uVar16;
  uint uVar17;
  long lVar18;
  undefined8 uVar19;
  long lVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  long lVar23;
  long lVar24;
  ulong uVar25;
  undefined8 uVar26;
  ulong uVar27;
  long lVar28;
  ushort *puVar29;
  long lVar30;
  undefined4 *puVar31;
  float *pfVar32;
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
  undefined8 uVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  undefined8 uVar48;
  float fVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  undefined8 uVar53;
  float fVar54;
  float fVar55;
  undefined8 uVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  undefined8 uVar60;
  float fVar61;
  undefined8 uVar62;
  float local_1e0;
  float fStack_1dc;
  undefined4 local_1d8;
  float fStack_1d4;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  uint local_178 [2];
  undefined8 auStack_170 [8];
  undefined1 local_12b;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  
  uVar17 = (uint)param_3;
  lVar30 = *(long *)(param_1 + 0x238);
  lVar28 = *(long *)(param_1 + 0x228);
  if (*(uint *)(param_1 + 0x230) <= uVar17) {
    uVar17 = 0;
  }
  lVar18 = lVar30 + (long)(int)uVar17 * 0x6d0;
  uVar5 = param_4;
  if (*(uint *)(param_1 + 0x220) <= param_4) {
    uVar5 = 0;
  }
  lVar23 = *(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x5f0) + 8);
  iVar9 = *(int *)(lVar18 + 0x1c0) * (uint)*(ushort *)(*(long *)(lVar23 + 0x38) + 0x30) +
          (uint)*(byte *)(lVar28 + (long)(int)uVar5 * 0x2c + 5) *
          (uint)*(ushort *)
                 (*(long *)(lVar23 + 0x38) + (ulong)(1 < *(uint *)(lVar23 + 0x30)) * 0x38 + 0x30);
  if (iVar9 < 1) {
    lVar23 = *(long *)(lVar23 + 0x18);
  }
  else {
    uVar12 = iVar9 - 1;
    if (*(uint *)(lVar23 + 0x20) <= uVar12) {
      uVar12 = 0;
    }
    lVar23 = *(long *)(lVar23 + 0x28) + (ulong)uVar12 * 0x150;
  }
  puVar2 = (uint *)(lVar18 + 0x1c0);
  lVar18 = lVar30 + (long)(int)uVar17 * 0x6d0;
  local_80 = 0;
  local_90 = 0;
  uStack_88 = 0;
  if (*(uint *)(lVar18 + 0x210) <= param_4) {
    param_4 = 0;
  }
  FUN_03a75a00(param_1,param_2,param_3,
               *(undefined8 *)(*(long *)(lVar18 + 0x218) + (long)(int)param_4 * 8),0,&local_90,0,1);
  local_180 = 0xff7fffffff7fffff;
  local_1d0 = 0;
  uStack_1c8 = 0x3f80000000000000;
  local_190 = PTR_DAT_04bd0f08 + 0x10;
  uStack_188 = 0x7f7fffff7f7fffff;
  stack0xfffffffffffffe8c = 0x3f80000000000000;
  local_178[0] = *(uint *)PTR_DAT_04bd0ea8;
  if (local_178[0] < 6) {
    if ((1 << (ulong)(local_178[0] & 0x1f) & 0x39U) == 0) {
      fVar34 = *(float *)(lVar18 + 0x3d0);
      fVar33 = *(float *)(lVar18 + 0x3d4);
    }
    else {
      fVar33 = *(float *)(lVar18 + 0x3d0);
      fVar34 = *(float *)(lVar18 + 0x3d4);
    }
    fVar36 = fVar33;
    fVar35 = 0.0;
    if (fVar33 <= 0.0) {
      fVar36 = 0.0;
      fVar35 = fVar33;
    }
    fVar37 = fVar34;
    fVar33 = 0.0;
    if (fVar34 <= 0.0) {
      fVar37 = 0.0;
      fVar33 = fVar34;
    }
    uStack_188 = CONCAT44(fVar33,fVar35);
    local_180 = CONCAT44(fVar37,fVar36);
  }
  FUN_039025b0(0x3f800000,lVar18 + 0x3c8,param_2,0,1,&local_1d0,0,&local_190,1);
  FUN_038e4cec(&local_190);
  local_190._0_4_ = (int)((ulong)local_190 >> 0x18) << 0x18;
  local_12b = 0;
  local_190 = (undefined *)(CONCAT44(local_190._4_4_,(int)local_190) & 0xfffffffeffffffff);
  FUN_038e4d90(&local_190,param_2);
  lVar24 = lVar30 + (long)(int)uVar17 * 0x6d0;
  lVar18 = *(long *)(lVar24 + 0xa8);
  if (*(int *)(param_1 + 0x218) != 0) {
    lVar18 = lVar24 + 0x2e8;
  }
  uVar12 = *puVar2;
  if (uVar12 != 0) {
    uVar25 = 0;
    lVar24 = lVar30 + (long)(int)uVar17 * 0x6d0;
    uVar53 = *(undefined8 *)(lVar24 + 500);
    uVar48 = *(undefined8 *)(lVar24 + 0x1ec);
    uVar16 = *(undefined8 *)(lVar24 + 0x1d4);
    uVar19 = *(undefined8 *)(lVar24 + 0x1cc);
    uVar43 = *(undefined8 *)(lVar24 + 0x1e4);
    uVar26 = *(undefined8 *)(lVar24 + 0x1dc);
    do {
      uVar27 = -(uVar25 >> 0x1f) & 0xffffffc000000000 | uVar25 << 6;
      puVar4 = (undefined8 *)(lVar24 + 0xb0 + uVar27);
      uVar56 = puVar4[3];
      uVar60 = puVar4[5];
      uVar62 = puVar4[7];
      uVar1 = (int)uVar25 + 1;
      uVar25 = (ulong)uVar1;
      fVar46 = (float)*puVar4;
      fVar33 = (float)uVar19;
      fVar34 = (float)((ulong)uVar19 >> 0x20);
      fVar35 = (float)uVar16;
      fVar36 = (float)((ulong)uVar16 >> 0x20);
      fVar47 = (float)((ulong)*puVar4 >> 0x20);
      fVar37 = (float)uVar26;
      fVar38 = (float)((ulong)uVar26 >> 0x20);
      fVar39 = (float)uVar43;
      fVar40 = (float)((ulong)uVar43 >> 0x20);
      fVar49 = (float)puVar4[1];
      fVar41 = (float)uVar48;
      fVar42 = (float)((ulong)uVar48 >> 0x20);
      fVar44 = (float)uVar53;
      fVar45 = (float)((ulong)uVar53 >> 0x20);
      fVar50 = (float)puVar4[2];
      fVar51 = (float)((ulong)puVar4[2] >> 0x20);
      fVar52 = (float)uVar56;
      fVar54 = (float)puVar4[4];
      fVar55 = (float)((ulong)puVar4[4] >> 0x20);
      fVar57 = (float)uVar60;
      fVar58 = (float)puVar4[6];
      fVar59 = (float)((ulong)puVar4[6] >> 0x20);
      *(ulong *)((long)local_178 + (uVar27 - 0x10)) =
           CONCAT44((float)((ulong)puVar4[1] >> 0x20) +
                    fVar36 * fVar46 + fVar40 * fVar47 + fVar45 * fVar49,
                    fVar35 * fVar46 + fVar39 * fVar47 + fVar44 * fVar49 + 0.0);
      *(ulong *)((long)local_178 + (uVar27 - 0x18)) =
           CONCAT44(fVar34 * fVar46 + fVar38 * fVar47 + fVar42 * fVar49 + 0.0,
                    fVar33 * fVar46 + fVar37 * fVar47 + fVar41 * fVar49 + 0.0);
      *(ulong *)((long)local_178 + uVar27) =
           CONCAT44((float)((ulong)uVar56 >> 0x20) +
                    fVar36 * fVar50 + fVar40 * fVar51 + fVar45 * fVar52,
                    fVar35 * fVar50 + fVar39 * fVar51 + fVar44 * fVar52 + 0.0);
      *(ulong *)((long)local_178 + (uVar27 - 8)) =
           CONCAT44(fVar34 * fVar50 + fVar38 * fVar51 + fVar42 * fVar52 + 0.0,
                    fVar33 * fVar50 + fVar37 * fVar51 + fVar41 * fVar52 + 0.0);
      fVar46 = (float)uVar62;
      *(ulong *)((long)auStack_170 + uVar27 + 8) =
           CONCAT44((float)((ulong)uVar60 >> 0x20) +
                    fVar36 * fVar54 + fVar40 * fVar55 + fVar45 * fVar57,
                    fVar35 * fVar54 + fVar39 * fVar55 + fVar44 * fVar57 + 0.0);
      *(ulong *)((long)auStack_170 + uVar27) =
           CONCAT44(fVar34 * fVar54 + fVar38 * fVar55 + fVar42 * fVar57 + 0.0,
                    fVar33 * fVar54 + fVar37 * fVar55 + fVar41 * fVar57 + 0.0);
      *(ulong *)((long)auStack_170 + uVar27 + 0x18) =
           CONCAT44((float)((ulong)uVar62 >> 0x20) +
                    fVar36 * fVar58 + fVar40 * fVar59 + fVar45 * fVar46,
                    fVar35 * fVar58 + fVar39 * fVar59 + fVar44 * fVar46 + 0.0);
      *(ulong *)((long)auStack_170 + uVar27 + 0x10) =
           CONCAT44(fVar34 * fVar58 + fVar38 * fVar59 + fVar42 * fVar46 + 0.0,
                    fVar33 * fVar58 + fVar37 * fVar59 + fVar41 * fVar46 + 0.0);
    } while (uVar12 != uVar1);
  }
  lVar24 = lVar30 + (long)(int)uVar17 * 0x6d0;
  fVar33 = (float)*(undefined8 *)(lVar24 + 0x30);
  fVar46 = fVar33 * 0.0;
  fVar34 = (float)((ulong)*(undefined8 *)(lVar24 + 0x30) >> 0x20);
  fVar49 = fVar34 * 0.0;
  fVar35 = (float)*(undefined8 *)(lVar24 + 0x38);
  fVar51 = fVar35 * 0.0;
  fVar36 = (float)((ulong)*(undefined8 *)(lVar24 + 0x38) >> 0x20);
  fVar54 = fVar36 * 0.0;
  fVar37 = (float)*(undefined8 *)(lVar24 + 0x40);
  fVar39 = (float)((ulong)*(undefined8 *)(lVar24 + 0x40) >> 0x20);
  fVar41 = (float)*(undefined8 *)(lVar24 + 0x48);
  fVar44 = (float)((ulong)*(undefined8 *)(lVar24 + 0x48) >> 0x20);
  fVar47 = fVar46 + fVar37 * 0.0;
  fVar50 = fVar49 + fVar39 * 0.0;
  fVar52 = fVar51 + fVar41 * 0.0;
  fVar55 = fVar54 + fVar44 * 0.0;
  fVar38 = (float)*(undefined8 *)(lVar24 + 0x50);
  fVar40 = (float)((ulong)*(undefined8 *)(lVar24 + 0x50) >> 0x20);
  fVar42 = (float)*(undefined8 *)(lVar24 + 0x58);
  fVar45 = (float)((ulong)*(undefined8 *)(lVar24 + 0x58) >> 0x20);
  fVar57 = (float)*(undefined8 *)(lVar24 + 0x60);
  fVar58 = (float)((ulong)*(undefined8 *)(lVar24 + 0x60) >> 0x20);
  fVar59 = (float)*(undefined8 *)(lVar24 + 0x68);
  fVar61 = (float)((ulong)*(undefined8 *)(lVar24 + 0x68) >> 0x20);
  local_1d0 = CONCAT44(fVar34 * 0.5 + fVar39 * 0.0 + fVar40 * 0.0 + fVar58 * 0.5,
                       fVar33 * 0.5 + fVar37 * 0.0 + fVar38 * 0.0 + fVar57 * 0.5);
  uStack_1c8 = CONCAT44(fVar36 * 0.5 + fVar44 * 0.0 + fVar45 * 0.0 + fVar61 * 0.5,
                        fVar35 * 0.5 + fVar41 * 0.0 + fVar42 * 0.0 + fVar59 * 0.5);
  uStack_1c0 = CONCAT44(fVar49 + fVar39 * 0.5 + fVar40 * 0.0 + fVar58 * 0.5,
                        fVar46 + fVar37 * 0.5 + fVar38 * 0.0 + fVar57 * 0.5);
  uStack_1b8 = CONCAT44(fVar54 + fVar44 * 0.5 + fVar45 * 0.0 + fVar61 * 0.5,
                        fVar51 + fVar41 * 0.5 + fVar42 * 0.0 + fVar59 * 0.5);
  local_1b0 = CONCAT44(fVar50 + fVar40 * 0.5 + fVar58 * 0.5,fVar47 + fVar38 * 0.5 + fVar57 * 0.5);
  uStack_1a8 = CONCAT44(fVar55 + fVar45 * 0.5 + fVar61 * 0.5,fVar52 + fVar42 * 0.5 + fVar59 * 0.5);
  uStack_1a0 = CONCAT44(fVar58 + fVar50 + fVar40 * 0.0,fVar57 + fVar47 + fVar38 * 0.0);
  uStack_198 = CONCAT44(fVar61 + fVar55 + fVar45 * 0.0,fVar59 + fVar52 + fVar42 * 0.0);
  FUN_03907810(lVar23,param_2);
  puVar3 = (uint *)(lVar23 + 0x14);
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
    puVar14 = PTR_DAT_04bcf2e0;
  } while (cVar10 != '\0');
  lVar24 = 0xf0;
  if (*(uint *)(lVar23 + 0x30) < 0xb) {
    lVar24 = 0;
  }
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
  if (iVar9 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar9,0x40,&local_1d0);
  }
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + (ulong)(1 < *(uint *)(lVar23 + 0x30)) * 0x18);
  if (iVar9 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar9,0x30,
               lVar30 + (long)(int)uVar17 * 0x6d0 + 0x1cc);
  }
  lVar24 = lVar28 + (long)(int)uVar5 * 0x2c;
  puVar29 = (ushort *)(lVar24 + 2);
  local_1d8 = *(undefined4 *)(lVar24 + 8);
  lVar24 = lVar30 + (long)(int)uVar17 * 0x6d0;
  local_1e0 = 1.0 / (float)(int)(*puVar29 - 1);
  pfVar32 = (float *)(lVar24 + 0xa0);
  fStack_1dc = *pfVar32;
  fStack_1d4 = 1.0 - fStack_1dc / *(float *)(lVar24 + 0xa4);
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = 0x48;
  if (*(uint *)(lVar23 + 0x30) < 4) {
    lVar24 = 0;
  }
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
  if (iVar9 != -1) {
    (**(code **)puVar14)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar9,0x10,&local_1e0);
  }
  uVar7 = *puVar29;
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
    puVar14 = PTR_DAT_04bd0fc8;
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
    puVar13 = PTR_DAT_04bcf2e0;
  } while (cVar10 != '\0');
  local_1e0 = (float)(uint)uVar7;
  lVar24 = 0x60;
  if (*(uint *)(lVar23 + 0x30) < 5) {
    lVar24 = 0;
  }
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
  if (iVar9 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
               *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar9,4,&local_1e0);
  }
  uVar7 = *(ushort *)(lVar18 + 0x30);
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar8 = *(ushort *)(lVar18 + 0x32);
  uVar6 = uVar8;
  if (*(short *)(lVar18 + 0x3a) != 3) {
    uVar6 = 1;
  }
  if (uVar6 <= uVar8) {
    uVar6 = uVar8;
  }
  local_1e0 = 1.0 / (float)uVar7;
  fStack_1dc = 1.0 / (float)uVar6;
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = 0xd8;
  if (*(uint *)(lVar23 + 0x30) < 10) {
    lVar24 = 0;
  }
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
  if (iVar9 != -1) {
    (**(code **)puVar13)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
               *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar9,8,&local_1e0);
  }
  lVar24 = lVar28 + (long)(int)uVar5 * 0x2c;
  fStack_1dc = *(float *)(lVar24 + 0x14);
  local_1e0 = *(float *)(lVar24 + 0x18) - fStack_1dc;
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar24 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar24 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = 0xc0;
  if (*(uint *)(lVar23 + 0x30) < 9) {
    lVar24 = 0;
  }
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
  if (iVar9 != -1) {
    (**(code **)puVar13)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
               *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar9,8,&local_1e0);
  }
  uVar12 = *puVar2;
  if (uVar12 == 0) {
    do {
      uVar12 = *puVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = uVar12 | 0x80000000;
        cVar10 = ExclusiveMonitorsStatus();
      }
      puVar13 = PTR_DAT_04bcf2e0;
    } while (cVar10 != '\0');
    if ((uVar12 & 0x7fffffff) != 0) {
      if ((int)uVar12 < 0) {
        if ((int)*puVar3 < 0) {
          lVar24 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar24 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar23);
      }
    }
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = 0;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar24 = 0x90;
    if (*(uint *)(lVar23 + 0x30) < 7) {
      lVar24 = 0;
    }
    iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
    if (iVar9 != -1) {
      (**(code **)puVar13)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
                 *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar9,0x40,&local_190);
    }
  }
  else {
    do {
      uVar1 = *puVar3;
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = uVar1 | 0x80000000;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    if ((uVar1 & 0x7fffffff) != 0) {
      if ((int)uVar1 < 0) {
        if ((int)*puVar3 < 0) {
          lVar24 = *(long *)PTR_DAT_04bb29d0;
          do {
            nn::os::ConvertToTimeSpan(lVar24 / 1000000);
            nn::os::SleepThread();
          } while ((int)*puVar3 < 0);
        }
      }
      else {
        FUN_03907b80(lVar23);
      }
    }
    do {
      cVar10 = '\x01';
      bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
      if (bVar11) {
        *puVar3 = 0;
        cVar10 = ExclusiveMonitorsStatus();
      }
    } while (cVar10 != '\0');
    lVar24 = 0x90;
    if (*(uint *)(lVar23 + 0x30) < 7) {
      lVar24 = 0;
    }
    iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar24);
    if (iVar9 != -1) {
      (**(code **)PTR_DAT_04bcf2e0)
                (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
                 *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar9,(ulong)(uVar12 << 4) << 2,
                 &local_190);
    }
    FUN_01673550(lVar23,param_2,7,lVar30 + (long)(int)uVar17 * 0x6d0 + 0x1b0,*puVar2);
  }
  lVar24 = lVar30 + (long)(int)uVar17 * 0x6d0;
  *(undefined2 *)(lVar24 + 0x6b4) = 0x101;
  puVar2 = (uint *)(lVar24 + 0x6c4);
  *(undefined1 *)(lVar24 + 0x6b6) = 2;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar11) {
      *puVar2 = *puVar2 | 4;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar24 = lVar30 + (long)(int)uVar17 * 0x6d0;
  puVar31 = *(undefined4 **)
             (lVar24 + (ulong)*(byte *)(lVar28 + (long)(int)uVar5 * 0x2c + 4) * 8 + 0x220);
  *(undefined4 *)(lVar24 + 0x5f0) = *puVar31;
  *(undefined4 *)(lVar24 + 0x5f4) = puVar31[1];
  *(undefined8 *)(lVar24 + 0x5f8) = *(undefined8 *)(puVar31 + 2);
  *(undefined8 *)(lVar24 + 0x600) = *(undefined8 *)(puVar31 + 4);
  *(undefined4 *)(lVar24 + 0x608) = puVar31[6];
  *(undefined4 *)(lVar24 + 0x60c) = puVar31[7];
  *(undefined8 *)(lVar24 + 0x610) = *(undefined8 *)(puVar31 + 8);
  *(undefined8 *)(lVar24 + 0x618) = *(undefined8 *)(puVar31 + 10);
  uVar19 = *(undefined8 *)(puVar31 + 0xc);
  uVar16 = *(undefined8 *)(puVar31 + 0xe);
  uVar26 = *(undefined8 *)(puVar31 + 0x10);
  *(undefined8 *)(lVar24 + 0x637) = *(undefined8 *)((long)puVar31 + 0x47);
  *(undefined8 *)(lVar24 + 0x630) = uVar26;
  *(undefined8 *)(lVar24 + 0x628) = uVar16;
  *(undefined8 *)(lVar24 + 0x620) = uVar19;
  FUN_038fd1e0(lVar24 + 0x640);
  FUN_038fd2f0(lVar24 + 0x640,puVar31 + 0x14);
  uVar19 = *(undefined8 *)(puVar31 + 0x24);
  *(undefined4 *)(lVar24 + 0x688) = puVar31[0x26];
  *(undefined8 *)(lVar24 + 0x680) = uVar19;
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar2,0x10);
    if (bVar11) {
      *puVar2 = *puVar2 | 1;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar20 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar20 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(lVar18,param_2,
               *(long *)(lVar23 + 0x68) + (ulong)(1 < *(uint *)(lVar23 + 0x60)) * 0x18,0xffffffff,0)
  ;
  puVar14 = PTR_DAT_04bd0fc8;
  do {
    uVar12 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar12 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar12 & 0x7fffffff) != 0) {
    if ((int)uVar12 < 0) {
      if ((int)*puVar3 < 0) {
        lVar18 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar18 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  FUN_0390d290(lVar24 + 0x5f0,param_2,*(undefined8 *)(lVar23 + 0x68),0xffffffff,0);
  lVar28 = lVar28 + (long)(int)uVar5 * 0x2c;
  fVar33 = *pfVar32;
  lVar18 = lVar30 + (long)(int)uVar17 * 0x6d0;
  if (fVar33 <= 0.0 || *(char *)(lVar28 + 1) == '\0') {
    fVar33 = *(float *)(lVar28 + 0xc);
  }
  fVar34 = *(float *)(lVar28 + 0x10) - fVar33;
  fVar35 = (*(float *)(lVar28 + 0x10) - *(float *)(lVar28 + 0xc)) * 0.5;
  if (fVar34 <= fVar35) {
    fVar34 = fVar35;
  }
  uStack_188 = CONCAT44(fVar33 + 7.6293945e-06,fVar34);
  local_190 = (undefined *)CONCAT44(*(undefined4 *)(lVar18 + 0x1c8),*(undefined4 *)(lVar18 + 0x1c4))
  ;
  do {
    uVar5 = *puVar3;
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = uVar5 | 0x80000000;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  if ((uVar5 & 0x7fffffff) != 0) {
    if ((int)uVar5 < 0) {
      if ((int)*puVar3 < 0) {
        lVar28 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar28 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar3 < 0);
      }
    }
    else {
      FUN_03907b80(lVar23);
    }
  }
  do {
    cVar10 = '\x01';
    bVar11 = (bool)ExclusiveMonitorPass(puVar3,0x10);
    if (bVar11) {
      *puVar3 = 0;
      cVar10 = ExclusiveMonitorsStatus();
    }
  } while (cVar10 != '\0');
  lVar28 = 0x30;
  if (*(uint *)(lVar23 + 0x30) < 3) {
    lVar28 = 0;
  }
  iVar9 = *(int *)(*(long *)(lVar23 + 0x38) + lVar28);
  if (iVar9 != -1) {
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)puVar14 + 0x70),
               *(undefined8 *)(*(long *)puVar14 + 0x18),(long)iVar9,0x10,&local_190);
  }
  puVar14 = PTR_DAT_04bc1010;
  uVar21 = 0x12;
  if ((*(uint *)(*(long *)PTR_DAT_04bc1010 + 800) & 2) != 0) {
    uVar21 = 0x112;
  }
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
  puVar13 = PTR_DAT_04bbd7e0;
  *(undefined8 *)(param_2 + 0x100) = 0;
  uVar19 = *(undefined8 *)(param_2 + 0xb8);
  lVar28 = *(long *)puVar13;
  (**(code **)PTR_DAT_04bcf1a8)(uVar19,0x10,lVar28 + 0x1024);
  (**(code **)PTR_DAT_04bcf1b0)(uVar19,0x10,lVar28 + 0x1068);
  puVar15 = PTR_DAT_04bcf1e8;
  puVar13 = PTR_DAT_04bbd560;
  iVar9 = *(int *)(lVar28 + 0x1010);
  if (iVar9 != 0) {
    lVar28 = *(long *)(lVar28 + 0x1018);
    uVar25 = 0;
    uVar27 = 0;
    do {
      lVar18 = *(long *)(lVar28 + (-(uVar27 >> 0x1f) & 0xfffffff800000000 | uVar27 << 3));
      if (lVar18 != 0) {
        uVar16 = (**(code **)puVar13)(lVar18 + 8);
        (**(code **)puVar15)(uVar19,uVar25 & 0xffffffff,uVar16,*(undefined4 *)(lVar18 + 0x118));
      }
      uVar25 = uVar27 + 1;
      uVar27 = uVar25 & 0xffffffff;
    } while (iVar9 != (int)uVar25);
  }
  lVar28 = *(long *)PTR_DAT_04bbd7e8;
  iVar9 = *(int *)(lVar28 + 0x480);
  if (iVar9 != 0) {
    uVar21 = *(undefined4 *)(lVar28 + 0x464);
    uVar16 = *(undefined8 *)(param_2 + 0xb8);
    uVar19 = (**(code **)puVar13)(lVar28 + 0x488);
    (**(code **)PTR_DAT_04bbd568)(uVar16,uVar21,*(undefined4 *)(lVar28 + 0x460),iVar9,uVar19);
  }
  uVar17 = *(uint *)(lVar30 + (long)(int)uVar17 * 0x6d0 + 0x488);
  if (uVar17 == 0xffffffff) {
    return;
  }
  lVar28 = *(long *)puVar14;
  if ((*(uint *)(lVar28 + 0x5c8) >> 3 & 1) == 0) {
    uVar5 = uVar17 - *(ushort *)(lVar28 + 0x3da);
    if (*(uint *)(lVar28 + 0x368) <= uVar5) {
      uVar5 = 0;
    }
    if ((*(uint *)(*(long *)(lVar28 + 0x370) + (long)(int)uVar5 * 0x20 + 4) >> 2 & 1) == 0) {
      uVar25 = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar17 & 0x3f);
      goto LAB_03a7999c;
    }
  }
  if ((*(uint *)(lVar28 + 0x5c8) >> 5 & 1) == 0) {
    uVar22 = 0x112;
    uVar21 = 0x12;
  }
  else {
    uVar22 = 0x111;
    uVar21 = 0x11;
  }
  if ((*(uint *)(lVar28 + 800) & 2) != 0) {
    uVar21 = uVar22;
  }
  (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar21);
  uVar25 = 0;
LAB_03a7999c:
  *(ulong *)(param_2 + 0x100) = uVar25;
  return;
}

