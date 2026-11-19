
void FUN_039eefb0(long param_1,uint param_2,undefined8 *param_3,undefined8 *param_4,long param_5,
                 ulong param_6,uint param_7)

{
  long *plVar1;
  long *plVar2;
  undefined8 *puVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  ushort uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  ulong uVar18;
  undefined4 *puVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  undefined8 *puVar23;
  size_t __n;
  long lVar24;
  long lVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
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
  float fVar46;
  float fVar47;
  float fVar48;
  float fVar49;
  float local_110;
  float fStack_10c;
  float fStack_108;
  float local_104;
  undefined4 local_100 [12];
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  
  lVar20 = *(long *)(param_1 + 0x18);
  uVar12 = param_2;
  if (*(uint *)(param_1 + 0x10) <= param_2) {
    uVar12 = 0;
  }
  if (((*(byte *)(lVar20 + (long)(int)uVar12 * 0x410 + 0x409) & 1) != 0) || ((param_6 & 1) != 0)) {
    plVar1 = (long *)(lVar20 + (long)(int)uVar12 * 0x410 + 0x390);
    if ((param_7 & 1) == 0) {
      FUN_0390de10(plVar1,plVar1,0,3,0xb,0xe,0xffffffff,0);
    }
    fVar48 = (float)*param_4;
    fVar36 = (float)*param_3;
    fVar37 = (float)((ulong)*param_3 >> 0x20);
    fVar38 = (float)param_3[1];
    fVar39 = (float)((ulong)param_3[1] >> 0x20);
    fVar49 = (float)((ulong)*param_4 >> 0x20);
    fVar40 = (float)param_3[2];
    fVar42 = (float)((ulong)param_3[2] >> 0x20);
    fVar44 = (float)param_3[3];
    fVar46 = (float)((ulong)param_3[3] >> 0x20);
    fVar27 = (float)param_4[2];
    fVar28 = (float)((ulong)param_4[2] >> 0x20);
    fVar30 = (float)param_4[4];
    fVar31 = (float)((ulong)param_4[4] >> 0x20);
    fVar33 = (float)param_4[6];
    fVar34 = (float)((ulong)param_4[6] >> 0x20);
    fVar26 = (float)param_4[1];
    fVar41 = (float)param_3[4];
    fVar43 = (float)((ulong)param_3[4] >> 0x20);
    fVar45 = (float)param_3[5];
    fVar47 = (float)((ulong)param_3[5] >> 0x20);
    fVar29 = (float)param_4[3];
    fVar32 = (float)param_4[5];
    fVar35 = (float)param_4[7];
    local_d0 = CONCAT44(fVar37 * fVar48 + fVar42 * fVar49 + fVar43 * fVar26 + 0.0,
                        fVar36 * fVar48 + fVar40 * fVar49 + fVar41 * fVar26 + 0.0);
    uStack_c8 = CONCAT44((float)((ulong)param_4[1] >> 0x20) +
                         fVar39 * fVar48 + fVar46 * fVar49 + fVar47 * fVar26,
                         fVar38 * fVar48 + fVar44 * fVar49 + fVar45 * fVar26 + 0.0);
    uStack_c0 = CONCAT44(fVar37 * fVar27 + fVar42 * fVar28 + fVar43 * fVar29 + 0.0,
                         fVar36 * fVar27 + fVar40 * fVar28 + fVar41 * fVar29 + 0.0);
    uStack_b8 = CONCAT44((float)((ulong)param_4[3] >> 0x20) +
                         fVar39 * fVar27 + fVar46 * fVar28 + fVar47 * fVar29,
                         fVar38 * fVar27 + fVar44 * fVar28 + fVar45 * fVar29 + 0.0);
    local_b0 = CONCAT44(fVar37 * fVar30 + fVar42 * fVar31 + fVar43 * fVar32 + 0.0,
                        fVar36 * fVar30 + fVar40 * fVar31 + fVar41 * fVar32 + 0.0);
    uStack_a8 = CONCAT44((float)((ulong)param_4[5] >> 0x20) +
                         fVar39 * fVar30 + fVar46 * fVar31 + fVar47 * fVar32,
                         fVar38 * fVar30 + fVar44 * fVar31 + fVar45 * fVar32 + 0.0);
    uStack_a0 = CONCAT44(fVar37 * fVar33 + fVar42 * fVar34 + fVar43 * fVar35 + 0.0,
                         fVar36 * fVar33 + fVar40 * fVar34 + fVar41 * fVar35 + 0.0);
    uStack_98 = CONCAT44((float)((ulong)param_4[7] >> 0x20) +
                         fVar39 * fVar33 + fVar46 * fVar34 + fVar47 * fVar35,
                         fVar38 * fVar33 + fVar44 * fVar34 + fVar45 * fVar35 + 0.0);
    FUN_007535b4(local_100,param_3);
    lVar25 = lVar20 + (long)(int)uVar12 * 0x410;
    lVar24 = *(long *)(lVar25 + 0x3a0);
    plVar2 = (long *)(lVar25 + 0x3a0);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    puVar3 = (undefined8 *)(lVar25 + 0x398);
    lVar21 = **(long **)(lVar25 + 0x398);
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 8) * 4];
    uVar22 = (ulong)bVar8;
    uVar13 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (bVar8 != 0) {
      uVar15 = (ulong)*(ushort *)(lVar21 + 4);
      uVar14 = uVar22 & 3;
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_3;
          puVar16[-1] = *(undefined4 *)((long)param_3 + 4);
          *puVar16 = *(undefined4 *)(param_3 + 1);
          puVar17 = (undefined4 *)((long)param_3 + 0xc);
          param_3 = param_3 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4);
        uVar18 = uVar14;
        puVar23 = param_3;
        do {
          param_3 = (undefined8 *)((long)puVar23 + 4);
          uVar18 = uVar18 - 1;
          *puVar16 = *(undefined4 *)puVar23;
          puVar16 = puVar16 + 1;
          puVar23 = param_3;
        } while (uVar18 != 0);
      }
      uVar13 = uVar13 & 0xff;
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 4 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_3;
          puVar16[-1] = *(undefined4 *)((long)param_3 + 4);
          *puVar16 = *(undefined4 *)(param_3 + 1);
          puVar17 = (undefined4 *)((long)param_3 + 0xc);
          param_3 = param_3 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4 + uVar13 * 4);
        uVar18 = uVar14;
        puVar23 = param_3;
        do {
          param_3 = (undefined8 *)((long)puVar23 + 4);
          uVar18 = uVar18 - 1;
          *puVar16 = *(undefined4 *)puVar23;
          puVar16 = puVar16 + 1;
          puVar23 = param_3;
        } while (uVar18 != 0);
      }
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 8 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_3;
          puVar16[-1] = *(undefined4 *)((long)param_3 + 4);
          *puVar16 = *(undefined4 *)(param_3 + 1);
          puVar17 = (undefined4 *)((long)param_3 + 0xc);
          param_3 = param_3 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + uVar13 * 8 + lVar21 * 4);
        do {
          uVar14 = uVar14 - 1;
          *puVar16 = *(undefined4 *)param_3;
          puVar16 = puVar16 + 1;
          param_3 = (undefined8 *)((long)param_3 + 4);
        } while (uVar14 != 0);
      }
    }
    lVar24 = *plVar2;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x20) * 4];
    uVar22 = (ulong)bVar8;
    uVar13 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (bVar8 != 0) {
      uVar15 = (ulong)*(ushort *)(lVar21 + 0x1c);
      uVar14 = uVar22 & 3;
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_4;
          puVar16[-1] = *(undefined4 *)((long)param_4 + 4);
          *puVar16 = *(undefined4 *)(param_4 + 1);
          puVar17 = (undefined4 *)((long)param_4 + 0xc);
          param_4 = param_4 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4);
        uVar18 = uVar14;
        puVar23 = param_4;
        do {
          param_4 = (undefined8 *)((long)puVar23 + 4);
          uVar18 = uVar18 - 1;
          *puVar16 = *(undefined4 *)puVar23;
          puVar16 = puVar16 + 1;
          puVar23 = param_4;
        } while (uVar18 != 0);
      }
      uVar13 = uVar13 & 0xff;
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 4 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_4;
          puVar16[-1] = *(undefined4 *)((long)param_4 + 4);
          *puVar16 = *(undefined4 *)(param_4 + 1);
          puVar17 = (undefined4 *)((long)param_4 + 0xc);
          param_4 = param_4 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4 + uVar13 * 4);
        uVar18 = uVar14;
        puVar23 = param_4;
        do {
          param_4 = (undefined8 *)((long)puVar23 + 4);
          uVar18 = uVar18 - 1;
          *puVar16 = *(undefined4 *)puVar23;
          puVar16 = puVar16 + 1;
          puVar23 = param_4;
        } while (uVar18 != 0);
      }
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 8 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_4;
          puVar16[-1] = *(undefined4 *)((long)param_4 + 4);
          *puVar16 = *(undefined4 *)(param_4 + 1);
          puVar17 = (undefined4 *)((long)param_4 + 0xc);
          param_4 = param_4 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + uVar13 * 8 + lVar21 * 4);
        uVar18 = uVar14;
        puVar23 = param_4;
        do {
          param_4 = (undefined8 *)((long)puVar23 + 4);
          uVar18 = uVar18 - 1;
          *puVar16 = *(undefined4 *)puVar23;
          puVar16 = puVar16 + 1;
          puVar23 = param_4;
        } while (uVar18 != 0);
      }
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 0xc + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *(undefined4 *)param_4;
          puVar16[-1] = *(undefined4 *)((long)param_4 + 4);
          *puVar16 = *(undefined4 *)(param_4 + 1);
          puVar17 = (undefined4 *)((long)param_4 + 0xc);
          param_4 = param_4 + 2;
          puVar16[1] = *puVar17;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4 + uVar13 * 0xc);
        do {
          uVar14 = uVar14 - 1;
          *puVar16 = *(undefined4 *)param_4;
          puVar16 = puVar16 + 1;
          param_4 = (undefined8 *)((long)param_4 + 4);
        } while (uVar14 != 0);
      }
    }
    lVar21 = *plVar2;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar24 = *(long *)*puVar3;
    uVar22 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x14) * 4];
    uVar13 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (uVar22 != 0) {
      __n = uVar22 * 4;
      pvVar4 = (void *)(lVar21 + (ulong)*(ushort *)(lVar24 + 0x10));
      memcpy(pvVar4,&local_d0,__n);
      lVar21 = (uVar13 & 0xff) * 4;
      puVar16 = local_100 + uVar22 + 0xc;
      pvVar4 = (void *)((long)pvVar4 + lVar21);
      memcpy(pvVar4,puVar16,__n);
      pvVar4 = (void *)((long)pvVar4 + lVar21);
      memcpy(pvVar4,puVar16 + uVar22,__n);
      memcpy((void *)((long)pvVar4 + lVar21),puVar16 + uVar22 + uVar22,__n);
    }
    lVar24 = *plVar2;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x2c) * 4];
    uVar22 = (ulong)bVar8;
    uVar13 = (**(code **)(*plVar1 + 0x18))(plVar1);
    if (bVar8 != 0) {
      uVar15 = (ulong)*(ushort *)(lVar21 + 0x28);
      uVar14 = uVar22 & 3;
      if (bVar8 < 4) {
        lVar21 = 0;
        puVar17 = local_100;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + lVar24 + 8);
        puVar17 = local_100;
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *puVar17;
          puVar16[-1] = puVar17[1];
          *puVar16 = puVar17[2];
          puVar19 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar16[1] = *puVar19;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = puVar17;
        puVar19 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4);
        uVar18 = uVar14;
        do {
          puVar17 = puVar16 + 1;
          uVar18 = uVar18 - 1;
          *puVar19 = *puVar16;
          puVar16 = puVar17;
          puVar19 = puVar19 + 1;
        } while (uVar18 != 0);
      }
      uVar13 = uVar13 & 0xff;
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 4 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *puVar17;
          puVar16[-1] = puVar17[1];
          *puVar16 = puVar17[2];
          puVar19 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar16[1] = *puVar19;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = puVar17;
        puVar19 = (undefined4 *)(lVar24 + uVar15 + lVar21 * 4 + uVar13 * 4);
        uVar18 = uVar14;
        do {
          puVar17 = puVar16 + 1;
          uVar18 = uVar18 - 1;
          *puVar19 = *puVar16;
          puVar16 = puVar17;
          puVar19 = puVar19 + 1;
        } while (uVar18 != 0);
      }
      if (bVar8 < 4) {
        lVar21 = 0;
      }
      else {
        lVar21 = 0;
        puVar16 = (undefined4 *)(uVar15 + uVar13 * 8 + lVar24 + 8);
        do {
          lVar21 = lVar21 + -4;
          puVar16[-2] = *puVar17;
          puVar16[-1] = puVar17[1];
          *puVar16 = puVar17[2];
          puVar19 = puVar17 + 3;
          puVar17 = puVar17 + 4;
          puVar16[1] = *puVar19;
          puVar16 = puVar16 + 4;
        } while (-lVar21 != (uVar22 & 0xfc));
        lVar21 = -lVar21;
      }
      if ((bVar8 & 3) != 0) {
        puVar16 = (undefined4 *)(lVar24 + uVar15 + uVar13 * 8 + lVar21 * 4);
        do {
          uVar14 = uVar14 - 1;
          *puVar16 = *puVar17;
          puVar17 = puVar17 + 1;
          puVar16 = puVar16 + 1;
        } while (uVar14 != 0);
      }
    }
    local_110 = *(float *)(param_5 + 0xe0);
    fStack_10c = *(float *)(param_5 + 0xe4);
    fStack_108 = local_110 / fStack_10c;
    fVar48 = fStack_10c - local_110;
    lVar24 = *plVar2;
    local_104 = 1.0 - fStack_108;
    fVar49 = 1.0 / fVar48;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x38) * 4];
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((ulong)bVar8 != 0) {
      memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar21 + 0x34)),&local_110,(ulong)bVar8 << 2);
    }
    fStack_108 = *(float *)(param_5 + 0xec);
    local_104 = 1.0 / fStack_108;
    fStack_10c = fVar49 * *(float *)(param_5 + 0xe0);
    lVar24 = *plVar2;
    local_110 = fVar49;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x44) * 4];
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((ulong)bVar8 != 0) {
      memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar21 + 0x40)),&local_110,(ulong)bVar8 << 2);
    }
    lVar24 = *plVar2;
    fStack_10c = 0.0;
    fStack_108 = 0.0;
    local_104 = 0.0;
    local_110 = fVar48;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x50) * 4];
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((ulong)bVar8 != 0) {
      memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar21 + 0x4c)),&local_110,(ulong)bVar8 << 2);
    }
    fStack_10c = *(float *)(param_5 + 0xf4);
    local_104 = 0.0;
    fStack_108 = *(float *)(param_5 + 0xe8);
    local_110 = fStack_10c * *(float *)(param_5 + 0xec);
    lVar24 = *plVar2;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x5c) * 4];
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((ulong)bVar8 != 0) {
      memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar21 + 0x58)),&local_110,(ulong)bVar8 << 2);
    }
    if ((param_7 & 1) != 0) {
      FUN_0390de10(plVar1,plVar1,0,3,0xb,0xe,0xffffffff,0);
    }
    fVar48 = *(float *)(param_1 + 0x3c0);
    lVar24 = *plVar2;
    (**(code **)(*plVar1 + 0x20))(plVar1);
    (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)*puVar3;
    bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar21 + 0x194) * 4];
    local_110 = fVar48;
    (**(code **)(*plVar1 + 0x18))(plVar1);
    if ((ulong)bVar8 != 0) {
      memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar21 + 400)),&local_110,(ulong)bVar8 << 2);
    }
    if (param_2 != 0) {
      lVar21 = *(long *)(param_1 + 0x18) + 0x390;
      FUN_0390de10(lVar21,plVar1,10,10,10,10,0xffffffff,0);
      FUN_0390de10(lVar21,plVar1,0xf,0x19,0xf,0x19,0xffffffff,0);
      if (param_2 == 4) {
        local_110 = (float)*(undefined8 *)(param_1 + 0x3b0);
        fStack_10c = (float)((ulong)*(undefined8 *)(param_1 + 0x3b0) >> 0x20);
        fStack_108 = *(float *)(param_1 + 0x3b8);
        local_104 = *(float *)(param_1 + 0x3bc);
        lVar21 = *plVar2;
        (**(code **)(*plVar1 + 0x20))(plVar1);
        (**(code **)(*plVar1 + 0x20))(plVar1);
        lVar24 = *(long *)*puVar3;
        bVar8 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x110) * 4];
        (**(code **)(*plVar1 + 0x18))(plVar1);
        if ((ulong)bVar8 != 0) {
          memcpy((void *)(lVar21 + (ulong)*(ushort *)(lVar24 + 0x10c)),&local_110,(ulong)bVar8 << 2)
          ;
        }
      }
    }
    lVar20 = lVar20 + (long)(int)uVar12 * 0x410;
    iVar5 = *(int *)(lVar25 + 0x3c0);
    bVar8 = *(byte *)(lVar20 + 0x3c9);
    uVar9 = *(ushort *)(lVar20 + 0x3ca);
    iVar10 = (**(code **)(*plVar1 + 0x20))(plVar1);
    iVar11 = (**(code **)(*plVar1 + 0x20))(plVar1);
    lVar21 = *(long *)(lVar20 + 0x3b0);
    if (lVar21 != 0) {
      iVar6 = *(int *)(lVar25 + 0x3c0);
      iVar7 = *(int *)(lVar20 + 0x3a8);
      uVar12 = (**(code **)PTR_DAT_04bcf030)(lVar21);
      if ((uVar12 >> 2 & 1) != 0) {
        (*DAT_04c61fd8)(lVar21,iVar7 + (uint)uVar9 * (uint)bVar8 * ((iVar5 + iVar10) - 1U & -iVar11)
                        ,iVar6);
      }
    }
  }
  return;
}

