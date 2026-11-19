
void FUN_03abe370(float param_1,float param_2,float param_3,float param_4,long param_5,uint param_6,
                 float *param_7,undefined8 *param_8,int param_9,int param_10)

{
  undefined4 *puVar1;
  void *pvVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte bVar6;
  ushort uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  ulong uVar14;
  undefined4 *puVar15;
  float *pfVar16;
  float *pfVar17;
  long lVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  float *pfVar22;
  ulong uVar23;
  long lVar24;
  long *plVar25;
  long *plVar26;
  long lVar27;
  long lVar28;
  ulong uVar29;
  size_t sVar30;
  long lVar31;
  long *plVar32;
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
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  float fVar55;
  float fVar56;
  float fVar57;
  float fVar58;
  float fVar59;
  float fVar60;
  float fVar61;
  undefined4 uVar62;
  float fVar63;
  float fVar64;
  float fVar65;
  float fVar66;
  float local_160;
  float fStack_15c;
  float local_158;
  float fStack_154;
  float local_150 [16];
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined4 local_8c [3];
  
  if (*(uint *)(param_5 + 0x10) <= param_6) {
    param_6 = 0;
  }
  if ((*(byte *)(param_5 + 0x5d0) & 1) != 0) {
    lVar18 = *(long *)(param_5 + 0x18);
    plVar25 = (long *)(lVar18 + (long)(int)param_6 * 0x488);
    lVar27 = plVar25[2];
    local_160 = 0.25 / (float)param_9;
    fStack_15c = 0.25 / (float)param_10;
    local_158 = -0.5 / (float)param_9;
    fStack_154 = -0.5 / (float)param_10;
    (**(code **)(*plVar25 + 0x20))(plVar25);
    (**(code **)(*plVar25 + 0x20))(plVar25);
    local_d0 = CONCAT44(local_d0._4_4_,param_1);
    lVar24 = *(long *)plVar25[1];
    bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 8) * 4];
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if ((ulong)bVar6 != 0) {
      memcpy((void *)(lVar27 + (ulong)*(ushort *)(lVar24 + 4)),&local_d0,(ulong)bVar6 << 2);
    }
    lVar27 = plVar25[2];
    (**(code **)(*plVar25 + 0x20))(plVar25);
    (**(code **)(*plVar25 + 0x20))(plVar25);
    local_d0 = CONCAT44(local_d0._4_4_,param_2 - param_1);
    lVar24 = *(long *)plVar25[1];
    bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x14) * 4];
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if ((ulong)bVar6 != 0) {
      memcpy((void *)(lVar27 + (ulong)*(ushort *)(lVar24 + 0x10)),&local_d0,(ulong)bVar6 << 2);
    }
    uVar62 = *(undefined4 *)(param_5 + 0x5d4);
    lVar27 = plVar25[2];
    (**(code **)(*plVar25 + 0x20))(plVar25);
    (**(code **)(*plVar25 + 0x20))(plVar25);
    local_d0 = CONCAT44(local_d0._4_4_,uVar62);
    lVar24 = *(long *)plVar25[1];
    bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x20) * 4];
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if ((ulong)bVar6 != 0) {
      memcpy((void *)(lVar27 + (ulong)*(ushort *)(lVar24 + 0x1c)),&local_d0,(ulong)bVar6 << 2);
    }
    local_d0 = CONCAT44(param_3,param_3 * param_4);
    lVar27 = plVar25[2];
    (**(code **)(*plVar25 + 0x20))(plVar25);
    (**(code **)(*plVar25 + 0x20))(plVar25);
    lVar24 = *(long *)plVar25[1];
    bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x2c) * 4];
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if ((ulong)bVar6 != 0) {
      memcpy((void *)(lVar27 + (ulong)*(ushort *)(lVar24 + 0x28)),&local_d0,(ulong)bVar6 << 2);
    }
    lVar27 = plVar25[2];
    (**(code **)(*plVar25 + 0x20))(plVar25);
    (**(code **)(*plVar25 + 0x20))(plVar25);
    lVar24 = *(long *)plVar25[1];
    bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x38) * 4];
    (**(code **)(*plVar25 + 0x18))(plVar25);
    if ((ulong)bVar6 != 0) {
      memcpy((void *)(lVar27 + (ulong)*(ushort *)(lVar24 + 0x34)),&local_160,(ulong)bVar6 << 2);
    }
    bVar6 = *(byte *)((long)plVar25 + 0x39);
    uVar7 = *(ushort *)((long)plVar25 + 0x3a);
    lVar24 = plVar25[6];
    iVar10 = (**(code **)(*plVar25 + 0x20))(plVar25);
    iVar11 = (**(code **)(*plVar25 + 0x20))(plVar25);
    lVar27 = plVar25[4];
    if (lVar27 != 0) {
      lVar28 = plVar25[6];
      lVar31 = plVar25[3];
      uVar12 = (**(code **)PTR_DAT_04bcf030)(lVar27);
      if ((uVar12 >> 2 & 1) != 0) {
        (*DAT_04c61fd8)(lVar27,(int)lVar31 +
                               (uint)uVar7 * (uint)bVar6 * (((int)lVar24 + iVar10) - 1U & -iVar11),
                        (int)lVar28);
      }
    }
    uVar9 = DAT_04102218;
    uVar8 = DAT_04102210;
    if (0 < *(int *)(param_5 + 0x5d8)) {
      uVar12 = 0;
      lVar18 = lVar18 + (long)(int)param_6 * 0x488;
      do {
        lVar24 = *(long *)(param_5 + 0x28);
        uVar13 = uVar12;
        if (*(uint *)(param_5 + 0x20) <= uVar12) {
          uVar13 = 0;
        }
        iVar10 = *(int *)(lVar24 + (ulong)uVar13 * 0x2c);
        fVar38 = (float)uVar8;
        fVar40 = (float)((ulong)uVar8 >> 0x20);
        fVar41 = (float)uVar9;
        fVar42 = (float)((ulong)uVar9 >> 0x20);
        if (iVar10 == 1) {
          lVar24 = lVar24 + (ulong)uVar13 * 0x2c;
          fVar45 = *(float *)(lVar24 + 0xc);
          fVar36 = *(float *)(lVar24 + 0x10);
          fVar39 = *(float *)(lVar24 + 0x14);
          fVar47 = fVar36 * 0.0 + 0.0;
          fVar49 = fVar39 * 0.0 + 0.0;
          fVar50 = *(float *)(lVar24 + 4);
          fVar55 = *(float *)(lVar24 + 8);
          fVar33 = fVar36 + 0.0 + 0.0 + fVar38 * fVar50;
          fVar34 = fVar39 * 0.0 + 0.0 + 0.0 + fVar40 * fVar50;
          fVar35 = fVar36 * 0.0 + 0.0 + fVar41 * fVar50;
          fVar50 = fVar42 * fVar50 + 0.0;
          fVar37 = fVar36 * 0.0 + 0.0 + 0.0 + fVar38 * fVar55;
          fVar39 = fVar39 + 0.0 + 0.0 + fVar40 * fVar55;
          fVar44 = fVar36 * 0.0 + 0.0 + fVar41 * fVar55;
          fVar55 = fVar42 * fVar55 + 0.0;
          fVar58 = fVar47 + 0.0 + fVar38 * fVar45;
          fVar57 = fVar49 + 0.0 + fVar40 * fVar45;
          fVar59 = fVar36 + 0.0 + fVar41 * fVar45;
          fVar60 = fVar42 * fVar45 + 0.0;
          fVar38 = fVar47 + 0.0 + fVar38;
          fVar40 = fVar49 + 0.0 + fVar40;
          uStack_a0 = CONCAT44(fVar40,fVar38);
          fVar41 = fVar36 * 0.0 + 0.0 + fVar41;
          fVar42 = fVar42 + 0.0;
          uStack_98 = CONCAT44(fVar42,fVar41);
          fVar66 = (float)*(undefined8 *)(param_7 + 4);
          fVar46 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
          fVar36 = (float)*(undefined8 *)param_7;
          fVar45 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
          fVar54 = (float)*(undefined8 *)(param_7 + 8);
          fVar56 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
          fVar47 = (float)*(undefined8 *)(param_7 + 2);
          fVar48 = (float)*(undefined8 *)(param_7 + 6);
          fVar43 = (float)*(undefined8 *)(param_7 + 10);
          fVar49 = (float)((ulong)*(undefined8 *)(param_7 + 2) >> 0x20);
          fVar51 = fVar33 * fVar36 + fVar37 * fVar45 + fVar58 * fVar47 + fVar38 * fVar49;
          fVar52 = fVar34 * fVar36 + fVar39 * fVar45 + fVar57 * fVar47 + fVar40 * fVar49;
          local_d0 = CONCAT44(fVar52,fVar51);
          fVar53 = fVar35 * fVar36 + fVar44 * fVar45 + fVar59 * fVar47 + fVar41 * fVar49;
          fVar47 = fVar50 * fVar36 + fVar55 * fVar45 + fVar60 * fVar47 + fVar42 * fVar49;
          uStack_c8 = CONCAT44(fVar47,fVar53);
          fVar36 = (float)((ulong)*(undefined8 *)(param_7 + 6) >> 0x20);
          fVar61 = fVar33 * fVar66 + fVar37 * fVar46 + fVar58 * fVar48 + fVar38 * fVar36;
          fVar63 = fVar34 * fVar66 + fVar39 * fVar46 + fVar57 * fVar48 + fVar40 * fVar36;
          uStack_c0 = CONCAT44(fVar63,fVar61);
          fVar64 = fVar35 * fVar66 + fVar44 * fVar46 + fVar59 * fVar48 + fVar41 * fVar36;
          fVar65 = fVar50 * fVar66 + fVar55 * fVar46 + fVar60 * fVar48 + fVar42 * fVar36;
          uStack_b8 = CONCAT44(fVar65,fVar64);
          fVar36 = (float)((ulong)*(undefined8 *)(param_7 + 10) >> 0x20);
          fVar33 = fVar33 * fVar54 + fVar37 * fVar56 + fVar58 * fVar43 + fVar38 * fVar36;
          fVar34 = fVar34 * fVar54 + fVar39 * fVar56 + fVar57 * fVar43 + fVar40 * fVar36;
          local_b0 = CONCAT44(fVar34,fVar33);
          fVar35 = fVar35 * fVar54 + fVar44 * fVar56 + fVar59 * fVar43 + fVar41 * fVar36;
          fVar50 = fVar50 * fVar54 + fVar55 * fVar56 + fVar60 * fVar43 + fVar42 * fVar36;
          uStack_a8 = CONCAT44(fVar50,fVar35);
          fVar36 = (float)*param_8;
          fVar37 = (float)((ulong)*param_8 >> 0x20);
          fVar44 = (float)param_8[2];
          fVar55 = (float)((ulong)param_8[2] >> 0x20);
          fVar49 = (float)param_8[4];
          fVar66 = (float)((ulong)param_8[4] >> 0x20);
          fVar48 = (float)param_8[6];
          fVar54 = (float)((ulong)param_8[6] >> 0x20);
          lVar24 = *(long *)(lVar18 + 0x90);
          fVar39 = (float)param_8[1];
          fVar45 = (float)param_8[3];
          fVar46 = (float)param_8[5];
          fVar56 = (float)param_8[7];
          uVar13 = uVar12;
          if (*(uint *)(lVar18 + 0x88) <= uVar12) {
            uVar13 = 0;
          }
          plVar26 = (long *)(lVar24 + (ulong)uVar13 * 0x78);
          fVar43 = (float)((ulong)param_8[1] >> 0x20);
          local_110 = CONCAT44(fVar52 * fVar36 + fVar63 * fVar37 + fVar34 * fVar39 + fVar40 * fVar43
                               ,fVar51 * fVar36 + fVar61 * fVar37 + fVar33 * fVar39 +
                                fVar38 * fVar43);
          uStack_108 = CONCAT44(fVar47 * fVar36 + fVar65 * fVar37 + fVar50 * fVar39 +
                                fVar42 * fVar43,
                                fVar53 * fVar36 + fVar64 * fVar37 + fVar35 * fVar39 +
                                fVar41 * fVar43);
          fVar36 = (float)((ulong)param_8[3] >> 0x20);
          uStack_100 = CONCAT44(fVar52 * fVar44 + fVar63 * fVar55 + fVar34 * fVar45 +
                                fVar40 * fVar36,
                                fVar51 * fVar44 + fVar61 * fVar55 + fVar33 * fVar45 +
                                fVar38 * fVar36);
          uStack_f8 = CONCAT44(fVar47 * fVar44 + fVar65 * fVar55 + fVar50 * fVar45 + fVar42 * fVar36
                               ,fVar53 * fVar44 + fVar64 * fVar55 + fVar35 * fVar45 +
                                fVar41 * fVar36);
          fVar36 = (float)((ulong)param_8[5] >> 0x20);
          fVar37 = (float)((ulong)param_8[7] >> 0x20);
          uStack_e0 = CONCAT44(fVar52 * fVar48 + fVar63 * fVar54 + fVar34 * fVar56 + fVar40 * fVar37
                               ,fVar51 * fVar48 + fVar61 * fVar54 + fVar33 * fVar56 +
                                fVar38 * fVar37);
          uStack_d8 = CONCAT44(fVar47 * fVar48 + fVar65 * fVar54 + fVar50 * fVar56 + fVar42 * fVar37
                               ,fVar53 * fVar48 + fVar64 * fVar54 + fVar35 * fVar56 +
                                fVar41 * fVar37);
          plVar25 = plVar26 + 2;
          lVar27 = *plVar25;
          uStack_e8 = CONCAT44(fVar47 * fVar49 + fVar65 * fVar66 + fVar50 * fVar46 + fVar42 * fVar36
                               ,fVar53 * fVar49 + fVar64 * fVar66 + fVar35 * fVar46 +
                                fVar41 * fVar36);
          local_f0 = CONCAT44(fVar52 * fVar49 + fVar63 * fVar66 + fVar34 * fVar46 + fVar40 * fVar36,
                              fVar51 * fVar49 + fVar61 * fVar66 + fVar33 * fVar46 + fVar38 * fVar36)
          ;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          plVar32 = plVar26 + 1;
          lVar28 = *(long *)*plVar32;
          uVar20 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 8) * 4];
          uVar14 = (**(code **)(*plVar26 + 0x18))(plVar26);
          if (uVar20 != 0) {
            sVar30 = uVar20 * 4;
            pvVar2 = (void *)(lVar27 + (ulong)*(ushort *)(lVar28 + 4));
            memcpy(pvVar2,&local_110,sVar30);
            lVar27 = (uVar14 & 0xff) * 4;
            pfVar16 = local_150 + uVar20 + 0x10;
            pvVar2 = (void *)((long)pvVar2 + lVar27);
            memcpy(pvVar2,pfVar16,sVar30);
            pvVar2 = (void *)((long)pvVar2 + lVar27);
            memcpy(pvVar2,pfVar16 + uVar20,sVar30);
            memcpy((void *)((long)pvVar2 + lVar27),pfVar16 + uVar20 + uVar20,sVar30);
          }
          FUN_038e6ab4(local_150,&local_d0);
          lVar27 = *plVar25;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar28 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x14) * 4];
          uVar20 = (ulong)bVar6;
          uVar14 = (**(code **)(*plVar26 + 0x18))(plVar26);
          if (bVar6 != 0) {
            uVar29 = (ulong)*(ushort *)(lVar28 + 0x10);
            lVar28 = lVar27 + uVar29;
            if (bVar6 < 8) {
              lVar31 = 0;
              pfVar17 = local_150;
            }
            else {
              lVar31 = 0;
              pfVar16 = (float *)(lVar28 + 0x10);
              pfVar17 = local_150;
              do {
                lVar31 = lVar31 + -8;
                pfVar16[-4] = *pfVar17;
                pfVar16[-3] = pfVar17[1];
                pfVar16[-2] = pfVar17[2];
                pfVar16[-1] = pfVar17[3];
                *pfVar16 = pfVar17[4];
                pfVar16[1] = pfVar17[5];
                pfVar16[2] = pfVar17[6];
                pfVar22 = pfVar17 + 7;
                pfVar17 = pfVar17 + 8;
                pfVar16[3] = *pfVar22;
                pfVar16 = pfVar16 + 8;
              } while (-lVar31 != (uVar20 & 0xf8));
              lVar31 = -lVar31;
            }
            if ((bVar6 & 7) != 0) {
              uVar21 = uVar20 & 7;
              pfVar16 = pfVar17;
              pfVar22 = (float *)(lVar27 + uVar29 + lVar31 * 4);
              do {
                pfVar17 = pfVar16 + 1;
                uVar21 = uVar21 - 1;
                *pfVar22 = *pfVar16;
                pfVar16 = pfVar17;
                pfVar22 = pfVar22 + 1;
              } while (uVar21 != 0);
            }
            uVar21 = uVar20 & 7;
            uVar14 = uVar14 & 0xff;
            if (bVar6 < 8) {
              lVar31 = 0;
            }
            else {
              lVar31 = 0;
              pfVar16 = (float *)(lVar27 + uVar29 + uVar14 * 4 + 0x10);
              do {
                lVar31 = lVar31 + -8;
                pfVar16[-4] = *pfVar17;
                pfVar16[-3] = pfVar17[1];
                pfVar16[-2] = pfVar17[2];
                pfVar16[-1] = pfVar17[3];
                *pfVar16 = pfVar17[4];
                pfVar16[1] = pfVar17[5];
                pfVar16[2] = pfVar17[6];
                pfVar22 = pfVar17 + 7;
                pfVar17 = pfVar17 + 8;
                pfVar16[3] = *pfVar22;
                pfVar16 = pfVar16 + 8;
              } while (-lVar31 != (uVar20 & 0xf8));
              lVar31 = -lVar31;
            }
            if ((bVar6 & 7) != 0) {
              pfVar16 = pfVar17;
              pfVar22 = (float *)(lVar28 + lVar31 * 4 + uVar14 * 4);
              uVar23 = uVar21;
              do {
                pfVar17 = pfVar16 + 1;
                uVar23 = uVar23 - 1;
                *pfVar22 = *pfVar16;
                pfVar16 = pfVar17;
                pfVar22 = pfVar22 + 1;
              } while (uVar23 != 0);
            }
            if (bVar6 < 8) {
              lVar31 = 0;
            }
            else {
              lVar31 = 0;
              pfVar16 = (float *)(lVar27 + uVar29 + uVar14 * 8 + 0x10);
              do {
                lVar31 = lVar31 + -8;
                pfVar16[-4] = *pfVar17;
                pfVar16[-3] = pfVar17[1];
                pfVar16[-2] = pfVar17[2];
                pfVar16[-1] = pfVar17[3];
                *pfVar16 = pfVar17[4];
                pfVar16[1] = pfVar17[5];
                pfVar16[2] = pfVar17[6];
                pfVar22 = pfVar17 + 7;
                pfVar17 = pfVar17 + 8;
                pfVar16[3] = *pfVar22;
                pfVar16 = pfVar16 + 8;
              } while (-lVar31 != (uVar20 & 0xf8));
              lVar31 = -lVar31;
            }
            if ((bVar6 & 7) != 0) {
              pfVar16 = pfVar17;
              pfVar22 = (float *)(lVar28 + uVar14 * 8 + lVar31 * 4);
              uVar23 = uVar21;
              do {
                pfVar17 = pfVar16 + 1;
                uVar23 = uVar23 - 1;
                *pfVar22 = *pfVar16;
                pfVar16 = pfVar17;
                pfVar22 = pfVar22 + 1;
              } while (uVar23 != 0);
            }
            if (bVar6 < 8) {
              lVar31 = 0;
            }
            else {
              lVar31 = 0;
              pfVar16 = (float *)(lVar27 + uVar29 + uVar14 * 0xc + 0x10);
              do {
                lVar31 = lVar31 + -8;
                pfVar16[-4] = *pfVar17;
                pfVar16[-3] = pfVar17[1];
                pfVar16[-2] = pfVar17[2];
                pfVar16[-1] = pfVar17[3];
                *pfVar16 = pfVar17[4];
                pfVar16[1] = pfVar17[5];
                pfVar16[2] = pfVar17[6];
                pfVar22 = pfVar17 + 7;
                pfVar17 = pfVar17 + 8;
                pfVar16[3] = *pfVar22;
                pfVar16 = pfVar16 + 8;
              } while (-lVar31 != (uVar20 & 0xf8));
              lVar31 = -lVar31;
            }
            if ((bVar6 & 7) != 0) {
              pfVar16 = (float *)(lVar28 + lVar31 * 4 + uVar14 * 0xc);
              do {
                uVar21 = uVar21 - 1;
                *pfVar16 = *pfVar17;
                pfVar17 = pfVar17 + 1;
                pfVar16 = pfVar16 + 1;
              } while (uVar21 != 0);
            }
          }
          uVar3 = *(uint *)(param_5 + 0x20);
          lVar31 = *(long *)(param_5 + 0x28);
          lVar27 = *plVar25;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar28 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x20) * 4];
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if (bVar6 != 0) {
            uVar14 = (ulong)*(ushort *)(lVar28 + 0x1c);
            uVar4 = uVar12;
            if (uVar3 <= uVar12) {
              uVar4 = 0;
            }
            puVar15 = (undefined4 *)(lVar31 + (ulong)uVar4 * 0x2c + 0x18);
            if (bVar6 < 8) {
              lVar28 = 0;
            }
            else {
              lVar28 = 0;
              puVar19 = (undefined4 *)(lVar27 + uVar14 + 0x10);
              do {
                lVar28 = lVar28 + -8;
                puVar19[-4] = *puVar15;
                puVar19[-3] = puVar15[1];
                puVar19[-2] = puVar15[2];
                puVar19[-1] = puVar15[3];
                *puVar19 = puVar15[4];
                puVar19[1] = puVar15[5];
                puVar19[2] = puVar15[6];
                puVar1 = puVar15 + 7;
                puVar15 = puVar15 + 8;
                puVar19[3] = *puVar1;
                puVar19 = puVar19 + 8;
              } while (-lVar28 != ((ulong)bVar6 & 0xf8));
              lVar28 = -lVar28;
            }
            if ((bVar6 & 7) != 0) {
              uVar20 = (ulong)bVar6 & 7;
              puVar19 = (undefined4 *)(lVar27 + uVar14 + lVar28 * 4);
              do {
                uVar20 = uVar20 - 1;
                *puVar19 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar19 = puVar19 + 1;
              } while (uVar20 != 0);
            }
          }
          uVar3 = uVar12;
          if (*(uint *)(param_5 + 0x20) <= uVar12) {
            uVar3 = 0;
          }
          uVar62 = *(undefined4 *)(*(long *)(param_5 + 0x28) + (ulong)uVar3 * 0x2c + 0x28);
          lVar27 = *plVar25;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar28 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x2c) * 4];
          local_8c[0] = uVar62;
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if ((ulong)bVar6 != 0) {
            memcpy((void *)(lVar27 + (ulong)*(ushort *)(lVar28 + 0x28)),local_8c,(ulong)bVar6 << 2);
          }
          lVar24 = lVar24 + (ulong)uVar13 * 0x78;
          plVar25 = plVar26;
LAB_03abf34c:
          bVar6 = *(byte *)(lVar24 + 0x39);
          uVar7 = *(ushort *)(lVar24 + 0x3a);
          lVar27 = plVar25[6];
          iVar10 = (**(code **)(*plVar26 + 0x20))(plVar26);
          iVar11 = (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar28 = *(long *)(lVar24 + 0x20);
          if (lVar28 != 0) {
            lVar31 = plVar25[6];
            iVar5 = *(int *)(lVar24 + 0x18);
            uVar13 = (**(code **)PTR_DAT_04bcf030)(lVar28);
            if ((uVar13 >> 2 & 1) != 0) {
              (*DAT_04c61fd8)(lVar28,iVar5 + (uint)uVar7 * (uint)bVar6 *
                                             (((int)lVar27 + iVar10) - 1U & -iVar11),(int)lVar31);
            }
          }
        }
        else if (iVar10 == 0) {
          lVar24 = lVar24 + (ulong)uVar13 * 0x2c;
          fVar44 = *(float *)(lVar24 + 0xc);
          fVar36 = *(float *)(lVar24 + 0x10);
          fVar50 = *(float *)(lVar24 + 4);
          fVar55 = *(float *)(lVar24 + 8);
          fVar33 = fVar36 + 0.0 + 0.0 + fVar38 * fVar50;
          fVar34 = fVar36 * 0.0 + 0.0 + 0.0 + fVar40 * fVar50;
          fVar35 = fVar36 * 0.0 + 0.0 + fVar41 * fVar50;
          fVar50 = fVar42 * fVar50 + 0.0;
          fVar37 = fVar36 * 0.0 + 0.0;
          fVar39 = fVar36 * 0.0 + 0.0;
          fVar51 = fVar36 * 0.0 + 0.0 + 0.0 + fVar38 * fVar55;
          fVar52 = fVar36 + 0.0 + 0.0 + fVar40 * fVar55;
          fVar53 = fVar36 * 0.0 + 0.0 + fVar41 * fVar55;
          fVar54 = fVar42 * fVar55 + 0.0;
          fVar55 = fVar37 + 0.0 + fVar38 * fVar44;
          fVar45 = fVar39 + 0.0 + fVar40 * fVar44;
          fVar47 = fVar36 + 0.0 + fVar41 * fVar44;
          fVar49 = fVar42 * fVar44 + 0.0;
          fVar38 = fVar37 + 0.0 + fVar38;
          fVar40 = fVar39 + 0.0 + fVar40;
          fVar41 = fVar36 * 0.0 + 0.0 + fVar41;
          fVar42 = fVar42 + 0.0;
          fVar66 = (float)*(undefined8 *)(param_7 + 4);
          fVar46 = (float)((ulong)*(undefined8 *)(param_7 + 4) >> 0x20);
          fVar36 = (float)*(undefined8 *)param_7;
          fVar37 = (float)((ulong)*(undefined8 *)param_7 >> 0x20);
          fVar56 = (float)*(undefined8 *)(param_7 + 8);
          fVar43 = (float)((ulong)*(undefined8 *)(param_7 + 8) >> 0x20);
          fVar39 = (float)*(undefined8 *)(param_7 + 2);
          fVar48 = (float)*(undefined8 *)(param_7 + 6);
          fVar58 = (float)*(undefined8 *)(param_7 + 10);
          fVar44 = (float)((ulong)*(undefined8 *)(param_7 + 2) >> 0x20);
          fVar57 = fVar33 * fVar36 + fVar51 * fVar37 + fVar55 * fVar39 + fVar38 * fVar44;
          fVar59 = fVar34 * fVar36 + fVar52 * fVar37 + fVar45 * fVar39 + fVar40 * fVar44;
          fVar60 = fVar35 * fVar36 + fVar53 * fVar37 + fVar47 * fVar39 + fVar41 * fVar44;
          fVar61 = fVar50 * fVar36 + fVar54 * fVar37 + fVar49 * fVar39 + fVar42 * fVar44;
          fVar36 = (float)((ulong)*(undefined8 *)(param_7 + 6) >> 0x20);
          fVar63 = fVar33 * fVar66 + fVar51 * fVar46 + fVar55 * fVar48 + fVar38 * fVar36;
          fVar64 = fVar34 * fVar66 + fVar52 * fVar46 + fVar45 * fVar48 + fVar40 * fVar36;
          fVar65 = fVar35 * fVar66 + fVar53 * fVar46 + fVar47 * fVar48 + fVar41 * fVar36;
          fVar66 = fVar50 * fVar66 + fVar54 * fVar46 + fVar49 * fVar48 + fVar42 * fVar36;
          fVar36 = (float)((ulong)*(undefined8 *)(param_7 + 10) >> 0x20);
          fVar33 = fVar33 * fVar56 + fVar51 * fVar43 + fVar55 * fVar58 + fVar38 * fVar36;
          fVar34 = fVar34 * fVar56 + fVar52 * fVar43 + fVar45 * fVar58 + fVar40 * fVar36;
          fVar35 = fVar35 * fVar56 + fVar53 * fVar43 + fVar47 * fVar58 + fVar41 * fVar36;
          fVar50 = fVar50 * fVar56 + fVar54 * fVar43 + fVar49 * fVar58 + fVar42 * fVar36;
          fVar36 = (float)*param_8;
          fVar37 = (float)((ulong)*param_8 >> 0x20);
          fVar55 = (float)param_8[4];
          fVar45 = (float)((ulong)param_8[4] >> 0x20);
          fVar39 = (float)param_8[1];
          fVar47 = (float)param_8[5];
          fVar44 = (float)((ulong)param_8[1] >> 0x20);
          local_d0 = CONCAT44(fVar59 * fVar36 + fVar64 * fVar37 + fVar34 * fVar39 + fVar40 * fVar44,
                              fVar57 * fVar36 + fVar63 * fVar37 + fVar33 * fVar39 + fVar38 * fVar44)
          ;
          uStack_c8 = CONCAT44(fVar61 * fVar36 + fVar66 * fVar37 + fVar50 * fVar39 + fVar42 * fVar44
                               ,fVar60 * fVar36 + fVar65 * fVar37 + fVar35 * fVar39 +
                                fVar41 * fVar44);
          fVar36 = (float)param_8[2];
          fVar37 = (float)((ulong)param_8[2] >> 0x20);
          fVar39 = (float)((ulong)param_8[5] >> 0x20);
          local_b0 = CONCAT44(fVar59 * fVar55 + fVar64 * fVar45 + fVar34 * fVar47 + fVar40 * fVar39,
                              fVar57 * fVar55 + fVar63 * fVar45 + fVar33 * fVar47 + fVar38 * fVar39)
          ;
          uStack_a8 = CONCAT44(fVar61 * fVar55 + fVar66 * fVar45 + fVar50 * fVar47 + fVar42 * fVar39
                               ,fVar60 * fVar55 + fVar65 * fVar45 + fVar35 * fVar47 +
                                fVar41 * fVar39);
          fVar39 = (float)param_8[3];
          fVar44 = (float)((ulong)param_8[3] >> 0x20);
          uStack_c0 = CONCAT44(fVar59 * fVar36 + fVar64 * fVar37 + fVar34 * fVar39 + fVar40 * fVar44
                               ,fVar57 * fVar36 + fVar63 * fVar37 + fVar33 * fVar39 +
                                fVar38 * fVar44);
          uStack_b8 = CONCAT44(fVar61 * fVar36 + fVar66 * fVar37 + fVar50 * fVar39 + fVar42 * fVar44
                               ,fVar60 * fVar36 + fVar65 * fVar37 + fVar35 * fVar39 +
                                fVar41 * fVar44);
          fVar36 = (float)param_8[6];
          fVar37 = (float)((ulong)param_8[6] >> 0x20);
          fVar39 = (float)param_8[7];
          fVar44 = (float)((ulong)param_8[7] >> 0x20);
          uStack_a0 = CONCAT44(fVar59 * fVar36 + fVar64 * fVar37 + fVar34 * fVar39 + fVar40 * fVar44
                               ,fVar57 * fVar36 + fVar63 * fVar37 + fVar33 * fVar39 +
                                fVar38 * fVar44);
          uStack_98 = CONCAT44(fVar61 * fVar36 + fVar66 * fVar37 + fVar50 * fVar39 + fVar42 * fVar44
                               ,fVar60 * fVar36 + fVar65 * fVar37 + fVar35 * fVar39 +
                                fVar41 * fVar44);
          lVar27 = *(long *)(lVar18 + 0x80);
          uVar13 = uVar12;
          if (*(uint *)(lVar18 + 0x78) <= uVar12) {
            uVar13 = 0;
          }
          uVar20 = (ulong)uVar13;
          plVar26 = (long *)(lVar27 + uVar20 * 0x78);
          plVar25 = plVar26 + 2;
          lVar28 = *plVar25;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          plVar32 = plVar26 + 1;
          lVar24 = *(long *)*plVar32;
          uVar29 = (ulong)(byte)(&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 8) * 4];
          uVar14 = (**(code **)(*plVar26 + 0x18))(plVar26);
          if (uVar29 != 0) {
            sVar30 = uVar29 * 4;
            pvVar2 = (void *)(lVar28 + (ulong)*(ushort *)(lVar24 + 4));
            memcpy(pvVar2,&local_d0,sVar30);
            lVar24 = (uVar14 & 0xff) * 4;
            puVar15 = local_8c + (uVar29 - 0x11);
            pvVar2 = (void *)((long)pvVar2 + lVar24);
            memcpy(pvVar2,puVar15,sVar30);
            pvVar2 = (void *)((long)pvVar2 + lVar24);
            memcpy(pvVar2,puVar15 + uVar29,sVar30);
            memcpy((void *)((long)pvVar2 + lVar24),puVar15 + uVar29 + uVar29,sVar30);
          }
          lVar24 = *plVar25;
          uVar13 = uVar12;
          if (*(uint *)(param_5 + 0x20) <= uVar12) {
            uVar13 = 0;
          }
          lVar28 = *(long *)(param_5 + 0x28) + (ulong)uVar13 * 0x2c;
          fVar38 = *(float *)(lVar28 + 4);
          fVar40 = *(float *)(lVar28 + 8);
          fVar41 = *(float *)(lVar28 + 0xc);
          local_110 = CONCAT44(param_7[7] +
                               fVar40 * param_7[5] + fVar38 * param_7[4] + fVar41 * param_7[6],
                               param_7[3] +
                               fVar40 * param_7[1] + fVar38 * *param_7 + fVar41 * param_7[2]);
          uStack_108 = CONCAT44(uStack_108._4_4_,
                                param_7[0xb] +
                                fVar40 * param_7[9] + fVar38 * param_7[8] + fVar41 * param_7[10]);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar28 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x14) * 4];
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if ((ulong)bVar6 != 0) {
            memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar28 + 0x10)),&local_110,(ulong)bVar6 << 2
                  );
          }
          uVar13 = uVar12;
          if (*(uint *)(param_5 + 0x20) <= uVar12) {
            uVar13 = 0;
          }
          fVar38 = *(float *)(*(long *)(param_5 + 0x28) + (ulong)uVar13 * 0x2c + 0x10);
          if (fVar38 <= 0.0) {
            fVar38 = 1e+06;
          }
          else {
            fVar38 = 1.0 / (fVar38 * 0.5);
          }
          lVar28 = *plVar25;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar24 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x20) * 4];
          local_150[0] = fVar38;
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if ((ulong)bVar6 != 0) {
            memcpy((void *)(lVar28 + (ulong)*(ushort *)(lVar24 + 0x1c)),local_150,(ulong)bVar6 << 2)
            ;
          }
          uVar13 = *(uint *)(param_5 + 0x20);
          lVar31 = *(long *)(param_5 + 0x28);
          lVar28 = *plVar25;
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar24 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar24 + 0x2c) * 4];
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if (bVar6 != 0) {
            uVar14 = (ulong)*(ushort *)(lVar24 + 0x28);
            uVar3 = uVar12;
            if (uVar13 <= uVar12) {
              uVar3 = 0;
            }
            puVar15 = (undefined4 *)(lVar31 + (ulong)uVar3 * 0x2c + 0x18);
            if (bVar6 < 8) {
              lVar24 = 0;
            }
            else {
              lVar24 = 0;
              puVar19 = (undefined4 *)(lVar28 + uVar14 + 0x10);
              do {
                lVar24 = lVar24 + -8;
                puVar19[-4] = *puVar15;
                puVar19[-3] = puVar15[1];
                puVar19[-2] = puVar15[2];
                puVar19[-1] = puVar15[3];
                *puVar19 = puVar15[4];
                puVar19[1] = puVar15[5];
                puVar19[2] = puVar15[6];
                puVar1 = puVar15 + 7;
                puVar15 = puVar15 + 8;
                puVar19[3] = *puVar1;
                puVar19 = puVar19 + 8;
              } while (-lVar24 != ((ulong)bVar6 & 0xf8));
              lVar24 = -lVar24;
            }
            if ((bVar6 & 7) != 0) {
              uVar29 = (ulong)bVar6 & 7;
              puVar19 = (undefined4 *)(lVar28 + uVar14 + lVar24 * 4);
              do {
                uVar29 = uVar29 - 1;
                *puVar19 = *puVar15;
                puVar15 = puVar15 + 1;
                puVar19 = puVar19 + 1;
              } while (uVar29 != 0);
            }
          }
          lVar24 = *plVar25;
          uVar13 = uVar12;
          if (*(uint *)(param_5 + 0x20) <= uVar12) {
            uVar13 = 0;
          }
          fVar38 = *(float *)(*(long *)(param_5 + 0x28) + (ulong)uVar13 * 0x2c + 0x28);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          (**(code **)(*plVar26 + 0x20))(plVar26);
          lVar28 = *(long *)*plVar32;
          bVar6 = (&DAT_041b370c)[(ulong)*(byte *)(lVar28 + 0x38) * 4];
          local_150[0] = fVar38;
          (**(code **)(*plVar26 + 0x18))(plVar26);
          if ((ulong)bVar6 != 0) {
            memcpy((void *)(lVar24 + (ulong)*(ushort *)(lVar28 + 0x34)),local_150,(ulong)bVar6 << 2)
            ;
          }
          lVar24 = lVar27 + uVar20 * 0x78;
          plVar25 = (long *)(lVar27 + uVar20 * 0x78);
          goto LAB_03abf34c;
        }
        uVar12 = uVar12 + 1;
      } while ((int)uVar12 < *(int *)(param_5 + 0x5d8));
    }
  }
  return;
}

