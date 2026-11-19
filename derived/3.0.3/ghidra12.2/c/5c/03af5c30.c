
void FUN_03af5c30(long param_1,uint param_2,long param_3,long param_4,uint param_5,long param_6)

{
  uint *puVar1;
  uint uVar2;
  char cVar3;
  bool bVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  uint *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  uint *puVar14;
  uint uVar15;
  float fVar16;
  float fVar17;
  uint uVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  
  lVar13 = *(long *)(param_1 + 0x10);
  if (*(uint *)(param_1 + 8) <= param_2) {
    param_2 = 0;
  }
  puVar14 = (uint *)(lVar13 + (long)(int)param_2 * 0x23c0);
  puVar14[0x12] = *(uint *)(param_3 + 0x10);
  puVar14[0x13] = *(uint *)(param_3 + 0x14);
  puVar14[0x14] = *(uint *)(param_3 + 0x18);
  puVar14[0x15] = *(uint *)(param_3 + 0x1c);
  puVar14[0x10] = *(uint *)(param_3 + 8);
  uVar15 = *(uint *)(param_3 + 0xc);
  puVar14[0x26] = 0;
  puVar14[0x27] = 0;
  puVar14[0x11] = uVar15;
  FUN_01560750(puVar14 + 0x28,*(long *)(param_3 + 0x20) + 8,*(undefined1 *)((long)puVar14 + 0x15e),
               (short)puVar14[0x57]);
  puVar8 = puVar14 + 1;
  uVar15 = *puVar8;
  puVar14[6] = *(uint *)(param_4 + 8);
  puVar14[7] = *(uint *)(param_4 + 0xc);
  puVar14[8] = *(uint *)(param_4 + 0x10);
  puVar14[9] = *(uint *)(param_4 + 0x14);
  uVar5 = *(undefined8 *)(param_4 + 0x18);
  puVar14[0xc] = *(uint *)(param_4 + 0x20);
  *(undefined8 *)(puVar14 + 10) = uVar5;
  puVar1 = puVar14 + 0x7ea;
  if ((uVar15 & 0x42) != 0) {
    *(uint *)(*(long *)puVar1 + 0x498) = *(uint *)(*(long *)puVar1 + 0x498) | 1;
    uVar15 = *puVar8;
  }
  if ((uVar15 & 0x84) != 0) {
    *(uint *)(*(long *)puVar1 + 0x498) = *(uint *)(*(long *)puVar1 + 0x498) | 2;
    uVar15 = *puVar8;
  }
  if ((uVar15 & 0x108) != 0) {
    *(uint *)(*(long *)puVar1 + 0x498) = *(uint *)(*(long *)puVar1 + 0x498) | 4;
    uVar15 = *puVar8;
  }
  if ((uVar15 & 0x210) != 0) {
    *(uint *)(*(long *)puVar1 + 0x498) = *(uint *)(*(long *)puVar1 + 0x498) | 8;
    uVar15 = *puVar8;
  }
  if ((uVar15 & 0x420) != 0) {
    *(uint *)(*(long *)puVar1 + 0x498) = *(uint *)(*(long *)puVar1 + 0x498) | 0x10;
    uVar15 = *puVar8;
  }
  lVar11 = lVar13 + (long)(int)param_2 * 0x23c0;
  if ((uVar15 >> 0x11 & 1) != 0) {
    *(uint *)(*(long *)puVar1 + 0xa70) = *(uint *)(*(long *)puVar1 + 0xa70) | 2;
    uVar15 = *puVar8;
  }
  lVar9 = lVar13 + (long)(int)param_2 * 0x23c0;
  *(uint *)(lVar9 + 8) = *(uint *)(lVar9 + 8) | uVar15 & 0x607fe;
  *(uint *)(*(long *)puVar1 + 0xbc4) = (*(ushort *)(param_1 + 0x1a) ^ 0xffffffff) & 1;
  *(uint *)(*(long *)puVar1 + 0xcc4) = (*(uint *)(param_1 + 0x18) >> 0x11 ^ 0xffffffff) & 1;
  lVar10 = *(long *)puVar1;
  *(byte *)(lVar10 + 0xcba) =
       *(byte *)(lVar10 + 0xcba) & 0xfe | (byte)(*(uint *)(param_1 + 0x18) >> 0xd) & 1;
  uVar5 = *(undefined8 *)(param_1 + 0x88);
  *(undefined8 *)(lVar10 + 0xbd0) = *(undefined8 *)(param_1 + 0x90);
  *(undefined8 *)(lVar10 + 0xbc8) = uVar5;
  lVar10 = *(long *)puVar1;
  *(byte *)(lVar10 + 0xdba) =
       *(byte *)(lVar10 + 0xdba) & 0xfe | (byte)(*(uint *)(param_1 + 0x18) >> 0xe) & 1;
  uVar5 = *(undefined8 *)(param_1 + 0x98);
  *(undefined8 *)(lVar10 + 0xcd0) = *(undefined8 *)(param_1 + 0xa0);
  *(undefined8 *)(lVar10 + 0xcc8) = uVar5;
  fVar16 = (float)puVar14[8] - (float)puVar14[6];
  fVar20 = (float)puVar14[9] - (float)puVar14[7];
  if (1 < puVar14[10] - 1) {
    fVar16 = (float)puVar14[9] - (float)puVar14[7];
    fVar20 = (float)puVar14[8] - (float)puVar14[6];
  }
  *puVar14 = *puVar14 & 0xfffffff6 | param_5 >> 2 & 1;
  fVar20 = (fVar20 / (float)puVar14[0x10]) * ((float)puVar14[0x14] - (float)puVar14[0x12]);
  fVar16 = (fVar16 / (float)puVar14[0x11]) * ((float)puVar14[0x15] - (float)puVar14[0x13]);
  if ((param_5 & 8) != 0) {
    fVar20 = 8.0;
    fVar16 = 8.0;
  }
  fVar17 = *(float *)(lVar9 + 0x1fa4);
  fVar19 = *(float *)(lVar9 + 0x1fa0);
  if ((param_6 != 0) && ((*(byte *)(param_6 + 0x1c) & 1) != 0)) {
    uVar15 = *(uint *)(param_6 + 0x18);
    if (*(uint *)(param_6 + 8) <= uVar15) {
      uVar15 = 0;
    }
    fVar22 = *(float *)(*(long *)(param_6 + 0x10) + (long)(int)uVar15 * 0x588 + 0x28);
    fVar19 = fVar19 * fVar22;
    fVar17 = fVar17 * fVar22;
  }
  uVar2 = *(uint *)(param_1 + 0x18);
  uVar18 = (uint)((fVar20 / ((float)puVar14[0x14] - (float)puVar14[0x12])) *
                  (fVar16 / ((float)puVar14[0x15] - (float)puVar14[0x13])) * fVar19 * fVar17 != 1.0)
  ;
  uVar15 = uVar18 << 0x13;
  if ((uVar2 & 4) != 0 || (param_5 & 7) != 0) {
    uVar18 = 1;
  }
  *(uint *)(param_1 + 0x18) = uVar2 & 0xfff00000 | uVar2 & 0x7ffff | uVar15;
  if (((uVar2 >> 1 & 1) == 0) || (uVar18 == 0)) {
    uVar6 = *(undefined8 *)(puVar14 + 10);
    uVar15 = puVar14[0xc];
    *(uint *)(lVar11 + 0xaa8) = puVar14[6];
    uVar18 = puVar14[9];
    uVar5 = *(undefined8 *)(puVar14 + 7);
    *(undefined8 *)(lVar11 + 0xab8) = uVar6;
    plVar12 = (long *)(lVar13 + (long)(int)param_2 * 0x23c0 + 0x58);
    lVar10 = *plVar12;
    *(uint *)(lVar11 + 0xac0) = uVar15;
    *(undefined8 *)(lVar11 + 0xaac) = uVar5;
    *(uint *)(lVar11 + 0xab4) = uVar18;
    *(undefined4 *)(lVar11 + 0x378) = *(undefined4 *)(lVar10 + 8);
    *(undefined4 *)(lVar11 + 0x37c) = *(undefined4 *)(lVar10 + 0xc);
    *(undefined8 *)(lVar11 + 0x380) = *(undefined8 *)(lVar10 + 0x10);
    *(undefined8 *)(lVar11 + 0x388) = *(undefined8 *)(lVar10 + 0x18);
    *(undefined4 *)(lVar11 + 0x390) = *(undefined4 *)(lVar10 + 0x20);
    *(undefined4 *)(lVar11 + 0x394) = *(undefined4 *)(lVar10 + 0x24);
    *(undefined8 *)(lVar11 + 0x398) = *(undefined8 *)(lVar10 + 0x28);
    *(undefined8 *)(lVar11 + 0x3a0) = *(undefined8 *)(lVar10 + 0x30);
    uVar5 = *(undefined8 *)(lVar10 + 0x38);
    uVar6 = *(undefined8 *)(lVar10 + 0x40);
    uVar7 = *(undefined8 *)(lVar10 + 0x48);
    *(undefined8 *)(lVar11 + 0x3bf) = *(undefined8 *)(lVar10 + 0x4f);
    *(undefined8 *)(lVar11 + 0x3b0) = uVar6;
    *(undefined8 *)(lVar11 + 0x3b8) = uVar7;
    *(undefined8 *)(lVar11 + 0x3a8) = uVar5;
    FUN_038fd1e0(lVar11 + 0x3c8);
    FUN_038fd2f0(lVar11 + 0x3c8,lVar10 + 0x58);
    uVar5 = *(undefined8 *)(lVar10 + 0x98);
    *(undefined4 *)(lVar11 + 0x410) = *(undefined4 *)(lVar10 + 0xa0);
    *(undefined8 *)(lVar11 + 0x408) = uVar5;
    do {
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass((undefined4 *)(lVar11 + 0x428),0x10);
      if (bVar4) {
        *(undefined4 *)(lVar11 + 0x428) = 0x7fffffff;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    *(undefined2 *)(lVar11 + 0x42c) = *(undefined2 *)(lVar10 + 0xbc);
    uVar15 = puVar14[0x12];
    uVar18 = puVar14[0x13];
    *(undefined1 *)(lVar11 + 0x42e) = *(undefined1 *)(lVar10 + 0xbe);
    *(undefined1 *)(lVar11 + 0x42f) = *(undefined1 *)(lVar10 + 0xbf);
    uVar5 = *(undefined8 *)(lVar10 + 0xb0);
    *(undefined8 *)(lVar11 + 0x418) = *(undefined8 *)(lVar10 + 0xa8);
    *(undefined8 *)(lVar11 + 0x420) = uVar5;
    *(undefined8 *)(lVar11 + 0x430) = *(undefined8 *)(lVar10 + 0xc0);
    *(undefined4 *)(lVar11 + 0x438) = *(undefined4 *)(lVar10 + 200);
    *(undefined4 *)(lVar11 + 0x43c) = *(undefined4 *)(lVar10 + 0xcc);
    *(undefined8 *)(lVar11 + 0x440) = *(undefined8 *)(lVar10 + 0xd0);
    uVar5 = *(undefined8 *)(lVar10 + 0xd8);
    *(uint *)(lVar11 + 0x318) = uVar15;
    *(uint *)(lVar11 + 0x31c) = uVar18;
    uVar15 = puVar14[0x14];
    *(uint *)(lVar11 + 0x324) = puVar14[0x15];
    *(undefined8 *)(lVar11 + 0x448) = uVar5;
    lVar10 = *plVar12;
    *(uint *)(lVar11 + 800) = uVar15;
    uVar15 = puVar14[0x10];
    *(uint *)(lVar11 + 0x314) = puVar14[0x11];
    *(uint *)(lVar11 + 0x310) = uVar15;
    FUN_01560750(lVar11 + 0x370,lVar10 + 8);
    uVar15 = *puVar14 & 0xfffffffd;
    fVar19 = *(float *)(lVar11 + 0xab0);
    fVar17 = *(float *)(lVar11 + 0xab4);
  }
  else {
    fVar19 = fVar20 * fVar19;
    fVar17 = fVar16 * fVar17;
    fVar22 = 16384.0;
    if (fVar19 <= 16384.0) {
      fVar22 = fVar19;
    }
    fVar23 = 1.0;
    if (1.0 <= fVar19) {
      fVar23 = fVar22;
    }
    fVar19 = 16384.0;
    if (fVar17 <= 16384.0) {
      fVar19 = fVar17;
    }
    fVar22 = 1.0;
    if (1.0 <= fVar17) {
      fVar22 = fVar19;
    }
    uVar15 = 0;
    if (fVar23 != (float)(int)fVar23) {
      uVar15 = (uint)(fVar23 < 0.0);
    }
    fVar23 = (float)(int)((int)fVar23 - uVar15);
    uVar15 = 0;
    if (fVar22 != (float)(int)fVar22) {
      uVar15 = (uint)(fVar22 < 0.0);
    }
    fVar22 = (float)(int)((int)fVar22 - uVar15);
    lVar10 = lVar13 + (long)(int)param_2 * 0x23c0;
    *(float *)(lVar10 + 0x300) = fVar20 / fVar23;
    *(float *)(lVar10 + 0x304) = fVar16 / fVar22;
    uVar15 = *puVar14 | 2;
    fVar19 = *(float *)(param_4 + 0x10);
    fVar17 = *(float *)(param_4 + 0x14);
    fVar20 = *(float *)(param_4 + 8);
    fVar16 = *(float *)(param_4 + 0xc);
    *(undefined8 *)(lVar11 + 0xaa8) = 0;
    *(undefined8 *)(lVar11 + 0x318) = 0;
    *(float *)(lVar11 + 800) = fVar23;
    *(float *)(lVar11 + 0x324) = fVar22;
    fVar17 = fVar17 - fVar16;
    fVar19 = fVar19 - fVar20;
    *(float *)(lVar11 + 0xab4) = fVar17;
    *(float *)(lVar11 + 0xab0) = fVar19;
    *(float *)(lVar11 + 0x310) = fVar19;
    *(float *)(lVar11 + 0x314) = fVar17;
    fVar20 = fVar23;
    fVar16 = fVar22;
  }
  uVar18 = *(uint *)(lVar11 + 0x1278);
  *puVar14 = uVar15;
  *(undefined8 *)(lVar11 + 0xad8) = 0;
  fVar23 = fVar19 * 0.5;
  fVar22 = fVar17 * 0.5;
  *(float *)(lVar11 + 0xae0) = fVar20 * 0.5;
  *(float *)(lVar11 + 0xae4) = fVar16 * 0.5;
  *(float *)(lVar11 + 0xad0) = fVar23;
  *(float *)(lVar11 + 0xad4) = fVar22;
  if (uVar18 < 6) {
    if ((1 << (ulong)(uVar18 & 0x1f) & 0x39U) == 0) {
      fVar21 = fVar22;
      fVar24 = 0.0;
      if (fVar22 <= 0.0) {
        fVar21 = 0.0;
        fVar24 = fVar22;
      }
      *(float *)(lVar11 + 0x1268) = fVar24;
      fVar24 = 0.0;
      if (fVar23 <= 0.0) {
        fVar24 = fVar23;
      }
      fVar25 = fVar23;
    }
    else {
      fVar21 = fVar23;
      if (fVar23 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar24 = 0.0;
      if (fVar23 <= 0.0) {
        fVar24 = fVar23;
      }
      *(float *)(lVar11 + 0x1268) = fVar24;
      fVar24 = 0.0;
      fVar25 = fVar22;
      if (fVar22 <= 0.0) {
        fVar24 = fVar22;
      }
    }
    *(float *)(lVar11 + 0x1270) = fVar21;
    *(float *)(lVar11 + 0x126c) = fVar24;
    *(float *)(lVar11 + 0x1274) = fVar25;
  }
  *(undefined8 *)(lVar11 + 0x1298) = 0;
  fVar19 = fVar19 * 0.25;
  fVar17 = fVar17 * 0.25;
  *(float *)(lVar11 + 0x12a0) = fVar20 * 0.25;
  *(float *)(lVar11 + 0x12a4) = fVar16 * 0.25;
  *(float *)(lVar11 + 0x1290) = fVar19;
  *(float *)(lVar11 + 0x1294) = fVar17;
  if (*(uint *)(lVar11 + 0x1a38) < 6) {
    if ((1 << (ulong)(*(uint *)(lVar11 + 0x1a38) & 0x1f) & 0x39U) == 0) {
      fVar21 = fVar17;
      fVar24 = 0.0;
      if (fVar17 <= 0.0) {
        fVar21 = 0.0;
        fVar24 = fVar17;
      }
      *(float *)(lVar11 + 0x1a28) = fVar24;
      fVar24 = 0.0;
      if (fVar19 <= 0.0) {
        fVar24 = fVar19;
      }
      fVar25 = fVar19;
    }
    else {
      fVar21 = fVar19;
      if (fVar19 <= 0.0) {
        fVar21 = 0.0;
      }
      fVar24 = 0.0;
      if (fVar19 <= 0.0) {
        fVar24 = fVar19;
      }
      *(float *)(lVar11 + 0x1a28) = fVar24;
      fVar24 = 0.0;
      if (fVar17 <= 0.0) {
        fVar24 = fVar17;
      }
      fVar25 = fVar17;
    }
    *(float *)(lVar11 + 0x1a30) = fVar21;
    *(float *)(lVar11 + 0x1a2c) = fVar24;
    *(float *)(lVar11 + 0x1a34) = fVar25;
  }
  lVar11 = lVar13 + (long)(int)param_2 * 0x23c0;
  *(undefined8 *)(lVar11 + 0x1a58) = 0;
  *(float *)(lVar11 + 0x1a60) = fVar20 * 0.5;
  *(float *)(lVar11 + 0x1a64) = fVar16 * 0.5;
  *(float *)(lVar11 + 0x1a50) = fVar23;
  *(float *)(lVar11 + 0x1a54) = fVar22;
  if (*(uint *)(lVar11 + 0x1c90) < 6) {
    if ((1 << (ulong)(*(uint *)(lVar11 + 0x1c90) & 0x1f) & 0x39U) == 0) {
      fVar21 = fVar22;
      fVar24 = 0.0;
      if (fVar22 <= 0.0) {
        fVar21 = 0.0;
        fVar24 = fVar22;
      }
      *(float *)(lVar11 + 0x1c80) = fVar24;
      fVar22 = fVar23;
      fVar24 = 0.0;
      if (fVar23 <= 0.0) {
        fVar22 = 0.0;
        fVar24 = fVar23;
      }
      *(float *)(lVar11 + 0x1c88) = fVar21;
    }
    else {
      fVar21 = fVar23;
      fVar24 = 0.0;
      if (fVar23 <= 0.0) {
        fVar21 = 0.0;
        fVar24 = fVar23;
      }
      *(float *)(lVar11 + 0x1c80) = fVar24;
      fVar24 = 0.0;
      if (fVar22 <= 0.0) {
        fVar24 = fVar22;
      }
      *(float *)(lVar11 + 0x1c88) = fVar21;
      if (fVar22 <= 0.0) {
        fVar22 = 0.0;
      }
    }
    *(float *)(lVar11 + 0x1c84) = fVar24;
    *(float *)(lVar11 + 0x1c8c) = fVar22;
  }
  lVar13 = lVar13 + (long)(int)param_2 * 0x23c0;
  *(undefined8 *)(lVar13 + 0x1cb0) = 0;
  *(float *)(lVar13 + 0x1cb8) = fVar20 * 0.25;
  *(float *)(lVar13 + 0x1cbc) = fVar16 * 0.25;
  *(float *)(lVar13 + 0x1ca8) = fVar19;
  *(float *)(lVar13 + 0x1cac) = fVar17;
  if (*(uint *)(lVar13 + 0x1ee8) < 6) {
    if ((1 << (ulong)(*(uint *)(lVar13 + 0x1ee8) & 0x1f) & 0x39U) == 0) {
      fVar16 = fVar17;
      fVar20 = 0.0;
      if (fVar17 <= 0.0) {
        fVar16 = 0.0;
        fVar20 = fVar17;
      }
      *(float *)(lVar13 + 0x1ed8) = fVar20;
      fVar17 = fVar19;
      fVar20 = 0.0;
      if (fVar19 <= 0.0) {
        fVar17 = 0.0;
        fVar20 = fVar19;
      }
      *(float *)(lVar13 + 0x1ee0) = fVar16;
    }
    else {
      fVar16 = fVar19;
      fVar20 = 0.0;
      if (fVar19 <= 0.0) {
        fVar16 = 0.0;
        fVar20 = fVar19;
      }
      *(float *)(lVar13 + 0x1ed8) = fVar20;
      fVar20 = 0.0;
      if (fVar17 <= 0.0) {
        fVar20 = fVar17;
      }
      *(float *)(lVar13 + 0x1ee0) = fVar16;
      if (fVar17 <= 0.0) {
        fVar17 = 0.0;
      }
    }
    *(float *)(lVar13 + 0x1edc) = fVar20;
    *(float *)(lVar13 + 0x1ee4) = fVar17;
  }
  return;
}

