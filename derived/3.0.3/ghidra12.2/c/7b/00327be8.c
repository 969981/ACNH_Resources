
void FUN_00327be8(float param_1,undefined4 param_2,undefined8 param_3,char *param_4)

{
  undefined1 (*pauVar1) [12];
  undefined1 (*pauVar2) [12];
  undefined1 (*pauVar3) [12];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined8 uVar12;
  undefined1 auVar13 [12];
  long lVar14;
  undefined8 *puVar15;
  undefined8 *puVar16;
  undefined4 uVar17;
  undefined1 auVar18 [12];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar26 [16];
  undefined1 auVar25 [16];
  float fVar27;
  int iVar28;
  float fVar29;
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar36 [16];
  undefined1 auVar35 [16];
  undefined1 auVar34 [16];
  undefined1 auVar33 [16];
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  undefined4 uVar43;
  float fVar44;
  
  puVar16 = *(undefined8 **)(param_4 + 0x78);
  uVar5 = puVar16[0x23];
  fVar37 = (float)puVar16[0x22];
  fVar39 = (float)((ulong)puVar16[0x22] >> 0x20);
  auVar18._0_4_ = *(float *)(param_4 + 0x6b4) * (float)*(undefined8 *)(param_4 + 0x4b0) * fVar37;
  puVar15 = *(undefined8 **)(param_4 + (ulong)*(uint *)(param_4 + 0x30) * 8 + 0x750);
  auVar18._4_4_ =
       *(float *)(param_4 + 0x6b8) * (float)((ulong)*(undefined8 *)(param_4 + 0x4b0) >> 0x20) *
       fVar39;
  fVar29 = *(float *)(param_4 + 0x6e4) * (float)((ulong)*(undefined8 *)(param_4 + 0x4b8) >> 0x20);
  fVar27 = *(float *)(param_4 + 0x6c0);
  fVar42 = *(float *)(param_4 + 0x6c4);
  auVar18._8_4_ =
       *(float *)(param_4 + 0x6bc) * (float)*(undefined8 *)(param_4 + 0x4b8) * (float)uVar5;
  uVar12 = *(undefined8 *)(param_4 + 0x4c8);
  uVar9 = *(undefined8 *)(param_4 + 0x4c0);
  fVar44 = *(float *)(param_4 + 0x6c8);
  auVar19._12_4_ = fVar29;
  auVar19._0_12_ = auVar18;
  fVar38 = *(float *)(param_4 + 0x6f0) * (float)((ulong)uVar12 >> 0x20);
  if (*param_4 != '\0') {
    lVar14 = *(long *)(*(long *)(param_4 + 0x240) + 0x10);
    if ((*(char *)(lVar14 + 0x826) != '\0') && (*(char *)(lVar14 + 0x82a) != '\0')) {
      auVar19._12_4_ = fVar29 * *(float *)(*(long *)(param_4 + 0x5e0) + 0x6e4);
    }
    if ((*(char *)(lVar14 + 0x827) != '\0') && (*(char *)(lVar14 + 0x82b) != '\0')) {
      fVar38 = fVar38 * *(float *)(*(long *)(param_4 + 0x5e0) + 0x6f0);
    }
  }
  puVar15[1] = auVar19._8_8_;
  *puVar15 = auVar19._0_8_;
  puVar15[3] = CONCAT44(fVar38,fVar44 * (float)uVar12 * (float)uVar5);
  puVar15[2] = CONCAT44(fVar42 * (float)((ulong)uVar9 >> 0x20) * fVar39,
                        fVar27 * (float)uVar9 * fVar37);
  fVar38 = *(float *)((long)puVar16 + 0x11c);
  fVar27 = (float)FUN_0031e2dc(param_4);
  fVar38 = fVar38 * fVar27;
  lVar14 = *(long *)(*(long *)(param_4 + 0x240) + 0x10);
  if (((*(char *)(lVar14 + 0x826) != '\0') && (*(char *)(lVar14 + 0x82a) != '\0')) ||
     ((*(char *)(lVar14 + 0x827) != '\0' && (*(char *)(lVar14 + 0x82b) != '\0')))) {
    fVar27 = (float)FUN_0031e2dc(*(undefined8 *)(param_4 + 0x5e0));
    fVar38 = fVar38 * fVar27;
  }
  fVar27 = (float)FUN_0031e264(param_4);
  *(undefined4 *)(puVar15 + 4) = *(undefined4 *)(param_4 + 0x44);
  iVar28 = *(int *)(param_4 + 0x28);
  *(float *)((long)puVar15 + 0x2c) = param_1;
  *(float *)((long)puVar15 + 0x24) = (float)iVar28;
  *(undefined4 *)(puVar15 + 5) = param_2;
  if ((param_1 == 0.0) && (0.0 < *(float *)(param_4 + 0x44))) {
    *(float *)(puVar15 + 4) = *(float *)(param_4 + 0x44) - *(float *)(param_4 + 0x48);
    *(undefined4 *)((long)puVar15 + 0x2c) = *(undefined4 *)(param_4 + 0x48);
  }
  *(float *)(puVar15 + 6) = fVar38;
  *(float *)((long)puVar15 + 0x34) = fVar27 * *(float *)(puVar16 + 0x2a);
  *(float *)(puVar15 + 7) = fVar27 * *(float *)((long)puVar16 + 0x154);
  *(float *)((long)puVar15 + 0x3c) = fVar27 * *(float *)(puVar16 + 0x2b);
  pauVar2 = (undefined1 (*) [12])(param_4 + 0x3d0);
  uVar17 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x3d8) >> 0x20);
  uVar5 = *(undefined8 *)*pauVar2;
  auVar19 = *(undefined1 (*) [16])(param_4 + 0x3e0);
  pauVar3 = (undefined1 (*) [12])(param_4 + 0x3f0);
  uVar40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x3f8) >> 0x20);
  uVar9 = *(undefined8 *)*pauVar3;
  auVar13 = *(undefined1 (*) [12])(param_4 + 0x400);
  auVar18 = *(undefined1 (*) [12])(param_4 + 0x400);
  auVar20._12_4_ = uVar17;
  auVar20._0_12_ = *pauVar2;
  auVar21._12_4_ = uVar17;
  auVar21._0_12_ = *pauVar2;
  auVar20 = NEON_ext(auVar20,auVar21,8,1);
  auVar21 = NEON_ext(auVar19,auVar19,8,1);
  auVar22._12_4_ = uVar40;
  auVar22._0_12_ = *pauVar3;
  auVar6._12_4_ = uVar40;
  auVar6._0_12_ = *pauVar3;
  auVar22 = NEON_ext(auVar22,auVar6,8,1);
  auVar23._8_8_ = auVar22._8_8_;
  auVar23._0_8_ = NEON_fmov(0x3f800000,4);
  uVar43 = (undefined4)(auVar23._0_8_ >> 0x20);
  auVar30._12_4_ = uVar43;
  auVar30._0_12_ = ZEXT812(0);
  *(int *)(puVar15 + 8) = (int)uVar5;
  *(int *)((long)puVar15 + 0x44) = auVar19._0_4_;
  *(int *)(puVar15 + 9) = (int)uVar9;
  *(int *)((long)puVar15 + 0x4c) = auVar18._0_4_;
  *(int *)(puVar15 + 0xc) = auVar20._0_4_;
  *(int *)((long)puVar15 + 100) = auVar21._0_4_;
  *(int *)(puVar15 + 0xd) = auVar22._0_4_;
  *(int *)((long)puVar15 + 0x6c) = auVar13._8_4_;
  puVar15[0xb] = CONCAT44(auVar18._4_4_,(int)((ulong)uVar9 >> 0x20));
  puVar15[10] = CONCAT44(auVar19._4_4_,(int)((ulong)uVar5 >> 0x20));
  puVar15[0xf] = auVar30._8_8_;
  puVar15[0xe] = 0;
  pauVar2 = (undefined1 (*) [12])(param_4 + 0x410);
  uVar17 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x418) >> 0x20);
  pauVar3 = (undefined1 (*) [12])(param_4 + 0x420);
  uVar40 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x428) >> 0x20);
  uVar5 = *(undefined8 *)*pauVar3;
  pauVar1 = (undefined1 (*) [12])(param_4 + 0x430);
  uVar41 = (undefined4)((ulong)*(undefined8 *)(param_4 + 0x438) >> 0x20);
  uVar9 = *(undefined8 *)*pauVar1;
  auVar31._12_4_ = uVar17;
  auVar31._0_12_ = *pauVar2;
  auVar4._12_4_ = uVar17;
  auVar4._0_12_ = *pauVar2;
  auVar20 = NEON_ext(auVar31,auVar4,8,1);
  auVar7._12_4_ = uVar40;
  auVar7._0_12_ = *pauVar3;
  auVar8._12_4_ = uVar40;
  auVar8._0_12_ = *pauVar3;
  auVar21 = NEON_ext(auVar7,auVar8,8,1);
  auVar10._12_4_ = uVar41;
  auVar10._0_12_ = *pauVar1;
  auVar11._12_4_ = uVar41;
  auVar11._0_12_ = *pauVar1;
  auVar31 = NEON_ext(auVar10,auVar11,8,1);
  auVar19 = *(undefined1 (*) [16])(param_4 + 0x440);
  auVar24._4_12_ = auVar23._4_12_;
  auVar24._0_4_ = auVar19._8_4_;
  uVar17 = (undefined4)((ulong)*(undefined8 *)*pauVar2 >> 0x20);
  auVar32._0_8_ = auVar19._0_8_;
  auVar32._8_8_ = auVar24._0_8_;
  auVar25._4_12_ = auVar24._4_12_;
  auVar25._0_4_ = auVar20._0_4_;
  auVar26._12_4_ = auVar22._12_4_;
  auVar26._0_8_ = auVar25._0_8_;
  auVar26._8_4_ = 0;
  auVar33._4_12_ = auVar32._4_12_;
  auVar33._0_4_ = uVar17;
  auVar35._0_8_ = auVar33._0_8_;
  auVar35._8_4_ = (int)((ulong)uVar9 >> 0x20);
  auVar35._12_4_ = uVar43;
  auVar34._8_8_ = auVar35._8_8_;
  auVar34._0_8_ = CONCAT44((int)((ulong)uVar5 >> 0x20),uVar17);
  auVar36._0_12_ = auVar34._0_12_;
  auVar36._12_4_ = auVar19._4_4_;
  *(int *)(puVar15 + 0x10) = (int)*(undefined8 *)*pauVar2;
  *(int *)((long)puVar15 + 0x84) = (int)uVar5;
  *(int *)(puVar15 + 0x11) = (int)uVar9;
  *(int *)((long)puVar15 + 0x8c) = auVar19._0_4_;
  *(int *)(puVar15 + 0x14) = auVar20._0_4_;
  *(int *)((long)puVar15 + 0xa4) = auVar21._0_4_;
  *(int *)(puVar15 + 0x15) = auVar31._0_4_;
  *(int *)((long)puVar15 + 0xac) = auVar19._8_4_;
  puVar15[0x13] = auVar36._8_8_;
  puVar15[0x12] = auVar34._0_8_;
  puVar15[0x17] = auVar23._0_8_ & 0xffffffff00000000;
  puVar15[0x16] = auVar26._8_8_ & 0xffffffff;
  uVar5 = *puVar16;
  puVar15[0x19] = puVar16[1];
  puVar15[0x18] = uVar5;
  uVar17 = 0;
  if (*(char *)((long)puVar16 + 0x276) != '\0') {
    uVar17 = 0x3f800000;
  }
  *(undefined4 *)(puVar15 + 0x1a) = uVar17;
  return;
}

