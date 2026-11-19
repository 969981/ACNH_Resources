
void FUN_03aafc30(long param_1)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  ushort uVar5;
  char cVar6;
  bool bVar7;
  undefined1 (*pauVar8) [12];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [12];
  undefined1 auVar13 [12];
  float fVar14;
  float fVar15;
  float fVar16;
  long lVar17;
  int iVar18;
  int iVar19;
  long lVar20;
  long lVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  long lVar25;
  long *plVar26;
  long lVar27;
  int iVar28;
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
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
  undefined8 uVar49;
  float fVar50;
  float fVar51;
  float fVar52;
  float fVar53;
  float fVar54;
  undefined8 uVar55;
  undefined8 uVar56;
  float fVar57;
  
  iVar2 = *(int *)(param_1 + 0x15d0);
  if (iVar2 != 0) {
    lVar27 = *(long *)(param_1 + 0x15d8);
    iVar28 = 0;
    do {
      lVar25 = lVar27 + (long)iVar28 * 0x7e8;
      lVar20 = *(long *)(lVar25 + 0x468);
      if ((lVar20 == 0) || (*(long *)(*(long *)(param_1 + 0x440) + 0x6b8) == 0)) {
        *(undefined1 *)(lVar27 + (long)iVar28 * 0x7e8 + 0x5a8) = 0;
      }
      else {
        if (*(char *)(lVar27 + (long)iVar28 * 0x7e8 + 0x5a9) != '\0') {
          FUN_03ab6e60(lVar25);
          lVar20 = *(long *)(lVar25 + 0x468);
        }
        lVar21 = lVar27 + (long)iVar28 * 0x7e8;
        uVar56 = *(undefined8 *)(lVar25 + 0x2d8);
        uVar55 = *(undefined8 *)(lVar25 + 0x2d0);
        fVar45 = *(float *)(lVar25 + 0x2b0);
        fVar31 = *(float *)(lVar25 + 0x2b4);
        fVar33 = *(float *)(lVar25 + 0x2b8);
        fVar38 = *(float *)(lVar25 + 700);
        fVar57 = *(float *)(lVar25 + 0x2c0);
        fVar14 = *(float *)(lVar25 + 0x2c4);
        fVar15 = *(float *)(lVar25 + 0x2c8);
        fVar16 = *(float *)(lVar25 + 0x2cc);
        *(undefined1 *)(lVar21 + 0x5a8) = 1;
        fVar32 = (float)*(undefined8 *)(lVar20 + 0x2b8);
        fVar34 = (float)((ulong)*(undefined8 *)(lVar20 + 0x2b8) >> 0x20);
        fVar35 = (float)*(undefined8 *)(lVar20 + 0x2c0);
        fVar36 = (float)((ulong)*(undefined8 *)(lVar20 + 0x2c0) >> 0x20);
        fVar37 = (float)*(undefined8 *)(lVar20 + 0x2c8);
        fVar39 = (float)((ulong)*(undefined8 *)(lVar20 + 0x2c8) >> 0x20);
        fVar40 = (float)*(undefined8 *)(lVar20 + 0x2d0);
        fVar41 = (float)((ulong)*(undefined8 *)(lVar20 + 0x2d0) >> 0x20);
        uVar49 = *(undefined8 *)(lVar20 + 0x2e0);
        uVar24 = *(undefined8 *)(lVar20 + 0x2d8);
        pauVar8 = (undefined1 (*) [12])(lVar20 + 0x2e8);
        uVar23 = *(undefined8 *)(lVar20 + 0x2f0);
        fVar53 = (float)uVar23;
        fVar54 = (float)((ulong)uVar23 >> 0x20);
        uVar22 = *(undefined8 *)*pauVar8;
        auVar13 = *pauVar8;
        auVar12 = *pauVar8;
        fVar51 = (float)uVar22;
        fVar52 = (float)((ulong)uVar22 >> 0x20);
        *(undefined8 *)(lVar21 + 0x588) = uVar23;
        *(undefined8 *)(lVar21 + 0x580) = uVar22;
        *(undefined8 *)(lVar21 + 0x540) = uVar22;
        fVar46 = (float)uVar24;
        fVar47 = (float)((ulong)uVar24 >> 0x20);
        fVar48 = (float)uVar49;
        fVar50 = (float)((ulong)uVar49 >> 0x20);
        fVar42 = fVar32 * fVar45 + fVar37 * fVar31 + fVar46 * fVar33 + fVar51 * fVar38;
        fVar43 = fVar34 * fVar45 + fVar39 * fVar31 + fVar47 * fVar33 + fVar52 * fVar38;
        fVar44 = fVar35 * fVar45 + fVar40 * fVar31 + fVar48 * fVar33 + fVar53 * fVar38;
        fVar45 = fVar36 * fVar45 + fVar41 * fVar31 + fVar50 * fVar33 + fVar54 * fVar38;
        auVar29._0_8_ =
             CONCAT44(fVar34 * fVar57 + fVar39 * fVar14 + fVar47 * fVar15 + fVar52 * fVar16,
                      fVar32 * fVar57 + fVar37 * fVar14 + fVar46 * fVar15 + fVar51 * fVar16);
        auVar29._8_4_ = fVar35 * fVar57 + fVar40 * fVar14 + fVar48 * fVar15 + fVar53 * fVar16;
        auVar29._12_4_ = fVar36 * fVar57 + fVar41 * fVar14 + fVar50 * fVar15 + fVar54 * fVar16;
        *(ulong *)(lVar21 + 0x520) = CONCAT44(fVar43,fVar42);
        fVar31 = (float)uVar55;
        fVar33 = (float)((ulong)uVar55 >> 0x20);
        *(ulong *)(lVar21 + 0x558) = CONCAT44(fVar45,fVar44);
        *(ulong *)(lVar21 + 0x550) = CONCAT44(fVar43,fVar42);
        fVar38 = (float)uVar56;
        fVar57 = (float)((ulong)uVar56 >> 0x20);
        *(undefined8 *)(lVar21 + 0x530) = auVar29._0_8_;
        *(long *)(lVar21 + 0x568) = auVar29._8_8_;
        *(undefined8 *)(lVar21 + 0x560) = auVar29._0_8_;
        auVar30 = NEON_ext(auVar29,auVar29,8,1);
        *(long *)(lVar21 + 0x538) = auVar30._0_8_;
        auVar10._12_4_ = fVar54;
        auVar10._0_12_ = auVar12;
        auVar11._12_4_ = fVar54;
        auVar11._0_12_ = auVar13;
        auVar30 = NEON_ext(auVar10,auVar11,8,1);
        *(long *)(lVar21 + 0x548) = auVar30._0_8_;
        *(float *)(lVar21 + 0x578) =
             fVar35 * fVar31 + fVar40 * fVar33 + fVar48 * fVar38 + fVar53 * fVar57;
        *(float *)(lVar21 + 0x57c) =
             fVar36 * fVar31 + fVar41 * fVar33 + fVar50 * fVar38 + fVar54 * fVar57;
        *(float *)(lVar21 + 0x570) =
             fVar32 * fVar31 + fVar37 * fVar33 + fVar46 * fVar38 + fVar51 * fVar57;
        *(float *)(lVar21 + 0x574) =
             fVar34 * fVar31 + fVar39 * fVar33 + fVar47 * fVar38 + fVar52 * fVar57;
        auVar30._4_4_ = fVar43;
        auVar30._0_4_ = fVar42;
        auVar30._8_4_ = fVar44;
        auVar30._12_4_ = fVar45;
        auVar9._4_4_ = fVar43;
        auVar9._0_4_ = fVar42;
        auVar9._8_4_ = fVar44;
        auVar9._12_4_ = fVar45;
        auVar30 = NEON_ext(auVar30,auVar9,8,1);
        *(long *)(lVar21 + 0x528) = auVar30._0_8_;
        fVar38 = *(float *)(lVar20 + 0x150);
        fVar45 = *(float *)(lVar20 + 0x170) - *(float *)(lVar20 + 0x148);
        fVar31 = *(float *)(lVar20 + 0x174) - *(float *)(lVar20 + 0x14c);
        fVar33 = *(float *)(lVar20 + 0x178);
        *(float *)(lVar21 + 0x590) = fVar45;
        fVar33 = fVar33 - fVar38;
        *(float *)(lVar21 + 0x594) = fVar31;
        *(float *)(lVar21 + 0x598) = fVar33;
        fVar38 = SQRT(fVar31 * fVar31 + fVar45 * fVar45 + fVar33 * fVar33);
        if (0.0 < fVar38) {
          fVar38 = 1.0 / fVar38;
          *(float *)(lVar21 + 0x590) = fVar45 * fVar38;
          *(float *)(lVar21 + 0x594) = fVar31 * fVar38;
          *(float *)(lVar21 + 0x598) = fVar33 * fVar38;
        }
        lVar20 = *(long *)(param_1 + 0x440);
        *(undefined4 *)(lVar25 + 0x1d0) = *(undefined4 *)(lVar20 + 0x578);
        *(undefined4 *)(lVar25 + 0x1d4) = *(undefined4 *)(lVar20 + 0x57c);
        *(undefined8 *)(lVar25 + 0x1d8) = *(undefined8 *)(lVar20 + 0x580);
        *(undefined8 *)(lVar25 + 0x1e0) = *(undefined8 *)(lVar20 + 0x588);
        *(undefined4 *)(lVar25 + 0x1e8) = *(undefined4 *)(lVar20 + 0x590);
        *(undefined4 *)(lVar25 + 0x1ec) = *(undefined4 *)(lVar20 + 0x594);
        *(undefined8 *)(lVar25 + 0x1f0) = *(undefined8 *)(lVar20 + 0x598);
        *(undefined8 *)(lVar25 + 0x1f8) = *(undefined8 *)(lVar20 + 0x5a0);
        uVar23 = *(undefined8 *)(lVar20 + 0x5b0);
        uVar24 = *(undefined8 *)(lVar20 + 0x5b8);
        uVar22 = *(undefined8 *)(lVar20 + 0x5bf);
        *(undefined8 *)(lVar25 + 0x200) = *(undefined8 *)(lVar20 + 0x5a8);
        *(undefined8 *)(lVar25 + 0x217) = uVar22;
        *(undefined8 *)(lVar25 + 0x210) = uVar24;
        *(undefined8 *)(lVar25 + 0x208) = uVar23;
        if (*(int *)(lVar25 + 0x220) != -1) {
          FUN_038fcc90(*(undefined8 *)PTR_DAT_04bc1010,lVar25 + 0x220);
          *(undefined4 *)(lVar25 + 0x220) = 0xffffffff;
          *(undefined4 *)(lVar25 + 0x228) = 0;
          *(undefined8 *)(lVar25 + 0x230) = 0;
          *(undefined8 *)(lVar25 + 0x238) = 0;
          *(undefined8 *)(lVar25 + 0x240) = 0;
          *(undefined8 *)(lVar25 + 0x248) = 0;
          *(undefined8 *)(lVar25 + 0x250) = 0;
          *(undefined8 *)(lVar25 + 600) = 0;
        }
        FUN_038fd2f0(lVar25 + 0x220,lVar20 + 0x5c8);
        uVar3 = *(undefined4 *)(lVar20 + 0x610);
        *(undefined8 *)(lVar25 + 0x260) = *(undefined8 *)(lVar20 + 0x608);
        puVar1 = (uint *)(lVar25 + 0x2a4);
        *(undefined4 *)(lVar25 + 0x268) = uVar3;
        do {
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
          if (bVar7) {
            *puVar1 = *puVar1 | 1;
            cVar6 = ExclusiveMonitorsStatus();
          }
        } while (cVar6 != '\0');
      }
      iVar28 = iVar28 + 1;
    } while (iVar2 != iVar28);
  }
  if (((*(long *)(param_1 + 0x428) != 0) && (*(char *)(*(long *)(param_1 + 8) + 0x830) != '\0')) &&
     ((*(byte *)(*(long *)(param_1 + 0x428) + 0x5d0) & 1) != 0)) {
    FUN_03abe1b0();
  }
  if (((*(char *)(*(long *)(param_1 + 8) + 0x5f0) != '\0') &&
      (lVar27 = *(long *)(param_1 + 0x430), lVar27 != 0)) && (*(char *)(lVar27 + 0x468) != '\0')) {
    *(char *)(lVar27 + 0x824) = '\x01' - *(char *)(lVar27 + 0x824);
    iVar2 = *(int *)(lVar27 + 0x1d0);
    if (iVar2 != 0) {
      lVar20 = *(long *)(lVar27 + 0x1d8);
      iVar28 = 0;
      do {
        plVar26 = (long *)(lVar20 + (long)iVar28 * 0x1340);
        bVar4 = *(byte *)(lVar27 + 0x824);
        *(byte *)((long)plVar26 + 0x39) = bVar4;
        uVar5 = *(ushort *)((long)plVar26 + 0x3a);
        lVar21 = plVar26[6];
        iVar18 = (**(code **)(*plVar26 + 0x20))(plVar26);
        iVar19 = (**(code **)(*plVar26 + 0x20))(plVar26);
        lVar17 = plVar26[3];
        lVar25 = 0;
        if (plVar26[4] != 0) {
          lVar25 = (*DAT_04c61fd0)();
        }
        plVar26[2] = lVar25 + (ulong)((int)lVar17 +
                                     (uint)uVar5 * (uint)bVar4 *
                                     (((int)lVar21 + iVar18) - 1U & -iVar19));
        iVar28 = iVar28 + 1;
      } while (iVar2 != iVar28);
    }
  }
  *(undefined8 *)(param_1 + 0x568) = 0;
  *(undefined8 *)(param_1 + 0x560) = 0;
  return;
}

