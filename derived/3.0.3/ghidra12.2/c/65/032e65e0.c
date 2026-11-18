
ulong FUN_032e65e0(KeyboardState *param_1)

{
  long lVar1;
  KeyboardState *pKVar2;
  KeyboardState KVar3;
  uint uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ulong uVar7;
  undefined4 uVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  KeyboardState *pKVar13;
  ulong uVar14;
  KeyboardState *pKVar15;
  ulong uVar16;
  KeyboardState *pKVar17;
  ulong uVar18;
  undefined4 uVar19;
  uint uVar20;
  ulong uVar21;
  ulong uVar22;
  int *piVar23;
  ulong uVar24;
  uint uVar25;
  ulong uVar26;
  int iVar27;
  int local_3c [3];
  
  if (((((param_1[0x16d8] == (KeyboardState)0x0) || (param_1[0x16da] == (KeyboardState)0x0)) ||
       (*(long *)(DAT_0572c460 + 0x18) != *(long *)(DAT_0572c460 + 0x10))) ||
      (((*(long *)PTR_DAT_04bc1118 != 0 &&
        (lVar12 = *(long *)(*(long *)(*(long *)PTR_DAT_04bc1118 + 0x20) + 0x6e0), lVar12 != 0)) &&
       ((puVar5 = *(undefined8 **)(lVar12 + 8), puVar5 != (undefined8 *)0x0 &&
        ((*(char *)(puVar5 + 0x2be) != '\0' || (uVar6 = (**(code **)*puVar5)(), (uVar6 & 1) != 0))))
       )))) || (nn::hid::GetKeyboardState(param_1), ((byte)param_1[0xc] & 1) == 0)) {
    return 0;
  }
  uVar6 = *(ulong *)(param_1 + 0x28);
  uVar14 = *(ulong *)(param_1 + 0x10);
  uVar24 = *(ulong *)(param_1 + 0x18);
  uVar10 = *(ulong *)(param_1 + 0x20);
  uVar26 = *(ulong *)(param_1 + 0x38);
  uVar7 = uVar24 & (uVar26 ^ 0xffffffffffffffff);
  uVar18 = uVar10 & (*(ulong *)(param_1 + 0x40) ^ 0xffffffffffffffff);
  uVar16 = uVar6 & (*(ulong *)(param_1 + 0x48) ^ 0xffffffffffffffff);
  uVar21 = uVar14 & (*(ulong *)(param_1 + 0x30) ^ 0xffffffffffffffff);
  uVar22 = *(ulong *)(param_1 + 0x30) & (uVar14 ^ 0xffffffffffffffff);
  *(ulong *)(param_1 + 0x30) = uVar14;
  *(ulong *)(param_1 + 0x38) = uVar24;
  pKVar13 = param_1 + 0x50;
  *(ulong *)pKVar13 = uVar21;
  *(ulong *)(param_1 + 0x70) = uVar22;
  uVar26 = uVar26 & (uVar24 ^ 0xffffffffffffffff);
  uVar14 = *(ulong *)(param_1 + 0x40) & (uVar10 ^ 0xffffffffffffffff);
  uVar24 = *(ulong *)(param_1 + 0x48) & (uVar6 ^ 0xffffffffffffffff);
  pKVar15 = param_1 + 0x90;
  *(undefined8 *)pKVar15 = 0;
  *(ulong *)(param_1 + 0x40) = uVar10;
  *(ulong *)(param_1 + 0x48) = uVar6;
  *(ulong *)(param_1 + 0x58) = uVar7;
  *(ulong *)(param_1 + 0x60) = uVar18;
  *(ulong *)(param_1 + 0x68) = uVar16;
  *(ulong *)(param_1 + 0x78) = uVar26;
  *(ulong *)(param_1 + 0x80) = uVar14;
  *(ulong *)(param_1 + 0x88) = uVar24;
  *(undefined8 *)(param_1 + 0xa0) = 0;
  *(undefined8 *)(param_1 + 0xa8) = 0;
  *(undefined8 *)(param_1 + 0x98) = 0;
  uVar6 = 0;
  do {
    uVar10 = uVar6 >> 6 & 3;
    uVar11 = 1L << (uVar6 & 0x3f);
    if ((uVar11 & *(ulong *)(param_1 + 0x10 + uVar10 * 8)) == 0) {
      iVar9 = 0;
    }
    else {
      uVar20 = *(uint *)(param_1 + uVar6 * 4 + 0xd0);
      KVar3 = param_1[uVar6 + 0x5d0];
      if ((KVar3 != (KeyboardState)0x0) &&
         (uVar25 = uVar20 - (byte)param_1[uVar6 + 0x4d0], (byte)param_1[uVar6 + 0x4d0] <= uVar20)) {
        uVar4 = 0;
        if (KVar3 != (KeyboardState)0x0) {
          uVar4 = uVar25 / (byte)KVar3;
        }
        if (uVar25 == uVar4 * (byte)KVar3) {
          lVar12 = uVar10 * 8;
          *(ulong *)(pKVar15 + lVar12) = *(ulong *)(pKVar15 + lVar12) | uVar11;
        }
      }
      iVar9 = uVar20 + 1;
    }
    uVar10 = uVar6 + 1;
    *(int *)(param_1 + uVar6 * 4 + 0xd0) = iVar9;
    uVar6 = uVar10;
  } while (uVar10 != 0x100);
  uVar7 = uVar7 - (uVar7 >> 1 & 0x5555555555555555);
  uVar6 = uVar21 - (uVar21 >> 1 & 0x5555555555555555);
  uVar18 = uVar18 - (uVar18 >> 1 & 0x5555555555555555);
  uVar6 = (uVar6 & 0x3333333333333333) + (uVar6 >> 2 & 0x3333333333333333);
  uVar10 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  uVar7 = (uVar18 & 0x3333333333333333) + (uVar18 >> 2 & 0x3333333333333333);
  uVar16 = uVar16 - (uVar16 >> 1 & 0x5555555555555555);
  uVar16 = (uVar16 & 0x3333333333333333) + (uVar16 >> 2 & 0x3333333333333333);
  local_3c[2] = (uint)(byte)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38) +
                (uint)(byte)((uVar6 + (uVar6 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                + (uint)(byte)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38) +
                  (uint)(byte)((uVar16 + (uVar16 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
  if (local_3c[2] != 0) {
    uVar6 = 0;
    iVar9 = local_3c[2];
    do {
      uVar10 = 1L << (uVar6 & 0x3f);
      if ((uVar10 & *(ulong *)(pKVar13 + (uVar6 >> 6) * 8)) != 0) {
        lVar12 = (uVar6 >> 6) * 8;
        iVar9 = iVar9 + -1;
        uVar16 = *(ulong *)(param_1 + lVar12 + 0xb0);
        uVar7 = uVar16 | uVar10;
        if ((uVar16 & uVar10) != 0) {
          uVar7 = uVar16 & (uVar10 ^ 0xffffffffffffffff);
        }
        *(ulong *)(param_1 + lVar12 + 0xb0) = uVar7;
      }
    } while (((uint)uVar6 < 0xff) && (uVar6 = (ulong)((uint)uVar6 + 1), 0 < iVar9));
  }
  pKVar17 = param_1 + 0xb0;
  uVar6 = *(ulong *)pKVar17;
  uVar20 = *(uint *)(param_1 + 0x6d0);
  uVar8 = *(undefined4 *)(param_1 + 8);
  *(ulong *)pKVar17 =
       uVar6 & 0xfc00000000000000 |
       uVar6 & 0x1ffffffffffffff | (ulong)((uVar20 & 0x100) >> 8) << 0x39;
  *(ulong *)(param_1 + 0xb8) =
       *(ulong *)(param_1 + 0xb8) & 0xfffffffffff7ff7f |
       (ulong)(uVar20 >> 2) & 0x80 | ((ulong)(uVar20 >> 10) & 1) << 0x13;
  *(undefined4 *)(param_1 + 0x6d0) = uVar8;
  lVar12 = 0;
  do {
    lVar1 = lVar12 + 0x40;
    param_1[lVar12 + 0x6dc] = (KeyboardState)0x0;
    *(undefined4 *)(param_1 + lVar12 + 0x6e0) = 0;
    *(undefined8 *)(param_1 + lVar12 + 0x6d4) = 0;
    param_1[lVar12 + 0x6ec] = (KeyboardState)0x0;
    *(undefined8 *)(param_1 + lVar12 + 0x6e4) = 0;
    *(undefined4 *)(param_1 + lVar12 + 0x6f0) = 0;
    *(undefined8 *)(param_1 + lVar12 + 0x6f4) = 0;
    param_1[lVar12 + 0x6fc] = (KeyboardState)0x0;
    *(undefined4 *)(param_1 + lVar12 + 0x700) = 0;
    param_1[lVar12 + 0x70c] = (KeyboardState)0x0;
    *(undefined8 *)(param_1 + lVar12 + 0x704) = 0;
    *(undefined4 *)(param_1 + lVar12 + 0x710) = 0;
    lVar12 = lVar1;
  } while (lVar1 != 0x1000);
  if (param_1[0x16db] == (KeyboardState)0x0) {
    return 0;
  }
  uVar10 = uVar22 - (uVar22 >> 1 & 0x5555555555555555);
  uVar14 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar26 = uVar26 - (uVar26 >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
  uVar24 = uVar24 - (uVar24 >> 1 & 0x5555555555555555);
  uVar7 = (uVar14 & 0x3333333333333333) + (uVar14 >> 2 & 0x3333333333333333);
  uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
  local_3c[1] = (uint)(byte)((uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38) +
                (uint)(byte)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38) +
                (uint)(byte)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
                + (uint)(byte)((uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                              0x38);
  uVar14 = *(ulong *)(param_1 + 0x90);
  uVar24 = uVar14 - (uVar14 >> 1 & 0x5555555555555555);
  uVar24 = (uVar24 & 0x3333333333333333) + (uVar24 >> 2 & 0x3333333333333333);
  uVar26 = *(ulong *)(param_1 + 0x98) - (*(ulong *)(param_1 + 0x98) >> 1 & 0x5555555555555555);
  uVar26 = (uVar26 & 0x3333333333333333) + (uVar26 >> 2 & 0x3333333333333333);
  uVar10 = *(ulong *)(param_1 + 0xa0) - (*(ulong *)(param_1 + 0xa0) >> 1 & 0x5555555555555555);
  uVar10 = (uVar10 & 0x3333333333333333) + (uVar10 >> 2 & 0x3333333333333333);
  uVar7 = *(ulong *)(param_1 + 0xa8) - (*(ulong *)(param_1 + 0xa8) >> 1 & 0x5555555555555555);
  uVar7 = (uVar7 & 0x3333333333333333) + (uVar7 >> 2 & 0x3333333333333333);
  local_3c[0] = (uint)(byte)((uVar26 + (uVar26 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38) +
                (uint)(byte)((uVar24 + (uVar24 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38) +
                (uint)(byte)((uVar10 + (uVar10 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >>
                            0x38) +
                (uint)(byte)((uVar7 + (uVar7 >> 4) & 0xf0f0f0f0f0f0f0f) * 0x101010101010101 >> 0x38)
  ;
  iVar9 = local_3c[1] + local_3c[2] + local_3c[0];
  if ((local_3c[2] == 0) || ((uVar21 >> 0x28 & 1) == 0)) {
    if ((local_3c[1] == 0) || ((uVar22 >> 0x28 & 1) == 0)) {
      uVar24 = 0;
      if ((local_3c[0] == 0) || ((uVar14 >> 0x28 & 1) == 0)) goto LAB_032e6b5c;
      uVar19 = 0x100;
      piVar23 = local_3c;
      iVar27 = local_3c[0];
    }
    else {
      uVar19 = 2;
      piVar23 = local_3c + 1;
      iVar27 = local_3c[1];
    }
  }
  else {
    uVar19 = 1;
    piVar23 = local_3c + 2;
    iVar27 = local_3c[2];
  }
  *(undefined4 *)(param_1 + 0x6d4) = uVar19;
  iVar9 = iVar9 + -1;
  param_1[0x6dc] = (KeyboardState)((byte)(uVar6 >> 0x28) & 1);
  uVar24 = 1;
  *piVar23 = iVar27 + -1;
  *(undefined4 *)(param_1 + 0x6d8) = uVar8;
  *(undefined4 *)(param_1 + 0x6e0) = 0x28;
LAB_032e6b5c:
  if (iVar9 < 1) {
    return uVar24;
  }
  uVar26 = 0;
  uVar6 = uVar24;
  do {
    uVar20 = (uint)uVar26;
    if (uVar20 != 0x28) {
      uVar10 = (ulong)(uVar20 >> 6);
      if (local_3c[2] < 1) {
LAB_032e6ba4:
        if ((local_3c[1] < 1) ||
           (uVar7 = 1L << (uVar26 & 0x3f), (*(ulong *)(param_1 + 0x70 + uVar10 * 8) & uVar7) == 0))
        {
          if ((local_3c[0] < 1) ||
             (uVar7 = 1L << (uVar26 & 0x3f), (*(ulong *)(pKVar15 + uVar10 * 8) & uVar7) == 0))
          goto LAB_032e6c2c;
          uVar8 = 0x100;
          piVar23 = local_3c;
          iVar27 = local_3c[0];
        }
        else {
          uVar8 = 2;
          piVar23 = local_3c + 1;
          iVar27 = local_3c[1];
        }
      }
      else {
        uVar8 = 1;
        uVar7 = 1L << (uVar26 & 0x3f);
        if ((*(ulong *)(pKVar13 + uVar10 * 8) & uVar7) == 0) goto LAB_032e6ba4;
        piVar23 = local_3c + 2;
        iVar27 = local_3c[2];
      }
      uVar26 = *(ulong *)(pKVar17 + uVar10 * 8);
      *piVar23 = iVar27 + -1;
      uVar19 = *(undefined4 *)(param_1 + 0x6d0);
      lVar12 = uVar24 * 0x10;
      iVar9 = iVar9 + -1;
      uVar25 = (uint)uVar24;
      uVar24 = (ulong)(uVar25 + 1);
      pKVar2 = param_1 + 0x6d4 + lVar12;
      if (0xff < uVar25) {
        pKVar2 = param_1 + 0x6d4;
      }
      *(undefined4 *)pKVar2 = uVar8;
      *(undefined4 *)(pKVar2 + 4) = uVar19;
      uVar6 = 1;
      pKVar2[8] = (KeyboardState)((uVar26 & uVar7) != 0);
      *(uint *)(pKVar2 + 0xc) = uVar20;
    }
LAB_032e6c2c:
    if (0xfe < uVar20) {
      return uVar6;
    }
    uVar26 = (ulong)(uVar20 + 1);
    if (iVar9 < 1) {
      return uVar6;
    }
  } while( true );
}

