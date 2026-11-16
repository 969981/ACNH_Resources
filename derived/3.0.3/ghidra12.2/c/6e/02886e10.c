
void FUN_02886e10(int *param_1)

{
  ulong uVar1;
  undefined *puVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  bool bVar10;
  uint *puVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  ulong uVar15;
  int *piVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint uVar20;
  long lVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined *local_c0;
  char *pcStack_b8;
  undefined *local_b0;
  char *pcStack_a8;
  
  puVar8 = PTR_DAT_04bb39d8;
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
  uVar13 = *puVar11 ^ *puVar11 << 0xb;
  uVar4 = puVar11[3];
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
  puVar11[2] = uVar4;
  puVar11[3] = uVar13;
  *param_1 = (int)((ulong)uVar13 * 0x15 >> 0x20) + 0x5a;
  puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
  uVar13 = *puVar11 ^ *puVar11 << 0xb;
  uVar4 = puVar11[3];
  *puVar11 = puVar11[1];
  puVar11[1] = puVar11[2];
  uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
  puVar11[2] = uVar4;
  puVar11[3] = uVar13;
  puVar7 = PTR_DAT_04bb2020;
  uVar13 = (uint)((ulong)uVar13 * 100 >> 0x20);
  switch(param_1[0xf]) {
  case 0:
    if (uVar13 < 0x14) {
LAB_02886f3c:
      iVar14 = 0;
    }
    else {
      if (uVar13 < 0x32) break;
      bVar10 = 0x40 < uVar13;
LAB_02886f58:
      iVar14 = 2;
      if (bVar10) {
        iVar14 = 3;
      }
    }
    goto LAB_02886f60;
  case 1:
    if (uVar13 < 0x32) goto LAB_02886f3c;
    if (0x36 < uVar13) {
LAB_02886f54:
      bVar10 = 0x4a < uVar13;
      goto LAB_02886f58;
    }
    break;
  case 2:
    if (uVar13 < 0x19) goto LAB_02886f3c;
    if (0x45 < uVar13) goto LAB_02886f54;
    break;
  case 3:
    if (uVar13 < 0x2d) goto LAB_02886f3c;
    if (0x45 < uVar13) {
      bVar10 = 0x54 < uVar13;
      goto LAB_02886f58;
    }
    break;
  default:
    iVar14 = 2;
    goto LAB_02886f60;
  }
  iVar14 = 1;
LAB_02886f60:
  param_1[0xf] = iVar14;
  puVar2 = puVar7 + 0x10;
  pcStack_a8 = "FirstKabuBuy";
  local_b0 = puVar2;
  uVar12 = FUN_0273f0a0(&local_b0);
  if ((uVar12 & 1) == 0) {
LAB_02886fa0:
    piVar16 = param_1 + 1;
    *piVar16 = *param_1;
    param_1[2] = *param_1;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    switch(param_1[0xf]) {
    case 0:
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar17 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar4 = uVar13 >> 8 ^ uVar17 >> 0x13 ^ uVar13 ^ uVar17;
      puVar11[2] = uVar17;
      puVar11[3] = uVar4;
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar17 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar17 >> 0x13 ^ uVar13 ^ uVar17;
      puVar11[2] = uVar17;
      puVar11[3] = uVar13;
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar18 = (uint)((ulong)uVar13 * 7 >> 0x20);
      uVar13 = uVar18 ^ 7;
      uVar5 = puVar11[3];
      uVar17 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar17 = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
      puVar11[2] = uVar5;
      puVar11[3] = uVar17;
      uVar15 = (ulong)uVar17 * (ulong)uVar13;
      uVar12 = uVar15 >> 0x20;
      if (uVar18 == 0) {
        lVar21 = 2;
      }
      else {
        lVar9 = 0;
        do {
          lVar21 = lVar9;
          fVar22 = (float)NEON_ucvtf(*param_1);
          puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
          uVar17 = *puVar11 ^ *puVar11 << 0xb;
          uVar5 = puVar11[3];
          *puVar11 = puVar11[1];
          puVar11[1] = puVar11[2];
          uVar17 = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
          puVar11[2] = uVar5;
          puVar11[3] = uVar17;
          param_1[lVar21 + 3] =
               (int)((((float)(uVar17 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar22 + 0.99999);
          lVar9 = lVar21 + 1;
        } while (uVar18 != (uint)(lVar21 + 1));
        lVar21 = lVar21 + 3;
      }
      uVar18 = (uint)(uVar15 >> 0x20);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar5 = puVar11[3];
      uVar17 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar17 = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
      puVar11[2] = uVar5;
      puVar11[3] = uVar17;
      fVar22 = (float)NEON_ucvtf(*param_1);
      fVar23 = ((float)(uVar17 >> 9 | 0x3f800000) + -1.0) * -0.2 + 0.8;
      piVar16[lVar21] = (int)(fVar23 * fVar22 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar17 = *puVar11 ^ *puVar11 << 0xb;
      uVar5 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar17 = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
      puVar11[2] = uVar5;
      puVar11[3] = uVar17;
      fVar23 = fVar23 + -0.04 + ((float)(uVar17 >> 9 | 0x3f800000) + -1.0) * -0.06;
      fVar22 = (float)NEON_ucvtf(*param_1);
      (piVar16 + lVar21)[1] = (int)(fVar23 * fVar22 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar15 = lVar21 + 2;
      uVar5 = puVar11[3];
      uVar17 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar17 = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
      puVar11[2] = uVar5;
      puVar11[3] = uVar17;
      if ((int)uVar4 < 0) {
        fVar22 = (float)NEON_ucvtf(*param_1);
        piVar16[uVar15] =
             (int)((fVar23 + -0.04 + ((float)(uVar17 >> 9 | 0x3f800000) + -1.0) * -0.06) * fVar22 +
                  0.99999);
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
        uVar15 = lVar21 + 3;
        uVar5 = puVar11[3];
        uVar17 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        puVar11[2] = uVar5;
        puVar11[3] = uVar17 >> 8 ^ uVar5 >> 0x13 ^ uVar17 ^ uVar5;
      }
      uVar17 = (uint)uVar15;
      if (uVar13 != uVar18) {
        iVar14 = uVar18 - uVar13;
        do {
          fVar22 = (float)NEON_ucvtf(*param_1);
          puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
          uVar1 = uVar15 & 0xffffffff;
          uVar5 = puVar11[3];
          uVar20 = (uint)uVar15;
          uVar17 = uVar20 + 1;
          uVar15 = (ulong)uVar17;
          uVar13 = *puVar11 ^ *puVar11 << 0xb;
          *puVar11 = puVar11[1];
          puVar11[1] = puVar11[2];
          piVar19 = piVar16 + uVar1;
          if (0xd < uVar20) {
            piVar19 = piVar16;
          }
          bVar10 = iVar14 != -1;
          iVar14 = iVar14 + 1;
          uVar13 = uVar13 >> 8 ^ uVar5 >> 0x13 ^ uVar13 ^ uVar5;
          puVar11[2] = uVar5;
          puVar11[3] = uVar13;
          *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar22 +
                          0.99999);
        } while (bVar10);
      }
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar5 = puVar11[3];
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar5 >> 0x13 ^ uVar13 ^ uVar5;
      puVar11[2] = uVar5;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + uVar17;
      if (0xd < uVar17) {
        piVar19 = piVar16;
      }
      fVar22 = (float)NEON_ucvtf(*param_1);
      fVar23 = ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.2 + 0.8;
      *piVar19 = (int)(fVar23 * fVar22 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar5 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar5 >> 0x13 ^ uVar13 ^ uVar5;
      puVar11[2] = uVar5;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + (uVar17 + 1);
      if (0xd < uVar17 + 1) {
        piVar19 = piVar16;
      }
      fVar23 = fVar23 + -0.04 + ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.06;
      fVar22 = (float)NEON_ucvtf(*param_1);
      *piVar19 = (int)(fVar23 * fVar22 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar13 = uVar17 + 2;
      uVar20 = puVar11[3];
      uVar5 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar5 = uVar5 >> 8 ^ uVar20 >> 0x13 ^ uVar5 ^ uVar20;
      puVar11[2] = uVar20;
      puVar11[3] = uVar5;
      if (-1 < (int)uVar4) {
        piVar19 = piVar16 + uVar13;
        if (0xd < uVar13) {
          piVar19 = piVar16;
        }
        fVar22 = (float)NEON_ucvtf(*param_1);
        *piVar19 = (int)((fVar23 + -0.04 + ((float)(uVar5 >> 9 | 0x3f800000) + -1.0) * -0.06) *
                         fVar22 + 0.99999);
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
        uVar13 = uVar17 + 3;
        uVar17 = puVar11[3];
        uVar4 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        puVar11[2] = uVar17;
        puVar11[3] = uVar4 >> 8 ^ uVar17 >> 0x13 ^ uVar4 ^ uVar17;
      }
      while (uVar18 != 0) {
        fVar22 = (float)NEON_ucvtf(*param_1);
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
        uVar15 = (ulong)uVar13;
        uVar17 = puVar11[3];
        bVar10 = 0xd < uVar13;
        uVar13 = uVar13 + 1;
        uVar4 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        piVar19 = piVar16 + uVar15;
        if (bVar10) {
          piVar19 = piVar16;
        }
        uVar18 = (int)uVar12 - 1;
        uVar12 = (ulong)uVar18;
        uVar4 = uVar4 >> 8 ^ uVar17 >> 0x13 ^ uVar4 ^ uVar17;
        puVar11[2] = uVar17;
        puVar11[3] = uVar4;
        *piVar19 = (int)((((float)(uVar4 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar22 + 0.99999)
        ;
      }
      break;
    case 1:
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      param_1[0x10] = (int)((ulong)uVar13 * 7 >> 0x20) + 3;
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      if ((uint)param_1[0x10] < 3) {
        uVar12 = 2;
      }
      else {
        piVar19 = param_1 + 3;
        uVar12 = 2;
        fVar22 = ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.05 + 0.9;
        do {
          piVar3 = piVar19;
          if (0xd < uVar12) {
            piVar3 = piVar16;
          }
          fVar23 = (float)NEON_ucvtf(*param_1);
          *piVar3 = (int)(fVar22 * fVar23 + 0.99999);
          puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
          uVar12 = uVar12 + 1;
          uVar4 = puVar11[3];
          piVar19 = piVar19 + 1;
          uVar13 = *puVar11 ^ *puVar11 << 0xb;
          *puVar11 = puVar11[1];
          puVar11[1] = puVar11[2];
          uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
          puVar11[2] = uVar4;
          puVar11[3] = uVar13;
          fVar22 = fVar22 + -0.03 + ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.02;
        } while (uVar12 < (uint)param_1[0x10]);
      }
      fVar22 = (float)NEON_ucvtf(*param_1);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar4 = puVar11[3];
      uVar17 = (uint)uVar12;
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + (uVar12 & 0xffffffff);
      if (0xd < uVar17) {
        piVar19 = piVar16;
      }
      fVar23 = (float)NEON_ucvtf(*param_1);
      *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar22 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar4 = puVar11[3];
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + (uVar17 + 1);
      if (0xd < uVar17 + 1) {
        piVar19 = piVar16;
      }
      fVar22 = (float)NEON_ucvtf(*param_1);
      *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.6 + 1.4) * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar4 = puVar11[3];
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + (uVar17 + 2);
      if (0xd < uVar17 + 2) {
        piVar19 = piVar16;
      }
      fVar23 = (float)NEON_ucvtf(*param_1);
      *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 4.0 + 2.0) * fVar22 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar4 = puVar11[3];
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + (uVar17 + 3);
      if (0xd < uVar17 + 3) {
        piVar19 = piVar16;
      }
      fVar22 = (float)NEON_ucvtf(*param_1);
      *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.6 + 1.4) * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar4 = puVar11[3];
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      piVar19 = piVar16 + (uVar17 + 4);
      if (0xd < uVar17 + 4) {
        piVar19 = piVar16;
      }
      *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar22 + 0.99999);
      uVar12 = (ulong)(uVar17 + 5);
      if (uVar17 + 5 < 0xe) {
        do {
          uVar12 = uVar12 + 1;
          fVar22 = (float)NEON_ucvtf(*param_1);
          puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
          uVar4 = puVar11[3];
          uVar13 = *puVar11 ^ *puVar11 << 0xb;
          *puVar11 = puVar11[1];
          puVar11[1] = puVar11[2];
          uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
          puVar11[2] = uVar4;
          puVar11[3] = uVar13;
          param_1[uVar12] =
               (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.49999997 + 0.4) * fVar22 +
                    0.99999);
        } while ((int)uVar12 != 0xe);
      }
      break;
    case 2:
      puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
      uVar4 = puVar11[3];
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.05 + 0.9;
      param_1[3] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[4] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[5] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[6] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[7] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[8] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[9] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[10] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[0xb] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[0xc] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      fVar22 = (fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02;
      param_1[0xd] = (int)(fVar22 * fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      puVar11[2] = uVar4;
      puVar11[3] = uVar13;
      uVar6 = *(undefined4 *)puVar8;
      fVar23 = (float)NEON_ucvtf(*param_1);
      param_1[0xe] = (int)(((fVar22 + -0.03) - ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.02) *
                           fVar23 + 0.99999);
      puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
      uVar13 = *puVar11 ^ *puVar11 << 0xb;
      uVar4 = puVar11[3];
      *puVar11 = puVar11[1];
      puVar11[1] = puVar11[2];
      puVar11[2] = uVar4;
      puVar11[3] = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
      break;
    case 3:
      goto switchD_02886fe0_caseD_3;
    }
  }
  else {
    pcStack_b8 = "FirstKabuPattern";
    local_c0 = puVar2;
    uVar12 = FUN_0273f0a0(&local_c0);
    if ((uVar12 & 1) != 0) goto LAB_02886fa0;
    local_b0 = puVar7 + 0x10;
    pcStack_a8 = "FirstKabuPattern";
    FUN_0273f3c4(&local_b0,1);
    param_1[2] = *param_1;
    param_1[0xf] = 3;
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[1] = *param_1;
switchD_02886fe0_caseD_3:
    piVar16 = param_1 + 1;
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    uVar17 = puVar11[3];
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar4 = uVar13 ^ uVar17;
    puVar11[2] = uVar17;
    puVar11[3] = uVar13 >> 8 ^ uVar17 >> 0x13 ^ uVar4;
    uVar6 = *(undefined4 *)puVar8;
    param_1[0x10] = (uVar4 >> 0x1d) + 2;
    puVar11 = (uint *)nn::os::GetTlsValue(uVar6);
    uVar4 = puVar11[3];
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    if ((uint)param_1[0x10] < 3) {
      uVar12 = 2;
    }
    else {
      piVar19 = param_1 + 3;
      uVar12 = 2;
      fVar22 = ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.5 + 0.9;
      do {
        piVar3 = piVar19;
        if (0xd < uVar12) {
          piVar3 = piVar16;
        }
        fVar23 = (float)NEON_ucvtf(*param_1);
        *piVar3 = (int)(fVar22 * fVar23 + 0.99999);
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
        uVar12 = uVar12 + 1;
        uVar4 = puVar11[3];
        piVar19 = piVar19 + 1;
        uVar13 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
        puVar11[2] = uVar4;
        puVar11[3] = uVar13;
        fVar22 = fVar22 + -0.03 + ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.02;
      } while (uVar12 < (uint)param_1[0x10]);
    }
    fVar22 = (float)NEON_ucvtf(*param_1);
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar4 = puVar11[3];
    uVar17 = (uint)uVar12;
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    piVar19 = param_1 + (uVar12 & 0xffffffff) + 1;
    if (0xd < uVar17) {
      piVar19 = piVar16;
    }
    fVar23 = (float)NEON_ucvtf(*param_1);
    *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar22 + 0.99999);
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar4 = puVar11[3];
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    piVar19 = param_1 + (ulong)(uVar17 + 1) + 1;
    if (0xd < uVar17 + 1) {
      piVar19 = piVar16;
    }
    *piVar19 = (int)((((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.5 + 0.9) * fVar23 + 0.99999);
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar4 = puVar11[3];
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    piVar19 = param_1 + (ulong)(uVar17 + 3) + 1;
    if (0xd < uVar17 + 3) {
      piVar19 = piVar16;
    }
    fVar22 = ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * 0.6 + 1.4;
    fVar23 = (float)NEON_ucvtf(*param_1);
    *piVar19 = (int)(fVar22 * fVar23 + 0.99999);
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar4 = puVar11[3];
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    fVar22 = fVar22 + -1.4;
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    piVar19 = param_1 + (ulong)(uVar17 + 2) + 1;
    if (0xd < uVar17 + 2) {
      piVar19 = piVar16;
    }
    fVar23 = (float)NEON_ucvtf((int)((fVar22 * ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) + 1.4) *
                                     fVar23 + 0.99999));
    fVar24 = (float)NEON_ucvtf(*param_1);
    *piVar19 = (int)(fVar23 + -1.0);
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    uVar4 = puVar11[3];
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    uVar12 = (ulong)(uVar17 + 5);
    piVar19 = param_1 + (ulong)(uVar17 + 4) + 1;
    if (0xd < uVar17 + 4) {
      piVar19 = piVar16;
    }
    fVar22 = (float)NEON_ucvtf((int)((fVar22 * ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) + 1.4) *
                                     fVar24 + 0.99999));
    *piVar19 = (int)(fVar22 + -1.0);
    puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
    uVar4 = puVar11[3];
    uVar13 = *puVar11 ^ *puVar11 << 0xb;
    *puVar11 = puVar11[1];
    puVar11[1] = puVar11[2];
    uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
    puVar11[2] = uVar4;
    puVar11[3] = uVar13;
    if (uVar17 + 5 < 0xe) {
      fVar22 = ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.5 + 0.9;
      do {
        uVar12 = uVar12 + 1;
        fVar23 = (float)NEON_ucvtf(*param_1);
        param_1[uVar12] = (int)(fVar22 * fVar23 + 0.99999);
        puVar11 = (uint *)nn::os::GetTlsValue(*(undefined4 *)puVar8);
        uVar4 = puVar11[3];
        uVar13 = *puVar11 ^ *puVar11 << 0xb;
        *puVar11 = puVar11[1];
        puVar11[1] = puVar11[2];
        uVar13 = uVar13 >> 8 ^ uVar4 >> 0x13 ^ uVar13 ^ uVar4;
        puVar11[2] = uVar4;
        puVar11[3] = uVar13;
        fVar22 = fVar22 + -0.03 + ((float)(uVar13 >> 9 | 0x3f800000) + -1.0) * -0.02;
      } while ((int)uVar12 != 0xe);
    }
  }
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}

