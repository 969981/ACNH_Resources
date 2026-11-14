
/* WARNING: Removing unreachable block (ram,0x01660388) */

void FUN_0165f890(long param_1,long param_2,long param_3)

{
  void *__dest;
  byte bVar1;
  ushort uVar2;
  char cVar3;
  bool bVar4;
  short sVar5;
  uint uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  long lVar10;
  undefined *puVar11;
  undefined *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  float *pfVar17;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  uint *puVar21;
  long lVar22;
  undefined4 *puVar23;
  ulong uVar24;
  float *pfVar25;
  undefined4 *puVar26;
  long *plVar27;
  ulong uVar28;
  long lVar29;
  ulong uVar30;
  undefined8 uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  undefined1 auVar41 [16];
  undefined1 auVar42 [16];
  float fVar43;
  float fVar44;
  float fVar45;
  float fVar46;
  float fVar47;
  float fVar48;
  undefined4 uVar49;
  undefined4 uVar50;
  float local_240 [4];
  float fStack_230;
  undefined8 local_22c;
  undefined4 local_224;
  float fStack_220;
  undefined8 local_21c;
  undefined4 local_214;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined7 uStack_1c8;
  undefined1 local_1c1;
  undefined7 uStack_1c0;
  undefined1 auStack_1b8 [64];
  undefined8 local_178;
  undefined4 local_170;
  uint local_134;
  short local_12e;
  undefined2 local_124 [58];
  undefined *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  uint local_98;
  undefined8 local_94;
  
  uVar49 = *(undefined4 *)(*(long *)(param_3 + 0x318) + 0x18);
  uVar50 = *(undefined4 *)(*(long *)(param_3 + 0x318) + 0x1c);
  lVar29 = *(long *)(*(long *)(param_1 + 0x280) + 8);
  puVar16 = (undefined4 *)(**(code **)(*(long *)(lVar29 + 0x158) + 0xf0))(lVar29 + 0x158);
  *puVar16 = uVar49;
  puVar16[1] = uVar50;
  *(uint *)(lVar29 + 0x178) = *(uint *)(lVar29 + 0x178) | 0x1000000;
  plVar27 = *(long **)(param_3 + 0x318);
  (**(code **)(*plVar27 + 0x38))(plVar27,param_2);
  local_a0 = 0xff7fffffff7fffff;
  local_b0 = PTR_DAT_04bd0f08 + 0x10;
  local_a8 = 0x7f7fffff7f7fffff;
  local_98 = *(uint *)PTR_DAT_04bd0ea8;
  local_94 = 0x3f80000000000000;
  if (local_98 < 6) {
    if ((1 << (ulong)(local_98 & 0x1f) & 0x39U) == 0) {
      fVar37 = *(float *)(plVar27 + 1);
      fVar35 = *(float *)((long)plVar27 + 0xc);
    }
    else {
      fVar35 = *(float *)(plVar27 + 1);
      fVar37 = *(float *)((long)plVar27 + 0xc);
    }
    fVar39 = fVar35;
    fVar36 = 0.0;
    if (fVar35 <= 0.0) {
      fVar39 = 0.0;
      fVar36 = fVar35;
    }
    fVar38 = fVar37;
    fVar35 = 0.0;
    if (fVar37 <= 0.0) {
      fVar38 = 0.0;
      fVar35 = fVar37;
    }
    local_a8 = CONCAT44(fVar35,fVar36);
    local_a0 = CONCAT44(fVar38,fVar39);
  }
  FUN_038e77e4(&local_b0,param_2,plVar27);
  FUN_038e4cec(local_124);
  local_124[0] = 1;
  FUN_038e4d90(local_124,param_2);
  puVar11 = PTR_DAT_04bb2200;
  puVar21 = *(uint **)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x40) + 0x38);
  if (*puVar21 < 0x12) {
    lVar34 = 0;
  }
  else {
    lVar34 = *(long *)(*(long *)(puVar21 + 2) + 0x88);
  }
  FUN_03907810(lVar34,param_2);
  FUN_0390cee0(&local_208);
  local_208 = *(undefined4 *)(param_1 + 0x968);
  uStack_204 = *(undefined4 *)(param_1 + 0x96c);
  local_200 = *(undefined8 *)(param_1 + 0x970);
  uStack_1f8 = *(undefined8 *)(param_1 + 0x978);
  uStack_1e0 = *(undefined8 *)(param_1 + 0x990);
  local_1f0 = *(undefined4 *)(param_1 + 0x980);
  uStack_1ec = *(undefined4 *)(param_1 + 0x984);
  local_1e8 = *(undefined8 *)(param_1 + 0x988);
  local_1d0 = *(undefined8 *)(param_1 + 0x9a0);
  uStack_1c0 = (undefined7)((ulong)*(undefined8 *)(param_1 + 0x9af) >> 8);
  local_1d8 = *(undefined8 *)(param_1 + 0x998);
  uStack_1c8 = (undefined7)*(undefined8 *)(param_1 + 0x9a8);
  local_1c1 = (undefined1)((ulong)*(undefined8 *)(param_1 + 0x9a8) >> 0x38);
  FUN_038fd1e0(auStack_1b8);
  FUN_038fd2f0(auStack_1b8,param_1 + 0x9b8);
  local_178 = *(undefined8 *)(param_1 + 0x9f8);
  local_170 = *(undefined4 *)(param_1 + 0xa00);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(&local_134,0x10);
    if (bVar4) {
      cVar3 = ExclusiveMonitorsStatus();
      local_134 = local_134 | 1;
    }
  } while (cVar3 != '\0');
  local_240[0] = 0.0;
  fVar35 = 0.0;
  lVar22 = *(long *)(*(long *)(*(long *)puVar11 + 0x70) + 0x1b8);
  if (lVar22 != 0) {
    pfVar17 = (float *)(**(code **)(*(long *)(lVar22 + 0x278) + 0xf0))(lVar22 + 0x278);
    fVar35 = *pfVar17;
  }
  fVar37 = fVar35 * 0.041666668 * 6.2831855;
  fVar35 = sinf(fVar37);
  fVar37 = cosf(fVar37);
  fVar38 = fVar35 * 0.0;
  fVar47 = fVar35 + 0.0;
  fVar43 = fVar37 * 0.0;
  fVar45 = fVar38 * 0.0 + 1.0;
  fVar35 = -fVar35;
  fVar39 = *(float *)(*(long *)(*(long *)puVar11 + 0x78) + 0x3c);
  fVar36 = *(float *)(*(long *)(*(long *)puVar11 + 0x78) + 0x48);
  pfVar17 = (float *)(**(code **)(*(long *)(lVar29 + 0x3b0) + 0xf0))(lVar29 + 0x3b0);
  fVar39 = fVar36 * fVar39 + *pfVar17;
  fVar36 = sinf(fVar39);
  fVar39 = cosf(fVar39);
  fVar40 = fVar36 * 0.0;
  lVar29 = *(long *)(*(long *)puVar11 + 0x78);
  fVar48 = fVar39 + fVar40 * 0.0;
  fVar46 = fVar40 - fVar39 * 0.0;
  fVar44 = fVar39 * 0.0 * 0.0 - fVar36;
  fVar40 = fVar40 + fVar39 * 0.0;
  auVar41._0_4_ = fVar37 + fVar43 * fVar46 + fVar35 * fVar40 + 0.0;
  auVar41._4_4_ = fVar38 + fVar45 * fVar46 + fVar43 * fVar40 + 0.0;
  auVar41._8_4_ = fVar47 + fVar38 * fVar46 + fVar37 * fVar40 + 0.0;
  auVar41._12_4_ = fVar46 * 0.0 + 0.0 + fVar40 * 0.0 + 0.0;
  local_214 = *(undefined4 *)(lVar29 + 0x58);
  fStack_230 = fVar37 * 0.0 + fVar43 * fVar48 + fVar35 * fVar44 + 0.0;
  fVar40 = fVar38 * 0.0 + fVar45 * fVar48 + fVar43 * fVar44 + 0.0;
  fVar46 = fVar47 * 0.0 + fVar38 * fVar48 + fVar37 * fVar44 + 0.0;
  fVar44 = fVar48 * 0.0 + 0.0 + fVar44 * 0.0 + 0.0;
  auVar42 = NEON_ext(auVar41,auVar41,4,1);
  local_240[1] = auVar42._0_4_;
  local_240[2] = auVar42._4_4_;
  auVar8._4_4_ = fVar40;
  auVar8._0_4_ = fStack_230;
  auVar8._8_4_ = fVar46;
  auVar8._12_4_ = fVar44;
  auVar9._4_4_ = fVar40;
  auVar9._0_4_ = fStack_230;
  auVar9._8_4_ = fVar46;
  auVar9._12_4_ = fVar44;
  auVar42 = NEON_ext(auVar8,auVar9,4,1);
  local_22c = auVar42._0_8_;
  fStack_220 = fVar37 * -0.0 + fVar43 * fVar36 + fVar35 * fVar39 + 0.0;
  fVar35 = fVar38 * -0.0 + fVar45 * fVar36 + fVar43 * fVar39 + 0.0;
  fVar37 = fVar47 * -0.0 + fVar38 * fVar36 + fVar37 * fVar39 + 0.0;
  fVar36 = fVar36 * 0.0 + -0.0 + fVar39 * 0.0 + 0.0;
  auVar42._4_4_ = fVar35;
  auVar42._0_4_ = fStack_220;
  auVar42._8_4_ = fVar37;
  auVar42._12_4_ = fVar36;
  auVar7._4_4_ = fVar35;
  auVar7._0_4_ = fStack_220;
  auVar7._8_4_ = fVar37;
  auVar7._12_4_ = fVar36;
  auVar42 = NEON_ext(auVar42,auVar7,4,1);
  local_240[3] = *(float *)(lVar29 + 0x50);
  local_224 = *(undefined4 *)(lVar29 + 0x54);
  uVar15 = (uint)*(byte *)(param_3 + 8);
  if (*(uint *)(param_1 + 0x400) <= (uint)*(byte *)(param_3 + 8)) {
    uVar15 = 0;
  }
  plVar32 = (long *)(*(long *)(param_1 + 0x408) + (ulong)uVar15 * 0x78);
  local_21c = auVar42._0_8_;
  cVar3 = *(char *)((long)plVar32 + 0x39);
  uVar2 = *(ushort *)((long)plVar32 + 0x3a);
  lVar29 = plVar32[6];
  *(bool *)((long)plVar32 + 0x39) = cVar3 == '\0';
  local_240[0] = auVar41._0_4_;
  iVar13 = (**(code **)(*plVar32 + 0x20))(plVar32);
  iVar14 = (**(code **)(*plVar32 + 0x20))(plVar32);
  lVar22 = plVar32[3];
  if (plVar32[4] == 0) {
    lVar18 = 0;
  }
  else {
    lVar18 = (**(code **)PTR_DAT_04bb2cd8)();
  }
  uVar15 = (uint)uVar2;
  if (cVar3 != '\0') {
    uVar15 = 0;
  }
  uVar28 = (ulong)((int)lVar22 + (((int)lVar29 + iVar13) - 1U & -iVar14) * uVar15);
  plVar32[2] = lVar18 + uVar28;
  (**(code **)(*plVar32 + 0x20))(plVar32);
  (**(code **)(*plVar32 + 0x20))(plVar32);
  lVar29 = *(long *)plVar32[1];
  bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 8) * 4];
  uVar33 = (ulong)bVar1;
  uVar19 = (**(code **)(*plVar32 + 0x18))(plVar32);
  if (bVar1 != 0) {
    uVar30 = (ulong)*(ushort *)(lVar29 + 4);
    __dest = (void *)(lVar18 + uVar28 + uVar30);
    memcpy(__dest,local_240,uVar33 * 4);
    memcpy((void *)((long)__dest + (uVar19 & 0xff) * 4),local_240 + uVar33,uVar33 * 4);
    pfVar17 = local_240 + uVar33 * 2;
    uVar24 = uVar33 & 3;
    if (bVar1 < 4) {
      lVar22 = 0;
    }
    else {
      lVar22 = 0;
      lVar29 = uVar30 + (uVar19 & 0xff) * 8 + uVar28 + lVar18 + 8;
      do {
        lVar22 = lVar22 + -4;
        *(float *)(lVar29 + -8) = *pfVar17;
        *(undefined8 *)(lVar29 + -4) = *(undefined8 *)(pfVar17 + 1);
        pfVar25 = pfVar17 + 3;
        pfVar17 = pfVar17 + 4;
        *(float *)(lVar29 + 4) = *pfVar25;
        lVar29 = lVar29 + 0x10;
      } while (-lVar22 != (uVar33 & 0xfc));
      lVar22 = -lVar22;
    }
    if ((bVar1 & 3) != 0) {
      pfVar25 = (float *)(lVar18 + (uVar19 & 0xff) * 8 + lVar22 * 4 + uVar30 + uVar28);
      do {
        uVar24 = uVar24 - 1;
        *pfVar25 = *pfVar17;
        pfVar17 = pfVar17 + 1;
        pfVar25 = pfVar25 + 1;
      } while (uVar24 != 0);
    }
  }
  lVar22 = plVar32[2];
  puVar16 = *(undefined4 **)(param_3 + 0x18);
  (**(code **)(*plVar32 + 0x20))(plVar32);
  (**(code **)(*plVar32 + 0x20))(plVar32);
  lVar29 = *(long *)plVar32[1];
  bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar29 + 0x14) * 4];
  uVar28 = (ulong)bVar1;
  uVar19 = (**(code **)(*plVar32 + 0x18))(plVar32);
  if (bVar1 != 0) {
    uVar24 = (ulong)*(ushort *)(lVar29 + 0x10);
    uVar33 = uVar28 & 3;
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + lVar22 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = (undefined4 *)(lVar22 + uVar24 + lVar29 * 4);
      uVar30 = uVar33;
      puVar26 = puVar16;
      do {
        puVar16 = puVar26 + 1;
        uVar30 = uVar30 - 1;
        *puVar23 = *puVar26;
        puVar23 = puVar23 + 1;
        puVar26 = puVar16;
      } while (uVar30 != 0);
    }
    uVar19 = uVar19 & 0xff;
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + uVar19 * 4 + lVar22 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = (undefined4 *)(lVar22 + uVar24 + lVar29 * 4 + uVar19 * 4);
      uVar30 = uVar33;
      puVar26 = puVar16;
      do {
        puVar16 = puVar26 + 1;
        uVar30 = uVar30 - 1;
        *puVar23 = *puVar26;
        puVar23 = puVar23 + 1;
        puVar26 = puVar16;
      } while (uVar30 != 0);
    }
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + uVar19 * 8 + lVar22 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = (undefined4 *)(lVar22 + uVar24 + uVar19 * 8 + lVar29 * 4);
      do {
        uVar33 = uVar33 - 1;
        *puVar23 = *puVar16;
        puVar23 = puVar23 + 1;
        puVar16 = puVar16 + 1;
      } while (uVar33 != 0);
    }
  }
  lVar29 = *(long *)(param_3 + 0x18);
  lVar18 = plVar32[2];
  (**(code **)(*plVar32 + 0x20))(plVar32);
  (**(code **)(*plVar32 + 0x20))(plVar32);
  lVar22 = *(long *)plVar32[1];
  bVar1 = (&DAT_041b370c)[(ulong)*(byte *)(lVar22 + 0x20) * 4];
  uVar28 = (ulong)bVar1;
  uVar19 = (**(code **)(*plVar32 + 0x18))(plVar32);
  if (bVar1 != 0) {
    uVar24 = (ulong)*(ushort *)(lVar22 + 0x1c);
    puVar16 = (undefined4 *)(lVar29 + 0xc0);
    uVar33 = uVar28 & 3;
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + lVar18 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = puVar16;
      puVar26 = (undefined4 *)(lVar18 + uVar24 + lVar29 * 4);
      uVar30 = uVar33;
      do {
        puVar16 = puVar23 + 1;
        uVar30 = uVar30 - 1;
        *puVar26 = *puVar23;
        puVar23 = puVar16;
        puVar26 = puVar26 + 1;
      } while (uVar30 != 0);
    }
    uVar19 = uVar19 & 0xff;
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + uVar19 * 4 + lVar18 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = puVar16;
      puVar26 = (undefined4 *)(lVar18 + uVar24 + lVar29 * 4 + uVar19 * 4);
      uVar30 = uVar33;
      do {
        puVar16 = puVar23 + 1;
        uVar30 = uVar30 - 1;
        *puVar26 = *puVar23;
        puVar23 = puVar16;
        puVar26 = puVar26 + 1;
      } while (uVar30 != 0);
    }
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + uVar19 * 8 + lVar18 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = puVar16;
      puVar26 = (undefined4 *)(lVar18 + uVar24 + uVar19 * 8 + lVar29 * 4);
      uVar30 = uVar33;
      do {
        puVar16 = puVar23 + 1;
        uVar30 = uVar30 - 1;
        *puVar26 = *puVar23;
        puVar23 = puVar16;
        puVar26 = puVar26 + 1;
      } while (uVar30 != 0);
    }
    if (bVar1 < 4) {
      lVar29 = 0;
    }
    else {
      lVar29 = 0;
      puVar23 = (undefined4 *)(uVar24 + uVar19 * 0xc + lVar18 + 8);
      do {
        lVar29 = lVar29 + -4;
        puVar23[-2] = *puVar16;
        puVar23[-1] = puVar16[1];
        *puVar23 = puVar16[2];
        puVar26 = puVar16 + 3;
        puVar16 = puVar16 + 4;
        puVar23[1] = *puVar26;
        puVar23 = puVar23 + 4;
      } while (-lVar29 != (uVar28 & 0xfc));
      lVar29 = -lVar29;
    }
    if ((bVar1 & 3) != 0) {
      puVar23 = (undefined4 *)(lVar18 + uVar24 + lVar29 * 4 + uVar19 * 0xc);
      do {
        uVar33 = uVar33 - 1;
        *puVar23 = *puVar16;
        puVar16 = puVar16 + 1;
        puVar23 = puVar23 + 1;
      } while (uVar33 != 0);
    }
  }
  bVar1 = *(byte *)((long)plVar32 + 0x39);
  uVar2 = *(ushort *)((long)plVar32 + 0x3a);
  lVar29 = plVar32[6];
  iVar13 = (**(code **)(*plVar32 + 0x20))(plVar32);
  iVar14 = (**(code **)(*plVar32 + 0x20))(plVar32);
  lVar22 = plVar32[4];
  if (lVar22 != 0) {
    lVar18 = plVar32[6];
    lVar10 = plVar32[3];
    uVar15 = (**(code **)PTR_DAT_04bcf030)(lVar22);
    if ((uVar15 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)
                (lVar22,(int)lVar10 +
                        (uint)uVar2 * (uint)bVar1 * (((int)lVar29 + iVar13) - 1U & -iVar14),
                 (int)lVar18);
    }
  }
  FUN_01557430(lVar34,param_2,0,param_1 + 0x388,0);
  lVar29 = 0;
  if (*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) != 0) {
    lVar29 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb2200 + 0x50) + 0x88);
  }
  FUN_01557430(lVar34,param_2,1,lVar29 + 0x778,0);
  FUN_01557430(lVar34,param_2,2,plVar32,0);
  puVar21 = (uint *)(lVar34 + 0x14);
  do {
    uVar15 = *puVar21;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar21,0x10);
    if (bVar4) {
      *puVar21 = uVar15 | 0x80000000;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  if ((uVar15 & 0x7fffffff) != 0) {
    if ((int)uVar15 < 0) {
      if ((int)*puVar21 < 0) {
        lVar29 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar29 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar21 < 0);
      }
    }
    else {
      FUN_03907b80(lVar34);
    }
  }
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar21,0x10);
    if (bVar4) {
      *puVar21 = 0;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  FUN_0390d290(&local_208,param_2,*(undefined8 *)(lVar34 + 0x68),0xffffffff,0);
  if (*(char *)(param_1 + 0x900) != '\0') {
    lVar29 = *(long *)(param_1 + 0x8f8);
    param_1 = param_1 + (ulong)*(uint *)(param_1 + 0x904) * 0x1e0;
    iVar13 = *(int *)(lVar29 + 0x28);
    uVar31 = *(undefined8 *)(param_2 + 0xb8);
    (**(code **)PTR_DAT_04bcf1a8)(uVar31,0x10,param_1 + 0x63c);
    (**(code **)PTR_DAT_04bcf1b0)(uVar31,0x10,param_1 + 0x680);
    puVar12 = PTR_DAT_04bcf1e8;
    puVar11 = PTR_DAT_04bbd560;
    iVar14 = *(int *)(param_1 + 0x628);
    if (iVar14 != 0) {
      lVar34 = *(long *)(param_1 + 0x630);
      uVar19 = 0;
      uVar28 = 0;
      do {
        lVar22 = *(long *)(lVar34 + (-(uVar28 >> 0x1f) & 0xfffffff800000000 | uVar28 << 3));
        if (lVar22 != 0) {
          uVar20 = (**(code **)puVar11)(lVar22 + 8);
          (**(code **)puVar12)(uVar31,uVar19 & 0xffffffff,uVar20,*(undefined4 *)(lVar22 + 0x118));
        }
        uVar19 = uVar28 + 1;
        uVar28 = uVar19 & 0xffffffff;
      } while (iVar14 != (int)uVar19);
    }
    if (iVar13 != 0) {
      uVar49 = *(undefined4 *)(lVar29 + 0xc);
      uVar20 = *(undefined8 *)(param_2 + 0xb8);
      uVar31 = (**(code **)puVar11)(lVar29 + 0x30);
      (**(code **)PTR_DAT_04bbd568)(uVar20,uVar49,*(undefined4 *)(lVar29 + 8),iVar13,uVar31);
    }
  }
  puVar11 = PTR_DAT_04bc1010;
  uVar15 = *(uint *)(plVar27[4] + 0x58);
  if (uVar15 != 0xffffffff) {
    lVar29 = *(long *)PTR_DAT_04bc1010;
    if ((*(uint *)(lVar29 + 0x5c8) >> 3 & 1) == 0) {
      uVar6 = uVar15 - *(ushort *)(lVar29 + 0x3da);
      if (*(uint *)(lVar29 + 0x368) <= uVar6) {
        uVar6 = 0;
      }
      if ((*(uint *)(*(long *)(lVar29 + 0x370) + (long)(int)uVar6 * 0x20 + 4) >> 2 & 1) == 0) {
        *(ulong *)(param_2 + 0x100) = *(ulong *)(param_2 + 0x100) | 1L << ((ulong)uVar15 & 0x3f);
        goto LAB_01660608;
      }
    }
    if ((*(uint *)(lVar29 + 0x5c8) >> 5 & 1) == 0) {
      uVar50 = 0x112;
      uVar49 = 0x12;
    }
    else {
      uVar50 = 0x111;
      uVar49 = 0x11;
    }
    if ((*(uint *)(lVar29 + 800) & 2) != 0) {
      uVar49 = uVar50;
    }
    (**(code **)PTR_DAT_04bcf2a8)(*(undefined8 *)(param_2 + 0xb8),uVar49);
    *(undefined8 *)(param_2 + 0x100) = 0;
  }
LAB_01660608:
  if (local_12e != -1) {
    lVar29 = *(long *)puVar11;
    nn::os::LockMutex((MutexType *)(lVar29 + 0x580));
    uVar15 = (int)local_12e - (uint)*(ushort *)(lVar29 + 0x5c0);
    if (*(uint *)(lVar29 + 0x5a0) <= uVar15) {
      uVar15 = 0;
    }
    lVar34 = *(long *)(lVar29 + 0x5a8) + (long)(int)uVar15 * 0x80;
    sVar5 = *(short *)(lVar34 + 0x76) + -1;
    *(short *)(lVar34 + 0x76) = sVar5;
    if (sVar5 == 0) {
      *(short *)(lVar29 + 0x5c4) = *(short *)(lVar29 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar29 + 0x580));
    local_12e = -1;
  }
  FUN_038fd0e0(auStack_1b8);
  return;
}

